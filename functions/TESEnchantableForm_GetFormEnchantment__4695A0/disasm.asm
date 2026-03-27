0x4695A0: mov     eax, [esp+arg_0]
0x4695A4: push    0; int
0x4695A6: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x4695AB: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4695B0: push    0; int
0x4695B2: push    eax; void *
0x4695B3: call    OblivionDynamicCast
0x4695B8: add     esp, 14h
0x4695BB: test    eax, eax
0x4695BD: jz      short loc_4695C3
0x4695BF: mov     eax, [eax+4]
0x4695C2: retn
0x4695C3: xor     eax, eax
0x4695C5: retn
