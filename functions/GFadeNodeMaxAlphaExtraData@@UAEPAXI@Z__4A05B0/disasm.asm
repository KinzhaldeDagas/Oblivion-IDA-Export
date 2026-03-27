0x4A05B0: push    esi
0x4A05B1: mov     esi, ecx
0x4A05B3: mov     dword ptr [esi], offset ??_7NiFloatExtraData@@6B@; const NiFloatExtraData::`vftable'
0x4A05B9: call    NiExtraData_dtor
0x4A05BE: test    byte ptr [esp+4+arg_0], 1
0x4A05C3: jz      short loc_4A05CE
0x4A05C5: push    esi
0x4A05C6: call    FormHeapFree
0x4A05CB: add     esp, 4
0x4A05CE: mov     eax, esi
0x4A05D0: pop     esi
0x4A05D1: retn    4
