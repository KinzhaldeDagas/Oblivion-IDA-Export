0xA152A0: push    ebp
0xA152A1: mov     ebp, esp
0xA152A3: and     esp, 0FFFFFFF0h
0xA152A6: sub     esp, 40h
0xA152A9: mov     eax, ___security_cookie
0xA152AE: mov     [esp+40h+var_4], eax
0xA152B2: mov     eax, offset off_AA1838
0xA152B7: mov     [esp+40h+var_30], eax
0xA152BB: mov     ecx, [esp+40h+var_30]
0xA152BF: mov     byte ptr [esp+40h+var_34], al
0xA152C3: mov     byte ptr [esp+40h+var_34+1], ah
0xA152C7: shr     ecx, 18h
0xA152CA: shr     eax, 10h
0xA152CD: mov     byte ptr [esp+40h+var_34+3], cl
0xA152D1: mov     ecx, [esp+40h+var_4]
0xA152D5: mov     byte ptr [esp+40h+var_34+2], al
0xA152D9: mov     edx, [esp+40h+var_34]
0xA152DD: mov     dword_B304C8, edx
0xA152E3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA152E8: mov     esp, ebp
0xA152EA: pop     ebp
0xA152EB: retn
