0x5897E0: push    0FFFFFFFFh
0x5897E2: push    offset ??1?$NiTList@PAVStringListElement@Tile@@@@UAE@XZ_SEH
0x5897E7: mov     eax, large fs:0
0x5897ED: push    eax
0x5897EE: push    ecx
0x5897EF: push    esi
0x5897F0: mov     eax, ds:0B30AACh
0x5897F5: xor     eax, esp
0x5897F7: push    eax
0x5897F8: lea     eax, [esp+18h+var_C]
0x5897FC: mov     large fs:0, eax
0x589802: mov     esi, ecx
0x589804: mov     [esp+18h+var_10], esi
0x589808: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVStringListElement@Tile@@@@PAVStringListElement@Tile@@@@6B@; const NiTPointerListBase<DFALL<Tile::StringListElement *>,Tile::StringListElement *>::`vftable'
0x58980E: mov     [esp+18h+var_4], 0
0x589816: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x58981B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVStringListElement@Tile@@@@PAVStringListElement@Tile@@@@6B@; const NiTListBase<DFALL<Tile::StringListElement *>,Tile::StringListElement *>::`vftable'
0x589821: mov     ecx, [esp+18h+var_C]
0x589825: mov     large fs:0, ecx
0x58982C: pop     ecx
0x58982D: pop     esi
0x58982E: add     esp, 10h
0x589831: retn
0x588AC0: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@PAVStringListElement@Tile@@@@PAVStringListElement@Tile@@@@6B@; const NiTListBase<DFALL<Tile::StringListElement *>,Tile::StringListElement *>::`vftable'
0x588AC6: retn
0x9BF740: mov     ecx, [ebp-10h]
0x9BF743: jmp     loc_588AC0
0x9BF748: mov     edx, [esp+arg_4]
0x9BF74C: lea     eax, [edx-8]
0x9BF74F: mov     ecx, [edx-0Ch]
0x9BF752: xor     ecx, eax
0x9BF754: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF759: mov     eax, offset stru_AE8C4C
0x9BF75E: jmp     ___CxxFrameHandler3
