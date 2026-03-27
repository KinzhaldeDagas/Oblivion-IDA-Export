0xA12A30: push    ebp
0xA12A31: mov     ebp, esp
0xA12A33: and     esp, 0FFFFFFF0h
0xA12A36: sub     esp, 0C0h
0xA12A3C: mov     eax, ___security_cookie
0xA12A41: mov     [esp+0C0h+var_4], eax
0xA12A48: mov     eax, offset off_A99BF0
0xA12A4D: mov     [esp+0C0h+var_B0], eax
0xA12A51: mov     ecx, [esp+0C0h+var_B0]
0xA12A55: mov     byte ptr [esp+0C0h+var_B4], al
0xA12A59: mov     byte ptr [esp+0C0h+var_B4+1], ah
0xA12A5D: shr     ecx, 18h
0xA12A60: shr     eax, 10h
0xA12A63: mov     byte ptr [esp+0C0h+var_B4+3], cl
0xA12A67: mov     ecx, [esp+0C0h+var_4]
0xA12A6E: mov     byte ptr [esp+0C0h+var_B4+2], al
0xA12A72: mov     edx, [esp+0C0h+var_B4]
0xA12A76: mov     dword_B2FA88, edx
0xA12A7C: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA12A81: mov     esp, ebp
0xA12A83: pop     ebp
0xA12A84: retn
