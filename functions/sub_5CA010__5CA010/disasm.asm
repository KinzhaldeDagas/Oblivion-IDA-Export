0x5CA010: push    0FFFFFFFFh
0x5CA012: push    offset SEH_5CA010
0x5CA017: mov     eax, large fs:0
0x5CA01D: push    eax
0x5CA01E: sub     esp, 14h
0x5CA021: push    ebx; a3
0x5CA022: push    ebp; a3
0x5CA023: push    esi; a3
0x5CA024: push    edi; a3
0x5CA025: mov     eax, ds:0B30AACh
0x5CA02A: xor     eax, esp
0x5CA02C: push    eax; a3
0x5CA02D: lea     eax, [esp+34h+var_C]
0x5CA031: mov     large fs:0, eax
0x5CA037: push    40Ch
0x5CA03C: call    Menu_GetOpenMenuTile
0x5CA041: add     esp, 4
0x5CA044: test    eax, eax
0x5CA046: jnz     loc_5CC1DD
0x5CA04C: push    1; arg1
0x5CA04E: push    eax; canCreate
0x5CA04F: call    InterfaceManager_GetSingleton
0x5CA054: add     esp, 8
0x5CA057: mov     esi, eax
0x5CA059: call    InterfaceManager_GetDepth
0x5CA05E: fstp    [esp+34h+var_20]
0x5CA062: mov     ecx, [esi+68h]; TileWindow *
0x5CA065: push    offset aDataMenusCharg; "Data\\Menus\\CharGen\\race_sex_menu.xml"
0x5CA06A: call    Menu_LoadXML
0x5CA06F: mov     ebx, eax
0x5CA071: mov     ecx, ebx
0x5CA073: mov     [esp+34h+var_1C], ebx
0x5CA077: call    Tile_GetParentMenu
0x5CA07C: mov     esi, eax
0x5CA07E: test    esi, esi
0x5CA080: jz      loc_5CC1DB
0x5CA086: mov     eax, ds:0B333C4h
0x5CA08B: test    eax, eax
0x5CA08D: jz      loc_5CC1CB
0x5CA093: push    0
0x5CA095: lea     ecx, [eax+44h]; this
0x5CA098: push    1
0x5CA09A: call    ExtraDataList_GetContainerChanges
0x5CA09F: mov     ecx, eax
0x5CA0A1: call    ContainerExtraData_GetEquippedInstance
0x5CA0A6: mov     ecx, ds:0B333C4h
0x5CA0AC: push    0
0x5CA0AE: add     ecx, 44h ; 'D'; this
0x5CA0B1: push    0
0x5CA0B3: mov     edi, eax
0x5CA0B5: call    ExtraDataList_GetContainerChanges
0x5CA0BA: mov     ecx, eax
0x5CA0BC: call    ContainerExtraData_GetEquippedInstance
0x5CA0C1: test    edi, edi
0x5CA0C3: jz      short loc_5CA0D0
0x5CA0C5: mov     edi, [edi+8]
0x5CA0C8: mov     [esi+864h], edi
0x5CA0CE: jmp     short loc_5CA0E9
0x5CA0D0: test    eax, eax
0x5CA0D2: jz      short loc_5CA0DF
0x5CA0D4: mov     eax, [eax+8]
0x5CA0D7: mov     [esi+864h], eax
0x5CA0DD: jmp     short loc_5CA0E9
0x5CA0DF: mov     dword ptr [esi+864h], 0
0x5CA0E9: mov     eax, [esi+864h]
0x5CA0EF: test    eax, eax
0x5CA0F1: jz      short loc_5CA109
0x5CA0F3: mov     ecx, ds:0B333C4h
0x5CA0F9: push    0
0x5CA0FB: push    0
0x5CA0FD: push    0
0x5CA0FF: push    0
0x5CA101: push    1
0x5CA103: push    eax
0x5CA104: call    Actor_UnequipItem
0x5CA109: mov     ecx, ds:0B333C4h
0x5CA10F: call    sub_65D660
0x5CA114: push    0; int
0x5CA116: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5CA11B: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5CA120: push    0; int
0x5CA122: push    ebx; void *
0x5CA123: call    OblivionDynamicCast
0x5CA128: add     esp, 14h
0x5CA12B: push    eax
0x5CA12C: mov     ecx, esi
0x5CA12E: call    Menu_SetTileMenu
0x5CA133: cmp     dword ptr [esi+28h], 0
0x5CA137: jz      short loc_5CA14B
0x5CA139: cmp     dword ptr [esi+2Ch], 0
0x5CA13D: jz      short loc_5CA14B
0x5CA13F: cmp     dword ptr [esi+30h], 0
0x5CA143: jz      short loc_5CA14B
0x5CA145: cmp     dword ptr [esi+3Ch], 0
0x5CA149: jnz     short loc_5CA15D
0x5CA14B: push    offset aRaceSexMenuCre; "Race/Sex Menu Creation Failed... Are yo"...
0x5CA150: call    PrintError
0x5CA155: add     esp, 4
0x5CA158: jmp     loc_5CC1DB
0x5CA15D: push    0FA5h
0x5CA162: mov     ecx, ebx
0x5CA164: call    Tile_GetFloat
0x5CA169: fcomp   dword ptr ds:0A69770h
0x5CA16F: fnstsw  ax
0x5CA171: test    ah, 44h
0x5CA174: jnp     short loc_5CA18F
0x5CA176: push    0FA5h
0x5CA17B: mov     ecx, ebx
0x5CA17D: call    Tile_GetFloat
0x5CA182: fcomp   qword ptr ds:0A69778h
0x5CA188: fnstsw  ax
0x5CA18A: test    ah, 44h
0x5CA18D: jp      short loc_5CA1A3
0x5CA18F: fld     [esp+34h+var_20]
0x5CA193: push    ecx
0x5CA194: fstp    [esp+38h+a2]; a3
0x5CA197: push    0FABh; a2
0x5CA19C: mov     ecx, ebx; this
0x5CA19E: call    Tile_SetFloat
0x5CA1A3: mov     ecx, ds:0B333C4h
0x5CA1A9: mov     eax, [ecx]
0x5CA1AB: mov     edx, [eax+170h]
0x5CA1B1: call    edx
0x5CA1B3: fldz
0x5CA1B5: push    ecx
0x5CA1B6: fstp    [esp+38h+a2]; float
0x5CA1B9: mov     ebp, eax
0x5CA1BB: mov     eax, [esi+8D8h]
0x5CA1C1: mov     edi, [ebp+0E8h]
0x5CA1C7: push    0; char
0x5CA1C9: push    eax; int
0x5CA1CA: mov     ecx, ebp
0x5CA1CC: call    sub_521A10
0x5CA1D1: push    eax; int
0x5CA1D2: add     edi, 29Ch
0x5CA1D8: push    edi; int
0x5CA1D9: call    sub_552990
0x5CA1DE: mov     ecx, ds:0B393B8h
0x5CA1E4: lea     ebx, [esi+8F0h]
0x5CA1EA: mov     [ebx], ecx
0x5CA1EC: mov     edx, ds:0B39338h
0x5CA1F2: push    edx; ArgList
0x5CA1F3: lea     eax, [esi+930h]
0x5CA1F9: push    offset aS; "%s"
0x5CA1FE: push    eax; int
0x5CA1FF: call    BSStringT_Static_Format
0x5CA204: mov     ecx, ds:0B393C0h
0x5CA20A: mov     [esi+8F4h], ecx
0x5CA210: mov     edx, ds:0B39340h
0x5CA216: push    edx; ArgList
0x5CA217: lea     eax, [esi+938h]
0x5CA21D: push    offset aS; "%s"
0x5CA222: push    eax; int
0x5CA223: call    BSStringT_Static_Format
0x5CA228: mov     ecx, ds:0B393C8h
0x5CA22E: mov     [esi+8F8h], ecx
0x5CA234: mov     edx, ds:0B39348h
0x5CA23A: push    edx; ArgList
0x5CA23B: lea     eax, [esi+940h]
0x5CA241: push    offset aS; "%s"
0x5CA246: push    eax; int
0x5CA247: call    BSStringT_Static_Format
0x5CA24C: mov     ecx, ds:0B393D0h
0x5CA252: mov     [esi+8FCh], ecx
0x5CA258: mov     edx, ds:0B39350h
0x5CA25E: push    edx; ArgList
0x5CA25F: lea     eax, [esi+948h]
0x5CA265: push    offset aS; "%s"
0x5CA26A: push    eax; int
0x5CA26B: call    BSStringT_Static_Format
0x5CA270: mov     ecx, ds:0B393D8h
0x5CA276: add     esp, 44h
0x5CA279: mov     [esi+900h], ecx
0x5CA27F: mov     edx, ds:0B39358h
0x5CA285: push    edx; ArgList
0x5CA286: lea     eax, [esi+950h]
0x5CA28C: push    offset aS; "%s"
0x5CA291: push    eax; int
0x5CA292: call    BSStringT_Static_Format
0x5CA297: mov     ecx, ds:0B393E0h
0x5CA29D: mov     [esi+904h], ecx
0x5CA2A3: mov     edx, ds:0B39360h
0x5CA2A9: push    edx; ArgList
0x5CA2AA: lea     eax, [esi+958h]
0x5CA2B0: push    offset aS; "%s"
0x5CA2B5: push    eax; int
0x5CA2B6: call    BSStringT_Static_Format
0x5CA2BB: mov     ecx, ds:0B393E8h
0x5CA2C1: mov     [esi+908h], ecx
0x5CA2C7: mov     edx, ds:0B39368h
0x5CA2CD: push    edx; ArgList
0x5CA2CE: lea     eax, [esi+960h]
0x5CA2D4: push    offset aS; "%s"
0x5CA2D9: push    eax; int
0x5CA2DA: call    BSStringT_Static_Format
0x5CA2DF: mov     ecx, ds:0B393F0h
0x5CA2E5: mov     [esi+90Ch], ecx
0x5CA2EB: mov     edx, ds:0B39370h
0x5CA2F1: push    edx; ArgList
0x5CA2F2: push    offset aS; "%s"
0x5CA2F7: lea     eax, [esi+968h]
0x5CA2FD: push    eax; int
0x5CA2FE: call    BSStringT_Static_Format
0x5CA303: mov     ecx, ds:0B393F8h
0x5CA309: mov     [esi+910h], ecx
0x5CA30F: mov     edx, ds:0B39378h
0x5CA315: push    edx; ArgList
0x5CA316: lea     eax, [esi+970h]
0x5CA31C: push    offset aS; "%s"
0x5CA321: push    eax; int
0x5CA322: call    BSStringT_Static_Format
0x5CA327: mov     ecx, ds:0B39400h
0x5CA32D: mov     [esi+914h], ecx
0x5CA333: mov     edx, ds:0B39380h
0x5CA339: push    edx; ArgList
0x5CA33A: lea     eax, [esi+978h]
0x5CA340: push    offset aS; "%s"
0x5CA345: push    eax; int
0x5CA346: call    BSStringT_Static_Format
0x5CA34B: mov     ecx, ds:0B39408h
0x5CA351: add     esp, 48h
0x5CA354: mov     [esi+918h], ecx
0x5CA35A: mov     edx, ds:0B39388h
0x5CA360: push    edx; ArgList
0x5CA361: lea     eax, [esi+980h]
0x5CA367: push    offset aS; "%s"
0x5CA36C: push    eax; ArgList
0x5CA36D: call    BSStringT_Static_Format
0x5CA372: mov     ecx, ds:0B39410h
0x5CA378: mov     [esi+91Ch], ecx
0x5CA37E: mov     edx, ds:0B39390h
0x5CA384: push    edx; int
0x5CA385: lea     eax, [esi+988h]
0x5CA38B: push    offset aS; "%s"
0x5CA390: push    eax; ArgList
0x5CA391: call    BSStringT_Static_Format
0x5CA396: mov     ecx, ds:0B39418h
0x5CA39C: mov     [esi+920h], ecx
0x5CA3A2: mov     edx, ds:0B39398h
0x5CA3A8: push    edx; ArgList
0x5CA3A9: lea     eax, [esi+990h]
0x5CA3AF: push    offset aS; "%s"
0x5CA3B4: push    eax; int
0x5CA3B5: call    BSStringT_Static_Format
0x5CA3BA: mov     ecx, ds:0B39420h
0x5CA3C0: mov     [esi+924h], ecx
0x5CA3C6: mov     edx, ds:0B393A0h
0x5CA3CC: push    edx; ArgList
0x5CA3CD: lea     eax, [esi+998h]
0x5CA3D3: push    offset aS; "%s"
0x5CA3D8: push    eax; int
0x5CA3D9: call    BSStringT_Static_Format
0x5CA3DE: mov     ecx, ds:0B39428h
0x5CA3E4: mov     [esi+928h], ecx
0x5CA3EA: mov     edx, ds:0B393A8h
0x5CA3F0: push    edx; ArgList
0x5CA3F1: lea     eax, [esi+9A0h]
0x5CA3F7: push    offset aS; "%s"
0x5CA3FC: push    eax; int
0x5CA3FD: call    BSStringT_Static_Format
0x5CA402: mov     ecx, ds:0B39430h
0x5CA408: mov     [esi+92Ch], ecx
0x5CA40E: mov     edx, ds:0B393B0h
0x5CA414: push    edx; ArgList
0x5CA415: lea     eax, [esi+9A8h]
0x5CA41B: push    offset aS; "%s"
0x5CA420: push    eax; int
0x5CA421: call    BSStringT_Static_Format
0x5CA426: mov     edx, ds:0B38F70h
0x5CA42C: add     esp, 48h
0x5CA42F: push    0; int
0x5CA431: push    0; int
0x5CA433: sub     esp, 8
0x5CA436: mov     ecx, esp
0x5CA438: mov     [esp+44h+var_10], esp
0x5CA43C: push    edx
0x5CA43D: call    BSStringT_constr_str
0x5CA442: mov     eax, [esi+28h]
0x5CA445: push    eax; int
0x5CA446: mov     ecx, esi
0x5CA448: call    sub_5C4340
0x5CA44D: push    0; char
0x5CA44F: push    1; char
0x5CA451: sub     esp, 8
0x5CA454: mov     ecx, esp
0x5CA456: mov     [esp+44h+var_10], esp
0x5CA45A: push    offset asc_A6D30C; "          "
0x5CA45F: mov     [esi+40h], eax
0x5CA462: call    BSStringT_constr_str
0x5CA467: mov     edx, ds:0B38F78h
0x5CA46D: sub     esp, 8
0x5CA470: mov     ecx, esp
0x5CA472: mov     [esp+4Ch+var_14], esp
0x5CA476: push    edx
0x5CA477: mov     [esp+50h+var_4], 0
0x5CA47F: call    BSStringT_constr_str
0x5CA484: mov     eax, [esi+40h]
0x5CA487: or      edi, 0FFFFFFFFh
0x5CA48A: push    eax; int
0x5CA48B: mov     ecx, esi
0x5CA48D: mov     [esp+50h+var_4], edi
0x5CA491: call    sub_5C4480
0x5CA496: mov     edx, ds:0B38F80h
0x5CA49C: push    0; char
0x5CA49E: push    0; char
0x5CA4A0: sub     esp, 8
0x5CA4A3: mov     ecx, esp
0x5CA4A5: mov     [esp+44h+var_10], esp
0x5CA4A9: push    edx; int
0x5CA4AA: call    BSStringT_constr_str
0x5CA4AF: mov     eax, ds:0B38F80h
0x5CA4B4: sub     esp, 8
0x5CA4B7: mov     ecx, esp
0x5CA4B9: mov     [esp+4Ch+var_14], esp
0x5CA4BD: push    eax
0x5CA4BE: mov     [esp+50h+var_4], 1
0x5CA4C6: call    BSStringT_constr_str
0x5CA4CB: mov     ecx, [esi+40h]
0x5CA4CE: push    ecx; int
0x5CA4CF: mov     ecx, esi
0x5CA4D1: mov     [esp+50h+var_4], edi
0x5CA4D5: call    sub_5C4480
0x5CA4DA: push    0; char
0x5CA4DC: push    1; int
0x5CA4DE: sub     esp, 8
0x5CA4E1: mov     ecx, esp
0x5CA4E3: mov     [esp+44h+var_10], esp
0x5CA4E7: push    offset asc_A6D30C; "          "
0x5CA4EC: call    BSStringT_constr_str
0x5CA4F1: mov     edx, ds:0B38F88h
0x5CA4F7: sub     esp, 8
0x5CA4FA: mov     ecx, esp
0x5CA4FC: mov     [esp+4Ch+var_14], esp
0x5CA500: push    edx
0x5CA501: mov     [esp+50h+var_4], 2
0x5CA509: call    BSStringT_constr_str
0x5CA50E: mov     eax, [esi+40h]
0x5CA511: push    eax; int
0x5CA512: mov     ecx, esi
0x5CA514: mov     [esp+50h+var_4], edi
0x5CA518: call    sub_5C4480
0x5CA51D: mov     edx, ds:0B38F90h
0x5CA523: push    0; char
0x5CA525: sub     esp, 8
0x5CA528: mov     ecx, esp
0x5CA52A: mov     [esp+40h+var_10], esp
0x5CA52E: push    edx
0x5CA52F: call    BSStringT_constr_str
0x5CA534: mov     eax, [esi+40h]
0x5CA537: push    eax; ArgList
0x5CA538: mov     ecx, esi
0x5CA53A: call    sub_5C4630
0x5CA53F: mov     edx, ds:0B38F98h
0x5CA545: push    0; char
0x5CA547: push    edi; int
0x5CA548: push    edi; int
0x5CA549: sub     esp, 8
0x5CA54C: mov     ecx, esp
0x5CA54E: mov     [esp+48h+var_10], esp
0x5CA552: push    edx
0x5CA553: call    BSStringT_constr_str
0x5CA558: mov     eax, [esi+40h]
0x5CA55B: push    eax; int
0x5CA55C: mov     ecx, esi
0x5CA55E: call    sub_5C93F0
0x5CA563: mov     edx, ds:0B38FA0h
0x5CA569: push    0; char
0x5CA56B: push    edi; int
0x5CA56C: push    edi; ArgList
0x5CA56D: sub     esp, 8
0x5CA570: mov     ecx, esp
0x5CA572: mov     [esp+48h+var_10], esp
0x5CA576: push    edx
0x5CA577: call    BSStringT_constr_str
0x5CA57C: mov     eax, [esi+40h]
0x5CA57F: push    eax; int
0x5CA580: mov     ecx, esi
0x5CA582: call    sub_5C93F0
0x5CA587: mov     edx, ds:0B38F78h
0x5CA58D: push    edi; int
0x5CA58E: push    edi; ArgList
0x5CA58F: sub     esp, 8
0x5CA592: mov     ecx, esp
0x5CA594: mov     [esp+44h+var_10], esp
0x5CA598: push    edx
0x5CA599: call    BSStringT_constr_str
0x5CA59E: mov     eax, [esi+28h]
0x5CA5A1: push    eax; int
0x5CA5A2: mov     ecx, esi
0x5CA5A4: call    sub_5C4340
0x5CA5A9: push    0; char
0x5CA5AB: sub     esp, 8
0x5CA5AE: mov     [esi+44h], eax
0x5CA5B1: mov     edx, ds:0B38FA8h
0x5CA5B7: mov     ecx, esp
0x5CA5B9: mov     [esp+40h+var_10], esp
0x5CA5BD: push    edx
0x5CA5BE: call    BSStringT_constr_str
0x5CA5C3: mov     eax, [esi+44h]
0x5CA5C6: push    eax; int
0x5CA5C7: mov     ecx, esi
0x5CA5C9: call    sub_5C4630
0x5CA5CE: mov     edx, ds:0B38F78h
0x5CA5D4: push    0; int
0x5CA5D6: sub     esp, 8
0x5CA5D9: mov     ecx, esp
0x5CA5DB: mov     [esp+40h+var_10], esp
0x5CA5DF: push    edx
0x5CA5E0: call    BSStringT_constr_str
0x5CA5E5: mov     eax, [esi+44h]
0x5CA5E8: push    eax; ArgList
0x5CA5E9: mov     ecx, esi
0x5CA5EB: call    sub_5C4630
0x5CA5F0: mov     edx, ds:0B38FB0h
0x5CA5F6: sub     esp, 8
0x5CA5F9: mov     ecx, esp
0x5CA5FB: mov     [esp+3Ch+var_10], esp
0x5CA5FF: push    edx
0x5CA600: call    BSStringT_constr_str
0x5CA605: mov     eax, [esi+44h]
0x5CA608: push    eax; ArgList
0x5CA609: mov     ecx, esi
0x5CA60B: call    sub_5C4800
0x5CA610: mov     edx, ds:0B38F88h
0x5CA616: push    edi; int
0x5CA617: push    edi; int
0x5CA618: sub     esp, 8
0x5CA61B: mov     ecx, esp
0x5CA61D: mov     [esp+44h+var_10], esp
0x5CA621: push    edx
0x5CA622: call    BSStringT_constr_str
0x5CA627: mov     eax, [esi+28h]
0x5CA62A: push    eax; ArgList
0x5CA62B: mov     ecx, esi
0x5CA62D: call    sub_5C4340
0x5CA632: push    1; char
0x5CA634: sub     esp, 8
0x5CA637: mov     [esi+48h], eax
0x5CA63A: mov     ecx, esp
0x5CA63C: mov     [esp+40h+var_10], esp
0x5CA640: mov     edx, ds:0B38FB8h
0x5CA646: push    edx
0x5CA647: call    BSStringT_constr_str
0x5CA64C: mov     eax, [esi+48h]
0x5CA64F: push    eax; int
0x5CA650: mov     ecx, esi
0x5CA652: call    sub_5C4630
0x5CA657: mov     edx, ds:0B39330h
0x5CA65D: push    0; char
0x5CA65F: sub     esp, 8
0x5CA662: mov     ecx, esp
0x5CA664: mov     [esp+40h+var_10], esp
0x5CA668: push    edx
0x5CA669: call    BSStringT_constr_str
0x5CA66E: mov     eax, [esi+48h]
0x5CA671: push    eax; int
0x5CA672: mov     ecx, esi
0x5CA674: call    sub_5C4630
0x5CA679: mov     edx, ds:0B38FC0h
0x5CA67F: push    0; char
0x5CA681: push    edi; int
0x5CA682: push    edi; int
0x5CA683: sub     esp, 8
0x5CA686: mov     ecx, esp
0x5CA688: mov     [esp+48h+var_10], esp
0x5CA68C: push    edx
0x5CA68D: call    BSStringT_constr_str
0x5CA692: mov     eax, [esi+48h]
0x5CA695: push    eax; int
0x5CA696: mov     ecx, esi
0x5CA698: call    sub_5C93F0
0x5CA69D: mov     edx, ds:0B38FC8h
0x5CA6A3: push    0; char
0x5CA6A5: push    edi; int
0x5CA6A6: push    edi; int
0x5CA6A7: sub     esp, 8
0x5CA6AA: mov     ecx, esp
0x5CA6AC: mov     [esp+48h+var_10], esp
0x5CA6B0: push    edx
0x5CA6B1: call    BSStringT_constr_str
0x5CA6B6: mov     eax, [esi+48h]
0x5CA6B9: push    eax; int
0x5CA6BA: mov     ecx, esi
0x5CA6BC: call    sub_5C93F0
0x5CA6C1: mov     edx, ds:0B38FD0h
0x5CA6C7: push    0; char
0x5CA6C9: push    edi; int
0x5CA6CA: push    edi; int
0x5CA6CB: sub     esp, 8
0x5CA6CE: mov     ecx, esp
0x5CA6D0: mov     [esp+48h+var_10], esp
0x5CA6D4: push    edx
0x5CA6D5: call    BSStringT_constr_str
0x5CA6DA: mov     eax, [esi+48h]
0x5CA6DD: push    eax; int
0x5CA6DE: mov     ecx, esi
0x5CA6E0: call    sub_5C93F0
0x5CA6E5: mov     edx, ds:0B38FD8h
0x5CA6EB: push    0; char
0x5CA6ED: push    edi; int
0x5CA6EE: push    edi; int
0x5CA6EF: sub     esp, 8
0x5CA6F2: mov     ecx, esp
0x5CA6F4: mov     [esp+48h+var_10], esp
0x5CA6F8: push    edx
0x5CA6F9: call    BSStringT_constr_str
0x5CA6FE: mov     eax, [esi+48h]
0x5CA701: push    eax; ArgList
0x5CA702: mov     ecx, esi
0x5CA704: call    sub_5C93F0
0x5CA709: mov     edx, ds:0B38F80h
0x5CA70F: push    edi; int
0x5CA710: push    edi; int
0x5CA711: sub     esp, 8
0x5CA714: mov     ecx, esp
0x5CA716: mov     [esp+44h+var_10], esp
0x5CA71A: push    edx
0x5CA71B: call    BSStringT_constr_str
0x5CA720: mov     eax, [esi+28h]
0x5CA723: push    eax; int
0x5CA724: mov     ecx, esi
0x5CA726: call    sub_5C4340
0x5CA72B: push    1; char
0x5CA72D: push    0; char
0x5CA72F: sub     esp, 8
0x5CA732: mov     [esi+4Ch], eax
0x5CA735: mov     edx, ds:0B38FE0h
0x5CA73B: mov     ecx, esp
0x5CA73D: mov     [esp+44h+var_10], esp
0x5CA741: push    edx; int
0x5CA742: call    BSStringT_constr_str
0x5CA747: mov     eax, ds:0B38FE0h
0x5CA74C: sub     esp, 8
0x5CA74F: mov     ecx, esp
0x5CA751: mov     [esp+4Ch+var_14], esp
0x5CA755: push    eax
0x5CA756: mov     [esp+50h+var_4], 3
0x5CA75E: call    BSStringT_constr_str
0x5CA763: mov     ecx, [esi+4Ch]
0x5CA766: push    ecx; int
0x5CA767: mov     ecx, esi
0x5CA769: mov     [esp+50h+var_4], edi
0x5CA76D: call    sub_5C4480
0x5CA772: mov     edx, ds:0B38FE8h
0x5CA778: push    0; char
0x5CA77A: push    0; char
0x5CA77C: sub     esp, 8
0x5CA77F: mov     ecx, esp
0x5CA781: mov     [esp+44h+var_10], esp
0x5CA785: push    edx; int
0x5CA786: call    BSStringT_constr_str
0x5CA78B: mov     eax, ds:0B38FE8h
0x5CA790: sub     esp, 8
0x5CA793: mov     ecx, esp
0x5CA795: mov     [esp+4Ch+var_14], esp
0x5CA799: push    eax
0x5CA79A: mov     [esp+50h+var_4], 4
0x5CA7A2: call    BSStringT_constr_str
0x5CA7A7: mov     ecx, [esi+4Ch]
0x5CA7AA: push    ecx; int
0x5CA7AB: mov     ecx, esi
0x5CA7AD: mov     [esp+50h+var_4], edi
0x5CA7B1: call    sub_5C4480
0x5CA7B6: mov     edx, ds:0B38FF0h
0x5CA7BC: push    0; char
0x5CA7BE: push    0; char
0x5CA7C0: sub     esp, 8
0x5CA7C3: mov     ecx, esp
0x5CA7C5: mov     [esp+44h+var_10], esp
0x5CA7C9: push    edx; int
0x5CA7CA: call    BSStringT_constr_str
0x5CA7CF: mov     eax, ds:0B38FF0h
0x5CA7D4: sub     esp, 8
0x5CA7D7: mov     ecx, esp
0x5CA7D9: mov     [esp+4Ch+var_14], esp
0x5CA7DD: push    eax
0x5CA7DE: mov     [esp+50h+var_4], 5
0x5CA7E6: call    BSStringT_constr_str
0x5CA7EB: mov     ecx, [esi+4Ch]
0x5CA7EE: push    ecx; int
0x5CA7EF: mov     ecx, esi
0x5CA7F1: mov     [esp+50h+var_4], edi
0x5CA7F5: call    sub_5C4480
0x5CA7FA: mov     edx, ds:0B38FF8h
0x5CA800: push    0; char
0x5CA802: push    0; char
0x5CA804: sub     esp, 8
0x5CA807: mov     ecx, esp
0x5CA809: mov     [esp+44h+var_10], esp
0x5CA80D: push    edx; int
0x5CA80E: call    BSStringT_constr_str
0x5CA813: mov     eax, ds:0B38FF8h
0x5CA818: sub     esp, 8
0x5CA81B: mov     ecx, esp
0x5CA81D: mov     [esp+4Ch+var_14], esp
0x5CA821: push    eax
0x5CA822: mov     [esp+50h+var_4], 6
0x5CA82A: call    BSStringT_constr_str
0x5CA82F: mov     ecx, [esi+4Ch]
0x5CA832: push    ecx; int
0x5CA833: mov     ecx, esi
0x5CA835: mov     [esp+50h+var_4], edi
0x5CA839: call    sub_5C4480
0x5CA83E: mov     edx, ds:0B38FE0h
0x5CA844: push    edi; int
0x5CA845: push    edi; int
0x5CA846: sub     esp, 8
0x5CA849: mov     ecx, esp
0x5CA84B: mov     [esp+44h+var_10], esp
0x5CA84F: push    edx
0x5CA850: call    BSStringT_constr_str
0x5CA855: mov     eax, [esi+28h]
0x5CA858: push    eax; int
0x5CA859: mov     ecx, esi
0x5CA85B: call    sub_5C4340
0x5CA860: push    1; char
0x5CA862: push    0; char
0x5CA864: sub     esp, 8
0x5CA867: mov     [esi+50h], eax
0x5CA86A: mov     edx, ds:0B38F80h
0x5CA870: mov     ecx, esp
0x5CA872: mov     [esp+44h+var_10], esp
0x5CA876: push    edx; int
0x5CA877: call    BSStringT_constr_str
0x5CA87C: mov     eax, ds:0B39000h
0x5CA881: sub     esp, 8
0x5CA884: mov     ecx, esp
0x5CA886: mov     [esp+4Ch+var_14], esp
0x5CA88A: push    eax
0x5CA88B: mov     [esp+50h+var_4], 7
0x5CA893: call    BSStringT_constr_str
0x5CA898: mov     ecx, [esi+50h]
0x5CA89B: push    ecx; int
0x5CA89C: mov     ecx, esi
0x5CA89E: mov     [esp+50h+var_4], edi
0x5CA8A2: call    sub_5C4480
0x5CA8A7: mov     edx, ds:0B39008h
0x5CA8AD: push    0; char
0x5CA8AF: push    0; char
0x5CA8B1: sub     esp, 8
0x5CA8B4: mov     ecx, esp
0x5CA8B6: mov     [esp+44h+var_10], esp
0x5CA8BA: push    edx; int
0x5CA8BB: call    BSStringT_constr_str
0x5CA8C0: mov     eax, ds:0B39008h
0x5CA8C5: sub     esp, 8
0x5CA8C8: mov     ecx, esp
0x5CA8CA: mov     [esp+4Ch+var_14], esp
0x5CA8CE: push    eax
0x5CA8CF: mov     [esp+50h+var_4], 8
0x5CA8D7: call    BSStringT_constr_str
0x5CA8DC: mov     ecx, [esi+50h]
0x5CA8DF: push    ecx; int
0x5CA8E0: mov     ecx, esi
0x5CA8E2: mov     [esp+50h+var_4], edi
0x5CA8E6: call    sub_5C4480
0x5CA8EB: mov     edx, ds:0B39010h
0x5CA8F1: push    0; char
0x5CA8F3: push    0; char
0x5CA8F5: sub     esp, 8
0x5CA8F8: mov     ecx, esp
0x5CA8FA: mov     [esp+44h+var_10], esp
0x5CA8FE: push    edx; int
0x5CA8FF: call    BSStringT_constr_str
0x5CA904: mov     eax, ds:0B39010h
0x5CA909: sub     esp, 8
0x5CA90C: mov     ecx, esp
0x5CA90E: mov     [esp+4Ch+var_14], esp
0x5CA912: push    eax
0x5CA913: mov     [esp+50h+var_4], 9
0x5CA91B: call    BSStringT_constr_str
0x5CA920: mov     ecx, [esi+50h]
0x5CA923: push    ecx; int
0x5CA924: mov     ecx, esi
0x5CA926: mov     [esp+50h+var_4], edi
0x5CA92A: call    sub_5C4480
0x5CA92F: mov     edx, ds:0B39018h
0x5CA935: push    0; char
0x5CA937: push    0; char
0x5CA939: sub     esp, 8
0x5CA93C: mov     ecx, esp
0x5CA93E: mov     [esp+44h+var_10], esp
0x5CA942: push    edx; int
0x5CA943: call    BSStringT_constr_str
0x5CA948: mov     eax, ds:0B39018h
0x5CA94D: sub     esp, 8
0x5CA950: mov     ecx, esp
0x5CA952: mov     [esp+4Ch+var_14], esp
0x5CA956: push    eax
0x5CA957: mov     [esp+50h+var_4], 0Ah
0x5CA95F: call    BSStringT_constr_str
0x5CA964: mov     ecx, [esi+50h]
0x5CA967: push    ecx; int
0x5CA968: mov     ecx, esi
0x5CA96A: mov     [esp+50h+var_4], edi
0x5CA96E: call    sub_5C4480
0x5CA973: mov     edx, ds:0B38F90h
0x5CA979: push    0; char
0x5CA97B: push    0; char
0x5CA97D: sub     esp, 8
0x5CA980: mov     ecx, esp
0x5CA982: mov     [esp+44h+var_10], esp
0x5CA986: push    edx; int
0x5CA987: call    BSStringT_constr_str
0x5CA98C: mov     eax, ds:0B38F90h
0x5CA991: sub     esp, 8
0x5CA994: mov     ecx, esp
0x5CA996: mov     [esp+4Ch+var_14], esp
0x5CA99A: push    eax
0x5CA99B: mov     [esp+50h+var_4], 0Bh
0x5CA9A3: call    BSStringT_constr_str
0x5CA9A8: mov     ecx, [esi+50h]
0x5CA9AB: push    ecx; int
0x5CA9AC: mov     ecx, esi
0x5CA9AE: mov     [esp+50h+var_4], edi
0x5CA9B2: call    sub_5C4480
0x5CA9B7: mov     edx, ds:0B39020h
0x5CA9BD: push    0; char
0x5CA9BF: push    0; char
0x5CA9C1: sub     esp, 8
0x5CA9C4: mov     ecx, esp
0x5CA9C6: mov     [esp+44h+var_10], esp
0x5CA9CA: push    edx; int
0x5CA9CB: call    BSStringT_constr_str
0x5CA9D0: mov     eax, ds:0B39020h
0x5CA9D5: sub     esp, 8
0x5CA9D8: mov     ecx, esp
0x5CA9DA: mov     [esp+4Ch+var_14], esp
0x5CA9DE: push    eax
0x5CA9DF: mov     [esp+50h+var_4], 0Ch
0x5CA9E7: call    BSStringT_constr_str
0x5CA9EC: mov     ecx, [esi+50h]
0x5CA9EF: push    ecx; int
0x5CA9F0: mov     ecx, esi
0x5CA9F2: mov     [esp+50h+var_4], edi
0x5CA9F6: call    sub_5C4480
0x5CA9FB: mov     edx, ds:0B39028h
0x5CAA01: push    0; char
0x5CAA03: push    0; char
0x5CAA05: sub     esp, 8
0x5CAA08: mov     ecx, esp
0x5CAA0A: mov     [esp+44h+var_10], esp
0x5CAA0E: push    edx; int
0x5CAA0F: call    BSStringT_constr_str
0x5CAA14: mov     eax, ds:0B39028h
0x5CAA19: sub     esp, 8
0x5CAA1C: mov     ecx, esp
0x5CAA1E: mov     [esp+4Ch+var_14], esp
0x5CAA22: push    eax
0x5CAA23: mov     [esp+50h+var_4], 0Dh
0x5CAA2B: call    BSStringT_constr_str
0x5CAA30: mov     ecx, [esi+50h]
0x5CAA33: push    ecx; int
0x5CAA34: mov     ecx, esi
0x5CAA36: mov     [esp+50h+var_4], edi
0x5CAA3A: call    sub_5C4480
0x5CAA3F: mov     edx, ds:0B39030h
0x5CAA45: push    0; char
0x5CAA47: push    0; char
0x5CAA49: sub     esp, 8
0x5CAA4C: mov     ecx, esp
0x5CAA4E: mov     [esp+44h+var_10], esp
0x5CAA52: push    edx; int
0x5CAA53: call    BSStringT_constr_str
0x5CAA58: mov     eax, ds:0B39030h
0x5CAA5D: sub     esp, 8
0x5CAA60: mov     ecx, esp
0x5CAA62: mov     [esp+4Ch+var_14], esp
0x5CAA66: push    eax
0x5CAA67: mov     [esp+50h+var_4], 0Eh
0x5CAA6F: call    BSStringT_constr_str
0x5CAA74: mov     ecx, [esi+50h]
0x5CAA77: push    ecx; int
0x5CAA78: mov     ecx, esi
0x5CAA7A: mov     [esp+50h+var_4], edi
0x5CAA7E: call    sub_5C4480
0x5CAA83: mov     edx, ds:0B39038h
0x5CAA89: push    0; char
0x5CAA8B: push    0; char
0x5CAA8D: sub     esp, 8
0x5CAA90: mov     ecx, esp
0x5CAA92: mov     [esp+44h+var_10], esp
0x5CAA96: push    edx; int
0x5CAA97: call    BSStringT_constr_str
0x5CAA9C: mov     eax, ds:0B39038h
0x5CAAA1: sub     esp, 8
0x5CAAA4: mov     ecx, esp
0x5CAAA6: mov     [esp+4Ch+var_14], esp
0x5CAAAA: push    eax
0x5CAAAB: mov     [esp+50h+var_4], 0Fh
0x5CAAB3: call    BSStringT_constr_str
0x5CAAB8: mov     ecx, [esi+50h]
0x5CAABB: push    ecx; int
0x5CAABC: mov     ecx, esi
0x5CAABE: mov     [esp+50h+var_4], edi
0x5CAAC2: call    sub_5C4480
0x5CAAC7: mov     edx, ds:0B38FE8h
0x5CAACD: push    edi; int
0x5CAACE: push    edi; int
0x5CAACF: sub     esp, 8
0x5CAAD2: mov     ecx, esp
0x5CAAD4: mov     [esp+44h+var_10], esp
0x5CAAD8: push    edx
0x5CAAD9: call    BSStringT_constr_str
0x5CAADE: mov     eax, [esi+28h]
0x5CAAE1: push    eax; int
0x5CAAE2: mov     ecx, esi
0x5CAAE4: call    sub_5C4340
0x5CAAE9: push    1; char
0x5CAAEB: push    0; char
0x5CAAED: sub     esp, 8
0x5CAAF0: mov     [esi+54h], eax
0x5CAAF3: mov     edx, ds:0B39048h
0x5CAAF9: mov     ecx, esp
0x5CAAFB: mov     [esp+44h+var_10], esp
0x5CAAFF: push    edx; int
0x5CAB00: call    BSStringT_constr_str
0x5CAB05: mov     eax, ds:0B39040h
0x5CAB0A: sub     esp, 8
0x5CAB0D: mov     ecx, esp
0x5CAB0F: mov     [esp+4Ch+var_14], esp
0x5CAB13: push    eax
0x5CAB14: mov     [esp+50h+var_4], 10h
0x5CAB1C: call    BSStringT_constr_str
0x5CAB21: mov     ecx, [esi+54h]
0x5CAB24: push    ecx; int
0x5CAB25: mov     ecx, esi
0x5CAB27: mov     [esp+50h+var_4], edi
0x5CAB2B: call    sub_5C4480
0x5CAB30: push    0; char
0x5CAB32: push    0; char
0x5CAB34: mov     edx, ds:0B39050h
0x5CAB3A: sub     esp, 8
0x5CAB3D: mov     ecx, esp
0x5CAB3F: mov     [esp+44h+var_10], esp
0x5CAB43: push    edx; int
0x5CAB44: call    BSStringT_constr_str
0x5CAB49: mov     eax, ds:0B39050h
0x5CAB4E: sub     esp, 8
0x5CAB51: mov     ecx, esp
0x5CAB53: mov     [esp+4Ch+var_14], esp
0x5CAB57: push    eax
0x5CAB58: mov     [esp+50h+var_4], 11h
0x5CAB60: call    BSStringT_constr_str
0x5CAB65: mov     ecx, [esi+54h]
0x5CAB68: push    ecx; int
0x5CAB69: mov     ecx, esi
0x5CAB6B: mov     [esp+50h+var_4], edi
0x5CAB6F: call    sub_5C4480
0x5CAB74: mov     edx, ds:0B38F90h
0x5CAB7A: push    0; char
0x5CAB7C: push    0; char
0x5CAB7E: sub     esp, 8
0x5CAB81: mov     ecx, esp
0x5CAB83: mov     [esp+44h+var_10], esp
0x5CAB87: push    edx; int
0x5CAB88: call    BSStringT_constr_str
0x5CAB8D: mov     eax, ds:0B39320h
0x5CAB92: sub     esp, 8
0x5CAB95: mov     ecx, esp
0x5CAB97: mov     [esp+4Ch+var_14], esp
0x5CAB9B: push    eax
0x5CAB9C: mov     [esp+50h+var_4], 12h
0x5CABA4: call    BSStringT_constr_str
0x5CABA9: mov     ecx, [esi+54h]
0x5CABAC: push    ecx; int
0x5CABAD: mov     ecx, esi
0x5CABAF: mov     [esp+50h+var_4], edi
0x5CABB3: call    sub_5C4480
0x5CABB8: mov     edx, ds:0B39058h
0x5CABBE: push    0; char
0x5CABC0: push    0; char
0x5CABC2: sub     esp, 8
0x5CABC5: mov     ecx, esp
0x5CABC7: mov     [esp+44h+var_10], esp
0x5CABCB: push    edx; int
0x5CABCC: call    BSStringT_constr_str
0x5CABD1: mov     eax, ds:0B39058h
0x5CABD6: sub     esp, 8
0x5CABD9: mov     ecx, esp
0x5CABDB: mov     [esp+4Ch+var_14], esp
0x5CABDF: push    eax
0x5CABE0: mov     [esp+50h+var_4], 13h
0x5CABE8: call    BSStringT_constr_str
0x5CABED: mov     ecx, [esi+54h]
0x5CABF0: push    ecx; int
0x5CABF1: mov     ecx, esi
0x5CABF3: mov     [esp+50h+var_4], edi
0x5CABF7: call    sub_5C4480
0x5CABFC: mov     edx, ds:0B39068h
0x5CAC02: push    0; char
0x5CAC04: push    0; char
0x5CAC06: sub     esp, 8
0x5CAC09: mov     ecx, esp
0x5CAC0B: mov     [esp+44h+var_10], esp
0x5CAC0F: push    edx; int
0x5CAC10: call    BSStringT_constr_str
0x5CAC15: mov     eax, ds:0B39060h
0x5CAC1A: sub     esp, 8
0x5CAC1D: mov     ecx, esp
0x5CAC1F: mov     [esp+4Ch+var_14], esp
0x5CAC23: push    eax
0x5CAC24: mov     [esp+50h+var_4], 14h
0x5CAC2C: call    BSStringT_constr_str
0x5CAC31: mov     ecx, [esi+54h]
0x5CAC34: push    ecx; int
0x5CAC35: mov     [esp+50h+var_4], edi
0x5CAC39: mov     ecx, esi
0x5CAC3B: call    sub_5C4480
0x5CAC40: mov     edx, ds:0B39038h
0x5CAC46: push    0; char
0x5CAC48: push    0; char
0x5CAC4A: sub     esp, 8
0x5CAC4D: mov     ecx, esp
0x5CAC4F: mov     [esp+44h+var_10], esp
0x5CAC53: push    edx; int
0x5CAC54: call    BSStringT_constr_str
0x5CAC59: mov     eax, ds:0B39328h
0x5CAC5E: sub     esp, 8
0x5CAC61: mov     ecx, esp
0x5CAC63: mov     [esp+4Ch+var_14], esp
0x5CAC67: push    eax
0x5CAC68: mov     [esp+50h+var_4], 15h
0x5CAC70: call    BSStringT_constr_str
0x5CAC75: mov     ecx, [esi+54h]
0x5CAC78: push    ecx; int
0x5CAC79: mov     ecx, esi
0x5CAC7B: mov     [esp+50h+var_4], edi
0x5CAC7F: call    sub_5C4480
0x5CAC84: mov     edx, ds:0B39000h
0x5CAC8A: push    edi; int
0x5CAC8B: push    edi; int
0x5CAC8C: sub     esp, 8
0x5CAC8F: mov     ecx, esp
0x5CAC91: mov     [esp+44h+var_10], esp
0x5CAC95: push    edx
0x5CAC96: call    BSStringT_constr_str
0x5CAC9B: mov     eax, [esi+28h]
0x5CAC9E: push    eax; ArgList
0x5CAC9F: mov     ecx, esi
0x5CACA1: call    sub_5C4340
0x5CACA6: push    1; char
0x5CACA8: push    0; int
0x5CACAA: push    13h; int
0x5CACAC: sub     esp, 8
0x5CACAF: mov     [esi+58h], eax
0x5CACB2: mov     edx, ds:0B39070h
0x5CACB8: mov     ecx, esp
0x5CACBA: mov     [esp+48h+var_10], esp
0x5CACBE: push    edx
0x5CACBF: call    BSStringT_constr_str
0x5CACC4: mov     eax, [esi+58h]
0x5CACC7: push    eax; int
0x5CACC8: mov     ecx, esi
0x5CACCA: call    sub_5C93F0
0x5CACCF: mov     edx, ds:0B39078h
0x5CACD5: push    0; char
0x5CACD7: push    0; int
0x5CACD9: push    14h; int
0x5CACDB: sub     esp, 8
0x5CACDE: mov     ecx, esp
0x5CACE0: mov     [esp+48h+var_10], esp
0x5CACE4: push    edx
0x5CACE5: call    BSStringT_constr_str
0x5CACEA: mov     eax, [esi+58h]
0x5CACED: push    eax; int
0x5CACEE: mov     ecx, esi
0x5CACF0: call    sub_5C93F0
0x5CACF5: mov     edx, ds:0B39080h
0x5CACFB: push    0; char
0x5CACFD: push    0; int
0x5CACFF: push    15h; int
0x5CAD01: sub     esp, 8
0x5CAD04: mov     ecx, esp
0x5CAD06: mov     [esp+48h+var_10], esp
0x5CAD0A: push    edx
0x5CAD0B: call    BSStringT_constr_str
0x5CAD10: mov     eax, [esi+58h]
0x5CAD13: push    eax; int
0x5CAD14: mov     ecx, esi
0x5CAD16: call    sub_5C93F0
0x5CAD1B: mov     edx, ds:0B39088h
0x5CAD21: push    0; char
0x5CAD23: push    0; int
0x5CAD25: push    16h; int
0x5CAD27: sub     esp, 8
0x5CAD2A: mov     ecx, esp
0x5CAD2C: mov     [esp+48h+var_10], esp
0x5CAD30: push    edx
0x5CAD31: call    BSStringT_constr_str
0x5CAD36: mov     eax, [esi+58h]
0x5CAD39: push    eax; int
0x5CAD3A: mov     ecx, esi
0x5CAD3C: call    sub_5C93F0
0x5CAD41: mov     edx, ds:0B39090h
0x5CAD47: push    0; char
0x5CAD49: push    0; int
0x5CAD4B: push    17h; int
0x5CAD4D: sub     esp, 8
0x5CAD50: mov     ecx, esp
0x5CAD52: mov     [esp+48h+var_10], esp
0x5CAD56: push    edx
0x5CAD57: call    BSStringT_constr_str
0x5CAD5C: mov     eax, [esi+58h]
0x5CAD5F: push    eax; int
0x5CAD60: mov     ecx, esi
0x5CAD62: call    sub_5C93F0
0x5CAD67: mov     edx, ds:0B39008h
0x5CAD6D: push    edi; int
0x5CAD6E: push    edi; int
0x5CAD6F: sub     esp, 8
0x5CAD72: mov     ecx, esp
0x5CAD74: mov     [esp+44h+var_10], esp
0x5CAD78: push    edx
0x5CAD79: call    BSStringT_constr_str
0x5CAD7E: mov     eax, [esi+28h]
0x5CAD81: push    eax; ArgList
0x5CAD82: mov     ecx, esi
0x5CAD84: call    sub_5C4340
0x5CAD89: push    1; char
0x5CAD8B: push    0; int
0x5CAD8D: push    0; int
0x5CAD8F: sub     esp, 8
0x5CAD92: mov     [esi+5Ch], eax
0x5CAD95: mov     edx, ds:0B39098h
0x5CAD9B: mov     ecx, esp
0x5CAD9D: mov     [esp+48h+var_10], esp
0x5CADA1: push    edx
0x5CADA2: call    BSStringT_constr_str
0x5CADA7: mov     eax, [esi+5Ch]
0x5CADAA: push    eax; int
0x5CADAB: mov     ecx, esi
0x5CADAD: call    sub_5C93F0
0x5CADB2: mov     edx, ds:0B390A0h
0x5CADB8: push    0; char
0x5CADBA: push    0; int
0x5CADBC: push    1; int
0x5CADBE: sub     esp, 8
0x5CADC1: mov     ecx, esp
0x5CADC3: mov     [esp+48h+var_10], esp
0x5CADC7: push    edx
0x5CADC8: call    BSStringT_constr_str
0x5CADCD: mov     eax, [esi+5Ch]
0x5CADD0: push    eax; int
0x5CADD1: mov     ecx, esi
0x5CADD3: call    sub_5C93F0
0x5CADD8: mov     edx, ds:0B390A8h
0x5CADDE: push    0; char
0x5CADE0: push    0; int
0x5CADE2: push    2; int
0x5CADE4: sub     esp, 8
0x5CADE7: mov     ecx, esp
0x5CADE9: mov     [esp+48h+var_10], esp
0x5CADED: push    edx
0x5CADEE: call    BSStringT_constr_str
0x5CADF3: mov     eax, [esi+5Ch]
0x5CADF6: push    eax; int
0x5CADF7: mov     ecx, esi
0x5CADF9: call    sub_5C93F0
0x5CADFE: mov     edx, ds:0B39010h
0x5CAE04: push    edi; int
0x5CAE05: push    edi; int
0x5CAE06: sub     esp, 8
0x5CAE09: mov     ecx, esp
0x5CAE0B: mov     [esp+44h+var_10], esp
0x5CAE0F: push    edx
0x5CAE10: call    BSStringT_constr_str
0x5CAE15: mov     eax, [esi+28h]
0x5CAE18: push    eax; ArgList
0x5CAE19: mov     ecx, esi
0x5CAE1B: call    sub_5C4340
0x5CAE20: push    1; char
0x5CAE22: push    0; int
0x5CAE24: push    3; int
0x5CAE26: sub     esp, 8
0x5CAE29: mov     [esi+60h], eax
0x5CAE2C: mov     edx, ds:0B390B0h
0x5CAE32: mov     ecx, esp
0x5CAE34: mov     [esp+48h+var_10], esp
0x5CAE38: push    edx
0x5CAE39: call    BSStringT_constr_str
0x5CAE3E: mov     eax, [esi+60h]
0x5CAE41: push    eax; int
0x5CAE42: mov     ecx, esi
0x5CAE44: call    sub_5C93F0
0x5CAE49: mov     edx, ds:0B390B8h
0x5CAE4F: push    0; char
0x5CAE51: push    0; int
0x5CAE53: push    4; int
0x5CAE55: sub     esp, 8
0x5CAE58: mov     ecx, esp
0x5CAE5A: mov     [esp+48h+var_10], esp
0x5CAE5E: push    edx
0x5CAE5F: call    BSStringT_constr_str
0x5CAE64: mov     eax, [esi+60h]
0x5CAE67: push    eax; int
0x5CAE68: mov     ecx, esi
0x5CAE6A: call    sub_5C93F0
0x5CAE6F: mov     edx, ds:0B390C0h
0x5CAE75: push    0; char
0x5CAE77: push    0; int
0x5CAE79: push    5; int
0x5CAE7B: sub     esp, 8
0x5CAE7E: mov     ecx, esp
0x5CAE80: mov     [esp+48h+var_10], esp
0x5CAE84: push    edx
0x5CAE85: call    BSStringT_constr_str
0x5CAE8A: mov     eax, [esi+60h]
0x5CAE8D: push    eax; int
0x5CAE8E: mov     ecx, esi
0x5CAE90: call    sub_5C93F0
0x5CAE95: mov     edx, ds:0B390C8h
0x5CAE9B: push    0; char
0x5CAE9D: push    0; int
0x5CAE9F: push    6; int
0x5CAEA1: sub     esp, 8
0x5CAEA4: mov     ecx, esp
0x5CAEA6: mov     [esp+48h+var_10], esp
0x5CAEAA: push    edx
0x5CAEAB: call    BSStringT_constr_str
0x5CAEB0: mov     eax, [esi+60h]
0x5CAEB3: push    eax; int
0x5CAEB4: mov     ecx, esi
0x5CAEB6: call    sub_5C93F0
0x5CAEBB: mov     edx, ds:0B390D0h
0x5CAEC1: push    0; char
0x5CAEC3: push    0; int
0x5CAEC5: push    7; int
0x5CAEC7: sub     esp, 8
0x5CAECA: mov     ecx, esp
0x5CAECC: mov     [esp+48h+var_10], esp
0x5CAED0: push    edx
0x5CAED1: call    BSStringT_constr_str
0x5CAED6: mov     eax, [esi+60h]
0x5CAED9: push    eax; int
0x5CAEDA: mov     ecx, esi
0x5CAEDC: call    sub_5C93F0
0x5CAEE1: mov     edx, ds:0B39018h
0x5CAEE7: push    edi; int
0x5CAEE8: push    edi; int
0x5CAEE9: sub     esp, 8
0x5CAEEC: mov     ecx, esp
0x5CAEEE: mov     [esp+44h+var_10], esp
0x5CAEF2: push    edx
0x5CAEF3: call    BSStringT_constr_str
0x5CAEF8: mov     eax, [esi+28h]
0x5CAEFB: push    eax; ArgList
0x5CAEFC: mov     ecx, esi
0x5CAEFE: call    sub_5C4340
0x5CAF03: mov     [esi+64h], eax
0x5CAF06: mov     edx, ds:0B390D8h
0x5CAF0C: push    1; char
0x5CAF0E: push    0; int
0x5CAF10: push    8; int
0x5CAF12: sub     esp, 8
0x5CAF15: mov     ecx, esp
0x5CAF17: mov     [esp+48h+var_10], esp
0x5CAF1B: push    edx
0x5CAF1C: call    BSStringT_constr_str
0x5CAF21: mov     eax, [esi+64h]
0x5CAF24: push    eax; int
0x5CAF25: mov     ecx, esi
0x5CAF27: call    sub_5C93F0
0x5CAF2C: mov     edx, ds:0B390E0h
0x5CAF32: push    0; char
0x5CAF34: push    0; int
0x5CAF36: push    9; int
0x5CAF38: sub     esp, 8
0x5CAF3B: mov     ecx, esp
0x5CAF3D: mov     [esp+48h+var_10], esp
0x5CAF41: push    edx
0x5CAF42: call    BSStringT_constr_str
0x5CAF47: mov     eax, [esi+64h]
0x5CAF4A: push    eax; int
0x5CAF4B: mov     ecx, esi
0x5CAF4D: call    sub_5C93F0
0x5CAF52: mov     edx, ds:0B390E8h
0x5CAF58: push    0; char
0x5CAF5A: push    0; int
0x5CAF5C: push    0Ah; int
0x5CAF5E: sub     esp, 8
0x5CAF61: mov     ecx, esp
0x5CAF63: mov     [esp+48h+var_10], esp
0x5CAF67: push    edx
0x5CAF68: call    BSStringT_constr_str
0x5CAF6D: mov     eax, [esi+64h]
0x5CAF70: push    eax; int
0x5CAF71: mov     ecx, esi
0x5CAF73: call    sub_5C93F0
0x5CAF78: mov     edx, ds:0B390F0h
0x5CAF7E: push    0; char
0x5CAF80: push    0; int
0x5CAF82: push    0Bh; int
0x5CAF84: sub     esp, 8
0x5CAF87: mov     ecx, esp
0x5CAF89: mov     [esp+48h+var_10], esp
0x5CAF8D: push    edx
0x5CAF8E: call    BSStringT_constr_str
0x5CAF93: mov     eax, [esi+64h]
0x5CAF96: push    eax; int
0x5CAF97: mov     ecx, esi
0x5CAF99: call    sub_5C93F0
0x5CAF9E: mov     edx, ds:0B390F8h
0x5CAFA4: push    0; char
0x5CAFA6: push    0; int
0x5CAFA8: push    0Ch; int
0x5CAFAA: sub     esp, 8
0x5CAFAD: mov     ecx, esp
0x5CAFAF: mov     [esp+48h+var_10], esp
0x5CAFB3: push    edx
0x5CAFB4: call    BSStringT_constr_str
0x5CAFB9: mov     eax, [esi+64h]
0x5CAFBC: push    eax; int
0x5CAFBD: mov     ecx, esi
0x5CAFBF: call    sub_5C93F0
0x5CAFC4: mov     edx, ds:0B39100h
0x5CAFCA: push    0; char
0x5CAFCC: push    0; int
0x5CAFCE: push    0Dh; int
0x5CAFD0: sub     esp, 8
0x5CAFD3: mov     ecx, esp
0x5CAFD5: mov     [esp+48h+var_10], esp
0x5CAFD9: push    edx
0x5CAFDA: call    BSStringT_constr_str
0x5CAFDF: mov     eax, [esi+64h]
0x5CAFE2: push    eax; int
0x5CAFE3: mov     ecx, esi
0x5CAFE5: call    sub_5C93F0
0x5CAFEA: push    0; char
0x5CAFEC: push    0; int
0x5CAFEE: push    0Eh; int
0x5CAFF0: mov     edx, ds:0B39108h
0x5CAFF6: sub     esp, 8
0x5CAFF9: mov     ecx, esp
0x5CAFFB: mov     [esp+48h+var_10], esp
0x5CAFFF: push    edx
0x5CB000: call    BSStringT_constr_str
0x5CB005: mov     eax, [esi+64h]
0x5CB008: push    eax; int
0x5CB009: mov     ecx, esi
0x5CB00B: call    sub_5C93F0
0x5CB010: mov     edx, ds:0B38F90h
0x5CB016: push    edi; int
0x5CB017: push    edi; int
0x5CB018: sub     esp, 8
0x5CB01B: mov     ecx, esp
0x5CB01D: mov     [esp+44h+var_10], esp
0x5CB021: push    edx
0x5CB022: call    BSStringT_constr_str
0x5CB027: mov     eax, [esi+28h]
0x5CB02A: push    eax; ArgList
0x5CB02B: mov     ecx, esi
0x5CB02D: call    sub_5C4340
0x5CB032: push    1; char
0x5CB034: push    0; int
0x5CB036: push    0Fh; int
0x5CB038: sub     esp, 8
0x5CB03B: mov     [esi+68h], eax
0x5CB03E: mov     edx, ds:0B39110h
0x5CB044: mov     ecx, esp
0x5CB046: mov     [esp+48h+var_10], esp
0x5CB04A: push    edx
0x5CB04B: call    BSStringT_constr_str
0x5CB050: mov     eax, [esi+68h]
0x5CB053: push    eax; int
0x5CB054: mov     ecx, esi
0x5CB056: call    sub_5C93F0
0x5CB05B: mov     edx, ds:0B39118h
0x5CB061: push    0; char
0x5CB063: push    0; int
0x5CB065: push    10h; int
0x5CB067: sub     esp, 8
0x5CB06A: mov     ecx, esp
0x5CB06C: mov     [esp+48h+var_10], esp
0x5CB070: push    edx
0x5CB071: call    BSStringT_constr_str
0x5CB076: mov     eax, [esi+68h]
0x5CB079: push    eax; int
0x5CB07A: mov     ecx, esi
0x5CB07C: call    sub_5C93F0
0x5CB081: mov     edx, ds:0B39120h
0x5CB087: push    0; char
0x5CB089: push    0; int
0x5CB08B: push    11h; int
0x5CB08D: sub     esp, 8
0x5CB090: mov     ecx, esp
0x5CB092: mov     [esp+48h+var_10], esp
0x5CB096: push    edx
0x5CB097: call    BSStringT_constr_str
0x5CB09C: mov     eax, [esi+68h]
0x5CB09F: push    eax; int
0x5CB0A0: mov     ecx, esi
0x5CB0A2: call    sub_5C93F0
0x5CB0A7: mov     edx, ds:0B39128h
0x5CB0AD: push    0; char
0x5CB0AF: push    0; int
0x5CB0B1: push    12h; int
0x5CB0B3: sub     esp, 8
0x5CB0B6: mov     ecx, esp
0x5CB0B8: mov     [esp+48h+var_10], esp
0x5CB0BC: push    edx
0x5CB0BD: call    BSStringT_constr_str
0x5CB0C2: mov     eax, [esi+68h]
0x5CB0C5: push    eax; int
0x5CB0C6: mov     ecx, esi
0x5CB0C8: call    sub_5C93F0
0x5CB0CD: mov     edx, ds:0B39020h
0x5CB0D3: push    edi; int
0x5CB0D4: push    edi; int
0x5CB0D5: sub     esp, 8
0x5CB0D8: mov     ecx, esp
0x5CB0DA: mov     [esp+44h+var_10], esp
0x5CB0DE: push    edx
0x5CB0DF: call    BSStringT_constr_str
0x5CB0E4: mov     eax, [esi+28h]
0x5CB0E7: push    eax; ArgList
0x5CB0E8: mov     ecx, esi
0x5CB0EA: call    sub_5C4340
0x5CB0EF: push    1; char
0x5CB0F1: push    0; int
0x5CB0F3: push    18h; int
0x5CB0F5: sub     esp, 8
0x5CB0F8: mov     [esi+6Ch], eax
0x5CB0FB: mov     edx, ds:0B39130h
0x5CB101: mov     ecx, esp
0x5CB103: mov     [esp+48h+var_10], esp
0x5CB107: push    edx
0x5CB108: call    BSStringT_constr_str
0x5CB10D: mov     eax, [esi+6Ch]
0x5CB110: push    eax; int
0x5CB111: mov     ecx, esi
0x5CB113: call    sub_5C93F0
0x5CB118: mov     edx, ds:0B39138h
0x5CB11E: push    0; char
0x5CB120: push    0; int
0x5CB122: push    19h; int
0x5CB124: sub     esp, 8
0x5CB127: mov     ecx, esp
0x5CB129: mov     [esp+48h+var_10], esp
0x5CB12D: push    edx
0x5CB12E: call    BSStringT_constr_str
0x5CB133: mov     eax, [esi+6Ch]
0x5CB136: push    eax; int
0x5CB137: mov     ecx, esi
0x5CB139: call    sub_5C93F0
0x5CB13E: mov     edx, ds:0B39140h
0x5CB144: push    0; char
0x5CB146: push    0; int
0x5CB148: push    1Ah; int
0x5CB14A: sub     esp, 8
0x5CB14D: mov     ecx, esp
0x5CB14F: mov     [esp+48h+var_10], esp
0x5CB153: push    edx
0x5CB154: call    BSStringT_constr_str
0x5CB159: mov     eax, [esi+6Ch]
0x5CB15C: push    eax; int
0x5CB15D: mov     ecx, esi
0x5CB15F: call    sub_5C93F0
0x5CB164: mov     edx, ds:0B39028h
0x5CB16A: push    edi; int
0x5CB16B: push    edi; int
0x5CB16C: sub     esp, 8
0x5CB16F: mov     ecx, esp
0x5CB171: mov     [esp+44h+var_10], esp
0x5CB175: push    edx
0x5CB176: call    BSStringT_constr_str
0x5CB17B: mov     eax, [esi+28h]
0x5CB17E: push    eax; ArgList
0x5CB17F: mov     ecx, esi
0x5CB181: call    sub_5C4340
0x5CB186: push    1; char
0x5CB188: push    0; int
0x5CB18A: push    1Bh; int
0x5CB18C: sub     esp, 8
0x5CB18F: mov     [esi+70h], eax
0x5CB192: mov     edx, ds:0B39148h
0x5CB198: mov     ecx, esp
0x5CB19A: mov     [esp+48h+var_10], esp
0x5CB19E: push    edx
0x5CB19F: call    BSStringT_constr_str
0x5CB1A4: mov     eax, [esi+70h]
0x5CB1A7: push    eax; int
0x5CB1A8: mov     ecx, esi
0x5CB1AA: call    sub_5C93F0
0x5CB1AF: mov     edx, ds:0B39150h
0x5CB1B5: push    0; char
0x5CB1B7: push    0; int
0x5CB1B9: push    1Ch; int
0x5CB1BB: sub     esp, 8
0x5CB1BE: mov     ecx, esp
0x5CB1C0: mov     [esp+48h+var_10], esp
0x5CB1C4: push    edx
0x5CB1C5: call    BSStringT_constr_str
0x5CB1CA: mov     eax, [esi+70h]
0x5CB1CD: push    eax; int
0x5CB1CE: mov     ecx, esi
0x5CB1D0: call    sub_5C93F0
0x5CB1D5: mov     edx, ds:0B39158h
0x5CB1DB: push    0; char
0x5CB1DD: push    0; int
0x5CB1DF: push    1Dh; int
0x5CB1E1: sub     esp, 8
0x5CB1E4: mov     ecx, esp
0x5CB1E6: mov     [esp+48h+var_10], esp
0x5CB1EA: push    edx
0x5CB1EB: call    BSStringT_constr_str
0x5CB1F0: mov     eax, [esi+70h]
0x5CB1F3: push    eax; int
0x5CB1F4: mov     ecx, esi
0x5CB1F6: call    sub_5C93F0
0x5CB1FB: mov     edx, ds:0B39160h
0x5CB201: push    0; char
0x5CB203: push    0; int
0x5CB205: push    1Eh; int
0x5CB207: sub     esp, 8
0x5CB20A: mov     ecx, esp
0x5CB20C: mov     [esp+48h+var_10], esp
0x5CB210: push    edx
0x5CB211: call    BSStringT_constr_str
0x5CB216: mov     eax, [esi+70h]
0x5CB219: push    eax; int
0x5CB21A: mov     ecx, esi
0x5CB21C: call    sub_5C93F0
0x5CB221: mov     edx, ds:0B39030h
0x5CB227: push    edi; int
0x5CB228: push    edi; int
0x5CB229: sub     esp, 8
0x5CB22C: mov     ecx, esp
0x5CB22E: mov     [esp+44h+var_10], esp
0x5CB232: push    edx
0x5CB233: call    BSStringT_constr_str
0x5CB238: mov     eax, [esi+28h]
0x5CB23B: push    eax; ArgList
0x5CB23C: mov     ecx, esi
0x5CB23E: call    sub_5C4340
0x5CB243: push    1; char
0x5CB245: push    0; int
0x5CB247: push    1Fh; int
0x5CB249: sub     esp, 8
0x5CB24C: mov     [esi+74h], eax
0x5CB24F: mov     edx, ds:0B39168h
0x5CB255: mov     ecx, esp
0x5CB257: mov     [esp+48h+var_10], esp
0x5CB25B: push    edx
0x5CB25C: call    BSStringT_constr_str
0x5CB261: mov     eax, [esi+74h]
0x5CB264: push    eax; int
0x5CB265: mov     ecx, esi
0x5CB267: call    sub_5C93F0
0x5CB26C: mov     edx, ds:0B39170h
0x5CB272: push    0; char
0x5CB274: push    0; int
0x5CB276: push    20h ; ' '; int
0x5CB278: sub     esp, 8
0x5CB27B: mov     ecx, esp
0x5CB27D: mov     [esp+48h+var_10], esp
0x5CB281: push    edx
0x5CB282: call    BSStringT_constr_str
0x5CB287: mov     eax, [esi+74h]
0x5CB28A: push    eax; int
0x5CB28B: mov     ecx, esi
0x5CB28D: call    sub_5C93F0
0x5CB292: mov     edx, ds:0B39178h
0x5CB298: push    0; char
0x5CB29A: push    0; int
0x5CB29C: push    21h ; '!'; int
0x5CB29E: sub     esp, 8
0x5CB2A1: mov     ecx, esp
0x5CB2A3: mov     [esp+48h+var_10], esp
0x5CB2A7: push    edx
0x5CB2A8: call    BSStringT_constr_str
0x5CB2AD: mov     eax, [esi+74h]
0x5CB2B0: push    eax; int
0x5CB2B1: mov     ecx, esi
0x5CB2B3: call    sub_5C93F0
0x5CB2B8: mov     edx, ds:0B39180h
0x5CB2BE: push    0; char
0x5CB2C0: push    0; int
0x5CB2C2: push    22h ; '"'; int
0x5CB2C4: sub     esp, 8
0x5CB2C7: mov     ecx, esp
0x5CB2C9: mov     [esp+48h+var_10], esp
0x5CB2CD: push    edx
0x5CB2CE: call    BSStringT_constr_str
0x5CB2D3: mov     eax, [esi+74h]
0x5CB2D6: push    eax; int
0x5CB2D7: mov     ecx, esi
0x5CB2D9: call    sub_5C93F0
0x5CB2DE: mov     edx, ds:0B39188h
0x5CB2E4: push    0; char
0x5CB2E6: push    0; int
0x5CB2E8: push    23h ; '#'; int
0x5CB2EA: sub     esp, 8
0x5CB2ED: mov     ecx, esp
0x5CB2EF: mov     [esp+48h+var_10], esp
0x5CB2F3: push    edx
0x5CB2F4: call    BSStringT_constr_str
0x5CB2F9: mov     eax, [esi+74h]
0x5CB2FC: push    eax; int
0x5CB2FD: mov     ecx, esi
0x5CB2FF: call    sub_5C93F0
0x5CB304: mov     edx, ds:0B39190h
0x5CB30A: push    0; char
0x5CB30C: push    0; int
0x5CB30E: push    24h ; '$'; int
0x5CB310: sub     esp, 8
0x5CB313: mov     ecx, esp
0x5CB315: mov     [esp+48h+var_10], esp
0x5CB319: push    edx
0x5CB31A: call    BSStringT_constr_str
0x5CB31F: mov     eax, [esi+74h]
0x5CB322: push    eax; int
0x5CB323: mov     ecx, esi
0x5CB325: call    sub_5C93F0
0x5CB32A: mov     edx, ds:0B39198h
0x5CB330: push    0; char
0x5CB332: push    0; int
0x5CB334: push    25h ; '%'; int
0x5CB336: sub     esp, 8
0x5CB339: mov     ecx, esp
0x5CB33B: mov     [esp+48h+var_10], esp
0x5CB33F: push    edx
0x5CB340: call    BSStringT_constr_str
0x5CB345: mov     eax, [esi+74h]
0x5CB348: push    eax; int
0x5CB349: mov     ecx, esi
0x5CB34B: call    sub_5C93F0
0x5CB350: mov     edx, ds:0B391A0h
0x5CB356: push    0; char
0x5CB358: push    0; int
0x5CB35A: push    26h ; '&'; int
0x5CB35C: sub     esp, 8
0x5CB35F: mov     ecx, esp
0x5CB361: mov     [esp+48h+var_10], esp
0x5CB365: push    edx
0x5CB366: call    BSStringT_constr_str
0x5CB36B: mov     eax, [esi+74h]
0x5CB36E: push    eax; int
0x5CB36F: mov     ecx, esi
0x5CB371: call    sub_5C93F0
0x5CB376: mov     edx, ds:0B391A8h
0x5CB37C: push    0; char
0x5CB37E: push    0; int
0x5CB380: push    27h ; '''; int
0x5CB382: sub     esp, 8
0x5CB385: mov     ecx, esp
0x5CB387: mov     [esp+48h+var_10], esp
0x5CB38B: push    edx
0x5CB38C: call    BSStringT_constr_str
0x5CB391: mov     eax, [esi+74h]
0x5CB394: push    eax; int
0x5CB395: mov     ecx, esi
0x5CB397: call    sub_5C93F0
0x5CB39C: push    0; char
0x5CB39E: push    0; int
0x5CB3A0: mov     edx, ds:0B391B0h
0x5CB3A6: push    28h ; '('; int
0x5CB3A8: sub     esp, 8
0x5CB3AB: mov     ecx, esp
0x5CB3AD: mov     [esp+48h+var_10], esp
0x5CB3B1: push    edx
0x5CB3B2: call    BSStringT_constr_str
0x5CB3B7: mov     eax, [esi+74h]
0x5CB3BA: push    eax; int
0x5CB3BB: mov     ecx, esi
0x5CB3BD: call    sub_5C93F0
0x5CB3C2: mov     edx, ds:0B39038h
0x5CB3C8: push    edi; int
0x5CB3C9: push    edi; int
0x5CB3CA: sub     esp, 8
0x5CB3CD: mov     ecx, esp
0x5CB3CF: mov     [esp+44h+var_10], esp
0x5CB3D3: push    edx
0x5CB3D4: call    BSStringT_constr_str
0x5CB3D9: mov     eax, [esi+28h]
0x5CB3DC: push    eax; ArgList
0x5CB3DD: mov     ecx, esi
0x5CB3DF: call    sub_5C4340
0x5CB3E4: push    1; char
0x5CB3E6: push    0; int
0x5CB3E8: push    29h ; ')'; int
0x5CB3EA: sub     esp, 8
0x5CB3ED: mov     [esi+78h], eax
0x5CB3F0: mov     edx, ds:0B391B8h
0x5CB3F6: mov     ecx, esp
0x5CB3F8: mov     [esp+48h+var_10], esp
0x5CB3FC: push    edx
0x5CB3FD: call    BSStringT_constr_str
0x5CB402: mov     eax, [esi+78h]
0x5CB405: push    eax; int
0x5CB406: mov     ecx, esi
0x5CB408: call    sub_5C93F0
0x5CB40D: mov     edx, ds:0B391C0h
0x5CB413: push    0; char
0x5CB415: push    0; int
0x5CB417: push    2Ah ; '*'; int
0x5CB419: sub     esp, 8
0x5CB41C: mov     ecx, esp
0x5CB41E: mov     [esp+48h+var_10], esp
0x5CB422: push    edx
0x5CB423: call    BSStringT_constr_str
0x5CB428: mov     eax, [esi+78h]
0x5CB42B: push    eax; int
0x5CB42C: mov     ecx, esi
0x5CB42E: call    sub_5C93F0
0x5CB433: mov     edx, ds:0B391C8h
0x5CB439: push    0; char
0x5CB43B: push    0; int
0x5CB43D: push    2Bh ; '+'; int
0x5CB43F: sub     esp, 8
0x5CB442: mov     ecx, esp
0x5CB444: mov     [esp+48h+var_10], esp
0x5CB448: push    edx
0x5CB449: call    BSStringT_constr_str
0x5CB44E: mov     eax, [esi+78h]
0x5CB451: push    eax; int
0x5CB452: mov     ecx, esi
0x5CB454: call    sub_5C93F0
0x5CB459: mov     edx, ds:0B391D0h
0x5CB45F: push    0; char
0x5CB461: push    0; int
0x5CB463: push    2Ch ; ','; int
0x5CB465: sub     esp, 8
0x5CB468: mov     ecx, esp
0x5CB46A: mov     [esp+48h+var_10], esp
0x5CB46E: push    edx
0x5CB46F: call    BSStringT_constr_str
0x5CB474: mov     eax, [esi+78h]
0x5CB477: push    eax; int
0x5CB478: mov     ecx, esi
0x5CB47A: call    sub_5C93F0
0x5CB47F: push    0; char
0x5CB481: push    0; int
0x5CB483: push    2Dh ; '-'; int
0x5CB485: sub     esp, 8
0x5CB488: mov     ecx, esp
0x5CB48A: mov     edx, ds:0B391D8h
0x5CB490: mov     [esp+48h+var_10], esp
0x5CB494: push    edx
0x5CB495: call    BSStringT_constr_str
0x5CB49A: mov     eax, [esi+78h]
0x5CB49D: push    eax; int
0x5CB49E: mov     ecx, esi
0x5CB4A0: call    sub_5C93F0
0x5CB4A5: mov     edx, ds:0B391E0h
0x5CB4AB: push    0; char
0x5CB4AD: push    0; int
0x5CB4AF: push    2Eh ; '.'; int
0x5CB4B1: sub     esp, 8
0x5CB4B4: mov     ecx, esp
0x5CB4B6: mov     [esp+48h+var_10], esp
0x5CB4BA: push    edx
0x5CB4BB: call    BSStringT_constr_str
0x5CB4C0: mov     eax, [esi+78h]
0x5CB4C3: push    eax; int
0x5CB4C4: mov     ecx, esi
0x5CB4C6: call    sub_5C93F0
0x5CB4CB: mov     edx, ds:0B391E8h
0x5CB4D1: push    0; char
0x5CB4D3: push    0; int
0x5CB4D5: push    2Fh ; '/'; int
0x5CB4D7: sub     esp, 8
0x5CB4DA: mov     ecx, esp
0x5CB4DC: mov     [esp+48h+var_10], esp
0x5CB4E0: push    edx
0x5CB4E1: call    BSStringT_constr_str
0x5CB4E6: mov     eax, [esi+78h]
0x5CB4E9: push    eax; int
0x5CB4EA: mov     ecx, esi
0x5CB4EC: call    sub_5C93F0
0x5CB4F1: mov     edx, ds:0B391F0h
0x5CB4F7: push    0; char
0x5CB4F9: push    0; int
0x5CB4FB: push    30h ; '0'; int
0x5CB4FD: sub     esp, 8
0x5CB500: mov     ecx, esp
0x5CB502: mov     [esp+48h+var_10], esp
0x5CB506: push    edx
0x5CB507: call    BSStringT_constr_str
0x5CB50C: mov     eax, [esi+78h]
0x5CB50F: push    eax; int
0x5CB510: mov     ecx, esi
0x5CB512: call    sub_5C93F0
0x5CB517: mov     edx, ds:0B391F8h
0x5CB51D: push    0; char
0x5CB51F: push    0; int
0x5CB521: push    31h ; '1'; int
0x5CB523: sub     esp, 8
0x5CB526: mov     ecx, esp
0x5CB528: mov     [esp+48h+var_10], esp
0x5CB52C: push    edx
0x5CB52D: call    BSStringT_constr_str
0x5CB532: mov     eax, [esi+78h]
0x5CB535: push    eax; int
0x5CB536: mov     ecx, esi
0x5CB538: call    sub_5C93F0
0x5CB53D: mov     edx, ds:0B39200h
0x5CB543: push    0; char
0x5CB545: push    0; int
0x5CB547: push    32h ; '2'; int
0x5CB549: sub     esp, 8
0x5CB54C: mov     ecx, esp
0x5CB54E: mov     [esp+48h+var_10], esp
0x5CB552: push    edx
0x5CB553: call    BSStringT_constr_str
0x5CB558: mov     eax, [esi+78h]
0x5CB55B: push    eax; int
0x5CB55C: mov     ecx, esi
0x5CB55E: call    sub_5C93F0
0x5CB563: mov     edx, ds:0B39208h
0x5CB569: push    0; char
0x5CB56B: push    0; int
0x5CB56D: push    33h ; '3'; int
0x5CB56F: sub     esp, 8
0x5CB572: mov     ecx, esp
0x5CB574: mov     [esp+48h+var_10], esp
0x5CB578: push    edx
0x5CB579: call    BSStringT_constr_str
0x5CB57E: mov     eax, [esi+78h]
0x5CB581: push    eax; int
0x5CB582: mov     ecx, esi
0x5CB584: call    sub_5C93F0
0x5CB589: mov     edx, ds:0B39210h
0x5CB58F: push    0; char
0x5CB591: push    0; int
0x5CB593: push    34h ; '4'; int
0x5CB595: sub     esp, 8
0x5CB598: mov     ecx, esp
0x5CB59A: mov     [esp+48h+var_10], esp
0x5CB59E: push    edx
0x5CB59F: call    BSStringT_constr_str
0x5CB5A4: mov     eax, [esi+78h]
0x5CB5A7: push    eax; int
0x5CB5A8: mov     ecx, esi
0x5CB5AA: call    sub_5C93F0
0x5CB5AF: mov     edx, ds:0B39218h
0x5CB5B5: push    0; char
0x5CB5B7: push    0; int
0x5CB5B9: push    35h ; '5'; int
0x5CB5BB: sub     esp, 8
0x5CB5BE: mov     ecx, esp
0x5CB5C0: mov     [esp+48h+var_10], esp
0x5CB5C4: push    edx
0x5CB5C5: call    BSStringT_constr_str
0x5CB5CA: mov     eax, [esi+78h]
0x5CB5CD: push    eax; int
0x5CB5CE: mov     ecx, esi
0x5CB5D0: call    sub_5C93F0
0x5CB5D5: mov     edx, ds:0B39220h
0x5CB5DB: push    0; char
0x5CB5DD: push    0; int
0x5CB5DF: push    36h ; '6'; int
0x5CB5E1: sub     esp, 8
0x5CB5E4: mov     ecx, esp
0x5CB5E6: mov     [esp+48h+var_10], esp
0x5CB5EA: push    edx
0x5CB5EB: call    BSStringT_constr_str
0x5CB5F0: mov     eax, [esi+78h]
0x5CB5F3: push    eax; int
0x5CB5F4: mov     ecx, esi
0x5CB5F6: call    sub_5C93F0
0x5CB5FB: mov     edx, ds:0B39040h
0x5CB601: push    edi; int
0x5CB602: push    edi; int
0x5CB603: sub     esp, 8
0x5CB606: mov     ecx, esp
0x5CB608: mov     [esp+44h+var_10], esp
0x5CB60C: push    edx
0x5CB60D: call    BSStringT_constr_str
0x5CB612: mov     eax, [esi+28h]
0x5CB615: push    eax; ArgList
0x5CB616: mov     ecx, esi
0x5CB618: call    sub_5C4340
0x5CB61D: push    1; char
0x5CB61F: push    1; int
0x5CB621: push    1Ch; int
0x5CB623: sub     esp, 8
0x5CB626: mov     [esi+7Ch], eax
0x5CB629: mov     edx, ds:0B39228h
0x5CB62F: mov     ecx, esp
0x5CB631: mov     [esp+48h+var_10], esp
0x5CB635: push    edx
0x5CB636: call    BSStringT_constr_str
0x5CB63B: mov     eax, [esi+7Ch]
0x5CB63E: push    eax; int
0x5CB63F: mov     ecx, esi
0x5CB641: call    sub_5C93F0
0x5CB646: mov     edx, ds:0B39230h
0x5CB64C: push    0; char
0x5CB64E: push    1; int
0x5CB650: push    1Dh; int
0x5CB652: sub     esp, 8
0x5CB655: mov     ecx, esp
0x5CB657: mov     [esp+48h+var_10], esp
0x5CB65B: push    edx
0x5CB65C: call    BSStringT_constr_str
0x5CB661: mov     eax, [esi+7Ch]
0x5CB664: push    eax; int
0x5CB665: mov     ecx, esi
0x5CB667: call    sub_5C93F0
0x5CB66C: mov     edx, ds:0B39238h
0x5CB672: push    0; char
0x5CB674: push    1; int
0x5CB676: push    1Eh; int
0x5CB678: sub     esp, 8
0x5CB67B: mov     ecx, esp
0x5CB67D: mov     [esp+48h+var_10], esp
0x5CB681: push    edx
0x5CB682: call    BSStringT_constr_str
0x5CB687: mov     eax, [esi+7Ch]
0x5CB68A: push    eax; int
0x5CB68B: mov     ecx, esi
0x5CB68D: call    sub_5C93F0
0x5CB692: mov     edx, ds:0B39240h
0x5CB698: push    0; char
0x5CB69A: push    1; int
0x5CB69C: push    1Fh; int
0x5CB69E: sub     esp, 8
0x5CB6A1: mov     ecx, esp
0x5CB6A3: mov     [esp+48h+var_10], esp
0x5CB6A7: push    edx
0x5CB6A8: call    BSStringT_constr_str
0x5CB6AD: mov     eax, [esi+7Ch]
0x5CB6B0: push    eax; int
0x5CB6B1: mov     ecx, esi
0x5CB6B3: call    sub_5C93F0
0x5CB6B8: mov     edx, ds:0B39248h
0x5CB6BE: push    0; char
0x5CB6C0: push    1; int
0x5CB6C2: push    6; int
0x5CB6C4: sub     esp, 8
0x5CB6C7: mov     ecx, esp
0x5CB6C9: mov     [esp+48h+var_10], esp
0x5CB6CD: push    edx
0x5CB6CE: call    BSStringT_constr_str
0x5CB6D3: mov     eax, [esi+7Ch]
0x5CB6D6: push    eax; int
0x5CB6D7: mov     ecx, esi
0x5CB6D9: call    sub_5C93F0
0x5CB6DE: mov     edx, ds:0B39050h
0x5CB6E4: push    edi; int
0x5CB6E5: push    edi; int
0x5CB6E6: sub     esp, 8
0x5CB6E9: mov     ecx, esp
0x5CB6EB: mov     [esp+44h+var_10], esp
0x5CB6EF: push    edx
0x5CB6F0: call    BSStringT_constr_str
0x5CB6F5: mov     eax, [esi+28h]
0x5CB6F8: push    eax; ArgList
0x5CB6F9: mov     ecx, esi
0x5CB6FB: call    sub_5C4340
0x5CB700: push    1; char
0x5CB702: push    1; int
0x5CB704: push    0; int
0x5CB706: sub     esp, 8
0x5CB709: mov     [esi+80h], eax
0x5CB70F: mov     edx, ds:0B39250h
0x5CB715: mov     ecx, esp
0x5CB717: mov     [esp+48h+var_10], esp
0x5CB71B: push    edx
0x5CB71C: call    BSStringT_constr_str
0x5CB721: mov     eax, [esi+80h]
0x5CB727: push    eax; int
0x5CB728: mov     ecx, esi
0x5CB72A: call    sub_5C93F0
0x5CB72F: mov     edx, ds:0B39258h
0x5CB735: push    0; char
0x5CB737: push    1; int
0x5CB739: push    1; int
0x5CB73B: sub     esp, 8
0x5CB73E: mov     ecx, esp
0x5CB740: mov     [esp+48h+var_10], esp
0x5CB744: push    edx
0x5CB745: call    BSStringT_constr_str
0x5CB74A: mov     eax, [esi+80h]
0x5CB750: push    eax; int
0x5CB751: mov     ecx, esi
0x5CB753: call    sub_5C93F0
0x5CB758: push    0; char
0x5CB75A: mov     edx, ds:0B39260h
0x5CB760: push    1; int
0x5CB762: push    2; int
0x5CB764: sub     esp, 8
0x5CB767: mov     ecx, esp
0x5CB769: mov     [esp+48h+var_10], esp
0x5CB76D: push    edx
0x5CB76E: call    BSStringT_constr_str
0x5CB773: mov     eax, [esi+80h]
0x5CB779: push    eax; int
0x5CB77A: mov     ecx, esi
0x5CB77C: call    sub_5C93F0
0x5CB781: mov     edx, ds:0B39268h
0x5CB787: push    0; char
0x5CB789: push    1; int
0x5CB78B: push    3; int
0x5CB78D: sub     esp, 8
0x5CB790: mov     ecx, esp
0x5CB792: mov     [esp+48h+var_10], esp
0x5CB796: push    edx
0x5CB797: call    BSStringT_constr_str
0x5CB79C: mov     eax, [esi+80h]
0x5CB7A2: push    eax; int
0x5CB7A3: mov     ecx, esi
0x5CB7A5: call    sub_5C93F0
0x5CB7AA: mov     edx, ds:0B39270h
0x5CB7B0: push    0; char
0x5CB7B2: push    1; int
0x5CB7B4: push    4; int
0x5CB7B6: sub     esp, 8
0x5CB7B9: mov     ecx, esp
0x5CB7BB: mov     [esp+48h+var_10], esp
0x5CB7BF: push    edx
0x5CB7C0: call    BSStringT_constr_str
0x5CB7C5: mov     eax, [esi+80h]
0x5CB7CB: push    eax; int
0x5CB7CC: mov     ecx, esi
0x5CB7CE: call    sub_5C93F0
0x5CB7D3: mov     edx, ds:0B39278h
0x5CB7D9: push    0; char
0x5CB7DB: push    1; int
0x5CB7DD: push    5; int
0x5CB7DF: sub     esp, 8
0x5CB7E2: mov     ecx, esp
0x5CB7E4: mov     [esp+48h+var_10], esp
0x5CB7E8: push    edx
0x5CB7E9: call    BSStringT_constr_str
0x5CB7EE: mov     eax, [esi+80h]
0x5CB7F4: push    eax; int
0x5CB7F5: mov     ecx, esi
0x5CB7F7: call    sub_5C93F0
0x5CB7FC: mov     edx, ds:0B39320h
0x5CB802: push    edi; int
0x5CB803: push    edi; int
0x5CB804: sub     esp, 8
0x5CB807: mov     ecx, esp
0x5CB809: mov     [esp+44h+var_10], esp
0x5CB80D: push    edx
0x5CB80E: call    BSStringT_constr_str
0x5CB813: mov     eax, [esi+28h]
0x5CB816: push    eax; ArgList
0x5CB817: mov     ecx, esi
0x5CB819: call    sub_5C4340
0x5CB81E: push    1; char
0x5CB820: push    1; int
0x5CB822: push    7; int
0x5CB824: sub     esp, 8
0x5CB827: mov     [esi+84h], eax
0x5CB82D: mov     edx, ds:0B39280h
0x5CB833: mov     ecx, esp
0x5CB835: mov     [esp+48h+var_10], esp
0x5CB839: push    edx
0x5CB83A: call    BSStringT_constr_str
0x5CB83F: mov     eax, [esi+84h]
0x5CB845: push    eax; int
0x5CB846: mov     ecx, esi
0x5CB848: call    sub_5C93F0
0x5CB84D: push    0; char
0x5CB84F: push    1; int
0x5CB851: push    8; int
0x5CB853: sub     esp, 8
0x5CB856: mov     edx, ds:0B39288h
0x5CB85C: mov     ecx, esp
0x5CB85E: mov     [esp+48h+var_10], esp
0x5CB862: push    edx
0x5CB863: call    BSStringT_constr_str
0x5CB868: mov     eax, [esi+84h]
0x5CB86E: push    eax; int
0x5CB86F: mov     ecx, esi
0x5CB871: call    sub_5C93F0
0x5CB876: mov     edx, ds:0B39290h
0x5CB87C: push    0; char
0x5CB87E: push    1; int
0x5CB880: push    10h; int
0x5CB882: sub     esp, 8
0x5CB885: mov     ecx, esp
0x5CB887: mov     [esp+48h+var_10], esp
0x5CB88B: push    edx
0x5CB88C: call    BSStringT_constr_str
0x5CB891: mov     eax, [esi+84h]
0x5CB897: push    eax; int
0x5CB898: mov     ecx, esi
0x5CB89A: call    sub_5C93F0
0x5CB89F: mov     edx, ds:0B39298h
0x5CB8A5: push    0; char
0x5CB8A7: push    1; int
0x5CB8A9: push    11h; int
0x5CB8AB: sub     esp, 8
0x5CB8AE: mov     ecx, esp
0x5CB8B0: mov     [esp+48h+var_10], esp
0x5CB8B4: push    edx
0x5CB8B5: call    BSStringT_constr_str
0x5CB8BA: mov     eax, [esi+84h]
0x5CB8C0: push    eax; int
0x5CB8C1: mov     ecx, esi
0x5CB8C3: call    sub_5C93F0
0x5CB8C8: mov     edx, ds:0B392A0h
0x5CB8CE: push    0; char
0x5CB8D0: push    1; int
0x5CB8D2: push    12h; int
0x5CB8D4: sub     esp, 8
0x5CB8D7: mov     ecx, esp
0x5CB8D9: mov     [esp+48h+var_10], esp
0x5CB8DD: push    edx
0x5CB8DE: call    BSStringT_constr_str
0x5CB8E3: mov     eax, [esi+84h]
0x5CB8E9: push    eax; int
0x5CB8EA: mov     ecx, esi
0x5CB8EC: call    sub_5C93F0
0x5CB8F1: mov     edx, ds:0B392A8h
0x5CB8F7: push    0; char
0x5CB8F9: push    1; int
0x5CB8FB: push    13h; int
0x5CB8FD: sub     esp, 8
0x5CB900: mov     ecx, esp
0x5CB902: mov     [esp+48h+var_10], esp
0x5CB906: push    edx
0x5CB907: call    BSStringT_constr_str
0x5CB90C: mov     eax, [esi+84h]
0x5CB912: push    eax; int
0x5CB913: mov     ecx, esi
0x5CB915: call    sub_5C93F0
0x5CB91A: mov     edx, ds:0B39058h
0x5CB920: push    edi; int
0x5CB921: push    edi; int
0x5CB922: sub     esp, 8
0x5CB925: mov     ecx, esp
0x5CB927: mov     [esp+44h+var_10], esp
0x5CB92B: push    edx
0x5CB92C: call    BSStringT_constr_str
0x5CB931: mov     eax, [esi+28h]
0x5CB934: push    eax; ArgList
0x5CB935: mov     ecx, esi
0x5CB937: call    sub_5C4340
0x5CB93C: push    1; char
0x5CB93E: push    1; int
0x5CB940: push    9; int
0x5CB942: sub     esp, 8
0x5CB945: mov     [esi+88h], eax
0x5CB94B: mov     edx, ds:0B392C0h
0x5CB951: mov     ecx, esp
0x5CB953: mov     [esp+48h+var_10], esp
0x5CB957: push    edx
0x5CB958: call    BSStringT_constr_str
0x5CB95D: mov     eax, [esi+88h]
0x5CB963: push    eax; int
0x5CB964: mov     ecx, esi
0x5CB966: call    sub_5C93F0
0x5CB96B: mov     edx, ds:0B392C8h
0x5CB971: push    0; char
0x5CB973: push    1; int
0x5CB975: push    0Ah; int
0x5CB977: sub     esp, 8
0x5CB97A: mov     ecx, esp
0x5CB97C: mov     [esp+48h+var_10], esp
0x5CB980: push    edx
0x5CB981: call    BSStringT_constr_str
0x5CB986: mov     eax, [esi+88h]
0x5CB98C: push    eax; int
0x5CB98D: mov     ecx, esi
0x5CB98F: call    sub_5C93F0
0x5CB994: mov     edx, ds:0B392D0h
0x5CB99A: push    0; char
0x5CB99C: push    1; int
0x5CB99E: push    0Bh; int
0x5CB9A0: sub     esp, 8
0x5CB9A3: mov     ecx, esp
0x5CB9A5: mov     [esp+48h+var_10], esp
0x5CB9A9: push    edx
0x5CB9AA: call    BSStringT_constr_str
0x5CB9AF: mov     eax, [esi+88h]
0x5CB9B5: push    eax; int
0x5CB9B6: mov     ecx, esi
0x5CB9B8: call    sub_5C93F0
0x5CB9BD: mov     edx, ds:0B392D8h
0x5CB9C3: push    0; char
0x5CB9C5: push    1; int
0x5CB9C7: push    0Ch; int
0x5CB9C9: sub     esp, 8
0x5CB9CC: mov     ecx, esp
0x5CB9CE: mov     [esp+48h+var_10], esp
0x5CB9D2: push    edx
0x5CB9D3: call    BSStringT_constr_str
0x5CB9D8: mov     eax, [esi+88h]
0x5CB9DE: push    eax; int
0x5CB9DF: mov     ecx, esi
0x5CB9E1: call    sub_5C93F0
0x5CB9E6: mov     edx, ds:0B392E0h
0x5CB9EC: push    0; char
0x5CB9EE: push    1; int
0x5CB9F0: push    0Dh; int
0x5CB9F2: sub     esp, 8
0x5CB9F5: mov     ecx, esp
0x5CB9F7: mov     [esp+48h+var_10], esp
0x5CB9FB: push    edx
0x5CB9FC: call    BSStringT_constr_str
0x5CBA01: mov     eax, [esi+88h]
0x5CBA07: push    eax; int
0x5CBA08: mov     ecx, esi
0x5CBA0A: call    sub_5C93F0
0x5CBA0F: mov     edx, ds:0B392E8h
0x5CBA15: push    0; char
0x5CBA17: push    1; int
0x5CBA19: push    0Eh; int
0x5CBA1B: sub     esp, 8
0x5CBA1E: mov     ecx, esp
0x5CBA20: mov     [esp+48h+var_10], esp
0x5CBA24: push    edx
0x5CBA25: call    BSStringT_constr_str
0x5CBA2A: mov     eax, [esi+88h]
0x5CBA30: push    eax; int
0x5CBA31: mov     ecx, esi
0x5CBA33: call    sub_5C93F0
0x5CBA38: mov     edx, ds:0B392F0h
0x5CBA3E: push    0; char
0x5CBA40: push    1; int
0x5CBA42: push    0Fh; int
0x5CBA44: sub     esp, 8
0x5CBA47: mov     ecx, esp
0x5CBA49: mov     [esp+48h+var_10], esp
0x5CBA4D: push    edx
0x5CBA4E: call    BSStringT_constr_str
0x5CBA53: mov     eax, [esi+88h]
0x5CBA59: push    eax; int
0x5CBA5A: mov     ecx, esi
0x5CBA5C: call    sub_5C93F0
0x5CBA61: mov     edx, ds:0B39060h
0x5CBA67: push    edi; int
0x5CBA68: push    edi; int
0x5CBA69: sub     esp, 8
0x5CBA6C: mov     ecx, esp
0x5CBA6E: mov     [esp+44h+var_10], esp
0x5CBA72: push    edx
0x5CBA73: call    BSStringT_constr_str
0x5CBA78: mov     eax, [esi+28h]
0x5CBA7B: push    eax; ArgList
0x5CBA7C: mov     ecx, esi
0x5CBA7E: call    sub_5C4340
0x5CBA83: push    1; char
0x5CBA85: push    1; int
0x5CBA87: push    16h; int
0x5CBA89: sub     esp, 8
0x5CBA8C: mov     [esi+8Ch], eax
0x5CBA92: mov     edx, ds:0B392F8h
0x5CBA98: mov     ecx, esp
0x5CBA9A: mov     [esp+48h+var_10], esp
0x5CBA9E: push    edx
0x5CBA9F: call    BSStringT_constr_str
0x5CBAA4: mov     eax, [esi+8Ch]
0x5CBAAA: push    eax; int
0x5CBAAB: mov     ecx, esi
0x5CBAAD: call    sub_5C93F0
0x5CBAB2: mov     edx, ds:0B39300h
0x5CBAB8: push    0; char
0x5CBABA: push    1; int
0x5CBABC: push    17h; int
0x5CBABE: sub     esp, 8
0x5CBAC1: mov     ecx, esp
0x5CBAC3: mov     [esp+48h+var_10], esp
0x5CBAC7: push    edx
0x5CBAC8: call    BSStringT_constr_str
0x5CBACD: mov     eax, [esi+8Ch]
0x5CBAD3: push    eax; int
0x5CBAD4: mov     ecx, esi
0x5CBAD6: call    sub_5C93F0
0x5CBADB: mov     edx, ds:0B39308h
0x5CBAE1: push    0; char
0x5CBAE3: push    1; int
0x5CBAE5: push    18h; int
0x5CBAE7: sub     esp, 8
0x5CBAEA: mov     ecx, esp
0x5CBAEC: mov     [esp+48h+var_10], esp
0x5CBAF0: push    edx
0x5CBAF1: call    BSStringT_constr_str
0x5CBAF6: mov     eax, [esi+8Ch]
0x5CBAFC: push    eax; int
0x5CBAFD: mov     ecx, esi
0x5CBAFF: call    sub_5C93F0
0x5CBB04: mov     edx, ds:0B39328h
0x5CBB0A: push    edi; int
0x5CBB0B: push    edi; int
0x5CBB0C: sub     esp, 8
0x5CBB0F: mov     ecx, esp
0x5CBB11: mov     [esp+44h+var_10], esp
0x5CBB15: push    edx
0x5CBB16: call    BSStringT_constr_str
0x5CBB1B: mov     eax, [esi+28h]
0x5CBB1E: push    eax; int
0x5CBB1F: mov     ecx, esi
0x5CBB21: call    sub_5C4340
0x5CBB26: push    1; char
0x5CBB28: push    1; int
0x5CBB2A: push    19h; int
0x5CBB2C: sub     esp, 8
0x5CBB2F: mov     [esi+90h], eax
0x5CBB35: mov     edx, ds:0B39310h
0x5CBB3B: mov     ecx, esp
0x5CBB3D: mov     [esp+48h+var_10], esp
0x5CBB41: push    edx
0x5CBB42: call    BSStringT_constr_str
0x5CBB47: mov     eax, [esi+90h]
0x5CBB4D: push    eax; int
0x5CBB4E: mov     ecx, esi
0x5CBB50: call    sub_5C93F0
0x5CBB55: mov     edx, ds:0B39318h
0x5CBB5B: push    0; char
0x5CBB5D: push    1; int
0x5CBB5F: push    1Ah; unsigned __int8 *
0x5CBB61: sub     esp, 8
0x5CBB64: mov     ecx, esp
0x5CBB66: mov     [esp+48h+var_10], esp
0x5CBB6A: push    edx
0x5CBB6B: call    BSStringT_constr_str
0x5CBB70: mov     eax, [esi+90h]
0x5CBB76: push    eax; int
0x5CBB77: mov     ecx, esi
0x5CBB79: call    sub_5C93F0
0x5CBB7E: mov     edx, ds:0B38F70h
0x5CBB84: push    0FA8h
0x5CBB89: sub     esp, 8
0x5CBB8C: mov     ecx, esp
0x5CBB8E: mov     [esp+40h+var_10], esp
0x5CBB92: push    edx
0x5CBB93: call    BSStringT_constr_str
0x5CBB98: mov     ecx, esi
0x5CBB9A: call    sub_5C3110
0x5CBB9F: mov     ecx, eax
0x5CBBA1: call    Tile_GetFloat
0x5CBBA6: push    ecx
0x5CBBA7: mov     ecx, [esp+38h+var_1C]; this
0x5CBBAB: fstp    [esp+38h+a2]; a3
0x5CBBAE: push    0FAEh; a2
0x5CBBB3: call    Tile_SetFloat
0x5CBBB8: mov     eax, ds:0B38F70h
0x5CBBBD: push    0FD0h
0x5CBBC2: sub     esp, 8
0x5CBBC5: mov     ecx, esp
0x5CBBC7: mov     [esp+40h+var_10], esp
0x5CBBCB: push    eax; unsigned __int8 *
0x5CBBCC: call    BSStringT_constr_str
0x5CBBD1: mov     ecx, esi
0x5CBBD3: call    sub_5C3110
0x5CBBD8: mov     ecx, eax
0x5CBBDA: call    Tile_GetFloat
0x5CBBDF: push    ecx
0x5CBBE0: mov     ecx, [esp+38h+var_1C]; this
0x5CBBE4: fstp    [esp+38h+a2]; a3
0x5CBBE7: push    0FAFh; a2
0x5CBBEC: call    Tile_SetFloat
0x5CBBF1: cmp     byte ptr ds:0B14500h, 0
0x5CBBF8: jnz     short loc_5CBC42
0x5CBBFA: mov     ecx, ds:0B333C4h; this
0x5CBC00: call    TESObjectREFR_GetName
0x5CBC05: push    eax; unsigned __int8 *
0x5CBC06: push    offset byte_B3B4D0; unsigned __int8 *
0x5CBC0B: call    __mbscmp
0x5CBC10: add     esp, 8
0x5CBC13: test    eax, eax
0x5CBC15: jz      short loc_5CBC42
0x5CBC17: mov     ecx, ds:0B333C4h; this
0x5CBC1D: call    TESObjectREFR_GetName
0x5CBC22: push    eax; unsigned __int8 *
0x5CBC23: push    offset aBenduOlo; "Bendu Olo"
0x5CBC28: call    __mbscmp
0x5CBC2D: add     esp, 8
0x5CBC30: test    eax, eax
0x5CBC32: jz      short loc_5CBC42
0x5CBC34: mov     ecx, ds:0B333C4h; this
0x5CBC3A: call    TESObjectREFR_GetName
0x5CBC3F: push    eax
0x5CBC40: jmp     short loc_5CBC67
0x5CBC42: mov     ecx, ds:0B333C4h; this
0x5CBC48: call    TESObjectREFR_GetName
0x5CBC4D: mov     edx, offset byte_B3B4D0
0x5CBC52: mov     cl, [eax]
0x5CBC54: mov     [edx], cl
0x5CBC56: add     eax, 1
0x5CBC59: add     edx, 1
0x5CBC5C: test    cl, cl
0x5CBC5E: jnz     short loc_5CBC52
0x5CBC60: mov     ecx, ds:0B39440h
0x5CBC66: push    ecx
0x5CBC67: mov     ecx, [esi+30h]
0x5CBC6A: push    0FDEh
0x5CBC6F: call    Tile_SetString
0x5CBC74: fld     dword ptr ds:0A379B4h
0x5CBC7A: mov     ecx, [esi+30h]; this
0x5CBC7D: push    ecx
0x5CBC7E: fstp    [esp+38h+a2]; a3
0x5CBC81: push    0FF0h; a2
0x5CBC86: call    Tile_SetFloat
0x5CBC8B: push    1
0x5CBC8D: mov     ecx, esi
0x5CBC8F: call    sub_5C7BA0
0x5CBC94: cmp     byte ptr ds:0B14500h, 0
0x5CBC9B: jz      short loc_5CBCB0
0x5CBC9D: mov     ecx, esi
0x5CBC9F: call    sub_5C6EA0
0x5CBCA4: mov     byte ptr ds:0B14500h, 0
0x5CBCAB: jmp     loc_5CBED6
0x5CBCB0: mov     ecx, [ebp+1C8h]
0x5CBCB6: call    sub_51FE90
0x5CBCBB: test    al, al
0x5CBCBD: mov     edx, ds:0B39330h
0x5CBCC3: jnz     loc_5CBD67
0x5CBCC9: push    0FAEh
0x5CBCCE: sub     esp, 8
0x5CBCD1: mov     ecx, esp
0x5CBCD3: mov     [esp+40h+var_10], esp
0x5CBCD7: push    edx; unsigned __int8 *
0x5CBCD8: call    BSStringT_constr_str
0x5CBCDD: mov     eax, ds:0B38F88h
0x5CBCE2: sub     esp, 8
0x5CBCE5: mov     ecx, esp
0x5CBCE7: mov     [esp+48h+var_14], esp
0x5CBCEB: push    eax; int
0x5CBCEC: mov     [esp+4Ch+var_4], 16h
0x5CBCF4: call    BSStringT_constr_str
0x5CBCF9: mov     ecx, esi
0x5CBCFB: mov     [esp+48h+var_4], edi
0x5CBCFF: call    sub_5C3440
0x5CBD04: mov     ecx, eax
0x5CBD06: call    Tile_GetFloat
0x5CBD0B: call    Double_To_SInt32
0x5CBD10: mov     edx, ds:0B39330h
0x5CBD16: lea     eax, [esi+eax*8+930h]
0x5CBD1D: mov     eax, [eax]
0x5CBD1F: push    eax
0x5CBD20: push    0FB4h
0x5CBD25: sub     esp, 8
0x5CBD28: mov     ecx, esp
0x5CBD2A: mov     [esp+44h+var_10], esp
0x5CBD2E: push    edx; int
0x5CBD2F: call    BSStringT_constr_str
0x5CBD34: mov     eax, ds:0B38F88h
0x5CBD39: sub     esp, 8
0x5CBD3C: mov     ecx, esp
0x5CBD3E: mov     [esp+4Ch+var_14], esp
0x5CBD42: push    eax
0x5CBD43: mov     [esp+50h+var_4], 17h
0x5CBD4B: call    BSStringT_constr_str
0x5CBD50: mov     ecx, esi
0x5CBD52: mov     [esp+4Ch+var_4], edi
0x5CBD56: call    sub_5C3440
0x5CBD5B: mov     ecx, eax
0x5CBD5D: call    Tile_SetString
0x5CBD62: jmp     loc_5CBED6
0x5CBD67: push    1
0x5CBD69: push    0FBBh
0x5CBD6E: sub     esp, 8
0x5CBD71: mov     ecx, esp
0x5CBD73: mov     [esp+44h+var_10], esp
0x5CBD77: push    edx; int
0x5CBD78: call    BSStringT_constr_str
0x5CBD7D: mov     eax, ds:0B38F88h
0x5CBD82: sub     esp, 8
0x5CBD85: mov     ecx, esp
0x5CBD87: mov     [esp+4Ch+var_14], esp
0x5CBD8B: push    eax
0x5CBD8C: mov     [esp+50h+var_4], 18h
0x5CBD94: call    BSStringT_constr_str
0x5CBD99: mov     ecx, esi
0x5CBD9B: mov     [esp+4Ch+var_4], edi
0x5CBD9F: call    sub_5C3440
0x5CBDA4: mov     ecx, eax
0x5CBDA6: call    sub_578ED0
0x5CBDAB: mov     edx, ds:0B39330h
0x5CBDB1: push    offset word_A36430
0x5CBDB6: push    0FB4h
0x5CBDBB: sub     esp, 8
0x5CBDBE: mov     ecx, esp
0x5CBDC0: mov     [esp+44h+var_10], esp
0x5CBDC4: push    edx; int
0x5CBDC5: call    BSStringT_constr_str
0x5CBDCA: mov     eax, ds:0B38F88h
0x5CBDCF: sub     esp, 8
0x5CBDD2: mov     ecx, esp
0x5CBDD4: mov     [esp+4Ch+var_14], esp
0x5CBDD8: push    eax
0x5CBDD9: mov     [esp+50h+var_4], 19h
0x5CBDE1: call    BSStringT_constr_str
0x5CBDE6: mov     ecx, esi
0x5CBDE8: mov     [esp+4Ch+var_4], edi
0x5CBDEC: call    sub_5C3440
0x5CBDF1: mov     ecx, eax
0x5CBDF3: call    Tile_SetString
0x5CBDF8: mov     edx, ds:0B38FC0h
0x5CBDFE: push    1
0x5CBE00: push    0FBBh
0x5CBE05: sub     esp, 8
0x5CBE08: mov     ecx, esp
0x5CBE0A: mov     [esp+44h+var_10], esp
0x5CBE0E: push    edx; int
0x5CBE0F: call    BSStringT_constr_str
0x5CBE14: mov     eax, ds:0B38F88h
0x5CBE19: sub     esp, 8
0x5CBE1C: mov     ecx, esp
0x5CBE1E: mov     [esp+4Ch+var_14], esp
0x5CBE22: push    eax
0x5CBE23: mov     [esp+50h+var_4], 1Ah
0x5CBE2B: call    BSStringT_constr_str
0x5CBE30: mov     ecx, esi
0x5CBE32: mov     [esp+4Ch+var_4], edi
0x5CBE36: call    sub_5C3440
0x5CBE3B: mov     ecx, eax
0x5CBE3D: call    sub_578ED0
0x5CBE42: mov     edx, ds:0B38FC8h
0x5CBE48: push    1
0x5CBE4A: push    0FBBh
0x5CBE4F: sub     esp, 8
0x5CBE52: mov     ecx, esp
0x5CBE54: mov     [esp+44h+var_10], esp
0x5CBE58: push    edx; int
0x5CBE59: call    BSStringT_constr_str
0x5CBE5E: mov     eax, ds:0B38F88h
0x5CBE63: sub     esp, 8
0x5CBE66: mov     ecx, esp
0x5CBE68: mov     [esp+4Ch+var_14], esp
0x5CBE6C: push    eax
0x5CBE6D: mov     [esp+50h+var_4], 1Bh
0x5CBE75: call    BSStringT_constr_str
0x5CBE7A: mov     ecx, esi
0x5CBE7C: mov     [esp+4Ch+var_4], edi
0x5CBE80: call    sub_5C3440
0x5CBE85: mov     ecx, eax
0x5CBE87: call    sub_578ED0
0x5CBE8C: mov     edx, ds:0B38FD0h
0x5CBE92: push    1
0x5CBE94: push    0FBBh; int
0x5CBE99: sub     esp, 8
0x5CBE9C: mov     ecx, esp
0x5CBE9E: mov     [esp+44h+var_10], esp
0x5CBEA2: push    edx; int
0x5CBEA3: call    BSStringT_constr_str
0x5CBEA8: mov     eax, ds:0B38F88h
0x5CBEAD: sub     esp, 8
0x5CBEB0: mov     ecx, esp
0x5CBEB2: mov     [esp+4Ch+var_14], esp
0x5CBEB6: push    eax
0x5CBEB7: mov     [esp+50h+var_4], 1Ch
0x5CBEBF: call    BSStringT_constr_str
0x5CBEC4: mov     ecx, esi
0x5CBEC6: mov     [esp+4Ch+var_4], edi
0x5CBECA: call    sub_5C3440
0x5CBECF: mov     ecx, eax
0x5CBED1: call    sub_578ED0
0x5CBED6: mov     edx, ds:0B39330h
0x5CBEDC: push    0FBBh
0x5CBEE1: sub     esp, 8
0x5CBEE4: mov     ecx, esp
0x5CBEE6: mov     [esp+40h+var_10], esp
0x5CBEEA: push    edx; int
0x5CBEEB: call    BSStringT_constr_str
0x5CBEF0: mov     eax, ds:0B38F88h
0x5CBEF5: sub     esp, 8
0x5CBEF8: mov     ecx, esp
0x5CBEFA: mov     [esp+48h+var_14], esp
0x5CBEFE: push    eax
0x5CBEFF: mov     [esp+4Ch+var_4], 1Dh
0x5CBF07: call    BSStringT_constr_str
0x5CBF0C: mov     ecx, esi
0x5CBF0E: mov     [esp+48h+var_4], edi
0x5CBF12: call    sub_5C3440
0x5CBF17: mov     ecx, eax
0x5CBF19: call    Tile_GetFloat
0x5CBF1E: fcomp   dword ptr ds:0A379B4h
0x5CBF24: fnstsw  ax
0x5CBF26: test    ah, 44h
0x5CBF29: jp      loc_5CC129
0x5CBF2F: mov     edx, ds:0B38FC0h
0x5CBF35: push    0FAEh
0x5CBF3A: sub     esp, 8
0x5CBF3D: mov     ecx, esp
0x5CBF3F: mov     [esp+40h+var_10], esp
0x5CBF43: push    edx; int
0x5CBF44: call    BSStringT_constr_str
0x5CBF49: mov     eax, ds:0B38F88h
0x5CBF4E: sub     esp, 8
0x5CBF51: mov     ecx, esp
0x5CBF53: mov     [esp+48h+var_14], esp
0x5CBF57: push    eax
0x5CBF58: mov     [esp+4Ch+var_4], 1Eh
0x5CBF60: call    BSStringT_constr_str
0x5CBF65: mov     ecx, esi
0x5CBF67: mov     [esp+48h+var_4], edi
0x5CBF6B: call    sub_5C3440
0x5CBF70: mov     ecx, eax
0x5CBF72: call    Tile_GetFloat
0x5CBF77: fstp    [esp+34h+var_10]
0x5CBF7B: mov     edx, ds:0B38FC8h
0x5CBF81: push    0FAEh
0x5CBF86: sub     esp, 8
0x5CBF89: mov     ecx, esp
0x5CBF8B: mov     [esp+40h+var_14], esp
0x5CBF8F: push    edx; int
0x5CBF90: call    BSStringT_constr_str
0x5CBF95: mov     eax, ds:0B38F88h
0x5CBF9A: sub     esp, 8
0x5CBF9D: mov     ecx, esp
0x5CBF9F: mov     [esp+48h+var_18], esp
0x5CBFA3: push    eax
0x5CBFA4: mov     [esp+4Ch+var_4], 1Fh
0x5CBFAC: call    BSStringT_constr_str
0x5CBFB1: mov     ecx, esi
0x5CBFB3: mov     [esp+48h+var_4], edi
0x5CBFB7: call    sub_5C3440
0x5CBFBC: mov     ecx, eax
0x5CBFBE: call    Tile_GetFloat
0x5CBFC3: fstp    [esp+34h+var_14]
0x5CBFC7: mov     edx, ds:0B38FD0h
0x5CBFCD: push    0FAEh
0x5CBFD2: sub     esp, 8
0x5CBFD5: mov     ecx, esp
0x5CBFD7: mov     [esp+40h+var_18], esp
0x5CBFDB: push    edx; int
0x5CBFDC: call    BSStringT_constr_str
0x5CBFE1: mov     eax, ds:0B38F88h
0x5CBFE6: sub     esp, 8
0x5CBFE9: mov     ecx, esp
0x5CBFEB: mov     [esp+48h+var_20], esp
0x5CBFEF: push    eax
0x5CBFF0: mov     [esp+4Ch+var_4], 20h ; ' '
0x5CBFF8: call    BSStringT_constr_str
0x5CBFFD: mov     ecx, esi
0x5CBFFF: mov     [esp+48h+var_4], edi
0x5CC003: call    sub_5C3440
0x5CC008: mov     ecx, eax
0x5CC00A: call    Tile_GetFloat
0x5CC00F: fstp    [esp+34h+var_20]
0x5CC013: fld     [esp+34h+var_20]
0x5CC017: fld     qword ptr ds:0A3DDD8h
0x5CC01D: fnstcw  word ptr [esp+34h+var_20]
0x5CC021: movzx   eax, word ptr [esp+34h+var_20]
0x5CC026: fmul    st(1), st
0x5CC028: or      eax, 0C00h
0x5CC02D: fxch    st(1)
0x5CC02F: mov     [esp+34h+var_18], eax
0x5CC033: xor     edx, edx
0x5CC035: fldcw   word ptr [esp+34h+var_18]
0x5CC039: fistp   [esp+34h+var_18]
0x5CC03D: movzx   ecx, byte ptr [esp+34h+var_18]
0x5CC042: mov     dh, cl
0x5CC044: fldcw   word ptr [esp+34h+var_20]
0x5CC048: fld     [esp+34h+var_14]
0x5CC04C: fnstcw  word ptr [esp+34h+var_20]
0x5CC050: fmul    st, st(1)
0x5CC052: movzx   eax, word ptr [esp+34h+var_20]
0x5CC057: or      eax, 0C00h
0x5CC05C: mov     [esp+34h+var_14], eax
0x5CC060: fldcw   word ptr [esp+34h+var_14]
0x5CC064: fistp   [esp+34h+var_14]
0x5CC068: mov     al, byte ptr [esp+34h+var_14]
0x5CC06C: mov     dl, al
0x5CC06E: fldcw   word ptr [esp+34h+var_20]
0x5CC072: shl     edx, 8
0x5CC075: fmul    [esp+34h+var_10]
0x5CC079: fnstcw  word ptr [esp+34h+var_20]
0x5CC07D: movzx   eax, word ptr [esp+34h+var_20]
0x5CC082: or      eax, 0C00h
0x5CC087: mov     [esp+34h+var_10], eax
0x5CC08B: fldcw   word ptr [esp+34h+var_10]
0x5CC08F: fistp   [esp+34h+var_10]
0x5CC093: movzx   ecx, byte ptr [esp+34h+var_10]
0x5CC098: movzx   eax, cl
0x5CC09B: fldcw   word ptr [esp+34h+var_20]
0x5CC09F: or      edx, eax
0x5CC0A1: xor     ebp, ebp
0x5CC0A3: mov     [esp+34h+var_10], edx
0x5CC0A7: mov     [esp+34h+var_20], ebp
0x5CC0AB: mov     ecx, [esp+34h+var_10]
0x5CC0AF: cmp     ecx, [ebx]
0x5CC0B1: jnz     short loc_5CC114
0x5CC0B3: fild    [esp+34h+var_20]
0x5CC0B7: mov     eax, ds:0B39330h
0x5CC0BC: sub     esp, 0Ch
0x5CC0BF: mov     ecx, esp; this
0x5CC0C1: fstp    [esp+40h+a2]; float
0x5CC0C5: mov     [esp+40h+var_14], esp
0x5CC0C9: push    ebp; a3
0x5CC0CA: push    eax; a2
0x5CC0CB: mov     [ecx], ebp
0x5CC0CD: mov     [ecx+4], bp
0x5CC0D1: mov     [ecx+6], bp
0x5CC0D5: call    BSStringT_Set
0x5CC0DA: mov     eax, ds:0B38F88h
0x5CC0DF: sub     esp, 8
0x5CC0E2: mov     ecx, esp; this
0x5CC0E4: mov     [esp+48h+var_18], esp
0x5CC0E8: push    ebp; a3
0x5CC0E9: push    eax; a2
0x5CC0EA: mov     [esp+50h+var_4], 21h ; '!'
0x5CC0F2: mov     [ecx], ebp
0x5CC0F4: mov     [ecx+4], bp
0x5CC0F8: mov     [ecx+6], bp
0x5CC0FC: call    BSStringT_Set
0x5CC101: mov     ecx, esi
0x5CC103: mov     [esp+48h+var_4], edi
0x5CC107: call    sub_5C3440
0x5CC10C: push    eax; int
0x5CC10D: mov     ecx, esi
0x5CC10F: call    sub_5C2B50
0x5CC114: mov     eax, [esp+34h+var_20]
0x5CC118: add     eax, 1
0x5CC11B: add     ebx, 4
0x5CC11E: cmp     eax, 10h
0x5CC121: mov     [esp+34h+var_20], eax
0x5CC125: jl      short loc_5CC0AB
0x5CC127: jmp     short loc_5CC12B
0x5CC129: xor     ebp, ebp
0x5CC12B: push    ebp
0x5CC12C: call    sub_5C7070
0x5CC131: push    ebp
0x5CC132: push    3E9h
0x5CC137: call    sub_5790E0
0x5CC13C: add     esp, 0Ch
0x5CC13F: test    al, al
0x5CC141: jz      short loc_5CC159
0x5CC143: fld1
0x5CC145: push    ecx
0x5CC146: mov     ecx, [esp+38h+var_1C]; this
0x5CC14A: fstp    [esp+38h+a2]; a3
0x5CC14D: push    0FA1h; a2
0x5CC152: call    Tile_SetFloat
0x5CC157: jmp     short loc_5CC161
0x5CC159: push    ebp; char
0x5CC15A: mov     ecx, esi; int
0x5CC15C: call    EnableMenu
0x5CC161: mov     edx, ds:0B333C4h
0x5CC167: mov     al, [edx+588h]
0x5CC16D: mov     [esi+894h], al
0x5CC173: mov     ecx, ds:0B333C4h; this
0x5CC179: push    ebp; a1
0x5CC17A: call    TogglePOV
0x5CC17F: fldz
0x5CC181: sub     esp, 8
0x5CC184: fstp    [esp+3Ch+a2]; float
0x5CC188: fld1
0x5CC18A: mov     ecx, esi
0x5CC18C: fstp    [esp+3Ch+var_3C]; int
0x5CC18F: call    Menu_UPdateCamera???
0x5CC194: mov     eax, ds:0B333C4h
0x5CC199: mov     ecx, [eax+58h]
0x5CC19C: mov     edx, [ecx]
0x5CC19E: push    eax
0x5CC19F: mov     eax, [edx+384h]
0x5CC1A5: call    eax
0x5CC1A7: mov     ecx, ds:0B33EA0h
0x5CC1AD: mov     eax, [esp+34h+var_1C]
0x5CC1B1: mov     [esi+890h], ecx
0x5CC1B7: mov     ecx, dword ptr [esp+34h+var_C]
0x5CC1BB: mov     large fs:0, ecx
0x5CC1C2: pop     ecx
0x5CC1C3: pop     edi
0x5CC1C4: pop     esi
0x5CC1C5: pop     ebp
0x5CC1C6: pop     ebx
0x5CC1C7: add     esp, 20h
0x5CC1CA: retn
0x5CC1CB: cmp     dword ptr [esi+4], 0
0x5CC1CF: jz      short loc_5CC1DB
0x5CC1D1: mov     edx, [esi]
0x5CC1D3: mov     eax, [edx]
0x5CC1D5: push    1
0x5CC1D7: mov     ecx, esi
0x5CC1D9: call    eax
0x5CC1DB: xor     eax, eax
0x5CC1DD: mov     ecx, dword ptr [esp+34h+var_C]
0x5CC1E1: mov     large fs:0, ecx
0x5CC1E8: pop     ecx
0x5CC1E9: pop     edi
0x5CC1EA: pop     esi
0x5CC1EB: pop     ebp
0x5CC1EC: pop     ebx
0x5CC1ED: add     esp, 20h
0x5CC1F0: retn
