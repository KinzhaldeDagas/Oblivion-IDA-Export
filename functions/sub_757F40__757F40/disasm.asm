0x757F40: push    esi
0x757F41: push    48h ; 'H'; Size
0x757F43: call    FormHeapAlloc
0x757F48: mov     esi, eax
0x757F4A: add     esp, 4
0x757F4D: test    esi, esi
0x757F4F: jz      short loc_757F62
0x757F51: mov     ecx, esi
0x757F53: call    sub_75F510
0x757F58: mov     dword ptr [esi], offset ??_7NiPSysEmitterLifeSpanCtlr@@6B@; const NiPSysEmitterLifeSpanCtlr::`vftable'
0x757F5E: mov     eax, esi
0x757F60: pop     esi
0x757F61: retn
0x757F62: xor     eax, eax
0x757F64: pop     esi
0x757F65: retn
