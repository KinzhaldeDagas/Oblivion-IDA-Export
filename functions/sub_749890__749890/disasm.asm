0x749890: push    esi
0x749891: mov     esi, ecx
0x749893: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiPSysModifier@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPSysModifier *>::`vftable'
0x749899: call    NiTMap_Clear
0x74989E: mov     eax, [esi+8]
0x7498A1: push    eax
0x7498A2: call    FormHeapFree
0x7498A7: add     esp, 4
0x7498AA: test    [esp+4+arg_0], 1
0x7498AF: jz      short loc_7498BA
0x7498B1: push    esi
0x7498B2: call    FormHeapFree
0x7498B7: add     esp, 4
0x7498BA: mov     eax, esi
0x7498BC: pop     esi
0x7498BD: retn    4
