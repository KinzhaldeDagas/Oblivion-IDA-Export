0x757D50: push    esi
0x757D51: push    edi
0x757D52: push    48h ; 'H'; Size
0x757D54: mov     edi, ecx
0x757D56: call    FormHeapAlloc
0x757D5B: mov     esi, eax
0x757D5D: add     esp, 4
0x757D60: test    esi, esi
0x757D62: jz      short loc_757D85
0x757D64: mov     ecx, esi
0x757D66: call    sub_75F510
0x757D6B: mov     eax, [esp+8+arg_0]
0x757D6F: push    eax
0x757D70: push    esi
0x757D71: mov     ecx, edi
0x757D73: mov     dword ptr [esi], offset ??_7NiPSysEmitterPlanarAngleVarCtlr@@6B@; const NiPSysEmitterPlanarAngleVarCtlr::`vftable'
0x757D79: call    sub_75F5A0
0x757D7E: pop     edi
0x757D7F: mov     eax, esi
0x757D81: pop     esi
0x757D82: retn    4
0x757D85: mov     eax, [esp+8+arg_0]
0x757D89: push    eax
0x757D8A: xor     esi, esi
0x757D8C: push    esi
0x757D8D: mov     ecx, edi
0x757D8F: call    sub_75F5A0
0x757D94: pop     edi
0x757D95: mov     eax, esi
0x757D97: pop     esi
0x757D98: retn    4
