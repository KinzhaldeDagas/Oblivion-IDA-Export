0x78C860: push    ecx
0x78C861: push    ebx
0x78C862: push    ebp
0x78C863: mov     ebp, [esp+0Ch+arg_4]
0x78C867: push    esi
0x78C868: mov     esi, ecx
0x78C86A: push    edi
0x78C86B: mov     edi, [esi+4]
0x78C86E: test    edi, edi
0x78C870: jz      short loc_78C87B
0x78C872: mov     eax, [esi+8]
0x78C875: mov     ecx, eax
0x78C877: sub     ecx, edi
0x78C879: jnz     short loc_78C87F
0x78C87B: xor     ebx, ebx
0x78C87D: jmp     short loc_78C89B
0x78C87F: cmp     edi, eax
0x78C881: jbe     short loc_78C888
0x78C883: call    __invalid_parameter_noinfo
0x78C888: test    ebp, ebp
0x78C88A: jz      short loc_78C890
0x78C88C: cmp     ebp, esi
0x78C88E: jz      short loc_78C895
0x78C890: call    __invalid_parameter_noinfo
0x78C895: mov     ebx, [esp+14h+Src]
0x78C899: sub     ebx, edi
0x78C89B: mov     edx, [esp+14h+arg_C]
0x78C89F: mov     eax, [esp+14h+Src]
0x78C8A3: push    edx; int
0x78C8A4: push    1; int
0x78C8A6: push    eax; Src
0x78C8A7: push    ebp; int
0x78C8A8: mov     ecx, esi
0x78C8AA: call    sub_6EF2F0
0x78C8AF: mov     edi, [esi+4]
0x78C8B2: cmp     edi, [esi+8]
0x78C8B5: jbe     short loc_78C8BC
0x78C8B7: call    __invalid_parameter_noinfo
0x78C8BC: mov     [esp+14h+Src], edi
0x78C8C0: add     edi, ebx
0x78C8C2: cmp     edi, [esi+8]
0x78C8C5: ja      short loc_78C8CC
0x78C8C7: cmp     edi, [esi+4]
0x78C8CA: jnb     short loc_78C8D1
0x78C8CC: call    __invalid_parameter_noinfo
0x78C8D1: mov     eax, [esp+14h+arg_0]
0x78C8D5: mov     [eax+4], edi
0x78C8D8: pop     edi
0x78C8D9: mov     [eax], esi
0x78C8DB: pop     esi
0x78C8DC: pop     ebp
0x78C8DD: pop     ebx
0x78C8DE: pop     ecx
0x78C8DF: retn    10h
