0x501D30: mov     eax, [esp+arg_8]
0x501D34: test    eax, eax
0x501D36: jz      short loc_501D7A
0x501D38: push    esi
0x501D39: push    0; int
0x501D3B: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x501D40: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x501D45: push    0; int
0x501D47: push    eax; void *
0x501D48: call    OblivionDynamicCast
0x501D4D: mov     esi, eax
0x501D4F: add     esp, 14h
0x501D52: test    esi, esi
0x501D54: jz      short loc_501D76
0x501D56: mov     eax, [esi]
0x501D58: mov     edx, [eax+334h]
0x501D5E: push    1
0x501D60: mov     ecx, esi
0x501D62: call    edx
0x501D64: test    al, al
0x501D66: jz      short loc_501D76
0x501D68: mov     eax, [esi]
0x501D6A: mov     edx, [eax+340h]
0x501D70: push    0
0x501D72: mov     ecx, esi
0x501D74: call    edx
0x501D76: mov     al, 1
0x501D78: pop     esi
0x501D79: retn
0x501D7A: mov     al, 1
0x501D7C: retn
