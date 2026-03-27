0x4A2BA0: push    ebx
0x4A2BA1: push    ebp
0x4A2BA2: mov     ebp, [esp+8+arg_0]
0x4A2BA6: xor     ebx, ebx
0x4A2BA8: test    ebp, ebp
0x4A2BAA: jnz     short loc_4A2BB1
0x4A2BAC: pop     ebp
0x4A2BAD: xor     eax, eax
0x4A2BAF: pop     ebx
0x4A2BB0: retn
0x4A2BB1: movzx   eax, word ptr [ebp+0B6h]
0x4A2BB8: push    edi
0x4A2BB9: xor     edi, edi
0x4A2BBB: test    eax, eax
0x4A2BBD: jbe     short loc_4A2C21
0x4A2BBF: cmp     eax, edi
0x4A2BC1: push    esi
0x4A2BC2: jbe     short loc_4A2C12
0x4A2BC4: mov     eax, [ebp+0B0h]
0x4A2BCA: mov     esi, [eax+edi*4]
0x4A2BCD: test    esi, esi
0x4A2BCF: jz      short loc_4A2C12
0x4A2BD1: mov     edx, [esi]
0x4A2BD3: mov     eax, [edx+0Ch]
0x4A2BD6: mov     ecx, esi
0x4A2BD8: call    eax
0x4A2BDA: test    eax, eax
0x4A2BDC: jz      short loc_4A2BF9
0x4A2BDE: cmp     byte ptr [esp+10h+arg_4], 0
0x4A2BE3: jnz     short loc_4A2BEB
0x4A2BE5: test    byte ptr [eax+18h], 1
0x4A2BE9: jnz     short loc_4A2C12
0x4A2BEB: mov     ecx, [eax+0B4h]
0x4A2BF1: movzx   edx, word ptr [ecx+8]
0x4A2BF5: add     ebx, edx
0x4A2BF7: jmp     short loc_4A2C12
0x4A2BF9: mov     eax, [esp+10h+arg_4]
0x4A2BFD: mov     edx, [esi]
0x4A2BFF: push    eax
0x4A2C00: mov     eax, [edx+8]
0x4A2C03: mov     ecx, esi
0x4A2C05: call    eax
0x4A2C07: push    eax
0x4A2C08: call    sub_4A2BA0
0x4A2C0D: add     esp, 8
0x4A2C10: add     ebx, eax
0x4A2C12: movzx   eax, word ptr [ebp+0B6h]
0x4A2C19: add     edi, 1
0x4A2C1C: cmp     eax, edi
0x4A2C1E: ja      short loc_4A2BC4
0x4A2C20: pop     esi
0x4A2C21: pop     edi
0x4A2C22: pop     ebp
0x4A2C23: mov     eax, ebx
0x4A2C25: pop     ebx
0x4A2C26: retn
