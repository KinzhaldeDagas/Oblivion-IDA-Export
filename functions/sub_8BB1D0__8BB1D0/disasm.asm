0x8BB1D0: mov     eax, [esp+Origin]
0x8BB1D4: mov     edx, [esp+Offset]
0x8BB1D8: push    eax; Origin
0x8BB1D9: mov     eax, [ecx+0Ch]
0x8BB1DC: push    edx; Offset
0x8BB1DD: push    eax; File
0x8BB1DE: call    _fseek
0x8BB1E3: add     esp, 0Ch
0x8BB1E6: neg     eax
0x8BB1E8: sbb     eax, eax
0x8BB1EA: neg     eax
0x8BB1EC: retn    8
