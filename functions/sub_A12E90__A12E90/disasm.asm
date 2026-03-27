0xA12E90: push    ebp
0xA12E91: mov     ebp, esp
0xA12E93: and     esp, 0FFFFFFF0h
0xA12E96: sub     esp, 120h
0xA12E9C: mov     eax, ___security_cookie
0xA12EA1: mov     [esp+120h+var_4], eax
0xA12EA8: mov     eax, offset off_A9AD90
0xA12EAD: mov     [esp+120h+var_110], eax
0xA12EB1: mov     ecx, [esp+120h+var_110]
0xA12EB5: mov     byte ptr [esp+120h+var_114], al
0xA12EB9: mov     byte ptr [esp+120h+var_114+1], ah
0xA12EBD: shr     ecx, 18h
0xA12EC0: shr     eax, 10h
0xA12EC3: mov     byte ptr [esp+120h+var_114+3], cl
0xA12EC7: mov     ecx, [esp+120h+var_4]
0xA12ECE: mov     byte ptr [esp+120h+var_114+2], al
0xA12ED2: mov     edx, [esp+120h+var_114]
0xA12ED6: mov     dword_B2FD70, edx
0xA12EDC: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA12EE1: mov     esp, ebp
0xA12EE3: pop     ebp
0xA12EE4: retn
