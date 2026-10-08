0x57E450: push    0FFFFFFFFh
0x57E452: push    offset ??1?$NiTList@PAVValue@Tile@@@@UAE@XZ_SEH
0x57E457: mov     eax, large fs:0
0x57E45D: push    eax
0x57E45E: push    ecx
0x57E45F: push    esi
0x57E460: mov     eax, ds:0B30AACh
0x57E465: xor     eax, esp
0x57E467: push    eax
0x57E468: lea     eax, [esp+18h+var_C]
0x57E46C: mov     large fs:0, eax
0x57E472: mov     esi, ecx
0x57E474: mov     [esp+18h+var_10], esi
0x57E478: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVValue@Tile@@@@PAVValue@Tile@@@@6B@; const NiTPointerListBase<DFALL<Tile::Value *>,Tile::Value *>::`vftable'
0x57E47E: mov     [esp+18h+var_4], 0
0x57E486: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x57E48B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVValue@Tile@@@@PAVValue@Tile@@@@6B@; const NiTListBase<DFALL<Tile::Value *>,Tile::Value *>::`vftable'
0x57E491: mov     ecx, [esp+18h+var_C]
0x57E495: mov     large fs:0, ecx
0x57E49C: pop     ecx
0x57E49D: pop     esi
0x57E49E: add     esp, 10h
0x57E4A1: retn
0x57D420: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@PAVValue@Tile@@@@PAVValue@Tile@@@@6B@; const NiTListBase<DFALL<Tile::Value *>,Tile::Value *>::`vftable'
0x57D426: retn
0x9BE9A0: mov     ecx, [ebp-10h]
0x9BE9A3: jmp     loc_57D420
0x9BE9A8: mov     edx, [esp+arg_4]
0x9BE9AC: lea     eax, [edx-8]
0x9BE9AF: mov     ecx, [edx-0Ch]
0x9BE9B2: xor     ecx, eax
0x9BE9B4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BE9B9: mov     eax, offset stru_AE807C
0x9BE9BE: jmp     ___CxxFrameHandler3
