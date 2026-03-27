0x573DB0: push    0FFFFFFFFh
0x573DB2: push    offset ??1?$NiTList@PAVTextLine@FontManager@@@@UAE@XZ_SEH
0x573DB7: mov     eax, large fs:0
0x573DBD: push    eax
0x573DBE: push    ecx
0x573DBF: push    esi
0x573DC0: mov     eax, ds:0B30AACh
0x573DC5: xor     eax, esp
0x573DC7: push    eax
0x573DC8: lea     eax, [esp+18h+var_C]
0x573DCC: mov     large fs:0, eax
0x573DD2: mov     esi, ecx
0x573DD4: mov     [esp+18h+var_10], esi
0x573DD8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVTextLine@FontManager@@@@PAVTextLine@FontManager@@@@6B@; const NiTPointerListBase<DFALL<FontManager::TextLine *>,FontManager::TextLine *>::`vftable'
0x573DDE: mov     [esp+18h+var_4], 0
0x573DE6: call    NiTPointerList__FreeAllNodes
0x573DEB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVTextLine@FontManager@@@@PAVTextLine@FontManager@@@@6B@; const NiTListBase<DFALL<FontManager::TextLine *>,FontManager::TextLine *>::`vftable'
0x573DF1: mov     ecx, [esp+18h+var_C]
0x573DF5: mov     large fs:0, ecx
0x573DFC: pop     ecx
0x573DFD: pop     esi
0x573DFE: add     esp, 10h
0x573E01: retn
