0xA12FB0: push    ebp
0xA12FB1: mov     ebp, esp
0xA12FB3: and     esp, 0FFFFFFF0h
0xA12FB6: sub     esp, 120h
0xA12FBC: mov     eax, ___security_cookie
0xA12FC1: mov     [esp+120h+var_4], eax
0xA12FC8: mov     eax, offset off_A9AF38
0xA12FCD: mov     [esp+120h+var_110], eax
0xA12FD1: mov     ecx, [esp+120h+var_110]
0xA12FD5: mov     byte ptr [esp+120h+var_114], al
0xA12FD9: mov     byte ptr [esp+120h+var_114+1], ah
0xA12FDD: shr     ecx, 18h
0xA12FE0: shr     eax, 10h
0xA12FE3: mov     byte ptr [esp+120h+var_114+3], cl
0xA12FE7: mov     ecx, [esp+120h+var_4]
0xA12FEE: mov     byte ptr [esp+120h+var_114+2], al
0xA12FF2: mov     edx, [esp+120h+var_114]
0xA12FF6: mov     dword_B2FD94, edx
0xA12FFC: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA13001: mov     esp, ebp
0xA13003: pop     ebp
0xA13004: retn
