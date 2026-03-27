0x76B380: push    ecx
0x76B381: push    edi
0x76B382: mov     edi, ecx
0x76B384: cmp     dword ptr [edi+910h], 0
0x76B38B: jz      short loc_76B3E8
0x76B38D: push    ebx
0x76B38E: push    esi
0x76B38F: lea     ebx, [edi+904h]
0x76B395: mov     eax, [edi+908h]
0x76B39B: mov     esi, [eax+8]
0x76B39E: mov     edx, [esi]
0x76B3A0: mov     eax, [edx+60h]
0x76B3A3: mov     ecx, esi
0x76B3A5: call    eax
0x76B3A7: push    0; a2
0x76B3A9: mov     ecx, esi; this
0x76B3AB: call    NiD3DShaderInterface__SetDX9Renderer
0x76B3B0: mov     eax, [ebx+4]
0x76B3B3: test    eax, eax
0x76B3B5: jz      short loc_76B3C7
0x76B3B7: cmp     esi, [eax+8]
0x76B3BA: lea     ecx, [eax+8]
0x76B3BD: mov     edx, eax
0x76B3BF: mov     eax, [eax]
0x76B3C1: jz      short loc_76B3C9
0x76B3C3: test    eax, eax
0x76B3C5: jnz     short loc_76B3B7
0x76B3C7: xor     edx, edx
0x76B3C9: test    edx, edx
0x76B3CB: mov     [esp+10h+var_4], edx
0x76B3CF: jz      short loc_76B3DD
0x76B3D1: lea     ecx, [esp+10h+var_4]
0x76B3D5: push    ecx
0x76B3D6: mov     ecx, ebx
0x76B3D8: call    sub_7AA860
0x76B3DD: cmp     dword ptr [edi+910h], 0
0x76B3E4: jnz     short loc_76B395
0x76B3E6: pop     esi
0x76B3E7: pop     ebx
0x76B3E8: pop     edi
0x76B3E9: pop     ecx
0x76B3EA: retn
