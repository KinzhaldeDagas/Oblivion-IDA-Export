0x484340: mov     eax, [esp+a1]
0x484344: push    0; int
0x484346: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x48434B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x484350: push    0; int
0x484352: push    eax; void *
0x484353: call    OblivionDynamicCast
0x484358: add     esp, 14h
0x48435B: test    eax, eax
0x48435D: jz      short loc_484364
0x48435F: movzx   eax, word ptr [eax+8]
0x484363: retn
0x484364: xor     eax, eax
0x484366: retn
