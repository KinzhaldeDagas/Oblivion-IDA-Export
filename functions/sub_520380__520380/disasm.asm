0x520380: mov     eax, [esp+arg_0]
0x520384: push    esi
0x520385: push    edi
0x520386: push    0; int
0x520388: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x52038D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x520392: push    0; int
0x520394: push    eax; void *
0x520395: mov     edi, ecx
0x520397: call    OblivionDynamicCast
0x52039C: mov     esi, eax
0x52039E: add     esp, 14h
0x5203A1: test    esi, esi
0x5203A3: jnz     short loc_5203AC
0x5203A5: pop     edi
0x5203A6: mov     al, 1
0x5203A8: pop     esi
0x5203A9: retn    4
0x5203AC: push    esi; a2
0x5203AD: mov     ecx, edi; this
0x5203AF: call    TESForm_CompareAllComponentsTo
0x5203B4: test    al, al
0x5203B6: jnz     short loc_5203A5
0x5203B8: lea     ecx, [esi+30h]
0x5203BB: push    ecx
0x5203BC: lea     ecx, [edi+30h]
0x5203BF: call    sub_56A4B0
0x5203C4: test    al, al
0x5203C6: jnz     short loc_5203A5
0x5203C8: mov     dl, [edi+38h]
0x5203CB: cmp     dl, [esi+38h]
0x5203CE: pop     edi
0x5203CF: setnz   al
0x5203D2: pop     esi
0x5203D3: retn    4
