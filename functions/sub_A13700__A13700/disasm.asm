0xA13700: push    ebp
0xA13701: mov     ebp, esp
0xA13703: and     esp, 0FFFFFFF0h
0xA13706: sub     esp, 0C0h
0xA1370C: mov     eax, ___security_cookie
0xA13711: mov     [esp+0C0h+var_4], eax
0xA13718: mov     eax, offset off_A9CC30
0xA1371D: mov     [esp+0C0h+var_B0], eax
0xA13721: mov     ecx, [esp+0C0h+var_B0]
0xA13725: mov     byte ptr [esp+0C0h+var_B4], al
0xA13729: mov     byte ptr [esp+0C0h+var_B4+1], ah
0xA1372D: shr     ecx, 18h
0xA13730: shr     eax, 10h
0xA13733: mov     byte ptr [esp+0C0h+var_B4+3], cl
0xA13737: mov     ecx, [esp+0C0h+var_4]
0xA1373E: mov     byte ptr [esp+0C0h+var_B4+2], al
0xA13742: mov     edx, [esp+0C0h+var_B4]
0xA13746: mov     dword_B2FF78, edx
0xA1374C: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA13751: mov     esp, ebp
0xA13753: pop     ebp
0xA13754: retn
