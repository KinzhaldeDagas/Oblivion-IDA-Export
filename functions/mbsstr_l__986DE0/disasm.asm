0x986DE0: push    ebp
0x986DE1: mov     ebp, esp
0x986DE3: sub     esp, 18h
0x986DE6: push    ebx
0x986DE7: push    [ebp+arg_8]; struct localeinfo_struct *
0x986DEA: lea     ecx, [ebp+var_18]; this
0x986DED: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x986DF2: mov     eax, [ebp+var_14]
0x986DF5: xor     ebx, ebx
0x986DF7: cmp     [eax+8], ebx
0x986DFA: jnz     short loc_986E1E
0x986DFC: push    [ebp+SubStr]; SubStr
0x986DFF: push    [ebp+Str]; Str
0x986E02: call    _strstr
0x986E07: cmp     [ebp+var_C], bl
0x986E0A: pop     ecx
0x986E0B: pop     ecx
0x986E0C: jz      loc_986F0C
0x986E12: mov     ecx, [ebp+var_10]
0x986E15: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x986E19: jmp     loc_986F0C
0x986E1E: mov     eax, [ebp+SubStr]
0x986E21: cmp     eax, ebx
0x986E23: jnz     short loc_986E50
0x986E25: call    __errno
0x986E2A: push    ebx
0x986E2B: push    ebx
0x986E2C: push    ebx
0x986E2D: push    ebx
0x986E2E: push    ebx
0x986E2F: mov     dword ptr [eax], 16h
0x986E35: call    __invalid_parameter
0x986E3A: add     esp, 14h
0x986E3D: cmp     [ebp+var_C], bl
0x986E40: jz      short loc_986E49
0x986E42: mov     eax, [ebp+var_10]
0x986E45: and     dword ptr [eax+70h], 0FFFFFFFDh
0x986E49: xor     eax, eax
0x986E4B: jmp     loc_986F0C
0x986E50: cmp     [eax], bl
0x986E52: jnz     short loc_986E68
0x986E54: cmp     [ebp+var_C], bl
0x986E57: jz      short loc_986E60
0x986E59: mov     eax, [ebp+var_10]
0x986E5C: and     dword ptr [eax+70h], 0FFFFFFFDh
0x986E60: mov     eax, [ebp+Str]
0x986E63: jmp     loc_986F0C
0x986E68: push    esi
0x986E69: mov     esi, [ebp+Str]
0x986E6C: cmp     esi, ebx
0x986E6E: jnz     short loc_986E98
0x986E70: call    __errno
0x986E75: push    ebx
0x986E76: push    ebx
0x986E77: push    ebx
0x986E78: push    ebx
0x986E79: push    ebx
0x986E7A: mov     dword ptr [eax], 16h
0x986E80: call    __invalid_parameter
0x986E85: add     esp, 14h
0x986E88: cmp     [ebp+var_C], bl
0x986E8B: jz      short loc_986E94
0x986E8D: mov     eax, [ebp+var_10]
0x986E90: and     dword ptr [eax+70h], 0FFFFFFFDh
0x986E94: xor     eax, eax
0x986E96: jmp     short loc_986F0B
0x986E98: push    edi
0x986E99: push    eax; Str
0x986E9A: mov     edi, esi
0x986E9C: call    _strlen
0x986EA1: mov     [ebp+var_8], esi
0x986EA4: sub     [ebp+var_8], eax
0x986EA7: push    esi; Str
0x986EA8: call    _strlen
0x986EAD: add     eax, [ebp+var_8]
0x986EB0: cmp     [esi], bl
0x986EB2: pop     ecx
0x986EB3: pop     ecx
0x986EB4: jz      short loc_986EFC
0x986EB6: sub     esi, [ebp+SubStr]
0x986EB9: cmp     edi, eax
0x986EBB: ja      short loc_986EFC
0x986EBD: mov     dl, [edi]
0x986EBF: cmp     dl, bl
0x986EC1: mov     ecx, [ebp+SubStr]
0x986EC4: mov     [ebp+var_1], dl
0x986EC7: jz      short loc_986EDA
0x986EC9: mov     dl, [ecx]
0x986ECB: cmp     dl, bl
0x986ECD: jz      short loc_986F0F
0x986ECF: cmp     [esi+ecx], dl
0x986ED2: jnz     short loc_986EDA
0x986ED4: inc     ecx
0x986ED5: cmp     [esi+ecx], bl
0x986ED8: jnz     short loc_986EC9
0x986EDA: cmp     [ecx], bl
0x986EDC: jz      short loc_986F0F
0x986EDE: movzx   ecx, [ebp+var_1]
0x986EE2: mov     edx, [ebp+var_14]
0x986EE5: mov     cl, [ecx+edx+1Dh]
0x986EE9: and     cl, 4
0x986EEC: inc     edi
0x986EED: inc     esi
0x986EEE: test    cl, cl
0x986EF0: jz      short loc_986EF8
0x986EF2: cmp     [edi], bl
0x986EF4: jz      short loc_986EFC
0x986EF6: inc     edi
0x986EF7: inc     esi
0x986EF8: cmp     [edi], bl
0x986EFA: jnz     short loc_986EB9
0x986EFC: cmp     [ebp+var_C], bl
0x986EFF: jz      short loc_986F08
0x986F01: mov     eax, [ebp+var_10]
0x986F04: and     dword ptr [eax+70h], 0FFFFFFFDh
0x986F08: xor     eax, eax
0x986F0A: pop     edi
0x986F0B: pop     esi
0x986F0C: pop     ebx
0x986F0D: leave
0x986F0E: retn
0x986F0F: cmp     [ebp+var_C], bl
0x986F12: jz      short loc_986F1B
0x986F14: mov     eax, [ebp+var_10]
0x986F17: and     dword ptr [eax+70h], 0FFFFFFFDh
0x986F1B: mov     eax, edi
0x986F1D: jmp     short loc_986F0A
