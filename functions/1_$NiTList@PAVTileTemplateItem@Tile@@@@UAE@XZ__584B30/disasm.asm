0x584B30: push    0FFFFFFFFh
0x584B32: push    offset ??1?$NiTList@PAVTileTemplateItem@Tile@@@@UAE@XZ_SEH
0x584B37: mov     eax, large fs:0
0x584B3D: push    eax
0x584B3E: push    ecx
0x584B3F: push    esi
0x584B40: mov     eax, ds:0B30AACh
0x584B45: xor     eax, esp
0x584B47: push    eax
0x584B48: lea     eax, [esp+18h+var_C]
0x584B4C: mov     large fs:0, eax
0x584B52: mov     esi, ecx
0x584B54: mov     [esp+18h+var_10], esi
0x584B58: mov     dword ptr [esi], offset ??_7?$NiTPointerListBase@V?$DFALL@PAVTileTemplateItem@Tile@@@@PAVTileTemplateItem@Tile@@@@6B@; const NiTPointerListBase<DFALL<Tile::TileTemplateItem *>,Tile::TileTemplateItem *>::`vftable'
0x584B5E: mov     [esp+18h+var_4], 0
0x584B66: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x584B6B: mov     dword ptr [esi], offset ??_7?$NiTListBase@V?$DFALL@PAVTileTemplateItem@Tile@@@@PAVTileTemplateItem@Tile@@@@6B@; const NiTListBase<DFALL<Tile::TileTemplateItem *>,Tile::TileTemplateItem *>::`vftable'
0x584B71: mov     ecx, [esp+18h+var_C]
0x584B75: mov     large fs:0, ecx
0x584B7C: pop     ecx
0x584B7D: pop     esi
0x584B7E: add     esp, 10h
0x584B81: retn
0x584400: mov     dword ptr [ecx], offset ??_7?$NiTListBase@V?$DFALL@PAVTileTemplateItem@Tile@@@@PAVTileTemplateItem@Tile@@@@6B@; const NiTListBase<DFALL<Tile::TileTemplateItem *>,Tile::TileTemplateItem *>::`vftable'
0x584406: retn
0x9BF120: mov     ecx, [ebp-10h]
0x9BF123: jmp     loc_584400
0x9BF128: mov     edx, [esp+arg_4]
0x9BF12C: lea     eax, [edx-8]
0x9BF12F: mov     ecx, [edx-0Ch]
0x9BF132: xor     ecx, eax
0x9BF134: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF139: mov     eax, offset stru_AE8748
0x9BF13E: jmp     ___CxxFrameHandler3
