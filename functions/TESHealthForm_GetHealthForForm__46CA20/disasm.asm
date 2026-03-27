0x46CA20: mov     eax, [esp+arg_0]
0x46CA24: push    0; int
0x46CA26: push    offset ??_R0?AVTESHealthForm@@@8; struct TypeDescriptor *
0x46CA2B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46CA30: push    0; int
0x46CA32: push    eax; void *
0x46CA33: call    OblivionDynamicCast
0x46CA38: add     esp, 14h
0x46CA3B: test    eax, eax
0x46CA3D: jz      short loc_46CA48
0x46CA3F: mov     edx, [eax]
0x46CA41: mov     ecx, eax
0x46CA43: mov     eax, [edx+10h]
0x46CA46: jmp     eax
0x46CA48: xor     eax, eax
0x46CA4A: retn
