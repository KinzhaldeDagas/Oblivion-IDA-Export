0x5DD4B0: sub     esp, 13Ch
0x5DD4B6: mov     eax, ds:0B30AACh
0x5DD4BB: xor     eax, esp
0x5DD4BD: mov     [esp+13Ch+var_4], eax
0x5DD4C4: push    ebx
0x5DD4C5: push    esi
0x5DD4C6: push    edi
0x5DD4C7: mov     edi, [esp+148h+arg_0]
0x5DD4CE: push    404h
0x5DD4D3: mov     [esp+14Ch+var_134], edi
0x5DD4D7: call    Menu_GetOpenMenuTile
0x5DD4DC: add     esp, 4
0x5DD4DF: test    eax, eax
0x5DD4E1: jz      short loc_5DD4ED
0x5DD4E3: mov     edx, [eax]
0x5DD4E5: mov     ecx, eax
0x5DD4E7: mov     eax, [edx]
0x5DD4E9: push    1; a3
0x5DD4EB: call    eax
0x5DD4ED: push    1; arg1
0x5DD4EF: push    0; canCreate
0x5DD4F1: call    InterfaceManager_GetSingleton
0x5DD4F6: add     esp, 8
0x5DD4F9: mov     esi, eax
0x5DD4FB: call    InterfaceManager_GetDepth
0x5DD500: fstp    [esp+148h+var_13C]
0x5DD504: mov     ecx, [esi+68h]; TileWindow *
0x5DD507: push    offset aDataMenusTrain; "Data\\Menus\\training_menu.xml"
0x5DD50C: call    Menu_LoadXML
0x5DD511: mov     ebx, eax
0x5DD513: mov     ecx, ebx
0x5DD515: call    Tile_GetParentMenu
0x5DD51A: mov     esi, eax
0x5DD51C: test    esi, esi
0x5DD51E: mov     [esp+148h+var_138], esi
0x5DD522: jz      loc_5DD93F
0x5DD528: mov     edx, [esi]
0x5DD52A: mov     eax, [edx+34h]
0x5DD52D: mov     ecx, esi
0x5DD52F: call    eax
0x5DD531: cmp     eax, 404h
0x5DD536: jnz     loc_5DD92F
0x5DD53C: push    0; int
0x5DD53E: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5DD543: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5DD548: push    0; int
0x5DD54A: push    ebx; void *
0x5DD54B: call    OblivionDynamicCast
0x5DD550: add     esp, 14h
0x5DD553: push    eax
0x5DD554: mov     ecx, esi
0x5DD556: call    Menu_SetTileMenu
0x5DD55B: push    0; int
0x5DD55D: push    offset ??_R0?AVTrainingMenu@@@8; struct TypeDescriptor *
0x5DD562: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5DD567: push    0; int
0x5DD569: push    esi; void *
0x5DD56A: call    OblivionDynamicCast
0x5DD56F: add     esp, 14h
0x5DD572: push    0FA5h
0x5DD577: mov     ecx, ebx
0x5DD579: mov     esi, eax
0x5DD57B: call    Tile_GetFloat
0x5DD580: fcomp   dword ptr ds:0A69770h
0x5DD586: fnstsw  ax
0x5DD588: test    ah, 44h
0x5DD58B: jnp     short loc_5DD5A6
0x5DD58D: push    0FA5h
0x5DD592: mov     ecx, ebx
0x5DD594: call    Tile_GetFloat
0x5DD599: fcomp   qword ptr ds:0A69778h
0x5DD59F: fnstsw  ax
0x5DD5A1: test    ah, 44h
0x5DD5A4: jp      short loc_5DD5BA
0x5DD5A6: fld     [esp+148h+var_13C]
0x5DD5AA: push    ecx
0x5DD5AB: fstp    [esp+14Ch+a3]; a3
0x5DD5AE: push    0FABh; a2
0x5DD5B3: mov     ecx, ebx; this
0x5DD5B5: call    Tile_SetFloat
0x5DD5BA: push    ebp
0x5DD5BB: push    0; a2
0x5DD5BD: mov     ecx, edi; this
0x5DD5BF: mov     [esi+54h], edi
0x5DD5C2: call    Actor_GetActorBaseForm
0x5DD5C7: mov     ecx, eax
0x5DD5C9: add     ecx, 68h ; 'h'
0x5DD5CC: call    TESAIForm_GetTrainingSkillAV
0x5DD5D1: push    eax
0x5DD5D2: push    2
0x5DD5D4: call    ActorValue_GetGroupOffsetFromAV
0x5DD5D9: mov     ecx, ds:0B33A98h
0x5DD5DF: add     esp, 8
0x5DD5E2: push    eax
0x5DD5E3: call    TESDataHandler_GetTESSkillByCode
0x5DD5E8: push    0; a2
0x5DD5EA: mov     ecx, edi; this
0x5DD5EC: mov     [esi+58h], eax
0x5DD5EF: call    Actor_GetActorBaseForm
0x5DD5F4: mov     ecx, eax
0x5DD5F6: add     ecx, 68h ; 'h'
0x5DD5F9: call    TESAIForm_GetTrainingLevel
0x5DD5FE: movzx   ecx, al
0x5DD601: mov     [esi+60h], ecx
0x5DD604: mov     edx, ds:0B333C4h
0x5DD60A: mov     ebp, [edx]
0x5DD60C: push    0; a2
0x5DD60E: mov     ecx, edi; this
0x5DD610: call    Actor_GetActorBaseForm
0x5DD615: mov     ecx, eax
0x5DD617: add     ecx, 68h ; 'h'
0x5DD61A: call    TESAIForm_GetTrainingSkillAV
0x5DD61F: mov     ecx, ds:0B333C4h
0x5DD625: push    eax; a3
0x5DD626: mov     eax, [ebp+288h]
0x5DD62C: call    eax
0x5DD62E: fmul    dword ptr ds:0B37748h
0x5DD634: call    Double_To_SInt32
0x5DD639: mov     [esi+5Ch], eax
0x5DD63C: mov     ecx, ds:0B333C4h
0x5DD642: call    sub_5E4420
0x5DD647: cmp     [esi+5Ch], eax
0x5DD64A: jle     short loc_5DD65F
0x5DD64C: fld1
0x5DD64E: push    ecx
0x5DD64F: mov     ecx, [esi+38h]; this
0x5DD652: fstp    [esp+14Ch+a3]; a3
0x5DD655: push    0FAFh; a2
0x5DD65A: call    Tile_SetFloat
0x5DD65F: mov     ecx, [esi+60h]
0x5DD662: push    ecx
0x5DD663: call    Calc_MasteryFromSkill
0x5DD668: push    eax
0x5DD669: call    ActorValue_GetMasteryName
0x5DD66E: mov     edx, ds:0B38D28h
0x5DD674: mov     ecx, ds:0B333C4h
0x5DD67A: mov     edi, ds:0B38D20h
0x5DD680: add     esp, 8
0x5DD683: mov     ebp, eax
0x5DD685: mov     [esp+148h+var_138], edx
0x5DD689: call    sub_5E4420
0x5DD68E: push    eax
0x5DD68F: mov     eax, [esp+14Ch+var_138]
0x5DD693: push    edi
0x5DD694: push    eax
0x5DD695: lea     ecx, [esp+154h+var_12C]
0x5DD699: push    offset aSSD_0; "%s %s: %d"
0x5DD69E: push    ecx
0x5DD69F: call    __sprintf
0x5DD6A4: mov     edx, ds:0B38D20h
0x5DD6AA: push    edx; unsigned __int8 *
0x5DD6AB: lea     eax, [esp+160h+var_12C]
0x5DD6AF: push    eax; unsigned __int8 *
0x5DD6B0: call    __mbsstr
0x5DD6B5: mov     edi, eax
0x5DD6B7: movsx   ecx, byte ptr [edi]
0x5DD6BA: push    ecx; C
0x5DD6BB: call    _toupper
0x5DD6C0: add     esp, 20h
0x5DD6C3: lea     edx, [esp+148h+var_12C]
0x5DD6C7: push    edx
0x5DD6C8: push    0FAEh
0x5DD6CD: mov     ecx, ebx
0x5DD6CF: mov     [edi], al
0x5DD6D1: call    Tile_SetString
0x5DD6D6: mov     eax, [esi+58h]
0x5DD6D9: mov     eax, [eax+2Ch]
0x5DD6DC: push    eax
0x5DD6DD: call    ActorValue_GetName
0x5DD6E2: push    eax
0x5DD6E3: lea     ecx, [esp+150h+var_12C]
0x5DD6E7: push    offset aS; "%s"
0x5DD6EC: push    ecx
0x5DD6ED: call    __sprintf
0x5DD6F2: mov     ecx, [esi+2Ch]
0x5DD6F5: add     esp, 10h
0x5DD6F8: lea     edx, [esp+148h+var_12C]
0x5DD6FC: push    edx
0x5DD6FD: push    0FDEh
0x5DD702: call    Tile_SetString
0x5DD707: mov     ecx, [esi+44h]
0x5DD70A: push    ebp
0x5DD70B: push    0FDEh
0x5DD710: call    sub_588C10
0x5DD715: push    eax
0x5DD716: lea     eax, [esp+150h+var_12C]
0x5DD71A: push    offset aSS; "%s %s"
0x5DD71F: push    eax
0x5DD720: call    __sprintf
0x5DD725: add     esp, 10h
0x5DD728: lea     ecx, [esp+148h+var_12C]
0x5DD72C: push    ecx
0x5DD72D: mov     ecx, [esi+44h]
0x5DD730: push    0FDEh
0x5DD735: call    Tile_SetString
0x5DD73A: mov     edx, [esi+5Ch]
0x5DD73D: mov     ecx, [esi+40h]
0x5DD740: push    edx
0x5DD741: push    0FDEh
0x5DD746: call    sub_588C10
0x5DD74B: push    eax
0x5DD74C: lea     eax, [esp+150h+var_12C]
0x5DD750: push    offset aSI_0; "%s %i"
0x5DD755: push    eax
0x5DD756: call    __sprintf
0x5DD75B: add     esp, 10h
0x5DD75E: lea     ecx, [esp+148h+var_12C]
0x5DD762: push    ecx
0x5DD763: mov     ecx, [esi+40h]
0x5DD766: push    0FDEh
0x5DD76B: call    Tile_SetString
0x5DD770: mov     edx, [esi+58h]
0x5DD773: mov     eax, [edx+2Ch]
0x5DD776: mov     ecx, ds:0B333C4h
0x5DD77C: push    eax
0x5DD77D: call    Actor_GetSkillMasteryLevel
0x5DD782: push    eax
0x5DD783: call    ActorValue_GetMasteryName
0x5DD788: mov     ecx, [esi+4Ch]
0x5DD78B: add     esp, 4
0x5DD78E: push    eax
0x5DD78F: push    0FDEh
0x5DD794: call    sub_588C10
0x5DD799: push    eax
0x5DD79A: lea     eax, [esp+150h+var_12C]
0x5DD79E: push    offset aSS; "%s %s"
0x5DD7A3: push    eax
0x5DD7A4: call    __sprintf
0x5DD7A9: add     esp, 10h
0x5DD7AC: lea     ecx, [esp+148h+var_12C]
0x5DD7B0: push    ecx
0x5DD7B1: mov     ecx, [esi+4Ch]
0x5DD7B4: push    0FDEh
0x5DD7B9: call    Tile_SetString
0x5DD7BE: mov     ecx, ds:0B37728h
0x5DD7C4: mov     edx, ds:0B333C4h
0x5DD7CA: mov     eax, [edx+5BCh]
0x5DD7D0: push    ecx
0x5DD7D1: mov     ecx, [esi+50h]
0x5DD7D4: push    eax
0x5DD7D5: push    0FDEh
0x5DD7DA: call    sub_588C10
0x5DD7DF: push    eax
0x5DD7E0: lea     edx, [esp+154h+var_12C]
0x5DD7E4: push    offset aSII_0; "%s %i/%i"
0x5DD7E9: push    edx
0x5DD7EA: call    __sprintf
0x5DD7EF: mov     ecx, [esi+50h]
0x5DD7F2: add     esp, 14h
0x5DD7F5: lea     eax, [esp+148h+var_12C]
0x5DD7F9: push    eax
0x5DD7FA: push    0FDEh
0x5DD7FF: call    Tile_SetString
0x5DD804: mov     ecx, [esi+58h]
0x5DD807: mov     edx, [ecx+18h]
0x5DD80A: mov     eax, [edx+10h]
0x5DD80D: add     ecx, 18h
0x5DD810: push    43534544h; a3
0x5DD815: push    0
0x5DD817: call    eax
0x5DD819: push    eax
0x5DD81A: lea     ecx, [esp+150h+var_130]
0x5DD81E: push    offset aS; "%s"
0x5DD823: push    ecx
0x5DD824: call    __sprintf
0x5DD829: mov     ecx, [esi+34h]
0x5DD82C: add     esp, 0Ch
0x5DD82F: lea     edx, [esp+14Ch+var_130]
0x5DD833: push    edx
0x5DD834: push    0FDEh
0x5DD839: call    Tile_SetString
0x5DD83E: mov     eax, [esi+58h]
0x5DD841: mov     eax, [eax+24h]
0x5DD844: test    eax, eax
0x5DD846: pop     ebp
0x5DD847: jnz     short loc_5DD84E
0x5DD849: mov     eax, offset EmptyString
0x5DD84E: mov     ecx, [esi+30h]
0x5DD851: push    eax
0x5DD852: push    0FE6h
0x5DD857: call    Tile_SetString
0x5DD85C: mov     edx, [esi+58h]
0x5DD85F: mov     eax, [edx+2Ch]
0x5DD862: mov     ecx, ds:0B333C4h
0x5DD868: mov     edx, [ecx]
0x5DD86A: push    eax; a3
0x5DD86B: mov     eax, [edx+284h]
0x5DD871: call    eax
0x5DD873: cmp     eax, [esi+60h]
0x5DD876: jl      short loc_5DD880
0x5DD878: mov     ecx, ds:0B38580h
0x5DD87E: jmp     short loc_5DD89A
0x5DD880: mov     edx, ds:0B333C4h
0x5DD886: mov     eax, [edx+5BCh]
0x5DD88C: cmp     eax, ds:0B37728h
0x5DD892: jl      short loc_5DD8D2
0x5DD894: mov     ecx, ds:0B38578h
0x5DD89A: push    ecx
0x5DD89B: mov     ecx, [esi+48h]
0x5DD89E: push    0FDEh
0x5DD8A3: call    Tile_SetString
0x5DD8A8: fld1
0x5DD8AA: push    ecx
0x5DD8AB: fstp    [esp+14Ch+a3]; a3
0x5DD8AE: mov     ecx, [esi+38h]; this
0x5DD8B1: push    0FA1h; a2
0x5DD8B6: call    Tile_SetFloat
0x5DD8BB: fld     dword ptr ds:0A379B4h
0x5DD8C1: push    ecx
0x5DD8C2: mov     ecx, [esi+48h]; this
0x5DD8C5: fstp    [esp+14Ch+a3]; a3
0x5DD8C8: push    0FA1h; a2
0x5DD8CD: call    Tile_SetFloat
0x5DD8D2: mov     ecx, [esp+148h+var_138]; int
0x5DD8D6: push    0; char
0x5DD8D8: call    EnableMenu
0x5DD8DD: mov     edx, ds:0B33398h
0x5DD8E3: mov     ecx, [edx+24h]
0x5DD8E6: call    sub_6AC3D0
0x5DD8EB: push    5
0x5DD8ED: push    5
0x5DD8EF: call    TESTopic__GEtTopic
0x5DD8F4: mov     esi, ds:0B333C4h
0x5DD8FA: mov     ecx, [esp+150h+var_134]
0x5DD8FE: mov     edx, [ecx]
0x5DD900: add     esp, 8
0x5DD903: push    0
0x5DD905: push    1
0x5DD907: push    1
0x5DD909: push    esi
0x5DD90A: push    eax
0x5DD90B: mov     eax, [edx+0DCh]
0x5DD911: call    eax
0x5DD913: fstp    st
0x5DD915: pop     edi
0x5DD916: pop     esi
0x5DD917: mov     eax, ebx
0x5DD919: pop     ebx
0x5DD91A: mov     ecx, [esp+13Ch+var_4]
0x5DD921: xor     ecx, esp
0x5DD923: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5DD928: add     esp, 13Ch
0x5DD92E: retn
0x5DD92F: cmp     dword ptr [esi+4], 0
0x5DD933: jz      short loc_5DD93F
0x5DD935: mov     edx, [esi]
0x5DD937: mov     eax, [edx]
0x5DD939: push    1
0x5DD93B: mov     ecx, esi
0x5DD93D: call    eax
0x5DD93F: mov     ecx, [esp+148h+var_4]
0x5DD946: pop     edi
0x5DD947: pop     esi
0x5DD948: pop     ebx
0x5DD949: xor     ecx, esp
0x5DD94B: xor     eax, eax
0x5DD94D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5DD952: add     esp, 13Ch
0x5DD958: retn
