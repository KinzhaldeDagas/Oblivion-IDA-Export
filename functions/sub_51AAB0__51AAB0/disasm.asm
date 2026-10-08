0x51AAB0: mov     edx, [ecx+14h]; TESAnimGroup movement-vector getter. Copies the three float movement components stored at TESAnimGroup +0x14/+0x18/+0x1C.
0x51AAB3: mov     eax, [esp+arg_0]
0x51AAB7: mov     [eax], edx
0x51AAB9: mov     edx, [ecx+18h]
0x51AABC: mov     ecx, [ecx+1Ch]
0x51AABF: mov     [eax+4], edx
0x51AAC2: mov     [eax+8], ecx
0x51AAC5: retn    4
