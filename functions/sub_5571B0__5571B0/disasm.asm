0x5571B0: mov     eax, [esp+arg_0]
0x5571B4: push    esi
0x5571B5: mov     esi, ecx
0x5571B7: xor     ecx, ecx
0x5571B9: cmp     eax, ecx
0x5571BB: mov     [esi+4], ecx
0x5571BE: mov     [esi+8], ecx
0x5571C1: mov     [esi+0Ch], ecx
0x5571C4: jnz     short loc_5571CC
0x5571C6: xor     al, al
0x5571C8: pop     esi
0x5571C9: retn    4
0x5571CC: cmp     eax, 0FFFFFFFFh
0x5571CF: jbe     short loc_5571D6
0x5571D1: call    sub_790B90
0x5571D6: push    edi
0x5571D7: lea     edi, [eax+eax*2]
0x5571DA: add     edi, edi
0x5571DC: push    edi; Size
0x5571DD: call    FormHeapAlloc
0x5571E2: add     edi, eax
0x5571E4: add     esp, 4
0x5571E7: mov     [esi+0Ch], edi
0x5571EA: mov     [esi+4], eax
0x5571ED: mov     [esi+8], eax
0x5571F0: pop     edi
0x5571F1: mov     al, 1
0x5571F3: pop     esi
0x5571F4: retn    4
