0x429720: mov     eax, [esp+arg_0]
0x429724: push    esi
0x429725: push    0; int
0x429727: push    offset ??_R0?AVExtraLevCreaModifier@@@8; struct TypeDescriptor *
0x42972C: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429731: push    0; int
0x429733: push    eax; void *
0x429734: mov     esi, ecx
0x429736: call    OblivionDynamicCast
0x42973B: add     esp, 14h
0x42973E: test    eax, eax
0x429740: jnz     short loc_429748
0x429742: mov     al, 1
0x429744: pop     esi
0x429745: retn    4
0x429748: mov     ecx, [eax+0Ch]
0x42974B: cmp     ecx, [esi+0Ch]
0x42974E: pop     esi
0x42974F: setnz   al
0x429752: retn    4
