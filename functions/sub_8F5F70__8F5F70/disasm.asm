0x8F5F70: push    esi
0x8F5F71: mov     esi, ecx
0x8F5F73: call    sub_8F5EB0
0x8F5F78: test    [esp+4+arg_0], 1
0x8F5F7D: jz      short loc_8F5F92
0x8F5F7F: movzx   edx, word ptr [esi+4]
0x8F5F83: mov     ecx, ds:0BA7D98h
0x8F5F89: mov     eax, [ecx]
0x8F5F8B: push    17h
0x8F5F8D: push    edx
0x8F5F8E: push    esi
0x8F5F8F: call    dword ptr [eax+14h]
0x8F5F92: mov     eax, esi
0x8F5F94: pop     esi
0x8F5F95: retn    4
