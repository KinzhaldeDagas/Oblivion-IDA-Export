0x551DA0: push    ecx
0x551DA1: push    ebx
0x551DA2: push    ebp
0x551DA3: push    esi
0x551DA4: mov     ebp, ecx
0x551DA6: mov     eax, [ebp+0]
0x551DA9: push    edi
0x551DAA: mov     edi, [esp+14h+arg_0]
0x551DAE: cmp     eax, [edi]
0x551DB0: mov     [esp+14h+var_4], ebp
0x551DB4: jnz     short loc_551DBE
0x551DB6: mov     ecx, [ebp+4]
0x551DB9: cmp     ecx, [edi+4]
0x551DBC: jz      short loc_551DD0
0x551DBE: push    249h; int
0x551DC3: push    offset aENetworkprojec; "e:\\networkprojectspc\\oblivionse\\sdk"...
0x551DC8: call    sub_6ED6D0
0x551DCD: add     esp, 8
0x551DD0: mov     esi, [ebp+0Ch]
0x551DD3: add     ebp, 8
0x551DD6: cmp     esi, [ebp+8]
0x551DD9: jbe     short loc_551DE0
0x551DDB: call    __invalid_parameter_noinfo
0x551DE0: mov     ebx, [edi+0Ch]
0x551DE3: add     edi, 8
0x551DE6: cmp     ebx, [edi+8]
0x551DE9: jbe     short loc_551DF0
0x551DEB: call    __invalid_parameter_noinfo
0x551DF0: mov     eax, [ebp+8]
0x551DF3: cmp     [ebp+4], eax
0x551DF6: mov     [esp+14h+arg_0], eax
0x551DFA: jbe     short loc_551E01
0x551DFC: call    __invalid_parameter_noinfo
0x551E01: cmp     ebp, ebp
0x551E03: jz      short loc_551E0A
0x551E05: call    __invalid_parameter_noinfo
0x551E0A: cmp     esi, [esp+14h+arg_0]
0x551E0E: jz      short loc_551E66
0x551E10: mov     eax, [edi+8]
0x551E13: cmp     [edi+4], eax
0x551E16: mov     [esp+14h+arg_0], eax
0x551E1A: jbe     short loc_551E21
0x551E1C: call    __invalid_parameter_noinfo
0x551E21: cmp     edi, edi
0x551E23: jz      short loc_551E2A
0x551E25: call    __invalid_parameter_noinfo
0x551E2A: cmp     ebx, [esp+14h+arg_0]
0x551E2E: jz      short loc_551E66
0x551E30: cmp     esi, [ebp+8]
0x551E33: jb      short loc_551E3A
0x551E35: call    __invalid_parameter_noinfo
0x551E3A: cmp     ebx, [edi+8]
0x551E3D: jb      short loc_551E44
0x551E3F: call    __invalid_parameter_noinfo
0x551E44: fld     dword ptr [ebx]
0x551E46: fadd    dword ptr [esi]
0x551E48: fstp    dword ptr [esi]
0x551E4A: cmp     esi, [ebp+8]
0x551E4D: jb      short loc_551E54
0x551E4F: call    __invalid_parameter_noinfo
0x551E54: add     esi, 4
0x551E57: cmp     ebx, [edi+8]
0x551E5A: jb      short loc_551E61
0x551E5C: call    __invalid_parameter_noinfo
0x551E61: add     ebx, 4
0x551E64: jmp     short loc_551DF0
0x551E66: mov     eax, [esp+14h+var_4]
0x551E6A: pop     edi
0x551E6B: pop     esi
0x551E6C: pop     ebp
0x551E6D: pop     ebx
0x551E6E: pop     ecx
0x551E6F: retn    4
