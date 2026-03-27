0xA13660: push    ebp
0xA13661: mov     ebp, esp
0xA13663: and     esp, 0FFFFFFF0h
0xA13666: sub     esp, 40h
0xA13669: mov     eax, ___security_cookie
0xA1366E: mov     [esp+40h+var_4], eax
0xA13672: mov     eax, offset ??_7hkMalleableConstraintData@@6B@; const hkMalleableConstraintData::`vftable'
0xA13677: mov     [esp+40h+var_30], eax
0xA1367B: mov     ecx, [esp+40h+var_30]
0xA1367F: mov     byte ptr [esp+40h+var_34], al
0xA13683: mov     byte ptr [esp+40h+var_34+1], ah
0xA13687: shr     ecx, 18h
0xA1368A: shr     eax, 10h
0xA1368D: mov     byte ptr [esp+40h+var_34+3], cl
0xA13691: mov     ecx, [esp+40h+var_4]
0xA13695: mov     byte ptr [esp+40h+var_34+2], al
0xA13699: mov     edx, [esp+40h+var_34]
0xA1369D: mov     dword_B2FF60, edx
0xA136A3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA136A8: mov     esp, ebp
0xA136AA: pop     ebp
0xA136AB: retn
