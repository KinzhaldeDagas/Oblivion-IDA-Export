0xA135C0: push    ebp
0xA135C1: mov     ebp, esp
0xA135C3: and     esp, 0FFFFFFF0h
0xA135C6: sub     esp, 80h
0xA135CC: mov     eax, ___security_cookie
0xA135D1: mov     [esp+80h+var_4], eax
0xA135D5: mov     eax, offset off_A9CBA0
0xA135DA: mov     [esp+80h+var_70], eax
0xA135DE: mov     ecx, [esp+80h+var_70]
0xA135E2: mov     byte ptr [esp+80h+var_74], al
0xA135E6: mov     byte ptr [esp+80h+var_74+1], ah
0xA135EA: shr     ecx, 18h
0xA135ED: shr     eax, 10h
0xA135F0: mov     byte ptr [esp+80h+var_74+3], cl
0xA135F4: mov     ecx, [esp+80h+var_4]
0xA135F8: mov     byte ptr [esp+80h+var_74+2], al
0xA135FC: mov     edx, [esp+80h+var_74]
0xA13600: mov     dword_B2FF48, edx
0xA13606: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA1360B: mov     esp, ebp
0xA1360D: pop     ebp
0xA1360E: retn
