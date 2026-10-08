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
0x573E46: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x573E4B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVTextPage@FontManager@@@@PAVTextPage@FontManager@@@@6B@; const NiTListBase<DFALL<FontManager::TextPage *>,FontManager::TextPage *>::`vftable'
0x573E51: mov     ecx, [esp+18h+var_C]
0x573E55: mov     large fs:0, ecx
0x573E5C: pop     ecx
0x573E5D: pop     esi
0x573E5E: add     esp, 10h
0x573E61: retn
0x5738E0: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@PAVTextPage@FontManager@@@@PAVTextPage@FontManager@@@@6B@; const NiTListBase<DFALL<FontManager::TextPage *>,FontManager::TextPage *>::`vftable'
0x5738E6: retn
0x9BE180: mov     ecx, [ebp-10h]
0x9BE183: jmp     loc_5738E0
0x9BE188: mov     edx, [esp+arg_4]
0x9BE18C: lea     eax, [edx-8]
0x9BE18F: mov     ecx, [edx-0Ch]
0x9BE192: xor     ecx, eax
0x9BE194: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BE199: mov     eax, offset stru_AE796C
0x9BE19E: jmp     ___CxxFrameHandler3
