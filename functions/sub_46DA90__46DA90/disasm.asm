0x46DA90: push    esi
0x46DA91: mov     esi, [esp+4+arg_0]
0x46DA95: push    0; int
0x46DA97: push    offset ??_R0?AVTESModel@@@8; struct TypeDescriptor *
0x46DA9C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46DAA1: push    0; int
0x46DAA3: push    esi; void *
0x46DAA4: call    OblivionDynamicCast
0x46DAA9: add     esp, 14h
0x46DAAC: test    eax, eax
0x46DAAE: jnz     short loc_46DAD0
0x46DAB0: push    eax; int
0x46DAB1: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x46DAB6: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46DABB: push    eax; int
0x46DABC: push    esi; void *
0x46DABD: call    OblivionDynamicCast
0x46DAC2: push    eax
0x46DAC3: push    esi
0x46DAC4: call    sub_4694A0
0x46DAC9: add     esp, 1Ch
0x46DACC: test    eax, eax
0x46DACE: jz      short loc_46DAF3
0x46DAD0: movzx   ecx, word ptr [eax+8]
0x46DAD4: cmp     cx, 0FFFFh
0x46DAD9: jnz     short loc_46DAEE
0x46DADB: mov     eax, [eax+4]
0x46DADE: lea     edx, [eax+1]
0x46DAE1: mov     cl, [eax]
0x46DAE3: add     eax, 1
0x46DAE6: test    cl, cl
0x46DAE8: jnz     short loc_46DAE1
0x46DAEA: sub     eax, edx
0x46DAEC: pop     esi
0x46DAED: retn
0x46DAEE: movzx   eax, cx
0x46DAF1: pop     esi
0x46DAF2: retn
0x46DAF3: xor     eax, eax
0x46DAF5: pop     esi
0x46DAF6: retn
