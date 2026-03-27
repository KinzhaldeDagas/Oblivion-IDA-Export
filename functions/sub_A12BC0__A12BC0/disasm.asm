0xA12BC0: push    ebp
0xA12BC1: mov     ebp, esp
0xA12BC3: and     esp, 0FFFFFFF0h
0xA12BC6: sub     esp, 40h
0xA12BC9: mov     eax, ___security_cookie
0xA12BCE: mov     [esp+40h+var_4], eax
0xA12BD2: mov     eax, offset off_A96B78
0xA12BD7: mov     [esp+40h+var_30], eax
0xA12BDB: mov     ecx, [esp+40h+var_30]
0xA12BDF: mov     byte ptr [esp+40h+var_34], al
0xA12BE3: mov     byte ptr [esp+40h+var_34+1], ah
0xA12BE7: shr     ecx, 18h
0xA12BEA: shr     eax, 10h
0xA12BED: mov     byte ptr [esp+40h+var_34+3], cl
0xA12BF1: mov     ecx, [esp+40h+var_4]
0xA12BF5: mov     byte ptr [esp+40h+var_34+2], al
0xA12BF9: mov     edx, [esp+40h+var_34]
0xA12BFD: mov     dword_B2FC44, edx
0xA12C03: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA12C08: mov     esp, ebp
0xA12C0A: pop     ebp
0xA12C0B: retn
