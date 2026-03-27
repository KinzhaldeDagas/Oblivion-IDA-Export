0x66CF20: push    esi
0x66CF21: mov     esi, ecx
0x66CF23: mov     byte ptr [esi+589h], 1
0x66CF2A: fld     dword ptr ds:0B3BB24h
0x66CF30: fld     dword ptr ds:0B36B78h
0x66CF36: fcom    st(1)
0x66CF38: fnstsw  ax
0x66CF3A: fstp    st(1)
0x66CF3C: test    ah, 41h
0x66CF3F: jnz     short loc_66CF49
0x66CF41: fstp    dword ptr ds:0B3BB24h
0x66CF47: jmp     short loc_66CF4B
0x66CF49: fstp    st
0x66CF4B: cmp     byte ptr [esi+588h], 0
0x66CF52: jnz     short loc_66CF62
0x66CF54: push    0; a1
0x66CF56: mov     byte ptr [esi+58Ah], 1
0x66CF5D: call    TogglePOV
0x66CF62: mov     eax, [esi]
0x66CF64: mov     edx, [eax+1BCh]
0x66CF6A: push    0
0x66CF6C: mov     ecx, esi
0x66CF6E: mov     byte ptr [esi+71Dh], 1
0x66CF75: call    edx
0x66CF77: mov     ecx, esi; int
0x66CF79: pop     esi
0x66CF7A: jmp     sub_611D70
