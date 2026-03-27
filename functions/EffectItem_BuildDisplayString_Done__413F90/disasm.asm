0x413F90: mov     eax, edi
0x413F92: mov     ecx, [esp+arg_88]
0x413F99: mov     large fs:0, ecx
0x413FA0: pop     ecx
0x413FA1: pop     edi
0x413FA2: pop     esi
0x413FA3: pop     ebp
0x413FA4: pop     ebx
0x413FA5: mov     ecx, [esp-14h+arg_84]
0x413FA9: xor     ecx, esp
0x413FAB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x413FB0: add     esp, 84h
0x413FB6: retn    18h
