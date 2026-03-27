0x6E8C40: push    esi
0x6E8C41: mov     esi, ecx
0x6E8C43: mov     eax, [esi+4]
0x6E8C46: push    eax
0x6E8C47: mov     dword ptr [esi], offset ??_7?$NiTArray@PAV?$NiTSet@PAVNiNode@@@@@@6B@; const NiTArray<NiTSet<NiNode *> *>::`vftable'
0x6E8C4D: call    FormHeapFree
0x6E8C52: add     esp, 4
0x6E8C55: test    [esp+4+arg_0], 1
0x6E8C5A: jz      short loc_6E8C65
0x6E8C5C: push    esi
0x6E8C5D: call    FormHeapFree
0x6E8C62: add     esp, 4
0x6E8C65: mov     eax, esi
0x6E8C67: pop     esi
0x6E8C68: retn    4
