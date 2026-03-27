0x757170: push    esi
0x757171: push    48h ; 'H'; Size
0x757173: call    FormHeapAlloc
0x757178: mov     esi, eax
0x75717A: add     esp, 4
0x75717D: test    esi, esi
0x75717F: jz      short loc_757192
0x757181: mov     ecx, esi
0x757183: call    sub_75F510
0x757188: mov     dword ptr [esi], offset ??_7NiPSysGravityStrengthCtlr@@6B@; const NiPSysGravityStrengthCtlr::`vftable'
0x75718E: mov     eax, esi
0x757190: pop     esi
0x757191: retn
0x757192: xor     eax, eax
0x757194: pop     esi
0x757195: retn
