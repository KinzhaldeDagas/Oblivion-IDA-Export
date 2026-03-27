0x42AE30: test    byte ptr [esp+arg_0], 1
0x42AE35: push    esi
0x42AE36: mov     esi, ecx
0x42AE38: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x42AE3E: jz      short loc_42AE49
0x42AE40: push    esi
0x42AE41: call    FormHeapFree
0x42AE46: add     esp, 4
0x42AE49: mov     eax, esi
0x42AE4B: pop     esi
0x42AE4C: retn    4
