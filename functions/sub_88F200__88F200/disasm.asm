0x88F200: push    esi
0x88F201: mov     esi, [esp+4+arg_0]
0x88F205: push    edi
0x88F206: xor     edi, edi
0x88F208: test    esi, esi
0x88F20A: jz      loc_88F2C5
0x88F210: push    esi
0x88F211: call    sub_497420
0x88F216: mov     edi, eax
0x88F218: add     esp, 4
0x88F21B: test    edi, edi
0x88F21D: jnz     loc_88F2C5
0x88F223: cmp     [esi+0B6h], ax
0x88F22A: ja      short loc_88F230
0x88F22C: xor     esi, esi
0x88F22E: jmp     short loc_88F238
0x88F230: mov     eax, [esi+0B0h]
0x88F236: mov     esi, [eax]
0x88F238: push    esi
0x88F239: call    sub_497420
0x88F23E: mov     edi, eax
0x88F240: add     esp, 4
0x88F243: test    edi, edi
0x88F245: jnz     short loc_88F2C5
0x88F247: cmp     word ptr [esi+0B8h], 1
0x88F24F: movzx   ecx, word ptr [esi+0B6h]
0x88F256: setnz   al
0x88F259: cmp     ecx, eax
0x88F25B: jbe     short loc_88F2C5
0x88F25D: mov     edx, [esi+0B0h]
0x88F263: mov     esi, [edx+eax*4]
0x88F266: test    esi, esi
0x88F268: jz      short loc_88F2C5
0x88F26A: push    esi
0x88F26B: call    sub_497420
0x88F270: mov     edi, eax
0x88F272: add     esp, 4
0x88F275: test    edi, edi
0x88F277: jnz     short loc_88F2C5
0x88F279: mov     eax, [esi]
0x88F27B: mov     edx, [eax+8]
0x88F27E: push    ebx
0x88F27F: mov     ecx, esi
0x88F281: call    edx
0x88F283: mov     ebx, eax
0x88F285: test    ebx, ebx
0x88F287: jz      short loc_88F2C4
0x88F289: movzx   eax, word ptr [ebx+0B6h]
0x88F290: xor     esi, esi
0x88F292: test    eax, eax
0x88F294: jbe     short loc_88F2C4
0x88F296: cmp     eax, esi
0x88F298: ja      short loc_88F29E
0x88F29A: xor     eax, eax
0x88F29C: jmp     short loc_88F2A7
0x88F29E: mov     eax, [ebx+0B0h]
0x88F2A4: mov     eax, [eax+esi*4]
0x88F2A7: push    eax
0x88F2A8: call    sub_497420
0x88F2AD: mov     edi, eax
0x88F2AF: add     esp, 4
0x88F2B2: test    edi, edi
0x88F2B4: jnz     short loc_88F2C4
0x88F2B6: movzx   eax, word ptr [ebx+0B6h]
0x88F2BD: add     esi, 1
0x88F2C0: cmp     eax, esi
0x88F2C2: ja      short loc_88F29E
0x88F2C4: pop     ebx
0x88F2C5: mov     eax, edi
0x88F2C7: pop     edi
0x88F2C8: pop     esi
0x88F2C9: retn
