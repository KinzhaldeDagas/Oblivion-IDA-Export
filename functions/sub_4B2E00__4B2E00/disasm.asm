0x4B2E00: push    esi
0x4B2E01: mov     esi, ecx
0x4B2E03: mov     dword ptr [esi], offset ??_7TESObjectExtraData@@6B@; const TESObjectExtraData::`vftable'
0x4B2E09: mov     dword ptr [esi+0Ch], 0
0x4B2E10: call    NiExtraData_dtor
0x4B2E15: test    [esp+4+arg_0], 1
0x4B2E1A: jz      short loc_4B2E25
0x4B2E1C: push    esi
0x4B2E1D: call    FormHeapFree
0x4B2E22: add     esp, 4
0x4B2E25: mov     eax, esi
0x4B2E27: pop     esi
0x4B2E28: retn    4
