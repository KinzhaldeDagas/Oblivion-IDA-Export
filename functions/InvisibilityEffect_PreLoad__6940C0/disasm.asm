0x6940C0: push    esi
0x6940C1: mov     esi, [esp+4+a1]
0x6940C5: push    esi
0x6940C6: call    nullsub_returnvVoid_1arg
0x6940CB: cmp     byte ptr ds:0B42F3Eh, 0
0x6940D2: jz      short loc_694106
0x6940D4: cmp     byte ptr ds:0B42E84h, 0
0x6940DB: jz      short loc_694106
0x6940DD: cmp     dword ptr ds:0B42F48h, 2
0x6940E4: jl      short loc_694106
0x6940E6: cmp     esi, ds:0B333C4h
0x6940EC: jnz     short loc_694106
0x6940EE: fldz
0x6940F0: mov     eax, [esi]
0x6940F2: mov     edx, [eax+270h]
0x6940F8: push    ecx
0x6940F9: fstp    [esp+8+var_8]
0x6940FC: push    1
0x6940FE: mov     ecx, esi
0x694100: call    edx
0x694102: pop     esi
0x694103: retn    4
0x694106: mov     ecx, esi; a1
0x694108: call    sub_5EE1B0
0x69410D: pop     esi
0x69410E: retn    4
