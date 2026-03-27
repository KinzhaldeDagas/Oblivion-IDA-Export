0x4BB850: mov     eax, [esp+arg_0]
0x4BB854: push    esi
0x4BB855: push    edi
0x4BB856: push    0; int
0x4BB858: push    offset ??_R0?AVTESSigilStone@@@8; struct TypeDescriptor *
0x4BB85D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4BB862: push    0; int
0x4BB864: push    eax; void *
0x4BB865: mov     edi, ecx
0x4BB867: call    OblivionDynamicCast
0x4BB86C: mov     esi, eax
0x4BB86E: add     esp, 14h
0x4BB871: test    esi, esi
0x4BB873: jnz     short loc_4BB87C
0x4BB875: pop     edi
0x4BB876: mov     al, 1
0x4BB878: pop     esi
0x4BB879: retn    4
0x4BB87C: push    esi
0x4BB87D: mov     ecx, edi
0x4BB87F: call    TESObjectMISC_CompareTo
0x4BB884: test    al, al
0x4BB886: jnz     short loc_4BB875
0x4BB888: add     esi, 78h ; 'x'
0x4BB88B: push    esi
0x4BB88C: lea     ecx, [edi+78h]
0x4BB88F: call    EffectItemList_CompareTo
0x4BB894: test    al, al
0x4BB896: pop     edi
0x4BB897: setnz   al
0x4BB89A: pop     esi
0x4BB89B: retn    4
