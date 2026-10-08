0x573D50: push    0FFFFFFFFh
0x573D52: push    offset ??1?$NiTList@PAVCharData@FontManager@@@@UAE@XZ_SEH
0x573D57: mov     eax, large fs:0
0x573D5D: push    eax
0x573D5E: push    ecx
0x573D5F: push    esi
0x573D60: mov     eax, ds:0B30AACh
0x573D65: xor     eax, esp
0x573D67: push    eax
0x573D68: lea     eax, [esp+18h+var_C]
0x573D6C: mov     large fs:0, eax
0x573D72: mov     esi, ecx
0x573D74: mov     [esp+18h+var_10], esi
0x573D78: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVCharData@FontManager@@@@PAVCharData@FontManager@@@@6B@; const NiTPointerListBase<DFALL<FontManager::CharData *>,FontManager::CharData *>::`vftable'
0x573D7E: mov     [esp+18h+var_4], 0
0x573D86: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x573D8B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVCharData@FontManager@@@@PAVCharData@FontManager@@@@6B@; const NiTListBase<DFALL<FontManager::CharData *>,FontManager::CharData *>::`vftable'
0x573D91: mov     ecx, [esp+18h+var_C]
0x573D95: mov     large fs:0, ecx
0x573D9C: pop     ecx
0x573D9D: pop     esi
0x573D9E: add     esp, 10h
0x573DA1: retn
0x5738C0: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@PAVCharData@FontManager@@@@PAVCharData@FontManager@@@@6B@; const NiTListBase<DFALL<FontManager::CharData *>,FontManager::CharData *>::`vftable'
0x5738C6: retn
0x9BE120: mov     ecx, [ebp-10h]
0x9BE123: jmp     loc_5738C0
0x9BE128: mov     edx, [esp+arg_4]
0x9BE12C: lea     eax, [edx-8]
0x9BE12F: mov     ecx, [edx-0Ch]
0x9BE132: xor     ecx, eax
0x9BE134: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BE139: mov     eax, offset stru_AE7914
0x9BE13E: jmp     ___CxxFrameHandler3
