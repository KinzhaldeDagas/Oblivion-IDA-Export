0xA13010: push    ebp
0xA13011: mov     ebp, esp
0xA13013: and     esp, 0FFFFFFF0h
0xA13016: sub     esp, 150h
0xA1301C: mov     eax, ___security_cookie
0xA13021: mov     [esp+150h+var_4], eax
0xA13028: mov     eax, offset off_A9AFFC
0xA1302D: mov     [esp+150h+var_140], eax
0xA13031: mov     ecx, [esp+150h+var_140]
0xA13035: mov     byte ptr [esp+150h+var_144], al
0xA13039: mov     byte ptr [esp+150h+var_144+1], ah
0xA1303D: shr     ecx, 18h
0xA13040: shr     eax, 10h
0xA13043: mov     byte ptr [esp+150h+var_144+3], cl
0xA13047: mov     ecx, [esp+150h+var_4]
0xA1304E: mov     byte ptr [esp+150h+var_144+2], al
0xA13052: mov     edx, [esp+150h+var_144]
0xA13056: mov     dword_B2FDA0, edx
0xA1305C: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA13061: mov     esp, ebp
0xA13063: pop     ebp
0xA13064: retn
