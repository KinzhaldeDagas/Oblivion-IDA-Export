0x41CE93: push    0; int
0x41CE95: push    offset ??_R0?AVMagicTarget@@@8; struct TypeDescriptor *
0x41CE9A: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x41CE9F: push    0; int
0x41CEA1: push    edi; void *
0x41CEA2: mov     [esp+14h+arg_14], ebx
0x41CEA6: call    OblivionDynamicCast
0x41CEAB: add     esp, 14h
0x41CEAE: test    eax, eax
0x41CEB0: jz      Magic_ShowDebugText___NotMagicTarget
0x41CEB6: mov     ecx, [edi+8]
0x41CEB9: shr     ecx, 0Bh
0x41CEBC: test    cl, 1
0x41CEBF: jnz     Magic_ShowDebugText___NotMagicTarget
