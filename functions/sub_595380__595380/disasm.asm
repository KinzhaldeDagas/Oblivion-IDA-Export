0x595380: push    ecx
0x595381: push    3F9h
0x595386: call    Menu_GetOpenMenuTile
0x59538B: add     esp, 4
0x59538E: test    eax, eax
0x595390: jz      short loc_59539C
0x595392: mov     edx, [eax]
0x595394: mov     ecx, eax
0x595396: mov     eax, [edx]
0x595398: push    1
0x59539A: call    eax
0x59539C: push    ebx; a3
0x59539D: push    esi; a3
0x59539E: push    edi; a3
0x59539F: push    1; arg1
0x5953A1: push    0; canCreate
0x5953A3: call    InterfaceManager_GetSingleton
0x5953A8: add     esp, 8
0x5953AB: mov     esi, eax
0x5953AD: call    InterfaceManager_GetDepth
0x5953B2: fstp    [esp+10h+var_4]; a3
0x5953B6: mov     ecx, [esi+68h]; TileWindow *
0x5953B9: push    offset aDataMenusOpt_2; "Data\\Menus\\Options\\audio_menu.xml"
0x5953BE: call    Menu_LoadXML
0x5953C3: mov     edi, eax
0x5953C5: mov     ecx, edi
0x5953C7: call    Tile_GetParentMenu
0x5953CC: mov     ebx, eax
0x5953CE: test    ebx, ebx
0x5953D0: jz      loc_595730
0x5953D6: mov     edx, [ebx]
0x5953D8: mov     eax, [edx+34h]
0x5953DB: mov     ecx, ebx
0x5953DD: call    eax
0x5953DF: cmp     eax, 3F9h
0x5953E4: jnz     loc_595720
0x5953EA: push    0; float
0x5953EC: mov     ecx, edi
0x5953EE: call    sub_58FBA0
0x5953F3: push    0; int
0x5953F5: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5953FA: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5953FF: push    0; int
0x595401: push    edi; void *
0x595402: call    OblivionDynamicCast
0x595407: add     esp, 14h
0x59540A: push    eax
0x59540B: mov     ecx, ebx
0x59540D: call    Menu_SetTileMenu
0x595412: push    0; int
0x595414: push    offset ??_R0?AVAudioMenu@@@8; struct TypeDescriptor *
0x595419: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x59541E: push    0; int
0x595420: push    ebx; void *
0x595421: call    OblivionDynamicCast
0x595426: mov     esi, eax
0x595428: add     esp, 14h
0x59542B: mov     ecx, esi
0x59542D: call    sub_595300
0x595432: test    al, al
0x595434: jnz     short loc_59544A
0x595436: push    offset aAudioMenuCreat; "Audio Menu Creation Failed... Are your "...
0x59543B: call    PrintError
0x595440: add     esp, 4
0x595443: pop     edi
0x595444: pop     esi
0x595445: xor     al, al
0x595447: pop     ebx
0x595448: pop     ecx
0x595449: retn
0x59544A: push    0FA5h
0x59544F: mov     ecx, edi
0x595451: call    Tile_GetFloat
0x595456: fcomp   dword ptr ds:0A69770h
0x59545C: fnstsw  ax
0x59545E: test    ah, 44h
0x595461: jnp     short loc_59547C
0x595463: push    0FA5h
0x595468: mov     ecx, edi
0x59546A: call    Tile_GetFloat
0x59546F: fcomp   qword ptr ds:0A69778h
0x595475: fnstsw  ax
0x595477: test    ah, 44h
0x59547A: jp      short loc_595490
0x59547C: fld     [esp+10h+var_4]
0x595480: push    ecx
0x595481: fstp    [esp+14h+var_14]; a3
0x595484: push    0FABh; a2
0x595489: mov     ecx, edi; this
0x59548B: call    Tile_SetFloat
0x595490: mov     ecx, ds:0B33398h
0x595496: mov     edi, [ecx+24h]
0x595499: fld     dword ptr [edi+0B8h]
0x59549F: fmul    qword ptr ds:0A309F0h
0x5954A5: call    Double_To_SInt32
0x5954AA: fldz
0x5954AC: push    ecx
0x5954AD: fstp    [esp+14h+var_14]; a3
0x5954B0: mov     ecx, [esi+28h]; this
0x5954B3: push    0FAFh; a2
0x5954B8: mov     [esp+18h+var_4], eax; a3
0x5954BC: call    Tile_SetFloat
0x5954C1: fld     dword ptr ds:0A2FE7Ch
0x5954C7: push    ecx
0x5954C8: mov     ecx, [esi+28h]; this
0x5954CB: fstp    [esp+14h+var_14]; a3
0x5954CE: push    0FB0h; a2
0x5954D3: call    Tile_SetFloat
0x5954D8: fld     dword ptr ds:0A379CCh
0x5954DE: push    ecx
0x5954DF: mov     ecx, [esi+28h]; this
0x5954E2: fstp    [esp+14h+var_14]; a3
0x5954E5: push    0FB2h; a2
0x5954EA: call    Tile_SetFloat
0x5954EF: fild    [esp+10h+var_4]
0x5954F3: push    ecx
0x5954F4: mov     ecx, [esi+28h]; this
0x5954F7: fstp    [esp+14h+var_14]; a3
0x5954FA: push    0FB3h; a2
0x5954FF: call    Tile_SetFloat
0x595504: fldz
0x595506: push    ecx
0x595507: fstp    [esp+14h+var_14]; a3
0x59550A: mov     ecx, [esi+28h]; this
0x59550D: push    0FB3h; a2
0x595512: call    Tile_SetFloat
0x595517: mov     ecx, edi
0x595519: call    sub_6A8E00
0x59551E: fmul    qword ptr ds:0A309F0h
0x595524: call    Double_To_SInt32
0x595529: fldz
0x59552B: push    ecx
0x59552C: fstp    [esp+14h+var_14]; a3
0x59552F: mov     ecx, [esi+48h]; this
0x595532: push    0FAFh; a2
0x595537: mov     [esp+18h+var_4], eax; a3
0x59553B: call    Tile_SetFloat
0x595540: fld     dword ptr ds:0A2FE7Ch
0x595546: push    ecx
0x595547: mov     ecx, [esi+48h]; this
0x59554A: fstp    [esp+14h+var_14]; a3
0x59554D: push    0FB0h; a2
0x595552: call    Tile_SetFloat
0x595557: fld     dword ptr ds:0A379CCh
0x59555D: push    ecx
0x59555E: mov     ecx, [esi+48h]; this
0x595561: fstp    [esp+14h+var_14]; a3
0x595564: push    0FB2h; a2
0x595569: call    Tile_SetFloat
0x59556E: fild    [esp+10h+var_4]
0x595572: push    ecx
0x595573: mov     ecx, [esi+48h]; this
0x595576: fstp    [esp+14h+var_14]; a3
0x595579: push    0FB3h; a2
0x59557E: call    Tile_SetFloat
0x595583: fldz
0x595585: push    ecx
0x595586: fstp    [esp+14h+var_14]; a3
0x595589: mov     ecx, [esi+48h]; this
0x59558C: push    0FB3h; a2
0x595591: call    Tile_SetFloat
0x595596: fld     dword ptr [edi+0BCh]
0x59559C: fmul    qword ptr ds:0A309F0h
0x5955A2: call    Double_To_SInt32
0x5955A7: fldz
0x5955A9: push    ecx
0x5955AA: fstp    [esp+14h+var_14]; a3
0x5955AD: mov     ecx, [esi+40h]; this
0x5955B0: push    0FAFh; a2
0x5955B5: mov     [esp+18h+var_4], eax; a3
0x5955B9: call    Tile_SetFloat
0x5955BE: fld     dword ptr ds:0A2FE7Ch
0x5955C4: push    ecx
0x5955C5: mov     ecx, [esi+40h]; this
0x5955C8: fstp    [esp+14h+var_14]; a3
0x5955CB: push    0FB0h; a2
0x5955D0: call    Tile_SetFloat
0x5955D5: fld     dword ptr ds:0A379CCh
0x5955DB: push    ecx
0x5955DC: mov     ecx, [esi+40h]; this
0x5955DF: fstp    [esp+14h+var_14]; a3
0x5955E2: push    0FB2h; a2
0x5955E7: call    Tile_SetFloat
0x5955EC: fild    [esp+10h+var_4]
0x5955F0: push    ecx
0x5955F1: mov     ecx, [esi+40h]; this
0x5955F4: fstp    [esp+14h+var_14]; a3
0x5955F7: push    0FB3h; a2
0x5955FC: call    Tile_SetFloat
0x595601: fldz
0x595603: push    ecx
0x595604: fstp    [esp+14h+var_14]; a3
0x595607: mov     ecx, [esi+40h]; this
0x59560A: push    0FB3h; a2
0x59560F: call    Tile_SetFloat
0x595614: fld     dword ptr [edi+0C0h]
0x59561A: fmul    qword ptr ds:0A309F0h
0x595620: call    Double_To_SInt32
0x595625: fldz
0x595627: push    ecx
0x595628: fstp    [esp+14h+var_14]; a3
0x59562B: mov     ecx, [esi+30h]; this
0x59562E: push    0FAFh; a2
0x595633: mov     [esp+18h+var_4], eax; a3
0x595637: call    Tile_SetFloat
0x59563C: fld     dword ptr ds:0A2FE7Ch
0x595642: push    ecx
0x595643: mov     ecx, [esi+30h]; this
0x595646: fstp    [esp+14h+var_14]; a3
0x595649: push    0FB0h; a2
0x59564E: call    Tile_SetFloat
0x595653: fld     dword ptr ds:0A379CCh
0x595659: push    ecx
0x59565A: mov     ecx, [esi+30h]; this
0x59565D: fstp    [esp+14h+var_14]; a3
0x595660: push    0FB2h; a2
0x595665: call    Tile_SetFloat
0x59566A: fild    [esp+10h+var_4]
0x59566E: push    ecx
0x59566F: mov     ecx, [esi+30h]; this
0x595672: fstp    [esp+14h+var_14]; a3
0x595675: push    0FB3h; a2
0x59567A: call    Tile_SetFloat
0x59567F: fldz
0x595681: push    ecx
0x595682: fstp    [esp+14h+var_14]; a3
0x595685: mov     ecx, [esi+30h]; this
0x595688: push    0FB3h; a2
0x59568D: call    Tile_SetFloat
0x595692: fld     dword ptr [edi+0C4h]
0x595698: fmul    qword ptr ds:0A309F0h
0x59569E: call    Double_To_SInt32
0x5956A3: fldz
0x5956A5: push    ecx
0x5956A6: fstp    [esp+14h+var_14]; a3
0x5956A9: mov     ecx, [esi+38h]; this
0x5956AC: push    0FAFh; a2
0x5956B1: mov     [esp+18h+var_4], eax; a3
0x5956B5: call    Tile_SetFloat
0x5956BA: fld     dword ptr ds:0A2FE7Ch
0x5956C0: push    ecx
0x5956C1: mov     ecx, [esi+38h]; this
0x5956C4: fstp    [esp+14h+var_14]; a3
0x5956C7: push    0FB0h; a2
0x5956CC: call    Tile_SetFloat
0x5956D1: fld     dword ptr ds:0A379CCh
0x5956D7: push    ecx
0x5956D8: mov     ecx, [esi+38h]; this
0x5956DB: fstp    [esp+14h+var_14]; a3
0x5956DE: push    0FB2h; a2
0x5956E3: call    Tile_SetFloat
0x5956E8: fild    [esp+10h+var_4]
0x5956EC: push    ecx
0x5956ED: mov     ecx, [esi+38h]; this
0x5956F0: fstp    [esp+14h+var_14]; a3
0x5956F3: push    0FB3h; a2
0x5956F8: call    Tile_SetFloat
0x5956FD: fldz
0x5956FF: push    ecx
0x595700: fstp    [esp+14h+var_14]; a3
0x595703: mov     ecx, [esi+38h]; this
0x595706: push    0FB3h; a2
0x59570B: call    Tile_SetFloat
0x595710: push    0; char
0x595712: mov     ecx, ebx; int
0x595714: call    EnableMenu
0x595719: pop     edi
0x59571A: pop     esi
0x59571B: mov     al, 1
0x59571D: pop     ebx
0x59571E: pop     ecx
0x59571F: retn
0x595720: cmp     dword ptr [ebx+4], 0
0x595724: jz      short loc_595730
0x595726: mov     edx, [ebx]
0x595728: mov     eax, [edx]
0x59572A: push    1
0x59572C: mov     ecx, ebx
0x59572E: call    eax
0x595730: pop     edi
0x595731: pop     esi
0x595732: xor     al, al
0x595734: pop     ebx
0x595735: pop     ecx
0x595736: retn
