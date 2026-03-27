0x403B50: mov     edx, dword ptr [esp+whichScheme]
0x403B54: xor     eax, eax
0x403B56: imul    edx, 1Dh
0x403B59: lea     ecx, [edx+ecx+1B7Eh]
0x403B60: mov     edx, dword ptr [esp+button]
0x403B64: push    esi
0x403B65: movzx   esi, byte ptr [ecx+eax]
0x403B69: cmp     esi, edx
0x403B6B: jnz     short loc_403B71
0x403B6D: mov     byte ptr [ecx+eax], 0FFh
0x403B71: add     eax, 1
0x403B74: cmp     eax, 1Dh
0x403B77: jl      short loc_403B65
0x403B79: pop     esi
0x403B7A: retn    8
