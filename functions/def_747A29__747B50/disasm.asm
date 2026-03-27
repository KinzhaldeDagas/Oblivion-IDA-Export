0x747B50: xor     al, al; jumptable 00747A29 default case
0x747B52: mov     ecx, [esp+arg_810]
0x747B59: pop     edi
0x747B5A: pop     esi
0x747B5B: pop     ebx
0x747B5C: xor     ecx, esp
0x747B5E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x747B63: add     esp, 80Ch
0x747B69: retn    8
