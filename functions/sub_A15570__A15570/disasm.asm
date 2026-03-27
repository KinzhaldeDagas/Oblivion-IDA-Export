0xA15570: push    ebp
0xA15571: mov     ebp, esp
0xA15573: and     esp, 0FFFFFFF0h
0xA15576: sub     esp, 60h
0xA15579: mov     eax, ___security_cookie
0xA1557E: mov     [esp+60h+var_4], eax
0xA15582: mov     eax, offset off_AA1968
0xA15587: mov     [esp+60h+var_50], eax
0xA1558B: mov     ecx, [esp+60h+var_50]
0xA1558F: mov     byte ptr [esp+60h+var_54], al
0xA15593: mov     byte ptr [esp+60h+var_54+1], ah
0xA15597: shr     ecx, 18h
0xA1559A: shr     eax, 10h
0xA1559D: mov     byte ptr [esp+60h+var_54+3], cl
0xA155A1: mov     ecx, [esp+60h+var_4]
0xA155A5: mov     byte ptr [esp+60h+var_54+2], al
0xA155A9: mov     edx, [esp+60h+var_54]
0xA155AD: mov     dword_B30528, edx
0xA155B3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA155B8: mov     esp, ebp
0xA155BA: pop     ebp
0xA155BB: retn
