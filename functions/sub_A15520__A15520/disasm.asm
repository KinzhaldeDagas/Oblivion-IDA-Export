0xA15520: push    ebp
0xA15521: mov     ebp, esp
0xA15523: and     esp, 0FFFFFFF0h
0xA15526: sub     esp, 40h
0xA15529: mov     eax, ___security_cookie
0xA1552E: mov     [esp+40h+var_4], eax
0xA15532: mov     eax, offset off_AA1958
0xA15537: mov     [esp+40h+var_30], eax
0xA1553B: mov     ecx, [esp+40h+var_30]
0xA1553F: mov     byte ptr [esp+40h+var_34], al
0xA15543: mov     byte ptr [esp+40h+var_34+1], ah
0xA15547: shr     ecx, 18h
0xA1554A: shr     eax, 10h
0xA1554D: mov     byte ptr [esp+40h+var_34+3], cl
0xA15551: mov     ecx, [esp+40h+var_4]
0xA15555: mov     byte ptr [esp+40h+var_34+2], al
0xA15559: mov     edx, [esp+40h+var_34]
0xA1555D: mov     dword_B3051C, edx
0xA15563: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA15568: mov     esp, ebp
0xA1556A: pop     ebp
0xA1556B: retn
