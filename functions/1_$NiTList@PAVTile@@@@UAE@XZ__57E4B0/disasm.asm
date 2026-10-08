0x57E4B0: push    0FFFFFFFFh
0x57E4B2: push    offset ??1?$NiTList@PAVTile@@@@UAE@XZ_SEH
0x57E4B7: mov     eax, large fs:0
0x57E4BD: push    eax
0x57E4BE: push    ecx
0x57E4BF: push    esi
0x57E4C0: mov     eax, ds:0B30AACh
0x57E4C5: xor     eax, esp
0x57E4C7: push    eax
0x57E4C8: lea     eax, [esp+18h+var_C]
0x57E4CC: mov     large fs:0, eax
0x57E4D2: mov     esi, ecx
0x57E4D4: mov     [esp+18h+var_10], esi
0x57E4D8: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVTile@@@@PAVTile@@@@6B@; const NiTPointerListBase<DFALL<Tile *>,Tile *>::`vftable'
0x57E4DE: mov     [esp+18h+var_4], 0
0x57E4E6: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x57E4EB: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVTile@@@@PAVTile@@@@6B@; const NiTListBase<DFALL<Tile *>,Tile *>::`vftable'
0x57E4F1: mov     ecx, [esp+18h+var_C]
0x57E4F5: mov     large fs:0, ecx
0x57E4FC: pop     ecx
0x57E4FD: pop     esi
0x57E4FE: add     esp, 10h
0x57E501: retn
0x57D430: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@PAVTile@@@@PAVTile@@@@6B@; const NiTListBase<DFALL<Tile *>,Tile *>::`vftable'
0x57D436: retn
0x9BE9D0: mov     ecx, [ebp-10h]
0x9BE9D3: jmp     loc_57D430
0x9BE9D8: mov     edx, [esp+arg_4]
0x9BE9DC: lea     eax, [edx-8]
0x9BE9DF: mov     ecx, [edx-0Ch]
0x9BE9E2: xor     ecx, eax
0x9BE9E4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BE9E9: mov     eax, offset stru_AE80A8
0x9BE9EE: jmp     ___CxxFrameHandler3
