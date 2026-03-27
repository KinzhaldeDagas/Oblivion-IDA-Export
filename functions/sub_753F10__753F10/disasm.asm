0x753F10: push    esi
0x753F11: push    3Ch ; '<'; Size
0x753F13: call    FormHeapAlloc
0x753F18: mov     esi, eax
0x753F1A: add     esp, 4
0x753F1D: test    esi, esi
0x753F1F: jz      short loc_753F4B
0x753F21: mov     ecx, esi
0x753F23: call    sub_75E800
0x753F28: fldz
0x753F2A: fstp    dword ptr [esi+30h]
0x753F2D: mov     dword ptr [esi], offset ??_7NiPSysTurbulenceFieldModifier@@6B@; const NiPSysTurbulenceFieldModifier::`vftable'
0x753F33: fld     dword ptr ds:0A7DEB4h
0x753F39: mov     eax, esi
0x753F3B: fchs
0x753F3D: fstp    dword ptr [esi+38h]
0x753F40: fld     dword ptr ds:0A5A04Ch
0x753F46: fstp    dword ptr [esi+34h]
0x753F49: pop     esi
0x753F4A: retn
0x753F4B: xor     eax, eax
0x753F4D: pop     esi
0x753F4E: retn
