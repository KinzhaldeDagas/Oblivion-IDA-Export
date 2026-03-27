0x756BC0: push    esi
0x756BC1: push    48h ; 'H'; Size
0x756BC3: call    FormHeapAlloc
0x756BC8: mov     esi, eax
0x756BCA: add     esp, 4
0x756BCD: test    esi, esi
0x756BCF: jz      short loc_756BE2
0x756BD1: mov     ecx, esi
0x756BD3: call    sub_75F510
0x756BD8: mov     dword ptr [esi], offset ??_7NiPSysInitialRotAngleCtlr@@6B@; const NiPSysInitialRotAngleCtlr::`vftable'
0x756BDE: mov     eax, esi
0x756BE0: pop     esi
0x756BE1: retn
0x756BE2: xor     eax, eax
0x756BE4: pop     esi
0x756BE5: retn
