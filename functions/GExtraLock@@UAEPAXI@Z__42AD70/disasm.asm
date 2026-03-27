0x42AD70: push    esi
0x42AD71: mov     esi, ecx
0x42AD73: mov     eax, [esi+0Ch]
0x42AD76: push    eax
0x42AD77: mov     dword ptr [esi], offset ??_7ExtraLock@@6B@; const ExtraLock::`vftable'
0x42AD7D: call    FormHeapFree
0x42AD82: add     esp, 4
0x42AD85: test    byte ptr [esp+4+arg_0], 1
0x42AD8A: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x42AD90: jz      short loc_42AD9B
0x42AD92: push    esi
0x42AD93: call    FormHeapFree
0x42AD98: add     esp, 4
0x42AD9B: mov     eax, esi
0x42AD9D: pop     esi
0x42AD9E: retn    4
