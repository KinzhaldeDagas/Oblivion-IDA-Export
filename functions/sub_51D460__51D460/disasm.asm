0x51D460: mov     eax, [esp+arg_0]
0x51D464: push    esi
0x51D465: push    0; int
0x51D467: push    offset ??_R0?AVMobileObject@@@8; struct TypeDescriptor *
0x51D46C: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x51D471: push    0; int
0x51D473: push    eax; void *
0x51D474: call    OblivionDynamicCast
0x51D479: mov     esi, eax
0x51D47B: add     esp, 14h
0x51D47E: test    esi, esi
0x51D480: jz      short loc_51D4B1
0x51D482: mov     eax, [esi+58h]
0x51D485: test    eax, eax
0x51D487: jz      short loc_51D4B1
0x51D489: push    0; int
0x51D48B: push    offset ??_R0?AVMiddleHighProcess@@@8; struct TypeDescriptor *
0x51D490: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x51D495: push    0; int
0x51D497: push    eax; void *
0x51D498: call    OblivionDynamicCast
0x51D49D: add     esp, 14h
0x51D4A0: test    eax, eax
0x51D4A2: jz      short loc_51D4B1
0x51D4A4: mov     edx, [eax]
0x51D4A6: mov     ecx, eax
0x51D4A8: mov     eax, [edx+3ECh]
0x51D4AE: push    esi
0x51D4AF: call    eax
0x51D4B1: pop     esi
0x51D4B2: retn    4
