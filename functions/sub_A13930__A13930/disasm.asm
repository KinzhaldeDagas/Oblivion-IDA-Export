0xA13930: push    ebp
0xA13931: mov     ebp, esp
0xA13933: and     esp, 0FFFFFFF0h
0xA13936: sub     esp, 50h
0xA13939: mov     eax, ___security_cookie
0xA1393E: mov     [esp+50h+var_4], eax
0xA13942: mov     eax, offset off_A9CDE8
0xA13947: mov     [esp+50h+var_40], eax
0xA1394B: mov     ecx, [esp+50h+var_40]
0xA1394F: mov     byte ptr [esp+50h+var_44], al
0xA13953: mov     byte ptr [esp+50h+var_44+1], ah
0xA13957: shr     ecx, 18h
0xA1395A: shr     eax, 10h
0xA1395D: mov     byte ptr [esp+50h+var_44+3], cl
0xA13961: mov     ecx, [esp+50h+var_4]
0xA13965: mov     byte ptr [esp+50h+var_44+2], al
0xA13969: mov     edx, [esp+50h+var_44]
0xA1396D: mov     dword_B2FFCC, edx
0xA13973: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA13978: mov     esp, ebp
0xA1397A: pop     ebp
0xA1397B: retn
