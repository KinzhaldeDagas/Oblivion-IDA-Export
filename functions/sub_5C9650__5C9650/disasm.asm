0x5C9650: push    0FFFFFFFFh
0x5C9652: push    offset SEH_5C9650
0x5C9657: mov     eax, large fs:0
0x5C965D: push    eax
0x5C965E: push    ecx
0x5C965F: push    ebx; a3
0x5C9660: push    ebp; a3
0x5C9661: push    esi; a3
0x5C9662: push    edi; a3
0x5C9663: mov     eax, ds:0B30AACh
0x5C9668: xor     eax, esp
0x5C966A: push    eax; a3
0x5C966B: lea     eax, [esp+24h+var_C]
0x5C966F: mov     large fs:0, eax
0x5C9675: mov     esi, ecx
0x5C9677: mov     ebx, [esp+24h+a2]
0x5C967B: sub     esp, 8
0x5C967E: mov     ecx, esp; this
0x5C9680: xor     eax, eax
0x5C9682: mov     [esp+2Ch+var_10], esp
0x5C9686: push    eax; a3
0x5C9687: push    ebx; a2
0x5C9688: mov     [esp+34h+var_4], 1
0x5C9690: mov     [ecx], eax
0x5C9692: mov     [ecx+4], ax
0x5C9696: mov     [ecx+6], ax
0x5C969A: call    BSStringT_Set
0x5C969F: mov     ecx, esi
0x5C96A1: call    sub_5C3110
0x5C96A6: fld     dword ptr ds:0A379B4h
0x5C96AC: mov     ecx, [esi+3Ch]; this
0x5C96AF: push    ecx
0x5C96B0: fstp    [esp+28h+var_28]; a3
0x5C96B3: push    0FB3h; a2
0x5C96B8: mov     edi, eax
0x5C96BA: call    Tile_SetFloat
0x5C96BF: mov     ebp, [esi+4]
0x5C96C2: push    0FA8h
0x5C96C7: mov     ecx, edi
0x5C96C9: call    Tile_GetFloat
0x5C96CE: push    ecx
0x5C96CF: fstp    [esp+28h+var_28]; a3
0x5C96D2: push    0FAEh; a2
0x5C96D7: mov     ecx, ebp; this
0x5C96D9: call    Tile_SetFloat
0x5C96DE: mov     ebp, [esi+4]
0x5C96E1: push    0FD0h
0x5C96E6: mov     ecx, edi
0x5C96E8: call    Tile_GetFloat
0x5C96ED: push    ecx
0x5C96EE: fstp    [esp+28h+var_28]; a3
0x5C96F1: push    0FAFh; a2
0x5C96F6: mov     ecx, ebp; this
0x5C96F8: call    Tile_SetFloat
0x5C96FD: cmp     [esp+24h+arg_10], 0
0x5C9702: jz      short loc_5C970E
0x5C9704: push    0
0x5C9706: push    edi
0x5C9707: mov     ecx, esi
0x5C9709: call    sub_5C6AF0
0x5C970E: mov     ecx, [esi+34h]; this
0x5C9711: fld     dword ptr ds:0A6906Ch
0x5C9717: push    ecx
0x5C9718: fstp    [esp+28h+var_28]; a3
0x5C971B: push    0FB7h; a2
0x5C9720: call    Tile_SetFloat
0x5C9725: fldz
0x5C9727: mov     ecx, [esi+34h]; this
0x5C972A: push    ecx
0x5C972B: fstp    [esp+28h+var_28]; a3
0x5C972E: push    0FB7h; a2
0x5C9733: call    Tile_SetFloat
0x5C9738: mov     eax, [esp+24h+arg_0]
0x5C973C: push    eax
0x5C973D: call    FormHeapFree
0x5C9742: push    ebx
0x5C9743: call    FormHeapFree
0x5C9748: add     esp, 8
0x5C974B: mov     ecx, [esp+24h+var_C]
0x5C974F: mov     large fs:0, ecx
0x5C9756: pop     ecx
0x5C9757: pop     edi
0x5C9758: pop     esi
0x5C9759: pop     ebp
0x5C975A: pop     ebx
0x5C975B: add     esp, 10h
0x5C975E: retn    14h
