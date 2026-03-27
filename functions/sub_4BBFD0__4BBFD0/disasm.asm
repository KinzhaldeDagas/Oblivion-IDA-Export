0x4BBFD0: mov     eax, [esp+arg_0]
0x4BBFD4: push    esi
0x4BBFD5: push    edi
0x4BBFD6: push    0; int
0x4BBFD8: push    offset ??_R0?AVTESSoulGem@@@8; struct TypeDescriptor *
0x4BBFDD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4BBFE2: push    0; int
0x4BBFE4: push    eax; void *
0x4BBFE5: mov     edi, ecx
0x4BBFE7: call    OblivionDynamicCast
0x4BBFEC: mov     esi, eax
0x4BBFEE: add     esp, 14h
0x4BBFF1: test    esi, esi
0x4BBFF3: jnz     short loc_4BBFFC
0x4BBFF5: pop     edi
0x4BBFF6: mov     al, 1
0x4BBFF8: pop     esi
0x4BBFF9: retn    4
0x4BBFFC: push    esi
0x4BBFFD: mov     ecx, edi
0x4BBFFF: call    TESObjectMISC_CompareTo
0x4BC004: test    al, al
0x4BC006: jnz     short loc_4BBFF5
0x4BC008: mov     cl, [edi+70h]
0x4BC00B: cmp     cl, [esi+70h]
0x4BC00E: jnz     short loc_4BBFF5
0x4BC010: mov     dl, [edi+71h]
0x4BC013: cmp     dl, [esi+71h]
0x4BC016: pop     edi
0x4BC017: setnz   al
0x4BC01A: pop     esi
0x4BC01B: retn    4
