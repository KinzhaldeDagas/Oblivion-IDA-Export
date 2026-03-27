0xA12CC0: push    ebp
0xA12CC1: mov     ebp, esp
0xA12CC3: and     esp, 0FFFFFFF0h
0xA12CC6: sub     esp, 80h
0xA12CCC: mov     eax, ___security_cookie
0xA12CD1: mov     [esp+80h+var_4], eax
0xA12CD5: mov     eax, offset off_A9ACB0
0xA12CDA: mov     [esp+80h+var_70], eax
0xA12CDE: mov     ecx, [esp+80h+var_70]
0xA12CE2: mov     byte ptr [esp+80h+var_74], al
0xA12CE6: mov     byte ptr [esp+80h+var_74+1], ah
0xA12CEA: shr     ecx, 18h
0xA12CED: shr     eax, 10h
0xA12CF0: mov     byte ptr [esp+80h+var_74+3], cl
0xA12CF4: mov     ecx, [esp+80h+var_4]
0xA12CF8: mov     byte ptr [esp+80h+var_74+2], al
0xA12CFC: mov     edx, [esp+80h+var_74]
0xA12D00: mov     dword_B2FD1C, edx
0xA12D06: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA12D0B: mov     esp, ebp
0xA12D0D: pop     ebp
0xA12D0E: retn
