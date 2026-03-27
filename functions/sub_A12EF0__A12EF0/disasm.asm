0xA12EF0: push    ebp
0xA12EF1: mov     ebp, esp
0xA12EF3: and     esp, 0FFFFFFF0h
0xA12EF6: sub     esp, 120h
0xA12EFC: mov     eax, ___security_cookie
0xA12F01: mov     [esp+120h+var_4], eax
0xA12F08: mov     eax, offset off_A9AE10
0xA12F0D: mov     [esp+120h+var_110], eax
0xA12F11: mov     ecx, [esp+120h+var_110]
0xA12F15: mov     byte ptr [esp+120h+var_114], al
0xA12F19: mov     byte ptr [esp+120h+var_114+1], ah
0xA12F1D: shr     ecx, 18h
0xA12F20: shr     eax, 10h
0xA12F23: mov     byte ptr [esp+120h+var_114+3], cl
0xA12F27: mov     ecx, [esp+120h+var_4]
0xA12F2E: mov     byte ptr [esp+120h+var_114+2], al
0xA12F32: mov     edx, [esp+120h+var_114]
0xA12F36: mov     dword_B2FD7C, edx
0xA12F3C: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA12F41: mov     esp, ebp
0xA12F43: pop     ebp
0xA12F44: retn
