0x5AADC0: sub     esp, 144h
0x5AADC6: mov     eax, ds:0B30AACh
0x5AADCB: xor     eax, esp
0x5AADCD: mov     [esp+144h+var_4], eax
0x5AADD4: push    ebx; a3
0x5AADD5: push    3EAh
0x5AADDA: call    Menu_GetOpenMenuTile
0x5AADDF: xor     ebx, ebx
0x5AADE1: add     esp, 4
0x5AADE4: cmp     eax, ebx
0x5AADE6: mov     [esp+148h+a3], eax; a3
0x5AADEA: jz      loc_5AB3B0
0x5AADF0: push    esi; a3
0x5AADF1: push    edi; a3
0x5AADF2: mov     ecx, eax
0x5AADF4: call    Tile_GetParentMenu
0x5AADF9: mov     edi, eax
0x5AADFB: mov     esi, [edi+50h]
0x5AADFE: cmp     esi, ebx
0x5AAE00: mov     [esp+150h+var_12C], edi
0x5AAE04: jz      short loc_5AAE16
0x5AAE06: mov     ecx, esi
0x5AAE08: call    ContainerEntryExtraData_DestroyDataTable
0x5AAE0D: push    esi
0x5AAE0E: call    FormHeapFree
0x5AAE13: add     esp, 4
0x5AAE16: mov     [edi+50h], ebx
0x5AAE19: mov     ecx, ds:0B333C4h
0x5AAE1F: cmp     ecx, ebx
0x5AAE21: mov     ds:0B3B3D8h, bl
0x5AAE27: mov     dword ptr ds:0B140E4h, 0FFFFFFFFh
0x5AAE31: jz      loc_5AB3AE
0x5AAE37: mov     eax, [edi+2Ch]
0x5AAE3A: push    ebp; a3
0x5AAE3B: push    ebx
0x5AAE3C: mov     [esp+158h+var_130], eax
0x5AAE40: call    TESObjectREF_GetTotalEntryCountForITem
0x5AAE45: xor     esi, esi
0x5AAE47: xor     ebp, ebp
0x5AAE49: cmp     eax, ebx
0x5AAE4B: mov     [esp+154h+var_134], eax
0x5AAE4F: mov     [esp+154h+var_114], ebx
0x5AAE53: mov     [esp+154h+var_110], ebx
0x5AAE57: jle     loc_5AAEEF
0x5AAE5D: lea     ecx, [ecx+0]
0x5AAE60: mov     ecx, ds:0B333C4h; this
0x5AAE66: push    ebx; a3
0x5AAE67: push    ebp; a2
0x5AAE68: call    GetInventoryEntryOfItem
0x5AAE6D: mov     ebx, eax
0x5AAE6F: test    ebx, ebx
0x5AAE71: jz      short loc_5AAEE0
0x5AAE73: mov     ecx, ds:0B333C4h
0x5AAE79: push    0; a6
0x5AAE7B: push    1; a5
0x5AAE7D: push    1; a4
0x5AAE7F: push    0; a3
0x5AAE81: push    ecx; a2
0x5AAE82: mov     ecx, ebx; this
0x5AAE84: call    sub_4854F0
0x5AAE89: test    al, al
0x5AAE8B: jz      short loc_5AAED0
0x5AAE8D: mov     eax, [ebx+8]
0x5AAE90: push    eax
0x5AAE91: call    sub_469980
0x5AAE96: add     esp, 4
0x5AAE99: test    al, al
0x5AAE9B: jnz     short loc_5AAED0
0x5AAE9D: push    8; Size
0x5AAE9F: call    FormHeapAlloc
0x5AAEA4: add     esp, 4
0x5AAEA7: test    eax, eax
0x5AAEA9: jz      short loc_5AAEBF
0x5AAEAB: push    eax
0x5AAEAC: lea     ecx, [esp+158h+var_114]
0x5AAEB0: mov     [eax], ebx
0x5AAEB2: mov     [eax+4], ebp
0x5AAEB5: call    BSSimpleList_PushFront
0x5AAEBA: add     esi, 1
0x5AAEBD: jmp     short loc_5AAEE0
0x5AAEBF: xor     eax, eax
0x5AAEC1: push    eax
0x5AAEC2: lea     ecx, [esp+158h+var_114]
0x5AAEC6: call    BSSimpleList_PushFront
0x5AAECB: add     esi, 1
0x5AAECE: jmp     short loc_5AAEE0
0x5AAED0: mov     ecx, ebx
0x5AAED2: call    ContainerEntryExtraData_DestroyDataTable
0x5AAED7: push    ebx
0x5AAED8: call    FormHeapFree
0x5AAEDD: add     esp, 4
0x5AAEE0: add     ebp, 1
0x5AAEE3: xor     ebx, ebx
0x5AAEE5: cmp     ebp, [esp+154h+var_134]
0x5AAEE9: jl      loc_5AAE60
0x5AAEEF: push    offset sub_5AA2A0
0x5AAEF4: lea     ecx, [esp+158h+var_114]
0x5AAEF8: call    sub_5B27A0
0x5AAEFD: push    1; arg1
0x5AAEFF: push    ebx; canCreate
0x5AAF00: call    InterfaceManager_GetSingleton
0x5AAF05: mov     ecx, [eax+88h]
0x5AAF0B: add     esp, 8
0x5AAF0E: cmp     ecx, ebx
0x5AAF10: jz      short loc_5AAF50
0x5AAF12: push    0FA8h
0x5AAF17: call    Tile_GetFloat
0x5AAF1C: fcomp   qword ptr ds:0A6C1E0h
0x5AAF22: fnstsw  ax
0x5AAF24: test    ah, 1
0x5AAF27: jnz     short loc_5AAF50
0x5AAF29: fld1
0x5AAF2B: push    ecx
0x5AAF2C: mov     ecx, [edi+28h]; this
0x5AAF2F: fstp    [esp+158h+a2]; a3
0x5AAF32: push    0FA1h; a2
0x5AAF37: mov     [edi+3Ch], ebx
0x5AAF3A: call    Tile_SetFloat
0x5AAF3F: push    1; arg1
0x5AAF41: push    ebx; canCreate
0x5AAF42: call    InterfaceManager_GetSingleton
0x5AAF47: add     esp, 8
0x5AAF4A: mov     [eax+88h], ebx
0x5AAF50: mov     edx, [esp+154h+var_130]
0x5AAF54: mov     ebx, [edx+34h]
0x5AAF57: test    ebx, ebx
0x5AAF59: jz      short loc_5AAF92
0x5AAF5B: jmp     short loc_5AAF60
0x5AAF5D: align 10h
0x5AAF60: mov     ebp, [ebx+8]
0x5AAF63: lea     eax, [ebx+8]
0x5AAF66: mov     ebx, [ebx]
0x5AAF68: push    0FB8h
0x5AAF6D: mov     ecx, ebp
0x5AAF6F: call    sub_588B50
0x5AAF74: test    eax, eax
0x5AAF76: jz      short loc_5AAF8E
0x5AAF78: fld     dword ptr ds:0A690E0h
0x5AAF7E: push    ecx
0x5AAF7F: fstp    [esp+158h+a2]; a3
0x5AAF82: push    0FAAh; a2
0x5AAF87: mov     ecx, ebp; this
0x5AAF89: call    Tile_SetFloat
0x5AAF8E: test    ebx, ebx
0x5AAF90: jnz     short loc_5AAF60
0x5AAF92: fld     dword ptr ds:0A53954h
0x5AAF98: push    ecx
0x5AAF99: mov     ecx, [edi+4]; this
0x5AAF9C: fstp    [esp+158h+a2]; a3
0x5AAF9F: push    0FAFh; a2
0x5AAFA4: call    Tile_SetFloat
0x5AAFA9: fld     dword ptr ds:0A53954h
0x5AAFAF: push    ecx
0x5AAFB0: mov     ecx, [edi+4]; this
0x5AAFB3: fstp    [esp+158h+a2]; a3
0x5AAFB6: push    0FB0h; a2
0x5AAFBB: call    Tile_SetFloat
0x5AAFC0: fld     dword ptr ds:0A53954h
0x5AAFC6: push    ecx
0x5AAFC7: mov     ecx, [edi+4]; this
0x5AAFCA: fstp    [esp+158h+a2]; a3
0x5AAFCD: push    0FB1h; a2
0x5AAFD2: call    Tile_SetFloat
0x5AAFD7: fld     dword ptr ds:0A53954h
0x5AAFDD: push    ecx
0x5AAFDE: mov     ecx, [edi+4]; this
0x5AAFE1: fstp    [esp+158h+a2]; a3
0x5AAFE4: push    0FB2h; a2
0x5AAFE9: call    Tile_SetFloat
0x5AAFEE: neg     esi
0x5AAFF0: sbb     esi, esi
0x5AAFF2: lea     eax, [esp+154h+var_114]
0x5AAFF6: and     esi, eax
0x5AAFF8: mov     eax, esi
0x5AAFFA: test    eax, eax
0x5AAFFC: mov     [esp+154h+var_13C], 0FFFFFFFFh
0x5AB004: mov     [esp+154h+var_120], 0
0x5AB00C: mov     [esp+154h+var_138], esi
0x5AB010: mov     [esp+154h+var_128], esi
0x5AB014: jz      loc_5AB254
0x5AB01A: jmp     short loc_5AB024
0x5AB01C: align 10h
0x5AB020: mov     eax, [esp+154h+var_128]
0x5AB024: mov     ebx, [eax]
0x5AB026: mov     ecx, [ebx+4]
0x5AB029: mov     esi, [ebx]
0x5AB02B: mov     [esp+154h+var_134], ecx
0x5AB02F: mov     ecx, esi
0x5AB031: mov     [esp+154h+var_10C], ebx
0x5AB035: call    sub_485150
0x5AB03A: mov     ebp, [esi+8]
0x5AB03D: lea     edx, [esp+154h+var_118]
0x5AB041: push    ebp
0x5AB042: push    edx
0x5AB043: mov     [esp+15Ch+var_144], eax; a3
0x5AB047: mov     [esp+15Ch+var_118], eax
0x5AB04B: call    sub_5AA210
0x5AB050: mov     eax, [esp+15Ch+var_118]
0x5AB054: add     esp, 8
0x5AB057: cmp     eax, [esp+154h+var_120]
0x5AB05B: jz      short loc_5AB066
0x5AB05D: add     [esp+154h+var_13C], 1
0x5AB062: mov     [esp+154h+var_120], eax
0x5AB066: push    ebp
0x5AB067: call    sub_5C0C50
0x5AB06C: push    eax
0x5AB06D: push    offset aIcons; "Icons"
0x5AB072: lea     eax, [esp+160h+var_108]
0x5AB076: push    offset aSS_2; "%s\\%s"
0x5AB07B: push    eax
0x5AB07C: call    __sprintf
0x5AB081: mov     ecx, [esp+168h+var_130]
0x5AB085: mov     ebp, [ecx+38h]
0x5AB088: add     esp, 14h
0x5AB08B: test    ebp, ebp
0x5AB08D: jz      short loc_5AB100
0x5AB08F: nop
0x5AB090: mov     edi, [ebp+8]
0x5AB093: lea     eax, [ebp+8]
0x5AB096: mov     ebp, [ebp+4]
0x5AB099: push    0FAFh
0x5AB09E: mov     ecx, edi
0x5AB0A0: call    sub_588C10
0x5AB0A5: test    eax, eax
0x5AB0A7: jz      short loc_5AB0F8
0x5AB0A9: mov     ecx, [ebx]
0x5AB0AB: call    sub_488DF0
0x5AB0B0: test    eax, eax
0x5AB0B2: jz      short loc_5AB0F8
0x5AB0B4: push    0FAAh
0x5AB0B9: mov     ecx, edi
0x5AB0BB: call    Tile_GetFloat
0x5AB0C0: fcomp   dword ptr ds:0A690E0h
0x5AB0C6: fnstsw  ax
0x5AB0C8: test    ah, 44h
0x5AB0CB: jp      short loc_5AB0F8
0x5AB0CD: mov     ecx, [ebx]
0x5AB0CF: call    sub_488DF0
0x5AB0D4: push    0FAFh
0x5AB0D9: mov     ecx, edi
0x5AB0DB: mov     ebx, eax
0x5AB0DD: call    sub_588C10
0x5AB0E2: push    ebx; unsigned __int8 *
0x5AB0E3: push    eax; unsigned __int8 *
0x5AB0E4: call    __mbscmp
0x5AB0E9: add     esp, 8
0x5AB0EC: test    eax, eax
0x5AB0EE: jz      loc_5AB3C6
0x5AB0F4: mov     ebx, [esp+154h+var_10C]
0x5AB0F8: test    ebp, ebp
0x5AB0FA: jnz     short loc_5AB090
0x5AB0FC: mov     edi, [esp+154h+var_12C]
0x5AB100: mov     eax, [esp+154h+var_13C]
0x5AB104: lea     edx, [eax+3E9h]
0x5AB10A: push    edx
0x5AB10B: push    eax
0x5AB10C: mov     ecx, esi
0x5AB10E: call    sub_485150
0x5AB113: push    eax
0x5AB114: mov     ecx, esi
0x5AB116: call    sub_488DF0
0x5AB11B: push    eax
0x5AB11C: lea     eax, [esp+164h+var_108]
0x5AB120: push    eax
0x5AB121: mov     ecx, edi
0x5AB123: call    sub_5AAB60
0x5AB128: push    0
0x5AB12A: push    0
0x5AB12C: push    0
0x5AB12E: push    1
0x5AB130: push    1
0x5AB132: mov     ecx, esi
0x5AB134: mov     edi, eax
0x5AB136: call    sub_48F450
0x5AB13B: push    eax
0x5AB13C: push    0FB0h
0x5AB141: mov     ecx, edi
0x5AB143: call    Tile_SetString
0x5AB148: push    0
0x5AB14A: push    0
0x5AB14C: push    0
0x5AB14E: push    1
0x5AB150: push    2
0x5AB152: mov     ecx, esi
0x5AB154: call    sub_48F450
0x5AB159: push    eax
0x5AB15A: push    0FB1h
0x5AB15F: mov     ecx, edi
0x5AB161: call    Tile_SetString
0x5AB166: push    0
0x5AB168: push    0
0x5AB16A: push    0
0x5AB16C: push    1
0x5AB16E: push    3
0x5AB170: mov     ecx, esi
0x5AB172: call    sub_48F450
0x5AB177: push    eax
0x5AB178: push    0FB2h
0x5AB17D: mov     ecx, edi
0x5AB17F: call    Tile_SetString
0x5AB184: push    0
0x5AB186: push    0
0x5AB188: push    0
0x5AB18A: push    1
0x5AB18C: push    4
0x5AB18E: mov     ecx, esi
0x5AB190: call    sub_48F450
0x5AB195: push    eax
0x5AB196: push    0FB3h
0x5AB19B: mov     ecx, edi
0x5AB19D: call    Tile_SetString
0x5AB1A2: push    0
0x5AB1A4: push    0
0x5AB1A6: push    0
0x5AB1A8: push    1
0x5AB1AA: push    0
0x5AB1AC: mov     ecx, esi
0x5AB1AE: call    sub_48F450
0x5AB1B3: push    eax
0x5AB1B4: push    0FB5h
0x5AB1B9: mov     ecx, edi
0x5AB1BB: call    Tile_SetString
0x5AB1C0: push    0
0x5AB1C2: mov     ecx, esi
0x5AB1C4: call    ContainerEntryExtraData_HasWorn
0x5AB1C9: neg     al
0x5AB1CB: push    ecx
0x5AB1CC: sbb     eax, eax
0x5AB1CE: neg     eax
0x5AB1D0: add     eax, 1
0x5AB1D3: mov     [esp+158h+var_144], eax; a3
0x5AB1D7: fild    [esp+158h+var_144]
0x5AB1DB: fstp    [esp+158h+a2]; a3
0x5AB1DE: push    0FB8h; a2
0x5AB1E3: mov     ecx, edi; this
0x5AB1E5: call    Tile_SetFloat
0x5AB1EA: fild    [esp+154h+var_134]
0x5AB1EE: push    ecx
0x5AB1EF: mov     ecx, edi; this
0x5AB1F1: fstp    [esp+158h+a2]; a3
0x5AB1F4: push    0FB9h; a2
0x5AB1F9: call    Tile_SetFloat
0x5AB1FE: mov     ecx, esi
0x5AB200: call    sub_485C00
0x5AB205: mov     ebp, eax
0x5AB207: mov     [esp+154h+var_144], ebp; a3
0x5AB20B: fild    [esp+154h+var_144]
0x5AB20F: push    ecx
0x5AB210: mov     ecx, edi; this
0x5AB212: fstp    [esp+158h+a2]; a3
0x5AB215: push    0FBAh; a2
0x5AB21A: call    Tile_SetFloat
0x5AB21F: push    ebp
0x5AB220: mov     ecx, esi
0x5AB222: call    sub_48F6A0
0x5AB227: push    eax; a3
0x5AB228: push    0FBBh; a3
0x5AB22D: mov     ecx, edi
0x5AB22F: call    Tile_SetString
0x5AB234: mov     ecx, [esp+154h+var_128]
0x5AB238: mov     eax, [ecx+4]
0x5AB23B: add     [esp+154h+var_13C], 1
0x5AB240: test    eax, eax
0x5AB242: mov     edi, [esp+154h+var_12C]
0x5AB246: mov     [esp+154h+var_128], eax
0x5AB24A: jnz     loc_5AB020
0x5AB250: mov     esi, [esp+154h+var_138]
0x5AB254: mov     edx, [esp+154h+var_13C]
0x5AB258: add     edx, 0FFFFFFFFh
0x5AB25B: mov     [esp+154h+var_138], edx
0x5AB25F: fild    [esp+154h+var_138]
0x5AB263: push    ecx
0x5AB264: mov     ecx, [edi+2Ch]; this
0x5AB267: fstp    [esp+158h+a2]; a3
0x5AB26A: push    0FAEh; a2
0x5AB26F: call    Tile_SetFloat
0x5AB274: mov     eax, [esp+154h+var_130]
0x5AB278: mov     ebx, [eax+34h]
0x5AB27B: test    ebx, ebx
0x5AB27D: jz      short loc_5AB2B4
0x5AB27F: nop
0x5AB280: mov     ebp, [ebx+8]
0x5AB283: lea     eax, [ebx+8]
0x5AB286: mov     ebx, [ebx]
0x5AB288: push    0FAAh
0x5AB28D: mov     ecx, ebp
0x5AB28F: call    Tile_GetFloat
0x5AB294: fcomp   dword ptr ds:0A690E0h
0x5AB29A: fnstsw  ax
0x5AB29C: test    ah, 44h
0x5AB29F: jp      short loc_5AB2B0
0x5AB2A1: test    ebp, ebp
0x5AB2A3: jz      short loc_5AB2B0
0x5AB2A5: mov     edx, [ebp+0]
0x5AB2A8: mov     eax, [edx]
0x5AB2AA: push    1; a3
0x5AB2AC: mov     ecx, ebp
0x5AB2AE: call    eax
0x5AB2B0: test    ebx, ebx
0x5AB2B2: jnz     short loc_5AB280
0x5AB2B4: test    esi, esi
0x5AB2B6: jz      short loc_5AB2E4
0x5AB2B8: mov     ebx, [esi]
0x5AB2BA: test    ebx, ebx
0x5AB2BC: mov     esi, [esi+4]
0x5AB2BF: jz      short loc_5AB2E0
0x5AB2C1: mov     ebp, [ebx]
0x5AB2C3: test    ebp, ebp
0x5AB2C5: jz      short loc_5AB2D7
0x5AB2C7: mov     ecx, ebp
0x5AB2C9: call    ContainerEntryExtraData_DestroyDataTable
0x5AB2CE: push    ebp
0x5AB2CF: call    FormHeapFree
0x5AB2D4: add     esp, 4
0x5AB2D7: push    ebx
0x5AB2D8: call    FormHeapFree
0x5AB2DD: add     esp, 4
0x5AB2E0: test    esi, esi
0x5AB2E2: jnz     short loc_5AB2B8
0x5AB2E4: lea     ecx, [esp+154h+var_114]
0x5AB2E8: call    BSSimpleList_Clear
0x5AB2ED: mov     ecx, [edi+40h]
0x5AB2F0: push    ecx
0x5AB2F1: mov     ecx, edi
0x5AB2F3: call    sub_5AA3A0
0x5AB2F8: fldz
0x5AB2FA: mov     ecx, ds:0B333C4h
0x5AB300: fst     [esp+154h+var_124]
0x5AB304: lea     edx, [esp+154h+var_11C]
0x5AB308: fstp    [esp+154h+var_11C]
0x5AB30C: push    edx
0x5AB30D: lea     eax, [esp+158h+var_124]
0x5AB311: push    eax
0x5AB312: call    sub_65DFA0
0x5AB317: fld     [esp+154h+var_124]
0x5AB31B: call    Double_To_SInt32
0x5AB320: mov     esi, [esp+154h+a3]
0x5AB324: mov     [esp+154h+var_138], eax
0x5AB328: fild    [esp+154h+var_138]
0x5AB32C: push    ecx
0x5AB32D: mov     ecx, esi; this
0x5AB32F: fstp    [esp+158h+a2]; a3
0x5AB332: push    0FB4h; a2
0x5AB337: call    Tile_SetFloat
0x5AB33C: fld     [esp+154h+var_11C]
0x5AB340: call    Double_To_SInt32
0x5AB345: mov     [esp+154h+a3], eax
0x5AB349: fild    [esp+154h+a3]
0x5AB34D: push    ecx
0x5AB34E: mov     ecx, esi; this
0x5AB350: fstp    [esp+158h+a2]; a3
0x5AB353: push    0FB5h; a2
0x5AB358: call    Tile_SetFloat
0x5AB35D: mov     ecx, ds:0B333C4h
0x5AB363: mov     edx, [ecx]
0x5AB365: mov     eax, [edx+348h]
0x5AB36B: call    eax
0x5AB36D: call    Double_To_SInt32
0x5AB372: mov     [esp+154h+a3], eax
0x5AB376: fild    [esp+154h+a3]
0x5AB37A: push    ecx
0x5AB37B: mov     ecx, esi; this
0x5AB37D: fstp    [esp+158h+a2]; a3
0x5AB380: push    0FB6h; a2
0x5AB385: call    Tile_SetFloat
0x5AB38A: mov     ecx, ds:0B333C4h
0x5AB390: call    sub_5E4420
0x5AB395: mov     [esp+154h+a3], eax
0x5AB399: fild    [esp+154h+a3]
0x5AB39D: push    ecx
0x5AB39E: mov     ecx, esi; this
0x5AB3A0: fstp    [esp+158h+a2]; a3
0x5AB3A3: push    0FB7h; a2
0x5AB3A8: call    Tile_SetFloat
0x5AB3AD: pop     ebp
0x5AB3AE: pop     edi
0x5AB3AF: pop     esi
0x5AB3B0: mov     ecx, [esp+148h+var_4]
0x5AB3B7: pop     ebx
0x5AB3B8: xor     ecx, esp
0x5AB3BA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5AB3BF: add     esp, 144h
0x5AB3C5: retn
0x5AB3C6: mov     ecx, esi
0x5AB3C8: call    sub_488DF0
0x5AB3CD: push    eax
0x5AB3CE: push    0FAFh
0x5AB3D3: mov     ecx, edi
0x5AB3D5: call    Tile_SetString
0x5AB3DA: push    0
0x5AB3DC: push    0
0x5AB3DE: push    0
0x5AB3E0: push    1
0x5AB3E2: push    1
0x5AB3E4: mov     ecx, esi
0x5AB3E6: call    sub_48F450
0x5AB3EB: push    eax
0x5AB3EC: push    0FB0h
0x5AB3F1: mov     ecx, edi
0x5AB3F3: call    Tile_SetString
0x5AB3F8: push    0
0x5AB3FA: push    0
0x5AB3FC: push    0
0x5AB3FE: push    1
0x5AB400: push    2
0x5AB402: mov     ecx, esi
0x5AB404: call    sub_48F450
0x5AB409: push    eax
0x5AB40A: push    0FB1h
0x5AB40F: mov     ecx, edi
0x5AB411: call    Tile_SetString
0x5AB416: push    0
0x5AB418: push    0
0x5AB41A: push    0
0x5AB41C: push    1
0x5AB41E: push    3
0x5AB420: mov     ecx, esi
0x5AB422: call    sub_48F450
0x5AB427: push    eax
0x5AB428: push    0FB2h
0x5AB42D: mov     ecx, edi
0x5AB42F: call    Tile_SetString
0x5AB434: push    0
0x5AB436: push    0
0x5AB438: push    0
0x5AB43A: push    1
0x5AB43C: push    4
0x5AB43E: mov     ecx, esi
0x5AB440: call    sub_48F450
0x5AB445: push    eax
0x5AB446: push    0FB3h
0x5AB44B: mov     ecx, edi
0x5AB44D: call    Tile_SetString
0x5AB452: lea     edx, [esp+154h+var_108]
0x5AB456: push    edx
0x5AB457: push    0FB4h
0x5AB45C: mov     ecx, edi
0x5AB45E: call    Tile_SetString
0x5AB463: push    0
0x5AB465: push    0
0x5AB467: push    0
0x5AB469: push    1
0x5AB46B: push    0
0x5AB46D: mov     ecx, esi
0x5AB46F: call    sub_48F450
0x5AB474: push    eax
0x5AB475: push    0FB5h
0x5AB47A: mov     ecx, edi
0x5AB47C: call    Tile_SetString
0x5AB481: fild    [esp+154h+var_144]
0x5AB485: push    ecx
0x5AB486: mov     ecx, edi; this
0x5AB488: fstp    [esp+158h+a2]; a3
0x5AB48B: push    0FB7h; a2
0x5AB490: call    Tile_SetFloat
0x5AB495: push    0
0x5AB497: mov     ecx, esi
0x5AB499: call    ContainerEntryExtraData_HasWorn
0x5AB49E: neg     al
0x5AB4A0: sbb     eax, eax
0x5AB4A2: neg     eax
0x5AB4A4: add     eax, 1
0x5AB4A7: mov     [esp+154h+var_144], eax
0x5AB4AB: fild    [esp+154h+var_144]
0x5AB4AF: push    ecx
0x5AB4B0: fstp    [esp+158h+a2]; a3
0x5AB4B3: push    0FB8h; a2
0x5AB4B8: mov     ecx, edi; this
0x5AB4BA: call    Tile_SetFloat
0x5AB4BF: fild    [esp+154h+var_134]
0x5AB4C3: push    ecx
0x5AB4C4: mov     ecx, edi; this
0x5AB4C6: fstp    [esp+158h+a2]; a3
0x5AB4C9: push    0FB9h; a2
0x5AB4CE: call    Tile_SetFloat
0x5AB4D3: mov     ecx, esi
0x5AB4D5: call    sub_485C00
0x5AB4DA: mov     ebp, eax
0x5AB4DC: mov     [esp+154h+var_144], ebp
0x5AB4E0: fild    [esp+154h+var_144]
0x5AB4E4: push    ecx
0x5AB4E5: mov     ecx, edi; this
0x5AB4E7: fstp    [esp+158h+a2]; a3
0x5AB4EA: push    0FBAh; a2
0x5AB4EF: call    Tile_SetFloat
0x5AB4F4: push    ebp
0x5AB4F5: mov     ecx, esi
0x5AB4F7: call    sub_48F6A0
0x5AB4FC: push    eax
0x5AB4FD: push    0FBBh
0x5AB502: mov     ecx, edi
0x5AB504: call    Tile_SetString
0x5AB509: fild    [esp+154h+var_13C]
0x5AB50D: push    ecx
0x5AB50E: mov     ecx, edi; this
0x5AB510: fstp    [esp+158h+a2]; a3
0x5AB513: push    0FAAh; a2
0x5AB518: call    Tile_SetFloat
0x5AB51D: mov     esi, [esp+154h+var_130]
0x5AB521: mov     eax, [esi+34h]
0x5AB524: add     esi, 30h ; '0'
0x5AB527: test    eax, eax
0x5AB529: jz      short loc_5AB540
0x5AB52B: jmp     short loc_5AB530
0x5AB52D: align 10h
0x5AB530: cmp     edi, [eax+8]
0x5AB533: lea     ecx, [eax+8]
0x5AB536: mov     edx, eax
0x5AB538: mov     eax, [eax]
0x5AB53A: jz      short loc_5AB542
0x5AB53C: test    eax, eax
0x5AB53E: jnz     short loc_5AB530
0x5AB540: xor     edx, edx
0x5AB542: test    edx, edx
0x5AB544: mov     [esp+154h+var_144], edx
0x5AB548: jz      short loc_5AB556
0x5AB54A: lea     eax, [esp+154h+var_144]
0x5AB54E: push    eax
0x5AB54F: mov     ecx, esi
0x5AB551: call    sub_7AA860
0x5AB556: mov     edx, [esi]
0x5AB558: mov     eax, [edx+4]
0x5AB55B: mov     ecx, esi
0x5AB55D: call    eax
0x5AB55F: mov     [eax+8], edi
0x5AB562: mov     dword ptr [eax+4], 0
0x5AB569: mov     ecx, [esi+4]
0x5AB56C: mov     [eax], ecx
0x5AB56E: mov     ecx, [esi+4]
0x5AB571: test    ecx, ecx
0x5AB573: jz      short loc_5AB584
0x5AB575: mov     [ecx+4], eax
0x5AB578: add     dword ptr [esi+0Ch], 1
0x5AB57C: mov     [esi+4], eax
0x5AB57F: jmp     loc_5AB234
0x5AB584: add     dword ptr [esi+0Ch], 1
0x5AB588: mov     [esi+8], eax
0x5AB58B: mov     [esi+4], eax
0x5AB58E: jmp     loc_5AB234
