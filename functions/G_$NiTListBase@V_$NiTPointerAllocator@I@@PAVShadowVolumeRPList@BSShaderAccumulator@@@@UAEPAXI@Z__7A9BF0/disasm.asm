0x7A9BF0: test    [esp+arg_0], 1
0x7A9BF5: push    esi
0x7A9BF6: mov     esi, ecx
0x7A9BF8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVShadowVolumeRPList@BSShaderAccumulator@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,BSShaderAccumulator::ShadowVolumeRPList *>::`vftable'
0x7A9BFE: jz      short loc_7A9C09
0x7A9C00: push    esi
0x7A9C01: call    FormHeapFree
0x7A9C06: add     esp, 4
0x7A9C09: mov     eax, esi
0x7A9C0B: pop     esi
0x7A9C0C: retn    4
