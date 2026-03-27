0x7388F0: push    esi
0x7388F1: mov     esi, ecx
0x7388F3: mov     eax, [esi+4]
0x7388F6: push    eax
0x7388F7: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVScreenElement@NiScreenGeometryData@@@@6B@; const NiTArray<NiScreenGeometryData::ScreenElement *>::`vftable'
0x7388FD: call    FormHeapFree
0x738902: add     esp, 4
0x738905: test    [esp+4+arg_0], 1
0x73890A: jz      short loc_738915
0x73890C: push    esi
0x73890D: call    FormHeapFree
0x738912: add     esp, 4
0x738915: mov     eax, esi
0x738917: pop     esi
0x738918: retn    4
