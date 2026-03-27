0x6C5E20: push    ebx
0x6C5E21: push    ebp
0x6C5E22: push    esi
0x6C5E23: push    edi
0x6C5E24: mov     edi, [esp+10h+arg_4]
0x6C5E28: mov     dword ptr [edi], 0
0x6C5E2E: cmp     dword ptr [ecx+10h], 0
0x6C5E32: mov     ebp, [ecx+8]
0x6C5E35: jbe     short loc_6C5E89
0x6C5E37: mov     edx, [esp+10h+arg_0]
0x6C5E3B: mov     eax, ebp
0x6C5E3D: lea     ecx, [ecx+0]
0x6C5E40: mov     bl, [eax]
0x6C5E42: cmp     bl, [edx]
0x6C5E44: jnz     short loc_6C5E60
0x6C5E46: test    bl, bl
0x6C5E48: jz      short loc_6C5E5C
0x6C5E4A: mov     bl, [eax+1]
0x6C5E4D: cmp     bl, [edx+1]
0x6C5E50: jnz     short loc_6C5E60
0x6C5E52: add     eax, 2
0x6C5E55: add     edx, 2
0x6C5E58: test    bl, bl
0x6C5E5A: jnz     short loc_6C5E40
0x6C5E5C: xor     eax, eax
0x6C5E5E: jmp     short loc_6C5E65
0x6C5E60: sbb     eax, eax
0x6C5E62: sbb     eax, 0FFFFFFFFh
0x6C5E65: test    eax, eax
0x6C5E67: jz      short loc_6C5E92
0x6C5E69: mov     eax, ebp
0x6C5E6B: lea     esi, [eax+1]
0x6C5E6E: mov     edi, edi
0x6C5E70: mov     dl, [eax]
0x6C5E72: add     eax, 1
0x6C5E75: test    dl, dl
0x6C5E77: jnz     short loc_6C5E70
0x6C5E79: sub     eax, esi
0x6C5E7B: add     eax, 1
0x6C5E7E: add     [edi], eax
0x6C5E80: add     ebp, eax
0x6C5E82: mov     eax, [edi]
0x6C5E84: cmp     eax, [ecx+10h]
0x6C5E87: jb      short loc_6C5E37
0x6C5E89: pop     edi
0x6C5E8A: pop     esi
0x6C5E8B: pop     ebp
0x6C5E8C: xor     al, al
0x6C5E8E: pop     ebx
0x6C5E8F: retn    8
0x6C5E92: pop     edi
0x6C5E93: pop     esi
0x6C5E94: pop     ebp
0x6C5E95: mov     al, 1
0x6C5E97: pop     ebx
0x6C5E98: retn    8
