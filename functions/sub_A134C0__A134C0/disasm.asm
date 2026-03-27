0xA134C0: push    ebp
0xA134C1: mov     ebp, esp
0xA134C3: and     esp, 0FFFFFFF0h
0xA134C6: sub     esp, 150h
0xA134CC: mov     eax, ___security_cookie
0xA134D1: mov     [esp+150h+var_4], eax
0xA134D8: mov     eax, offset off_A9CAB8
0xA134DD: mov     [esp+150h+var_140], eax
0xA134E1: mov     ecx, [esp+150h+var_140]
0xA134E5: mov     byte ptr [esp+150h+var_144], al
0xA134E9: mov     byte ptr [esp+150h+var_144+1], ah
0xA134ED: shr     ecx, 18h
0xA134F0: shr     eax, 10h
0xA134F3: mov     byte ptr [esp+150h+var_144+3], cl
0xA134F7: mov     ecx, [esp+150h+var_4]
0xA134FE: mov     byte ptr [esp+150h+var_144+2], al
0xA13502: mov     edx, [esp+150h+var_144]
0xA13506: mov     dword_B2FF24, edx
0xA1350C: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA13511: mov     esp, ebp
0xA13513: pop     ebp
0xA13514: retn
