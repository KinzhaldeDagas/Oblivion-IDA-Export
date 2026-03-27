0x4E6DF0: sub     esp, 14h
0x4E6DF3: mov     eax, [esp+14h+arg_8]
0x4E6DF7: push    esi
0x4E6DF8: xor     esi, esi
0x4E6DFA: cmp     [esp+18h+arg_4], esi
0x4E6DFE: mov     [esp+18h+var_4], esi
0x4E6E02: mov     [eax], esi
0x4E6E04: jnz     short loc_4E6E15
0x4E6E06: mov     ecx, ds:0B333A0h
0x4E6E0C: call    TES__GetCurrentWorldspace
0x4E6E11: mov     [esp+18h+arg_4], eax
0x4E6E15: mov     eax, [esp+18h+arg_0]
0x4E6E19: fld     dword ptr [eax]
0x4E6E1B: fstp    [esp+18h+var_8]
0x4E6E1F: fld     [esp+18h+var_8]
0x4E6E23: fistp   [esp+18h+var_C]
0x4E6E27: fld     dword ptr [eax+4]
0x4E6E2A: fstp    [esp+18h+var_10]
0x4E6E2E: fld     [esp+18h+var_10]
0x4E6E32: fistp   [esp+18h+var_8]
0x4E6E36: mov     eax, [esp+18h+var_C]
0x4E6E3A: mov     ecx, eax
0x4E6E3C: and     ecx, 80000FFFh
0x4E6E42: mov     [esp+18h+var_10], esi
0x4E6E46: mov     [esp+18h+var_14], esi
0x4E6E4A: jns     short loc_4E6E54
0x4E6E4C: dec     ecx
0x4E6E4D: or      ecx, 0FFFFF000h
0x4E6E53: inc     ecx
0x4E6E54: jnz     short loc_4E6E5E
0x4E6E56: mov     [esp+18h+var_10], 1
0x4E6E5E: mov     ecx, [esp+18h+var_8]
0x4E6E62: mov     edx, ecx
0x4E6E64: and     edx, 80000FFFh
0x4E6E6A: jns     short loc_4E6E74
0x4E6E6C: dec     edx
0x4E6E6D: or      edx, 0FFFFF000h
0x4E6E73: inc     edx
0x4E6E74: jnz     short loc_4E6E7E
0x4E6E76: mov     [esp+18h+var_14], 1
0x4E6E7E: sar     ecx, 0Ch
0x4E6E81: sar     eax, 0Ch
0x4E6E84: cmp     [esp+18h+var_10], esi
0x4E6E88: mov     [esp+18h+var_C], ecx
0x4E6E8C: mov     [esp+18h+var_8], esi
0x4E6E90: jl      loc_4E6F20
0x4E6E96: push    ebp
0x4E6E97: push    ebx
0x4E6E98: mov     ebp, eax
0x4E6E9A: push    edi
0x4E6E9B: jmp     short loc_4E6EA0
0x4E6E9D: align 10h
0x4E6EA0: xor     ebx, ebx
0x4E6EA2: cmp     [esp+24h+var_14], ebx
0x4E6EA6: jl      short loc_4E6F02
0x4E6EA8: mov     edi, [esp+24h+var_C]
0x4E6EAC: lea     esp, [esp+0]
0x4E6EB0: mov     ecx, [esp+24h+arg_4]; this
0x4E6EB4: push    edi; signed int
0x4E6EB5: push    ebp; signed int
0x4E6EB6: call    TESWorldSpace__GetCellAtCellCoord
0x4E6EBB: test    eax, eax
0x4E6EBD: jz      short loc_4E6EE6
0x4E6EBF: mov     ecx, eax
0x4E6EC1: call    sub_4AF170
0x4E6EC6: mov     esi, eax
0x4E6EC8: test    esi, esi
0x4E6ECA: jz      short loc_4E6EE6
0x4E6ECC: cmp     esi, [esp+24h+arg_C]
0x4E6ED0: jz      short loc_4E6EE6
0x4E6ED2: mov     eax, [esp+24h+arg_0]
0x4E6ED6: push    eax
0x4E6ED7: mov     ecx, esi
0x4E6ED9: call    sub_4E6D60
0x4E6EDE: test    eax, eax
0x4E6EE0: mov     [esp+24h+var_4], eax
0x4E6EE4: jnz     short loc_4E6EF4
0x4E6EE6: add     ebx, 1
0x4E6EE9: sub     edi, 1
0x4E6EEC: cmp     ebx, [esp+24h+var_14]
0x4E6EF0: jle     short loc_4E6EB0
0x4E6EF2: jmp     short loc_4E6EFA
0x4E6EF4: mov     ecx, [esp+24h+arg_8]
0x4E6EF8: mov     [ecx], esi
0x4E6EFA: mov     esi, [esp+24h+var_4]
0x4E6EFE: test    esi, esi
0x4E6F00: jnz     short loc_4E6F16
0x4E6F02: mov     eax, [esp+24h+var_8]
0x4E6F06: add     eax, 1
0x4E6F09: sub     ebp, 1
0x4E6F0C: cmp     eax, [esp+24h+var_10]
0x4E6F10: mov     [esp+24h+var_8], eax
0x4E6F14: jle     short loc_4E6EA0
0x4E6F16: pop     edi
0x4E6F17: pop     ebx
0x4E6F18: pop     ebp
0x4E6F19: mov     eax, esi
0x4E6F1B: pop     esi
0x4E6F1C: add     esp, 14h
0x4E6F1F: retn
0x4E6F20: mov     eax, esi
0x4E6F22: pop     esi
0x4E6F23: add     esp, 14h
0x4E6F26: retn
