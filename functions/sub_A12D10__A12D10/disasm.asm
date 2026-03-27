0xA12D10: push    ebp
0xA12D11: mov     ebp, esp
0xA12D13: and     esp, 0FFFFFFF0h
0xA12D16: sub     esp, 90h
0xA12D1C: mov     eax, ___security_cookie
0xA12D21: mov     [esp+90h+var_4], eax
0xA12D28: mov     eax, offset off_A9ACF4
0xA12D2D: mov     [esp+90h+var_80], eax
0xA12D31: mov     ecx, [esp+90h+var_80]
0xA12D35: mov     byte ptr [esp+90h+var_84], al
0xA12D39: mov     byte ptr [esp+90h+var_84+1], ah
0xA12D3D: shr     ecx, 18h
0xA12D40: shr     eax, 10h
0xA12D43: mov     byte ptr [esp+90h+var_84+3], cl
0xA12D47: mov     ecx, [esp+90h+var_4]
0xA12D4E: mov     byte ptr [esp+90h+var_84+2], al
0xA12D52: mov     edx, [esp+90h+var_84]
0xA12D56: mov     dword_B2FD38, edx
0xA12D5C: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA12D61: mov     esp, ebp
0xA12D63: pop     ebp
0xA12D64: retn
