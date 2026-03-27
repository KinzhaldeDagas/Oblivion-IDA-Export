0x6545E0: sub     esp, 2Ch
0x6545E3: push    ebp
0x6545E4: push    esi
0x6545E5: mov     esi, [esp+34h+a6]
0x6545E9: mov     eax, [esi]
0x6545EB: mov     edx, [eax+164h]
0x6545F1: push    edi
0x6545F2: mov     edi, ecx
0x6545F4: mov     ecx, esi
0x6545F6: call    edx
0x6545F8: mov     ecx, ds:0B333C4h; this
0x6545FE: cmp     esi, ecx
0x654600: mov     ebp, eax
0x654602: jnz     short loc_654613
0x654604: push    1; a2
0x654606: call    Player_GetAnimData
0x65460B: cmp     ebp, eax
0x65460D: jz      loc_654C4E
0x654613: mov     eax, [esi]
0x654615: mov     edx, [eax+198h]
0x65461B: push    0
0x65461D: mov     ecx, esi
0x65461F: call    edx
0x654621: test    al, al
0x654623: jz      short loc_654641
0x654625: mov     ecx, esi; this
0x654627: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x65462C: cmp     eax, 6
0x65462F: jz      short loc_654641
0x654631: mov     byte ptr [edi+11Ch], 0
0x654638: pop     edi
0x654639: pop     esi
0x65463A: pop     ebp
0x65463B: add     esp, 2Ch
0x65463E: retn    4
0x654641: push    ebx
0x654642: mov     ecx, esi
0x654644: call    sub_5E0A60
0x654649: fcomp   dword ptr ds:0A2FAA8h
0x65464F: mov     bl, 4
0x654651: fnstsw  ax
0x654653: test    ah, 5
0x654656: jnp     short loc_654678
0x654658: mov     eax, [esi]
0x65465A: mov     edx, [eax+1A0h]
0x654660: mov     ecx, esi
0x654662: call    edx
0x654664: test    al, al
0x654666: jnz     short loc_654678
0x654668: mov     ecx, esi; this
0x65466A: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x65466F: cmp     eax, 6
0x654672: jnz     loc_6547E9
0x654678: mov     al, [edi+11Ch]
0x65467E: test    al, al
0x654680: jnz     loc_6547D1
0x654686: mov     eax, [edi]
0x654688: mov     edx, [eax+36Ch]
0x65468E: mov     ecx, edi
0x654690: call    edx
0x654692: test    eax, eax
0x654694: jz      short loc_6546B4
0x654696: mov     eax, [esi]
0x654698: mov     edx, [eax+380h]
0x65469E: mov     ecx, esi
0x6546A0: call    edx
0x6546A2: test    eax, eax
0x6546A4: mov     ecx, esi
0x6546A6: jz      short loc_6546AF
0x6546A8: call    sub_5F0410
0x6546AD: jmp     short loc_6546B4
0x6546AF: call    sub_5E4140
0x6546B4: lea     ecx, [esi+5Ch]
0x6546B7: call    MagicCaster_InitializeCasting???
0x6546BC: mov     eax, [esi]
0x6546BE: mov     edx, [eax+1A0h]
0x6546C4: mov     ecx, esi
0x6546C6: call    edx
0x6546C8: test    al, al
0x6546CA: push    0; a4
0x6546CC: push    1; a3
0x6546CE: jz      short loc_654717
0x6546D0: mov     byte ptr [edi+11Ch], 3
0x6546D7: mov     eax, [esi+3Ch]
0x6546DA: push    1; a2
0x6546DC: push    eax; a1
0x6546DD: call    sub_88D070
0x6546E2: mov     ecx, [esi+3Ch]
0x6546E5: push    1
0x6546E7: push    ecx
0x6546E8: call    sub_8A5580
0x6546ED: fldz
0x6546EF: add     esp, 14h
0x6546F2: fstp    [esp+44h+var_44]; float
0x6546F5: push    5; int
0x6546F7: mov     ecx, ebp
0x6546F9: call    sub_470FC0
0x6546FE: mov     ecx, ebp
0x654700: call    sub_4728C0
0x654705: mov     edx, [edi]
0x654707: mov     eax, [edx+194h]
0x65470D: push    esi
0x65470E: mov     ecx, edi
0x654710: call    eax
0x654712: jmp     loc_6547E9
0x654717: push    esi
0x654718: lea     ecx, [esp+4Ch+var_2C+4]
0x65471C: push    ecx
0x65471D: mov     ecx, ebp
0x65471F: mov     [edi+11Ch], bl
0x654725: call    sub_4723A0
0x65472A: fld     dword ptr [esp+40h+var_2C+4]
0x65472E: fchs
0x654730: push    0; int
0x654732: fstp    [esp+44h+var_1C]
0x654736: fld     [esp+44h+anonymous_0]
0x65473A: fchs
0x65473C: fstp    [esp+44h+var_18]
0x654740: fld     [esp+44h+var_20]
0x654744: fchs
0x654746: fstp    [esp+44h+var_14]
0x65474A: fld     dword ptr ds:0B33E9Ch
0x654750: fmul    qword ptr ds:0A3F3D0h
0x654756: fstp    dword ptr [esp+44h]
0x65475A: fld     dword ptr [esp+44h]
0x65475E: fld1
0x654760: fdivrp  st(1), st
0x654762: fstp    dword ptr [esp+44h]
0x654766: fld     dword ptr [esp+44h]
0x65476A: fld     st
0x65476C: fmul    [esp+44h+var_1C]
0x654770: fstp    [esp+44h+var_10]
0x654774: mov     edx, [esp+44h+var_10]
0x654778: fld     [esp+44h+var_18]
0x65477C: mov     dword ptr [esp+44h+var_2C+4], edx
0x654780: fmul    st, st(1)
0x654782: lea     edx, [esp+44h+var_2C+4]
0x654786: fstp    [esp+44h+var_C]
0x65478A: mov     eax, [esp+44h+var_C]
0x65478E: mov     [esp+44h+anonymous_0], eax
0x654792: fmul    [esp+44h+var_14]
0x654796: mov     eax, [esi+3Ch]
0x654799: fstp    [esp+44h+var_8]
0x65479D: mov     ecx, [esp+44h+var_8]
0x6547A1: fldz
0x6547A3: push    ecx
0x6547A4: fstp    [esp+48h+var_48]; float
0x6547A7: mov     [esp+48h+var_20], ecx
0x6547AB: push    0; int
0x6547AD: push    edx; int
0x6547AE: push    eax; int
0x6547AF: call    sub_8AB440
0x6547B4: mov     ecx, [esi+3Ch]
0x6547B7: push    0
0x6547B9: push    ecx
0x6547BA: call    sub_8A5580
0x6547BF: push    40h ; '@'
0x6547C1: lea     edx, [esi+44h]
0x6547C4: push    edx
0x6547C5: push    0
0x6547C7: call    Script_AddEventToExtraScript
0x6547CC: add     esp, 28h
0x6547CF: jmp     short loc_6547E9
0x6547D1: cmp     al, 2
0x6547D3: jz      short loc_6547D9
0x6547D5: cmp     al, 1
0x6547D7: jnz     short loc_6547E9
0x6547D9: push    40h ; '@'
0x6547DB: lea     eax, [esi+44h]
0x6547DE: push    eax
0x6547DF: push    0
0x6547E1: call    Script_AddEventToExtraScript
0x6547E6: add     esp, 0Ch
0x6547E9: movsx   eax, byte ptr [edi+11Ch]
0x6547F0: add     eax, 0FFFFFFFFh; switch 6 cases
0x6547F3: cmp     eax, 5
0x6547F6: ja      def_6547FC
0x6547FC: jmp     ds:jpt_6547FC[eax*4]; switch jump
0x654803: mov     eax, [ebp+8]; jumptable 006547FC cases 2,4
0x654806: test    eax, eax
0x654808: jz      short loc_654824
0x65480A: push    eax
0x65480B: call    sub_88FA30
0x654810: fcomp   dword ptr ds:0A2FAA8h
0x654816: add     esp, 4
0x654819: fnstsw  ax
0x65481B: test    ah, 41h
0x65481E: jp      def_6547FC
0x654824: mov     ecx, esi
0x654826: call    sub_5EF930
0x65482B: cmp     [edi+11Ch], bl
0x654831: setz    cl
0x654834: lea     ecx, [ecx+ecx+1]
0x654838: mov     [edi+11Ch], cl
0x65483E: mov     ecx, esi
0x654840: call    sub_5E12B0
0x654845: test    eax, eax
0x654847: jz      short loc_654859
0x654849: mov     edx, [eax]
0x65484B: push    0
0x65484D: mov     ecx, eax
0x65484F: mov     eax, [edx+9Ch]
0x654855: push    1
0x654857: call    eax
0x654859: fldz
0x65485B: push    ecx
0x65485C: fstp    [esp+50h+var_50]; float
0x65485F: mov     ecx, ebp
0x654861: push    5; int
0x654863: call    sub_470FC0
0x654868: mov     ecx, ebp
0x65486A: call    sub_4728C0
0x65486F: mov     edx, [edi]
0x654871: mov     eax, [edx+194h]
0x654877: push    esi
0x654878: mov     ecx, edi
0x65487A: call    eax
0x65487C: pop     ebx
0x65487D: pop     edi
0x65487E: pop     esi
0x65487F: pop     ebp
0x654880: add     esp, 2Ch
0x654883: retn    4
0x654886: mov     ecx, esi; jumptable 006547FC case 3
0x654888: call    sub_5E0A60
0x65488D: fcomp   dword ptr ds:0A2FAA8h
0x654893: fnstsw  ax
0x654895: test    ah, 1
0x654898: jnz     short loc_654902
0x65489A: mov     edx, [esi]
0x65489C: mov     eax, [edx+1A0h]
0x6548A2: mov     ecx, esi
0x6548A4: call    eax
0x6548A6: test    al, al
0x6548A8: jnz     short loc_654902
0x6548AA: mov     ecx, esi; this
0x6548AC: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x6548B1: cmp     eax, 6
0x6548B4: jz      short loc_654902
0x6548B6: mov     ecx, ds:0B362C0h
0x6548BC: push    0
0x6548BE: push    esi
0x6548BF: call    sub_521450
0x6548C4: test    eax, eax
0x6548C6: jz      loc_654A5B
0x6548CC: push    5
0x6548CE: push    eax
0x6548CF: mov     ecx, ebp
0x6548D1: call    sub_475300
0x6548D6: mov     ecx, esi
0x6548D8: call    sub_5E12B0
0x6548DD: test    eax, eax
0x6548DF: jz      short loc_6548F1
0x6548E1: mov     edx, [eax]
0x6548E3: push    0
0x6548E5: mov     ecx, eax
0x6548E7: mov     eax, [edx+9Ch]
0x6548ED: push    0
0x6548EF: call    eax
0x6548F1: pop     ebx
0x6548F2: mov     byte ptr [edi+11Ch], 5
0x6548F9: pop     edi
0x6548FA: pop     esi
0x6548FB: pop     ebp
0x6548FC: add     esp, 2Ch
0x6548FF: retn    4
0x654902: mov     ecx, esi; this
0x654904: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x654909: pop     ebx
0x65490A: pop     edi
0x65490B: pop     esi
0x65490C: pop     ebp
0x65490D: add     esp, 2Ch
0x654910: retn    4
0x654913: mov     edx, [edi]; jumptable 006547FC case 1
0x654915: mov     eax, [edx+28h]
0x654918: mov     ecx, edi
0x65491A: call    eax
0x65491C: fstp    [esp+44h+var_34]
0x654920: mov     ecx, offset TimeGlobals
0x654925: call    TimeGlobals_GetGameHour
0x65492A: fstp    [esp+44h+var_4]
0x65492E: fld     [esp+44h+var_4]
0x654932: fld     [esp+44h+var_34]
0x654936: fcom    st(1)
0x654938: fnstsw  ax
0x65493A: test    ah, 41h
0x65493D: jnz     short loc_654949
0x65493F: fadd    qword ptr ds:0A492B8h
0x654945: fsubrp  st(1), st
0x654947: jmp     short loc_65494B
0x654949: fsubp   st(1), st
0x65494B: fstp    [esp+44h+var_34]
0x65494F: mov     ecx, offset TimeGlobals
0x654954: fld     [esp+44h+var_34]
0x654958: fstp    [esp+44h+var_2C]
0x65495C: call    sub_4029D0
0x654961: fmul    qword ptr ds:0A72D40h
0x654967: mov     byte ptr [esp+44h+var_4], 1
0x65496C: fcomp   [esp+44h+var_2C]
0x654970: fnstsw  ax
0x654972: test    ah, 5
0x654975: jnp     short loc_65497C
0x654977: mov     byte ptr [esp+44h+var_4], 0
0x65497C: fld     [esp+44h+var_34]
0x654980: mov     ecx, offset TimeGlobals
0x654985: fstp    [esp+44h+var_2C]
0x654989: call    sub_4029D0
0x65498E: fmul    qword ptr ds:0A72D38h
0x654994: fcomp   [esp+44h+var_2C]
0x654998: fnstsw  ax
0x65499A: test    ah, 5
0x65499D: jp      short loc_6549A3
0x65499F: mov     bl, 1
0x6549A1: jmp     short loc_6549A5
0x6549A3: xor     bl, bl
0x6549A5: mov     ecx, esi
0x6549A7: call    sub_5E0A60
0x6549AC: fcomp   dword ptr ds:0A2FAA8h
0x6549B2: fnstsw  ax
0x6549B4: test    ah, 1
0x6549B7: jnz     def_6547FC
0x6549BD: mov     edx, [esi]
0x6549BF: mov     eax, [edx+1A0h]
0x6549C5: mov     ecx, esi
0x6549C7: call    eax
0x6549C9: test    al, al
0x6549CB: jnz     def_6547FC
0x6549D1: cmp     byte ptr [esp+44h+var_4], al
0x6549D5: jz      def_6547FC
0x6549DB: test    bl, bl
0x6549DD: jnz     short loc_6549F8
0x6549DF: fld     dword ptr ds:0A45FF4h
0x6549E5: push    ecx
0x6549E6: mov     ecx, esi
0x6549E8: fstp    [esp+48h+var_48]; float
0x6549EB: call    sub_5F0270
0x6549F0: test    al, al
0x6549F2: jz      def_6547FC
0x6549F8: mov     bl, [edi+11Ch]
0x6549FE: push    0
0x654A00: mov     byte ptr [edi+11Ch], 3
0x654A07: mov     ecx, ds:0B362C0h
0x654A0D: push    esi
0x654A0E: call    sub_521450
0x654A13: mov     ecx, esi
0x654A15: mov     [esp+44h+var_4], eax
0x654A19: mov     [edi+11Ch], bl
0x654A1F: call    sub_5E12B0
0x654A24: test    eax, eax
0x654A26: jz      short loc_654A38
0x654A28: mov     edx, [eax]
0x654A2A: push    0
0x654A2C: mov     ecx, eax
0x654A2E: mov     eax, [edx+9Ch]
0x654A34: push    0
0x654A36: call    eax
0x654A38: mov     eax, [esp+4Ch+var_C]
0x654A3C: test    eax, eax
0x654A3E: mov     byte ptr [edi+11Ch], 5
0x654A45: jz      short loc_654A5B
0x654A47: push    5
0x654A49: push    eax
0x654A4A: mov     ecx, ebp
0x654A4C: call    sub_475300
0x654A51: pop     ebx
0x654A52: pop     edi
0x654A53: pop     esi
0x654A54: pop     ebp
0x654A55: add     esp, 2Ch
0x654A58: retn    4
0x654A5B: mov     ecx, esi; this
0x654A5D: call    TESObjectREFR_GetName
0x654A62: push    eax; ArgList
0x654A63: push    offset aNoGetupAnimati; "No 'GetUp' animation found for actor '%"...
0x654A68: call    PrintError
0x654A6D: mov     edx, [edi]
0x654A6F: mov     eax, [edx+2F8h]
0x654A75: add     esp, 8
0x654A78: push    esi
0x654A79: mov     ecx, edi
0x654A7B: call    eax
0x654A7D: pop     ebx
0x654A7E: pop     edi
0x654A7F: pop     esi
0x654A80: pop     ebp
0x654A81: add     esp, 2Ch
0x654A84: retn    4
0x654A87: mov     ecx, ebp; jumptable 006547FC case 5
0x654A89: call    sub_4711F0
0x654A8E: test    al, al
0x654A90: jz      loc_654C18
0x654A96: push    0
0x654A98: mov     ecx, ebp
0x654A9A: call    sub_4706E0
0x654A9F: test    eax, eax
0x654AA1: jz      short loc_654AB6
0x654AA3: push    0
0x654AA5: mov     ecx, ebp
0x654AA7: call    sub_4706E0
0x654AAC: cmp     dword ptr [eax+44h], 1
0x654AB0: jnz     loc_654C18
0x654AB6: mov     ecx, esi
0x654AB8: call    Actor_IsSwimming
0x654ABD: test    al, al
0x654ABF: mov     ecx, ebp
0x654AC1: jnz     short loc_654ACF
0x654AC3: push    esi
0x654AC4: call    sub_477E50
0x654AC9: test    al, al
0x654ACB: jnz     short loc_654AD8
0x654ACD: mov     ecx, ebp
0x654ACF: push    0
0x654AD1: push    1
0x654AD3: call    sub_475440
0x654AD8: mov     ebp, [ebp+8]
0x654ADB: test    ebp, ebp
0x654ADD: mov     ebx, [esi+3Ch]
0x654AE0: mov     [esp+44h+var_4], ebx
0x654AE4: jz      loc_654BE4
0x654AEA: push    0
0x654AEC: mov     ecx, ebp
0x654AEE: call    sub_405790
0x654AF3: mov     ebp, eax
0x654AF5: push    offset aBip01Head; "Bip01 Head"
0x654AFA: push    ebp
0x654AFB: mov     ecx, esi
0x654AFD: call    sub_4D96F0
0x654B02: test    eax, eax
0x654B04: jnz     short loc_654B2E
0x654B06: push    offset aBip01Neck; "Bip01 Neck"
0x654B0B: push    ebp; a1
0x654B0C: call    NiObjectNET_LookupObjectByName
0x654B11: add     esp, 8
0x654B14: test    eax, eax
0x654B16: jnz     short loc_654B2E
0x654B18: push    offset aBip01Spine1; "Bip01 Spine1"
0x654B1D: push    ebp; a1
0x654B1E: call    NiObjectNET_LookupObjectByName
0x654B23: add     esp, 8
0x654B26: test    eax, eax
0x654B28: jz      loc_654BE4
0x654B2E: add     ebp, 88h ; 'ˆ'
0x654B34: push    ebp
0x654B35: lea     ecx, [esp+48h+var_2C]
0x654B39: push    ecx
0x654B3A: lea     ecx, [eax+88h]
0x654B40: call    sub_4121A0
0x654B45: mov     edx, [edi]
0x654B47: mov     edx, [edx+18Ch]
0x654B4D: lea     eax, [esp+44h+var_30]
0x654B51: push    eax
0x654B52: mov     ecx, edi
0x654B54: call    edx
0x654B56: mov     eax, [eax]
0x654B58: mov     bl, [eax+1F4h]
0x654B5E: not     bl
0x654B60: lea     ecx, [esp+48h+var_34]; this
0x654B64: and     bl, 1
0x654B67: call    sub_7016A0
0x654B6C: test    bl, bl
0x654B6E: jz      short loc_654BB8
0x654B70: mov     ecx, [esp+48h+var_8]
0x654B74: push    offset aBip01Spine; "Bip01 Spine"
0x654B79: push    ecx
0x654B7A: mov     ecx, esi
0x654B7C: call    sub_4D96F0
0x654B81: test    eax, eax
0x654B83: jz      short loc_654BB8
0x654B85: push    0
0x654B87: push    eax
0x654B88: call    sub_897580
0x654B8D: add     esp, 8
0x654B90: test    al, al
0x654B92: jz      short loc_654BB8
0x654B94: fld     [esp+48h+var_30]
0x654B98: fld     qword ptr ds:0A3D360h
0x654B9E: fmul    st(1), st
0x654BA0: fxch    st(1)
0x654BA2: fstp    [esp+48h+var_30]
0x654BA6: fld     dword ptr [esp+48h+var_2C]
0x654BAA: fmul    st, st(1)
0x654BAC: fstp    dword ptr [esp+48h+var_2C]
0x654BB0: fmul    dword ptr [esp+48h+var_2C+4]
0x654BB4: fstp    dword ptr [esp+48h+var_2C+4]
0x654BB8: lea     edx, [esp+48h+var_30]
0x654BBC: push    edx
0x654BBD: call    sub_683CB0
0x654BC2: fstp    [esp+4Ch+var_38]
0x654BC6: fld     [esp+4Ch+var_38]
0x654BCA: mov     byte ptr [edi+11Ch], 0
0x654BD1: mov     eax, [esi]
0x654BD3: fstp    [esp+4Ch+var_4C]
0x654BD6: mov     edx, [eax+1E8h]
0x654BDC: mov     ecx, esi
0x654BDE: call    edx
0x654BE0: mov     ebx, [esp+4Ch+var_C]
0x654BE4: push    0
0x654BE6: push    ebx
0x654BE7: call    sub_8A5580
0x654BEC: fldz
0x654BEE: add     esp, 4
0x654BF1: fstp    [esp+50h+var_50]; float
0x654BF4: push    ebx; int
0x654BF5: call    sub_8AB8A0
0x654BFA: add     esp, 8
0x654BFD: push    0
0x654BFF: lea     ecx, [esi+44h]
0x654C02: call    sub_424870
0x654C07: pop     ebx
0x654C08: mov     byte ptr [edi+11Ch], 6
0x654C0F: pop     edi
0x654C10: pop     esi
0x654C11: pop     ebp
0x654C12: add     esp, 2Ch
0x654C15: retn    4
0x654C18: cmp     dword ptr [ebp+0CCh], 0
0x654C1F: jnz     short def_6547FC
0x654C21: cmp     dword ptr [ebp+0D0h], 0
0x654C28: jnz     short def_6547FC
0x654C2A: pop     ebx
0x654C2B: mov     byte ptr [edi+11Ch], 3
0x654C32: pop     edi
0x654C33: pop     esi
0x654C34: pop     ebp
0x654C35: add     esp, 2Ch
0x654C38: retn    4
0x654C3B: mov     ecx, ebp; jumptable 006547FC case 6
0x654C3D: call    sub_472EA0
0x654C42: test    al, al
0x654C44: jz      short def_6547FC
0x654C46: mov     byte ptr [edi+11Ch], 0
