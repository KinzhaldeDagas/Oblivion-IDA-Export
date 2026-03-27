0xA12540: push    ebp
0xA12541: mov     ebp, esp
0xA12543: and     esp, 0FFFFFFF0h
0xA12546: sub     esp, 0B0h
0xA1254C: mov     eax, ___security_cookie
0xA12551: mov     [esp+0B0h+var_4], eax
0xA12558: mov     eax, offset off_A97E68
0xA1255D: mov     [esp+0B0h+var_A0], eax
0xA12561: mov     ecx, [esp+0B0h+var_A0]
0xA12565: mov     byte ptr [esp+0B0h+var_A4], al
0xA12569: mov     byte ptr [esp+0B0h+var_A4+1], ah
0xA1256D: shr     ecx, 18h
0xA12570: shr     eax, 10h
0xA12573: mov     byte ptr [esp+0B0h+var_A4+3], cl
0xA12577: mov     ecx, [esp+0B0h+var_4]
0xA1257E: mov     byte ptr [esp+0B0h+var_A4+2], al
0xA12582: mov     edx, [esp+0B0h+var_A4]
0xA12586: mov     dword_B2F0DC, edx
0xA1258C: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA12591: mov     esp, ebp
0xA12593: pop     ebp
0xA12594: retn
