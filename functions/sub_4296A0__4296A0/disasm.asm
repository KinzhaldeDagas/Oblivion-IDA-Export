0x4296A0: mov     eax, [esp+arg_0]
0x4296A4: push    esi
0x4296A5: push    0; int
0x4296A7: push    offset ??_R0?AVExtraMerchantContainer@@@8; struct TypeDescriptor *
0x4296AC: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4296B1: push    0; int
0x4296B3: push    eax; void *
0x4296B4: mov     esi, ecx
0x4296B6: call    OblivionDynamicCast
0x4296BB: add     esp, 14h
0x4296BE: test    eax, eax
0x4296C0: jnz     short loc_4296C8
0x4296C2: mov     al, 1
0x4296C4: pop     esi
0x4296C5: retn    4
0x4296C8: mov     ecx, [eax+0Ch]
0x4296CB: cmp     ecx, [esi+0Ch]
0x4296CE: pop     esi
0x4296CF: setnz   al
0x4296D2: retn    4
