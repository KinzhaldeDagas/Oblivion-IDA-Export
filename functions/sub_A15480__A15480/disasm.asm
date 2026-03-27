0xA15480: push    ebp
0xA15481: mov     ebp, esp
0xA15483: and     esp, 0FFFFFFF0h
0xA15486: sub     esp, 40h
0xA15489: mov     eax, ___security_cookie
0xA1548E: mov     [esp+40h+var_4], eax
0xA15492: mov     eax, offset off_AA1938
0xA15497: mov     [esp+40h+var_30], eax
0xA1549B: mov     ecx, [esp+40h+var_30]
0xA1549F: mov     byte ptr [esp+40h+var_34], al
0xA154A3: mov     byte ptr [esp+40h+var_34+1], ah
0xA154A7: shr     ecx, 18h
0xA154AA: shr     eax, 10h
0xA154AD: mov     byte ptr [esp+40h+var_34+3], cl
0xA154B1: mov     ecx, [esp+40h+var_4]
0xA154B5: mov     byte ptr [esp+40h+var_34+2], al
0xA154B9: mov     edx, [esp+40h+var_34]
0xA154BD: mov     dword_B30504, edx
0xA154C3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA154C8: mov     esp, ebp
0xA154CA: pop     ebp
0xA154CB: retn
