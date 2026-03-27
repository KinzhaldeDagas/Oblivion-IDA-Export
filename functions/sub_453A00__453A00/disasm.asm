0x453A00: sub     esp, 18h
0x453A03: push    ebx
0x453A04: push    ebp
0x453A05: mov     ebp, ecx
0x453A07: mov     ecx, [esp+20h+arg_0]
0x453A0B: mov     eax, [ecx]
0x453A0D: mov     edx, [eax+168h]
0x453A13: push    esi
0x453A14: push    edi
0x453A15: xor     esi, esi
0x453A17: xor     edi, edi
0x453A19: call    edx
0x453A1B: mov     ebx, eax
0x453A1D: cmp     ebx, esi
0x453A1F: jz      short loc_453A80
0x453A21: mov     [esp+28h+var_18], esi
0x453A25: mov     [esp+28h+var_14], 1
0x453A2D: mov     [esp+28h+var_10], 2
0x453A35: mov     [esp+28h+var_C], 3
0x453A3D: mov     [esp+28h+var_8], 4
0x453A45: mov     [esp+28h+var_4], 5
0x453A4D: lea     ecx, [ecx+0]
0x453A50: mov     eax, [esp+esi*4+28h+var_18]
0x453A54: shl     eax, 4
0x453A57: lea     eax, [eax+ebx+4Ch]
0x453A5B: test    eax, eax
0x453A5D: jz      short loc_453A78
0x453A5F: mov     eax, [eax]
0x453A61: test    eax, eax
0x453A63: jz      short loc_453A78
0x453A65: mov     ecx, [eax+0Ch]
0x453A68: push    ecx
0x453A69: mov     ecx, ebp
0x453A6B: call    sub_4521D0
0x453A70: imul    edi, 1003Fh
0x453A76: add     edi, eax
0x453A78: add     esi, 1
0x453A7B: cmp     esi, 6
0x453A7E: jl      short loc_453A50
0x453A80: mov     eax, edi
0x453A82: pop     edi
0x453A83: pop     esi
0x453A84: pop     ebp
0x453A85: pop     ebx
0x453A86: add     esp, 18h
0x453A89: retn    4
