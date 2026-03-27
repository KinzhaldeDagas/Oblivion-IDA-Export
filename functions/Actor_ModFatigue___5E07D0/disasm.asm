0x5E07D0: push    ecx
0x5E07D1: fldz
0x5E07D3: push    esi
0x5E07D4: fcomp   [esp+8+arg_0]
0x5E07D8: mov     esi, ecx
0x5E07DA: fnstsw  ax
0x5E07DC: test    ah, 41h
0x5E07DF: jnp     short loc_5E0852
0x5E07E1: mov     eax, [esi]
0x5E07E3: mov     edx, [eax+278h]
0x5E07E9: call    edx
0x5E07EB: test    al, al
0x5E07ED: jz      short loc_5E0852
0x5E07EF: mov     eax, [esi]
0x5E07F1: mov     edx, [eax+288h]
0x5E07F7: push    0Ah
0x5E07F9: mov     ecx, esi
0x5E07FB: call    edx
0x5E07FD: fstp    [esp+8+var_4]
0x5E0801: fldz
0x5E0803: fld     [esp+8+var_4]
0x5E0807: fcom    st(1)
0x5E0809: fnstsw  ax
0x5E080B: fstp    st(1)
0x5E080D: test    ah, 41h
0x5E0810: jnp     short loc_5E0850
0x5E0812: fld     [esp+8+arg_0]
0x5E0816: fst     [esp+8+arg_0]
0x5E081A: fadd    st, st(1)
0x5E081C: fcomp   qword ptr ds:0A2FC68h
0x5E0822: fnstsw  ax
0x5E0824: test    ah, 5
0x5E0827: jp      short loc_5E0831
0x5E0829: fchs
0x5E082B: fstp    [esp+8+arg_0]
0x5E082F: jmp     short loc_5E0833
0x5E0831: fstp    st
0x5E0833: mov     eax, [esi]
0x5E0835: fld     [esp+8+arg_0]
0x5E0839: mov     edx, [eax+2A4h]
0x5E083F: push    0
0x5E0841: push    ecx
0x5E0842: fstp    [esp+10h+var_10]
0x5E0845: push    0Ah
0x5E0847: mov     ecx, esi
0x5E0849: call    edx
0x5E084B: pop     esi
0x5E084C: pop     ecx
0x5E084D: retn    4
0x5E0850: fstp    st
0x5E0852: pop     esi
0x5E0853: pop     ecx
0x5E0854: retn    4
