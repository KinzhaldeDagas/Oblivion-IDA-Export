0x8B7210: push    ebp
0x8B7211: mov     ebp, esp
0x8B7213: and     esp, 0FFFFFFF0h
0x8B7216: sub     esp, 54h
0x8B7219: mov     eax, ds:0B30AACh
0x8B721E: xor     eax, esp
0x8B7220: mov     [esp+54h+var_4], eax
0x8B7224: mov     eax, [ebp+arg_0]
0x8B7227: push    ebx
0x8B7228: push    esi
0x8B7229: push    edi
0x8B722A: push    eax
0x8B722B: lea     eax, [esp+64h+var_50]
0x8B722F: push    eax
0x8B7230: mov     esi, ecx
0x8B7232: call    sub_5398E0
0x8B7237: add     esp, 8
0x8B723A: test    esi, esi
0x8B723C: mov     ebx, eax
0x8B723E: jz      short loc_8B725D
0x8B7240: mov     edi, [esi+8]
0x8B7243: test    edi, edi
0x8B7245: jz      short loc_8B725D
0x8B7247: mov     ecx, esi
0x8B7249: call    sub_89F570
0x8B724E: push    ebx
0x8B724F: mov     ecx, edi
0x8B7251: call    sub_8ABA40
0x8B7256: mov     ecx, esi
0x8B7258: call    sub_89F570
0x8B725D: mov     ecx, [esp+60h+var_4]
0x8B7261: pop     edi
0x8B7262: pop     esi
0x8B7263: pop     ebx
0x8B7264: xor     ecx, esp
0x8B7266: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B726B: mov     esp, ebp
0x8B726D: pop     ebp
0x8B726E: retn    4
