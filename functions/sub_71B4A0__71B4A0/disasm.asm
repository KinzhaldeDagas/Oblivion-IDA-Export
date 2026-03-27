0x71B4A0: push    esi
0x71B4A1: mov     esi, [esp+4+arg_0]
0x71B4A5: xor     eax, eax
0x71B4A7: lea     edx, [ecx+14h]
0x71B4AA: lea     ebx, [ebx+0]
0x71B4B0: cmp     [edx], esi
0x71B4B2: jz      short loc_71B4C5
0x71B4B4: add     eax, 1
0x71B4B7: add     edx, 0Ch
0x71B4BA: cmp     eax, 4
0x71B4BD: jb      short loc_71B4B0
0x71B4BF: xor     al, al
0x71B4C1: pop     esi
0x71B4C2: retn    4
0x71B4C5: lea     eax, [eax+eax*2]
0x71B4C8: mov     al, [ecx+eax*4+1Ch]
0x71B4CC: pop     esi
0x71B4CD: retn    4
