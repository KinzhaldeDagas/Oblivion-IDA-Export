0x70AA20: push    ecx
0x70AA21: push    ebx
0x70AA22: push    ebp
0x70AA23: push    esi
0x70AA24: push    edi
0x70AA25: mov     esi, ecx
0x70AA27: call    sub_707770
0x70AA2C: cmp     byte ptr [esp+14h+arg_4], 0
0x70AA31: mov     [esp+14h+var_1], al
0x70AA35: jnz     short loc_70AA3B
0x70AA37: mov     byte ptr [esp+14h+arg_4], al
0x70AA3B: mov     ebp, [esp+14h+arg_0]
0x70AA3F: mov     al, byte ptr [esp+14h+arg_4]
0x70AA43: mov     ebx, [esp+14h+arg_8]
0x70AA47: mov     [ebp+0], al
0x70AA4A: xor     edi, edi
0x70AA4C: mov     byte ptr [ebx], 1
0x70AA4F: cmp     [esi+0B6h], di
0x70AA56: jbe     short loc_70AABF
0x70AA58: mov     ebx, [esp+14h+arg_4]
0x70AA5C: lea     esp, [esp+0]
0x70AA60: movzx   ecx, word ptr [esi+0B6h]
0x70AA67: cmp     ecx, edi
0x70AA69: jbe     short loc_70AAAD
0x70AA6B: mov     edx, [esi+0B0h]
0x70AA71: mov     ecx, [edx+edi*4]
0x70AA74: test    ecx, ecx
0x70AA76: jz      short loc_70AAAD
0x70AA78: mov     eax, [ecx]
0x70AA7A: mov     eax, [eax+5Ch]
0x70AA7D: lea     edx, [esp+14h+var_2]
0x70AA81: push    edx
0x70AA82: push    ebx
0x70AA83: lea     edx, [esp+1Ch+arg_0]
0x70AA87: push    edx
0x70AA88: mov     byte ptr [esp+20h+arg_0], 0
0x70AA8D: mov     [esp+20h+var_2], 1
0x70AA92: call    eax
0x70AA94: cmp     byte ptr [esp+14h+arg_0], 0
0x70AA99: jz      short loc_70AA9F
0x70AA9B: mov     byte ptr [ebp+0], 1
0x70AA9F: cmp     [esp+14h+var_2], 0
0x70AAA4: jnz     short loc_70AAAD
0x70AAA6: mov     ecx, [esp+14h+arg_8]
0x70AAAA: mov     byte ptr [ecx], 0
0x70AAAD: movzx   edx, word ptr [esi+0B6h]
0x70AAB4: add     edi, 1
0x70AAB7: cmp     edi, edx
0x70AAB9: jb      short loc_70AA60
0x70AABB: mov     ebx, [esp+14h+arg_8]
0x70AABF: mov     ecx, esi
0x70AAC1: call    sub_7077A0
0x70AAC6: test    al, al
0x70AAC8: jnz     short loc_70AAD0
0x70AACA: cmp     dword ptr [esi+0Ch], 0
0x70AACE: jz      short loc_70AADB
0x70AAD0: mov     byte ptr [ebp+0], 1
0x70AAD4: or      word ptr [esi+18h], 2
0x70AAD9: jmp     short loc_70AAEE
0x70AADB: cmp     byte ptr [ebp+0], 0
0x70AADF: jz      short loc_70AAE8
0x70AAE1: or      word ptr [esi+18h], 2
0x70AAE6: jmp     short loc_70AAEE
0x70AAE8: and     word ptr [esi+18h], 0FFFDh
0x70AAEE: cmp     byte ptr [esp+14h+arg_4], 0
0x70AAF3: jz      short loc_70AAFC
0x70AAF5: or      word ptr [esi+18h], 4
0x70AAFA: jmp     short loc_70AB02
0x70AAFC: and     word ptr [esi+18h], 0FFFBh
0x70AB02: test    al, al
0x70AB04: jz      short loc_70AB0D
0x70AB06: or      word ptr [esi+18h], 8
0x70AB0B: jmp     short loc_70AB13
0x70AB0D: and     word ptr [esi+18h], 0FFF7h
0x70AB13: cmp     byte ptr [ebx], 0
0x70AB16: jz      short loc_70AB1F
0x70AB18: or      word ptr [esi+18h], 10h
0x70AB1D: jmp     short loc_70AB25
0x70AB1F: and     word ptr [esi+18h], 0FFEFh
0x70AB25: cmp     [esp+14h+var_1], 0
0x70AB2A: jz      short loc_70AB2F
0x70AB2C: mov     byte ptr [ebx], 0
0x70AB2F: pop     edi
0x70AB30: pop     esi
0x70AB31: pop     ebp
0x70AB32: pop     ebx
0x70AB33: pop     ecx
0x70AB34: retn    0Ch
