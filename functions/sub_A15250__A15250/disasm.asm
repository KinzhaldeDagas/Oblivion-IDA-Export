0xA15250: push    ebp
0xA15251: mov     ebp, esp
0xA15253: and     esp, 0FFFFFFF0h
0xA15256: sub     esp, 40h
0xA15259: mov     eax, ___security_cookie
0xA1525E: mov     [esp+40h+var_4], eax
0xA15262: mov     eax, offset off_AA1828
0xA15267: mov     [esp+40h+var_30], eax
0xA1526B: mov     ecx, [esp+40h+var_30]
0xA1526F: mov     byte ptr [esp+40h+var_34], al
0xA15273: mov     byte ptr [esp+40h+var_34+1], ah
0xA15277: shr     ecx, 18h
0xA1527A: shr     eax, 10h
0xA1527D: mov     byte ptr [esp+40h+var_34+3], cl
0xA15281: mov     ecx, [esp+40h+var_4]
0xA15285: mov     byte ptr [esp+40h+var_34+2], al
0xA15289: mov     edx, [esp+40h+var_34]
0xA1528D: mov     dword_B304BC, edx
0xA15293: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA15298: mov     esp, ebp
0xA1529A: pop     ebp
0xA1529B: retn
