0x4528B0: push    esi
0x4528B1: mov     esi, ecx
0x4528B3: mov     eax, [esi+4]
0x4528B6: push    eax
0x4528B7: mov     dword ptr [esi], offset ??_7?$NiTLargeArray@PAUFormAndFlags@@@@6B@; const NiTLargeArray<FormAndFlags *>::`vftable'
0x4528BD: call    FormHeapFree
0x4528C2: add     esp, 4
0x4528C5: test    [esp+4+arg_0], 1
0x4528CA: jz      short loc_4528D5
0x4528CC: push    esi
0x4528CD: call    FormHeapFree
0x4528D2: add     esp, 4
0x4528D5: mov     eax, esi
0x4528D7: pop     esi
0x4528D8: retn    4
