0xA15620: push    ebp
0xA15621: mov     ebp, esp
0xA15623: and     esp, 0FFFFFFF0h
0xA15626: sub     esp, 60h
0xA15629: mov     eax, ___security_cookie
0xA1562E: mov     [esp+60h+var_4], eax
0xA15632: mov     eax, offset off_AA19B8
0xA15637: mov     [esp+60h+var_50], eax
0xA1563B: mov     ecx, [esp+60h+var_50]
0xA1563F: mov     byte ptr [esp+60h+var_54], al
0xA15643: mov     byte ptr [esp+60h+var_54+1], ah
0xA15647: shr     ecx, 18h
0xA1564A: shr     eax, 10h
0xA1564D: mov     byte ptr [esp+60h+var_54+3], cl
0xA15651: mov     ecx, [esp+60h+var_4]
0xA15655: mov     byte ptr [esp+60h+var_54+2], al
0xA15659: mov     edx, [esp+60h+var_54]
0xA1565D: mov     dword_B30540, edx
0xA15663: call    @__security_check_cookie@4; __security_check_cookie(x)
0xA15668: mov     esp, ebp
0xA1566A: pop     ebp
0xA1566B: retn
