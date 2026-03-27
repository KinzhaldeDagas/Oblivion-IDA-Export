0x453530: mov     ecx, ds:0B33A98h
0x453536: push    esi
0x453537: mov     esi, [esp+4+arg_0]
0x45353B: mov     eax, [esi+0Ch]
0x45353E: push    eax; _DWORD
0x45353F: call    TESDataHandler_IsFormIDCreated?
0x453544: test    al, al
0x453546: jz      short loc_453593
0x453548: push    edi
0x453549: push    0; int
0x45354B: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x453550: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x453555: push    0; int
0x453557: push    esi; void *
0x453558: call    OblivionDynamicCast
0x45355D: mov     edi, [esp+1Ch+arg_4]
0x453561: add     esp, 14h
0x453564: test    eax, eax
0x453566: jz      short loc_45356E
0x453568: and     edi, 0FFFFFFFBh
0x45356B: or      edi, 2
0x45356E: push    0; int
0x453570: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x453575: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45357A: push    0; int
0x45357C: push    esi; void *
0x45357D: call    OblivionDynamicCast
0x453582: add     esp, 14h
0x453585: test    eax, eax
0x453587: jz      short loc_45358C
0x453589: or      edi, 6
0x45358C: mov     eax, edi
0x45358E: pop     edi
0x45358F: pop     esi
0x453590: retn    8
0x453593: mov     eax, [esp+4+arg_4]
0x453597: pop     esi
0x453598: retn    8
