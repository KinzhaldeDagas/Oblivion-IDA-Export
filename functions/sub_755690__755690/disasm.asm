0x755690: push    esi
0x755691: push    18h; Size
0x755693: call    FormHeapAlloc
0x755698: mov     esi, eax
0x75569A: add     esp, 4
0x75569D: test    esi, esi
0x75569F: jz      short loc_7556B2
0x7556A1: mov     ecx, esi
0x7556A3: call    sub_752BF0
0x7556A8: mov     dword ptr [esi], offset ??_7NiPSysPositionModifier@@6B@; const NiPSysPositionModifier::`vftable'
0x7556AE: mov     eax, esi
0x7556B0: pop     esi
0x7556B1: retn
0x7556B2: xor     eax, eax
0x7556B4: pop     esi
0x7556B5: retn
