0x68B390: push    esi
0x68B391: push    edi
0x68B392: mov     edi, [esp+8+arg_0]
0x68B396: push    0; int
0x68B398: push    offset ??_R0?AVPathMiddleHigh@@@8; struct TypeDescriptor *
0x68B39D: push    offset ??_R0?AVPathLow@@@8; struct _s_RTTICompleteObjectLocator *
0x68B3A2: push    0; int
0x68B3A4: push    edi; void *
0x68B3A5: mov     esi, ecx
0x68B3A7: call    OblivionDynamicCast
0x68B3AC: add     esp, 14h
0x68B3AF: test    eax, eax
0x68B3B1: jz      short loc_68B3BF
0x68B3B3: add     eax, 14h
0x68B3B6: push    eax
0x68B3B7: lea     ecx, [esi+14h]
0x68B3BA: call    sub_68C6F0
0x68B3BF: push    edi
0x68B3C0: mov     ecx, esi
0x68B3C2: call    sub_68AA20
0x68B3C7: pop     edi
0x68B3C8: pop     esi
0x68B3C9: retn    4
