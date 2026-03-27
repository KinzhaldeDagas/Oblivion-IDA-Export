0xA13760: push    ebp
0xA13761: mov     ebp, esp
0xA13763: and     esp, 0FFFFFFF0h
0xA13766: sub     esp, 50h
0xA13769: mov     eax, ___security_cookie
0xA1376E: mov     [esp+50h+var_4], eax
0xA13772: mov     eax, offset off_A9CC6C
0xA13777: mov     [esp+50h+var_40], eax
0xA1377B: mov     ecx, [esp+50h+var_40]
0xA1377F: mov     byte ptr [esp+50h+var_44], al
0xA13783: mov     byte ptr [esp+50h+var_44+1], ah
0xA13787: shr     ecx, 18h
0xA1378A: shr     eax, 10h
0xA1378D: mov     byte ptr [esp+50h+var_44+3], cl
0xA13791: mov     ecx, [esp+50h+var_4]
0xA13795: mov     byte ptr [esp+50h+var_44+2], al
0xA13799: mov     edx, [esp+50h+var_44]
0xA1379D: mov     dword_B2FF84, edx
0xA137A3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA137A8: mov     esp, ebp
0xA137AA: pop     ebp
0xA137AB: retn
