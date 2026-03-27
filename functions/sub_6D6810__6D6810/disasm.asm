0x6D6810: push    esi
0x6D6811: push    edi
0x6D6812: mov     edi, [esp+8+arg_0]
0x6D6816: push    edi
0x6D6817: mov     esi, ecx
0x6D6819: call    sub_6EC2C0
0x6D681E: test    al, al
0x6D6820: jnz     short loc_6D6827
0x6D6822: pop     edi
0x6D6823: pop     esi
0x6D6824: retn    4
0x6D6827: mov     ecx, [esi+2Ch]
0x6D682A: test    ecx, ecx
0x6D682C: jz      short loc_6D6836
0x6D682E: mov     eax, [ecx]
0x6D6830: mov     edx, [eax+24h]
0x6D6833: push    edi
0x6D6834: call    edx
0x6D6836: pop     edi
0x6D6837: mov     al, 1
0x6D6839: pop     esi
0x6D683A: retn    4
