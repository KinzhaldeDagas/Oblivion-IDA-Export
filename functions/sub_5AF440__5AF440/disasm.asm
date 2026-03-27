0x5AF440: sub     esp, 0Ch
0x5AF443: push    3F6h
0x5AF448: call    Menu_GetOpenMenuTile
0x5AF44D: add     esp, 4
0x5AF450: test    eax, eax
0x5AF452: jz      short loc_5AF45E
0x5AF454: mov     edx, [eax]
0x5AF456: mov     ecx, eax
0x5AF458: mov     eax, [edx]
0x5AF45A: push    1
0x5AF45C: call    eax
0x5AF45E: push    ebx; a3
0x5AF45F: push    esi; a3
0x5AF460: push    edi; a3
0x5AF461: push    1; arg1
0x5AF463: push    0; canCreate
0x5AF465: call    InterfaceManager_GetSingleton
0x5AF46A: add     esp, 8
0x5AF46D: mov     edi, eax
0x5AF46F: call    InterfaceManager_GetDepth
0x5AF474: fstp    [esp+18h+var_C]
0x5AF478: mov     ecx, [edi+68h]; TileWindow *
0x5AF47B: push    offset aDataMenusLockp; "Data\\Menus\\lockpick_menu.xml"
0x5AF480: call    Menu_LoadXML
0x5AF485: mov     ebx, eax
0x5AF487: mov     ecx, ebx
0x5AF489: mov     [esp+18h+var_4], ebx
0x5AF48D: call    Tile_GetParentMenu
0x5AF492: mov     esi, eax
0x5AF494: test    esi, esi
0x5AF496: mov     [esp+18h+var_8], esi
0x5AF49A: jz      loc_5AF954
0x5AF4A0: mov     edx, [esi]
0x5AF4A2: mov     eax, [edx+34h]
0x5AF4A5: mov     ecx, esi
0x5AF4A7: call    eax
0x5AF4A9: cmp     eax, 3F6h
0x5AF4AE: jnz     loc_5AF944
0x5AF4B4: push    0; int
0x5AF4B6: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5AF4BB: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5AF4C0: push    0; int
0x5AF4C2: push    ebx; void *
0x5AF4C3: call    OblivionDynamicCast
0x5AF4C8: add     esp, 14h
0x5AF4CB: push    eax
0x5AF4CC: mov     ecx, esi
0x5AF4CE: call    Menu_SetTileMenu
0x5AF4D3: push    0; int
0x5AF4D5: push    offset ??_R0?AVLockPickMenu@@@8; struct TypeDescriptor *
0x5AF4DA: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5AF4DF: push    0; int
0x5AF4E1: push    esi; void *
0x5AF4E2: call    OblivionDynamicCast
0x5AF4E7: mov     esi, eax
0x5AF4E9: add     esp, 14h
0x5AF4EC: mov     ecx, esi
0x5AF4EE: call    sub_5AF070
0x5AF4F3: test    al, al
0x5AF4F5: jnz     short loc_5AF50D
0x5AF4F7: push    offset aLockpickMenuCr; "LockPick Menu Creation Failed... Are yo"...
0x5AF4FC: call    PrintError
0x5AF501: add     esp, 4
0x5AF504: pop     edi
0x5AF505: pop     esi
0x5AF506: xor     eax, eax
0x5AF508: pop     ebx
0x5AF509: add     esp, 0Ch
0x5AF50C: retn
0x5AF50D: push    0FA5h
0x5AF512: mov     ecx, ebx
0x5AF514: call    Tile_GetFloat
0x5AF519: fcomp   qword ptr ds:0A69778h
0x5AF51F: fnstsw  ax
0x5AF521: test    ah, 44h
0x5AF524: jp      short loc_5AF53A
0x5AF526: fld     [esp+18h+var_C]
0x5AF52A: push    ecx
0x5AF52B: fstp    [esp+1Ch+var_1C]; a3
0x5AF52E: push    0FABh; a2
0x5AF533: mov     ecx, ebx; this
0x5AF535: call    Tile_SetFloat
0x5AF53A: xor     ecx, ecx
0x5AF53C: cmp     byte ptr [edi+8], 1
0x5AF540: setnz   cl
0x5AF543: mov     [esp+18h+var_C], ecx
0x5AF547: fild    [esp+18h+var_C]
0x5AF54B: push    ecx
0x5AF54C: mov     ecx, ebx; this
0x5AF54E: fstp    [esp+1Ch+var_1C]; a3
0x5AF551: push    0FAEh; a2
0x5AF556: call    Tile_SetFloat
0x5AF55B: mov     edi, [esp+18h+arg_0]
0x5AF55F: mov     [esi+38h], edi
0x5AF562: mov     edx, ds:0B35EC8h
0x5AF568: mov     ecx, ds:0B333C4h
0x5AF56E: push    edx
0x5AF56F: call    TESObjectREF_GetItemCount
0x5AF574: mov     [esi+3Ch], eax
0x5AF577: mov     eax, ds:0B35ECCh
0x5AF57C: mov     ecx, ds:0B333C4h
0x5AF582: push    eax
0x5AF583: call    TESObjectREF_GetItemCount
0x5AF588: add     [esi+3Ch], eax
0x5AF58B: mov     ecx, edi
0x5AF58D: call    sub_4D7780
0x5AF592: fild    dword ptr [esi+3Ch]
0x5AF595: push    ecx
0x5AF596: mov     ecx, [esi+28h]; this
0x5AF599: fstp    [esp+1Ch+var_1C]; a3
0x5AF59C: push    0FB1h; a2
0x5AF5A1: mov     [esi+48h], eax
0x5AF5A4: call    Tile_SetFloat
0x5AF5A9: mov     ecx, [esi+48h]
0x5AF5AC: push    ecx
0x5AF5AD: call    GetLockLevel
0x5AF5B2: mov     eax, ds:0B03E1Ch[eax*4]
0x5AF5B9: add     esp, 4
0x5AF5BC: test    eax, eax
0x5AF5BE: jz      short loc_5AF5C4
0x5AF5C0: mov     eax, [eax]
0x5AF5C2: jmp     short loc_5AF5C6
0x5AF5C4: xor     eax, eax
0x5AF5C6: mov     ecx, [esi+28h]
0x5AF5C9: push    eax
0x5AF5CA: push    0FB0h
0x5AF5CF: call    Tile_SetString
0x5AF5D4: mov     ecx, ds:0B333C4h
0x5AF5DA: mov     edx, [ecx]
0x5AF5DC: mov     eax, [edx+284h]
0x5AF5E2: push    1Eh; a3
0x5AF5E4: call    eax
0x5AF5E6: cmp     eax, 64h ; 'd'
0x5AF5E9: jle     short loc_5AF5F5
0x5AF5EB: mov     [esp+18h+var_C], 64h ; 'd'
0x5AF5F3: jmp     short loc_5AF60B
0x5AF5F5: mov     ecx, ds:0B333C4h
0x5AF5FB: mov     edx, [ecx]
0x5AF5FD: mov     eax, [edx+284h]
0x5AF603: push    1Eh
0x5AF605: call    eax
0x5AF607: mov     [esp+18h+var_C], eax
0x5AF60B: fild    [esp+18h+var_C]
0x5AF60F: push    ecx
0x5AF610: mov     ecx, [esi+28h]; this
0x5AF613: fstp    [esp+1Ch+var_1C]; a3
0x5AF616: push    0FB2h; a2
0x5AF61B: call    Tile_SetFloat
0x5AF620: mov     ecx, [esi+48h]
0x5AF623: push    ecx
0x5AF624: call    GetLockLevel
0x5AF629: add     esp, 4
0x5AF62C: test    eax, eax
0x5AF62E: jnz     short loc_5AF639
0x5AF630: mov     dword ptr [esi+4Ch], 1
0x5AF637: jmp     short loc_5AF68E
0x5AF639: mov     edx, [esi+48h]
0x5AF63C: push    edx
0x5AF63D: call    GetLockLevel
0x5AF642: add     esp, 4
0x5AF645: cmp     eax, 1
0x5AF648: jnz     short loc_5AF653
0x5AF64A: mov     dword ptr [esi+4Ch], 2
0x5AF651: jmp     short loc_5AF68E
0x5AF653: mov     eax, [esi+48h]
0x5AF656: push    eax
0x5AF657: call    GetLockLevel
0x5AF65C: add     esp, 4
0x5AF65F: cmp     eax, 2
0x5AF662: jnz     short loc_5AF66D
0x5AF664: mov     dword ptr [esi+4Ch], 3
0x5AF66B: jmp     short loc_5AF68E
0x5AF66D: mov     ecx, [esi+48h]
0x5AF670: push    ecx
0x5AF671: call    GetLockLevel
0x5AF676: add     esp, 4
0x5AF679: cmp     eax, 3
0x5AF67C: jnz     short loc_5AF687
0x5AF67E: mov     dword ptr [esi+4Ch], 4
0x5AF685: jmp     short loc_5AF68E
0x5AF687: mov     dword ptr [esi+4Ch], 5
0x5AF68E: fldz
0x5AF690: push    ebp
0x5AF691: fstp    dword ptr [esi+78h]
0x5AF694: lea     ebp, [esi+9Ch]
0x5AF69A: mov     ebx, 5
0x5AF69F: nop
0x5AF6A0: mov     edx, [ebp+0]
0x5AF6A3: push    0; int
0x5AF6A5: push    offset ??_R0?AVTile3D@@@8; struct TypeDescriptor *
0x5AF6AA: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5AF6AF: push    0; int
0x5AF6B1: push    edx; void *
0x5AF6B2: call    OblivionDynamicCast
0x5AF6B7: mov     edi, eax
0x5AF6B9: add     esp, 14h
0x5AF6BC: test    edi, edi
0x5AF6BE: jz      short loc_5AF6E7
0x5AF6C0: fldz
0x5AF6C2: push    0; float
0x5AF6C4: mov     ecx, edi
0x5AF6C6: fstp    dword ptr [edi+58h]
0x5AF6C9: call    sub_58FBA0
0x5AF6CE: mov     edi, [edi+44h]
0x5AF6D1: test    edi, edi
0x5AF6D3: jz      short loc_5AF6E7
0x5AF6D5: fldz
0x5AF6D7: fcomp   dword ptr [edi+30h]
0x5AF6DA: fnstsw  ax
0x5AF6DC: test    ah, 5
0x5AF6DF: jp      short loc_5AF6E7
0x5AF6E1: fld     dword ptr [edi+30h]
0x5AF6E4: fstp    dword ptr [esi+78h]
0x5AF6E7: add     ebp, 28h ; '('
0x5AF6EA: sub     ebx, 1
0x5AF6ED: jnz     short loc_5AF6A0
0x5AF6EF: fldz
0x5AF6F1: fcomp   dword ptr [esi+78h]
0x5AF6F4: fnstsw  ax
0x5AF6F6: test    ah, 44h
0x5AF6F9: jp      short loc_5AF704
0x5AF6FB: fld     dword ptr ds:0A6C7CCh
0x5AF701: fstp    dword ptr [esi+78h]
0x5AF704: mov     ebp, 4
0x5AF709: cmp     [esi+4Ch], ebp
0x5AF70C: jg      short loc_5AF75A
0x5AF70E: lea     edi, [esi+11Ch]
0x5AF714: mov     eax, [edi+20h]
0x5AF717: push    0; int
0x5AF719: push    offset ??_R0?AVTile3D@@@8; struct TypeDescriptor *
0x5AF71E: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5AF723: mov     byte ptr [edi+19h], 1
0x5AF727: fld     dword ptr [esi+78h]
0x5AF72A: push    0; int
0x5AF72C: fstp    dword ptr [edi]
0x5AF72E: push    eax; void *
0x5AF72F: call    OblivionDynamicCast
0x5AF734: add     esp, 14h
0x5AF737: test    eax, eax
0x5AF739: jz      short loc_5AF74F
0x5AF73B: fld     dword ptr [esi+78h]
0x5AF73E: push    0; float
0x5AF740: fstp    dword ptr [edi]
0x5AF742: mov     ecx, eax
0x5AF744: fld     dword ptr [esi+78h]
0x5AF747: fstp    dword ptr [eax+58h]
0x5AF74A: call    sub_58FBA0
0x5AF74F: sub     ebp, 1
0x5AF752: sub     edi, 28h ; '('
0x5AF755: cmp     ebp, [esi+4Ch]
0x5AF758: jge     short loc_5AF714
0x5AF75A: mov     ecx, ds:0B33398h
0x5AF760: mov     ebp, [ecx+24h]
0x5AF763: lea     edi, [esi+80h]
0x5AF769: mov     ebx, 5
0x5AF76E: mov     edi, edi
0x5AF770: test    ebp, ebp
0x5AF772: jz      short loc_5AF787
0x5AF774: push    1
0x5AF776: push    31h ; '1'
0x5AF778: push    offset aUilocktumblerm; "UILockTumblerMoveLP"
0x5AF77D: mov     ecx, ebp
0x5AF77F: call    PlaySound???
0x5AF784: mov     [edi+20h], eax
0x5AF787: mov     dword ptr [edi], 0FFFFFFFFh
0x5AF78D: add     edi, 28h ; '('
0x5AF790: sub     ebx, 1
0x5AF793: jnz     short loc_5AF770
0x5AF795: mov     ecx, [esi+178h]
0x5AF79B: push    0FB9h
0x5AF7A0: call    Tile_GetFloat
0x5AF7A5: call    Double_To_SInt32
0x5AF7AA: mov     ecx, [esi+178h]
0x5AF7B0: push    0FBAh
0x5AF7B5: mov     [esi+98h], eax
0x5AF7BB: call    Tile_GetFloat
0x5AF7C0: call    Double_To_SInt32
0x5AF7C5: mov     ecx, [esi+178h]
0x5AF7CB: push    0FBBh
0x5AF7D0: mov     [esi+0C0h], eax
0x5AF7D6: call    Tile_GetFloat
0x5AF7DB: call    Double_To_SInt32
0x5AF7E0: mov     ecx, [esi+178h]
0x5AF7E6: push    0FBCh
0x5AF7EB: mov     [esi+0E8h], eax
0x5AF7F1: call    Tile_GetFloat
0x5AF7F6: call    Double_To_SInt32
0x5AF7FB: mov     ecx, [esi+178h]
0x5AF801: push    0FBDh
0x5AF806: mov     [esi+110h], eax
0x5AF80C: call    Tile_GetFloat
0x5AF811: call    Double_To_SInt32
0x5AF816: fld     dword ptr ds:0A5ACDCh
0x5AF81C: fstp    dword ptr [esi+64h]
0x5AF81F: mov     [esi+138h], eax
0x5AF825: fld     dword ptr ds:0A5ACC4h
0x5AF82B: mov     dword ptr [esi+50h], 5
0x5AF832: fstp    dword ptr [esi+68h]
0x5AF835: mov     dword ptr [esi+54h], 12Ch
0x5AF83C: fld     dword ptr ds:0A57604h
0x5AF842: fst     dword ptr [esi+60h]
0x5AF845: fstp    dword ptr [esi+6Ch]
0x5AF848: fld1
0x5AF84A: fstp    dword ptr [esi+5Ch]
0x5AF84D: fld     dword ptr ds:0A372CCh
0x5AF853: fstp    dword ptr [esi+70h]
0x5AF856: fild    dword ptr [esi+98h]
0x5AF85C: fstp    dword ptr [esi+148h]
0x5AF862: fld     dword ptr ds:0A6C7B4h
0x5AF868: fstp    dword ptr [esi+154h]
0x5AF86E: fld     dword ptr ds:0A6C7B0h
0x5AF874: fstp    dword ptr [esi+15Ch]
0x5AF87A: fld     dword ptr ds:0A37450h
0x5AF880: fstp    dword ptr [esi+58h]
0x5AF883: fld     dword ptr ds:0A468FCh
0x5AF889: fstp    dword ptr [esi+74h]
0x5AF88C: mov     edx, ds:0B33EA0h
0x5AF892: mov     eax, edx
0x5AF894: mov     [esi+40h], edx
0x5AF897: mov     [esi+44h], eax
0x5AF89A: mov     ecx, ds:0B38920h
0x5AF8A0: push    ecx
0x5AF8A1: mov     ecx, [esi+2Ch]
0x5AF8A4: push    0FAEh
0x5AF8A9: call    Tile_SetString
0x5AF8AE: mov     edx, ds:0B38928h
0x5AF8B4: mov     ecx, [esi+34h]
0x5AF8B7: push    edx
0x5AF8B8: push    0FAEh
0x5AF8BD: call    Tile_SetString
0x5AF8C2: mov     eax, [esi+160h]
0x5AF8C8: push    0
0x5AF8CA: mov     [esi+164h], eax
0x5AF8D0: call    sub_583DF0
0x5AF8D5: fldz
0x5AF8D7: fst     [esp+20h+a2]; float
0x5AF8DA: push    ecx
0x5AF8DB: fstp    [esp+24h+var_24]; float
0x5AF8DE: call    sub_579320
0x5AF8E3: mov     ecx, ds:0B35ECCh
0x5AF8E9: add     esp, 8
0x5AF8EC: push    ecx
0x5AF8ED: mov     ecx, ds:0B333C4h
0x5AF8F3: mov     byte ptr ds:0B3B3F4h, 1
0x5AF8FA: call    TESObjectREF_GetItemCount
0x5AF8FF: test    eax, eax
0x5AF901: mov     ecx, [esi+178h]
0x5AF907: pop     ebp
0x5AF908: jz      short loc_5AF911
0x5AF90A: push    offset aLockpickingSke; "Lockpicking\\skeletonkeypick.nif"
0x5AF90F: jmp     short loc_5AF916
0x5AF911: push    offset aLockpickingPic; "Lockpicking\\Pick.NIF"
0x5AF916: push    0FE6h
0x5AF91B: call    Tile_SetString
0x5AF920: cmp     byte ptr ds:0B3B43Dh, 0
0x5AF927: jz      short loc_5AF92E
0x5AF929: call    sub_5C1000
0x5AF92E: mov     ecx, [esp+18h+var_8]; int
0x5AF932: push    0; char
0x5AF934: call    EnableMenu
0x5AF939: mov     eax, [esp+18h+var_4]
0x5AF93D: pop     edi
0x5AF93E: pop     esi
0x5AF93F: pop     ebx
0x5AF940: add     esp, 0Ch
0x5AF943: retn
0x5AF944: cmp     dword ptr [esi+4], 0
0x5AF948: jz      short loc_5AF954
0x5AF94A: mov     edx, [esi]
0x5AF94C: mov     eax, [edx]
0x5AF94E: push    1
0x5AF950: mov     ecx, esi
0x5AF952: call    eax
0x5AF954: pop     edi
0x5AF955: pop     esi
0x5AF956: xor     eax, eax
0x5AF958: pop     ebx
0x5AF959: add     esp, 0Ch
0x5AF95C: retn
