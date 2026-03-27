0x77E690: push    esi
0x77E691: mov     esi, ecx
0x77E693: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@IPAVNiVBChip@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,uint,NiVBChip *>::`vftable'
0x77E699: call    NiTMap_Clear
0x77E69E: mov     eax, [esi+8]
0x77E6A1: push    eax
0x77E6A2: call    FormHeapFree
0x77E6A7: add     esp, 4
0x77E6AA: test    [esp+4+arg_0], 1
0x77E6AF: jz      short loc_77E6BA
0x77E6B1: push    esi
0x77E6B2: call    FormHeapFree
0x77E6B7: add     esp, 4
0x77E6BA: mov     eax, esi
0x77E6BC: pop     esi
0x77E6BD: retn    4
