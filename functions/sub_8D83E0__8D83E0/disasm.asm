0x8D83E0: mov     eax, [esp+arg_4]
0x8D83E4: dec     eax
0x8D83E5: push    ebx
0x8D83E6: mov     ebx, ecx
0x8D83E8: js      short loc_8D8414
0x8D83EA: push    esi
0x8D83EB: mov     esi, [esp+8+arg_0]
0x8D83EF: push    edi
0x8D83F0: lea     edi, [eax+1]
0x8D83F3: mov     eax, [esi]
0x8D83F5: mov     ecx, [esi+4]
0x8D83F8: movsx   eax, byte ptr [eax+4]
0x8D83FC: movsx   ecx, byte ptr [ecx+4]
0x8D8400: lea     edx, [ecx+eax*8]
0x8D8403: mov     ecx, [ebx+edx*4]
0x8D8406: mov     eax, [ecx]
0x8D8408: push    esi
0x8D8409: call    dword ptr [eax+0Ch]
0x8D840C: add     esi, 8
0x8D840F: dec     edi
0x8D8410: jnz     short loc_8D83F3
0x8D8412: pop     edi
0x8D8413: pop     esi
0x8D8414: pop     ebx
0x8D8415: retn    8
