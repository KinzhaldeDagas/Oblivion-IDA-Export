0x4259B0: push    esi
0x4259B1: mov     esi, ecx
0x4259B3: push    1
0x4259B5: mov     dword ptr [esi], offset ??_7BaseExtraList@@6B@; const BaseExtraList::`vftable'
0x4259BB: call    BaseExtraList_Clear
0x4259C0: test    [esp+4+arg_0], 1
0x4259C5: jz      short loc_4259D0
0x4259C7: push    esi
0x4259C8: call    FormHeapFree
0x4259CD: add     esp, 4
0x4259D0: mov     eax, esi
0x4259D2: pop     esi
0x4259D3: retn    4
