0x6FB300: push    esi
0x6FB301: mov     esi, ecx
0x6FB303: mov     dword ptr [esi], offset ??_7BSFurnitureMarker@@6B@; const BSFurnitureMarker::`vftable'
0x6FB309: mov     eax, [esi+10h]
0x6FB30C: push    eax
0x6FB30D: mov     dword ptr [esi+0Ch], offset ??_7?$NiTArray@VFurnitureMark@@@@6B@; const NiTArray<FurnitureMark>::`vftable'
0x6FB314: call    FormHeapFree
0x6FB319: add     esp, 4
0x6FB31C: mov     ecx, esi
0x6FB31E: call    NiExtraData_dtor
0x6FB323: test    [esp+4+arg_0], 1
0x6FB328: jz      short loc_6FB333
0x6FB32A: push    esi
0x6FB32B: call    FormHeapFree
0x6FB330: add     esp, 4
0x6FB333: mov     eax, esi
0x6FB335: pop     esi
0x6FB336: retn    4
