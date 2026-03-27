0x6FA7F0: push    esi
0x6FA7F1: mov     esi, ecx
0x6FA7F3: mov     dword ptr [esi], offset ??_7NiIntegerExtraData@@6B@; const NiIntegerExtraData::`vftable'
0x6FA7F9: call    NiExtraData_dtor
0x6FA7FE: test    byte ptr [esp+4+arg_0], 1
0x6FA803: jz      short loc_6FA80E
0x6FA805: push    esi
0x6FA806: call    FormHeapFree
0x6FA80B: add     esp, 4
0x6FA80E: mov     eax, esi
0x6FA810: pop     esi
0x6FA811: retn    4
