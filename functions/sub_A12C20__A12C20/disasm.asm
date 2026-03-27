0xA12C20: push    ebp
0xA12C21: mov     ebp, esp
0xA12C23: and     esp, 0FFFFFFF0h
0xA12C26: sub     esp, 40h
0xA12C29: mov     eax, ___security_cookie
0xA12C2E: mov     [esp+40h+var_4], eax
0xA12C32: mov     eax, offset off_A9ABC4
0xA12C37: mov     [esp+40h+var_30], eax
0xA12C3B: mov     ecx, [esp+40h+var_30]
0xA12C3F: mov     byte ptr [esp+40h+var_34], al
0xA12C43: mov     byte ptr [esp+40h+var_34+1], ah
0xA12C47: shr     ecx, 18h
0xA12C4A: shr     eax, 10h
0xA12C4D: mov     byte ptr [esp+40h+var_34+3], cl
0xA12C51: mov     ecx, [esp+40h+var_4]
0xA12C55: mov     byte ptr [esp+40h+var_34+2], al
0xA12C59: mov     edx, [esp+40h+var_34]
0xA12C5D: mov     dword_B2FD04, edx
0xA12C63: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA12C68: mov     esp, ebp
0xA12C6A: pop     ebp
0xA12C6B: retn
