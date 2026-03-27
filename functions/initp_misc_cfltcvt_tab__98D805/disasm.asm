0x98D805: push    esi
0x98D806: push    edi
0x98D807: xor     edi, edi
0x98D809: lea     esi, off_B312A0[edi]
0x98D80F: push    dword ptr [esi]
0x98D811: call    __encode_pointer
0x98D816: add     edi, 4
0x98D819: cmp     edi, 28h ; '('
0x98D81C: pop     ecx
0x98D81D: mov     [esi], eax
0x98D81F: jb      short loc_98D809
0x98D821: pop     edi
0x98D822: pop     esi
0x98D823: retn
