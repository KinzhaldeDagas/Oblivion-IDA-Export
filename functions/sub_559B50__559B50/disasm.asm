0x559B50: cmp     byte ptr ds:0B120B4h, 0
0x559B57: push    esi
0x559B58: mov     esi, ecx
0x559B5A: jnz     short loc_559B62
0x559B5C: xor     al, al
0x559B5E: pop     esi
0x559B5F: retn    14h
0x559B62: mov     eax, dword ptr [esp+4+arg_10]
0x559B66: mov     ecx, [esp+4+arg_8]
0x559B6A: mov     edx, dword ptr [esp+4+ArgList]
0x559B6E: push    ebx
0x559B6F: push    eax; char
0x559B70: mov     eax, [esp+0Ch+arg_0]
0x559B74: push    ecx; int
0x559B75: push    edx; ArgList
0x559B76: push    eax; int
0x559B77: mov     ecx, esi
0x559B79: call    sub_559330
0x559B7E: mov     ecx, [esp+8+arg_C]
0x559B82: push    ecx
0x559B83: mov     ecx, esi
0x559B85: mov     bl, al
0x559B87: call    sub_556A00
0x559B8C: or      al, bl
0x559B8E: pop     ebx
0x559B8F: pop     esi
0x559B90: retn    14h
