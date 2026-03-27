0x7239B0: mov     eax, [esp+arg_4]
0x7239B4: push    esi
0x7239B5: push    edi
0x7239B6: mov     edi, [esp+8+arg_0]
0x7239BA: push    eax
0x7239BB: push    edi
0x7239BC: mov     esi, ecx
0x7239BE: call    sub_723EF0
0x7239C3: mov     ecx, [esi+0FCh]
0x7239C9: test    ecx, ecx
0x7239CB: jz      short loc_7239E1
0x7239CD: mov     edx, [ecx]
0x7239CF: mov     eax, [edx+54h]
0x7239D2: call    eax
0x7239D4: push    eax
0x7239D5: mov     ecx, edi
0x7239D7: call    sub_723750
0x7239DC: pop     edi
0x7239DD: pop     esi
0x7239DE: retn    8
0x7239E1: mov     esi, [edi+0FCh]
0x7239E7: test    esi, esi
0x7239E9: jz      short loc_723A11
0x7239EB: lea     ecx, [esi+4]
0x7239EE: push    ecx; lpAddend
0x7239EF: call    dword ptr ds:0A2807Ch
0x7239F5: test    eax, eax
0x7239F7: jnz     short loc_723A07
0x7239F9: test    esi, esi
0x7239FB: jz      short loc_723A07
0x7239FD: mov     edx, [esi]
0x7239FF: mov     eax, [edx]
0x723A01: push    1
0x723A03: mov     ecx, esi
0x723A05: call    eax
0x723A07: mov     dword ptr [edi+0FCh], 0
0x723A11: pop     edi
0x723A12: pop     esi
0x723A13: retn    8
