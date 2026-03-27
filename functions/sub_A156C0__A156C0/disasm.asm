0xA156C0: push    ebp
0xA156C1: mov     ebp, esp
0xA156C3: and     esp, 0FFFFFFF0h
0xA156C6: sub     esp, 40h
0xA156C9: mov     eax, ___security_cookie
0xA156CE: mov     [esp+40h+var_4], eax
0xA156D2: mov     eax, offset off_AA1A50
0xA156D7: mov     [esp+40h+var_30], eax
0xA156DB: mov     ecx, [esp+40h+var_30]
0xA156DF: mov     byte ptr [esp+40h+var_34], al
0xA156E3: mov     byte ptr [esp+40h+var_34+1], ah
0xA156E7: shr     ecx, 18h
0xA156EA: shr     eax, 10h
0xA156ED: mov     byte ptr [esp+40h+var_34+3], cl
0xA156F1: mov     ecx, [esp+40h+var_4]
0xA156F5: mov     byte ptr [esp+40h+var_34+2], al
0xA156F9: mov     edx, [esp+40h+var_34]
0xA156FD: mov     dword_B30558, edx
0xA15703: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA15708: mov     esp, ebp
0xA1570A: pop     ebp
0xA1570B: retn
