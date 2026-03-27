0x517BA0: mov     eax, [esp+arg_0]
0x517BA4: push    esi
0x517BA5: push    0; int
0x517BA7: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x517BAC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x517BB1: push    0; int
0x517BB3: push    eax; void *
0x517BB4: mov     esi, ecx
0x517BB6: call    OblivionDynamicCast
0x517BBB: add     esp, 14h
0x517BBE: test    eax, eax
0x517BC0: jz      short loc_517C07
0x517BC2: mov     ecx, [eax+3Ch]
0x517BC5: cmp     ecx, [esi+3Ch]
0x517BC8: jnz     short loc_517C07
0x517BCA: mov     dl, [eax+39h]
0x517BCD: cmp     dl, [esi+39h]
0x517BD0: jnz     short loc_517C07
0x517BD2: mov     cl, [eax+38h]
0x517BD5: cmp     cl, [esi+38h]
0x517BD8: jnz     short loc_517C07
0x517BDA: mov     dl, [eax+3Ah]
0x517BDD: cmp     dl, [esi+3Ah]
0x517BE0: jnz     short loc_517C07
0x517BE2: mov     cx, [eax+40h]
0x517BE6: cmp     cx, [esi+40h]
0x517BEA: jnz     short loc_517C07
0x517BEC: mov     dx, [eax+42h]
0x517BF0: cmp     dx, [esi+42h]
0x517BF4: jnz     short loc_517C07
0x517BF6: push    eax; a2
0x517BF7: mov     ecx, esi; this
0x517BF9: call    TESForm_CompareAllComponentsTo
0x517BFE: test    al, al
0x517C00: setnz   al
0x517C03: pop     esi
0x517C04: retn    4
0x517C07: mov     al, 1
0x517C09: pop     esi
0x517C0A: retn    4
