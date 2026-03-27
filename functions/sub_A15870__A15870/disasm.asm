0xA15870: push    ebp
0xA15871: mov     ebp, esp
0xA15873: and     esp, 0FFFFFFF0h
0xA15876: sub     esp, 40h
0xA15879: mov     eax, ___security_cookie
0xA1587E: mov     [esp+40h+var_4], eax
0xA15882: mov     eax, offset off_AA1BEC
0xA15887: mov     [esp+40h+var_30], eax
0xA1588B: mov     ecx, [esp+40h+var_30]
0xA1588F: mov     byte ptr [esp+40h+var_34], al
0xA15893: mov     byte ptr [esp+40h+var_34+1], ah
0xA15897: shr     ecx, 18h
0xA1589A: shr     eax, 10h
0xA1589D: mov     byte ptr [esp+40h+var_34+3], cl
0xA158A1: mov     ecx, [esp+40h+var_4]
0xA158A5: mov     byte ptr [esp+40h+var_34+2], al
0xA158A9: mov     edx, [esp+40h+var_34]
0xA158AD: mov     dword_B30588, edx
0xA158B3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA158B8: mov     esp, ebp
0xA158BA: pop     ebp
0xA158BB: retn
