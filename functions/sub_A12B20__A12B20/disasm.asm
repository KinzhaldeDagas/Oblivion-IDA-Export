0xA12B20: push    ebp
0xA12B21: mov     ebp, esp
0xA12B23: and     esp, 0FFFFFFF0h
0xA12B26: sub     esp, 50h
0xA12B29: mov     eax, ___security_cookie
0xA12B2E: mov     [esp+50h+var_4], eax
0xA12B32: mov     eax, offset off_A9A274
0xA12B37: mov     [esp+50h+var_40], eax
0xA12B3B: mov     ecx, [esp+50h+var_40]
0xA12B3F: mov     byte ptr [esp+50h+var_44], al
0xA12B43: mov     byte ptr [esp+50h+var_44+1], ah
0xA12B47: shr     ecx, 18h
0xA12B4A: shr     eax, 10h
0xA12B4D: mov     byte ptr [esp+50h+var_44+3], cl
0xA12B51: mov     ecx, [esp+50h+var_4]
0xA12B55: mov     byte ptr [esp+50h+var_44+2], al
0xA12B59: mov     edx, [esp+50h+var_44]
0xA12B5D: mov     dword_B2FC2C, edx
0xA12B63: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA12B68: mov     esp, ebp
0xA12B6A: pop     ebp
0xA12B6B: retn
