0xA12380: push    ebp
0xA12381: mov     ebp, esp
0xA12383: and     esp, 0FFFFFFF0h
0xA12386: sub     esp, 0C0h
0xA1238C: mov     eax, ___security_cookie
0xA12391: mov     [esp+0C0h+var_4], eax
0xA12398: mov     eax, offset off_A97984
0xA1239D: mov     [esp+0C0h+var_B0], eax
0xA123A1: mov     ecx, [esp+0C0h+var_B0]
0xA123A5: mov     byte ptr [esp+0C0h+var_B4], al
0xA123A9: mov     byte ptr [esp+0C0h+var_B4+1], ah
0xA123AD: shr     ecx, 18h
0xA123B0: shr     eax, 10h
0xA123B3: mov     byte ptr [esp+0C0h+var_B4+3], cl
0xA123B7: mov     ecx, [esp+0C0h+var_4]
0xA123BE: mov     byte ptr [esp+0C0h+var_B4+2], al
0xA123C2: mov     edx, [esp+0C0h+var_B4]
0xA123C6: mov     dword_B2EC4C, edx
0xA123CC: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA123D1: mov     esp, ebp
0xA123D3: pop     ebp
0xA123D4: retn
