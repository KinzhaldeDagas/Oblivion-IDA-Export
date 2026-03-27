0x74D830: movzx   edx, word ptr [ecx+7Eh]
0x74D834: mov     eax, [esp+arg_0]
0x74D838: cmp     eax, edx
0x74D83A: jnb     short locret_74D8B3
0x74D83C: mov     ecx, [ecx+78h]
0x74D83F: cmp     dword ptr [ecx+eax*4], 0
0x74D843: lea     eax, [ecx+eax*4]
0x74D846: jz      short locret_74D8B3
0x74D848: push    ebx
0x74D849: mov     ebx, [eax]
0x74D84B: push    edi
0x74D84C: xor     edi, edi
0x74D84E: cmp     [ebx+8], di
0x74D852: jbe     short loc_74D8B1
0x74D854: push    ebp
0x74D855: mov     ebp, [esp+0Ch+arg_4]
0x74D859: push    esi
0x74D85A: lea     ebx, [ebx+0]
0x74D860: mov     ecx, ebp
0x74D862: call    sub_700900
0x74D867: mov     esi, eax
0x74D869: test    esi, esi
0x74D86B: mov     [esp+10h+arg_0], esi
0x74D86F: jz      short loc_74D87B
0x74D871: lea     edx, [esi+4]
0x74D874: push    edx; lpAddend
0x74D875: call    dword ptr ds:0A28078h
0x74D87B: lea     eax, [esp+10h+arg_0]
0x74D87F: push    eax
0x74D880: push    edi
0x74D881: mov     ecx, ebx
0x74D883: call    sub_4B34E0
0x74D888: test    esi, esi
0x74D88A: jz      short loc_74D8A4
0x74D88C: lea     ecx, [esi+4]
0x74D88F: push    ecx; lpAddend
0x74D890: call    dword ptr ds:0A2807Ch
0x74D896: test    eax, eax
0x74D898: jnz     short loc_74D8A4
0x74D89A: mov     edx, [esi]
0x74D89C: mov     eax, [edx]
0x74D89E: push    1
0x74D8A0: mov     ecx, esi
0x74D8A2: call    eax
0x74D8A4: movzx   ecx, word ptr [ebx+8]
0x74D8A8: add     edi, 1
0x74D8AB: cmp     edi, ecx
0x74D8AD: jb      short loc_74D860
0x74D8AF: pop     esi
0x74D8B0: pop     ebp
0x74D8B1: pop     edi
0x74D8B2: pop     ebx
0x74D8B3: retn    8
