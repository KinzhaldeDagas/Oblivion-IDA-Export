0xA13D60: push    ebp
0xA13D61: mov     ebp, esp
0xA13D63: and     esp, 0FFFFFFF0h
0xA13D66: sub     esp, 0C0h
0xA13D6C: mov     eax, ___security_cookie
0xA13D71: mov     [esp+0C0h+var_4], eax
0xA13D78: mov     eax, offset off_A9DFA0
0xA13D7D: mov     [esp+0C0h+var_B0], eax
0xA13D81: mov     ecx, [esp+0C0h+var_B0]
0xA13D85: mov     byte ptr [esp+0C0h+var_B4], al
0xA13D89: mov     byte ptr [esp+0C0h+var_B4+1], ah
0xA13D8D: shr     ecx, 18h
0xA13D90: shr     eax, 10h
0xA13D93: mov     byte ptr [esp+0C0h+var_B4+3], cl
0xA13D97: mov     ecx, [esp+0C0h+var_4]
0xA13D9E: mov     byte ptr [esp+0C0h+var_B4+2], al
0xA13DA2: mov     edx, [esp+0C0h+var_B4]
0xA13DA6: mov     dword_B30140, edx
0xA13DAC: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA13DB1: mov     esp, ebp
0xA13DB3: pop     ebp
0xA13DB4: retn
