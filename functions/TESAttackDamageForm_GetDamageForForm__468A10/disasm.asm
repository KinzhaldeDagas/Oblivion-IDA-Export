0x468A10: mov     eax, [esp+arg_0]
0x468A14: push    0; int
0x468A16: push    offset ??_R0?AVTESAttackDamageForm@@@8; struct TypeDescriptor *
0x468A1B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x468A20: push    0; int
0x468A22: push    eax; void *
0x468A23: call    OblivionDynamicCast
0x468A28: add     esp, 14h
0x468A2B: test    eax, eax
0x468A2D: jz      short loc_468A38
0x468A2F: mov     edx, [eax]
0x468A31: mov     ecx, eax
0x468A33: mov     eax, [edx+10h]
0x468A36: jmp     eax
0x468A38: xor     ax, ax
0x468A3B: retn
