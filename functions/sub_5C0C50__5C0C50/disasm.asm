0x5C0C50: push    esi
0x5C0C51: push    edi
0x5C0C52: mov     edi, [esp+8+arg_0]
0x5C0C56: push    0; int
0x5C0C58: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x5C0C5D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5C0C62: push    0; int
0x5C0C64: push    edi; void *
0x5C0C65: call    OblivionDynamicCast
0x5C0C6A: mov     esi, eax
0x5C0C6C: add     esp, 14h
0x5C0C6F: test    esi, esi
0x5C0C71: jz      short loc_5C0C8F
0x5C0C73: mov     ecx, ds:0B333C4h; this
0x5C0C79: call    Actor_IsFemale
0x5C0C7E: push    eax
0x5C0C7F: mov     ecx, esi
0x5C0C81: call    TESBipedModelForm_GetBipedIconPath
0x5C0C86: test    eax, eax
0x5C0C88: jz      short loc_5C0C8F
0x5C0C8A: cmp     byte ptr [eax], 0
0x5C0C8D: jnz     short loc_5C0C9E
0x5C0C8F: mov     eax, ds:0B333C4h
0x5C0C94: push    eax
0x5C0C95: push    edi
0x5C0C96: call    sub_4702D0
0x5C0C9B: add     esp, 8
0x5C0C9E: test    eax, eax
0x5C0CA0: pop     edi
0x5C0CA1: pop     esi
0x5C0CA2: jz      short loc_5C0CA9
0x5C0CA4: cmp     byte ptr [eax], 0
0x5C0CA7: jnz     short locret_5C0CAB
0x5C0CA9: xor     eax, eax
0x5C0CAB: retn
