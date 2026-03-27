0x4D1E40: mov     eax, [ecx+54h]
0x4D1E43: test    eax, eax
0x4D1E45: push    esi
0x4D1E46: push    edi
0x4D1E47: jz      short loc_4D1E5D
0x4D1E49: cmp     word ptr [eax+0B6h], 0
0x4D1E51: jbe     short loc_4D1E5D
0x4D1E53: mov     eax, [eax+0B0h]
0x4D1E59: mov     edi, [eax]
0x4D1E5B: jmp     short loc_4D1E5F
0x4D1E5D: xor     edi, edi
0x4D1E5F: movzx   esi, word ptr [edi+0B6h]
0x4D1E66: test    esi, esi
0x4D1E68: jz      short loc_4D1EAA
0x4D1E6A: push    ebx
0x4D1E6B: mov     ebx, [esp+0Ch+arg_0]
0x4D1E6F: nop
0x4D1E70: movzx   ecx, word ptr [edi+0B6h]
0x4D1E77: sub     esi, 1
0x4D1E7A: cmp     ecx, esi
0x4D1E7C: ja      short loc_4D1E82
0x4D1E7E: xor     eax, eax
0x4D1E80: jmp     short loc_4D1E8B
0x4D1E82: mov     edx, [edi+0B0h]
0x4D1E88: mov     eax, [edx+esi*4]
0x4D1E8B: push    eax
0x4D1E8C: call    sub_4DC270
0x4D1E91: add     esp, 4
0x4D1E94: test    eax, eax
0x4D1E96: jz      short loc_4D1EA5
0x4D1E98: mov     edx, [eax]
0x4D1E9A: mov     ecx, eax
0x4D1E9C: mov     eax, [edx+200h]
0x4D1EA2: push    ebx
0x4D1EA3: call    eax
0x4D1EA5: test    esi, esi
0x4D1EA7: jnz     short loc_4D1E70
0x4D1EA9: pop     ebx
0x4D1EAA: pop     edi
0x4D1EAB: pop     esi
0x4D1EAC: retn    4
