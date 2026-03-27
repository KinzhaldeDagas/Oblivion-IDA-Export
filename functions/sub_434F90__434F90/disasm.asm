0x434F90: push    esi
0x434F91: mov     esi, ecx
0x434F93: mov     eax, [esi+24h]
0x434F96: test    eax, eax
0x434F98: jz      short loc_434FAC
0x434F9A: mov     ecx, [esi+28h]
0x434F9D: push    ecx
0x434F9E: mov     ecx, dword_B35300
0x434FA4: push    eax
0x434FA5: call    sub_4A1F90
0x434FAA: jmp     short loc_434FC7
0x434FAC: mov     eax, [esi+20h]
0x434FAF: test    eax, eax
0x434FB1: jz      short loc_434FC7
0x434FB3: mov     ecx, dword_B35300
0x434FB9: mov     edx, [ecx]
0x434FBB: push    edi
0x434FBC: mov     edi, [esi+28h]
0x434FBF: push    edi
0x434FC0: push    eax
0x434FC1: mov     eax, [edx+8]
0x434FC4: call    eax
0x434FC6: pop     edi
0x434FC7: mov     edx, [esi]
0x434FC9: mov     eax, [edx+28h]
0x434FCC: mov     ecx, esi
0x434FCE: pop     esi
0x434FCF: jmp     eax
