0x468670: push    esi
0x468671: mov     esi, [esp+4+arg_0]
0x468675: push    edi
0x468676: xor     edi, edi
0x468678: test    esi, esi
0x46867A: jz      short sub_4686B7
0x46867C: push    1; a2
0x46867E: mov     ecx, esi; this
0x468680: call    Actor_GetActorBaseForm
0x468685: test    eax, eax
0x468687: jz      short sub_4686B7
0x468689: add     eax, 68h ; 'h'
0x46868C: jz      short sub_4686B7
0x46868E: cmp     [eax+14h], edi
0x468691: jnz     short loc_4686A7
0x468693: cmp     [eax+10h], edi
0x468696: jnz     short loc_4686A7
0x468698: push    edi; a2
0x468699: mov     ecx, esi; this
0x46869B: call    Actor_GetActorBaseForm
0x4686A0: test    eax, eax
0x4686A2: jz      short sub_4686B7
0x4686A4: add     eax, 68h ; 'h'
0x4686A7: test    eax, eax
0x4686A9: jz      short sub_4686B7
0x4686AB: push    esi
0x4686AC: lea     ecx, [eax+10h]
0x4686AF: call    sub_569020
0x4686B4: pop     edi
0x4686B5: pop     esi
0x4686B6: retn
