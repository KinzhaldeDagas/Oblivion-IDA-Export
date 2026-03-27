0xA13B00: push    ebp
0xA13B01: mov     ebp, esp
0xA13B03: and     esp, 0FFFFFFF0h
0xA13B06: sub     esp, 80h
0xA13B0C: mov     eax, ___security_cookie
0xA13B11: mov     [esp+80h+var_4], eax
0xA13B15: mov     eax, offset off_A9D0E8
0xA13B1A: mov     [esp+80h+var_70], eax
0xA13B1E: mov     ecx, [esp+80h+var_70]
0xA13B22: mov     byte ptr [esp+80h+var_74], al
0xA13B26: mov     byte ptr [esp+80h+var_74+1], ah
0xA13B2A: shr     ecx, 18h
0xA13B2D: shr     eax, 10h
0xA13B30: mov     byte ptr [esp+80h+var_74+3], cl
0xA13B34: mov     ecx, [esp+80h+var_4]
0xA13B38: mov     byte ptr [esp+80h+var_74+2], al
0xA13B3C: mov     edx, [esp+80h+var_74]
0xA13B40: mov     dword_B30048, edx
0xA13B46: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA13B4B: mov     esp, ebp
0xA13B4D: pop     ebp
0xA13B4E: retn
