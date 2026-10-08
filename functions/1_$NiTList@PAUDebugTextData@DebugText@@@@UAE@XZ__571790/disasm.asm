0x571790: push    0FFFFFFFFh
0x571792: push    offset ??1?$NiTList@PAUDebugTextData@DebugText@@@@UAE@XZ_SEH
0x571797: mov     eax, large fs:0
0x57179D: push    eax
0x57179E: push    ecx
0x57179F: push    esi
0x5717A0: mov     eax, ds:0B30AACh
0x5717A5: xor     eax, esp
0x5717A7: push    eax
0x5717A8: lea     eax, [esp+18h+var_C]
0x5717AC: mov     large fs:0, eax
0x5717B2: mov     esi, ecx
0x5717B4: mov     [esp+18h+var_10], esi
0x5717B8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAUDebugTextData@DebugText@@@@PAUDebugTextData@DebugText@@@@6B@; const NiTPointerListBase<DFALL<DebugText::DebugTextData *>,DebugText::DebugTextData *>::`vftable'
0x5717BE: mov     [esp+18h+var_4], 0
0x5717C6: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x5717CB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAUDebugTextData@DebugText@@@@PAUDebugTextData@DebugText@@@@6B@; const NiTListBase<DFALL<DebugText::DebugTextData *>,DebugText::DebugTextData *>::`vftable'
0x5717D1: mov     ecx, [esp+18h+var_C]
0x5717D5: mov     large fs:0, ecx
0x5717DC: pop     ecx
0x5717DD: pop     esi
0x5717DE: add     esp, 10h
0x5717E1: retn
0x571630: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@PAUDebugTextData@DebugText@@@@PAUDebugTextData@DebugText@@@@6B@; const NiTListBase<DFALL<DebugText::DebugTextData *>,DebugText::DebugTextData *>::`vftable'
0x571636: retn
0x9BDD60: mov     ecx, [ebp-10h]
0x9BDD63: jmp     loc_571630
0x9BDD68: mov     edx, [esp+arg_4]
0x9BDD6C: lea     eax, [edx-8]
0x9BDD6F: mov     ecx, [edx-0Ch]
0x9BDD72: xor     ecx, eax
0x9BDD74: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BDD79: mov     eax, offset stru_AE75D8
0x9BDD7E: jmp     ___CxxFrameHandler3
