0x499250: test    [esp+arg_0], 1
0x499255: push    esi
0x499256: mov     esi, ecx
0x499258: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@PAVWadingWaterData@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,WadingWaterData *>::`vftable'
0x49925E: jz      short loc_499269
0x499260: push    esi
0x499261: call    FormHeapFree
0x499266: add     esp, 4
0x499269: mov     eax, esi
0x49926B: pop     esi
0x49926C: retn    4
