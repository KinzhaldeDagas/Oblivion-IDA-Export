0x468A70: mov     eax, [esp+arg_0]
0x468A74: push    esi
0x468A75: push    0; int
0x468A77: push    offset ??_R0?AVTESAttackDamageForm@@@8; struct TypeDescriptor *
0x468A7C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x468A81: push    0; int
0x468A83: push    eax; void *
0x468A84: mov     esi, ecx
0x468A86: call    OblivionDynamicCast
0x468A8B: add     esp, 14h
0x468A8E: test    eax, eax
0x468A90: jz      short loc_468A9F
0x468A92: mov     edx, [eax]
0x468A94: mov     ecx, eax
0x468A96: mov     eax, [edx+10h]
0x468A99: call    eax
0x468A9B: mov     [esi+4], ax
0x468A9F: pop     esi
0x468AA0: retn    4
