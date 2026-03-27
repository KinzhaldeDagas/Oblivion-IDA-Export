0x6684B0: push    ebp
0x6684B1: mov     ebp, esp
0x6684B3: and     esp, 0FFFFFFC0h
0x6684B6: push    0FFFFFFFFh
0x6684B8: push    offset SEH_6684B0
0x6684BD: mov     eax, large fs:0
0x6684C3: push    eax
0x6684C4: sub     esp, 268h
0x6684CA: mov     eax, ds:0B30AACh
0x6684CF: xor     eax, esp
0x6684D1: mov     [esp+274h+var_44], eax
0x6684D8: push    ebx
0x6684D9: push    esi
0x6684DA: push    edi
0x6684DB: mov     eax, ds:0B30AACh
0x6684E0: xor     eax, esp
0x6684E2: push    eax
0x6684E3: lea     eax, [esp+284h+var_C]
0x6684EA: mov     large fs:0, eax
0x6684F0: mov     eax, ds:0B14EB8h
0x6684F5: push    eax
0x6684F6: mov     edi, ecx
0x6684F8: lea     ecx, [esp+288h+var_258]
0x6684FC: push    offset aSlevelupdata_1; "%sLevelUpData_1.txt"
0x668501: push    ecx
0x668502: call    __sprintf
0x668507: push    154h; Size
0x66850C: call    FormHeapAlloc
0x668511: add     esp, 10h
0x668514: mov     [esp+284h+var_260], eax
0x668518: xor     ebx, ebx
0x66851A: cmp     eax, ebx
0x66851C: mov     [esp+284h+var_4], ebx
0x668523: jz      short loc_66853D
0x668525: push    ebx
0x668526: push    2800h
0x66852B: push    1
0x66852D: lea     edx, [esp+290h+var_258]
0x668531: push    edx
0x668532: mov     ecx, eax
0x668534: call    BSFile_constr
0x668539: mov     esi, eax
0x66853B: jmp     short loc_66853F
0x66853D: xor     esi, esi
0x66853F: cmp     esi, ebx
0x668541: mov     [esp+284h+var_4], 0FFFFFFFFh
0x66854C: jz      loc_668B09
0x668552: cmp     [esi+24h], bl
0x668555: jz      loc_668B09
0x66855B: mov     ecx, ds:0A853D8h
0x668561: mov     eax, [esi]
0x668563: mov     edx, [eax+0Ch]
0x668566: push    ecx
0x668567: push    ebx
0x668568: mov     ecx, esi
0x66856A: call    edx
0x66856C: mov     [esp+284h+var_26C.m_data], ebx
0x668570: mov     [esp+284h+var_26C.m_dataLen], bx
0x668575: mov     [esp+284h+var_26C.m_bufLen], bx
0x66857A: mov     eax, [edi]
0x66857C: mov     edx, [eax+170h]
0x668582: mov     ecx, edi
0x668584: mov     [esp+284h+var_4], 1
0x66858F: call    edx
0x668591: cmp     byte ptr ds:0B34190h, 0
0x668598: mov     [esp+284h+var_260], eax
0x66859C: jz      short loc_6685AF
0x66859E: push    offset byte_B34190
0x6685A3: push    offset aS_5; "%s\t"
0x6685A8: lea     eax, [esp+28Ch+var_26C]
0x6685AC: push    eax
0x6685AD: jmp     short loc_6685BE
0x6685AF: push    offset aUnknown; "UNKNOWN"
0x6685B4: push    offset aS_5; "%s\t"
0x6685B9: lea     ecx, [esp+28Ch+var_26C]
0x6685BD: push    ecx; int
0x6685BE: call    BSStringT_Static_Format
0x6685C3: mov     edx, [esi]
0x6685C5: mov     edx, [edx+2Ch]
0x6685C8: add     esp, 0Ch
0x6685CB: lea     eax, [esp+284h+var_26C]
0x6685CF: push    eax
0x6685D0: mov     ecx, esi
0x6685D2: call    edx
0x6685D4: mov     ecx, edi; this
0x6685D6: call    TESObjectREFR_GetName
0x6685DB: push    eax; ArgList
0x6685DC: lea     eax, [esp+288h+var_26C]
0x6685E0: push    offset aS_5; "%s\t"
0x6685E5: push    eax; int
0x6685E6: call    BSStringT_Static_Format
0x6685EB: mov     edx, [esi]
0x6685ED: mov     edx, [edx+2Ch]
0x6685F0: add     esp, 0Ch
0x6685F3: lea     eax, [esp+284h+var_26C]
0x6685F7: push    eax
0x6685F8: mov     ecx, esi
0x6685FA: call    edx
0x6685FC: mov     ecx, edi
0x6685FE: call    Actor__GetRaceIfNPC
0x668603: add     eax, 18h
0x668606: mov     eax, [eax+4]
0x668609: cmp     eax, ebx
0x66860B: jnz     short loc_668612
0x66860D: mov     eax, offset EmptyString
0x668612: push    eax; ArgList
0x668613: lea     eax, [esp+288h+var_26C]
0x668617: push    offset aS_5; "%s\t"
0x66861C: push    eax; int
0x66861D: call    BSStringT_Static_Format
0x668622: mov     edx, [esi]
0x668624: mov     edx, [edx+2Ch]
0x668627: add     esp, 0Ch
0x66862A: lea     eax, [esp+284h+var_26C]
0x66862E: push    eax
0x66862F: mov     ecx, esi
0x668631: call    edx
0x668633: mov     ecx, edi
0x668635: call    Actor_GetBaseClass
0x66863A: add     eax, 18h
0x66863D: mov     eax, [eax+4]
0x668640: cmp     eax, ebx
0x668642: jnz     short loc_668649
0x668644: mov     eax, offset EmptyString
0x668649: push    eax; ArgList
0x66864A: lea     eax, [esp+288h+var_26C]
0x66864E: push    offset aS_5; "%s\t"
0x668653: push    eax; int
0x668654: call    BSStringT_Static_Format
0x668659: mov     edx, [esi]
0x66865B: mov     edx, [edx+2Ch]
0x66865E: add     esp, 0Ch
0x668661: lea     eax, [esp+284h+var_26C]
0x668665: push    eax
0x668666: mov     ecx, esi
0x668668: call    edx
0x66866A: mov     eax, [edi]
0x66866C: mov     edx, [eax+268h]
0x668672: mov     ecx, edi
0x668674: call    edx
0x668676: test    eax, eax
0x668678: jnz     short loc_66868B
0x66867A: push    ebx; a3
0x66867B: push    offset asc_A738FC; "\t"
0x668680: lea     ecx, [esp+28Ch+var_26C]; this
0x668684: call    BSStringT_Set
0x668689: jmp     short loc_6686B9
0x66868B: mov     eax, [edi]
0x66868D: mov     edx, [eax+268h]
0x668693: mov     ecx, edi
0x668695: call    edx
0x668697: add     eax, 18h
0x66869A: mov     eax, [eax+4]
0x66869D: cmp     eax, ebx
0x66869F: jnz     short loc_6686A6
0x6686A1: mov     eax, offset EmptyString
0x6686A6: push    eax; ArgList
0x6686A7: lea     eax, [esp+288h+var_26C]
0x6686AB: push    offset aS_5; "%s\t"
0x6686B0: push    eax; int
0x6686B1: call    BSStringT_Static_Format
0x6686B6: add     esp, 0Ch
0x6686B9: mov     edx, [esi]
0x6686BB: mov     edx, [edx+2Ch]
0x6686BE: lea     eax, [esp+284h+var_26C]
0x6686C2: push    eax
0x6686C3: mov     ecx, esi
0x6686C5: call    edx
0x6686C7: mov     ecx, edi
0x6686C9: call    Actor_GetLevel
0x6686CE: movzx   eax, ax
0x6686D1: push    eax; ArgList
0x6686D2: lea     ecx, [esp+288h+var_26C]
0x6686D6: push    offset aI_0; "%i\t"
0x6686DB: push    ecx; int
0x6686DC: call    BSStringT_Static_Format
0x6686E1: mov     edx, [esi]
0x6686E3: mov     edx, [edx+2Ch]
0x6686E6: add     esp, 0Ch
0x6686E9: lea     eax, [esp+284h+var_26C]
0x6686ED: push    eax
0x6686EE: mov     ecx, esi
0x6686F0: call    edx
0x6686F2: push    ebx
0x6686F3: mov     ecx, edi
0x6686F5: call    Actor_GetBaseClass
0x6686FA: mov     ecx, eax
0x6686FC: call    sub_51BF00
0x668701: push    eax
0x668702: call    ActorValue_GetName
0x668707: push    eax; ArgList
0x668708: lea     eax, [esp+28Ch+var_26C]
0x66870C: push    offset aS_5; "%s\t"
0x668711: push    eax; int
0x668712: call    BSStringT_Static_Format
0x668717: mov     edx, [esi]
0x668719: mov     edx, [edx+2Ch]
0x66871C: add     esp, 10h
0x66871F: lea     eax, [esp+284h+var_26C]
0x668723: push    eax
0x668724: mov     ecx, esi
0x668726: call    edx
0x668728: add     ebx, 1
0x66872B: cmp     ebx, 7
0x66872E: jl      short loc_6686F2
0x668730: mov     ebx, 0Ch
0x668735: mov     eax, [edi]
0x668737: mov     edx, [eax+284h]
0x66873D: push    ebx
0x66873E: mov     ecx, edi
0x668740: call    edx
0x668742: push    eax; ArgList
0x668743: lea     eax, [esp+288h+var_26C]
0x668747: push    offset aI_0; "%i\t"
0x66874C: push    eax; int
0x66874D: call    BSStringT_Static_Format
0x668752: mov     edx, [esi]
0x668754: mov     edx, [edx+2Ch]
0x668757: add     esp, 0Ch
0x66875A: lea     eax, [esp+284h+var_26C]
0x66875E: push    eax
0x66875F: mov     ecx, esi
0x668761: call    edx
0x668763: fldz
0x668765: lea     eax, [ebx-0Ch]
0x668768: fstp    [esp+284h+var_264]
0x66876C: cmp     eax, 14h
0x66876F: ja      short loc_66878A
0x668771: push    ebx
0x668772: push    2
0x668774: call    ActorValue_GetGroupOffsetFromAV
0x668779: movsx   ecx, al
0x66877C: add     esp, 8
0x66877F: fld     dword ptr [edi+ecx*4+130h]
0x668786: fstp    [esp+284h+var_264]
0x66878A: fld     [esp+284h+var_264]
0x66878E: sub     esp, 8
0x668791: fstp    qword ptr [esp+28Ch+ArgList]; ArgList
0x668794: lea     edx, [esp+28Ch+var_26C]
0x668798: push    offset a_4f; "%.4f\t"
0x66879D: push    edx; int
0x66879E: call    BSStringT_Static_Format
0x6687A3: mov     eax, [esi]
0x6687A5: mov     edx, [eax+2Ch]
0x6687A8: add     esp, 10h
0x6687AB: lea     ecx, [esp+284h+var_26C]
0x6687AF: push    ecx
0x6687B0: mov     ecx, esi
0x6687B2: call    edx
0x6687B4: add     ebx, 1
0x6687B7: lea     eax, [ebx-0Ch]
0x6687BA: cmp     eax, 15h
0x6687BD: jl      loc_668735
0x6687C3: xor     ebx, ebx
0x6687C5: push    ebx
0x6687C6: mov     ecx, edi
0x6687C8: call    Actor_GetBaseCalcAVi
0x6687CD: push    eax; ArgList
0x6687CE: lea     ecx, [esp+288h+var_26C]
0x6687D2: push    offset aI_0; "%i\t"
0x6687D7: push    ecx; int
0x6687D8: call    BSStringT_Static_Format
0x6687DD: mov     edx, [esi]
0x6687DF: mov     edx, [edx+2Ch]
0x6687E2: add     esp, 0Ch
0x6687E5: lea     eax, [esp+284h+var_26C]
0x6687E9: push    eax
0x6687EA: mov     ecx, esi
0x6687EC: call    edx
0x6687EE: mov     eax, [edi]
0x6687F0: mov     edx, [eax+284h]
0x6687F6: push    ebx
0x6687F7: mov     ecx, edi
0x6687F9: call    edx
0x6687FB: push    eax; ArgList
0x6687FC: lea     eax, [esp+288h+var_26C]
0x668800: push    offset aI_0; "%i\t"
0x668805: push    eax; int
0x668806: call    BSStringT_Static_Format
0x66880B: mov     edx, [esi]
0x66880D: mov     edx, [edx+2Ch]
0x668810: add     esp, 0Ch
0x668813: lea     eax, [esp+284h+var_26C]
0x668817: push    eax
0x668818: mov     ecx, esi
0x66881A: call    edx
0x66881C: add     ebx, 1
0x66881F: cmp     ebx, 8
0x668822: jl      short loc_6687C5
0x668824: push    8
0x668826: mov     ecx, edi
0x668828: call    Actor_GetBaseCalcAVi
0x66882D: push    eax; ArgList
0x66882E: lea     eax, [esp+288h+var_26C]
0x668832: push    offset aI_0; "%i\t"
0x668837: push    eax; int
0x668838: call    BSStringT_Static_Format
0x66883D: mov     edx, [esi]
0x66883F: mov     edx, [edx+2Ch]
0x668842: add     esp, 0Ch
0x668845: lea     eax, [esp+284h+var_26C]
0x668849: push    eax
0x66884A: mov     ecx, esi
0x66884C: call    edx
0x66884E: mov     eax, [edi]
0x668850: mov     edx, [eax+284h]
0x668856: push    8
0x668858: mov     ecx, edi
0x66885A: call    edx
0x66885C: push    eax; ArgList
0x66885D: lea     eax, [esp+284h+var_26C.m_dataLen]
0x668861: push    offset aI_0; "%i\t"
0x668866: push    eax; int
0x668867: call    BSStringT_Static_Format
0x66886C: mov     edx, [esi]
0x66886E: mov     edx, [edx+2Ch]
0x668871: add     esp, 0Ch
0x668874: lea     eax, [esp+280h+var_26C.m_dataLen]
0x668878: push    eax
0x668879: mov     ecx, esi
0x66887B: call    edx
0x66887D: push    0Ah
0x66887F: mov     ecx, edi
0x668881: call    Actor_GetBaseCalcAVi
0x668886: push    eax; ArgList
0x668887: lea     eax, [esp+284h+var_26C.m_dataLen]
0x66888B: push    offset aI_0; "%i\t"
0x668890: push    eax; int
0x668891: call    BSStringT_Static_Format
0x668896: mov     edx, [esi]
0x668898: mov     edx, [edx+2Ch]
0x66889B: add     esp, 0Ch
0x66889E: lea     eax, [esp+280h+var_26C.m_dataLen]
0x6688A2: push    eax
0x6688A3: mov     ecx, esi
0x6688A5: call    edx
0x6688A7: mov     eax, [edi]
0x6688A9: mov     edx, [eax+284h]
0x6688AF: push    0Ah
0x6688B1: mov     ecx, edi
0x6688B3: call    edx
0x6688B5: push    eax; ArgList
0x6688B6: lea     eax, [esp+284h+var_26C.m_dataLen]
0x6688BA: push    offset aI_0; "%i\t"
0x6688BF: push    eax; int
0x6688C0: call    BSStringT_Static_Format
0x6688C5: mov     edx, [esi]
0x6688C7: mov     edx, [edx+2Ch]
0x6688CA: add     esp, 0Ch
0x6688CD: lea     eax, [esp+280h+var_26C.m_dataLen]
0x6688D1: push    eax
0x6688D2: mov     ecx, esi
0x6688D4: call    edx
0x6688D6: push    9
0x6688D8: mov     ecx, edi
0x6688DA: call    Actor_GetBaseCalcAVi
0x6688DF: push    eax; ArgList
0x6688E0: lea     eax, [esp+284h+var_26C.m_dataLen]
0x6688E4: push    offset aI_0; "%i\t"
0x6688E9: push    eax; int
0x6688EA: call    BSStringT_Static_Format
0x6688EF: mov     edx, [esi]
0x6688F1: mov     edx, [edx+2Ch]
0x6688F4: add     esp, 0Ch
0x6688F7: lea     eax, [esp+280h+var_26C.m_dataLen]
0x6688FB: push    eax
0x6688FC: mov     ecx, esi
0x6688FE: call    edx
0x668900: mov     eax, [edi]
0x668902: push    9
0x668904: mov     edx, [eax+284h]
0x66890A: mov     ecx, edi
0x66890C: call    edx
0x66890E: push    eax; ArgList
0x66890F: lea     eax, [esp+284h+var_26C.m_dataLen]
0x668913: push    offset aI_0; "%i\t"
0x668918: push    eax; int
0x668919: call    BSStringT_Static_Format
0x66891E: mov     edx, [esi]
0x668920: mov     edx, [edx+2Ch]
0x668923: add     esp, 0Ch
0x668926: lea     eax, [esp+280h+var_26C.m_dataLen]
0x66892A: push    eax
0x66892B: mov     ecx, esi
0x66892D: call    edx
0x66892F: lea     eax, [esp+280h+var_260]
0x668933: push    eax
0x668934: lea     ecx, [esp+284h+var_258]
0x668938: push    ecx
0x668939: mov     ecx, edi
0x66893B: call    sub_65DFA0
0x668940: fld     [esp+280h+var_260]
0x668944: sub     esp, 10h
0x668947: fstp    qword ptr [esp+290h+ArgList+4]
0x66894B: lea     edx, [esp+290h+var_26C.m_dataLen]
0x66894F: fld     [esp+290h+var_258]
0x668953: fstp    qword ptr [esp+290h+var_290]; ArgList
0x668956: push    offset a_2f_2f_1; "%.2f\t%.2f\t"
0x66895B: push    edx; int
0x66895C: call    BSStringT_Static_Format
0x668961: mov     eax, [esi]
0x668963: mov     edx, [eax+2Ch]
0x668966: add     esp, 18h
0x668969: lea     ecx, [esp+280h+var_26C.m_dataLen]
0x66896D: push    ecx
0x66896E: mov     ecx, esi
0x668970: call    edx
0x668972: mov     ecx, edi; this
0x668974: call    TESObjectREFR_GetContainer
0x668979: push    eax
0x66897A: push    edi; a1
0x66897B: call    ContainerExtraData_GetContainerExtraDataForRef
0x668980: add     esp, 8
0x668983: test    eax, eax
0x668985: push    0; ArgList
0x668987: jz      short loc_66899F
0x668989: push    0
0x66898B: mov     ecx, eax
0x66898D: call    sub_488100
0x668992: push    eax
0x668993: push    offset aI_0; "%i\t"
0x668998: lea     eax, [esp+288h+var_26C.m_dataLen]
0x66899C: push    eax
0x66899D: jmp     short loc_6689A9
0x66899F: push    offset aI_0; "%i\t"
0x6689A4: lea     ecx, [esp+288h+var_26C.m_dataLen]
0x6689A8: push    ecx; int
0x6689A9: call    BSStringT_Static_Format
0x6689AE: mov     edx, [esi]
0x6689B0: mov     edx, [edx+2Ch]
0x6689B3: add     esp, 0Ch
0x6689B6: lea     eax, [esp+280h+var_26C.m_dataLen]
0x6689BA: push    eax; ArgList
0x6689BB: mov     ecx, esi
0x6689BD: call    edx
0x6689BF: mov     ecx, edi
0x6689C1: call    Actor_GetGold
0x6689C6: push    eax; ArgList
0x6689C7: lea     eax, [esp+288h+var_26C]
0x6689CB: push    offset aI_0; "%i\t"
0x6689D0: push    eax; int
0x6689D1: call    BSStringT_Static_Format
0x6689D6: mov     edx, [esi]
0x6689D8: mov     edx, [edx+2Ch]
0x6689DB: add     esp, 0Ch
0x6689DE: lea     eax, [esp+284h+var_26C]
0x6689E2: push    eax
0x6689E3: mov     ecx, esi
0x6689E5: call    edx
0x6689E7: mov     eax, [edi]
0x6689E9: mov     edx, [eax+348h]
0x6689EF: mov     ecx, edi
0x6689F1: call    edx
0x6689F3: sub     esp, 8
0x6689F6: fstp    qword ptr [esp+28Ch+ArgList]; ArgList
0x6689F9: lea     eax, [esp+28Ch+var_26C]
0x6689FD: push    offset a_2f_0; "%.2f\t"
0x668A02: push    eax; int
0x668A03: call    BSStringT_Static_Format
0x668A08: mov     edx, [esi]
0x668A0A: mov     edx, [edx+2Ch]
0x668A0D: add     esp, 10h
0x668A10: lea     eax, [esp+284h+var_26C]
0x668A14: push    eax
0x668A15: mov     ecx, esi
0x668A17: call    edx
0x668A19: push    0; a3
0x668A1B: push    offset asc_A738D8; "\""
0x668A20: lea     ecx, [esp+28Ch+var_26C]; this
0x668A24: call    BSStringT_Set
0x668A29: mov     edi, [esp+284h+var_260]
0x668A2D: add     edi, 58h ; 'X'
0x668A30: jz      short loc_668A76
0x668A32: mov     eax, [edi]
0x668A34: test    eax, eax
0x668A36: jz      short loc_668A6F
0x668A38: mov     ecx, [eax+0Ch]
0x668A3B: mov     eax, [eax+1Ch]
0x668A3E: test    eax, eax
0x668A40: jnz     short loc_668A47
0x668A42: mov     eax, offset EmptyString
0x668A47: push    ecx
0x668A48: push    eax
0x668A49: lea     eax, [esp+28Ch+var_150]
0x668A50: push    offset aS08x_1; "%s (%08X),"
0x668A55: push    eax
0x668A56: call    __sprintf
0x668A5B: add     esp, 10h
0x668A5E: lea     ecx, [esp+284h+var_150]
0x668A65: push    ecx
0x668A66: lea     ecx, [esp+288h+var_26C]
0x668A6A: call    BSStringT_Append
0x668A6F: mov     edi, [edi+4]
0x668A72: test    edi, edi
0x668A74: jnz     short loc_668A32
0x668A76: push    offset asc_A738C8; "\"\t"
0x668A7B: lea     ecx, [esp+288h+var_26C]
0x668A7F: call    BSStringT_Append
0x668A84: mov     edx, [esi]
0x668A86: mov     edx, [edx+2Ch]
0x668A89: lea     eax, [esp+284h+var_26C]
0x668A8D: push    eax
0x668A8E: mov     ecx, esi
0x668A90: call    edx
0x668A92: mov     edi, 658h
0x668A97: mov     eax, ds:0B333C4h
0x668A9C: mov     eax, [edi+eax]
0x668A9F: push    eax; ArgList
0x668AA0: lea     ecx, [esp+288h+var_26C]
0x668AA4: push    offset aI_0; "%i\t"
0x668AA9: push    ecx; int
0x668AAA: call    BSStringT_Static_Format
0x668AAF: mov     edx, [esi]
0x668AB1: mov     edx, [edx+2Ch]
0x668AB4: add     esp, 0Ch
0x668AB7: lea     eax, [esp+284h+var_26C]
0x668ABB: push    eax
0x668ABC: mov     ecx, esi
0x668ABE: call    edx
0x668AC0: add     edi, 4
0x668AC3: cmp     edi, 6C8h
0x668AC9: jl      short loc_668A97
0x668ACB: lea     eax, [esp+284h+var_26C]
0x668ACF: push    offset word_A3D9B0; Format
0x668AD4: push    eax; int
0x668AD5: call    BSStringT_Static_Format
0x668ADA: mov     edx, [esi]
0x668ADC: mov     edx, [edx+2Ch]
0x668ADF: add     esp, 8
0x668AE2: lea     eax, [esp+284h+var_26C]
0x668AE6: push    eax
0x668AE7: mov     ecx, esi
0x668AE9: call    edx
0x668AEB: mov     ecx, esi
0x668AED: call    BSFile_Flush
0x668AF2: mov     eax, [esi]
0x668AF4: mov     edx, [eax]
0x668AF6: push    1
0x668AF8: mov     ecx, esi
0x668AFA: call    edx
0x668AFC: mov     eax, [esp+284h+var_26C.m_data]
0x668B00: push    eax
0x668B01: call    FormHeapFree
0x668B06: add     esp, 4
0x668B09: mov     ecx, [esp+284h+var_C]
0x668B10: mov     large fs:0, ecx
0x668B17: pop     ecx
0x668B18: pop     edi
0x668B19: pop     esi
0x668B1A: pop     ebx
0x668B1B: mov     ecx, [esp+274h+var_44]
0x668B22: xor     ecx, esp
0x668B24: call    @__security_check_cookie@4; __security_check_cookie(x)
0x668B29: mov     esp, ebp
0x668B2B: pop     ebp
0x668B2C: retn
