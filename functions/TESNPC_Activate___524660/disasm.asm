0x524660: sub     esp, 214h
0x524666: mov     eax, ds:0B30AACh
0x52466B: xor     eax, esp
0x52466D: mov     [esp+214h+var_4], eax
0x524674: mov     eax, [esp+214h+arg_4]
0x52467B: push    ebx
0x52467C: mov     ebx, [esp+218h+arg_C]
0x524683: push    esi
0x524684: mov     esi, [esp+21Ch+arg_0]
0x52468B: push    edi
0x52468C: push    0; int
0x52468E: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x524693: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x524698: push    0; int
0x52469A: push    eax; void *
0x52469B: mov     [esp+234h+var_214], ecx
0x52469F: mov     [esp+234h+var_210], esi
0x5246A3: call    OblivionDynamicCast
0x5246A8: push    0; int
0x5246AA: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5246AF: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x5246B4: push    0; int
0x5246B6: push    esi; void *
0x5246B7: mov     edi, eax
0x5246B9: call    OblivionDynamicCast
0x5246BE: mov     esi, eax
0x5246C0: add     esp, 28h
0x5246C3: test    esi, esi
0x5246C5: jnz     short loc_5246CE
0x5246C7: xor     al, al
0x5246C9: jmp     loc_525361
0x5246CE: push    ebp
0x5246CF: mov     ebp, [esi+58h]
0x5246D2: test    ebp, ebp
0x5246D4: jz      loc_52535E
0x5246DA: mov     eax, [ebp+0]
0x5246DD: mov     edx, [eax+3D0h]
0x5246E3: mov     ecx, ebp
0x5246E5: call    edx
0x5246E7: test    eax, eax
0x5246E9: jz      short loc_524701
0x5246EB: mov     eax, [esi]
0x5246ED: mov     edx, [eax+198h]
0x5246F3: push    0
0x5246F5: mov     ecx, esi
0x5246F7: call    edx
0x5246F9: test    al, al
0x5246FB: jz      loc_52535E
0x524701: mov     eax, [ebp+0]
0x524704: mov     edx, [eax+47Ch]
0x52470A: mov     ecx, ebp
0x52470C: call    edx
0x52470E: test    eax, eax
0x524710: jnz     loc_52535E
0x524716: mov     ecx, [edi+58h]
0x524719: mov     eax, [ecx]
0x52471B: mov     edx, [eax+184h]
0x524721: call    edx
0x524723: mov     [esp+224h+var_20C], eax
0x524727: mov     eax, [ebp+0]
0x52472A: mov     edx, [eax+184h]
0x524730: mov     ecx, ebp
0x524732: call    edx
0x524734: mov     [esp+224h+var_208], eax
0x524738: mov     eax, ds:0B333C4h
0x52473D: cmp     esi, eax
0x52473F: jnz     short loc_5247BF
0x524741: cmp     byte ptr [eax+12Ch], 0
0x524748: jnz     short loc_524776
0x52474A: mov     eax, [eax+58h]
0x52474D: mov     edx, [eax]
0x52474F: mov     ecx, eax
0x524751: mov     eax, [edx+184h]
0x524757: call    eax
0x524759: test    eax, eax
0x52475B: jz      short loc_5247BF
0x52475D: mov     ecx, ds:0B333C4h
0x524763: mov     ecx, [ecx+58h]
0x524766: mov     edx, [ecx]
0x524768: mov     eax, [edx+184h]
0x52476E: call    eax
0x524770: cmp     byte ptr [eax+20h], 16h
0x524774: jnz     short loc_5247BF
0x524776: mov     ecx, esi; this
0x524778: call    sub_5E6C60
0x52477D: test    al, al
0x52477F: jz      loc_52535E
0x524785: mov     ecx, esi
0x524787: call    sub_5E6BA0
0x52478C: test    al, al
0x52478E: jz      loc_52535E
0x524794: mov     esi, [ebp+0]
0x524797: mov     ecx, offset TimeGlobals
0x52479C: call    TimeGlobals_GetGameHour
0x5247A1: fsub    qword ptr ds:0A2F928h
0x5247A7: mov     edx, [esi+1Ch]
0x5247AA: push    ecx
0x5247AB: fstp    [esp+228h+var_214]
0x5247AF: mov     ecx, ebp
0x5247B1: fld     [esp+228h+var_214]
0x5247B5: fstp    [esp+228h+duration]
0x5247B8: call    edx
0x5247BA: jmp     loc_52535E
0x5247BF: mov     eax, [esi]
0x5247C1: mov     edx, [eax+198h]
0x5247C7: push    0
0x5247C9: mov     ecx, esi
0x5247CB: call    edx
0x5247CD: test    al, al
0x5247CF: jz      short loc_5247DD
0x5247D1: mov     ecx, esi; this
0x5247D3: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x5247D8: cmp     eax, 6
0x5247DB: jnz     short loc_524846
0x5247DD: mov     ecx, esi; this
0x5247DF: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x5247E4: cmp     eax, 3
0x5247E7: jz      loc_52531D
0x5247ED: mov     ecx, esi; this
0x5247EF: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x5247F4: cmp     eax, 6
0x5247F7: jz      loc_52531D
0x5247FD: push    0
0x5247FF: mov     ecx, esi
0x524801: call    sub_5E6CD0
0x524806: test    al, al
0x524808: jz      short loc_524846
0x52480A: mov     eax, [esi]
0x52480C: mov     edx, [eax+330h]
0x524812: mov     ecx, esi
0x524814: call    edx
0x524816: test    eax, eax
0x524818: jz      short loc_52483B
0x52481A: mov     ecx, ds:0B333C4h
0x524820: push    ecx
0x524821: mov     ecx, eax
0x524823: call    sub_613670
0x524828: test    al, al
0x52482A: jz      short loc_52483B
0x52482C: mov     ecx, ds:0B333C4h
0x524832: call    Actor_IsBlocking
0x524837: test    al, al
0x524839: jz      short loc_524846
0x52483B: mov     edx, ds:0B38B20h
0x524841: jmp     loc_525323
0x524846: mov     ecx, ds:0B333C4h
0x52484C: cmp     esi, ecx
0x52484E: jnz     short loc_52485B
0x524850: call    sub_65D660
0x524855: mov     ecx, ds:0B333C4h
0x52485B: cmp     edi, ecx
0x52485D: jz      short loc_524872
0x52485F: mov     ecx, [edi+58h]
0x524862: test    ecx, ecx
0x524864: jz      short loc_524872
0x524866: mov     edx, [ecx]
0x524868: mov     eax, [edx+394h]
0x52486E: push    1
0x524870: call    eax
0x524872: mov     edx, [esi]
0x524874: mov     eax, [edx+198h]
0x52487A: push    0
0x52487C: mov     ecx, esi
0x52487E: call    eax
0x524880: test    al, al
0x524882: jnz     loc_524965
0x524888: mov     ecx, esi
0x52488A: call    sub_5E0F30
0x52488F: test    al, al
0x524891: jz      loc_524965
0x524897: cmp     edi, ds:0B333C4h
0x52489D: jnz     loc_524965
0x5248A3: mov     ecx, edi
0x5248A5: call    sub_5E04C0
0x5248AA: test    al, al
0x5248AC: jz      loc_524965
0x5248B2: cmp     dword ptr ds:0B362CCh, 1
0x5248B9: jz      loc_524965
0x5248BF: mov     ecx, esi
0x5248C1: call    sub_5E04C0
0x5248C6: test    al, al
0x5248C8: jnz     loc_524965
0x5248CE: cmp     dword ptr ds:0B362CCh, 2
0x5248D5: jnz     short loc_52491F
0x5248D7: mov     edx, [ebp+0]
0x5248DA: mov     eax, [edx+37Ch]
0x5248E0: mov     ebx, [edi]
0x5248E2: mov     ecx, ebp
0x5248E4: call    eax
0x5248E6: mov     edx, [ebp+0]
0x5248E9: push    eax
0x5248EA: mov     eax, [edx+380h]
0x5248F0: mov     ecx, ebp
0x5248F2: call    eax
0x5248F4: mov     edx, [ebp+0]
0x5248F7: push    eax
0x5248F8: mov     eax, [edx+378h]
0x5248FE: mov     ecx, ebp
0x524900: call    eax
0x524902: mov     edx, [ebx+300h]
0x524908: push    eax
0x524909: push    esi
0x52490A: mov     ecx, edi
0x52490C: call    edx
0x52490E: mov     dword ptr ds:0B362CCh, 0
0x524918: mov     al, 1
0x52491A: jmp     loc_525360
0x52491F: mov     ecx, ds:0B333C4h
0x524925: mov     ds:0B362D0h, esi
0x52492B: call    Actor_IsSneaking
0x524930: mov     ecx, ds:0B394B0h
0x524936: mov     edx, ds:0B394A8h
0x52493C: test    al, al
0x52493E: mov     eax, ds:0B38D70h
0x524943: push    0
0x524945: jnz     short loc_52494C
0x524947: mov     eax, ds:0B394B8h
0x52494C: push    eax
0x52494D: push    ecx
0x52494E: push    1
0x524950: push    offset sub_521B60
0x524955: push    edx
0x524956: call    ShowUIMessageBox
0x52495B: add     esp, 18h
0x52495E: mov     al, 1
0x524960: jmp     loc_525360
0x524965: mov     eax, [esi]
0x524967: mov     edx, [eax+334h]
0x52496D: push    1
0x52496F: mov     ecx, esi
0x524971: mov     dword ptr ds:0B362CCh, 0
0x52497B: call    edx
0x52497D: test    al, al
0x52497F: jz      short loc_524995
0x524981: mov     eax, [esi]
0x524983: mov     edx, [eax+19Ch]
0x524989: mov     ecx, esi
0x52498B: call    edx
0x52498D: test    al, al
0x52498F: jz      loc_5251AB
0x524995: cmp     edi, ds:0B333C4h
0x52499B: jnz     short loc_5249D3
0x52499D: mov     eax, [esi]
0x52499F: mov     edx, [eax+18Ch]
0x5249A5: mov     ecx, esi
0x5249A7: call    edx
0x5249A9: test    eax, eax
0x5249AB: jz      short loc_5249D3
0x5249AD: mov     eax, [esi]
0x5249AF: mov     edx, [eax+18Ch]
0x5249B5: mov     ecx, esi
0x5249B7: call    edx
0x5249B9: cmp     eax, 9
0x5249BC: jz      short loc_5249D3
0x5249BE: mov     eax, [esi]
0x5249C0: mov     edx, [eax+18Ch]
0x5249C6: mov     ecx, esi
0x5249C8: call    edx
0x5249CA: cmp     eax, 4
0x5249CD: jnz     loc_5251AB
0x5249D3: mov     ecx, esi; this
0x5249D5: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x5249DA: cmp     eax, 4
0x5249DD: jz      loc_52535E
0x5249E3: mov     eax, [esi]
0x5249E5: mov     edx, [eax+198h]
0x5249EB: push    0
0x5249ED: mov     ecx, esi
0x5249EF: call    edx
0x5249F1: test    al, al
0x5249F3: jnz     loc_52513B
0x5249F9: mov     ecx, esi; this
0x5249FB: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x524A00: cmp     eax, 5
0x524A03: jz      loc_524B12
0x524A09: mov     eax, [esi]
0x524A0B: mov     edx, [eax+1A0h]
0x524A11: mov     ecx, esi
0x524A13: call    edx
0x524A15: test    al, al
0x524A17: jnz     loc_524B12
0x524A1D: cmp     edi, ds:0B333C4h
0x524A23: jz      short loc_524A94
0x524A25: push    64h ; 'd'; responsibility
0x524A27: push    0; a7
0x524A29: push    0; a6
0x524A2B: push    0; a5
0x524A2D: push    0
0x524A2F: push    esi
0x524A30: mov     ecx, edi
0x524A32: call    TesObjectREF_GetDistance
0x524A37: mov     eax, [edi]
0x524A39: mov     edx, [eax+284h]
0x524A3F: push    ecx
0x524A40: fstp    [esp+238h+var_238]
0x524A43: push    21h ; '!'
0x524A45: mov     ecx, edi
0x524A47: call    edx
0x524A49: push    eax; distanceToTarget
0x524A4A: mov     eax, [edi]
0x524A4C: mov     edx, [eax+224h]
0x524A52: push    0; aggressionStat
0x524A54: push    esi; friendlyFight?
0x524A55: mov     ecx, edi
0x524A57: call    edx
0x524A59: push    eax; disposition
0x524A5A: call    shouldActorFight
0x524A5F: add     esp, 20h
0x524A62: test    eax, eax
0x524A64: jle     short loc_524A94
0x524A66: mov     ecx, [edi+58h]
0x524A69: mov     eax, [ecx]
0x524A6B: mov     edx, [eax+228h]
0x524A71: push    1
0x524A73: push    0
0x524A75: push    0
0x524A77: push    0
0x524A79: push    1
0x524A7B: push    0
0x524A7D: push    0
0x524A7F: push    1
0x524A81: push    esi
0x524A82: push    edi
0x524A83: call    edx
0x524A85: test    al, al
0x524A87: jz      loc_524B12
0x524A8D: mov     al, 1
0x524A8F: jmp     loc_525360
0x524A94: mov     ecx, esi; this
0x524A96: call    sub_5E6C60
0x524A9B: test    al, al
0x524A9D: jnz     short loc_524B12
0x524A9F: push    64h ; 'd'; responsibility
0x524AA1: push    0; a7
0x524AA3: push    0; a6
0x524AA5: push    0; a5
0x524AA7: push    0
0x524AA9: push    edi
0x524AAA: mov     ecx, esi
0x524AAC: call    TesObjectREF_GetDistance
0x524AB1: mov     eax, [esi]
0x524AB3: mov     edx, [eax+284h]
0x524AB9: push    ecx
0x524ABA: fstp    [esp+238h+var_238]
0x524ABD: push    21h ; '!'
0x524ABF: mov     ecx, esi
0x524AC1: call    edx
0x524AC3: push    eax; distanceToTarget
0x524AC4: mov     eax, [esi]
0x524AC6: mov     edx, [eax+224h]
0x524ACC: push    0; aggressionStat
0x524ACE: push    edi; friendlyFight?
0x524ACF: mov     ecx, esi
0x524AD1: call    edx
0x524AD3: push    eax; disposition
0x524AD4: call    shouldActorFight
0x524AD9: add     esp, 20h
0x524ADC: test    eax, eax
0x524ADE: jle     short loc_524B12
0x524AE0: mov     ecx, edi
0x524AE2: call    Actor_IsSneaking
0x524AE7: test    al, al
0x524AE9: jnz     short loc_524B12
0x524AEB: mov     ecx, [esi+58h]
0x524AEE: mov     eax, [ecx]
0x524AF0: mov     edx, [eax+228h]
0x524AF6: push    1
0x524AF8: push    0
0x524AFA: push    0
0x524AFC: push    0
0x524AFE: push    1
0x524B00: push    0
0x524B02: push    0
0x524B04: push    1
0x524B06: push    edi
0x524B07: push    esi
0x524B08: call    edx
0x524B0A: test    al, al
0x524B0C: jnz     loc_524E9C
0x524B12: mov     eax, ds:0B333C4h
0x524B17: cmp     edi, eax
0x524B19: jz      loc_524DE5
0x524B1F: cmp     esi, eax
0x524B21: jnz     short loc_524B5B
0x524B23: mov     ecx, edi
0x524B25: call    sub_5E0380
0x524B2A: mov     ecx, eax
0x524B2C: call    sub_567770
0x524B31: test    al, al
0x524B33: jnz     loc_524DD9
0x524B39: mov     ecx, edi
0x524B3B: call    sub_5E0380
0x524B40: cmp     byte ptr [eax+20h], 0
0x524B44: jz      loc_524DD9
0x524B4A: mov     ecx, edi
0x524B4C: call    sub_5E0380
0x524B51: cmp     byte ptr [eax+20h], 9
0x524B55: jz      loc_524DD9
0x524B5B: test    ebx, ebx
0x524B5D: jz      short loc_524BB4
0x524B5F: push    0; int
0x524B61: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x524B66: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x524B6B: push    0; int
0x524B6D: push    ebx; void *
0x524B6E: call    OblivionDynamicCast
0x524B73: add     esp, 14h
0x524B76: test    eax, eax
0x524B78: jnz     short loc_524BB4
0x524B7A: mov     ebp, [esp+224h+arg_10]
0x524B81: mov     eax, [esi]
0x524B83: mov     edx, [eax+100h]
0x524B89: push    0
0x524B8B: push    1
0x524B8D: push    0
0x524B8F: push    0
0x524B91: push    edi
0x524B92: push    0
0x524B94: push    1
0x524B96: push    ebp
0x524B97: push    0
0x524B99: push    ebx
0x524B9A: mov     ecx, esi
0x524B9C: call    edx
0x524B9E: mov     eax, [edi]
0x524BA0: mov     edx, [eax+23Ch]
0x524BA6: push    ebp
0x524BA7: push    ebx
0x524BA8: push    esi
0x524BA9: mov     ecx, edi
0x524BAB: call    edx
0x524BAD: mov     al, 1
0x524BAF: jmp     loc_525360
0x524BB4: mov     ecx, edi
0x524BB6: call    sub_5E0380
0x524BBB: mov     ebx, 2
0x524BC0: cmp     [eax+20h], bl
0x524BC3: jnz     short loc_524BDB
0x524BC5: mov     ecx, [edi+58h]
0x524BC8: mov     eax, [ecx]
0x524BCA: mov     edx, [eax+188h]
0x524BD0: push    ebx
0x524BD1: push    edi
0x524BD2: call    edx
0x524BD4: mov     al, 1
0x524BD6: jmp     loc_525360
0x524BDB: mov     ecx, edi
0x524BDD: call    sub_5E0380
0x524BE2: test    eax, eax
0x524BE4: jz      short loc_524C03
0x524BE6: mov     ecx, edi
0x524BE8: call    sub_5E0380
0x524BED: cmp     byte ptr [eax+20h], 1
0x524BF1: jz      short loc_524C03
0x524BF3: mov     ecx, [edi+58h]
0x524BF6: mov     eax, [ecx]
0x524BF8: mov     edx, [eax+188h]
0x524BFE: push    1
0x524C00: push    edi
0x524C01: call    edx
0x524C03: cmp     esi, ds:0B333C4h
0x524C09: jz      loc_524E9C
0x524C0F: cmp     esi, edi
0x524C11: jz      short loc_524C47
0x524C13: mov     ecx, esi
0x524C15: call    sub_5E0380
0x524C1A: test    eax, eax
0x524C1C: jz      short loc_524C47
0x524C1E: mov     ecx, esi
0x524C20: call    sub_5E0380
0x524C25: cmp     byte ptr [eax+20h], 1
0x524C29: jz      short loc_524C47
0x524C2B: mov     ecx, esi
0x524C2D: call    sub_5E0380
0x524C32: cmp     [eax+20h], bl
0x524C35: jz      short loc_524C47
0x524C37: mov     eax, [ebp+0]
0x524C3A: mov     edx, [eax+188h]
0x524C40: push    1
0x524C42: push    esi
0x524C43: mov     ecx, ebp
0x524C45: call    edx
0x524C47: mov     eax, [esi]
0x524C49: mov     edx, [eax+174h]
0x524C4F: mov     ecx, esi
0x524C51: call    edx
0x524C53: mov     edx, [edi]
0x524C55: push    eax
0x524C56: lea     eax, [esp+224h+var_200]
0x524C5A: push    eax
0x524C5B: mov     eax, [edx+174h]
0x524C61: mov     ecx, edi
0x524C63: call    eax
0x524C65: mov     ecx, eax
0x524C67: call    sub_4121A0
0x524C6C: lea     ecx, [esp+220h+var_200]
0x524C70: push    ecx
0x524C71: call    sub_683CB0
0x524C76: fstp    [esp+224h+var_210]
0x524C7A: add     esp, 4
0x524C7D: cmp     esi, edi
0x524C7F: jz      short loc_524CA4
0x524C81: mov     edx, [esi]
0x524C83: mov     eax, [edx+18Ch]
0x524C89: mov     ecx, esi
0x524C8B: call    eax
0x524C8D: test    eax, eax
0x524C8F: jnz     short loc_524CA4
0x524C91: fld     [esp+220h+var_210]
0x524C95: push    1; char
0x524C97: push    ecx
0x524C98: fstp    [esp+228h+duration]; float
0x524C9B: push    esi; Concurrency::details::SchedulerBase *
0x524C9C: call    sub_685530
0x524CA1: add     esp, 0Ch
0x524CA4: mov     ecx, edi
0x524CA6: call    sub_5E6B40
0x524CAB: test    al, al
0x524CAD: jnz     loc_524DC2
0x524CB3: mov     ecx, edi; this
0x524CB5: call    Actor_IsNPC
0x524CBA: test    al, al
0x524CBC: jz      loc_524DC2
0x524CC2: mov     ecx, esi; this
0x524CC4: call    Actor_IsNPC
0x524CC9: test    al, al
0x524CCB: jz      loc_524DC2
0x524CD1: mov     eax, [esp+220h+var_208]
0x524CD5: lea     ecx, [eax+2Ch]
0x524CD8: test    ecx, ecx
0x524CDA: jz      short loc_524CE5
0x524CDC: cmp     dword ptr [eax+30h], 0
0x524CE0: jnz     short loc_524CE5
0x524CE2: push    ebx
0x524CE3: jmp     short loc_524CE7
0x524CE5: push    1
0x524CE7: mov     ecx, [edi+58h]
0x524CEA: mov     edx, [ecx]
0x524CEC: mov     eax, [edx+188h]
0x524CF2: push    edi
0x524CF3: call    eax
0x524CF5: mov     edx, [edi]
0x524CF7: mov     eax, [edx+2F4h]
0x524CFD: push    0
0x524CFF: push    0
0x524D01: push    esi
0x524D02: mov     ecx, edi
0x524D04: call    eax
0x524D06: test    al, al
0x524D08: jz      loc_524E9C
0x524D0E: mov     ecx, [edi+58h]
0x524D11: mov     edx, [ecx]
0x524D13: mov     eax, [edx+188h]
0x524D19: push    ebx
0x524D1A: push    edi
0x524D1B: call    eax
0x524D1D: cmp     edi, esi
0x524D1F: jz      loc_524DAC
0x524D25: mov     ecx, [ebp+8]
0x524D28: test    ecx, ecx
0x524D2A: jz      short loc_524D6F
0x524D2C: call    sub_5660A0
0x524D31: test    al, al
0x524D33: jnz     short loc_524D6F
0x524D35: mov     edx, [ebp+0]
0x524D38: mov     eax, [edx+390h]
0x524D3E: mov     ecx, ebp
0x524D40: call    eax
0x524D42: mov     edx, [ebp+0]
0x524D45: mov     ecx, ebp
0x524D47: push    eax
0x524D48: mov     eax, [edx+0C0h]
0x524D4E: call    eax
0x524D50: mov     edx, [ebp+0]
0x524D53: mov     ecx, ebp
0x524D55: push    eax
0x524D56: mov     eax, [edx+0CCh]
0x524D5C: call    eax
0x524D5E: mov     ecx, [ebp+4]
0x524D61: mov     edx, [ebp+8]
0x524D64: push    eax
0x524D65: push    ecx
0x524D66: push    edx
0x524D67: lea     ecx, [esi+44h]
0x524D6A: call    sub_4268B0
0x524D6F: mov     eax, [ebp+0]
0x524D72: mov     edx, [eax+178h]
0x524D78: push    0
0x524D7A: mov     ecx, ebp
0x524D7C: call    edx
0x524D7E: mov     ecx, [esi+58h]
0x524D81: mov     eax, [ecx]
0x524D83: mov     edx, [eax+49Ch]
0x524D89: call    edx
0x524D8B: push    1; a4
0x524D8D: push    0; a3
0x524D8F: mov     ecx, edi
0x524D91: call    sub_5E0380
0x524D96: push    eax; a2
0x524D97: mov     ecx, esi; this
0x524D99: call    Actor_AddPackage?
0x524D9E: mov     eax, [esi]
0x524DA0: mov     edx, [eax+17Ch]
0x524DA6: push    0
0x524DA8: mov     ecx, esi
0x524DAA: call    edx
0x524DAC: mov     eax, [ebp+0]
0x524DAF: mov     edx, [eax+188h]
0x524DB5: push    ebx
0x524DB6: push    esi
0x524DB7: mov     ecx, ebp
0x524DB9: call    edx
0x524DBB: mov     al, 1
0x524DBD: jmp     loc_525360
0x524DC2: mov     ecx, [edi+58h]
0x524DC5: mov     eax, [ecx]
0x524DC7: mov     edx, [eax+188h]
0x524DCD: push    1
0x524DCF: push    edi
0x524DD0: call    edx
0x524DD2: mov     al, 1
0x524DD4: jmp     loc_525360
0x524DD9: cmp     edi, ds:0B333C4h
0x524DDF: jnz     loc_524EA3
0x524DE5: mov     eax, [esi]
0x524DE7: mov     edx, [eax+19Ch]
0x524DED: mov     ecx, esi
0x524DEF: call    edx
0x524DF1: test    al, al
0x524DF3: jz      short loc_524E00
0x524DF5: mov     ecx, esi
0x524DF7: call    Actor__IsEssential
0x524DFC: test    al, al
0x524DFE: jz      short loc_524E13
0x524E00: mov     ecx, ds:0B333C4h
0x524E06: call    Actor_IsSneaking
0x524E0B: test    al, al
0x524E0D: jz      loc_524EA3
0x524E13: mov     ecx, esi; this
0x524E15: call    Actor_IsGhost
0x524E1A: test    al, al
0x524E1C: jnz     loc_524EA3
0x524E22: call    InterfaceManager_IsMenuMode
0x524E27: test    al, al
0x524E29: jnz     short loc_524EA3
0x524E2B: mov     eax, [esi]
0x524E2D: mov     edx, [eax+19Ch]
0x524E33: mov     ecx, esi
0x524E35: call    edx
0x524E37: test    al, al
0x524E39: jnz     short loc_524E89
0x524E3B: mov     ecx, [esi+58h]
0x524E3E: mov     eax, [ecx]
0x524E40: mov     edx, [eax+0ACh]
0x524E46: call    edx
0x524E48: test    al, al
0x524E4A: jz      short loc_524E89
0x524E4C: mov     eax, ds:0B38B28h
0x524E51: push    eax
0x524E52: mov     ecx, esi; this
0x524E54: call    TESObjectREFR_GetName
0x524E59: push    eax
0x524E5A: lea     ecx, [esp+22Ch+var_130]
0x524E61: push    offset aSS; "%s %s"
0x524E66: push    ecx
0x524E67: call    __sprintf
0x524E6C: fld     dword ptr ds:0A30634h
0x524E72: add     esp, 0Ch
0x524E75: fstp    [esp+228h+duration]
0x524E78: push    1
0x524E7A: push    0
0x524E7C: lea     edx, [esp+230h+var_130]
0x524E83: push    edx
0x524E84: jmp     loc_525356
0x524E89: push    1
0x524E8B: push    0
0x524E8D: mov     eax, [esp+22Ch+var_210]
0x524E91: push    0
0x524E93: push    eax
0x524E94: call    sub_57A8D0
0x524E99: add     esp, 10h
0x524E9C: mov     al, 1
0x524E9E: jmp     loc_525360
0x524EA3: mov     ecx, edi; this
0x524EA5: call    Actor_IsNPC
0x524EAA: test    al, al
0x524EAC: jnz     short loc_524ED8
0x524EAE: mov     ecx, [edi+58h]
0x524EB1: test    ecx, ecx
0x524EB3: jz      short loc_524ED1
0x524EB5: mov     edx, [ecx]
0x524EB7: mov     eax, [edx+228h]
0x524EBD: push    1
0x524EBF: push    0
0x524EC1: push    0
0x524EC3: push    0
0x524EC5: push    1
0x524EC7: push    0
0x524EC9: push    0
0x524ECB: push    0
0x524ECD: push    esi
0x524ECE: push    edi
0x524ECF: call    eax
0x524ED1: mov     al, 1
0x524ED3: jmp     loc_525360
0x524ED8: mov     edx, [esi]
0x524EDA: mov     eax, [edx+18Ch]
0x524EE0: mov     ecx, esi
0x524EE2: call    eax
0x524EE4: test    eax, eax
0x524EE6: jnz     short loc_524F31
0x524EE8: mov     edx, [esi]
0x524EEA: mov     eax, [edx+174h]
0x524EF0: mov     ecx, esi
0x524EF2: call    eax
0x524EF4: mov     edx, [edi]
0x524EF6: push    eax
0x524EF7: mov     eax, [edx+174h]
0x524EFD: lea     ecx, [esp+228h+var_204]
0x524F01: push    ecx
0x524F02: mov     ecx, edi
0x524F04: call    eax
0x524F06: mov     ecx, eax
0x524F08: call    sub_4121A0
0x524F0D: lea     ecx, [esp+224h+var_204]
0x524F11: push    ecx
0x524F12: call    sub_683CB0
0x524F17: fstp    [esp+228h+var_214]
0x524F1B: fld     [esp+228h+var_214]
0x524F1F: add     esp, 4
0x524F22: push    1; char
0x524F24: push    ecx
0x524F25: fstp    [esp+22Ch+var_22C]; float
0x524F28: push    esi; Concurrency::details::SchedulerBase *
0x524F29: call    sub_685530
0x524F2E: add     esp, 0Ch
0x524F31: xor     ebx, ebx
0x524F33: cmp     edi, ds:0B333C4h
0x524F39: jnz     loc_52505B
0x524F3F: mov     ecx, edi
0x524F41: call    sub_5F8460
0x524F46: mov     ecx, esi
0x524F48: call    sub_5F8460
0x524F4D: mov     ecx, esi
0x524F4F: call    sub_5EAE10
0x524F54: cmp     eax, ds:0B333C4h
0x524F5A: jnz     short loc_524F8A
0x524F5C: mov     eax, [esp+224h+var_208]
0x524F60: test    eax, eax
0x524F62: jz      short loc_524F8A
0x524F64: cmp     [eax+20h], bl
0x524F67: jnz     short loc_524F8A
0x524F69: lea     edx, [eax+2Ch]
0x524F6C: test    edx, edx
0x524F6E: jz      short loc_524F7A
0x524F70: cmp     [eax+30h], ebx
0x524F73: jnz     short loc_524F7A
0x524F75: push    2
0x524F77: push    edi
0x524F78: jmp     short loc_524F7D
0x524F7A: push    1
0x524F7C: push    esi
0x524F7D: mov     eax, [ebp+0]
0x524F80: mov     edx, [eax+188h]
0x524F86: mov     ecx, ebp
0x524F88: call    edx
0x524F8A: mov     eax, ds:0B33398h
0x524F8F: mov     ecx, [eax+24h]
0x524F92: call    sub_6AC3D0
0x524F97: mov     ecx, ds:0B33398h
0x524F9D: mov     ecx, [ecx+24h]
0x524FA0: push    0
0x524FA2: push    0
0x524FA4: call    sub_6AE860
0x524FA9: mov     edx, [esi]
0x524FAB: mov     eax, [edx+234h]
0x524FB1: push    1
0x524FB3: mov     ecx, esi
0x524FB5: call    eax
0x524FB7: lea     ecx, [esi+5Ch]
0x524FBA: call    MagicCaster_InitializeCasting???
0x524FBF: mov     ecx, esi
0x524FC1: call    sub_5F01B0
0x524FC6: mov     ecx, edi
0x524FC8: call    sub_5F01B0
0x524FCD: mov     ecx, ds:0B333C4h
0x524FD3: mov     edx, [ecx]
0x524FD5: mov     eax, [edx+250h]
0x524FDB: call    eax
0x524FDD: fcomp   dword ptr ds:0A2FAA8h
0x524FE3: fnstsw  ax
0x524FE5: test    ah, 41h
0x524FE8: jnz     short loc_524FFC
0x524FEA: mov     ecx, esi; this
0x524FEC: call    sub_5E6C60
0x524FF1: test    al, al
0x524FF3: jz      short loc_524FFC
0x524FF5: mov     byte ptr ds:0B3BB18h, 1
0x524FFC: mov     edx, [ebp+0]
0x524FFF: mov     eax, [edx+36Ch]
0x525005: mov     ecx, ebp
0x525007: call    eax
0x525009: cmp     eax, 9
0x52500C: push    0
0x52500E: jz      short loc_525030
0x525010: push    esi
0x525011: call    sub_57AB00
0x525016: mov     ecx, [esp+228h+var_20C]
0x52501A: mov     eax, [ecx]
0x52501C: mov     edx, [eax+98h]
0x525022: add     esp, 8
0x525025: push    1
0x525027: call    edx
0x525029: mov     al, 1
0x52502B: jmp     loc_525360
0x525030: mov     edx, [esi]
0x525032: mov     eax, ds:0B333C4h
0x525037: mov     edx, [edx+2F4h]
0x52503D: push    0
0x52503F: push    eax
0x525040: mov     ecx, esi
0x525042: call    edx
0x525044: mov     ecx, [esp+224h+var_210]
0x525048: mov     eax, [ecx]
0x52504A: mov     edx, [eax+98h]
0x525050: push    1
0x525052: call    edx
0x525054: mov     al, 1
0x525056: jmp     loc_525360
0x52505B: call    GetOpenedMenuCode
0x525060: cmp     eax, 3F1h
0x525065: jz      loc_524E9C
0x52506B: mov     ecx, [esi+58h]
0x52506E: mov     eax, [ecx]
0x525070: mov     edx, [eax+2E0h]
0x525076: push    esi
0x525077: call    edx
0x525079: test    al, al
0x52507B: jz      loc_52535E
0x525081: mov     eax, ds:0B33398h
0x525086: mov     ecx, [eax+24h]
0x525089: call    sub_6AC3D0
0x52508E: mov     ecx, ds:0B33398h
0x525094: mov     ecx, [ecx+24h]
0x525097: push    0
0x525099: push    0
0x52509B: call    sub_6AE860
0x5250A0: mov     ecx, edi
0x5250A2: call    sub_5F8460
0x5250A7: mov     ecx, esi
0x5250A9: call    sub_5F8460
0x5250AE: push    0; int
0x5250B0: push    offset ??_R0?AVDialoguePackage@@@8; struct TypeDescriptor *
0x5250B5: push    offset ??_R0?AVTESPackage@@@8; struct _s_RTTICompleteObjectLocator *
0x5250BA: push    0; int
0x5250BC: mov     ecx, edi
0x5250BE: call    sub_5E0380
0x5250C3: push    eax; void *
0x5250C4: call    OblivionDynamicCast
0x5250C9: add     esp, 14h
0x5250CC: test    eax, eax
0x5250CE: jz      short loc_5250D3
0x5250D0: mov     ebx, [eax+40h]
0x5250D3: mov     eax, [esp+224h+var_20C]
0x5250D7: lea     edx, [eax+2Ch]
0x5250DA: test    edx, edx
0x5250DC: jz      short loc_5250E8
0x5250DE: cmp     dword ptr [eax+30h], 0
0x5250E2: jnz     short loc_5250E8
0x5250E4: push    2
0x5250E6: jmp     short loc_5250EA
0x5250E8: push    1
0x5250EA: mov     ecx, [edi+58h]
0x5250ED: mov     eax, [ecx]
0x5250EF: mov     edx, [eax+188h]
0x5250F5: push    edi
0x5250F6: call    edx
0x5250F8: mov     eax, [edi]
0x5250FA: mov     edx, [eax+234h]
0x525100: push    1
0x525102: mov     ecx, edi
0x525104: call    edx
0x525106: lea     ecx, [esi+5Ch]
0x525109: call    MagicCaster_InitializeCasting???
0x52510E: mov     ecx, esi
0x525110: call    sub_5F01B0
0x525115: mov     ecx, edi
0x525117: call    sub_5F01B0
0x52511C: push    ebx
0x52511D: push    edi
0x52511E: call    sub_57AB00
0x525123: mov     eax, [edi]
0x525125: mov     edx, [eax+98h]
0x52512B: add     esp, 8
0x52512E: push    1
0x525130: mov     ecx, edi
0x525132: call    edx
0x525134: mov     al, 1
0x525136: jmp     loc_525360
0x52513B: cmp     edi, ds:0B333C4h
0x525141: jnz     short loc_52514C
0x525143: push    0
0x525145: push    1
0x525147: jmp     loc_524E8D
0x52514C: test    ebx, ebx
0x52514E: jz      short loc_525197
0x525150: push    0; int
0x525152: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x525157: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x52515C: push    0; int
0x52515E: push    ebx; void *
0x52515F: call    OblivionDynamicCast
0x525164: add     esp, 14h
0x525167: test    eax, eax
0x525169: jnz     loc_524E9C
0x52516F: mov     ecx, [esp+224h+var_210]
0x525173: mov     edx, [ecx]
0x525175: mov     edx, [edx+100h]
0x52517B: push    eax
0x52517C: push    1
0x52517E: push    eax
0x52517F: push    eax
0x525180: push    edi
0x525181: push    eax
0x525182: push    eax
0x525183: mov     eax, [esp+240h+arg_10]
0x52518A: push    eax
0x52518B: push    0
0x52518D: push    ebx
0x52518E: call    edx
0x525190: mov     al, 1
0x525192: jmp     loc_525360
0x525197: mov     eax, [edi]
0x525199: mov     edx, [eax+2F8h]
0x52519F: push    esi
0x5251A0: mov     ecx, edi
0x5251A2: call    edx
0x5251A4: mov     al, 1
0x5251A6: jmp     loc_525360
0x5251AB: mov     eax, [esi]
0x5251AD: mov     edx, [eax+330h]
0x5251B3: mov     ecx, esi
0x5251B5: call    edx
0x5251B7: test    eax, eax
0x5251B9: jz      loc_524E9C
0x5251BF: cmp     edi, ds:0B333C4h
0x5251C5: jnz     loc_524E9C
0x5251CB: mov     eax, [esi]
0x5251CD: mov     edx, [eax+330h]
0x5251D3: mov     ecx, esi
0x5251D5: call    edx
0x5251D7: cmp     dword ptr [eax+70h], 0Bh
0x5251DB: jnz     short loc_525221
0x5251DD: mov     eax, [esp+224h+var_214]
0x5251E1: mov     eax, [eax+0A4h]
0x5251E7: test    eax, eax
0x5251E9: mov     ecx, ds:0B372F8h
0x5251EF: jnz     short loc_5251F6
0x5251F1: mov     eax, offset EmptyString
0x5251F6: push    ecx
0x5251F7: push    eax
0x5251F8: lea     ecx, [esp+22Ch+string]
0x5251FC: push    offset aSS; "%s %s"
0x525201: push    ecx
0x525202: call    __sprintf
0x525207: fld     dword ptr ds:0A30634h
0x52520D: add     esp, 0Ch
0x525210: fstp    [esp+228h+duration]
0x525213: push    1
0x525215: push    0
0x525217: lea     edx, [esp+230h+string]
0x52521B: push    edx
0x52521C: jmp     loc_525356
0x525221: mov     eax, [esi]
0x525223: mov     edx, [eax+330h]
0x525229: push    edi
0x52522A: mov     ecx, esi
0x52522C: call    edx
0x52522E: mov     ecx, eax
0x525230: call    sub_613670
0x525235: test    al, al
0x525237: jz      loc_524E9C
0x52523D: mov     eax, ds:0B33398h
0x525242: mov     ecx, [eax+20h]; this
0x525245: push    0; a3
0x525247: push    6; a2
0x525249: call    InputGlobals__QueryControlState
0x52524E: test    eax, eax
0x525250: jz      loc_524E9C
0x525256: mov     edx, [esi]
0x525258: mov     eax, [edx+370h]
0x52525E: push    edi
0x52525F: mov     ecx, esi
0x525261: call    eax
0x525263: test    al, al
0x525265: jz      short loc_5252CF
0x525267: cmp     byte ptr ds:0B3B908h, 0
0x52526E: jz      short loc_525285
0x525270: mov     ecx, esi; this
0x525272: call    TESObjectREFR_GetName
0x525277: push    eax
0x525278: push    offset a_20sAcceptsThe; "%.20s accepts the player's request to y"...
0x52527D: call    Interface_ConsolePrint
0x525282: add     esp, 8
0x525285: mov     edx, [esi]
0x525287: mov     eax, [edx+36Ch]
0x52528D: push    edi
0x52528E: mov     ecx, esi
0x525290: call    eax
0x525292: mov     ecx, esi; this
0x525294: call    sub_5E6C60
0x525299: test    al, al
0x52529B: jz      short loc_5252C7
0x52529D: mov     edx, [edi]
0x52529F: mov     eax, [edx+250h]
0x5252A5: mov     ecx, edi
0x5252A7: call    eax
0x5252A9: fcomp   dword ptr ds:0A2FAA8h
0x5252AF: fnstsw  ax
0x5252B1: test    ah, 41h
0x5252B4: jnz     short loc_5252C7
0x5252B6: mov     edx, [esi]
0x5252B8: mov     eax, [edx+2F4h]
0x5252BE: push    0
0x5252C0: push    0
0x5252C2: push    edi
0x5252C3: mov     ecx, esi
0x5252C5: call    eax
0x5252C7: mov     ecx, ds:0B38DD0h
0x5252CD: jmp     short loc_5252F3
0x5252CF: cmp     byte ptr ds:0B3B908h, 0
0x5252D6: jz      short loc_5252ED
0x5252D8: mov     ecx, esi; this
0x5252DA: call    TESObjectREFR_GetName
0x5252DF: push    eax
0x5252E0: push    offset a_20sRejectsThe; "%.20s rejects the player's request to y"...
0x5252E5: call    Interface_ConsolePrint
0x5252EA: add     esp, 8
0x5252ED: mov     ecx, ds:0B38DD8h
0x5252F3: mov     edx, [esp+224h+var_214]
0x5252F7: mov     eax, [edx+0A4h]
0x5252FD: test    eax, eax
0x5252FF: jnz     short loc_525306
0x525301: mov     eax, offset EmptyString
0x525306: push    ecx
0x525307: push    eax
0x525308: lea     eax, [esp+22Ch+string]
0x52530C: push    offset aSS; "%s %s"
0x525311: push    eax
0x525312: call    __sprintf
0x525317: lea     ecx, [esp+234h+string]
0x52531B: jmp     short loc_525345
0x52531D: mov     edx, ds:0B38B18h
0x525323: push    edx
0x525324: mov     ecx, esi; this
0x525326: call    TESObjectREFR_GetName
0x52532B: push    eax
0x52532C: lea     eax, [esp+22Ch+var_130]
0x525333: push    offset aSS; "%s %s"
0x525338: push    eax
0x525339: call    __sprintf
0x52533E: lea     ecx, [esp+234h+var_130]
0x525345: fld     dword ptr ds:0A30634h
0x52534B: add     esp, 0Ch
0x52534E: fstp    [esp+228h+duration]; duration
0x525351: push    1; unk2
0x525353: push    0; unk1
0x525355: push    ecx; string
0x525356: call    GameUI_QueueMessage
0x52535B: add     esp, 10h
0x52535E: xor     al, al
0x525360: pop     ebp
0x525361: mov     ecx, [esp+220h+var_4]
0x525368: pop     edi
0x525369: pop     esi
0x52536A: pop     ebx
0x52536B: xor     ecx, esp
0x52536D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x525372: add     esp, 214h
0x525378: retn    14h
