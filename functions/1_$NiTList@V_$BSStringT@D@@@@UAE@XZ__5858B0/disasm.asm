0x5858B0: push    0FFFFFFFFh
0x5858B2: push    offset ??1?$NiTList@V?$BSStringT@D@@@@UAE@XZ_SEH
0x5858B7: mov     eax, large fs:0
0x5858BD: push    eax
0x5858BE: push    ecx
0x5858BF: push    esi
0x5858C0: mov     eax, ds:0B30AACh
0x5858C5: xor     eax, esp
0x5858C7: push    eax
0x5858C8: lea     eax, [esp+18h+var_C]
0x5858CC: mov     large fs:0, eax
0x5858D2: mov     esi, ecx
0x5858D4: mov     [esp+18h+var_10], esi
0x5858D8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@V?$BSStringT@D@@@@V?$BSStringT@D@@@@6B@; const NiTPointerListBase<DFALL<BSStringT<char>>,BSStringT<char>>::`vftable'
0x5858DE: mov     [esp+18h+var_4], 0
0x5858E6: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x5858EB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@V?$BSStringT@D@@@@V?$BSStringT@D@@@@6B@; const NiTListBase<DFALL<BSStringT<char>>,BSStringT<char>>::`vftable'
0x5858F1: mov     ecx, [esp+18h+var_C]
0x5858F5: mov     large fs:0, ecx
0x5858FC: pop     ecx
0x5858FD: pop     esi
0x5858FE: add     esp, 10h
0x585901: retn
0x5855B0: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@V?$BSStringT@D@@@@V?$BSStringT@D@@@@6B@; const NiTListBase<DFALL<BSStringT<char>>,BSStringT<char>>::`vftable'
0x5855B6: retn
0x9BF1B0: mov     ecx, [ebp-10h]
0x9BF1B3: jmp     loc_5855B0
0x9BF1B8: mov     edx, [esp+arg_4]
0x9BF1BC: lea     eax, [edx-8]
0x9BF1BF: mov     ecx, [edx-0Ch]
0x9BF1C2: xor     ecx, eax
0x9BF1C4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF1C9: mov     eax, offset stru_AE87CC
0x9BF1CE: jmp     ___CxxFrameHandler3
