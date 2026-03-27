0x64252F: add     eax, offset flt_B33E9C
0x642534: fstp    [esp+arg_14]
0x642538: fld     [esp+arg_14]
0x64253C: fstp    dword ptr [ebp+1B8h]
0x642542: call    GameSetting_GetSafeFloatPointer
0x642547: fld     [esp+arg_14]
0x64254B: fld     dword ptr [eax]
0x64254D: fcompp
0x64254F: fnstsw  ax
0x642551: test    ah, 41h
0x642554: jp      short loc_64258C
0x642556: mov     edx, [esi]
0x642558: mov     eax, [edx+340h]
0x64255E: push    edi
0x64255F: mov     ecx, esi
0x642561: call    eax
0x642563: mov     edx, [esi]
0x642565: mov     eax, [edx+334h]
0x64256B: push    1
0x64256D: mov     ecx, esi
0x64256F: call    eax
0x642571: test    al, al
0x642573: jnz     short loc_64258C
0x642575: mov     edx, [esi]
0x642577: mov     eax, [edx+31Ch]
0x64257D: push    edi
0x64257E: mov     ecx, esi
0x642580: call    eax
0x642582: jmp     short loc_64258C
0x642584: fldz
0x642586: fstp    dword ptr [ebp+1B8h]
0x64258C: cmp     [esp+0Ch+arg_30], 0
0x642591: jg      short loc_6425D3
0x642593: mov     ecx, ds:0B333C4h
0x642599: mov     edx, [ecx]
0x64259B: mov     eax, [edx+354h]
0x6425A1: call    eax
0x6425A3: test    al, al
0x6425A5: jz      loc_6426E6
0x6425AB: mov     edx, [ebx]
0x6425AD: mov     eax, [edx+284h]
0x6425B3: push    24h ; '$'
0x6425B5: mov     ecx, ebx
0x6425B7: call    eax
0x6425B9: mov     ecx, [esp+10h+arg_30]
0x6425BD: push    eax
0x6425BE: push    ecx
0x6425BF: call    sub_546700
0x6425C4: add     esp, 8
0x6425C7: test    al, al
0x6425C9: jz      loc_6426E6
0x6425CF: mov     ebp, [esp+10h+arg_10]
0x6425D3: mov     ecx, esi
0x6425D5: call    sub_5E0F30
0x6425DA: test    al, al
0x6425DC: jnz     loc_6426DA
0x6425E2: mov     ecx, esi
0x6425E4: call    sub_5E32D0
0x6425E9: test    al, al
0x6425EB: jz      loc_6426DA
0x6425F1: mov     ecx, [esi+58h]
0x6425F4: mov     edx, [ecx]
0x6425F6: mov     eax, [edx+1E8h]
0x6425FC: call    eax
0x6425FE: fcomp   dword ptr ds:0A2FAA8h
0x642604: fnstsw  ax
0x642606: test    ah, 5
0x642609: jp      loc_6426DA
0x64260F: mov     edx, [ebp+0]
0x642612: mov     eax, [edx+33Ch]
0x642618: push    0
0x64261A: mov     ecx, ebp
0x64261C: call    eax
0x64261E: test    eax, eax
0x642620: jnz     loc_6426DA
0x642626: push    3
0x642628: push    4
0x64262A: call    TESTopic__GEtTopic
0x64262F: add     esp, 8
0x642632: mov     ecx, esi
0x642634: mov     ebx, eax
0x642636: call    sub_5E6BA0
0x64263B: test    al, al
0x64263D: jnz     loc_6426E6
0x642643: push    0
0x642645: mov     ecx, esi
0x642647: call    sub_5E6CD0
0x64264C: test    al, al
0x64264E: jnz     loc_6426E6
0x642654: mov     edx, [esi]
0x642656: mov     eax, [edx+334h]
0x64265C: push    1
0x64265E: mov     ecx, esi
0x642660: call    eax
0x642662: test    al, al
0x642664: jnz     loc_6426E6
0x64266A: test    ebx, ebx
0x64266C: jz      loc_6426E6
0x642672: lea     ecx, [ebx+28h]
0x642675: test    ecx, ecx
0x642677: jz      short loc_6426E6
0x642679: call    BSSimpleList_IsEmpty
0x64267E: test    al, al
0x642680: jnz     short loc_6426E6
0x642682: mov     edi, [esp+18h+arg_8]
0x642686: mov     edx, [edi]
0x642688: mov     eax, ds:0B333C4h
0x64268D: mov     edx, [edx+484h]
0x642693: push    eax
0x642694: mov     ecx, edi
0x642696: call    edx
0x642698: mov     eax, ds:0B333C4h
0x64269D: push    1
0x64269F: push    0
0x6426A1: push    0
0x6426A3: mov     [esi+0E4h], eax
0x6426A9: mov     edx, [edi]
0x6426AB: mov     eax, [edx+1A4h]
0x6426B1: push    ebx
0x6426B2: push    esi
0x6426B3: mov     ecx, edi
0x6426B5: call    eax
0x6426B7: mov     ebx, [esi+58h]
0x6426BA: mov     edi, [ebx]
0x6426BC: mov     ecx, offset unk_B36928
0x6426C1: add     edi, 1C0h
0x6426C7: call    GameSetting_GetSafeFloatPointer
0x6426CC: fld     dword ptr [eax]
0x6426CE: mov     edx, [edi]
0x6426D0: push    ecx
0x6426D1: mov     ecx, ebx
0x6426D3: fstp    [esp+34h+var_34]
0x6426D6: call    edx
0x6426D8: jmp     short loc_6426E6
0x6426DA: mov     eax, [esi]
0x6426DC: mov     edx, [eax+1DCh]
0x6426E2: mov     ecx, esi
0x6426E4: call    edx
0x6426E6: push    0; a2
0x6426E8: mov     ecx, offset ActorProcessManager_ptr; this
0x6426ED: call    sub_673A50
0x6426F2: mov     ecx, eax; this
0x6426F4: call    sub_7616D0
0x6426F9: mov     ebx, [esp+34h+var_10]
0x6426FD: mov     dword ptr [ebx+1A4h], 0
0x642707: fld     dword ptr ds:0B36708h
0x64270D: mov     ecx, esi; this
0x64270F: fstp    [esp+34h+var_1C]
0x642713: mov     ebp, eax
0x642715: call    TESObjectREFR_GetParentCell
0x64271A: test    eax, eax
0x64271C: jz      short loc_642730
0x64271E: mov     ecx, esi; this
0x642720: call    TESObjectREFR_GetParentCell
0x642725: mov     ecx, eax; this
0x642727: call    TESObjectCELL_IsInterior
0x64272C: test    al, al
0x64272E: jnz     short loc_64273A
0x642730: fld     [esp+34h+var_1C]
0x642734: fadd    st, st
0x642736: fstp    [esp+34h+var_1C]
0x64273A: test    ebp, ebp
0x64273C: jz      loc_6427CF
0x642742: mov     edi, [ebp+0]
0x642745: test    edi, edi
0x642747: jz      loc_6427CF
0x64274D: cmp     dword ptr [ebx+1A4h], 0
0x642754: jnz     loc_6427CF
0x64275A: push    0
0x64275C: push    edi
0x64275D: mov     ecx, esi
0x64275F: call    TesObjectREF_GetDistance
0x642764: fld     [esp+34h+var_1C]
0x642768: fcompp
0x64276A: fnstsw  ax
0x64276C: test    ah, 1
0x64276F: jnz     short loc_642781
0x642771: lea     eax, [esp+34h+var_15]
0x642775: push    eax
0x642776: push    esi
0x642777: push    edi
0x642778: mov     ecx, ebx
0x64277A: call    sub_640900
0x64277F: jmp     short loc_6427C4
0x642781: mov     edx, [edi]
0x642783: mov     eax, [edx+190h]
0x642789: mov     ecx, edi
0x64278B: call    eax
0x64278D: test    al, al
0x64278F: jz      short loc_6427C4
0x642791: mov     edx, [ebx]
0x642793: mov     eax, [edx+3B0h]
0x642799: push    edi
0x64279A: mov     ecx, ebx
0x64279C: call    eax
0x64279E: test    eax, eax
0x6427A0: jnz     short loc_6427BB
0x6427A2: mov     eax, ds:0B372F0h
0x6427A7: mov     edx, [ebx]
0x6427A9: mov     edx, [edx+0A8h]
0x6427AF: push    eax
0x6427B0: push    0
0x6427B2: push    0
0x6427B4: push    edi
0x6427B5: mov     ecx, ebx
0x6427B7: call    edx
0x6427B9: jmp     short loc_6427C4
0x6427BB: mov     ecx, ds:0B372F0h
0x6427C1: mov     [eax+0Ch], ecx
0x6427C4: mov     ebp, [ebp+4]
0x6427C7: test    ebp, ebp
0x6427C9: jnz     loc_642742
0x6427CF: cmp     [esp+34h+var_15], 0
0x6427D4: jz      short loc_642820
0x6427D6: cmp     dword ptr ds:0B3B930h, 0
0x6427DD: jz      short loc_642820
0x6427DF: mov     ecx, esi
0x6427E1: call    sub_5E6BA0
0x6427E6: test    al, al
0x6427E8: jnz     short loc_642820
0x6427EA: mov     edx, [esi]
0x6427EC: mov     eax, [edx+334h]
0x6427F2: push    0
0x6427F4: mov     ecx, esi
0x6427F6: call    eax
0x6427F8: test    al, al
0x6427FA: jnz     short loc_642820
0x6427FC: mov     eax, [ebx+8]
0x6427FF: test    eax, eax
0x642801: jz      short loc_64280E
0x642803: mov     ecx, [eax+1Ch]
0x642806: shr     ecx, 16h
0x642809: test    cl, 1
0x64280C: jnz     short loc_642820
0x64280E: mov     edx, [esi]
0x642810: mov     eax, ds:0B3B930h
0x642815: mov     edx, [edx+314h]
0x64281B: push    eax
0x64281C: mov     ecx, esi
0x64281E: call    edx
0x642820: cmp     dword ptr [ebx+1A4h], 0
0x642827: setnz   al
0x64282A: mov     ecx, [esp+3Ch+arg_14C]
0x642831: mov     large fs:0, ecx
0x642838: pop     ecx
0x642839: pop     edi
0x64283A: pop     esi
0x64283B: pop     ebp
0x64283C: pop     ebx
0x64283D: mov     ecx, [esp+28h+arg_148]
0x642844: xor     ecx, esp
0x642846: call    @__security_check_cookie@4; __security_check_cookie(x)
0x64284B: add     esp, 184h
0x642851: retn    4
