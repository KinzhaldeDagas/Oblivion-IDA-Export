0x6FB050: push    esi
0x6FB051: mov     esi, ecx
0x6FB053: mov     eax, [esi+4]
0x6FB056: push    eax
0x6FB057: mov     dword ptr [esi], offset ??_7?$NiTArray@VFurnitureMark@@@@6B@; const NiTArray<FurnitureMark>::`vftable'
0x6FB05D: call    FormHeapFree
0x6FB062: add     esp, 4
0x6FB065: test    [esp+4+arg_0], 1
0x6FB06A: jz      short loc_6FB075
0x6FB06C: push    esi
0x6FB06D: call    FormHeapFree
0x6FB072: add     esp, 4
0x6FB075: mov     eax, esi
0x6FB077: pop     esi
0x6FB078: retn    4
