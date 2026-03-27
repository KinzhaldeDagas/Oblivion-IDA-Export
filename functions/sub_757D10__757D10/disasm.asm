0x757D10: push    esi
0x757D11: push    48h ; 'H'; Size
0x757D13: call    FormHeapAlloc
0x757D18: mov     esi, eax
0x757D1A: add     esp, 4
0x757D1D: test    esi, esi
0x757D1F: jz      short loc_757D32
0x757D21: mov     ecx, esi
0x757D23: call    sub_75F510
0x757D28: mov     dword ptr [esi], offset ??_7NiPSysEmitterPlanarAngleVarCtlr@@6B@; const NiPSysEmitterPlanarAngleVarCtlr::`vftable'
0x757D2E: mov     eax, esi
0x757D30: pop     esi
0x757D31: retn
0x757D32: xor     eax, eax
0x757D34: pop     esi
0x757D35: retn
