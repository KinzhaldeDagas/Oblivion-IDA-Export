0xA13890: push    ebp
0xA13891: mov     ebp, esp
0xA13893: and     esp, 0FFFFFFF0h
0xA13896: sub     esp, 70h
0xA13899: mov     eax, ___security_cookie
0xA1389E: mov     [esp+70h+var_4], eax
0xA138A2: mov     eax, offset off_A9CD6C
0xA138A7: mov     [esp+70h+var_60], eax
0xA138AB: mov     ecx, [esp+70h+var_60]
0xA138AF: mov     byte ptr [esp+70h+var_64], al
0xA138B3: mov     byte ptr [esp+70h+var_64+1], ah
0xA138B7: shr     ecx, 18h
0xA138BA: shr     eax, 10h
0xA138BD: mov     byte ptr [esp+70h+var_64+3], cl
0xA138C1: mov     ecx, [esp+70h+var_4]
0xA138C5: mov     byte ptr [esp+70h+var_64+2], al
0xA138C9: mov     edx, [esp+70h+var_64]
0xA138CD: mov     dword_B2FFB4, edx
0xA138D3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA138D8: mov     esp, ebp
0xA138DA: pop     ebp
0xA138DB: retn
