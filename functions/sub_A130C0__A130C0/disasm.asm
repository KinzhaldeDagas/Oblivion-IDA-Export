0xA130C0: push    ebp
0xA130C1: mov     ebp, esp
0xA130C3: and     esp, 0FFFFFFF0h
0xA130C6: sub     esp, 40h
0xA130C9: mov     eax, ___security_cookie
0xA130CE: mov     [esp+40h+var_4], eax
0xA130D2: mov     eax, offset off_A9B148
0xA130D7: mov     [esp+40h+var_30], eax
0xA130DB: mov     ecx, [esp+40h+var_30]
0xA130DF: mov     byte ptr [esp+40h+var_34], al
0xA130E3: mov     byte ptr [esp+40h+var_34+1], ah
0xA130E7: shr     ecx, 18h
0xA130EA: shr     eax, 10h
0xA130ED: mov     byte ptr [esp+40h+var_34+3], cl
0xA130F1: mov     ecx, [esp+40h+var_4]
0xA130F5: mov     byte ptr [esp+40h+var_34+2], al
0xA130F9: mov     edx, [esp+40h+var_34]
0xA130FD: mov     dword_B2FDB8, edx
0xA13103: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA13108: mov     esp, ebp
0xA1310A: pop     ebp
0xA1310B: retn
