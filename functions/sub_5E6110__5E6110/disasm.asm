0x5E6110: push    esi
0x5E6111: mov     esi, ecx
0x5E6113: cmp     dword ptr [esi+58h], 0
0x5E6117: jz      short loc_5E6159
0x5E6119: mov     eax, [esi]
0x5E611B: mov     edx, [eax+380h]
0x5E6121: call    edx
0x5E6123: test    eax, eax
0x5E6125: jnz     short loc_5E613E
0x5E6127: cmp     [esp+4+arg_0], al
0x5E612B: jz      short loc_5E613E
0x5E612D: mov     ecx, [esi+58h]
0x5E6130: mov     eax, [ecx]
0x5E6132: mov     edx, [eax+36Ch]
0x5E6138: call    edx
0x5E613A: test    eax, eax
0x5E613C: jnz     short loc_5E6159
0x5E613E: mov     eax, [esi+58h]
0x5E6141: mov     eax, [eax+8]
0x5E6144: test    eax, eax
0x5E6146: jz      short loc_5E6159
0x5E6148: mov     al, [eax+20h]
0x5E614B: cmp     al, 0Ch
0x5E614D: jz      short loc_5E6153
0x5E614F: cmp     al, 0Dh
0x5E6151: jnz     short loc_5E6159
0x5E6153: mov     al, 1
0x5E6155: pop     esi
0x5E6156: retn    4
0x5E6159: xor     al, al
0x5E615B: pop     esi
0x5E615C: retn    4
