0x502BE0: push    ecx
0x502BE1: mov     ecx, [esp+4+l]
0x502BE5: mov     edx, [esp+4+arg_10]
0x502BE9: push    esi
0x502BEA: mov     esi, [esp+8+a4]
0x502BEE: lea     eax, [esp+8+var_4]
0x502BF2: push    eax; UInt16
0x502BF3: mov     eax, [esp+0Ch+arg_C]
0x502BF7: push    ecx; l
0x502BF8: mov     ecx, [esp+10h+a3]
0x502BFC: push    edx; a6
0x502BFD: mov     edx, [esp+14h+arg_4]
0x502C01: push    eax; a5
0x502C02: mov     eax, [esp+18h+a1]
0x502C06: push    esi; a4
0x502C07: push    ecx; a3
0x502C08: push    edx; a2
0x502C09: push    eax; a1
0x502C0A: mov     dword ptr [esp+28h+var_4], 0
0x502C12: call    Script_ExtractArgs
0x502C17: add     esp, 20h
0x502C1A: test    al, al
0x502C1C: jnz     short loc_502C21
0x502C1E: pop     esi
0x502C1F: pop     ecx
0x502C20: retn
0x502C21: mov     ecx, [esp+8+arg_18]
0x502C25: mov     edx, dword ptr [esp+8+var_4]
0x502C29: push    ecx
0x502C2A: push    0
0x502C2C: push    edx
0x502C2D: push    esi
0x502C2E: call    sub_4F4B70
0x502C33: add     esp, 10h
0x502C36: pop     esi
0x502C37: pop     ecx
0x502C38: retn
