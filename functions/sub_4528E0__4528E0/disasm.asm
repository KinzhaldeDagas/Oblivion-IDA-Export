0x4528E0: push    esi
0x4528E1: mov     esi, ecx
0x4528E3: mov     eax, [esi+4]
0x4528E6: push    eax
0x4528E7: mov     dword ptr [esi], offset ??_7?$NiTLargeArray@I@@6B@; const NiTLargeArray<uint>::`vftable'
0x4528ED: call    FormHeapFree
0x4528F2: add     esp, 4
0x4528F5: test    [esp+4+arg_0], 1
0x4528FA: jz      short loc_452905
0x4528FC: push    esi
0x4528FD: call    FormHeapFree
0x452902: add     esp, 4
0x452905: mov     eax, esi
0x452907: pop     esi
0x452908: retn    4
