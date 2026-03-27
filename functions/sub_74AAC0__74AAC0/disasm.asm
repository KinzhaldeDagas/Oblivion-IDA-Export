0x74AAC0: push    esi
0x74AAC1: mov     esi, ecx
0x74AAC3: mov     ecx, [esi+4]
0x74AAC6: test    ecx, ecx
0x74AAC8: mov     dword ptr [esi], offset ??_7?$NiTArray@V?$NiPointer@VNiGeometry@@@@@@6B@; const NiTArray<NiPointer<NiGeometry>>::`vftable'
0x74AACE: jz      short loc_74AAD7
0x74AAD0: push    3
0x74AAD2: call    sub_74A000
0x74AAD7: test    [esp+4+arg_0], 1
0x74AADC: jz      short loc_74AAE7
0x74AADE: push    esi
0x74AADF: call    FormHeapFree
0x74AAE4: add     esp, 4
0x74AAE7: mov     eax, esi
0x74AAE9: pop     esi
0x74AAEA: retn    4
