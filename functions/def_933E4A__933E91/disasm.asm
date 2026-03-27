0x933E91: cmp     esi, [esp+arg_18]; jumptable 00933E4A default case
0x933E95: jb      short loc_933E40
0x933E97: mov     eax, [ebp+8]
0x933E9A: mov     ecx, [esp+arg_14]
0x933E9E: mov     edx, [eax]
0x933EA0: mov     eax, [ecx+edx]
0x933EA3: add     ecx, 4
0x933EA6: mov     [esp+arg_14], ecx
0x933EAA: mov     ecx, [eax]
0x933EAC: lea     edx, [ecx+eax+10h]
0x933EB0: lea     esi, [eax+10h]
0x933EB3: mov     [esp+arg_18], edx
0x933EB7: jmp     short loc_933E40
