0x469CD0: mov     eax, [esp+arg_0]
0x469CD4: push    0; int
0x469CD6: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x469CDB: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x469CE0: push    0; int
0x469CE2: push    eax; void *
0x469CE3: call    OblivionDynamicCast
0x469CE8: add     esp, 14h
0x469CEB: test    eax, eax
0x469CED: jz      short loc_469CF6
0x469CEF: mov     eax, [eax+4]
0x469CF2: test    eax, eax
0x469CF4: jnz     short locret_469CFB
0x469CF6: mov     eax, offset EmptyString
0x469CFB: retn
