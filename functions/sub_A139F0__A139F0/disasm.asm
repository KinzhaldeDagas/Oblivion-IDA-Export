0xA139F0: push    ebp
0xA139F1: mov     ebp, esp
0xA139F3: and     esp, 0FFFFFFF0h
0xA139F6: sub     esp, 60h
0xA139F9: mov     eax, ___security_cookie
0xA139FE: mov     [esp+60h+var_4], eax
0xA13A02: mov     eax, offset ??_7hkTriangleShape@@6B@; const hkTriangleShape::`vftable'
0xA13A07: mov     [esp+60h+var_50], eax
0xA13A0B: mov     ecx, [esp+60h+var_50]
0xA13A0F: mov     byte ptr [esp+60h+var_54], al
0xA13A13: mov     byte ptr [esp+60h+var_54+1], ah
0xA13A17: shr     ecx, 18h
0xA13A1A: shr     eax, 10h
0xA13A1D: mov     byte ptr [esp+60h+var_54+3], cl
0xA13A21: mov     ecx, [esp+60h+var_4]
0xA13A25: mov     byte ptr [esp+60h+var_54+2], al
0xA13A29: mov     edx, [esp+60h+var_54]
0xA13A2D: mov     dword_B2FFF0, edx
0xA13A33: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA13A38: mov     esp, ebp
0xA13A3A: pop     ebp
0xA13A3B: retn
