0x4297F0: mov     eax, [esp+arg_0]
0x4297F4: push    esi
0x4297F5: push    0; int
0x4297F7: push    offset ??_R0?AVExtraLastFinishedSequence@@@8; struct TypeDescriptor *
0x4297FC: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429801: push    0; int
0x429803: push    eax; void *
0x429804: mov     esi, ecx
0x429806: call    OblivionDynamicCast
0x42980B: add     esp, 14h
0x42980E: test    eax, eax
0x429810: jnz     short loc_429818
0x429812: mov     al, 1
0x429814: pop     esi
0x429815: retn    4
0x429818: mov     ecx, [eax+0Ch]
0x42981B: mov     eax, [esi+0Ch]
0x42981E: mov     edi, edi
0x429820: mov     dl, [eax]
0x429822: cmp     dl, [ecx]
0x429824: jnz     short loc_429847
0x429826: test    dl, dl
0x429828: jz      short loc_42983C
0x42982A: mov     dl, [eax+1]
0x42982D: cmp     dl, [ecx+1]
0x429830: jnz     short loc_429847
0x429832: add     eax, 2
0x429835: add     ecx, 2
0x429838: test    dl, dl
0x42983A: jnz     short loc_429820
0x42983C: xor     eax, eax
0x42983E: test    eax, eax
0x429840: setnz   al
0x429843: pop     esi
0x429844: retn    4
0x429847: sbb     eax, eax
0x429849: sbb     eax, 0FFFFFFFFh
0x42984C: test    eax, eax
0x42984E: setnz   al
0x429851: pop     esi
0x429852: retn    4
