0x694050: push    esi
0x694051: mov     esi, [esp+4+a1]
0x694055: push    esi
0x694056: call    ValueModifierEffect_PostLink
0x69405B: cmp     byte ptr ds:0B42F3Eh, 0
0x694062: jz      short loc_6940AC
0x694064: cmp     byte ptr ds:0B42E84h, 0
0x69406B: jz      short loc_6940AC
0x69406D: cmp     dword ptr ds:0B42F48h, 2
0x694074: jl      short loc_6940AC
0x694076: cmp     esi, ds:0B333C4h
0x69407C: jnz     short loc_6940AC
0x69407E: mov     eax, [esi]
0x694080: fld1
0x694082: mov     edx, [eax+324h]
0x694088: push    ecx
0x694089: mov     ecx, esi
0x69408B: fstp    [esp+8+var_8]
0x69408E: call    edx
0x694090: fld     dword ptr ds:0A757CCh
0x694096: mov     eax, [esi]
0x694098: mov     edx, [eax+270h]
0x69409E: push    ecx
0x69409F: fstp    [esp+8+var_8]
0x6940A2: push    1
0x6940A4: mov     ecx, esi
0x6940A6: call    edx
0x6940A8: pop     esi
0x6940A9: retn    4
0x6940AC: mov     ecx, esi; a1
0x6940AE: call    sub_5EE1B0
0x6940B3: pop     esi
0x6940B4: retn    4
