0x756880: push    esi
0x756881: push    48h ; 'H'; Size
0x756883: call    FormHeapAlloc
0x756888: mov     esi, eax
0x75688A: add     esp, 4
0x75688D: test    esi, esi
0x75688F: jz      short loc_7568A2
0x756891: mov     ecx, esi
0x756893: call    sub_75F510
0x756898: mov     dword ptr [esi], offset ??_7NiPSysInitialRotSpeedVarCtlr@@6B@; const NiPSysInitialRotSpeedVarCtlr::`vftable'
0x75689E: mov     eax, esi
0x7568A0: pop     esi
0x7568A1: retn
0x7568A2: xor     eax, eax
0x7568A4: pop     esi
0x7568A5: retn
