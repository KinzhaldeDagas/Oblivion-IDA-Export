0xA154D0: push    ebp
0xA154D1: mov     ebp, esp
0xA154D3: and     esp, 0FFFFFFF0h
0xA154D6: sub     esp, 40h
0xA154D9: mov     eax, ___security_cookie
0xA154DE: mov     [esp+40h+var_4], eax
0xA154E2: mov     eax, offset off_AA1948
0xA154E7: mov     [esp+40h+var_30], eax
0xA154EB: mov     ecx, [esp+40h+var_30]
0xA154EF: mov     byte ptr [esp+40h+var_34], al
0xA154F3: mov     byte ptr [esp+40h+var_34+1], ah
0xA154F7: shr     ecx, 18h
0xA154FA: shr     eax, 10h
0xA154FD: mov     byte ptr [esp+40h+var_34+3], cl
0xA15501: mov     ecx, [esp+40h+var_4]
0xA15505: mov     byte ptr [esp+40h+var_34+2], al
0xA15509: mov     edx, [esp+40h+var_34]
0xA1550D: mov     dword_B30510, edx
0xA15513: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA15518: mov     esp, ebp
0xA1551A: pop     ebp
0xA1551B: retn
