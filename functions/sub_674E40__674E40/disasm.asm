0x674E40: sub     esp, 8
0x674E43: push    ebx
0x674E44: push    ebp
0x674E45: push    esi
0x674E46: xor     ebp, ebp
0x674E48: xor     ebx, ebx
0x674E4A: mov     esi, ecx
0x674E4C: xor     eax, eax
0x674E4E: push    edi
0x674E4F: mov     [esp+18h+var_4], esi
0x674E53: mov     [esp+18h+var_8], eax
0x674E57: jmp     short loc_674E64
0x674E59: align 10h
0x674E60: mov     eax, [esp+18h+var_8]
0x674E64: cmp     eax, ebp
0x674E66: jnz     short loc_674E6B
0x674E68: push    ebp
0x674E69: jmp     short loc_674E7D
0x674E6B: cmp     eax, 1
0x674E6E: jnz     short loc_674E73
0x674E70: push    eax
0x674E71: jmp     short loc_674E7D
0x674E73: cmp     eax, 2
0x674E76: jnz     short loc_674E7B
0x674E78: push    eax
0x674E79: jmp     short loc_674E7D
0x674E7B: push    3; a2
0x674E7D: mov     ecx, esi; this
0x674E7F: call    sub_673A50
0x674E84: mov     ecx, eax; this
0x674E86: call    sub_7616D0
0x674E8B: mov     edi, eax
0x674E8D: cmp     edi, ebp
0x674E8F: jz      loc_674F47
0x674E95: cmp     [edi+4], ebp
0x674E98: jnz     short loc_674EA2
0x674E9A: cmp     [edi], ebp
0x674E9C: jz      loc_674F47
0x674EA2: mov     ecx, [edi]
0x674EA4: mov     eax, [ecx]
0x674EA6: mov     edx, [eax+190h]
0x674EAC: call    edx
0x674EAE: test    al, al
0x674EB0: jz      loc_674F38
0x674EB6: mov     esi, [edi]
0x674EB8: cmp     esi, ebp
0x674EBA: jz      short loc_674F38
0x674EBC: mov     ecx, [esi+58h]
0x674EBF: cmp     ecx, ebp
0x674EC1: jz      short loc_674ED2
0x674EC3: mov     eax, [ecx]
0x674EC5: mov     edx, [esp+18h+arg_0]
0x674EC9: mov     eax, [eax+330h]
0x674ECF: push    edx
0x674ED0: call    eax
0x674ED2: mov     ecx, esi
0x674ED4: call    sub_5EAE10
0x674ED9: test    eax, eax
0x674EDB: jz      short loc_674F38
0x674EDD: mov     ecx, esi
0x674EDF: call    sub_5EAE10
0x674EE4: mov     ecx, [esp+18h+arg_0]
0x674EE8: cmp     [eax+0Ch], ecx
0x674EEB: jnz     short loc_674F38
0x674EED: cmp     [esp+18h+arg_4], esi
0x674EF1: jz      short loc_674F38
0x674EF3: cmp     ebx, ebp
0x674EF5: jnz     short loc_674F10
0x674EF7: push    8; Size
0x674EF9: call    FormHeapAlloc
0x674EFE: add     esp, 4
0x674F01: cmp     eax, ebp
0x674F03: jz      short loc_674F0C
0x674F05: mov     [eax], ebp
0x674F07: mov     [eax+4], ebp
0x674F0A: jmp     short loc_674F0E
0x674F0C: xor     eax, eax
0x674F0E: mov     ebx, eax
0x674F10: cmp     [ebx], ebp
0x674F12: jz      short loc_674F36
0x674F14: push    8; Size
0x674F16: call    FormHeapAlloc
0x674F1B: add     esp, 4
0x674F1E: cmp     eax, ebp
0x674F20: jz      short loc_674F2B
0x674F22: mov     edx, [ebx]
0x674F24: mov     [eax], edx
0x674F26: mov     [eax+4], ebp
0x674F29: jmp     short loc_674F2D
0x674F2B: xor     eax, eax
0x674F2D: mov     ecx, [ebx+4]
0x674F30: mov     [eax+4], ecx
0x674F33: mov     [ebx+4], eax
0x674F36: mov     [ebx], esi
0x674F38: mov     edi, [edi+4]
0x674F3B: cmp     edi, ebp
0x674F3D: mov     esi, [esp+18h+var_4]
0x674F41: jnz     loc_674E95
0x674F47: mov     eax, [esp+18h+var_8]
0x674F4B: add     eax, 1
0x674F4E: cmp     eax, 4
0x674F51: mov     [esp+18h+var_8], eax
0x674F55: jl      loc_674E60
0x674F5B: pop     edi
0x674F5C: pop     esi
0x674F5D: pop     ebp
0x674F5E: mov     eax, ebx
0x674F60: pop     ebx
0x674F61: add     esp, 8
0x674F64: retn    8
