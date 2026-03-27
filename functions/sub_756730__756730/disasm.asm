0x756730: push    esi
0x756731: push    48h ; 'H'; Size
0x756733: call    FormHeapAlloc
0x756738: mov     esi, eax
0x75673A: add     esp, 4
0x75673D: test    esi, esi
0x75673F: jz      short loc_756752
0x756741: mov     ecx, esi
0x756743: call    sub_75F2C0
0x756748: mov     dword ptr [esi], offset ??_7NiPSysModifierActiveCtlr@@6B@; const NiPSysModifierActiveCtlr::`vftable'
0x75674E: mov     eax, esi
0x756750: pop     esi
0x756751: retn
0x756752: xor     eax, eax
0x756754: pop     esi
0x756755: retn
