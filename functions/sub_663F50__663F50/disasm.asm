0x663F50: cmp     dword ptr ds:0B3BB48h, 0
0x663F57: jnz     short loc_663F62
0x663F59: cmp     dword ptr ds:0B3BB44h, 0
0x663F60: jz      short locret_663F9C
0x663F62: push    esi
0x663F63: mov     esi, offset dword_B3BB44
0x663F68: jmp     short loc_663F70
0x663F6A: align 10h
0x663F70: mov     ecx, [esi]
0x663F72: mov     eax, [ecx]
0x663F74: mov     edx, [eax+154h]
0x663F7A: call    edx
0x663F7C: test    eax, eax
0x663F7E: jz      short loc_663F94
0x663F80: or      word ptr [eax+18h], 1
0x663F85: push    0
0x663F87: push    1
0x663F89: push    0
0x663F8B: push    eax
0x663F8C: call    sub_88CF20
0x663F91: add     esp, 10h
0x663F94: mov     esi, [esi+4]
0x663F97: test    esi, esi
0x663F99: jnz     short loc_663F70
0x663F9B: pop     esi
0x663F9C: retn
