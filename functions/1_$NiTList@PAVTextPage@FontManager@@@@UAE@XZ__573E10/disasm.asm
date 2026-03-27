0x573E10: push    0FFFFFFFFh
0x573E12: push    offset ??1?$NiTList@PAVTextPage@FontManager@@@@UAE@XZ_SEH
0x573E17: mov     eax, large fs:0
0x573E1D: push    eax
0x573E1E: push    ecx
0x573E1F: push    esi
0x573E20: mov     eax, ds:0B30AACh
0x573E25: xor     eax, esp
0x573E27: push    eax
0x573E28: lea     eax, [esp+18h+var_C]
0x573E2C: mov     large fs:0, eax
0x573E32: mov     esi, ecx
0x573E34: mov     [esp+18h+var_10], esi
0x573E38: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVTextPage@FontManager@@@@PAVTextPage@FontManager@@@@6B@; const NiTPointerListBase<DFALL<FontManager::TextPage *>,FontManager::TextPage *>::`vftable'
0x573E3E: mov     [esp+18h+var_4], 0
0x573E46: call    NiTPointerList__FreeAllNodes
0x573E4B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVTextPage@FontManager@@@@PAVTextPage@FontManager@@@@6B@; const NiTListBase<DFALL<FontManager::TextPage *>,FontManager::TextPage *>::`vftable'
0x573E51: mov     ecx, [esp+18h+var_C]
0x573E55: mov     large fs:0, ecx
0x573E5C: pop     ecx
0x573E5D: pop     esi
0x573E5E: add     esp, 10h
0x573E61: retn
