0x98EA7F: push    ebp
0x98EA80: mov     ebp, esp
0x98EA82: push    ecx
0x98EA83: push    esi
0x98EA84: mov     esi, [ebp+File]
0x98EA87: push    esi; File
0x98EA88: call    __fileno
0x98EA8D: mov     [ebp+File], eax
0x98EA90: mov     eax, [esi+0Ch]
0x98EA93: test    al, 82h
0x98EA95: pop     ecx
0x98EA96: jnz     short loc_98EAAF
0x98EA98: call    __errno
0x98EA9D: mov     dword ptr [eax], 9
0x98EAA3: or      dword ptr [esi+0Ch], 20h
0x98EAA7: or      eax, 0FFFFFFFFh
0x98EAAA: jmp     loc_98EBDC
0x98EAAF: test    al, 40h
0x98EAB1: jz      short loc_98EAC0
0x98EAB3: call    __errno
0x98EAB8: mov     dword ptr [eax], 22h ; '"'
0x98EABE: jmp     short loc_98EAA3
0x98EAC0: push    ebx
0x98EAC1: xor     ebx, ebx
0x98EAC3: test    al, 1
0x98EAC5: jz      short loc_98EADD
0x98EAC7: test    al, 10h
0x98EAC9: mov     [esi+4], ebx
0x98EACC: jz      loc_98EB57
0x98EAD2: mov     ecx, [esi+8]
0x98EAD5: and     eax, 0FFFFFFFEh
0x98EAD8: mov     [esi], ecx
0x98EADA: mov     [esi+0Ch], eax
0x98EADD: mov     eax, [esi+0Ch]
0x98EAE0: and     eax, 0FFFFFFEFh
0x98EAE3: or      eax, 2
0x98EAE6: test    ax, 10Ch
0x98EAEA: mov     [esi+0Ch], eax
0x98EAED: mov     [esi+4], ebx
0x98EAF0: mov     [ebp+var_4], ebx
0x98EAF3: jnz     short loc_98EB21
0x98EAF5: call    sub_98BAF0
0x98EAFA: add     eax, 20h ; ' '
0x98EAFD: cmp     esi, eax
0x98EAFF: jz      short loc_98EB0D
0x98EB01: call    sub_98BAF0
0x98EB06: add     eax, 40h ; '@'
0x98EB09: cmp     esi, eax
0x98EB0B: jnz     short loc_98EB1A
0x98EB0D: push    [ebp+File]; int
0x98EB10: call    __isatty
0x98EB15: test    eax, eax
0x98EB17: pop     ecx
0x98EB18: jnz     short loc_98EB21
0x98EB1A: push    esi
0x98EB1B: call    __getbuf
0x98EB20: pop     ecx
0x98EB21: test    word ptr [esi+0Ch], 108h
0x98EB27: push    edi
0x98EB28: jz      loc_98EBAE
0x98EB2E: mov     eax, [esi+8]
0x98EB31: mov     edi, [esi]
0x98EB33: lea     ecx, [eax+1]
0x98EB36: mov     [esi], ecx
0x98EB38: mov     ecx, [esi+18h]
0x98EB3B: sub     edi, eax
0x98EB3D: dec     ecx
0x98EB3E: cmp     edi, ebx
0x98EB40: mov     [esi+4], ecx
0x98EB43: jle     short loc_98EB62
0x98EB45: push    edi; unsigned int
0x98EB46: push    eax; void *
0x98EB47: push    [ebp+File]; int
0x98EB4A: call    __write
0x98EB4F: add     esp, 0Ch
0x98EB52: mov     [ebp+var_4], eax
0x98EB55: jmp     short loc_98EBA4
0x98EB57: or      eax, 20h
0x98EB5A: mov     [esi+0Ch], eax
0x98EB5D: or      eax, 0FFFFFFFFh
0x98EB60: jmp     short loc_98EBDB
0x98EB62: mov     ecx, [ebp+File]
0x98EB65: cmp     ecx, 0FFFFFFFFh
0x98EB68: jz      short loc_98EB85
0x98EB6A: cmp     ecx, 0FFFFFFFEh
0x98EB6D: jz      short loc_98EB85
0x98EB6F: mov     eax, ecx
0x98EB71: and     eax, 1Fh
0x98EB74: imul    eax, 28h ; '('
0x98EB77: mov     edx, ecx
0x98EB79: sar     edx, 5
0x98EB7C: add     eax, dword_BAAAC0[edx*4]
0x98EB83: jmp     short loc_98EB8A
0x98EB85: mov     eax, offset aA_1
0x98EB8A: test    byte ptr [eax+4], 20h
0x98EB8E: jz      short loc_98EBA4
0x98EB90: push    2; int
0x98EB92: push    ebx
0x98EB93: push    ebx; __int64
0x98EB94: push    ecx; int
0x98EB95: call    __lseeki64
0x98EB9A: and     eax, edx
0x98EB9C: add     esp, 10h
0x98EB9F: cmp     eax, 0FFFFFFFFh
0x98EBA2: jz      short loc_98EBC9
0x98EBA4: mov     eax, [esi+8]
0x98EBA7: mov     cl, byte ptr [ebp+arg_0]
0x98EBAA: mov     [eax], cl
0x98EBAC: jmp     short loc_98EBC4
0x98EBAE: xor     edi, edi
0x98EBB0: inc     edi
0x98EBB1: push    edi; unsigned int
0x98EBB2: lea     eax, [ebp+arg_0]
0x98EBB5: push    eax; void *
0x98EBB6: push    [ebp+File]; int
0x98EBB9: call    __write
0x98EBBE: add     esp, 0Ch
0x98EBC1: mov     [ebp+var_4], eax
0x98EBC4: cmp     [ebp+var_4], edi
0x98EBC7: jz      short loc_98EBD2
0x98EBC9: or      dword ptr [esi+0Ch], 20h
0x98EBCD: or      eax, 0FFFFFFFFh
0x98EBD0: jmp     short loc_98EBDA
0x98EBD2: mov     eax, [ebp+arg_0]
0x98EBD5: and     eax, 0FFh
0x98EBDA: pop     edi
0x98EBDB: pop     ebx
0x98EBDC: pop     esi
0x98EBDD: leave
0x98EBDE: retn
