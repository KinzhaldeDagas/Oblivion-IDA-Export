0xA13AB0: push    ebp
0xA13AB1: mov     ebp, esp
0xA13AB3: and     esp, 0FFFFFFF0h
0xA13AB6: sub     esp, 70h
0xA13AB9: mov     eax, ___security_cookie
0xA13ABE: mov     [esp+70h+var_4], eax
0xA13AC2: mov     eax, offset off_A9D068
0xA13AC7: mov     [esp+70h+var_60], eax
0xA13ACB: mov     ecx, [esp+70h+var_60]
0xA13ACF: mov     byte ptr [esp+70h+var_64], al
0xA13AD3: mov     byte ptr [esp+70h+var_64+1], ah
0xA13AD7: shr     ecx, 18h
0xA13ADA: shr     eax, 10h
0xA13ADD: mov     byte ptr [esp+70h+var_64+3], cl
0xA13AE1: mov     ecx, [esp+70h+var_4]
0xA13AE5: mov     byte ptr [esp+70h+var_64+2], al
0xA13AE9: mov     edx, [esp+70h+var_64]
0xA13AED: mov     dword_B30038, edx
0xA13AF3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA13AF8: mov     esp, ebp
0xA13AFA: pop     ebp
0xA13AFB: retn
