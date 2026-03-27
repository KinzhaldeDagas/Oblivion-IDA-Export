0x65D830: push    esi
0x65D831: mov     esi, ecx
0x65D833: mov     ecx, [esi+5F4h]
0x65D839: test    ecx, ecx
0x65D83B: jnz     short loc_65D841
0x65D83D: xor     eax, eax
0x65D83F: pop     esi
0x65D840: retn
0x65D841: cmp     byte ptr [esi+117h], 0
0x65D848: push    edi
0x65D849: jnz     short loc_65D85B
0x65D84B: lea     edi, [esi+5F8h]
0x65D851: push    edi
0x65D852: call    sub_5299B0
0x65D857: test    al, al
0x65D859: jnz     short loc_65D874
0x65D85B: mov     ecx, [esi+5F4h]
0x65D861: lea     edi, [esi+5F8h]
0x65D867: push    edi
0x65D868: call    sub_529A20
0x65D86D: mov     byte ptr [esi+117h], 0
0x65D874: mov     eax, edi
0x65D876: pop     edi
0x65D877: pop     esi
0x65D878: retn
