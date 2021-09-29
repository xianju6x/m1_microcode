#!/usr/bin/env python3

tf = open('./prombits.h').readlines()
sf = open('./fall.h').readlines()

def gather_dict(raw_list):
    fall_all = []
    length = len(raw_list)
    i = 0
    while i < length-2:
        if 'FALLTHRU' in raw_list[i]:
            fall_dict ={}
            key = raw_list[i].split()[0]
            fall_dict[key] = []
            while 'FALLTHRU' in raw_list[i]:
                fall_dict[key].append(raw_list[i+1].split()[0])
                i += 1
            fall_all.append(fall_dict)
        i += 1
    return fall_all

fall_all = gather_dict(sf)

def override_target():
    for i in fall_all:
        line_no = int(list(i.keys())[0],16)
        values = list(i.values())[0]
        for v in values:
            tf[line_no] = tf[line_no].replace('FALLTHRU',v)
            line_no += 1

override_target()

with open('./new_prombits.h','+w') as fp:
    for l in tf:
        fp.write(l)
    

