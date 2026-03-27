0x6E8C70: push    esi
0x6E8C71: mov     esi, ecx
0x6E8C73: mov     eax, [esi+4]
0x6E8C76: push    eax
0x6E8C77: mov     dword ptr [esi], offset ??_7?$NiTArray@PAV?$NiTSet@PAUSkinInfo@NiBoneLODController@@@@@@6B@; const NiTArray<NiTSet<NiBoneLODController::SkinInfo *> *>::`vftable'
0x6E8C7D: call    FormHeapFree
0x6E8C82: add     esp, 4
0x6E8C85: test    [esp+4+arg_0], 1
0x6E8C8A: jz      short loc_6E8C95
0x6E8C8C: push    esi
0x6E8C8D: call    FormHeapFree
0x6E8C92: add     esp, 4
0x6E8C95: mov     eax, esi
0x6E8C97: pop     esi
0x6E8C98: retn    4
