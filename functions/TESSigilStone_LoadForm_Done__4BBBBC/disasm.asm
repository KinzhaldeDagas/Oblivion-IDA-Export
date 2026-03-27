0x4BBBBC: lea     esp, [ebp-14h]
0x4BBBBF: pop     edi
0x4BBBC0: pop     esi
0x4BBBC1: pop     ebx
0x4BBBC2: mov     ecx, [ebp-4]
0x4BBBC5: xor     ecx, ebp
0x4BBBC7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4BBBCC: mov     esp, ebp
0x4BBBCE: pop     ebp
0x4BBBCF: retn    4
