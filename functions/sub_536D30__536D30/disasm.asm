0x536D30: push    esi
0x536D31: mov     esi, [esp+4+arg_0]
0x536D35: test    esi, esi
0x536D37: jz      short loc_536D79
0x536D39: push    edi
0x536D3A: mov     edi, [ecx+18h]
0x536D3D: cmp     esi, edi
0x536D3F: jnz     short loc_536D46
0x536D41: mov     edi, [esi+4]
0x536D44: jmp     short loc_536D65
0x536D46: test    edi, edi
0x536D48: mov     edx, edi
0x536D4A: jz      short loc_536D65
0x536D4C: lea     esp, [esp+0]
0x536D50: mov     eax, [edx+4]
0x536D53: cmp     esi, eax
0x536D55: jz      short loc_536D5F
0x536D57: test    eax, eax
0x536D59: mov     edx, eax
0x536D5B: jnz     short loc_536D50
0x536D5D: jmp     short loc_536D65
0x536D5F: mov     eax, [eax+4]
0x536D62: mov     [edx+4], eax
0x536D65: mov     [ecx+18h], edi
0x536D68: mov     ecx, esi
0x536D6A: call    sub_5369D0
0x536D6F: push    esi
0x536D70: call    FormHeapFree
0x536D75: add     esp, 4
0x536D78: pop     edi
0x536D79: pop     esi
0x536D7A: retn    4
