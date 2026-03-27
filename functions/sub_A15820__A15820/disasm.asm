0xA15820: push    ebp
0xA15821: mov     ebp, esp
0xA15823: and     esp, 0FFFFFFF0h
0xA15826: sub     esp, 50h
0xA15829: mov     eax, ___security_cookie
0xA1582E: mov     [esp+50h+var_4], eax
0xA15832: mov     eax, offset off_AA1BDC
0xA15837: mov     [esp+50h+var_40], eax
0xA1583B: mov     ecx, [esp+50h+var_40]
0xA1583F: mov     byte ptr [esp+50h+var_44], al
0xA15843: mov     byte ptr [esp+50h+var_44+1], ah
0xA15847: shr     ecx, 18h
0xA1584A: shr     eax, 10h
0xA1584D: mov     byte ptr [esp+50h+var_44+3], cl
0xA15851: mov     ecx, [esp+50h+var_4]
0xA15855: mov     byte ptr [esp+50h+var_44+2], al
0xA15859: mov     edx, [esp+50h+var_44]
0xA1585D: mov     dword_B3057C, edx
0xA15863: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA15868: mov     esp, ebp
0xA1586A: pop     ebp
0xA1586B: retn
