0x5852C0: push    0FFFFFFFFh
0x5852C2: push    offset TileTemplateItem_constr_SEH
0x5852C7: mov     eax, large fs:0
0x5852CD: push    eax
0x5852CE: push    ecx
0x5852CF: push    esi
0x5852D0: mov     eax, ds:0B30AACh
0x5852D5: xor     eax, esp
0x5852D7: push    eax
0x5852D8: lea     eax, [esp+18h+var_C]
0x5852DC: mov     large fs:0, eax
0x5852E2: mov     esi, ecx
0x5852E4: mov     [esp+18h+var_10], esi
0x5852E8: mov     [esp+18h+var_4], 1
0x5852F0: call    sub_58BC20
0x5852F5: lea     ecx, [esi+0Ch]
0x5852F8: mov     byte ptr [esp+18h+var_4], 0
0x5852FD: call    ??1?$NiTList@PAVTileTemplateItem@Tile@@@@UAE@XZ; NiTList<Tile::TileTemplateItem *>::~NiTList<Tile::TileTemplateItem *>(void)
0x585302: mov     eax, [esi]
0x585304: push    eax
0x585305: call    FormHeapFree
0x58530A: add     esp, 4
0x58530D: mov     dword ptr [esi], 0
0x585313: mov     word ptr [esi+6], 0
0x585319: mov     word ptr [esi+4], 0
0x58531F: mov     ecx, [esp+18h+var_C]
0x585323: mov     large fs:0, ecx
0x58532A: pop     ecx
0x58532B: pop     esi
0x58532C: add     esp, 10h
0x58532F: retn
