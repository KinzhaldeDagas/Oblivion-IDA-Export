0xA12C70: push    ebp
0xA12C71: mov     ebp, esp
0xA12C73: and     esp, 0FFFFFFF0h
0xA12C76: sub     esp, 40h
0xA12C79: mov     eax, ___security_cookie
0xA12C7E: mov     [esp+40h+var_4], eax
0xA12C82: mov     eax, offset off_A9AC24
0xA12C87: mov     [esp+40h+var_30], eax
0xA12C8B: mov     ecx, [esp+40h+var_30]
0xA12C8F: mov     byte ptr [esp+40h+var_34], al
0xA12C93: mov     byte ptr [esp+40h+var_34+1], ah
0xA12C97: shr     ecx, 18h
0xA12C9A: shr     eax, 10h
0xA12C9D: mov     byte ptr [esp+40h+var_34+3], cl
0xA12CA1: mov     ecx, [esp+40h+var_4]
0xA12CA5: mov     byte ptr [esp+40h+var_34+2], al
0xA12CA9: mov     edx, [esp+40h+var_34]
0xA12CAD: mov     dword_B2FD10, edx
0xA12CB3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA12CB8: mov     esp, ebp
0xA12CBA: pop     ebp
0xA12CBB: retn
