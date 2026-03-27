0x4296E0: mov     eax, [esp+arg_0]
0x4296E4: push    esi
0x4296E5: push    0; int
0x4296E7: push    offset ??_R0?AVExtraTravelHorse@@@8; struct TypeDescriptor *
0x4296EC: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4296F1: push    0; int
0x4296F3: push    eax; void *
0x4296F4: mov     esi, ecx
0x4296F6: call    OblivionDynamicCast
0x4296FB: add     esp, 14h
0x4296FE: test    eax, eax
0x429700: jnz     short loc_429708
0x429702: mov     al, 1
0x429704: pop     esi
0x429705: retn    4
0x429708: mov     ecx, [eax+0Ch]
0x42970B: cmp     ecx, [esi+0Ch]
0x42970E: pop     esi
0x42970F: setnz   al
0x429712: retn    4
