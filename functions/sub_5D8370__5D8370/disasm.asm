0x5D8370: push    0FFFFFFFFh
0x5D8372: push    offset SEH_5D8370
0x5D8377: mov     eax, large fs:0
0x5D837D: push    eax
0x5D837E: sub     esp, 124h
0x5D8384: mov     eax, ds:0B30AACh
0x5D8389: xor     eax, esp
0x5D838B: mov     [esp+130h+var_10], eax
0x5D8392: push    ebx
0x5D8393: push    ebp
0x5D8394: push    esi
0x5D8395: push    edi
0x5D8396: mov     eax, ds:0B30AACh
0x5D839B: xor     eax, esp
0x5D839D: push    eax
0x5D839E: lea     eax, [esp+144h+var_C]
0x5D83A5: mov     large fs:0, eax
0x5D83AB: mov     edi, ecx
0x5D83AD: mov     ecx, [edi+30h]
0x5D83B0: call    sub_5893F0
0x5D83B5: mov     eax, [edi+74h]
0x5D83B8: xor     ebx, ebx
0x5D83BA: cmp     eax, ebx
0x5D83BC: jz      loc_5D862A
0x5D83C2: lea     edx, [eax+18h]
0x5D83C5: mov     [esp+144h+a2], ebx
0x5D83C9: mov     [esp+144h+var_128], edx
0x5D83CD: xor     esi, esi
0x5D83CF: lea     eax, [edx+10h]
0x5D83D2: xor     ecx, ecx
0x5D83D4: cmp     eax, ebx
0x5D83D6: mov     [esp+144h+var_130], esi
0x5D83DA: jz      loc_5D852D
0x5D83E0: cmp     [eax], ebx
0x5D83E2: jz      short loc_5D83E7
0x5D83E4: add     ecx, 1
0x5D83E7: mov     eax, [eax+4]
0x5D83EA: cmp     eax, ebx
0x5D83EC: jnz     short loc_5D83E0
0x5D83EE: cmp     esi, ecx
0x5D83F0: jnb     loc_5D852D
0x5D83F6: push    esi
0x5D83F7: lea     ecx, [edx+0Ch]
0x5D83FA: call    EffectItemList_GetItemByIndex2
0x5D83FF: mov     ebp, eax
0x5D8401: cmp     ebp, ebx
0x5D8403: jz      loc_5D851D
0x5D8409: mov     eax, [edi+30h]
0x5D840C: push    ebx
0x5D840D: push    offset aAdded_effect_t; "added_effect_template"
0x5D8412: push    eax
0x5D8413: mov     ecx, edi
0x5D8415: call    Menu_CreateTileFromTemplate
0x5D841A: mov     esi, eax
0x5D841C: cmp     esi, ebx
0x5D841E: jz      loc_5D851D
0x5D8424: sub     esp, 8
0x5D8427: mov     ecx, esp
0x5D8429: mov     [esp+14Ch+a3], esp; a3
0x5D842D: push    ecx
0x5D842E: mov     ecx, ebp
0x5D8430: call    EffectItem_GetName
0x5D8435: mov     ecx, esi
0x5D8437: call    sub_58A020
0x5D843C: mov     eax, [ebp+1Ch]
0x5D843F: mov     eax, [eax+48h]
0x5D8442: cmp     eax, ebx
0x5D8444: jnz     short loc_5D844B
0x5D8446: mov     eax, offset EmptyString
0x5D844B: push    eax
0x5D844C: push    offset aIcons; "Icons"
0x5D8451: lea     edx, [esp+128h+var_F0]
0x5D8455: push    offset aSS_2; "%s\\%s"
0x5D845A: push    edx
0x5D845B: call    __sprintf
0x5D8460: fld     dword ptr ds:0A3D8F4h
0x5D8466: add     esp, 0Ch
0x5D8469: fstp    [esp+124h+a2]; a3
0x5D846C: push    0FA8h; a2
0x5D8471: mov     ecx, esi; this
0x5D8473: call    Tile_SetFloat
0x5D8478: fild    [esp+120h+var_100]
0x5D847C: push    ecx
0x5D847D: mov     ecx, esi; this
0x5D847F: fstp    [esp+124h+a2]; a3
0x5D8482: push    0FAEh; a2
0x5D8487: call    Tile_SetFloat
0x5D848C: add     [esp+120h+var_100], 1
0x5D8491: lea     eax, [esp+120h+var_F0]
0x5D8495: push    eax
0x5D8496: push    0FAFh
0x5D849B: mov     ecx, esi
0x5D849D: call    Tile_SetString
0x5D84A2: mov     eax, [edi+74h]
0x5D84A5: cmp     eax, ebx
0x5D84A7: jz      short loc_5D84AE
0x5D84A9: add     eax, 18h
0x5D84AC: jmp     short loc_5D84B0
0x5D84AE: xor     eax, eax
0x5D84B0: fld1
0x5D84B2: push    ecx
0x5D84B3: fstp    [esp+124h+a2]; float
0x5D84B6: lea     ecx, [esp+124h+var_FC]
0x5D84BA: push    eax; int
0x5D84BB: push    ecx; int
0x5D84BC: mov     ecx, ebp
0x5D84BE: call    EffectItem_GetDisplayText
0x5D84C3: mov     eax, [eax]
0x5D84C5: push    eax
0x5D84C6: push    0FB0h
0x5D84CB: mov     ecx, esi
0x5D84CD: mov     [esp+128h+arg_1C], ebx
0x5D84D4: call    Tile_SetString
0x5D84D9: mov     edx, [esp+120h+var_FC]
0x5D84DD: push    edx
0x5D84DE: mov     [esp+124h+arg_1C], 0FFFFFFFFh
0x5D84E9: call    FormHeapFree
0x5D84EE: fild    [esp+124h+var_10C]
0x5D84F2: mov     eax, [esp+124h+var_10C]
0x5D84F6: test    eax, eax
0x5D84F8: mov     [esp+124h+var_FC], ebx
0x5D84FC: mov     word ptr [esp+124h+var_F8+2], bx
0x5D8501: mov     word ptr [esp+124h+var_F8], bx
0x5D8506: jge     short loc_5D850E
0x5D8508: fadd    dword ptr ds:0A2FC78h
0x5D850E: fstp    [esp+124h+a2]; a3
0x5D8511: push    0FB1h; a2
0x5D8516: mov     ecx, esi; this
0x5D8518: call    Tile_SetFloat
0x5D851D: mov     esi, [esp+120h+var_10C]
0x5D8521: mov     edx, [esp+120h+var_104]
0x5D8525: add     esi, 1
0x5D8528: jmp     loc_5D83CF
0x5D852D: mov     ecx, [edi+74h]
0x5D8530: push    ebx
0x5D8531: push    3
0x5D8533: add     ecx, 24h ; '$'
0x5D8536: call    EffectItemList_GetStrongestItem
0x5D853B: cmp     eax, ebx
0x5D853D: jz      loc_5D85D0
0x5D8543: mov     eax, [edi+74h]
0x5D8546: mov     edx, [eax+24h]
0x5D8549: lea     ecx, [eax+24h]
0x5D854C: mov     eax, [edx]
0x5D854E: push    ebx; a3
0x5D854F: call    eax
0x5D8551: push    ecx
0x5D8552: fstp    [esp+14Ch+var_14C]; float
0x5D8555: call    Calc_MagickaMasteryLevel
0x5D855A: push    eax
0x5D855B: call    ActorValue_GetMasterySkill
0x5D8560: add     esp, 8
0x5D8563: test    eax, eax
0x5D8565: jle     short loc_5D85BD
0x5D8567: lea     ecx, [esp+148h+anonymous_4]
0x5D856B: push    ecx
0x5D856C: mov     ecx, [edi+74h]
0x5D856F: add     ecx, 24h ; '$'
0x5D8572: call    EffectItemList_SkillReqMsg
0x5D8577: mov     eax, [eax]
0x5D8579: mov     ecx, [edi+4]
0x5D857C: push    eax
0x5D857D: push    0FB1h
0x5D8582: mov     [esp+150h+var_8], 1
0x5D858D: call    Tile_SetString
0x5D8592: mov     edx, [esp+148h+anonymous_4]
0x5D8596: push    edx
0x5D8597: mov     [esp+14Ch+var_8], 0FFFFFFFFh
0x5D85A2: call    FormHeapFree
0x5D85A7: fld     dword ptr ds:0A379B4h
0x5D85AD: mov     [esp+14Ch+anonymous_4], ebx
0x5D85B1: mov     word ptr [esp+14Ch+var_130+2], bx
0x5D85B6: mov     word ptr [esp+14Ch+var_130], bx
0x5D85BB: jmp     short loc_5D85C0
0x5D85BD: fld1
0x5D85BF: push    ecx
0x5D85C0: mov     ecx, [edi+4]; this
0x5D85C3: fstp    [esp+14Ch+var_14C]; a3
0x5D85C6: push    0FB4h; a2
0x5D85CB: call    Tile_SetFloat
0x5D85D0: mov     eax, [edi+74h]
0x5D85D3: mov     edx, ds:0B333C4h
0x5D85D9: mov     esi, [edi+4]
0x5D85DC: lea     ecx, [eax+24h]
0x5D85DF: mov     eax, [ecx]
0x5D85E1: mov     eax, [eax]
0x5D85E3: push    edx; a3
0x5D85E4: call    eax
0x5D85E6: push    ecx
0x5D85E7: fstp    [esp+150h+var_150]; a3
0x5D85EA: push    0FB2h; a2
0x5D85EF: mov     ecx, esi; this
0x5D85F1: call    Tile_SetFloat
0x5D85F6: mov     esi, [edi+4]
0x5D85F9: mov     edi, [edi+74h]
0x5D85FC: mov     edx, [edi+24h]
0x5D85FF: mov     eax, ds:0B333C4h
0x5D8604: mov     edx, [edx]
0x5D8606: lea     ecx, [edi+24h]
0x5D8609: push    eax; a3
0x5D860A: call    edx
0x5D860C: fmul    dword ptr ds:0B37FE0h
0x5D8612: push    ecx
0x5D8613: mov     ecx, esi; this
0x5D8615: fstp    [esp+154h+anonymous_4]
0x5D8619: fld     [esp+154h+anonymous_4]
0x5D861D: fstp    [esp+154h+var_154]; a3
0x5D8620: push    0FB3h; a2
0x5D8625: call    Tile_SetFloat
0x5D862A: mov     ecx, [esp+150h+var_18]
0x5D8631: mov     large fs:0, ecx
0x5D8638: pop     ecx
0x5D8639: pop     edi
0x5D863A: pop     esi
0x5D863B: pop     ebp
0x5D863C: pop     ebx
0x5D863D: mov     ecx, [esp+13Ch+var_1C]
0x5D8644: xor     ecx, esp
0x5D8646: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D864B: add     esp, 130h
0x5D8651: retn
