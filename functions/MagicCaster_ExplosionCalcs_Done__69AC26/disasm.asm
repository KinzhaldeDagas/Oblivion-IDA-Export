0x69AC26: mov     ecx, [esp+arg_A4]
0x69AC2D: mov     large fs:0, ecx
0x69AC34: pop     ecx
0x69AC35: pop     edi
0x69AC36: pop     esi
0x69AC37: pop     ebx
0x69AC38: mov     ecx, [esp-10h+arg_9C]
0x69AC3F: xor     ecx, esp
0x69AC41: call    @__security_check_cookie@4; __security_check_cookie(x)
0x69AC46: mov     esp, ebp
0x69AC48: pop     ebp
0x69AC49: retn    24h ; '$'
