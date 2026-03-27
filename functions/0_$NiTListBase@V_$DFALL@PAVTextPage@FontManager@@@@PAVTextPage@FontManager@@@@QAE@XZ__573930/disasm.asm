0x573930: test    [esp+arg_0], 1
0x573935: push    esi
0x573936: mov     esi, ecx
0x573938: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVTextPage@FontManager@@@@PAVTextPage@FontManager@@@@6B@; const NiTListBase<DFALL<FontManager::TextPage *>,FontManager::TextPage *>::`vftable'
0x57393E: jz      short loc_573949
0x573940: push    esi
0x573941: call    FormHeapFree
0x573946: add     esp, 4
0x573949: mov     eax, esi
0x57394B: pop     esi
0x57394C: retn    4
