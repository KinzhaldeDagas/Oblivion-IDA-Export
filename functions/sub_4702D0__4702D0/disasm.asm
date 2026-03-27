0x4702D0: push    esi
0x4702D1: mov     esi, [esp+4+arg_0]
0x4702D5: push    0; int
0x4702D7: push    offset ??_R0?AVTESTexture@@@8; struct TypeDescriptor *
0x4702DC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4702E1: push    0; int
0x4702E3: push    esi; void *
0x4702E4: call    OblivionDynamicCast
0x4702E9: add     esp, 14h
0x4702EC: test    eax, eax
0x4702EE: jnz     short loc_470300
0x4702F0: mov     eax, [esp+4+arg_4]
0x4702F4: push    eax
0x4702F5: push    esi
0x4702F6: call    sub_469440
0x4702FB: add     esp, 8
0x4702FE: jmp     short loc_470303
0x470300: mov     eax, [eax+4]
0x470303: test    eax, eax
0x470305: jnz     short loc_47030C
0x470307: mov     eax, offset EmptyString
0x47030C: pop     esi
0x47030D: retn
