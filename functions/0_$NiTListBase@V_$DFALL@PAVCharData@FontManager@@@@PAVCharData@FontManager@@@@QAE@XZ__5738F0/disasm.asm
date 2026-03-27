0x5738F0: test    [esp+arg_0], 1
0x5738F5: push    esi
0x5738F6: mov     esi, ecx
0x5738F8: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVCharData@FontManager@@@@PAVCharData@FontManager@@@@6B@; const NiTListBase<DFALL<FontManager::CharData *>,FontManager::CharData *>::`vftable'
0x5738FE: jz      short loc_573909
0x573900: push    esi
0x573901: call    FormHeapFree
0x573906: add     esp, 4
0x573909: mov     eax, esi
0x57390B: pop     esi
0x57390C: retn    4
