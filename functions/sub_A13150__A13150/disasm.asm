0xA13150: push    ebp
0xA13151: mov     ebp, esp
0xA13153: and     esp, 0FFFFFFF0h
0xA13156: sub     esp, 50h
0xA13159: mov     eax, ___security_cookie
0xA1315E: mov     [esp+50h+var_4], eax
0xA13162: mov     eax, offset off_A9B2A0
0xA13167: mov     [esp+50h+var_40], eax
0xA1316B: mov     ecx, [esp+50h+var_40]
0xA1316F: mov     byte ptr [esp+50h+var_44], al
0xA13173: mov     byte ptr [esp+50h+var_44+1], ah
0xA13177: shr     ecx, 18h
0xA1317A: shr     eax, 10h
0xA1317D: mov     byte ptr [esp+50h+var_44+3], cl
0xA13181: mov     ecx, [esp+50h+var_4]
0xA13185: mov     byte ptr [esp+50h+var_44+2], al
0xA13189: mov     edx, [esp+50h+var_44]
0xA1318D: mov     dword_B2FDD0, edx
0xA13193: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA13198: mov     esp, ebp
0xA1319A: pop     ebp
0xA1319B: retn
