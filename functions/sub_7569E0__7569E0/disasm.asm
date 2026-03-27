0x7569E0: push    esi
0x7569E1: push    48h ; 'H'; Size
0x7569E3: call    FormHeapAlloc
0x7569E8: mov     esi, eax
0x7569EA: add     esp, 4
0x7569ED: test    esi, esi
0x7569EF: jz      short loc_756A02
0x7569F1: mov     ecx, esi
0x7569F3: call    sub_75F510
0x7569F8: mov     dword ptr [esi], offset ??_7NiPSysInitialRotSpeedCtlr@@6B@; const NiPSysInitialRotSpeedCtlr::`vftable'
0x7569FE: mov     eax, esi
0x756A00: pop     esi
0x756A01: retn
0x756A02: xor     eax, eax
0x756A04: pop     esi
0x756A05: retn
