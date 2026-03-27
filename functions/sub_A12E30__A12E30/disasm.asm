0xA12E30: push    ebp
0xA12E31: mov     ebp, esp
0xA12E33: and     esp, 0FFFFFFF0h
0xA12E36: sub     esp, 30h
0xA12E39: mov     eax, ___security_cookie
0xA12E3E: mov     [esp+30h+var_4], eax
0xA12E42: mov     eax, offset off_A9AD5C
0xA12E47: mov     [esp+30h+var_20], eax
0xA12E4B: mov     ecx, [esp+30h+var_20]
0xA12E4F: mov     byte ptr [esp+30h+var_24], al
0xA12E53: mov     byte ptr [esp+30h+var_24+1], ah
0xA12E57: shr     ecx, 18h
0xA12E5A: shr     eax, 10h
0xA12E5D: mov     byte ptr [esp+30h+var_24+3], cl
0xA12E61: mov     ecx, [esp+30h+var_4]
0xA12E65: mov     byte ptr [esp+30h+var_24+2], al
0xA12E69: mov     edx, [esp+30h+var_24]
0xA12E6D: mov     dword_B2FD5C, edx
0xA12E73: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA12E78: mov     esp, ebp
0xA12E7A: pop     ebp
0xA12E7B: retn
