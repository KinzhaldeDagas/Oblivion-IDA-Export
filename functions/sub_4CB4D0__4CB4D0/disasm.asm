0x4CB4D0: push    esi
0x4CB4D1: push    edi
0x4CB4D2: mov     edi, ecx
0x4CB4D4: push    edi; a2
0x4CB4D5: mov     ecx, offset stru_B35C80; this
0x4CB4DA: call    sub_496EA0
0x4CB4DF: lea     esi, [edi+48h]
0x4CB4E2: test    esi, esi
0x4CB4E4: jz      short loc_4CB507
0x4CB4E6: mov     ecx, [esi]
0x4CB4E8: test    ecx, ecx
0x4CB4EA: mov     esi, [esi+4]
0x4CB4ED: jz      short loc_4CB503
0x4CB4EF: cmp     ecx, ds:0B333C4h
0x4CB4F5: jz      short loc_4CB503
0x4CB4F7: mov     eax, [ecx]
0x4CB4F9: mov     edx, [eax+150h]
0x4CB4FF: push    0
0x4CB501: call    edx
0x4CB503: test    esi, esi
0x4CB505: jnz     short loc_4CB4E6
0x4CB507: push    edi; a2
0x4CB508: mov     ecx, offset stru_B35C80; this
0x4CB50D: call    sub_496F50
0x4CB512: pop     edi
0x4CB513: pop     esi
0x4CB514: retn
