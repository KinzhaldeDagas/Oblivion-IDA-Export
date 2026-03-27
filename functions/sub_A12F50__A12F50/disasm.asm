0xA12F50: push    ebp
0xA12F51: mov     ebp, esp
0xA12F53: and     esp, 0FFFFFFF0h
0xA12F56: sub     esp, 120h
0xA12F5C: mov     eax, ___security_cookie
0xA12F61: mov     [esp+120h+var_4], eax
0xA12F68: mov     eax, offset off_A9AEC0
0xA12F6D: mov     [esp+120h+var_110], eax
0xA12F71: mov     ecx, [esp+120h+var_110]
0xA12F75: mov     byte ptr [esp+120h+var_114], al
0xA12F79: mov     byte ptr [esp+120h+var_114+1], ah
0xA12F7D: shr     ecx, 18h
0xA12F80: shr     eax, 10h
0xA12F83: mov     byte ptr [esp+120h+var_114+3], cl
0xA12F87: mov     ecx, [esp+120h+var_4]
0xA12F8E: mov     byte ptr [esp+120h+var_114+2], al
0xA12F92: mov     edx, [esp+120h+var_114]
0xA12F96: mov     dword_B2FD88, edx
0xA12F9C: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA12FA1: mov     esp, ebp
0xA12FA3: pop     ebp
0xA12FA4: retn
