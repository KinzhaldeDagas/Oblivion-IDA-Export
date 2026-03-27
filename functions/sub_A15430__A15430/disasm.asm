0xA15430: push    ebp
0xA15431: mov     ebp, esp
0xA15433: and     esp, 0FFFFFFF0h
0xA15436: sub     esp, 40h
0xA15439: mov     eax, ___security_cookie
0xA1543E: mov     [esp+40h+var_4], eax
0xA15442: mov     eax, offset off_AA1930
0xA15447: mov     [esp+40h+var_30], eax
0xA1544B: mov     ecx, [esp+40h+var_30]
0xA1544F: mov     byte ptr [esp+40h+var_34], al
0xA15453: mov     byte ptr [esp+40h+var_34+1], ah
0xA15457: shr     ecx, 18h
0xA1545A: shr     eax, 10h
0xA1545D: mov     byte ptr [esp+40h+var_34+3], cl
0xA15461: mov     ecx, [esp+40h+var_4]
0xA15465: mov     byte ptr [esp+40h+var_34+2], al
0xA15469: mov     edx, [esp+40h+var_34]
0xA1546D: mov     dword_B304F8, edx
0xA15473: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA15478: mov     esp, ebp
0xA1547A: pop     ebp
0xA1547B: retn
