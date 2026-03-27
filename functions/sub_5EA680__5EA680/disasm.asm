0x5EA680: push    ebx
0x5EA681: push    esi
0x5EA682: mov     esi, ecx
0x5EA684: mov     eax, [esi]
0x5EA686: mov     edx, [eax+170h]
0x5EA68C: mov     bl, 1
0x5EA68E: call    edx
0x5EA690: cmp     byte ptr [eax+4], 23h ; '#'
0x5EA694: jz      short loc_5EA6A6
0x5EA696: mov     ecx, esi
0x5EA698: call    sub_5E1E90
0x5EA69D: test    al, al
0x5EA69F: jz      short loc_5EA6A6
0x5EA6A1: pop     esi
0x5EA6A2: xor     al, al
0x5EA6A4: pop     ebx
0x5EA6A5: retn
0x5EA6A6: pop     esi
0x5EA6A7: mov     al, bl
0x5EA6A9: pop     ebx
0x5EA6AA: retn
