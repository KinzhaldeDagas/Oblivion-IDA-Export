0x6005C0: mov     ecx, [esp+arg_1D0]
0x6005C7: mov     large fs:0, ecx
0x6005CE: pop     ecx
0x6005CF: pop     edi
0x6005D0: pop     esi
0x6005D1: pop     ebp
0x6005D2: pop     ebx
0x6005D3: mov     ecx, [esp-14h+arg_1CC]
0x6005DA: xor     ecx, esp
0x6005DC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6005E1: add     esp, 1CCh
0x6005E7: retn    0Ch
