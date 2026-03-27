0x740AF0: push    esi
0x740AF1: mov     esi, ecx
0x740AF3: mov     eax, [esi+10h]
0x740AF6: push    eax
0x740AF7: mov     dword ptr [esi], offset ??_7NiIntegersExtraData@@6B@; const NiIntegersExtraData::`vftable'
0x740AFD: call    FormHeapFree
0x740B02: add     esp, 4
0x740B05: mov     ecx, esi
0x740B07: mov     dword ptr [esi+10h], 0
0x740B0E: call    NiExtraData_dtor
0x740B13: test    [esp+4+arg_0], 1
0x740B18: jz      short loc_740B23
0x740B1A: push    esi
0x740B1B: call    FormHeapFree
0x740B20: add     esp, 4
0x740B23: mov     eax, esi
0x740B25: pop     esi
0x740B26: retn    4
