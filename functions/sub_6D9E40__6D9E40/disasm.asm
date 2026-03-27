0x6D9E40: push    ebx
0x6D9E41: push    esi
0x6D9E42: mov     esi, ecx
0x6D9E44: mov     eax, [esi+0Ch]
0x6D9E47: xor     ebx, ebx
0x6D9E49: cmp     eax, ebx
0x6D9E4B: push    edi
0x6D9E4C: jz      short loc_6D9E5E
0x6D9E4E: mov     ecx, [esi+10h]
0x6D9E51: mov     edx, ds:0B3D2E0h[ecx*4]
0x6D9E58: push    eax
0x6D9E59: call    edx ; dword_B3D2E0
0x6D9E5B: add     esp, 4
0x6D9E5E: mov     edi, [esp+0Ch+arg_0]
0x6D9E62: cmp     edi, ebx
0x6D9E64: jz      short loc_6D9E8A
0x6D9E66: mov     ecx, [esp+0Ch+arg_4]
0x6D9E6A: cmp     ecx, ebx
0x6D9E6C: jz      short loc_6D9E8A
0x6D9E6E: mov     eax, [esp+0Ch+arg_8]
0x6D9E72: mov     dl, ds:byte_B3D3EE[eax]
0x6D9E78: mov     [esi+0Ch], edi
0x6D9E7B: pop     edi
0x6D9E7C: mov     [esi+14h], dl
0x6D9E7F: mov     [esi+8], ecx
0x6D9E82: mov     [esi+10h], eax
0x6D9E85: pop     esi
0x6D9E86: pop     ebx
0x6D9E87: retn    0Ch
0x6D9E8A: pop     edi
0x6D9E8B: mov     [esi+8], ebx
0x6D9E8E: mov     [esi+0Ch], ebx
0x6D9E91: mov     [esi+10h], ebx
0x6D9E94: mov     [esi+14h], bl
0x6D9E97: pop     esi
0x6D9E98: pop     ebx
0x6D9E99: retn    0Ch
