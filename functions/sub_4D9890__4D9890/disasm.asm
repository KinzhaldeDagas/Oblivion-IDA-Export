0x4D9890: mov     eax, [esp+arg_0]
0x4D9894: push    0; int
0x4D9896: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x4D989B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4D98A0: push    0; int
0x4D98A2: push    eax; void *
0x4D98A3: call    OblivionDynamicCast
0x4D98A8: add     esp, 14h
0x4D98AB: test    eax, eax
0x4D98AD: jz      short loc_4D98D0
0x4D98AF: movzx   ecx, word ptr [eax+8]
0x4D98B3: cmp     cx, 0FFFFh
0x4D98B8: jnz     short loc_4D98CC
0x4D98BA: mov     eax, [eax+4]
0x4D98BD: lea     edx, [eax+1]
0x4D98C0: mov     cl, [eax]
0x4D98C2: add     eax, 1
0x4D98C5: test    cl, cl
0x4D98C7: jnz     short loc_4D98C0
0x4D98C9: sub     eax, edx
0x4D98CB: retn
0x4D98CC: movzx   eax, cx
0x4D98CF: retn
0x4D98D0: xor     eax, eax
0x4D98D2: retn
