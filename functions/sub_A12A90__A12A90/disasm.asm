0xA12A90: push    ebp
0xA12A91: mov     ebp, esp
0xA12A93: and     esp, 0FFFFFFF0h
0xA12A96: sub     esp, 40h
0xA12A99: mov     eax, ___security_cookie
0xA12A9E: mov     [esp+40h+var_4], eax
0xA12AA2: mov     eax, offset off_A99D60
0xA12AA7: mov     [esp+40h+var_30], eax
0xA12AAB: mov     ecx, [esp+40h+var_30]
0xA12AAF: mov     byte ptr [esp+40h+var_34], al
0xA12AB3: mov     byte ptr [esp+40h+var_34+1], ah
0xA12AB7: shr     ecx, 18h
0xA12ABA: shr     eax, 10h
0xA12ABD: mov     byte ptr [esp+40h+var_34+3], cl
0xA12AC1: mov     ecx, [esp+40h+var_4]
0xA12AC5: mov     byte ptr [esp+40h+var_34+2], al
0xA12AC9: mov     edx, [esp+40h+var_34]
0xA12ACD: mov     dword_B2FA94, edx
0xA12AD3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA12AD8: mov     esp, ebp
0xA12ADA: pop     ebp
0xA12ADB: retn
