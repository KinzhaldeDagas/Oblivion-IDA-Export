0x749D10: push    esi
0x749D11: mov     esi, ecx
0x749D13: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@PBDPAVNiPSysModifier@@@@6B@; const NiTPointerMap<char const *,NiPSysModifier *>::`vftable'
0x749D19: call    NiTMap_Clear
0x749D1E: mov     ecx, esi
0x749D20: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBDPAVNiPSysModifier@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,char const *,NiPSysModifier *>::`vftable'
0x749D26: call    NiTMap_Clear
0x749D2B: mov     eax, [esi+8]
0x749D2E: push    eax
0x749D2F: call    FormHeapFree
0x749D34: add     esp, 4
0x749D37: test    [esp+4+arg_0], 1
0x749D3C: jz      short loc_749D47
0x749D3E: push    esi
0x749D3F: call    FormHeapFree
0x749D44: add     esp, 4
0x749D47: mov     eax, esi
0x749D49: pop     esi
0x749D4A: retn    4
