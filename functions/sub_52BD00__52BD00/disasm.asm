0x52BD00: push    edi
0x52BD01: mov     edi, [esp+4+arg_0]
0x52BD05: cmp     edi, 8
0x52BD08: ja      loc_52BD9E
0x52BD0E: cmp     edi, 1
0x52BD11: push    esi
0x52BD12: jnz     short loc_52BD4F
0x52BD14: movzx   eax, word ptr [ecx+1CCh]
0x52BD1B: cmp     ax, 0FFFFh
0x52BD1F: jnz     short loc_52BD3D
0x52BD21: mov     eax, [ecx+1C8h]
0x52BD27: lea     esi, [eax+1]
0x52BD2A: lea     ebx, [ebx+0]
0x52BD30: mov     dl, [eax]
0x52BD32: add     eax, 1
0x52BD35: test    dl, dl
0x52BD37: jnz     short loc_52BD30
0x52BD39: sub     eax, esi
0x52BD3B: jmp     short loc_52BD40
0x52BD3D: movzx   eax, ax
0x52BD40: test    eax, eax
0x52BD42: jnz     short loc_52BD8F
0x52BD44: pop     esi
0x52BD45: lea     eax, [ecx+1D0h]
0x52BD4B: pop     edi
0x52BD4C: retn    4
0x52BD4F: cmp     edi, 2
0x52BD52: jnz     short loc_52BD8F
0x52BD54: movzx   eax, word ptr [ecx+1D8h]
0x52BD5B: cmp     ax, 0FFFFh
0x52BD5F: jnz     short loc_52BD7D
0x52BD61: mov     eax, [ecx+1D4h]
0x52BD67: lea     esi, [eax+1]
0x52BD6A: lea     ebx, [ebx+0]
0x52BD70: mov     dl, [eax]
0x52BD72: add     eax, 1
0x52BD75: test    dl, dl
0x52BD77: jnz     short loc_52BD70
0x52BD79: sub     eax, esi
0x52BD7B: jmp     short loc_52BD80
0x52BD7D: movzx   eax, ax
0x52BD80: test    eax, eax
0x52BD82: jnz     short loc_52BD8F
0x52BD84: pop     esi
0x52BD85: lea     eax, [ecx+1C4h]
0x52BD8B: pop     edi
0x52BD8C: retn    4
0x52BD8F: lea     eax, [edi+edi*2]
0x52BD92: pop     esi
0x52BD93: lea     eax, [ecx+eax*4+1B8h]
0x52BD9A: pop     edi
0x52BD9B: retn    4
0x52BD9E: xor     eax, eax
0x52BDA0: pop     edi
0x52BDA1: retn    4
