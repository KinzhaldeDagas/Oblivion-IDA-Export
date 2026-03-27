0x75D450: push    esi
0x75D451: push    48h ; 'H'; Size
0x75D453: call    FormHeapAlloc
0x75D458: mov     esi, eax
0x75D45A: add     esp, 4
0x75D45D: test    esi, esi
0x75D45F: jz      short loc_75D472
0x75D461: mov     ecx, esi
0x75D463: call    sub_75F510
0x75D468: mov     dword ptr [esi], offset ??_7NiPSysAirFieldAirFrictionCtlr@@6B@; const NiPSysAirFieldAirFrictionCtlr::`vftable'
0x75D46E: mov     eax, esi
0x75D470: pop     esi
0x75D471: retn
0x75D472: xor     eax, eax
0x75D474: pop     esi
0x75D475: retn
