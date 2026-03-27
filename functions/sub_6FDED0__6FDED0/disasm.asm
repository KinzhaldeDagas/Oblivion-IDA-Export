0x6FDED0: push    esi
0x6FDED1: mov     esi, ecx
0x6FDED3: mov     dword ptr [esi], offset ??_7NiBSBoneLODController@@6B@; const NiBSBoneLODController::`vftable'
0x6FDED9: call    sub_6FD8B0
0x6FDEDE: mov     eax, [esi+48h]
0x6FDEE1: push    eax
0x6FDEE2: mov     dword ptr [esi+44h], offset ??_7?$NiTArray@PAV?$NiTSet@PAVNiNode@@@@@@6B@; const NiTArray<NiTSet<NiNode *> *>::`vftable'
0x6FDEE9: call    FormHeapFree
0x6FDEEE: add     esp, 4
0x6FDEF1: mov     ecx, esi; this
0x6FDEF3: call    ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x6FDEF8: test    [esp+4+arg_0], 1
0x6FDEFD: jz      short loc_6FDF08
0x6FDEFF: push    esi
0x6FDF00: call    FormHeapFree
0x6FDF05: add     esp, 4
0x6FDF08: mov     eax, esi
0x6FDF0A: pop     esi
0x6FDF0B: retn    4
