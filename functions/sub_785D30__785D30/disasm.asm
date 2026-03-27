0x785D30: sub     esp, 8
0x785D33: mov     eax, ds:0B42970h
0x785D38: push    ebx
0x785D39: push    esi
0x785D3A: push    edi
0x785D3B: mov     edi, [eax]
0x785D3D: mov     esi, offset dword_B4296C
0x785D42: mov     [esp+14h+var_4], edi
0x785D46: mov     [esp+14h+var_8], esi
0x785D4A: lea     ebx, [ebx+0]
0x785D50: test    esi, esi
0x785D52: mov     ebx, ds:0B42970h
0x785D58: jz      short loc_785D62
0x785D5A: cmp     esi, offset dword_B4296C
0x785D60: jz      short loc_785D67
0x785D62: call    __invalid_parameter_noinfo
0x785D67: cmp     edi, ebx
0x785D69: jz      short loc_785DB9
0x785D6B: test    esi, esi
0x785D6D: jnz     short loc_785D74
0x785D6F: call    __invalid_parameter_noinfo
0x785D74: cmp     edi, [esi+4]
0x785D77: jnz     short loc_785D7E
0x785D79: call    __invalid_parameter_noinfo
0x785D7E: mov     ebx, [edi+28h]
0x785D81: test    ebx, ebx
0x785D83: jz      short loc_785D95
0x785D85: mov     ecx, ebx
0x785D87: call    sub_784B60
0x785D8C: push    ebx
0x785D8D: call    FormHeapFree
0x785D92: add     esp, 4
0x785D95: cmp     edi, [esi+4]
0x785D98: jnz     short loc_785D9F
0x785D9A: call    __invalid_parameter_noinfo
0x785D9F: lea     ecx, [esp+14h+var_8]
0x785DA3: mov     dword ptr [edi+28h], 0
0x785DAA: call    sub_7846D0
0x785DAF: mov     edi, [esp+14h+var_4]
0x785DB3: mov     esi, [esp+14h+var_8]
0x785DB7: jmp     short loc_785D50
0x785DB9: mov     ecx, ds:0B42970h
0x785DBF: mov     edx, [ecx+4]
0x785DC2: push    edx
0x785DC3: mov     ecx, offset dword_B4296C
0x785DC8: call    sub_784FF0
0x785DCD: mov     eax, ds:0B42970h
0x785DD2: mov     [eax+4], eax
0x785DD5: mov     eax, ds:0B42970h
0x785DDA: mov     dword ptr ds:0B42974h, 0
0x785DE4: pop     edi
0x785DE5: mov     [eax], eax
0x785DE7: mov     eax, ds:0B42970h
0x785DEC: pop     esi
0x785DED: mov     [eax+8], eax
0x785DF0: pop     ebx
0x785DF1: add     esp, 8
0x785DF4: retn
