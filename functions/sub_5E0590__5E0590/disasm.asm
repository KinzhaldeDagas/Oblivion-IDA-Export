0x5E0590: cmp     dword ptr [ecx+58h], 0
0x5E0594: jz      short loc_5E05AA
0x5E0596: mov     ecx, [ecx+58h]
0x5E0599: mov     eax, [ecx]
0x5E059B: mov     edx, [eax+2C0h]
0x5E05A1: call    edx
0x5E05A3: test    al, 30h
0x5E05A5: jz      short loc_5E05AA
0x5E05A7: mov     al, 1
0x5E05A9: retn
0x5E05AA: xor     al, al
0x5E05AC: retn
