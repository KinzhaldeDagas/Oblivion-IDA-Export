0x6D8E10: push    ebx
0x6D8E11: push    esi
0x6D8E12: mov     esi, ecx
0x6D8E14: mov     eax, [esi+0Ch]
0x6D8E17: xor     ebx, ebx
0x6D8E19: cmp     eax, ebx
0x6D8E1B: push    edi
0x6D8E1C: jz      short loc_6D8E2E
0x6D8E1E: mov     ecx, [esi+10h]
0x6D8E21: mov     edx, ds:0B3D2F8h[ecx*4]
0x6D8E28: push    eax
0x6D8E29: call    edx ; dword_B3D2F8
0x6D8E2B: add     esp, 4
0x6D8E2E: mov     edi, [esp+0Ch+arg_0]
0x6D8E32: cmp     edi, ebx
0x6D8E34: jz      short loc_6D8E5A
0x6D8E36: mov     ecx, [esp+0Ch+arg_4]
0x6D8E3A: cmp     ecx, ebx
0x6D8E3C: jz      short loc_6D8E5A
0x6D8E3E: mov     eax, [esp+0Ch+arg_8]
0x6D8E42: mov     dl, ds:byte_B3D3F4[eax]
0x6D8E48: mov     [esi+0Ch], edi
0x6D8E4B: pop     edi
0x6D8E4C: mov     [esi+14h], dl
0x6D8E4F: mov     [esi+8], ecx
0x6D8E52: mov     [esi+10h], eax
0x6D8E55: pop     esi
0x6D8E56: pop     ebx
0x6D8E57: retn    0Ch
0x6D8E5A: pop     edi
0x6D8E5B: mov     [esi+8], ebx
0x6D8E5E: mov     [esi+0Ch], ebx
0x6D8E61: mov     [esi+10h], ebx
0x6D8E64: mov     [esi+14h], bl
0x6D8E67: pop     esi
0x6D8E68: pop     ebx
0x6D8E69: retn    0Ch
