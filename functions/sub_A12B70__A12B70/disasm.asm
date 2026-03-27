0xA12B70: push    ebp
0xA12B71: mov     ebp, esp
0xA12B73: and     esp, 0FFFFFFF0h
0xA12B76: sub     esp, 60h
0xA12B79: mov     eax, ___security_cookie
0xA12B7E: mov     [esp+60h+var_4], eax
0xA12B82: mov     eax, offset off_A9A2A0
0xA12B87: mov     [esp+60h+var_50], eax
0xA12B8B: mov     ecx, [esp+60h+var_50]
0xA12B8F: mov     byte ptr [esp+60h+var_54], al
0xA12B93: mov     byte ptr [esp+60h+var_54+1], ah
0xA12B97: shr     ecx, 18h
0xA12B9A: shr     eax, 10h
0xA12B9D: mov     byte ptr [esp+60h+var_54+3], cl
0xA12BA1: mov     ecx, [esp+60h+var_4]
0xA12BA5: mov     byte ptr [esp+60h+var_54+2], al
0xA12BA9: mov     edx, [esp+60h+var_54]
0xA12BAD: mov     dword_B2FC38, edx
0xA12BB3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA12BB8: mov     esp, ebp
0xA12BBA: pop     ebp
0xA12BBB: retn
