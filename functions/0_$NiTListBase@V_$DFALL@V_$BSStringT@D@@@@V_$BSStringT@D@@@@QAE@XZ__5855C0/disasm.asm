0x5855C0: test    [esp+arg_0], 1
0x5855C5: push    esi
0x5855C6: mov     esi, ecx
0x5855C8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@V?$BSStringT@D@@@@V?$BSStringT@D@@@@6B@; const NiTListBase<DFALL<BSStringT<char>>,BSStringT<char>>::`vftable'
0x5855CE: jz      short loc_5855D9
0x5855D0: push    esi
0x5855D1: call    FormHeapFree
0x5855D6: add     esp, 4
0x5855D9: mov     eax, esi
0x5855DB: pop     esi
0x5855DC: retn    4
