0x77D840: push    esi
0x77D841: mov     esi, [esp+4+arg_0]
0x77D845: push    edi
0x77D846: mov     edi, [esp+8+arg_4]
0x77D84A: cmp     edi, [esi+1Ch]
0x77D84D: jnb     short loc_77D87F
0x77D84F: mov     eax, [esi+24h]
0x77D852: mov     eax, [eax+edi*4]
0x77D855: test    eax, eax
0x77D857: jz      short loc_77D87F
0x77D859: cmp     dword ptr [eax+8], 0
0x77D85D: jz      short loc_77D870
0x77D85F: mov     ecx, [eax+4]
0x77D862: mov     edx, [eax]
0x77D864: mov     eax, [ecx+4]
0x77D867: mov     ecx, [ecx]
0x77D869: push    edx
0x77D86A: push    eax
0x77D86B: call    sub_77D560
0x77D870: cmp     edi, [esi+1Ch]
0x77D873: jnb     short loc_77D87F
0x77D875: mov     ecx, [esi+24h]
0x77D878: mov     dword ptr [ecx+edi*4], 0
0x77D87F: pop     edi
0x77D880: pop     esi
0x77D881: retn    8
