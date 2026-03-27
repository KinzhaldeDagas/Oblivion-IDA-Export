0xA13610: push    ebp
0xA13611: mov     ebp, esp
0xA13613: and     esp, 0FFFFFFF0h
0xA13616: sub     esp, 60h
0xA13619: mov     eax, ___security_cookie
0xA1361E: mov     [esp+60h+var_4], eax
0xA13622: mov     eax, offset ??_7hkMotorAction@@6B@; const hkMotorAction::`vftable'
0xA13627: mov     [esp+60h+var_50], eax
0xA1362B: mov     ecx, [esp+60h+var_50]
0xA1362F: mov     byte ptr [esp+60h+var_54], al
0xA13633: mov     byte ptr [esp+60h+var_54+1], ah
0xA13637: shr     ecx, 18h
0xA1363A: shr     eax, 10h
0xA1363D: mov     byte ptr [esp+60h+var_54+3], cl
0xA13641: mov     ecx, [esp+60h+var_4]
0xA13645: mov     byte ptr [esp+60h+var_54+2], al
0xA13649: mov     edx, [esp+60h+var_54]
0xA1364D: mov     dword_B2FF54, edx
0xA13653: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA13658: mov     esp, ebp
0xA1365A: pop     ebp
0xA1365B: retn
