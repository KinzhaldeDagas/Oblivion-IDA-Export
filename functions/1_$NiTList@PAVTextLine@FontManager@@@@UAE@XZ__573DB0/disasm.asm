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
0x573DE6: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x573DEB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVTextLine@FontManager@@@@PAVTextLine@FontManager@@@@6B@; const NiTListBase<DFALL<FontManager::TextLine *>,FontManager::TextLine *>::`vftable'
0x573DF1: mov     ecx, [esp+18h+var_C]
0x573DF5: mov     large fs:0, ecx
0x573DFC: pop     ecx
0x573DFD: pop     esi
0x573DFE: add     esp, 10h
0x573E01: retn
0x5738D0: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@PAVTextLine@FontManager@@@@PAVTextLine@FontManager@@@@6B@; const NiTListBase<DFALL<FontManager::TextLine *>,FontManager::TextLine *>::`vftable'
0x5738D6: retn
0x9BE150: mov     ecx, [ebp-10h]
0x9BE153: jmp     loc_5738D0
0x9BE158: mov     edx, [esp+arg_4]
0x9BE15C: lea     eax, [edx-8]
0x9BE15F: mov     ecx, [edx-0Ch]
0x9BE162: xor     ecx, eax
0x9BE164: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BE169: mov     eax, offset stru_AE7940
0x9BE16E: jmp     ___CxxFrameHandler3
