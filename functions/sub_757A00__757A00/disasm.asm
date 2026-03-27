0x757A00: push    esi
0x757A01: push    48h ; 'H'; Size
0x757A03: call    FormHeapAlloc
0x757A08: mov     esi, eax
0x757A0A: add     esp, 4
0x757A0D: test    esi, esi
0x757A0F: jz      short loc_757A22
0x757A11: mov     ecx, esi
0x757A13: call    sub_75F510
0x757A18: mov     dword ptr [esi], offset ??_7NiPSysFieldMagnitudeCtlr@@6B@; const NiPSysFieldMagnitudeCtlr::`vftable'
0x757A1E: mov     eax, esi
0x757A20: pop     esi
0x757A21: retn
0x757A22: xor     eax, eax
0x757A24: pop     esi
0x757A25: retn
