0x6B6AA0: cmp     dword ptr [ecx+50h], 0
0x6B6AA4: jz      short loc_6B6AB2
0x6B6AA6: mov     eax, [ecx+50h]
0x6B6AA9: mov     ecx, [eax]
0x6B6AAB: mov     edx, [ecx+48h]
0x6B6AAE: push    eax
0x6B6AAF: call    edx
0x6B6AB1: retn
0x6B6AB2: mov     eax, 80004005h
0x6B6AB7: retn
