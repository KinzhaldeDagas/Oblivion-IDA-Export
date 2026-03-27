0x6E1E90: push    ebx
0x6E1E91: push    esi
0x6E1E92: mov     esi, ecx
0x6E1E94: push    edi
0x6E1E95: mov     edi, [esi+20h]
0x6E1E98: xor     ebx, ebx
0x6E1E9A: cmp     edi, ebx
0x6E1E9C: jz      short loc_6E1EBB
0x6E1E9E: cmp     dword ptr [esi+10h], 4
0x6E1EA2: jnz     short loc_6E1EAB
0x6E1EA4: mov     ecx, edi
0x6E1EA6: call    sub_6BE490
0x6E1EAB: mov     eax, [esi+10h]
0x6E1EAE: mov     ecx, ds:0B3D2F8h[eax*4]
0x6E1EB5: push    edi
0x6E1EB6: call    ecx ; dword_B3D2F8
0x6E1EB8: add     esp, 4
0x6E1EBB: mov     ecx, [esp+0Ch+arg_0]
0x6E1EBF: cmp     ecx, ebx
0x6E1EC1: jz      short loc_6E1EE8
0x6E1EC3: mov     eax, [esp+0Ch+arg_4]
0x6E1EC7: cmp     eax, ebx
0x6E1EC9: jz      short loc_6E1EE8
0x6E1ECB: mov     [esi+8], ax
0x6E1ECF: mov     eax, [esp+0Ch+arg_8]
0x6E1ED3: mov     [esi+20h], ecx
0x6E1ED6: mov     [esi+10h], eax
0x6E1ED9: mov     dl, ds:byte_B3D3F4[eax]
0x6E1EDF: pop     edi
0x6E1EE0: mov     [esi+1Ch], dl
0x6E1EE3: pop     esi
0x6E1EE4: pop     ebx
0x6E1EE5: retn    0Ch
0x6E1EE8: pop     edi
0x6E1EE9: mov     [esi+8], bx
0x6E1EED: mov     [esi+20h], ebx
0x6E1EF0: mov     [esi+10h], ebx
0x6E1EF3: mov     [esi+1Ch], bl
0x6E1EF6: pop     esi
0x6E1EF7: pop     ebx
0x6E1EF8: retn    0Ch
