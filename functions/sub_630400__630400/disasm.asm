0x630400: sub     esp, 44h
0x630403: push    esi
0x630404: mov     esi, ecx
0x630406: mov     eax, [esi]
0x630408: mov     edx, [eax+184h]
0x63040E: call    edx
0x630410: test    eax, eax
0x630412: mov     [esp+48h+var_44], eax
0x630416: jz      loc_630D30
0x63041C: push    edi
0x63041D: mov     edi, [esp+4Ch+arg_0]
0x630421: mov     ecx, edi
0x630423: call    sub_5E6780
0x630428: test    eax, eax
0x63042A: mov     [esp+4Ch+var_40], eax
0x63042E: jnz     loc_6304DE
0x630434: mov     ecx, [esi+2Ch]
0x630437: test    ecx, ecx
0x630439: jz      short loc_63045B
0x63043B: mov     eax, [ecx]
0x63043D: mov     edx, [eax+190h]
0x630443: call    edx
0x630445: test    al, al
0x630447: jnz     short loc_6304C2
0x630449: mov     eax, [esi+2Ch]
0x63044C: mov     eax, [eax+0Ch]
0x63044F: push    eax
0x630450: mov     ecx, edi
0x630452: call    sub_4D88C0
0x630457: test    al, al
0x630459: jnz     short loc_6304C2
0x63045B: mov     edx, [esi]
0x63045D: mov     eax, [edx+558h]
0x630463: push    edi
0x630464: mov     ecx, esi
0x630466: call    eax
0x630468: mov     ecx, [esi+2Ch]
0x63046B: test    ecx, ecx
0x63046D: jz      short loc_63048F
0x63046F: mov     edx, [ecx]
0x630471: mov     eax, [edx+190h]
0x630477: call    eax
0x630479: test    al, al
0x63047B: jnz     short loc_6304C2
0x63047D: mov     ecx, [esi+2Ch]
0x630480: mov     eax, [ecx+0Ch]
0x630483: push    eax
0x630484: mov     ecx, edi
0x630486: call    sub_4D88C0
0x63048B: test    al, al
0x63048D: jnz     short loc_6304C2
0x63048F: mov     edx, [esi]
0x630491: mov     eax, [edx+188h]
0x630497: push    1
0x630499: push    edi
0x63049A: mov     ecx, esi
0x63049C: call    eax
0x63049E: cmp     byte ptr [esi+0D0h], 0
0x6304A5: jnz     loc_630D2F
0x6304AB: mov     edx, [esi]
0x6304AD: mov     eax, [edx+194h]
0x6304B3: push    edi
0x6304B4: mov     ecx, esi
0x6304B6: call    eax
0x6304B8: pop     edi
0x6304B9: xor     al, al
0x6304BB: pop     esi
0x6304BC: add     esp, 44h
0x6304BF: retn    8
0x6304C2: mov     eax, [esi+44h]
0x6304C5: test    eax, eax
0x6304C7: jz      short loc_6304DE
0x6304C9: cmp     [eax], edi
0x6304CB: jnz     short loc_6304DE
0x6304CD: mov     ecx, [eax+4]
0x6304D0: push    0
0x6304D2: push    ecx
0x6304D3: mov     ecx, edi
0x6304D5: call    sub_4D8D70
0x6304DA: mov     [esp+4Ch+var_40], eax
0x6304DE: mov     ecx, [esi+2Ch]
0x6304E1: push    ebx
0x6304E2: xor     bl, bl
0x6304E4: test    ecx, ecx
0x6304E6: push    ebp
0x6304E7: mov     byte ptr [esp+54h+arg_0], bl
0x6304EB: jz      short loc_630560
0x6304ED: mov     edx, [ecx]
0x6304EF: mov     eax, [edx+190h]
0x6304F5: call    eax
0x6304F7: test    al, al
0x6304F9: jz      short loc_630560
0x6304FB: mov     ecx, [esi+2Ch]
0x6304FE: cmp     ecx, edi
0x630500: jz      short loc_630560
0x630502: xor     ebp, ebp
0x630504: test    ecx, ecx
0x630506: mov     byte ptr [esp+54h+arg_0], 1
0x63050B: jz      short loc_63051E
0x63050D: mov     edx, [ecx]
0x63050F: mov     eax, [edx+190h]
0x630515: call    eax
0x630517: test    al, al
0x630519: jz      short loc_63051E
0x63051B: mov     ebp, [esi+2Ch]
0x63051E: mov     edx, [esi+2Ch]
0x630521: cmp     edx, ds:0B333C4h
0x630527: mov     ecx, [ebp+58h]
0x63052A: mov     ecx, [ecx+8]
0x63052D: jz      short loc_63055C
0x63052F: test    ecx, ecx
0x630531: jz      short loc_630542
0x630533: cmp     byte ptr [ecx+20h], 1
0x630537: jz      short loc_63055C
0x630539: call    sub_5660A0
0x63053E: test    al, al
0x630540: jnz     short loc_63055C
0x630542: mov     eax, [esi]
0x630544: mov     edx, [eax+17Ch]
0x63054A: push    0
0x63054C: mov     ecx, esi
0x63054E: call    edx
0x630550: pop     ebp
0x630551: pop     ebx
0x630552: pop     edi
0x630553: xor     al, al
0x630555: pop     esi
0x630556: add     esp, 44h
0x630559: retn    8
0x63055C: mov     bl, byte ptr [esp+54h+arg_0]
0x630560: mov     eax, [edi]
0x630562: mov     edx, [eax+174h]
0x630568: mov     ecx, edi
0x63056A: call    edx
0x63056C: test    bl, bl
0x63056E: mov     ecx, [eax]
0x630570: mov     edx, [eax+4]
0x630573: mov     eax, [eax+8]
0x630576: mov     [esp+54h+var_24], ecx
0x63057A: mov     [esp+54h+var_20], edx
0x63057E: mov     [esp+54h+var_1C], eax
0x630582: jz      short loc_6305D4
0x630584: mov     ecx, [esi+2Ch]
0x630587: mov     edx, [ecx]
0x630589: mov     eax, [edx+174h]
0x63058F: call    eax
0x630591: mov     edx, [edi]
0x630593: mov     ebp, eax
0x630595: mov     eax, [edx+174h]
0x63059B: mov     ecx, edi
0x63059D: call    eax
0x63059F: fld     dword ptr [eax]
0x6305A1: fsub    dword ptr [ebp+0]
0x6305A4: fstp    [esp+54h+var_30]
0x6305A8: mov     ecx, [esp+54h+var_30]
0x6305AC: fld     dword ptr [eax+4]
0x6305AF: mov     [esp+54h+var_24], ecx
0x6305B3: fsub    dword ptr [ebp+4]
0x6305B6: fstp    [esp+54h+var_2C]
0x6305BA: mov     edx, [esp+54h+var_2C]
0x6305BE: fld     dword ptr [eax+8]
0x6305C1: mov     [esp+54h+var_20], edx
0x6305C5: fsub    dword ptr [ebp+8]
0x6305C8: fstp    [esp+54h+var_28]
0x6305CC: mov     eax, [esp+54h+var_28]
0x6305D0: mov     [esp+54h+var_1C], eax
0x6305D4: test    bl, bl
0x6305D6: fldz
0x6305D8: fstp    [esp+54h+var_3C]
0x6305DC: jz      loc_630752
0x6305E2: mov     ecx, [esp+54h+var_44]
0x6305E6: mov     ecx, [ecx+28h]
0x6305E9: mov     ebx, [esi+2Ch]
0x6305EC: call    sub_452A60
0x6305F1: test    eax, eax
0x6305F3: mov     [esp+54h+var_3C], eax
0x6305F7: jg      short loc_630601
0x6305F9: mov     [esp+54h+var_3C], 0C8h ; 'È'
0x630601: mov     edx, [esi+2Ch]
0x630604: cmp     edx, ds:0B333C4h
0x63060A: jnz     short loc_630612
0x63060C: fild    [esp+54h+var_3C]
0x630610: jmp     short loc_630647
0x630612: mov     ecx, edi; this
0x630614: call    TESObjectREFR_GetParentCell
0x630619: test    eax, eax
0x63061B: jz      short loc_63063D
0x63061D: mov     ecx, edi; this
0x63061F: call    TESObjectREFR_GetParentCell
0x630624: mov     ecx, eax; this
0x630626: call    TESObjectCELL_IsInterior
0x63062B: test    al, al
0x63062D: jz      short loc_63063D
0x63062F: mov     ecx, offset flt_B36AA0
0x630634: call    GameSetting_GetSafeFloatPointer
0x630639: fld     dword ptr [eax]
0x63063B: jmp     short loc_630647
0x63063D: fild    [esp+54h+var_3C]
0x630641: fmul    dword ptr ds:0B36A98h
0x630647: mov     ecx, [edi+58h]
0x63064A: fstp    [esp+54h+var_3C]
0x63064E: mov     eax, [ecx]
0x630650: mov     edx, [eax+40Ch]
0x630656: call    edx
0x630658: test    eax, eax
0x63065A: jz      loc_630752
0x630660: mov     ecx, [edi+58h]
0x630663: mov     eax, [ecx]
0x630665: mov     edx, [eax+40Ch]
0x63066B: call    edx
0x63066D: mov     edx, [eax]
0x63066F: mov     ecx, eax
0x630671: mov     eax, [edx+4]
0x630674: call    eax
0x630676: cmp     eax, 2
0x630679: jnz     loc_630752
0x63067F: mov     ecx, [edi+58h]
0x630682: mov     edx, [ecx]
0x630684: mov     eax, [edx+40Ch]
0x63068A: call    eax
0x63068C: mov     ebp, eax
0x63068E: test    ebp, ebp
0x630690: jz      loc_630752
0x630696: mov     ecx, ebp
0x630698: call    sub_68A1B0
0x63069D: test    eax, eax
0x63069F: jz      short loc_6306AF
0x6306A1: mov     edx, [eax]
0x6306A3: mov     ecx, eax
0x6306A5: mov     eax, [edx+174h]
0x6306AB: call    eax
0x6306AD: jmp     short loc_6306B6
0x6306AF: mov     ecx, ebp
0x6306B1: call    sub_68A160
0x6306B6: mov     edx, [eax+4]
0x6306B9: mov     ecx, [eax]
0x6306BB: mov     eax, [eax+8]
0x6306BE: mov     [esp+54h+var_2C], edx
0x6306C2: mov     edx, [edi]
0x6306C4: mov     [esp+54h+var_28], eax
0x6306C8: mov     eax, [edx+174h]
0x6306CE: mov     [esp+54h+var_30], ecx
0x6306D2: mov     ecx, edi
0x6306D4: call    eax
0x6306D6: fld     dword ptr [eax]
0x6306D8: fsub    [esp+54h+var_30]
0x6306DC: fstp    [esp+54h+var_18]
0x6306E0: mov     ecx, [esp+54h+var_18]
0x6306E4: fld     dword ptr [eax+4]
0x6306E7: mov     [esp+54h+var_C], ecx
0x6306EB: fsub    [esp+54h+var_2C]
0x6306EF: mov     ecx, ebx
0x6306F1: fstp    [esp+54h+var_14]
0x6306F5: mov     edx, [esp+54h+var_14]
0x6306F9: fld     dword ptr [eax+8]
0x6306FC: mov     [esp+54h+var_8], edx
0x630700: fsub    [esp+54h+var_28]
0x630704: mov     edx, [ebx]
0x630706: fstp    [esp+54h+var_10]
0x63070A: mov     eax, [esp+54h+var_10]
0x63070E: mov     [esp+54h+var_4], eax
0x630712: mov     eax, [edx+174h]
0x630718: call    eax
0x63071A: fld     dword ptr [eax]
0x63071C: fsub    [esp+54h+var_30]
0x630720: fstp    [esp+54h+var_18]
0x630724: mov     ecx, [esp+54h+var_18]
0x630728: fld     dword ptr [eax+4]
0x63072B: mov     [esp+54h+var_30], ecx
0x63072F: fsub    [esp+54h+var_2C]
0x630733: fstp    [esp+54h+var_14]
0x630737: mov     edx, [esp+54h+var_14]
0x63073B: fld     dword ptr [eax+8]
0x63073E: mov     [esp+54h+var_2C], edx
0x630742: fsub    [esp+54h+var_28]
0x630746: fstp    [esp+54h+var_10]
0x63074A: mov     eax, [esp+54h+var_10]
0x63074E: mov     [esp+54h+var_28], eax
0x630752: mov     ebp, [esp+54h+var_44]
0x630756: xor     ebx, ebx
0x630758: cmp     [ebp+24h], ebx
0x63075B: jz      loc_630CA7
0x630761: fld     dword ptr ds:0A30634h
0x630767: push    ecx
0x630768: fstp    [esp+58h+var_58]; float
0x63076B: push    ebx; char
0x63076C: push    edi; int
0x63076D: mov     ecx, ebp
0x63076F: call    sub_566DC0
0x630774: test    al, al
0x630776: jz      loc_630CA7
0x63077C: cmp     byte ptr [esp+54h+arg_0], bl
0x630780: jnz     loc_630BB3
0x630786: mov     eax, [esp+54h+var_40]
0x63078A: cmp     eax, ebx
0x63078C: mov     ecx, [ebp+24h]
0x63078F: mov     edx, [ebp+28h]
0x630792: mov     [esp+54h+var_38], ecx
0x630796: mov     [esp+54h+var_34], edx
0x63079A: jz      loc_630B7E
0x6307A0: mov     eax, [eax]
0x6307A2: xor     ebp, ebp
0x6307A4: cmp     eax, ebx
0x6307A6: mov     [esp+54h+arg_0], ebp
0x6307AA: jz      short loc_6307B2
0x6307AC: mov     ebp, [eax]
0x6307AE: mov     [esp+54h+arg_0], ebp
0x6307B2: cmp     ebp, ebx
0x6307B4: mov     [esp+54h+arg_4], ebx
0x6307B8: jz      short loc_6307D3
0x6307BA: mov     ecx, ebp
0x6307BC: call    ExtraDataList_GetReferencePointer
0x6307C1: test    eax, eax
0x6307C3: jz      short loc_6307D3
0x6307C5: mov     ecx, ebp
0x6307C7: call    ExtraDataList_GetReferencePointer
0x6307CC: mov     eax, [eax+0Ch]
0x6307CF: mov     [esp+54h+arg_4], eax
0x6307D3: mov     ecx, [esp+54h+var_44]
0x6307D7: mov     ecx, [ecx+24h]
0x6307DA: call    sub_5697E0
0x6307DF: mov     ebx, eax
0x6307E1: test    ebx, ebx
0x6307E3: mov     [esp+54h+var_3C], eax
0x6307E7: jnz     short loc_6307F4
0x6307E9: mov     ebx, [esi+30h]
0x6307EC: test    ebx, ebx
0x6307EE: mov     [esp+54h+var_3C], ebx
0x6307F2: jz      short loc_63082F
0x6307F4: mov     ecx, ebx; this
0x6307F6: call    TESObjectREFR_GetContainer
0x6307FB: test    eax, eax
0x6307FD: jz      short loc_63082F
0x6307FF: mov     edx, [esp+54h+var_44]
0x630803: mov     ecx, [edx+28h]
0x630806: mov     edx, [esp+54h+arg_4]
0x63080A: mov     eax, [esp+54h+var_40]
0x63080E: mov     ebp, [eax+8]
0x630811: push    edx
0x630812: call    sub_452A60
0x630817: push    eax
0x630818: mov     eax, [esp+5Ch+arg_0]
0x63081C: push    ebx
0x63081D: push    eax
0x63081E: push    ebp
0x63081F: mov     ecx, edi
0x630821: call    sub_5FC6D0
0x630826: mov     ebp, [esp+54h+var_40]
0x63082A: jmp     loc_63090F
0x63082F: mov     ecx, [esp+54h+var_40]
0x630833: mov     eax, [ecx]
0x630835: test    eax, eax
0x630837: jz      short loc_63083F
0x630839: mov     edx, [eax]
0x63083B: mov     [esp+54h+arg_0], edx
0x63083F: mov     ecx, [esp+54h+var_38]
0x630843: xor     ebx, ebx
0x630845: test    ecx, ecx
0x630847: jz      loc_6308D2
0x63084D: call    sub_5697E0
0x630852: mov     ebp, eax
0x630854: test    ebp, ebp
0x630856: jnz     short loc_63085F
0x630858: mov     ebp, [esi+30h]
0x63085B: test    ebp, ebp
0x63085D: jz      short loc_6308D2
0x63085F: mov     eax, [ebp+0]
0x630862: mov     edx, [eax+170h]
0x630868: mov     ecx, ebp
0x63086A: call    edx
0x63086C: cmp     eax, ds:0B35EACh
0x630872: jz      short loc_630889
0x630874: mov     eax, [ebp+0]
0x630877: mov     edx, [eax+170h]
0x63087D: mov     ecx, ebp
0x63087F: call    edx
0x630881: cmp     eax, ds:0B35EB0h
0x630887: jnz     short loc_6308D2
0x630889: mov     eax, [ebp+0]
0x63088C: mov     edx, [eax+174h]
0x630892: mov     ecx, ebp
0x630894: call    edx
0x630896: mov     ecx, [eax]
0x630898: mov     edx, [eax+4]
0x63089B: mov     eax, [eax+8]
0x63089E: push    0Ch; Size
0x6308A0: mov     [esp+58h+var_18], ecx
0x6308A4: mov     [esp+58h+var_14], edx
0x6308A8: mov     [esp+58h+var_10], eax
0x6308AC: call    FormHeapAlloc
0x6308B1: add     esp, 4
0x6308B4: test    eax, eax
0x6308B6: jz      short loc_6308CE
0x6308B8: fld     [esp+54h+var_18]
0x6308BC: fstp    dword ptr [eax]
0x6308BE: fld     [esp+54h+var_14]
0x6308C2: fstp    dword ptr [eax+4]
0x6308C5: fld     [esp+54h+var_10]
0x6308C9: fstp    dword ptr [eax+8]
0x6308CC: jmp     short loc_6308D0
0x6308CE: xor     eax, eax
0x6308D0: mov     ebx, eax
0x6308D2: mov     ecx, [esp+54h+var_34]
0x6308D6: mov     ebp, 1
0x6308DB: call    sub_569E60
0x6308E0: test    eax, eax
0x6308E2: jnz     short loc_6308F2
0x6308E4: mov     ecx, [esp+54h+var_44]
0x6308E8: mov     ecx, [ecx+28h]
0x6308EB: call    sub_452A60
0x6308F0: mov     ebp, eax
0x6308F2: mov     eax, [esp+54h+arg_0]
0x6308F6: mov     edx, [edi]
0x6308F8: mov     edx, [edx+2C8h]
0x6308FE: push    0
0x630900: push    ebx
0x630901: push    ebp
0x630902: mov     ebp, [esp+60h+var_40]
0x630906: mov     ecx, [ebp+8]
0x630909: push    eax
0x63090A: push    ecx
0x63090B: mov     ecx, edi
0x63090D: call    edx
0x63090F: mov     ecx, ebp
0x630911: mov     byte ptr [esi+25Dh], 0
0x630918: call    ContainerEntryExtraData_DestroyDataTable
0x63091D: push    ebp
0x63091E: call    FormHeapFree
0x630923: mov     ebx, [esp+58h+var_34]
0x630927: add     esp, 4
0x63092A: mov     ecx, ebx
0x63092C: call    sub_569E80
0x630931: cmp     eax, 0Dh
0x630934: jz      short loc_630956
0x630936: mov     ecx, ebx
0x630938: call    sub_569E80
0x63093D: cmp     eax, 15h
0x630940: jl      loc_630B70
0x630946: mov     ecx, ebx
0x630948: call    sub_569E80
0x63094D: cmp     eax, 19h
0x630950: jg      loc_630B70
0x630956: cmp     dword ptr [esi+40h], 0
0x63095A: jnz     short loc_630966
0x63095C: cmp     dword ptr [esi+3Ch], 0
0x630960: jz      loc_630AE1
0x630966: mov     eax, [esi+3Ch]
0x630969: lea     ecx, [esi+3Ch]
0x63096C: push    eax
0x63096D: mov     [esi+44h], eax
0x630970: call    BSSimpleList_Remove
0x630975: mov     ecx, [esi+44h]
0x630978: mov     edx, [ecx]
0x63097A: mov     eax, [esi]
0x63097C: mov     eax, [eax+0D0h]
0x630982: push    edx
0x630983: mov     ecx, esi
0x630985: call    eax
0x630987: mov     ecx, [esi+44h]
0x63098A: mov     edx, [ecx+4]
0x63098D: xor     ebp, ebp
0x63098F: push    ebp
0x630990: push    edx
0x630991: mov     ecx, edi
0x630993: call    sub_4D8D70
0x630998: mov     ebx, eax
0x63099A: mov     eax, [esi+44h]
0x63099D: cmp     eax, ebp
0x63099F: jz      short loc_6309AA
0x6309A1: push    eax
0x6309A2: call    FormHeapFree
0x6309A7: add     esp, 4
0x6309AA: mov     ecx, [esp+54h+var_3C]; this
0x6309AE: cmp     ecx, ebp
0x6309B0: mov     [esi+44h], ebp
0x6309B3: jz      short loc_6309EA
0x6309B5: call    TESObjectREFR_GetContainer
0x6309BA: test    eax, eax
0x6309BC: jz      short loc_6309EA
0x6309BE: mov     eax, [esp+54h+var_44]
0x6309C2: mov     edx, [esp+54h+arg_4]
0x6309C6: mov     ecx, [eax+28h]
0x6309C9: mov     ebp, [ebx+8]
0x6309CC: push    edx
0x6309CD: call    sub_452A60
0x6309D2: mov     ecx, [esp+58h+arg_0]
0x6309D6: push    eax
0x6309D7: mov     eax, [esp+5Ch+var_3C]
0x6309DB: push    eax
0x6309DC: push    ecx
0x6309DD: push    ebp
0x6309DE: mov     ecx, edi
0x6309E0: call    sub_5FC6D0
0x6309E5: jmp     loc_630ACC
0x6309EA: mov     eax, [ebx]
0x6309EC: cmp     eax, ebp
0x6309EE: jz      short loc_6309F6
0x6309F0: mov     edx, [eax]
0x6309F2: mov     [esp+54h+arg_0], edx
0x6309F6: cmp     [esp+54h+var_38], ebp
0x6309FA: mov     [esp+54h+var_40], ebp
0x6309FE: jz      loc_630A8F
0x630A04: mov     ecx, [esp+54h+var_38]
0x630A08: call    sub_5697E0
0x630A0D: mov     ebp, eax
0x630A0F: test    ebp, ebp
0x630A11: jnz     short loc_630A1A
0x630A13: mov     ebp, [esi+30h]
0x630A16: test    ebp, ebp
0x630A18: jz      short loc_630A8F
0x630A1A: mov     eax, [ebp+0]
0x630A1D: mov     edx, [eax+170h]
0x630A23: mov     ecx, ebp
0x630A25: call    edx
0x630A27: cmp     eax, ds:0B35EACh
0x630A2D: jz      short loc_630A44
0x630A2F: mov     eax, [ebp+0]
0x630A32: mov     edx, [eax+170h]
0x630A38: mov     ecx, ebp
0x630A3A: call    edx
0x630A3C: cmp     eax, ds:0B35EB0h
0x630A42: jnz     short loc_630A8F
0x630A44: mov     eax, [ebp+0]
0x630A47: mov     edx, [eax+174h]
0x630A4D: mov     ecx, ebp
0x630A4F: call    edx
0x630A51: mov     ecx, [eax]
0x630A53: mov     edx, [eax+4]
0x630A56: mov     eax, [eax+8]
0x630A59: push    0Ch; Size
0x630A5B: mov     [esp+58h+var_18], ecx
0x630A5F: mov     [esp+58h+var_14], edx
0x630A63: mov     [esp+58h+var_10], eax
0x630A67: call    FormHeapAlloc
0x630A6C: add     esp, 4
0x630A6F: test    eax, eax
0x630A71: jz      short loc_630A89
0x630A73: fld     [esp+54h+var_18]
0x630A77: fstp    dword ptr [eax]
0x630A79: fld     [esp+54h+var_14]
0x630A7D: fstp    dword ptr [eax+4]
0x630A80: fld     [esp+54h+var_10]
0x630A84: fstp    dword ptr [eax+8]
0x630A87: jmp     short loc_630A8B
0x630A89: xor     eax, eax
0x630A8B: mov     [esp+54h+var_40], eax
0x630A8F: mov     ecx, [esp+54h+var_34]
0x630A93: mov     ebp, 1
0x630A98: call    sub_569E60
0x630A9D: test    eax, eax
0x630A9F: jnz     short loc_630AAF
0x630AA1: mov     ecx, [esp+54h+var_44]
0x630AA5: mov     ecx, [ecx+28h]
0x630AA8: call    sub_452A60
0x630AAD: mov     ebp, eax
0x630AAF: mov     eax, [esp+54h+var_40]
0x630AB3: mov     ecx, [esp+54h+arg_0]
0x630AB7: mov     edx, [edi]
0x630AB9: mov     edx, [edx+2C8h]
0x630ABF: push    0
0x630AC1: push    eax
0x630AC2: mov     eax, [ebx+8]
0x630AC5: push    ebp
0x630AC6: push    ecx
0x630AC7: push    eax
0x630AC8: mov     ecx, edi
0x630ACA: call    edx
0x630ACC: mov     ecx, ebx
0x630ACE: call    ContainerEntryExtraData_DestroyDataTable
0x630AD3: push    ebx
0x630AD4: call    FormHeapFree
0x630AD9: add     esp, 4
0x630ADC: jmp     loc_630956
0x630AE1: mov     eax, [esi+8]
0x630AE4: test    eax, eax
0x630AE6: mov     byte ptr [esp+54h+arg_4], 1
0x630AEB: mov     byte ptr [esp+54h+arg_0], 1
0x630AF0: jz      short loc_630B10
0x630AF2: mov     eax, [eax+1Ch]
0x630AF5: mov     ecx, eax
0x630AF7: shr     ecx, 14h
0x630AFA: test    cl, 1
0x630AFD: jz      short loc_630B04
0x630AFF: mov     byte ptr [esp+54h+arg_4], 0
0x630B04: shr     eax, 15h
0x630B07: test    al, 1
0x630B09: jz      short loc_630B10
0x630B0B: mov     byte ptr [esp+54h+arg_0], 0
0x630B10: mov     ecx, edi
0x630B12: call    sub_5E32D0
0x630B17: test    al, al
0x630B19: mov     ecx, edi; this
0x630B1B: jz      short loc_630B43
0x630B1D: mov     edx, [edi]
0x630B1F: mov     eax, [edx+170h]
0x630B25: call    eax
0x630B27: test    eax, eax
0x630B29: jz      short loc_630B70
0x630B2B: mov     ecx, [esp+54h+arg_0]
0x630B2F: mov     edx, [esp+54h+arg_4]
0x630B33: push    1; char
0x630B35: push    0; int
0x630B37: push    ecx; int
0x630B38: push    edx; int
0x630B39: push    edi; int
0x630B3A: mov     ecx, eax; int
0x630B3C: call    sub_5227A0
0x630B41: jmp     short loc_630B70
0x630B43: call    Actor_IsCreature
0x630B48: test    al, al
0x630B4A: jz      short loc_630B70
0x630B4C: mov     eax, [edi]
0x630B4E: mov     edx, [eax+170h]
0x630B54: mov     ecx, edi
0x630B56: call    edx
0x630B58: test    eax, eax
0x630B5A: jz      short loc_630B70
0x630B5C: mov     ecx, [esp+54h+arg_0]
0x630B60: mov     edx, [esp+54h+arg_4]
0x630B64: push    1
0x630B66: push    ecx
0x630B67: push    edx
0x630B68: push    edi
0x630B69: mov     ecx, eax
0x630B6B: call    sub_51E240
0x630B70: mov     eax, [esi]
0x630B72: mov     edx, [eax+0BCh]
0x630B78: push    1
0x630B7A: mov     ecx, esi
0x630B7C: call    edx
0x630B7E: mov     eax, [esi]
0x630B80: mov     edx, [eax+188h]
0x630B86: push    1
0x630B88: push    edi
0x630B89: mov     ecx, esi
0x630B8B: call    edx
0x630B8D: cmp     byte ptr [esi+0D0h], 0
0x630B94: jnz     loc_630D2D
0x630B9A: mov     edx, [esi]
0x630B9C: mov     eax, [edx+194h]
0x630BA2: push    edi
0x630BA3: mov     ecx, esi
0x630BA5: call    eax
0x630BA7: pop     ebp
0x630BA8: pop     ebx
0x630BA9: pop     edi
0x630BAA: xor     al, al
0x630BAC: pop     esi
0x630BAD: add     esp, 44h
0x630BB0: retn    8
0x630BB3: lea     ecx, [esp+54h+var_24]
0x630BB7: call    sub_404C90
0x630BBC: fld     [esp+54h+var_3C]
0x630BC0: fcompp
0x630BC2: fnstsw  ax
0x630BC4: test    ah, 1
0x630BC7: jnz     short loc_630B8D
0x630BC9: lea     ecx, [esp+54h+var_C]
0x630BCD: call    sub_404C90
0x630BD2: fstp    [esp+54h+arg_0]
0x630BD6: lea     ecx, [esp+54h+var_30]
0x630BDA: call    sub_404C90
0x630BDF: fld     [esp+54h+arg_0]
0x630BE3: fcompp
0x630BE5: fnstsw  ax
0x630BE7: test    ah, 41h
0x630BEA: jp      short loc_630B8D
0x630BEC: mov     eax, [esi]
0x630BEE: mov     edx, [eax+188h]
0x630BF4: push    1
0x630BF6: push    edi
0x630BF7: mov     ecx, esi
0x630BF9: call    edx
0x630BFB: mov     ebp, [esi+2Ch]
0x630BFE: mov     ecx, [ebp+58h]
0x630C01: mov     eax, [ecx]
0x630C03: mov     edx, [eax+184h]
0x630C09: call    edx
0x630C0B: test    eax, eax
0x630C0D: jz      loc_630B8D
0x630C13: mov     ecx, [ebp+58h]
0x630C16: mov     eax, [ecx]
0x630C18: mov     edx, [eax+188h]
0x630C1E: push    1
0x630C20: push    edi
0x630C21: call    edx
0x630C23: mov     ecx, [ebp+58h]
0x630C26: mov     eax, [ecx]
0x630C28: mov     edx, [eax+184h]
0x630C2E: call    edx
0x630C30: mov     ecx, eax
0x630C32: call    sub_5660A0
0x630C37: test    al, al
0x630C39: jz      loc_630B8D
0x630C3F: mov     ecx, [ebp+58h]
0x630C42: mov     eax, [ecx]
0x630C44: mov     edx, [eax+184h]
0x630C4A: call    edx
0x630C4C: cmp     eax, ebx
0x630C4E: jz      short loc_630C5B
0x630C50: mov     edx, [eax]
0x630C52: mov     ecx, eax
0x630C54: mov     eax, [edx+10h]
0x630C57: push    1
0x630C59: call    eax
0x630C5B: mov     ecx, [ebp+58h]
0x630C5E: mov     [ecx+8], ebx
0x630C61: mov     edx, [ebp+0]
0x630C64: mov     eax, [edx+44h]
0x630C67: push    30000h
0x630C6C: mov     ecx, ebp
0x630C6E: call    eax
0x630C70: mov     ecx, ebp
0x630C72: call    sub_5E05B0
0x630C77: test    al, al
0x630C79: jz      short loc_630C82
0x630C7B: mov     ecx, ebp
0x630C7D: call    sub_5E02B0
0x630C82: mov     edx, [esi]
0x630C84: mov     eax, [edx+0BCh]
0x630C8A: push    1
0x630C8C: mov     ecx, esi
0x630C8E: call    eax
0x630C90: mov     edx, [esi]
0x630C92: mov     eax, [edx+18h]
0x630C95: push    ebx
0x630C96: push    edi
0x630C97: mov     ecx, esi
0x630C99: call    eax
0x630C9B: pop     ebp
0x630C9C: pop     ebx
0x630C9D: pop     edi
0x630C9E: xor     al, al
0x630CA0: pop     esi
0x630CA1: add     esp, 44h
0x630CA4: retn    8
0x630CA7: mov     ecx, [esi+8]
0x630CAA: push    2
0x630CAC: push    edi
0x630CAD: call    sub_5677B0
0x630CB2: call    Double_To_SInt32
0x630CB7: mov     ecx, [esi+2Ch]
0x630CBA: cmp     ecx, ebx
0x630CBC: mov     [esp+54h+arg_0], eax
0x630CC0: jz      short loc_630CE9
0x630CC2: mov     edx, [ecx]
0x630CC4: mov     eax, [edx+190h]
0x630CCA: call    eax
0x630CCC: test    al, al
0x630CCE: jz      short loc_630CE9
0x630CD0: mov     ecx, [esi+2Ch]
0x630CD3: push    ebx
0x630CD4: push    ecx
0x630CD5: mov     ecx, edi
0x630CD7: call    TesObjectREF_GetDistance
0x630CDC: fild    [esp+54h+arg_0]
0x630CE0: fcompp
0x630CE2: fnstsw  ax
0x630CE4: test    ah, 5
0x630CE7: jp      short loc_630D2D
0x630CE9: fild    [esp+54h+arg_0]
0x630CED: mov     ebx, [esi]
0x630CEF: mov     ecx, [esi+8]
0x630CF2: sub     esp, 8
0x630CF5: fstp    [esp+5Ch+var_58]
0x630CF9: add     ebx, 418h
0x630CFF: fld     [esp+5Ch+arg_4]
0x630D03: fstp    [esp+5Ch+var_5C]
0x630D06: push    edi
0x630D07: call    sub_566940
0x630D0C: mov     ecx, [esi+8]
0x630D0F: push    eax
0x630D10: push    edi
0x630D11: call    sub_566A40
0x630D16: mov     ecx, [esi+8]
0x630D19: push    eax
0x630D1A: push    edi
0x630D1B: lea     edx, [esp+68h+var_C]
0x630D1F: push    edx
0x630D20: call    sub_566B30
0x630D25: push    eax
0x630D26: mov     eax, [ebx]
0x630D28: push    edi
0x630D29: mov     ecx, esi
0x630D2B: call    eax
0x630D2D: pop     ebp
0x630D2E: pop     ebx
0x630D2F: pop     edi
0x630D30: xor     al, al
0x630D32: pop     esi
0x630D33: add     esp, 44h
0x630D36: retn    8
