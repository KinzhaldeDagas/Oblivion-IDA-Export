0x497D50: mov     ecx, ds:0B350D8h
0x497D56: test    ecx, ecx
0x497D58: jz      short loc_497DB0
0x497D5A: cmp     byte ptr ds:0B06DE4h, 0
0x497D61: jnz     short loc_497DB0
0x497D63: cmp     byte ptr ds:0B06C74h, 0
0x497D6A: push    ebx
0x497D6B: push    esi
0x497D6C: mov     esi, ds:0B42154h
0x497D72: mov     ebx, [esi]
0x497D74: push    edi
0x497D75: mov     edi, [ecx+5C0h]
0x497D7B: mov     ecx, [esp+0Ch+arg_0]
0x497D7F: setz    al
0x497D82: push    0
0x497D84: movzx   edx, al
0x497D87: mov     eax, ds:0B06C34h
0x497D8C: push    ecx
0x497D8D: push    edx
0x497D8E: push    eax
0x497D8F: call    sub_4979E0
0x497D94: mov     ecx, ds:0B06C54h
0x497D9A: mov     edx, [ebx+2Ch]
0x497D9D: add     esp, 4
0x497DA0: push    eax
0x497DA1: push    edi
0x497DA2: push    ecx
0x497DA3: push    esi
0x497DA4: call    edx
0x497DA6: test    eax, eax
0x497DA8: pop     edi
0x497DA9: pop     esi
0x497DAA: pop     ebx
0x497DAB: jl      short loc_497DB0
0x497DAD: mov     al, 1
0x497DAF: retn
0x497DB0: xor     al, al
0x497DB2: retn
