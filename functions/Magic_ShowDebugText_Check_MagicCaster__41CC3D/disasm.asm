0x41CC3D: push    0; int
0x41CC3F: push    offset ??_R0?AVMagicCaster@@@8; struct TypeDescriptor *
0x41CC44: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x41CC49: push    0; int
0x41CC4B: add     ebx, esi
0x41CC4D: push    edi; void *
0x41CC4E: mov     [esp+14h+arg_28], ebx
0x41CC52: call    OblivionDynamicCast
0x41CC57: add     esp, 28h
0x41CC5A: test    eax, eax
0x41CC5C: mov     [esp-14h+arg_2C], eax
0x41CC60: jz      Magic_ShowDebugText___NotMagicCaster
0x41CC66: mov     ecx, [edi+8]
0x41CC69: shr     ecx, 0Bh
0x41CC6C: test    cl, 1
0x41CC6F: jnz     Magic_ShowDebugText___NotMagicCaster
