0x6100B0: push    0FFFFFFFFh
0x6100B2: push    offset SEH_6100B0
0x6100B7: mov     eax, large fs:0
0x6100BD: push    eax
0x6100BE: sub     esp, 14Ch
0x6100C4: mov     eax, ds:0B30AACh
0x6100C9: xor     eax, esp
0x6100CB: mov     [esp+158h+var_10], eax
0x6100D2: push    ebx
0x6100D3: push    ebp
0x6100D4: push    esi
0x6100D5: push    edi
0x6100D6: mov     eax, ds:0B30AACh
0x6100DB: xor     eax, esp
0x6100DD: push    eax
0x6100DE: lea     eax, [esp+16Ch+var_C]
0x6100E5: mov     large fs:0, eax
0x6100EB: mov     eax, ds:0B333C4h
0x6100F0: mov     edi, [esp+16Ch+arg_0]
0x6100F7: mov     ebp, [esp+16Ch+arg_10]
0x6100FE: mov     esi, [esp+16Ch+arg_4]
0x610105: mov     ebx, ecx
0x610107: cmp     ebx, eax
0x610109: mov     [esp+16Ch+var_140], edi
0x61010D: mov     [esp+16Ch+var_148], ebp
0x610111: jnz     short loc_610122
0x610113: mov     ecx, [esp+16Ch+arg_8]
0x61011A: add     [eax+6C8h], ecx
0x610120: jmp     short loc_610137
0x610122: mov     edx, [ebx]
0x610124: mov     eax, [edx+284h]
0x61012A: push    1Fh
0x61012C: call    eax
0x61012E: cmp     eax, 64h ; 'd'
0x610131: jz      loc_610510
0x610137: push    0; int
0x610139: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x61013E: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x610143: push    0; int
0x610145: push    edi; void *
0x610146: call    OblivionDynamicCast
0x61014B: add     esp, 14h
0x61014E: test    ebp, ebp
0x610150: mov     [esp+16Ch+var_14C], ebp
0x610154: jnz     short loc_610165
0x610156: test    eax, eax
0x610158: jz      short loc_610165
0x61015A: mov     ecx, eax; this
0x61015C: call    TESObjectREFR_GetOwner
0x610161: mov     [esp+16Ch+var_14C], eax
0x610165: mov     ecx, ebx
0x610167: call    Actor__GetRaceIfNPC
0x61016C: test    byte ptr [eax+70h], 1
0x610170: jz      loc_610510
0x610176: push    30h ; '0'; Size
0x610178: call    FormHeapAlloc
0x61017D: add     esp, 4
0x610180: test    esi, esi
0x610182: mov     [esp+16Ch+var_154], eax
0x610186: jz      short loc_6101AE
0x610188: test    eax, eax
0x61018A: mov     [esp+16Ch+var_4], 0
0x610195: jz      short loc_6101D5
0x610197: mov     ecx, [esp+16Ch+arg_8]
0x61019E: push    ebp
0x61019F: push    ecx
0x6101A0: push    esi
0x6101A1: push    ebx
0x6101A2: push    edi
0x6101A3: push    0
0x6101A5: mov     ecx, eax
0x6101A7: call    sub_6070B0
0x6101AC: jmp     short loc_6101D7
0x6101AE: test    eax, eax
0x6101B0: mov     [esp+16Ch+var_4], 1
0x6101BB: jz      short loc_6101D5
0x6101BD: mov     edx, [esp+16Ch+arg_C]
0x6101C4: push    ebp
0x6101C5: push    edx
0x6101C6: push    0
0x6101C8: push    ebx
0x6101C9: push    edi
0x6101CA: push    0
0x6101CC: mov     ecx, eax
0x6101CE: call    sub_6070B0
0x6101D3: jmp     short loc_6101D7
0x6101D5: xor     eax, eax
0x6101D7: push    esi
0x6101D8: mov     edi, eax
0x6101DA: mov     [esp+170h+var_4], 0FFFFFFFFh
0x6101E5: call    TESWeightForm_GetWeightForForm_Fast
0x6101EA: fstp    [esp+170h+var_158]
0x6101EE: fld     dword ptr ds:0B36C98h
0x6101F4: mov     ecx, [ebx+58h]
0x6101F7: fmul    [esp+170h+var_158]
0x6101FB: mov     eax, [ecx]
0x6101FD: mov     edx, [eax+354h]
0x610203: fstp    [esp+170h+var_158]
0x610207: fld     [esp+170h+var_158]
0x61020B: fstp    [esp+170h+var_170]
0x61020E: call    edx
0x610210: push    edi
0x610211: mov     ecx, offset ActorProcessManager_ptr
0x610216: call    sub_67A290
0x61021B: test    eax, eax
0x61021D: mov     [esp+16Ch+var_150], eax
0x610221: mov     [esp+16Ch+var_158], eax
0x610225: jnz     short loc_61027A
0x610227: test    edi, edi
0x610229: jz      short loc_61023B
0x61022B: mov     ecx, edi
0x61022D: call    sub_605E80
0x610232: push    edi
0x610233: call    FormHeapFree
0x610238: add     esp, 4
0x61023B: test    esi, esi
0x61023D: jz      loc_6104F1
0x610243: mov     edx, [esi]
0x610245: mov     eax, [edx+0D0h]
0x61024B: mov     edi, ds:0B38EA8h
0x610251: mov     ecx, esi
0x610253: call    eax
0x610255: push    eax
0x610256: push    edi
0x610257: mov     ecx, ebx; this
0x610259: call    TESObjectREFR_GetName
0x61025E: push    eax
0x61025F: lea     ecx, [esp+178h+Format]
0x610263: push    offset aSSS_6; "%s %s %s"
0x610268: push    ecx
0x610269: call    __sprintf
0x61026E: add     esp, 14h
0x610271: jmp     loc_6104F6
0x610276: mov     eax, [esp+16Ch+var_150]
0x61027A: mov     esi, [eax]
0x61027C: test    esi, esi
0x61027E: jz      loc_61042E
0x610284: mov     ecx, [edi+8]
0x610287: cmp     esi, ecx
0x610289: mov     byte ptr [esp+16Ch+var_144], 0
0x61028E: jz      short loc_61029C
0x610290: push    1
0x610292: push    esi
0x610293: call    TESOBjectREFR_IsOwnedBy
0x610298: test    al, al
0x61029A: jz      short loc_6102A1
0x61029C: mov     byte ptr [esp+16Ch+var_144], 1
0x6102A1: mov     ecx, [esp+16Ch+var_140]
0x6102A5: call    sub_4DB760
0x6102AA: test    al, al
0x6102AC: jz      short loc_6102BD
0x6102AE: mov     ecx, esi
0x6102B0: call    sub_4DB760
0x6102B5: test    al, al
0x6102B7: jz      loc_61041B
0x6102BD: mov     eax, [esi]
0x6102BF: mov     edx, [eax+354h]
0x6102C5: mov     ecx, esi
0x6102C7: call    edx
0x6102C9: test    al, al
0x6102CB: jnz     loc_61041B
0x6102D1: mov     eax, [esp+16Ch+var_144]
0x6102D5: push    eax
0x6102D6: push    esi
0x6102D7: mov     ecx, edi
0x6102D9: call    sub_605F60
0x6102DE: mov     edx, [esi]
0x6102E0: mov     edx, [edx+374h]
0x6102E6: mov     [esp+16Ch+var_154], eax
0x6102EA: fild    [esp+16Ch+var_154]
0x6102EE: mov     eax, [edi+0Ch]
0x6102F1: push    ecx
0x6102F2: fstp    [esp+170h+var_154]
0x6102F6: mov     ecx, esi
0x6102F8: fld     [esp+170h+var_154]
0x6102FC: fstp    [esp+170h+var_170]
0x6102FF: push    eax
0x610300: call    edx
0x610302: mov     eax, [esi]
0x610304: mov     edx, [eax+224h]
0x61030A: push    esi
0x61030B: push    ebx
0x61030C: mov     ecx, esi
0x61030E: call    edx
0x610310: push    eax
0x610311: mov     ecx, edi
0x610313: call    sub_605E20
0x610318: test    al, al
0x61031A: jz      loc_6103A9
0x610320: mov     ecx, ebx
0x610322: call    sub_4DB760
0x610327: test    al, al
0x610329: jnz     short loc_610370
0x61032B: mov     eax, [esp+16Ch+var_14C]
0x61032F: mov     ds:0B361C4h, eax
0x610334: mov     ecx, [edi+0Ch]
0x610337: push    3
0x610339: push    2
0x61033B: mov     [esi+0E4h], ecx
0x610341: call    TESTopic__GEtTopic
0x610346: mov     ecx, [esi+58h]
0x610349: mov     edx, [ecx]
0x61034B: add     esp, 8
0x61034E: push    1
0x610350: push    0
0x610352: push    0
0x610354: push    eax
0x610355: mov     eax, [edx+1A4h]
0x61035B: push    esi
0x61035C: call    eax
0x61035E: push    ebx
0x61035F: mov     ecx, edi
0x610361: call    sub_605F00
0x610366: mov     dword ptr ds:0B361C4h, 0
0x610370: mov     ecx, [edi+0Ch]
0x610373: push    10000h
0x610378: lea     ebp, [esi+44h]
0x61037B: push    ebp
0x61037C: push    ecx
0x61037D: call    Script_AddEventToExtraScript
0x610382: mov     edx, [edi+8]
0x610385: push    400000h
0x61038A: push    ebp
0x61038B: push    edx
0x61038C: call    Script_AddEventToExtraScript
0x610391: mov     eax, [esi]
0x610393: mov     edx, [eax+310h]
0x610399: add     esp, 18h
0x61039C: push    0
0x61039E: push    1
0x6103A0: push    0
0x6103A2: push    edi
0x6103A3: mov     ecx, esi
0x6103A5: call    edx
0x6103A7: jmp     short loc_610417
0x6103A9: mov     eax, [esp+16Ch+var_14C]
0x6103AD: mov     ds:0B361C4h, eax
0x6103B2: mov     ecx, [edi+0Ch]
0x6103B5: push    0Eh
0x6103B7: push    2
0x6103B9: mov     [esi+0E4h], ecx
0x6103BF: call    TESTopic__GEtTopic
0x6103C4: mov     ebp, eax
0x6103C6: mov     eax, [edi+0Ch]
0x6103C9: add     esp, 8
0x6103CC: test    eax, eax
0x6103CE: jz      short loc_6103F8
0x6103D0: push    eax
0x6103D1: mov     ecx, esi
0x6103D3: call    sub_5EA050
0x6103D8: test    al, al
0x6103DA: jz      short loc_6103F8
0x6103DC: mov     edx, [esi]
0x6103DE: mov     eax, [edi+0Ch]
0x6103E1: mov     edx, [edx+32Ch]
0x6103E7: push    1
0x6103E9: push    0
0x6103EB: push    0
0x6103ED: push    0
0x6103EF: push    0
0x6103F1: push    eax
0x6103F2: mov     ecx, esi
0x6103F4: call    edx
0x6103F6: jmp     short loc_61040D
0x6103F8: mov     ecx, [esi+58h]
0x6103FB: mov     eax, [ecx]
0x6103FD: mov     edx, [eax+1A4h]
0x610403: push    1
0x610405: push    0
0x610407: push    0
0x610409: push    ebp
0x61040A: push    esi
0x61040B: call    edx
0x61040D: mov     dword ptr ds:0B361C4h, 0
0x610417: mov     ebp, [esp+16Ch+var_148]
0x61041B: mov     eax, [esp+16Ch+var_150]
0x61041F: mov     eax, [eax+4]
0x610422: test    eax, eax
0x610424: mov     [esp+16Ch+var_150], eax
0x610428: jnz     loc_610276
0x61042E: mov     ecx, [esp+16Ch+var_158]
0x610432: call    BSSimpleList_Clear
0x610437: mov     ecx, [esp+16Ch+var_158]
0x61043B: push    ecx
0x61043C: call    FormHeapFree
0x610441: add     esp, 4
0x610444: mov     ecx, edi
0x610446: call    sub_605F30
0x61044B: test    eax, eax
0x61044D: jnz     short loc_610469
0x61044F: test    edi, edi
0x610451: jz      loc_610503
0x610457: mov     ecx, edi
0x610459: call    sub_605E80
0x61045E: push    edi
0x61045F: call    FormHeapFree
0x610464: jmp     loc_610500
0x610469: push    edi
0x61046A: mov     ecx, offset ActorProcessManager_ptr
0x61046F: call    sub_675B30
0x610474: mov     edi, [edi+0Ch]
0x610477: push    0; int
0x610479: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x61047E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x610483: push    0; int
0x610485: push    ebp; void *
0x610486: call    OblivionDynamicCast
0x61048B: add     esp, 14h
0x61048E: cmp     edi, ds:0B333C4h
0x610494: jnz     short loc_610503
0x610496: test    eax, eax
0x610498: jnz     short loc_6104E5
0x61049A: push    eax; int
0x61049B: push    offset ??_R0?AVTESFaction@@@8; struct TypeDescriptor *
0x6104A0: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6104A5: push    eax; int
0x6104A6: push    ebp; void *
0x6104A7: call    OblivionDynamicCast
0x6104AC: mov     esi, eax
0x6104AE: add     esp, 14h
0x6104B1: test    esi, esi
0x6104B3: jz      short loc_610503
0x6104B5: mov     ecx, ds:0B333C4h; this
0x6104BB: push    1
0x6104BD: push    esi
0x6104BE: push    0; a2
0x6104C0: call    Actor_GetActorBaseForm
0x6104C5: mov     ecx, eax
0x6104C7: add     ecx, 24h ; '$'
0x6104CA: call    TESActorBaseData_GetFactionRank
0x6104CF: cmp     eax, 0FFFFFFFFh
0x6104D2: jz      short loc_610503
0x6104D4: mov     edx, [esi]
0x6104D6: mov     eax, [edx+40h]
0x6104D9: or      byte ptr [esi+34h], 10h
0x6104DD: push    4
0x6104DF: mov     ecx, esi
0x6104E1: call    eax
0x6104E3: jmp     short loc_610503
0x6104E5: push    2
0x6104E7: lea     ecx, [eax+24h]
0x6104EA: call    TESActorBaseData_SetSharedPlayerFactionFlags
0x6104EF: jmp     short loc_610503
0x6104F1: mov     [esp+16Ch+Format], 0
0x6104F6: lea     edx, [esp+16Ch+Format]
0x6104FA: push    edx; Format
0x6104FB: call    Interface_ConsolePrint
0x610500: add     esp, 4
0x610503: mov     eax, [esp+16Ch+var_150]
0x610507: push    eax
0x610508: call    FormHeapFree
0x61050D: add     esp, 4
0x610510: mov     ecx, dword ptr [esp+16Ch+var_C]
0x610517: mov     large fs:0, ecx
0x61051E: pop     ecx
0x61051F: pop     edi
0x610520: pop     esi
0x610521: pop     ebp
0x610522: pop     ebx
0x610523: mov     ecx, [esp+158h+var_10]
0x61052A: xor     ecx, esp
0x61052C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x610531: add     esp, 158h
0x610537: retn    14h
