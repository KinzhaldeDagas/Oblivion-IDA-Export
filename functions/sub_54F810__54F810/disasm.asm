0x54F810: push    esi
0x54F811: mov     esi, ecx
0x54F813: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$DFALL@V?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@PBDV?$NiPointer@VEntry@BSFaceGenModelMap@@@@@@6B@; const NiTMapBase<DFALL<NiPointer<BSFaceGenModelMap::Entry>>,char const *,NiPointer<BSFaceGenModelMap::Entry>>::`vftable'
0x54F819: call    NiTMap_Clear
0x54F81E: mov     eax, [esi+8]
0x54F821: push    eax
0x54F822: call    FormHeapFree
0x54F827: add     esp, 4
0x54F82A: test    [esp+4+arg_0], 1
0x54F82F: jz      short loc_54F83A
0x54F831: push    esi
0x54F832: call    FormHeapFree
0x54F837: add     esp, 4
0x54F83A: mov     eax, esi
0x54F83C: pop     esi
0x54F83D: retn    4
