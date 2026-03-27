0x757E10: push    esi
0x757E11: push    48h ; 'H'; Size
0x757E13: call    FormHeapAlloc
0x757E18: mov     esi, eax
0x757E1A: add     esp, 4
0x757E1D: test    esi, esi
0x757E1F: jz      short loc_757E32
0x757E21: mov     ecx, esi
0x757E23: call    sub_75F510
0x757E28: mov     dword ptr [esi], offset ??_7NiPSysEmitterPlanarAngleCtlr@@6B@; const NiPSysEmitterPlanarAngleCtlr::`vftable'
0x757E2E: mov     eax, esi
0x757E30: pop     esi
0x757E31: retn
0x757E32: xor     eax, eax
0x757E34: pop     esi
0x757E35: retn
