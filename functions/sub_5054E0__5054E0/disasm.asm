0x5054E0: push    ecx
0x5054E1: mov     ecx, [esp+4+l]
0x5054E5: mov     edx, [esp+4+arg_10]
0x5054E9: push    esi
0x5054EA: mov     esi, [esp+8+a4]
0x5054EE: lea     eax, [esp+8+var_4]
0x5054F2: push    eax; UInt16
0x5054F3: mov     eax, [esp+0Ch+arg_C]
0x5054F7: push    ecx; l
0x5054F8: mov     ecx, [esp+10h+a3]
0x5054FC: push    edx; a6
0x5054FD: mov     edx, [esp+14h+arg_4]
0x505501: push    eax; a5
0x505502: mov     eax, [esp+18h+a1]
0x505506: push    esi; a4
0x505507: push    ecx; a3
0x505508: push    edx; a2
0x505509: push    eax; a1
0x50550A: mov     dword ptr [esp+28h+var_4], 0
0x505512: call    Script_ExtractArgs
0x505517: add     esp, 20h
0x50551A: test    al, al
0x50551C: jnz     short loc_505521
0x50551E: pop     esi
0x50551F: pop     ecx
0x505520: retn
0x505521: mov     ecx, [esp+8+arg_18]
0x505525: mov     edx, dword ptr [esp+8+var_4]
0x505529: push    ecx
0x50552A: push    0
0x50552C: push    edx
0x50552D: push    esi
0x50552E: call    sub_4F8140
0x505533: add     esp, 10h
0x505536: mov     al, 1
0x505538: pop     esi
0x505539: pop     ecx
0x50553A: retn
