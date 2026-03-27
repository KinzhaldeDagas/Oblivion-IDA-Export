0x6D74D0: push    ebp
0x6D74D1: mov     ebp, [esp+4+a2]
0x6D74D5: test    ebp, ebp
0x6D74D7: push    esi
0x6D74D8: mov     esi, ecx
0x6D74DA: jnz     short loc_6D74E3
0x6D74DC: pop     esi
0x6D74DD: xor     al, al
0x6D74DF: pop     ebp
0x6D74E0: retn    4
0x6D74E3: push    ebp; a2
0x6D74E4: call    sub_700670
0x6D74E9: test    al, al
0x6D74EB: jz      short loc_6D74DC
0x6D74ED: push    ebx
0x6D74EE: mov     ebx, [esi+0Ch]
0x6D74F1: cmp     ebx, [ebp+0Ch]
0x6D74F4: jz      short loc_6D74FE
0x6D74F6: pop     ebx
0x6D74F7: pop     esi
0x6D74F8: xor     al, al
0x6D74FA: pop     ebp
0x6D74FB: retn    4
0x6D74FE: push    edi
0x6D74FF: xor     edi, edi
0x6D7501: test    ebx, ebx
0x6D7503: jbe     short loc_6D7529
0x6D7505: mov     esi, [esi+10h]
0x6D7508: mov     ebp, [ebp+10h]
0x6D750B: sub     ebp, esi
0x6D750D: lea     ecx, [ecx+0]
0x6D7510: lea     eax, [esi+ebp]
0x6D7513: push    eax
0x6D7514: mov     ecx, esi
0x6D7516: call    sub_6D73F0
0x6D751B: test    al, al
0x6D751D: jnz     short loc_6D7532
0x6D751F: add     edi, 1
0x6D7522: add     esi, 8
0x6D7525: cmp     edi, ebx
0x6D7527: jb      short loc_6D7510
0x6D7529: pop     edi
0x6D752A: pop     ebx
0x6D752B: pop     esi
0x6D752C: mov     al, 1
0x6D752E: pop     ebp
0x6D752F: retn    4
0x6D7532: pop     edi
0x6D7533: pop     ebx
0x6D7534: pop     esi
0x6D7535: xor     al, al
0x6D7537: pop     ebp
0x6D7538: retn    4
