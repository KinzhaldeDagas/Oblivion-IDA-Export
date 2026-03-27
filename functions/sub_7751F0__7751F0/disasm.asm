0x7751F0: push    edi
0x7751F1: xor     edi, edi
0x7751F3: cmp     [esp+4+arg_0], 0
0x7751F8: jz      short loc_77522E
0x7751FA: mov     eax, [ecx+138h]
0x775200: test    eax, eax
0x775202: jz      short loc_775219
0x775204: lea     ecx, [eax+8]
0x775207: mov     ecx, [ecx]
0x775209: test    ecx, ecx
0x77520B: mov     eax, [eax]
0x77520D: jz      short loc_775215
0x77520F: cmp     byte ptr [ecx+4], 0
0x775213: jnz     short loc_77521F
0x775215: test    eax, eax
0x775217: jnz     short loc_775204
0x775219: mov     eax, edi
0x77521B: pop     edi
0x77521C: retn    8
0x77521F: mov     eax, [ecx]
0x775221: push    eax
0x775222: call    sub_774990
0x775227: add     esp, 4
0x77522A: pop     edi
0x77522B: retn    8
0x77522E: mov     ecx, [ecx+138h]
0x775234: test    ecx, ecx
0x775236: jz      short loc_775219
0x775238: push    esi
0x775239: mov     esi, [esp+8+arg_4]
0x77523D: lea     ecx, [ecx+0]
0x775240: mov     edx, [ecx+8]
0x775243: test    edx, edx
0x775245: lea     eax, [ecx+8]
0x775248: mov     ecx, [ecx]
0x77524A: jz      short loc_775261
0x77524C: cmp     byte ptr [edx+5], 0
0x775250: jz      short loc_775261
0x775252: mov     eax, [edx]
0x775254: push    eax
0x775255: call    sub_774EE0
0x77525A: add     esp, 4
0x77525D: cmp     eax, esi
0x77525F: jz      short loc_77526C
0x775261: test    ecx, ecx
0x775263: jnz     short loc_775240
0x775265: pop     esi
0x775266: mov     eax, edi
0x775268: pop     edi
0x775269: retn    8
0x77526C: mov     ecx, [edx]
0x77526E: push    ecx
0x77526F: call    sub_774990
0x775274: add     esp, 4
0x775277: pop     esi
0x775278: pop     edi
0x775279: retn    8
