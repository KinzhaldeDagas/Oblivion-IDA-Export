0xA13570: push    ebp
0xA13571: mov     ebp, esp
0xA13573: and     esp, 0FFFFFFF0h
0xA13576: sub     esp, 60h
0xA13579: mov     eax, ___security_cookie
0xA1357E: mov     [esp+60h+var_4], eax
0xA13582: mov     eax, offset off_A9CB64
0xA13587: mov     [esp+60h+var_50], eax
0xA1358B: mov     ecx, [esp+60h+var_50]
0xA1358F: mov     byte ptr [esp+60h+var_54], al
0xA13593: mov     byte ptr [esp+60h+var_54+1], ah
0xA13597: shr     ecx, 18h
0xA1359A: shr     eax, 10h
0xA1359D: mov     byte ptr [esp+60h+var_54+3], cl
0xA135A1: mov     ecx, [esp+60h+var_4]
0xA135A5: mov     byte ptr [esp+60h+var_54+2], al
0xA135A9: mov     edx, [esp+60h+var_54]
0xA135AD: mov     dword_B2FF3C, edx
0xA135B3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA135B8: mov     esp, ebp
0xA135BA: pop     ebp
0xA135BB: retn
