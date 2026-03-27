0xA13A60: push    ebp
0xA13A61: mov     ebp, esp
0xA13A63: and     esp, 0FFFFFFF0h
0xA13A66: sub     esp, 60h
0xA13A69: mov     eax, ___security_cookie
0xA13A6E: mov     [esp+60h+var_4], eax
0xA13A72: mov     eax, offset off_A9CF48
0xA13A77: mov     [esp+60h+var_50], eax
0xA13A7B: mov     ecx, [esp+60h+var_50]
0xA13A7F: mov     byte ptr [esp+60h+var_54], al
0xA13A83: mov     byte ptr [esp+60h+var_54+1], ah
0xA13A87: shr     ecx, 18h
0xA13A8A: shr     eax, 10h
0xA13A8D: mov     byte ptr [esp+60h+var_54+3], cl
0xA13A91: mov     ecx, [esp+60h+var_4]
0xA13A95: mov     byte ptr [esp+60h+var_54+2], al
0xA13A99: mov     edx, [esp+60h+var_54]
0xA13A9D: mov     dword_B30000, edx
0xA13AA3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA13AA8: mov     esp, ebp
0xA13AAA: pop     ebp
0xA13AAB: retn
