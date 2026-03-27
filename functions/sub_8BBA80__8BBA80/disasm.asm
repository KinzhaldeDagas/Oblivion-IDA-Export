0x8BBA80: mov     al, ds:0BA8040h
0x8BBA85: test    al, al
0x8BBA87: push    esi
0x8BBA88: jnz     loc_8BBB76
0x8BBA8E: call    sub_8BA9C0
0x8BBA93: mov     esi, [esp+4+arg_0]
0x8BBA97: test    esi, esi
0x8BBA99: jz      loc_8BBB7A
0x8BBA9F: push    esi
0x8BBAA0: call    sub_8A70F0
0x8BBAA5: mov     eax, [esp+8+arg_4]
0x8BBAA9: add     esp, 4
0x8BBAAC: test    eax, eax
0x8BBAAE: jnz     short loc_8BBACF
0x8BBAB0: push    330h; Size
0x8BBAB5: call    FormHeapAlloc
0x8BBABA: add     esp, 4
0x8BBABD: test    eax, eax
0x8BBABF: jz      short loc_8BBACD
0x8BBAC1: push    0
0x8BBAC3: push    esi
0x8BBAC4: mov     ecx, eax
0x8BBAC6: call    sub_8A72A0
0x8BBACB: jmp     short loc_8BBACF
0x8BBACD: xor     eax, eax
0x8BBACF: push    eax
0x8BBAD0: call    sub_8A7260
0x8BBAD5: call    sub_8BA9C0
0x8BBADA: push    330h; Size
0x8BBADF: call    FormHeapAlloc
0x8BBAE4: add     esp, 8
0x8BBAE7: test    eax, eax
0x8BBAE9: jz      short loc_8BBAFC
0x8BBAEB: push    0
0x8BBAED: push    esi
0x8BBAEE: mov     ecx, eax
0x8BBAF0: call    sub_8A72A0
0x8BBAF5: mov     ds:0BA7D9Ch, eax
0x8BBAFA: jmp     short loc_8BBB06
0x8BBAFC: mov     dword ptr ds:0BA7D9Ch, 0
0x8BBB06: mov     ecx, ds:0BA7D98h
0x8BBB0C: mov     eax, [ecx]
0x8BBB0E: push    15h
0x8BBB10: push    8
0x8BBB12: call    dword ptr [eax+10h]
0x8BBB15: push    eax
0x8BBB16: mov     word ptr [eax+4], 8
0x8BBB1C: mov     word ptr [eax+6], 1
0x8BBB22: mov     dword ptr [eax], offset off_A98240
0x8BBB28: call    sub_534070
0x8BBB2D: mov     ecx, ds:0BA7D98h
0x8BBB33: mov     edx, [ecx]
0x8BBB35: add     esp, 4
0x8BBB38: push    15h
0x8BBB3A: push    28h ; '('
0x8BBB3C: call    dword ptr [edx+10h]
0x8BBB3F: mov     ecx, [esp+4+arg_C]
0x8BBB43: mov     edx, [esp+4+arg_8]
0x8BBB47: push    ecx
0x8BBB48: push    edx
0x8BBB49: mov     ecx, eax
0x8BBB4B: mov     word ptr [eax+4], 28h ; '('
0x8BBB51: call    sub_8BB560
0x8BBB56: push    eax
0x8BBB57: call    sub_534020
0x8BBB5C: add     esp, 4
0x8BBB5F: call    sub_8BB420
0x8BBB64: mov     ecx, ds:0BA803Ch
0x8BBB6A: mov     eax, [ecx]
0x8BBB6C: call    dword ptr [eax+8]
0x8BBB6F: mov     byte ptr ds:0BA8040h, 1
0x8BBB76: xor     eax, eax
0x8BBB78: pop     esi
0x8BBB79: retn
0x8BBB7A: int     3; Trap to Debugger
0x8BBB7B: mov     eax, 1
0x8BBB80: pop     esi
0x8BBB81: retn
