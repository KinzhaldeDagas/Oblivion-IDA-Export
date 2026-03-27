0xA138E0: push    ebp
0xA138E1: mov     ebp, esp
0xA138E3: and     esp, 0FFFFFFF0h
0xA138E6: sub     esp, 80h
0xA138EC: mov     eax, ___security_cookie
0xA138F1: mov     [esp+80h+var_4], eax
0xA138F5: mov     eax, offset off_A9CDAC
0xA138FA: mov     [esp+80h+var_70], eax
0xA138FE: mov     ecx, [esp+80h+var_70]
0xA13902: mov     byte ptr [esp+80h+var_74], al
0xA13906: mov     byte ptr [esp+80h+var_74+1], ah
0xA1390A: shr     ecx, 18h
0xA1390D: shr     eax, 10h
0xA13910: mov     byte ptr [esp+80h+var_74+3], cl
0xA13914: mov     ecx, [esp+80h+var_4]
0xA13918: mov     byte ptr [esp+80h+var_74+2], al
0xA1391C: mov     edx, [esp+80h+var_74]
0xA13920: mov     dword_B2FFC0, edx
0xA13926: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA1392B: mov     esp, ebp
0xA1392D: pop     ebp
0xA1392E: retn
