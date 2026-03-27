0x660450: push    esi
0x660451: mov     esi, ecx
0x660453: mov     eax, [esi+5F4h]
0x660459: mov     ecx, [esp+4+arg_0]
0x66045D: cmp     ecx, eax
0x66045F: jz      short loc_66048A
0x660461: test    ecx, ecx
0x660463: mov     [esi+5F4h], ecx
0x660469: jz      short loc_66047B
0x66046B: add     esi, 5F8h
0x660471: push    esi
0x660472: call    sub_529A20
0x660477: pop     esi
0x660478: retn    4
0x66047B: lea     ecx, [esi+5F8h]
0x660481: call    BSSimpleList_Clear
0x660486: pop     esi
0x660487: retn    4
0x66048A: test    eax, eax
0x66048C: jz      short loc_6604AE
0x66048E: push    edi
0x66048F: lea     edi, [esi+5F8h]
0x660495: push    edi
0x660496: mov     ecx, eax
0x660498: call    sub_5299B0
0x66049D: test    al, al
0x66049F: jnz     short loc_6604AD
0x6604A1: mov     ecx, [esi+5F4h]
0x6604A7: push    edi
0x6604A8: call    sub_529A20
0x6604AD: pop     edi
0x6604AE: pop     esi
0x6604AF: retn    4
