0xA152F0: push    ebp
0xA152F1: mov     ebp, esp
0xA152F3: and     esp, 0FFFFFFF0h
0xA152F6: sub     esp, 70h
0xA152F9: mov     eax, ___security_cookie
0xA152FE: mov     [esp+70h+var_4], eax
0xA15302: mov     eax, offset off_AA1848
0xA15307: mov     [esp+70h+var_60], eax
0xA1530B: mov     ecx, [esp+70h+var_60]
0xA1530F: mov     byte ptr [esp+70h+var_64], al
0xA15313: mov     byte ptr [esp+70h+var_64+1], ah
0xA15317: shr     ecx, 18h
0xA1531A: shr     eax, 10h
0xA1531D: mov     byte ptr [esp+70h+var_64+3], cl
0xA15321: mov     ecx, [esp+70h+var_4]
0xA15325: mov     byte ptr [esp+70h+var_64+2], al
0xA15329: mov     edx, [esp+70h+var_64]
0xA1532D: mov     dword_B304D4, edx
0xA15333: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA15338: mov     esp, ebp
0xA1533A: pop     ebp
0xA1533B: retn
