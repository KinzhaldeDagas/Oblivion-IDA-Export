0x505F60: push    ecx
0x505F61: mov     ecx, [esp+4+l]
0x505F65: mov     edx, [esp+4+arg_10]
0x505F69: push    esi
0x505F6A: mov     esi, [esp+8+a4]
0x505F6E: lea     eax, [esp+8+var_4]
0x505F72: push    eax; UInt16
0x505F73: mov     eax, [esp+0Ch+arg_C]
0x505F77: push    ecx; l
0x505F78: mov     ecx, [esp+10h+a3]
0x505F7C: push    edx; a6
0x505F7D: mov     edx, [esp+14h+arg_4]
0x505F81: push    eax; a5
0x505F82: mov     eax, [esp+18h+a1]
0x505F86: push    esi; a4
0x505F87: push    ecx; a3
0x505F88: push    edx; a2
0x505F89: push    eax; a1
0x505F8A: mov     dword ptr [esp+28h+var_4], 0
0x505F92: call    Script_ExtractArgs
0x505F97: add     esp, 20h
0x505F9A: test    al, al
0x505F9C: jnz     short loc_505FA1
0x505F9E: pop     esi
0x505F9F: pop     ecx
0x505FA0: retn
0x505FA1: mov     ecx, [esp+8+arg_18]
0x505FA5: mov     edx, dword ptr [esp+8+var_4]
0x505FA9: push    ecx
0x505FAA: push    0
0x505FAC: push    edx
0x505FAD: push    esi
0x505FAE: call    sub_4F8E70
0x505FB3: add     esp, 10h
0x505FB6: mov     al, 1
0x505FB8: pop     esi
0x505FB9: pop     ecx
0x505FBA: retn
