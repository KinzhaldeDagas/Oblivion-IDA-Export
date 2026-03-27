0x7A9A90: mov     eax, [esp+arg_0]
0x7A9A94: mov     ecx, [esp+arg_4]
0x7A9A98: mov     eax, [eax]
0x7A9A9A: mov     ecx, [ecx]
0x7A9A9C: movzx   eax, word ptr [eax+4]
0x7A9AA0: movzx   ecx, word ptr [ecx+4]
0x7A9AA4: cmp     ax, cx
0x7A9AA7: jnz     short loc_7A9AAC
0x7A9AA9: xor     eax, eax
0x7A9AAB: retn
0x7A9AAC: sbb     eax, eax
0x7A9AAE: and     eax, 0FFFFFFFEh
0x7A9AB1: add     eax, 1
0x7A9AB4: retn
