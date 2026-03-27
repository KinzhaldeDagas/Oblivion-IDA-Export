0x6D57C0: push    esi
0x6D57C1: mov     esi, [esp+4+arg_0]
0x6D57C5: push    edi
0x6D57C6: push    esi
0x6D57C7: mov     edi, ecx
0x6D57C9: call    sub_715820
0x6D57CE: test    al, al
0x6D57D0: jnz     short loc_6D57D9
0x6D57D2: pop     edi
0x6D57D3: xor     al, al
0x6D57D5: pop     esi
0x6D57D6: retn    4
0x6D57D9: mov     ax, [edi+4Ch]
0x6D57DD: cmp     ax, [esi+4Ch]
0x6D57E1: jnz     short loc_6D57D2
0x6D57E3: mov     esi, [esi+50h]
0x6D57E6: mov     ecx, [edi+50h]
0x6D57E9: test    esi, esi
0x6D57EB: setz    dl
0x6D57EE: test    ecx, ecx
0x6D57F0: setz    al
0x6D57F3: cmp     al, dl
0x6D57F5: jnz     short loc_6D57D2
0x6D57F7: test    ecx, ecx
0x6D57F9: jz      short loc_6D5807
0x6D57FB: mov     edx, [ecx]
0x6D57FD: mov     eax, [edx+2Ch]
0x6D5800: push    esi
0x6D5801: call    eax
0x6D5803: test    al, al
0x6D5805: jz      short loc_6D57D2
0x6D5807: pop     edi
0x6D5808: mov     al, 1
0x6D580A: pop     esi
0x6D580B: retn    4
