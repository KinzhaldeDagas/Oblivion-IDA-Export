0xA15670: push    ebp
0xA15671: mov     ebp, esp
0xA15673: and     esp, 0FFFFFFF0h
0xA15676: sub     esp, 60h
0xA15679: mov     eax, ___security_cookie
0xA1567E: mov     [esp+60h+var_4], eax
0xA15682: mov     eax, offset off_AA1A18
0xA15687: mov     [esp+60h+var_50], eax
0xA1568B: mov     ecx, [esp+60h+var_50]
0xA1568F: mov     byte ptr [esp+60h+var_54], al
0xA15693: mov     byte ptr [esp+60h+var_54+1], ah
0xA15697: shr     ecx, 18h
0xA1569A: shr     eax, 10h
0xA1569D: mov     byte ptr [esp+60h+var_54+3], cl
0xA156A1: mov     ecx, [esp+60h+var_4]
0xA156A5: mov     byte ptr [esp+60h+var_54+2], al
0xA156A9: mov     edx, [esp+60h+var_54]
0xA156AD: mov     dword_B3054C, edx
0xA156B3: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA156B8: mov     esp, ebp
0xA156BA: pop     ebp
0xA156BB: retn
