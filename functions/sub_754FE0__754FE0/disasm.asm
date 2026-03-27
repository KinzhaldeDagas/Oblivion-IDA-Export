0x754FE0: push    esi
0x754FE1: push    34h ; '4'; Size
0x754FE3: call    FormHeapAlloc
0x754FE8: mov     esi, eax
0x754FEA: add     esp, 4
0x754FED: test    esi, esi
0x754FEF: jz      short loc_755007
0x754FF1: mov     ecx, esi
0x754FF3: call    sub_75E800
0x754FF8: fldz
0x754FFA: fstp    dword ptr [esi+30h]
0x754FFD: mov     dword ptr [esi], offset ??_7NiPSysRadialFieldModifier@@6B@; const NiPSysRadialFieldModifier::`vftable'
0x755003: mov     eax, esi
0x755005: pop     esi
0x755006: retn
0x755007: xor     eax, eax
0x755009: pop     esi
0x75500A: retn
