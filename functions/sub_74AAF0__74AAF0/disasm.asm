0x74AAF0: push    esi
0x74AAF1: mov     esi, ecx
0x74AAF3: mov     ecx, [esi+4]
0x74AAF6: test    ecx, ecx
0x74AAF8: mov     dword ptr [esi], offset ??_7?$NiTArray@V?$NiPointer@VNiSkinnedEmitterData@NiPSysMeshEmitter@@@@@@6B@; const NiTArray<NiPointer<NiPSysMeshEmitter::NiSkinnedEmitterData>>::`vftable'
0x74AAFE: jz      short loc_74AB07
0x74AB00: push    3
0x74AB02: call    sub_74A000
0x74AB07: test    [esp+4+arg_0], 1
0x74AB0C: jz      short loc_74AB17
0x74AB0E: push    esi
0x74AB0F: call    FormHeapFree
0x74AB14: add     esp, 4
0x74AB17: mov     eax, esi
0x74AB19: pop     esi
0x74AB1A: retn    4
