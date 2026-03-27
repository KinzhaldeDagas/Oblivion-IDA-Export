0xA136B0: push    ebp
0xA136B1: mov     ebp, esp
0xA136B3: and     esp, 0FFFFFFF0h
0xA136B6: sub     esp, 40h
0xA136B9: mov     eax, ___security_cookie
0xA136BE: mov     [esp+40h+var_4], eax
0xA136C2: mov     eax, offset ??_7hkBreakableConstraintData@@6B@; const hkBreakableConstraintData::`vftable'
0xA136C7: mov     [esp+40h+var_30], eax
0xA136CB: mov     ecx, [esp+40h+var_30]
0xA136CF: mov     byte ptr [esp+40h+var_34], al
0xA136D3: mov     byte ptr [esp+40h+var_34+1], ah
0xA136D7: shr     ecx, 18h
0xA136DA: shr     eax, 10h
0xA136DD: mov     byte ptr [esp+40h+var_34+3], cl
0xA136E1: mov     ecx, [esp+40h+var_4]
0xA136E5: mov     byte ptr [esp+40h+var_34+2], al
0xA136E9: mov     edx, [esp+40h+var_34]
0xA136ED: mov     dword_B2FF6C, edx
0xA136F3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA136F8: mov     esp, ebp
0xA136FA: pop     ebp
0xA136FB: retn
