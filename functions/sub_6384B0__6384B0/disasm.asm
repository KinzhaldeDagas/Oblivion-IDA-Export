0x6384B0: sub     esp, 180h
0x6384B6: mov     eax, ds:0B30AACh
0x6384BB: xor     eax, esp
0x6384BD: mov     [esp+180h+var_4], eax
0x6384C4: push    ebx
0x6384C5: push    ebp
0x6384C6: push    esi
0x6384C7: mov     esi, ecx
0x6384C9: cmp     byte ptr [esi+228h], 0
0x6384D0: mov     eax, [esi]
0x6384D2: push    edi
0x6384D3: mov     edi, [esp+190h+arg_0]
0x6384DA: jz      short loc_6384EA
0x6384DC: mov     edx, [eax+194h]
0x6384E2: push    edi
0x6384E3: call    edx
0x6384E5: jmp     loc_6397A8
0x6384EA: mov     edx, [eax+184h]
0x6384F0: mov     byte ptr [esp+190h+var_15C+3], 0
0x6384F5: call    edx
0x6384F7: mov     ebp, eax
0x6384F9: mov     ecx, ebp
0x6384FB: mov     [esp+190h+var_140], ebp
0x6384FF: call    sub_566DB0
0x638504: test    eax, eax
0x638506: mov     [esp+190h+var_174], eax
0x63850A: fild    [esp+190h+var_174]
0x63850E: jge     short loc_638516
0x638510: fadd    dword ptr ds:0A2FC78h
0x638516: cmp     dword ptr [ebp+18h], 1
0x63851A: fstp    [esp+190h+var_178]
0x63851E: mov     byte ptr [esp+190h+var_180+3], 1
0x638523: jz      loc_6385FC
0x638529: mov     al, [ebp+20h]
0x63852C: cmp     al, 3
0x63852E: mov     byte ptr [esp+190h+var_180+3], 0
0x638533: jnz     loc_6385BF
0x638539: mov     ecx, edi
0x63853B: call    sub_5E4400
0x638540: fld     dword ptr ds:0A30634h
0x638546: push    ecx
0x638547: fstp    [esp+194h+var_198+4]; float
0x63854A: push    0; char
0x63854C: push    edi; int
0x63854D: mov     ecx, ebp
0x63854F: mov     ebx, eax
0x638551: call    sub_566DC0
0x638556: test    al, al
0x638558: jnz     short loc_63856E
0x63855A: mov     eax, [esi]
0x63855C: mov     edx, [eax+188h]
0x638562: push    0FFFFFFFEh
0x638564: push    edi
0x638565: mov     ecx, esi
0x638567: call    edx
0x638569: jmp     loc_6397A8
0x63856E: test    ebx, ebx
0x638570: jz      loc_6385FC
0x638576: mov     eax, [esi]
0x638578: mov     edx, [eax+36Ch]
0x63857E: mov     ecx, esi
0x638580: call    edx
0x638582: cmp     eax, 4
0x638585: mov     edx, [esi]
0x638587: mov     ecx, esi
0x638589: jnz     short loc_6385AF
0x63858B: mov     eax, [ebx+8]
0x63858E: mov     [esi+24h], eax
0x638591: mov     eax, [edx+0BCh]
0x638597: push    1
0x638599: call    eax
0x63859B: mov     edx, [esi]
0x63859D: mov     eax, [edx+188h]
0x6385A3: push    0FFFFFFFFh
0x6385A5: push    edi
0x6385A6: mov     ecx, esi
0x6385A8: call    eax
0x6385AA: jmp     loc_6397A8
0x6385AF: mov     eax, [edx+188h]
0x6385B5: push    0FFFFFFFFh
0x6385B7: push    edi
0x6385B8: call    eax
0x6385BA: jmp     loc_6397A8
0x6385BF: cmp     al, 4
0x6385C1: jnz     short loc_6385FC
0x6385C3: fld     dword ptr ds:0A30634h
0x6385C9: push    ecx
0x6385CA: fstp    [esp+194h+var_198+4]; float
0x6385CD: push    0; char
0x6385CF: push    edi; int
0x6385D0: mov     ecx, ebp
0x6385D2: call    sub_566DC0
0x6385D7: test    al, al
0x6385D9: mov     edx, [esi]
0x6385DB: mov     ecx, esi
0x6385DD: jnz     short loc_6385EF
0x6385DF: mov     eax, [edx+188h]
0x6385E5: push    0FFFFFFFEh
0x6385E7: push    edi
0x6385E8: call    eax
0x6385EA: jmp     loc_6397A8
0x6385EF: mov     eax, [edx+36Ch]
0x6385F5: call    eax
0x6385F7: cmp     eax, 9
0x6385FA: jz      short loc_63859B
0x6385FC: push    edi
0x6385FD: lea     ecx, [esp+194h+var_14C]
0x638601: push    ecx
0x638602: mov     ecx, ebp
0x638604: mov     [esp+198h+a1], 0
0x63860C: call    sub_566B30
0x638611: mov     ebx, [ebp+24h]
0x638614: test    ebx, ebx
0x638616: jz      short loc_638657
0x638618: mov     ecx, ebx
0x63861A: call    sub_5697E0
0x63861F: test    eax, eax
0x638621: mov     [esp+190h+a1], eax
0x638625: jnz     short loc_638657
0x638627: mov     ecx, ebx
0x638629: call    sub_569740
0x63862E: cmp     eax, 1
0x638631: jnz     short loc_638657
0x638633: mov     edx, [edi]
0x638635: mov     byte ptr [esp+190h+var_15C+3], al
0x638639: mov     eax, [edx+174h]
0x63863F: mov     ecx, edi
0x638641: call    eax
0x638643: mov     ecx, [eax]
0x638645: mov     [esp+190h+var_14C], ecx
0x638649: mov     edx, [eax+4]
0x63864C: mov     [esp+190h+var_148], edx
0x638650: mov     eax, [eax+8]
0x638653: mov     [esp+190h+var_144], eax
0x638657: mov     eax, [esi+30h]
0x63865A: test    eax, eax
0x63865C: jz      short loc_638669
0x63865E: cmp     dword ptr [esi+0C0h], 0
0x638665: mov     ebx, eax
0x638667: jz      short loc_63866D
0x638669: mov     ebx, [esp+190h+a1]
0x63866D: fld     [esp+190h+var_178]
0x638671: fcomp   qword ptr ds:0A2FCC8h
0x638677: fnstsw  ax
0x638679: test    ah, 5
0x63867C: jp      loc_638793
0x638682: cmp     byte ptr [esp+190h+var_180+3], 0
0x638687: jz      loc_63879A
0x63868D: fld     dword ptr ds:0A30634h
0x638693: push    ecx
0x638694: fstp    [esp+194h+var_198+4]; float
0x638697: push    0; char
0x638699: push    edi; int
0x63869A: mov     ecx, ebp
0x63869C: call    sub_566DC0
0x6386A1: test    al, al
0x6386A3: jz      loc_63859B
0x6386A9: test    ebx, ebx
0x6386AB: jz      loc_6397A8
0x6386B1: mov     edx, [ebx]
0x6386B3: mov     eax, [edx+170h]
0x6386B9: mov     ecx, ebx
0x6386BB: call    eax
0x6386BD: cmp     eax, ds:0B35EB0h
0x6386C3: jnz     loc_6397A8
0x6386C9: fld     dword ptr [ebx+28h]
0x6386CC: fstp    [esp+190h+var_178]
0x6386D0: fldz
0x6386D2: fld     [esp+190h+var_178]
0x6386D6: fcom    st(1)
0x6386D8: fnstsw  ax
0x6386DA: fstp    st(1)
0x6386DC: test    ah, 5
0x6386DF: fld     qword ptr ds:0A3D5B0h
0x6386E5: jp      short loc_638704
0x6386E7: call    unknown_libname_14
0x6386EC: fstp    [esp+190h+var_174]
0x6386F0: fld     [esp+190h+var_174]
0x6386F4: fadd    qword ptr ds:0A3D5B0h
0x6386FA: fstp    [esp+190h+var_178]
0x6386FE: fld     [esp+190h+var_178]
0x638702: jmp     short loc_638726
0x638704: fcom    st(1)
0x638706: fnstsw  ax
0x638708: test    ah, 41h
0x63870B: jp      short loc_638724
0x63870D: call    unknown_libname_14
0x638712: fstp    [esp+190h+var_174]
0x638716: fld     [esp+190h+var_174]
0x63871A: fstp    [esp+190h+var_178]
0x63871E: fld     [esp+190h+var_178]
0x638722: jmp     short loc_638726
0x638724: fstp    st
0x638726: fldz
0x638728: lea     ecx, [esp+190h+var_174]
0x63872C: push    ecx; int
0x63872D: fstp    [esp+194h+var_174]
0x638731: push    ecx
0x638732: fstp    [esp+198h+var_198]; float
0x638735: push    edi; int
0x638736: call    sub_683D80
0x63873B: fstp    [esp+19Ch+var_17C]
0x63873F: fld     [esp+19Ch+var_17C]
0x638743: add     esp, 0Ch
0x638746: fabs
0x638748: fstp    [esp+190h+var_17C]
0x63874C: fld     [esp+190h+var_17C]
0x638750: fild    dword ptr ds:0B36C18h
0x638756: fmul    qword ptr ds:0A31C78h
0x63875C: fstp    [esp+190h+var_17C]
0x638760: fld     [esp+190h+var_17C]
0x638764: fcompp
0x638766: fnstsw  ax
0x638768: test    ah, 5
0x63876B: jp      short loc_638785
0x63876D: fld     [esp+190h+var_178]
0x638771: push    1; char
0x638773: push    ecx
0x638774: fstp    [esp+198h+var_198]; float
0x638777: push    edi; Concurrency::details::SchedulerBase *
0x638778: call    sub_685530
0x63877D: add     esp, 0Ch
0x638780: jmp     loc_6397A8
0x638785: push    30h ; '0'
0x638787: mov     ecx, edi
0x638789: call    sub_5E05F0
0x63878E: jmp     loc_6397A8
0x638793: cmp     byte ptr [esp+190h+var_180+3], 0
0x638798: jnz     short loc_6387F1
0x63879A: fldz
0x63879C: fcomp   dword ptr [esi+1E8h]
0x6387A2: fnstsw  ax
0x6387A4: test    ah, 1
0x6387A7: jnz     short loc_6387DF
0x6387A9: cmp     byte ptr [esi+0D0h], 0
0x6387B0: jz      short loc_6387DF
0x6387B2: mov     edx, [esi]
0x6387B4: mov     eax, [edx+194h]
0x6387BA: push    edi
0x6387BB: mov     ecx, esi
0x6387BD: call    eax
0x6387BF: mov     edx, [esi]
0x6387C1: mov     eax, [edx+188h]
0x6387C7: push    0FFFFFFFFh
0x6387C9: push    edi
0x6387CA: mov     ecx, esi
0x6387CC: call    eax
0x6387CE: fld     dword ptr ds:0A417B4h
0x6387D4: fstp    dword ptr [esi+1E8h]
0x6387DA: jmp     loc_6397A8
0x6387DF: fld     dword ptr [esi+1E8h]
0x6387E5: fsub    dword ptr ds:0B33E9Ch
0x6387EB: fstp    dword ptr [esi+1E8h]
0x6387F1: cmp     byte ptr [esi+0D0h], 0
0x6387F8: jz      loc_6396E7
0x6387FE: mov     edx, [esi]
0x638800: mov     eax, [edx+36Ch]
0x638806: mov     ecx, esi
0x638808: call    eax
0x63880A: cmp     eax, 4
0x63880D: jz      short loc_638834
0x63880F: mov     edx, [esi]
0x638811: mov     eax, [edx+36Ch]
0x638817: mov     ecx, esi
0x638819: call    eax
0x63881B: test    eax, eax
0x63881D: jz      short loc_638834
0x63881F: mov     edx, [esi]
0x638821: mov     eax, [edx+36Ch]
0x638827: mov     ecx, esi
0x638829: call    eax
0x63882B: cmp     eax, 9
0x63882E: jnz     loc_6396DA
0x638834: cmp     dword ptr [esi+120h], 0
0x63883B: jz      loc_638937
0x638841: mov     edx, [esi]
0x638843: mov     eax, [edx+36Ch]
0x638849: mov     ecx, esi
0x63884B: call    eax
0x63884D: cmp     eax, 4
0x638850: jz      loc_638937
0x638856: mov     edx, [esi]
0x638858: mov     eax, [edx+36Ch]
0x63885E: mov     ecx, esi
0x638860: call    eax
0x638862: test    eax, eax
0x638864: jnz     short loc_6388E0
0x638866: lea     ebx, [esi+128h]
0x63886C: push    ebx
0x63886D: mov     ecx, edi
0x63886F: call    sub_4D7E30
0x638874: fcomp   qword ptr ds:0A2FCC8h
0x63887A: fnstsw  ax
0x63887C: test    ah, 41h
0x63887F: jnz     short loc_6388E0
0x638881: cmp     byte ptr ds:0B3B935h, 0
0x638888: jnz     loc_6397A8
0x63888E: mov     byte ptr ds:0B3B935h, 1
0x638895: mov     ebp, [esi]
0x638897: mov     ecx, [esi+120h]; this
0x63889D: add     ebp, 3DCh
0x6388A3: call    TESObjectREFR_GetWorldSpace
0x6388A8: mov     ecx, [esi+120h]; this
0x6388AE: push    eax
0x6388AF: call    TESObjectREFR_GetParentCell
0x6388B4: mov     ecx, [ebx]
0x6388B6: mov     edx, [ebx+4]
0x6388B9: push    eax
0x6388BA: sub     esp, 0Ch
0x6388BD: mov     eax, esp
0x6388BF: mov     [eax], ecx
0x6388C1: mov     ecx, [ebx+8]
0x6388C4: mov     [eax+4], edx
0x6388C7: mov     edx, [ebp+0]
0x6388CA: mov     [eax+8], ecx
0x6388CD: push    edi
0x6388CE: mov     ecx, esi
0x6388D0: call    edx
0x6388D2: test    al, al
0x6388D4: jz      loc_6397A8
0x6388DA: mov     ebp, [esp+190h+var_140]
0x6388DE: jmp     short loc_638937
0x6388E0: mov     eax, [esi]
0x6388E2: mov     edx, [eax+1B4h]
0x6388E8: push    edi
0x6388E9: mov     ecx, esi
0x6388EB: call    edx
0x6388ED: test    al, al
0x6388EF: jnz     short loc_638937
0x6388F1: fldz
0x6388F3: push    ecx
0x6388F4: lea     ebx, [esi+128h]
0x6388FA: fstp    [esp+194h+var_198+4]; float
0x6388FD: mov     ecx, ebx
0x6388FF: call    sub_6FAEE0
0x638904: mov     byte ptr [esi+136h], 0
0x63890B: mov     eax, ds:0B3F9A8h
0x638910: mov     [ebx], eax
0x638912: mov     ecx, ds:0B3F9ACh
0x638918: mov     eax, [esi]
0x63891A: push    7Fh
0x63891C: mov     [ebx+4], ecx
0x63891F: mov     edx, ds:0B3F9B0h
0x638925: push    0
0x638927: push    0; float
0x638929: mov     [ebx+8], edx
0x63892C: mov     edx, [eax+370h]
0x638932: push    edi; float
0x638933: mov     ecx, esi
0x638935: call    edx
0x638937: mov     eax, ds:0B333C4h
0x63893C: push    0
0x63893E: push    eax
0x63893F: mov     ecx, edi
0x638941: call    TesObjectREF_GetDistance
0x638946: fstp    [esp+190h+var_174]
0x63894A: mov     ecx, edi
0x63894C: call    sub_5E32D0
0x638951: test    al, al
0x638953: jz      loc_638DDA
0x638959: fld     [esp+190h+var_174]
0x63895D: fld     dword ptr ds:0B36930h
0x638963: fcompp
0x638965: fnstsw  ax
0x638967: test    ah, 1
0x63896A: jnz     loc_638DDA
0x638970: fldz
0x638972: fcomp   dword ptr [esi+1A8h]
0x638978: fnstsw  ax
0x63897A: test    ah, 1
0x63897D: jnz     loc_638DDA
0x638983: mov     ecx, [ebp+1Ch]
0x638986: shr     ecx, 0Ch
0x638989: test    cl, 1
0x63898C: jnz     loc_638DDA
0x638992: mov     edx, [esi]
0x638994: mov     eax, [edx+200h]
0x63899A: mov     ecx, esi
0x63899C: call    eax
0x63899E: test    al, al
0x6389A0: jnz     loc_638DDA
0x6389A6: cmp     ds:0B3BD99h, al
0x6389AC: jz      loc_638DDA
0x6389B2: mov     ecx, [esi+18Ch]
0x6389B8: test    ecx, ecx
0x6389BA: mov     [esp+190h+var_174], ecx
0x6389BE: jz      loc_638DEC
0x6389C4: mov     eax, [ecx]
0x6389C6: test    eax, eax
0x6389C8: jz      loc_638DEC
0x6389CE: cmp     dword ptr [eax+4], 3
0x6389D2: mov     ebp, [eax]
0x6389D4: jnz     loc_638BA9
0x6389DA: cmp     byte ptr [eax+8], 0
0x6389DE: jz      loc_638BA9
0x6389E4: cmp     ebp, edi
0x6389E6: jz      loc_638BA9
0x6389EC: cmp     dword ptr [ebp+58h], 0
0x6389F0: jz      loc_638BA9
0x6389F6: cmp     ebp, ds:0B333C4h
0x6389FC: jz      loc_638BA9
0x638A02: mov     ecx, ebp; this
0x638A04: call    Actor_IsNPC
0x638A09: test    al, al
0x638A0B: jz      loc_638BA5
0x638A11: mov     ecx, [ebp+58h]
0x638A14: mov     edx, [ecx]
0x638A16: mov     eax, [edx+3D0h]
0x638A1C: call    eax
0x638A1E: test    eax, eax
0x638A20: jnz     loc_638BA5
0x638A26: mov     ecx, [esp+190h+var_140]
0x638A2A: call    sub_566DB0
0x638A2F: test    eax, eax
0x638A31: mov     [esp+190h+var_17C], eax
0x638A35: fild    [esp+190h+var_17C]
0x638A39: jge     short loc_638A41
0x638A3B: fadd    dword ptr ds:0A2FC78h
0x638A41: cmp     byte ptr [esp+190h+var_180+3], 0
0x638A46: fstp    [esp+190h+a1]
0x638A4A: jnz     short loc_638A56
0x638A4C: fld     dword ptr ds:0A57FB8h
0x638A52: fstp    [esp+190h+a1]
0x638A56: mov     ecx, offset fAISocialRadiusToTriggerConversation
0x638A5B: call    GameSetting_GetSafeFloatPointer
0x638A60: fld     dword ptr [eax]
0x638A62: mov     ecx, edi; this
0x638A64: fstp    [esp+190h+var_17C]
0x638A68: call    TESObjectREFR_GetParentCell
0x638A6D: mov     ecx, eax; this
0x638A6F: call    TESObjectCELL_IsInterior
0x638A74: test    al, al
0x638A76: jz      short loc_638A88
0x638A78: mov     ecx, offset fAISocialRadiusToTriggerConversationInt
0x638A7D: call    GameSetting_GetSafeFloatPointer
0x638A82: fld     dword ptr [eax]
0x638A84: fstp    [esp+190h+var_17C]
0x638A88: fld     [esp+190h+a1]
0x638A8C: fld     [esp+190h+var_17C]
0x638A90: fcompp
0x638A92: fnstsw  ax
0x638A94: test    ah, 5
0x638A97: jp      short loc_638AA9
0x638A99: mov     ecx, offset fAISocialRadiusToTriggerConversation
0x638A9E: call    GameSetting_GetSafeFloatPointer
0x638AA3: fld     dword ptr [eax]
0x638AA5: fstp    [esp+190h+a1]
0x638AA9: lea     ecx, [esp+190h+var_14C]
0x638AAD: push    ecx
0x638AAE: mov     ecx, ebp
0x638AB0: call    sub_4D7E30
0x638AB5: fld     [esp+190h+a1]
0x638AB9: fcompp
0x638ABB: fnstsw  ax
0x638ABD: test    ah, 1
0x638AC0: jnz     loc_638BA5
0x638AC6: push    edi
0x638AC7: mov     ecx, ebp
0x638AC9: call    sub_5ED730
0x638ACE: test    al, al
0x638AD0: jnz     short loc_638AE9
0x638AD2: mov     edx, [ebp+0]
0x638AD5: mov     eax, [edx+198h]
0x638ADB: push    0
0x638ADD: mov     ecx, ebp
0x638ADF: call    eax
0x638AE1: test    al, al
0x638AE3: jz      loc_638BA5
0x638AE9: lea     ebx, [esi+190h]
0x638AEF: mov     ecx, ebx
0x638AF1: call    BSSimpleList_IsEmpty
0x638AF6: test    al, al
0x638AF8: jz      short loc_638B08
0x638AFA: mov     ecx, offset unk_B36AA8
0x638AFF: call    GameSetting_GetSafeFloatPointer
0x638B04: fld     dword ptr [eax]
0x638B06: jmp     short loc_638B14
0x638B08: fld     dword ptr [esi+198h]
0x638B0E: fsub    dword ptr ds:0B33E9Ch
0x638B14: fstp    dword ptr [esi+198h]
0x638B1A: fldz
0x638B1C: fcomp   dword ptr [esi+198h]
0x638B22: fnstsw  ax
0x638B24: test    ah, 1
0x638B27: jnz     short loc_638B30
0x638B29: mov     ecx, ebx
0x638B2B: call    BSSimpleList_Clear
0x638B30: push    0; Seed
0x638B32: call    GetRandomLargeInteger?
0x638B37: mov     ecx, eax
0x638B39: mov     eax, 0AE147AE1h
0x638B3E: imul    ecx
0x638B40: sar     edx, 5
0x638B43: mov     eax, edx
0x638B45: shr     eax, 1Fh
0x638B48: add     eax, edx
0x638B4A: imul    eax, 64h ; 'd'
0x638B4D: add     ecx, eax
0x638B4F: add     esp, 4
0x638B52: mov     [esp+190h+a1], ecx
0x638B56: push    ebp
0x638B57: mov     ecx, ebx
0x638B59: call    sub_446C30
0x638B5E: test    al, al
0x638B60: jnz     short loc_638BA5
0x638B62: mov     ecx, offset fAISocialchanceForConversation
0x638B67: call    GameSetting_GetSafeFloatPointer
0x638B6C: fld     dword ptr [eax]
0x638B6E: mov     ecx, edi; this
0x638B70: fstp    [esp+190h+var_17C]
0x638B74: call    TESObjectREFR_GetParentCell
0x638B79: mov     ecx, eax; this
0x638B7B: call    TESObjectCELL_IsInterior
0x638B80: test    al, al
0x638B82: jz      short loc_638B94
0x638B84: mov     ecx, offset fAISocialchanceForConversationInterior
0x638B89: call    GameSetting_GetSafeFloatPointer
0x638B8E: fld     dword ptr [eax]
0x638B90: fstp    [esp+190h+var_17C]
0x638B94: fild    [esp+190h+a1]
0x638B98: fld     [esp+190h+var_17C]
0x638B9C: fcompp
0x638B9E: fnstsw  ax
0x638BA0: test    ah, 41h
0x638BA3: jz      short loc_638BBD
0x638BA5: mov     ecx, [esp+190h+var_174]
0x638BA9: mov     ecx, [ecx+4]
0x638BAC: test    ecx, ecx
0x638BAE: mov     [esp+190h+var_174], ecx
0x638BB2: jnz     loc_6389C4
0x638BB8: jmp     loc_638DEC
0x638BBD: push    ebp
0x638BBE: lea     ecx, [esi+190h]
0x638BC4: call    BSSimpleList_PushFront
0x638BC9: mov     ecx, [ebp+58h]
0x638BCC: mov     edx, [ecx]
0x638BCE: mov     eax, [edx+16Ch]
0x638BD4: push    edi
0x638BD5: call    eax
0x638BD7: mov     ecx, ebp
0x638BD9: call    sub_5E32D0
0x638BDE: test    al, al
0x638BE0: jz      loc_638DEC
0x638BE6: mov     edx, [ebp+0]
0x638BE9: mov     eax, [edx+1A0h]
0x638BEF: mov     ecx, ebp
0x638BF1: call    eax
0x638BF3: test    al, al
0x638BF5: jnz     loc_638DEC
0x638BFB: mov     ecx, ebp
0x638BFD: call    sub_5E0F30
0x638C02: test    al, al
0x638C04: jnz     loc_638DEC
0x638C0A: mov     ecx, ebp; this
0x638C0C: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x638C11: cmp     eax, 3
0x638C14: jz      loc_638DEC
0x638C1A: push    edi
0x638C1B: mov     ecx, ebp
0x638C1D: call    sub_5ED730
0x638C22: test    al, al
0x638C24: jz      loc_638DEC
0x638C2A: mov     ecx, [ebp+58h]
0x638C2D: test    ecx, ecx
0x638C2F: jz      loc_638DEC
0x638C35: mov     edx, [ecx]
0x638C37: mov     eax, [edx+200h]
0x638C3D: call    eax
0x638C3F: test    al, al
0x638C41: jnz     loc_638DEC
0x638C47: cmp     ebp, ds:0B333C4h
0x638C4D: jz      loc_638DEC
0x638C53: mov     edx, [ebp+0]
0x638C56: mov     eax, [edx+198h]
0x638C5C: push    0
0x638C5E: mov     ecx, ebp
0x638C60: call    eax
0x638C62: test    al, al
0x638C64: jnz     loc_638DEC
0x638C6A: mov     edx, [ebp+0]
0x638C6D: mov     eax, [edx+154h]
0x638C73: mov     ecx, ebp
0x638C75: call    eax
0x638C77: test    eax, eax
0x638C79: jz      loc_638DEC
0x638C7F: mov     eax, [ebp+58h]
0x638C82: test    eax, eax
0x638C84: jz      loc_638DEC
0x638C8A: mov     eax, [eax+8]
0x638C8D: test    eax, eax
0x638C8F: jz      short loc_638CA0
0x638C91: mov     ecx, eax
0x638C93: call    sub_567770
0x638C98: test    al, al
0x638C9A: jnz     loc_638DEC
0x638CA0: mov     edx, [edi]
0x638CA2: mov     eax, [edx+2F4h]
0x638CA8: push    0
0x638CAA: push    0
0x638CAC: push    ebp
0x638CAD: mov     ecx, edi
0x638CAF: call    eax
0x638CB1: test    al, al
0x638CB3: jz      loc_638DEC
0x638CB9: fldz
0x638CBB: mov     ecx, offset unk_B36AB0
0x638CC0: fstp    dword ptr [esi+1D8h]
0x638CC6: call    GameSetting_GetSafeFloatPointer
0x638CCB: fld     dword ptr [eax]
0x638CCD: fstp    dword ptr [esi+1A8h]
0x638CD3: call    sub_579440
0x638CD8: cmp     eax, edi
0x638CDA: jnz     short loc_638D08
0x638CDC: mov     ecx, ebp; this
0x638CDE: call    TESObjectREFR_GetName
0x638CE3: push    eax
0x638CE4: mov     ecx, edi; this
0x638CE6: call    TESObjectREFR_GetName
0x638CEB: push    eax
0x638CEC: lea     ecx, [esp+198h+Format]
0x638CF0: push    offset aSWantsToTalkTo; "%s wants to talk to  %s "
0x638CF5: push    ecx
0x638CF6: call    __sprintf
0x638CFB: lea     edx, [esp+1A0h+Format]
0x638CFF: push    edx; Format
0x638D00: call    Interface_ConsolePrint
0x638D05: add     esp, 14h
0x638D08: mov     ecx, ebp
0x638D0A: call    sub_5E0380
0x638D0F: test    eax, eax
0x638D11: jz      short loc_638D58
0x638D13: mov     ecx, ebp
0x638D15: call    sub_5E0380
0x638D1A: mov     eax, [eax+1Ch]
0x638D1D: shr     eax, 0Ch
0x638D20: test    al, 1
0x638D22: jz      short loc_638D58
0x638D24: mov     edx, [ebp+0]
0x638D27: mov     eax, [edx+198h]
0x638D2D: push    0
0x638D2F: mov     ecx, ebp
0x638D31: call    eax
0x638D33: test    al, al
0x638D35: jnz     loc_638DCD
0x638D3B: mov     ecx, [edi+58h]
0x638D3E: mov     edx, [ecx]
0x638D40: mov     eax, [edx+188h]
0x638D46: push    3
0x638D48: push    edi
0x638D49: call    eax
0x638D4B: fldz
0x638D4D: fstp    dword ptr [esi+1D8h]
0x638D53: jmp     loc_6397A8
0x638D58: mov     eax, [ebp+58h]
0x638D5B: cmp     dword ptr [eax+8], 0
0x638D5F: jz      short loc_638DA7
0x638D61: mov     ecx, [eax+8]
0x638D64: call    sub_5660A0
0x638D69: test    al, al
0x638D6B: jnz     short loc_638DA7
0x638D6D: mov     ebx, [ebp+58h]
0x638D70: mov     edx, [ebx]
0x638D72: mov     eax, [edx+390h]
0x638D78: mov     ecx, ebx
0x638D7A: call    eax
0x638D7C: mov     edx, [ebx]
0x638D7E: mov     ecx, ebx
0x638D80: push    eax
0x638D81: mov     eax, [edx+0C0h]
0x638D87: call    eax
0x638D89: mov     edx, [ebx]
0x638D8B: mov     ecx, ebx
0x638D8D: push    eax
0x638D8E: mov     eax, [edx+0CCh]
0x638D94: call    eax
0x638D96: mov     ecx, [ebx+4]
0x638D99: mov     edx, [ebx+8]
0x638D9C: push    eax
0x638D9D: push    ecx
0x638D9E: push    edx
0x638D9F: lea     ecx, [ebp+44h]
0x638DA2: call    sub_4268B0
0x638DA7: push    1; a4
0x638DA9: push    0; a3
0x638DAB: mov     ecx, edi
0x638DAD: call    sub_5E0380
0x638DB2: push    eax; a2
0x638DB3: mov     ecx, ebp; this
0x638DB5: call    Actor_AddPackage?
0x638DBA: mov     ebp, [ebp+58h]
0x638DBD: mov     eax, [ebp+0]
0x638DC0: mov     edx, [eax+188h]
0x638DC6: push    1
0x638DC8: push    edi
0x638DC9: mov     ecx, ebp
0x638DCB: call    edx
0x638DCD: fldz
0x638DCF: fstp    dword ptr [esi+1D8h]
0x638DD5: jmp     loc_6397A8
0x638DDA: fld     dword ptr [esi+1A8h]
0x638DE0: fsub    dword ptr ds:0B33E9Ch
0x638DE6: fstp    dword ptr [esi+1A8h]
0x638DEC: fldz
0x638DEE: fcomp   dword ptr [esi+1D8h]
0x638DF4: fnstsw  ax
0x638DF6: test    ah, 5
0x638DF9: jp      short loc_638E12
0x638DFB: fld     dword ptr [esi+1D8h]
0x638E01: fsub    dword ptr ds:0B33E9Ch
0x638E07: fstp    dword ptr [esi+1D8h]
0x638E0D: jmp     loc_6397A8
0x638E12: mov     eax, [edi]
0x638E14: mov     edx, [eax+174h]
0x638E1A: mov     ecx, edi
0x638E1C: call    edx
0x638E1E: mov     ecx, [eax]
0x638E20: mov     [esp+190h+a2], ecx
0x638E24: mov     edx, [eax+4]
0x638E27: mov     [esp+190h+var_168], edx
0x638E2B: mov     eax, [eax+8]
0x638E2E: mov     ecx, edi; this
0x638E30: mov     [esp+190h+var_164], eax
0x638E34: call    TESObjectREFR_GetParentCell
0x638E39: mov     ecx, edi
0x638E3B: mov     [esp+190h+a1], eax
0x638E3F: call    sub_5E3290
0x638E44: test    al, al
0x638E46: jnz     loc_639097
0x638E4C: cmp     byte ptr [esp+190h+var_180+3], al
0x638E50: jz      short loc_638E58
0x638E52: cmp     byte ptr [esp+190h+var_15C+3], al
0x638E56: jz      short loc_638E62
0x638E58: fld     dword ptr ds:0A579A8h
0x638E5E: fstp    [esp+190h+var_178]
0x638E62: fld     [esp+190h+var_14C]
0x638E66: lea     ecx, [esp+190h+var_158]
0x638E6A: fsub    [esp+190h+a2]
0x638E6E: fstp    [esp+190h+var_158]
0x638E72: fld     [esp+190h+var_148]
0x638E76: fsub    [esp+190h+var_168]
0x638E7A: fstp    [esp+190h+var_154]
0x638E7E: fld     [esp+190h+var_144]
0x638E82: fsub    [esp+190h+var_164]
0x638E86: fstp    [esp+190h+var_150]
0x638E8A: fld     [esp+190h+var_178]
0x638E8E: fadd    qword ptr ds:0A529C0h
0x638E94: fstp    qword ptr [esp+190h+var_174]
0x638E98: call    sub_43F350
0x638E9D: fcomp   qword ptr [esp+190h+var_174]
0x638EA1: fnstsw  ax
0x638EA3: test    ah, 41h
0x638EA6: jnz     short loc_638EB7
0x638EA8: mov     edx, [esi]
0x638EAA: mov     eax, [edx+17Ch]
0x638EB0: push    0
0x638EB2: jmp     loc_6397A4
0x638EB7: mov     ecx, edi; this
0x638EB9: call    TESObjectREFR_GetParentCell
0x638EBE: mov     ecx, eax; this
0x638EC0: call    TESObjectCELL_IsInterior
0x638EC5: test    al, al
0x638EC7: mov     ecx, edi; this
0x638EC9: jz      loc_638FA1
0x638ECF: call    TESObjectREFR_GetParentCell
0x638ED4: fld     [esp+190h+var_178]
0x638ED8: fcomp   qword ptr ds:0A3F470h
0x638EDE: mov     edx, [edi]
0x638EE0: mov     ebp, eax
0x638EE2: mov     [esp+190h+a1], ebp
0x638EE6: mov     ecx, edi
0x638EE8: fnstsw  ax
0x638EEA: test    ah, 1
0x638EED: mov     eax, [edx+174h]
0x638EF3: jnz     short loc_638F24
0x638EF5: call    eax
0x638EF7: fld     [esp+190h+var_178]
0x638EFB: fld     qword ptr ds:0A3C770h
0x638F01: sub     esp, 14h
0x638F04: fmul    st, st(1)
0x638F06: fstp    [esp+1A4h+var_174]
0x638F0A: fld     [esp+1A4h+var_174]
0x638F0E: fstp    [esp+1A4h+var_198+4]
0x638F12: fdiv    qword ptr ds:0A30E48h
0x638F18: fadd    st, st
0x638F1A: fstp    [esp+1A4h+var_174]
0x638F1E: fld     [esp+1A4h+var_174]
0x638F22: jmp     short loc_638F31
0x638F24: call    eax
0x638F26: fld     [esp+190h+var_178]
0x638F2A: sub     esp, 14h
0x638F2D: fst     [esp+1A4h+var_198+4]; float
0x638F31: mov     edx, [eax]
0x638F33: fstp    [esp+1A4h+var_198]; float
0x638F37: mov     ecx, esp
0x638F39: mov     [ecx], edx
0x638F3B: mov     edx, [eax+4]
0x638F3E: mov     eax, [eax+8]
0x638F41: mov     [ecx+4], edx
0x638F44: mov     [ecx+8], eax
0x638F47: lea     ecx, [esp+1A4h+var_158]
0x638F4B: push    ecx; int
0x638F4C: call    sub_62E790
0x638F51: mov     ecx, [eax]
0x638F53: add     esp, 18h
0x638F56: push    0; int
0x638F58: push    1; float
0x638F5A: push    0; float
0x638F5C: mov     [esp+19Ch+a2], ecx
0x638F60: mov     edx, [eax+4]
0x638F63: push    ebp; int
0x638F64: mov     [esp+1A0h+var_168], edx
0x638F68: mov     ebx, [eax+8]
0x638F6B: sub     esp, 0Ch
0x638F6E: mov     eax, esp
0x638F70: mov     [eax], ecx
0x638F72: mov     [eax+4], edx
0x638F75: lea     edx, [esp+1ACh+var_158]
0x638F79: push    edx; int
0x638F7A: mov     ecx, edi
0x638F7C: mov     [esp+1B0h+var_164], ebx
0x638F80: mov     [eax+8], ebx
0x638F83: call    sub_5E2E20
0x638F88: mov     ecx, [eax]
0x638F8A: mov     [esp+190h+a2], ecx
0x638F8E: mov     edx, [eax+4]
0x638F91: mov     [esp+190h+var_168], edx
0x638F95: mov     eax, [eax+8]
0x638F98: mov     [esp+190h+var_164], eax
0x638F9C: jmp     loc_639076
0x638FA1: push    0; int
0x638FA3: call    TESObjectREFR_GetWorldSpace
0x638FA8: fld     [esp+194h+var_168]
0x638FAC: mov     ecx, ds:0B33A98h
0x638FB2: push    eax; int
0x638FB3: sub     esp, 8
0x638FB6: fstp    [esp+1A0h+a5+4]; float
0x638FBA: fld     [esp+1A0h+a2]
0x638FBE: fstp    [esp+1A0h+a5]; float
0x638FC1: call    sub_44A270
0x638FC6: mov     edx, [edi]
0x638FC8: mov     ebx, eax
0x638FCA: mov     eax, [edx+174h]
0x638FD0: mov     ecx, edi
0x638FD2: mov     [esp+190h+a1], ebx
0x638FD6: call    eax
0x638FD8: fld     [esp+190h+var_178]
0x638FDC: fld     qword ptr ds:0A3C770h
0x638FE2: sub     esp, 14h
0x638FE5: fmul    st, st(1)
0x638FE7: mov     edx, [eax]
0x638FE9: mov     ecx, esp
0x638FEB: fstp    [esp+1A4h+var_174]
0x638FEF: fld     [esp+1A4h+var_174]
0x638FF3: fstp    [esp+1A4h+var_198+4]; float
0x638FF7: fdiv    qword ptr ds:0A30E48h
0x638FFD: fadd    st, st
0x638FFF: fstp    [esp+1A4h+var_174]
0x639003: fld     [esp+1A4h+var_174]
0x639007: fstp    [esp+1A4h+var_198]; float
0x63900B: mov     [ecx], edx
0x63900D: mov     edx, [eax+4]
0x639010: mov     eax, [eax+8]
0x639013: mov     [ecx+4], edx
0x639016: mov     [ecx+8], eax
0x639019: lea     ecx, [esp+1A4h+var_158]
0x63901D: push    ecx; int
0x63901E: call    sub_62E790
0x639023: mov     edx, [eax]
0x639025: add     esp, 18h
0x639028: push    0; int
0x63902A: mov     [esp+194h+a2], edx
0x63902E: mov     ecx, [eax+4]
0x639031: push    0; float
0x639033: mov     [esp+198h+var_168], ecx
0x639037: mov     edx, [eax+8]
0x63903A: push    1; float
0x63903C: push    ebx; int
0x63903D: mov     [esp+1A0h+var_164], edx
0x639041: mov     edx, [eax]
0x639043: sub     esp, 0Ch
0x639046: mov     ecx, esp
0x639048: mov     [ecx], edx
0x63904A: mov     edx, [eax+4]
0x63904D: mov     eax, [eax+8]
0x639050: mov     [ecx+4], edx
0x639053: mov     [ecx+8], eax
0x639056: lea     ecx, [esp+1ACh+var_158]
0x63905A: push    ecx; int
0x63905B: mov     ecx, edi
0x63905D: call    sub_5E2E20
0x639062: mov     edx, [eax]
0x639064: mov     [esp+190h+a2], edx
0x639068: mov     ecx, [eax+4]
0x63906B: mov     [esp+190h+var_168], ecx
0x63906F: mov     edx, [eax+8]
0x639072: mov     [esp+190h+var_164], edx
0x639076: lea     eax, [esp+190h+a2]
0x63907A: push    eax
0x63907B: mov     ecx, edi
0x63907D: call    sub_4D7E30
0x639082: fcomp   dword ptr ds:0A417B4h
0x639088: fnstsw  ax
0x63908A: test    ah, 41h
0x63908D: jp      short loc_639097
0x63908F: fldz
0x639091: fstp    dword ptr [esi+1D8h]
0x639097: cmp     dword ptr ds:0B3B928h, 0
0x63909E: jnz     short loc_63910F
0x6390A0: mov     ecx, edi; this
0x6390A2: call    Actor_IsNPC
0x6390A7: test    al, al
0x6390A9: jz      short loc_63910F
0x6390AB: mov     ecx, offset dword_B3B94C
0x6390B0: call    BSSimpleList_Clear
0x6390B5: xor     ebx, ebx
0x6390B7: lea     ebp, [esi+1BCh]
0x6390BD: lea     ecx, [ecx+0]
0x6390C0: mov     eax, [ebp+0]
0x6390C3: test    eax, eax
0x6390C5: jz      short loc_6390DD
0x6390C7: push    eax
0x6390C8: mov     ecx, offset dword_B3B94C
0x6390CD: call    BSSimpleList_PushFront
0x6390D2: add     ebx, 1
0x6390D5: add     ebp, 4
0x6390D8: cmp     ebx, 4
0x6390DB: jl      short loc_6390C0
0x6390DD: fld     [esp+190h+var_178]
0x6390E1: mov     eax, [esp+190h+a1]
0x6390E5: push    edi; a7
0x6390E6: push    offset sub_62EAA0; a6
0x6390EB: push    ecx
0x6390EC: fstp    [esp+19Ch+a5+4]; a5
0x6390EF: lea     ecx, [esp+19Ch+var_14C]
0x6390F3: fld     dword ptr ds:0A34A80h
0x6390F9: push    ecx; a4
0x6390FA: push    ecx
0x6390FB: mov     ecx, ds:0B33A98h
0x639101: fstp    [esp+1A4h+a3]; a3
0x639104: lea     edx, [esp+1A4h+a2]
0x639108: push    edx; a2
0x639109: push    eax; a1
0x63910A: call    sub_446B90
0x63910F: mov     ebp, ds:0B3B928h
0x639115: xor     ebx, ebx
0x639117: cmp     ebp, ebx
0x639119: mov     ds:0B3B928h, ebx
0x63911F: jz      loc_63937D
0x639125: mov     ecx, ebp
0x639127: call    sub_4D74B0
0x63912C: test    al, al
0x63912E: jz      short loc_639140
0x639130: mov     edx, [esi]
0x639132: mov     eax, [edx+36Ch]
0x639138: mov     ecx, esi
0x63913A: call    eax
0x63913C: test    eax, eax
0x63913E: jnz     short loc_63918D
0x639140: cmp     [esi+1C8h], ebx
0x639146: jz      short loc_63916D
0x639148: mov     ecx, [esi+200h]
0x63914E: mov     [esi+ecx*4+1BCh], ebp
0x639155: add     dword ptr [esi+200h], 1
0x63915C: cmp     dword ptr [esi+200h], 3
0x639163: jle     short loc_63918D
0x639165: mov     [esi+200h], ebx
0x63916B: jmp     short loc_63918D
0x63916D: xor     eax, eax
0x63916F: lea     ecx, [esi+1BCh]
0x639175: cmp     [ecx], ebx
0x639177: jz      short loc_639186
0x639179: add     eax, 1
0x63917C: add     ecx, 4
0x63917F: cmp     eax, 4
0x639182: jl      short loc_639175
0x639184: jmp     short loc_63918D
0x639186: mov     [esi+eax*4+1BCh], ebp
0x63918D: push    ebx
0x63918E: push    ebp
0x63918F: mov     ecx, edi
0x639191: call    TesObjectREF_GetDistance
0x639196: fcomp   qword ptr ds:0A37478h
0x63919C: fnstsw  ax
0x63919E: test    ah, 41h
0x6391A1: jz      short loc_6391B2
0x6391A3: mov     ecx, ebp
0x6391A5: call    sub_4D74B0
0x6391AA: test    al, al
0x6391AC: jz      loc_6397A8
0x6391B2: cmp     byte ptr ds:0B3B935h, 0
0x6391B9: jnz     loc_6397A8
0x6391BF: mov     ecx, ebp
0x6391C1: mov     byte ptr ds:0B3B935h, 1
0x6391C8: call    sub_4D74B0
0x6391CD: test    al, al
0x6391CF: mov     ecx, esi
0x6391D1: jz      loc_639285
0x6391D7: mov     edx, [esi]
0x6391D9: mov     eax, [edx+36Ch]
0x6391DF: call    eax
0x6391E1: test    eax, eax
0x6391E3: jnz     loc_6392F0
0x6391E9: lea     ecx, [esp+190h+var_174]
0x6391ED: push    ecx
0x6391EE: lea     ebx, [esi+128h]
0x6391F4: push    ebx
0x6391F5: lea     edx, [esp+198h+var_158]
0x6391F9: push    edx
0x6391FA: mov     ecx, ebp
0x6391FC: mov     [esp+19Ch+var_174], eax
0x639200: call    sub_4E0E20
0x639205: test    al, al
0x639207: mov     ecx, ebp; this
0x639209: jz      short loc_639259
0x63920B: mov     al, byte ptr [esp+190h+var_174]
0x63920F: mov     [esi+124h], al
0x639215: mov     eax, [esi]
0x639217: add     eax, 3DCh
0x63921C: mov     [esi+120h], ebp
0x639222: mov     [esp+190h+var_17C], eax
0x639226: call    TESObjectREFR_GetWorldSpace
0x63922B: push    eax
0x63922C: mov     ecx, ebp; this
0x63922E: call    TESObjectREFR_GetParentCell
0x639233: mov     ecx, [ebx]
0x639235: mov     edx, [ebx+4]
0x639238: push    eax
0x639239: sub     esp, 0Ch
0x63923C: mov     eax, esp
0x63923E: mov     [eax], ecx
0x639240: mov     ecx, [ebx+8]
0x639243: mov     [eax+4], edx
0x639246: mov     edx, [esp+1A4h+var_17C]
0x63924A: mov     [eax+8], ecx
0x63924D: mov     eax, [edx]
0x63924F: push    edi
0x639250: mov     ecx, esi
0x639252: call    eax
0x639254: jmp     loc_6392E8
0x639259: mov     edx, [ebp+0]
0x63925C: mov     ebx, [esi]
0x63925E: mov     eax, [edx+174h]
0x639264: add     ebx, 3DCh
0x63926A: call    eax
0x63926C: mov     ecx, ebp; this
0x63926E: mov     [esp+18Ch+var_178], eax
0x639272: call    TESObjectREFR_GetWorldSpace
0x639277: push    eax
0x639278: mov     ecx, ebp; this
0x63927A: call    TESObjectREFR_GetParentCell
0x63927F: mov     ecx, [esp+190h+var_178]
0x639283: jmp     short loc_6392CB
0x639285: mov     eax, [esi]
0x639287: mov     edx, [eax+36Ch]
0x63928D: call    edx
0x63928F: test    eax, eax
0x639291: jz      short loc_63929F
0x639293: mov     eax, [edi]
0x639295: mov     edx, [eax+320h]
0x63929B: mov     ecx, edi
0x63929D: call    edx
0x63929F: mov     eax, [ebp+0]
0x6392A2: mov     ebx, [esi]
0x6392A4: mov     edx, [eax+174h]
0x6392AA: mov     ecx, ebp
0x6392AC: add     ebx, 3DCh
0x6392B2: call    edx
0x6392B4: mov     ecx, ebp; this
0x6392B6: mov     [esp+18Ch+var_170], eax
0x6392BA: call    TESObjectREFR_GetWorldSpace
0x6392BF: push    eax
0x6392C0: mov     ecx, ebp; this
0x6392C2: call    TESObjectREFR_GetParentCell
0x6392C7: mov     ecx, [esp+190h+var_170]
0x6392CB: mov     edx, [ecx]
0x6392CD: push    eax
0x6392CE: sub     esp, 0Ch
0x6392D1: mov     eax, esp
0x6392D3: mov     [eax], edx
0x6392D5: mov     edx, [ecx+4]
0x6392D8: mov     ecx, [ecx+8]
0x6392DB: mov     [eax+4], edx
0x6392DE: mov     edx, [ebx]
0x6392E0: mov     [eax+8], ecx
0x6392E3: push    edi
0x6392E4: mov     ecx, esi
0x6392E6: call    edx
0x6392E8: test    al, al
0x6392EA: jz      loc_6397A8
0x6392F0: mov     ecx, edi; this
0x6392F2: call    Actor_GetFatigueFraction
0x6392F7: push    ecx
0x6392F8: mov     ecx, edi
0x6392FA: fstp    [esp+194h+var_198+4]; float
0x6392FD: call    sub_5E1F90
0x639302: push    eax; int
0x639303: call    sub_546720
0x639308: fstp    dword ptr [esi+1D8h]
0x63930E: add     esp, 8
0x639311: call    sub_579440
0x639316: cmp     eax, edi
0x639318: jnz     loc_6397A8
0x63931E: mov     eax, [ebp+0]
0x639321: mov     edx, [eax+174h]
0x639327: mov     ecx, ebp
0x639329: call    edx
0x63932B: mov     esi, eax
0x63932D: mov     eax, [ebp+0]
0x639330: mov     edx, [eax+174h]
0x639336: mov     ecx, ebp
0x639338: call    edx
0x63933A: fld     dword ptr [eax+4]
0x63933D: sub     esp, 10h
0x639340: fstp    qword ptr [esp+1A0h+var_198]
0x639344: mov     ecx, ebp; this
0x639346: fld     dword ptr [esi]
0x639348: fstp    qword ptr [esp+1A0h+a5]
0x63934B: call    TESObjectREFR_GetName
0x639350: push    eax
0x639351: mov     ecx, edi; this
0x639353: call    TESObjectREFR_GetName
0x639358: push    eax
0x639359: lea     eax, [esp+1A8h+Format]
0x63935D: push    offset aSIsWanderingTo; "%s is wandering to object %s at x %.02f"...
0x639362: push    eax
0x639363: call    __sprintf
0x639368: lea     ecx, [esp+1B0h+Format]
0x63936F: push    ecx; Format
0x639370: call    Interface_ConsolePrint
0x639375: add     esp, 24h
0x639378: jmp     loc_6397A8
0x63937D: mov     ecx, edi; this
0x63937F: call    TESObjectREFR_GetParentCell
0x639384: mov     ecx, eax; this
0x639386: call    TESObjectCELL_IsInterior
0x63938B: test    al, al
0x63938D: jnz     loc_639627
0x639393: cmp     ds:0B3B935h, al
0x639399: jnz     loc_6397A8
0x63939F: fld     [esp+190h+a2]
0x6393A3: lea     ecx, [esp+190h+var_158]
0x6393A7: fsub    [esp+190h+var_14C]
0x6393AB: mov     byte ptr ds:0B3B935h, 1
0x6393B2: fstp    [esp+190h+var_158]
0x6393B6: fld     [esp+190h+var_168]
0x6393BA: fsub    [esp+190h+var_148]
0x6393BE: fstp    [esp+190h+var_154]
0x6393C2: fld     [esp+190h+var_164]
0x6393C6: fsub    [esp+190h+var_144]
0x6393CA: fstp    [esp+190h+var_150]
0x6393CE: fld     [esp+190h+var_178]
0x6393D2: fstp    qword ptr [esp+190h+var_174]
0x6393D6: call    sub_404C90
0x6393DB: fld     qword ptr [esp+190h+var_174]
0x6393DF: fcom    st(1)
0x6393E1: fnstsw  ax
0x6393E3: fstp    st(1)
0x6393E5: test    ah, 5
0x6393E8: jp      loc_63950C
0x6393EE: fmul    qword ptr ds:0A2FAA0h
0x6393F4: fstp    [esp+190h+var_174]
0x6393F8: fld     [esp+190h+var_178]
0x6393FC: fld     [esp+190h+var_174]
0x639400: mov     edx, [esp+190h+var_14C]
0x639404: mov     ecx, [esp+190h+var_148]
0x639408: sub     esp, 14h
0x63940B: fstp    [esp+1A4h+var_198+4]; float
0x63940F: mov     eax, esp
0x639411: fstp    [esp+1A4h+var_198]; float
0x639415: mov     [eax], edx
0x639417: mov     edx, [esp+1A4h+var_144]
0x63941B: mov     [eax+4], ecx
0x63941E: mov     [eax+8], edx
0x639421: lea     eax, [esp+1A4h+var_13C]
0x639425: push    eax; int
0x639426: call    sub_62E790
0x63942B: mov     ecx, [eax]
0x63942D: mov     [esp+1A8h+a2], ecx
0x639431: fld     [esp+1A8h+a2]
0x639435: fsub    [esp+1A8h+var_14C]
0x639439: mov     edx, [eax+4]
0x63943C: mov     [esp+1A8h+var_168], edx
0x639440: mov     eax, [eax+8]
0x639443: fstp    [esp+1A8h+var_158]
0x639447: mov     [esp+1A8h+var_164], eax
0x63944B: fld     [esp+1A8h+var_168]
0x63944F: add     esp, 18h
0x639452: fsub    [esp+190h+var_148]
0x639456: fstp    [esp+190h+var_154]
0x63945A: fld     [esp+190h+var_164]
0x63945E: fsub    [esp+190h+var_144]
0x639462: fstp    [esp+190h+var_150]
0x639466: fld     [esp+190h+var_158]
0x63946A: fld     [esp+190h+var_154]
0x63946E: fld     [esp+190h+var_150]
0x639472: fld     st(1)
0x639474: fmulp   st(2), st
0x639476: fld     st(2)
0x639478: fmulp   st(3), st
0x63947A: fxch    st(1)
0x63947C: faddp   st(2), st
0x63947E: fmul    st, st
0x639480: faddp   st(1), st
0x639482: fstp    [esp+190h+var_17C]
0x639486: fld     [esp+190h+var_17C]
0x63948A: call    __CIsqrt
0x63948F: fstp    [esp+190h+var_17C]
0x639493: fld     [esp+190h+var_17C]
0x639497: fld     [esp+190h+var_178]
0x63949B: fcom    st(1)
0x63949D: fnstsw  ax
0x63949F: fstp    st(1)
0x6394A1: test    ah, 5
0x6394A4: jnp     loc_6393FC
0x6394AA: mov     ecx, edi; this
0x6394AC: fstp    st
0x6394AE: call    TESObjectREFR_GetWorldSpace
0x6394B3: test    eax, eax
0x6394B5: jz      short loc_63950E
0x6394B7: push    0; int
0x6394B9: push    0; float
0x6394BB: push    1; float
0x6394BD: lea     ecx, [esp+19Ch+a2]
0x6394C1: push    ecx; float *
0x6394C2: mov     ecx, edi; this
0x6394C4: call    TESObjectREFR_GetWorldSpace
0x6394C9: mov     ecx, eax; this
0x6394CB: call    TESWorldSpace__GetCellAtPos
0x6394D0: mov     edx, [esp+19Ch+a2]
0x6394D4: mov     ecx, [esp+19Ch+var_168]
0x6394D8: push    eax; int
0x6394D9: sub     esp, 0Ch
0x6394DC: mov     eax, esp
0x6394DE: mov     [eax], edx
0x6394E0: mov     edx, [esp+1ACh+var_164]
0x6394E4: mov     [eax+4], ecx
0x6394E7: mov     [eax+8], edx
0x6394EA: lea     eax, [esp+1ACh+var_13C]
0x6394EE: push    eax; int
0x6394EF: mov     ecx, edi
0x6394F1: call    sub_5E2E20
0x6394F6: mov     ecx, [eax]
0x6394F8: mov     [esp+190h+a2], ecx
0x6394FC: mov     edx, [eax+4]
0x6394FF: mov     [esp+190h+var_168], edx
0x639503: mov     eax, [eax+8]
0x639506: mov     [esp+190h+var_164], eax
0x63950A: jmp     short loc_63950E
0x63950C: fstp    st
0x63950E: cmp     dword ptr [esi+1C8h], 0
0x639515: jz      short loc_639545
0x639517: mov     ecx, [esi+1C0h]
0x63951D: mov     edx, [esi+1C4h]
0x639523: mov     eax, [esi+1C8h]
0x639529: mov     [esi+1BCh], ecx
0x63952F: mov     [esi+1C0h], edx
0x639535: mov     [esi+1C4h], eax
0x63953B: mov     dword ptr [esi+1C8h], 0
0x639545: mov     edx, [esi]
0x639547: mov     eax, [edx+36Ch]
0x63954D: mov     ecx, esi
0x63954F: call    eax
0x639551: test    eax, eax
0x639553: jz      short loc_639561
0x639555: mov     edx, [edi]
0x639557: mov     eax, [edx+320h]
0x63955D: mov     ecx, edi
0x63955F: call    eax
0x639561: mov     ebx, [esi]
0x639563: mov     ecx, edi; this
0x639565: add     ebx, 3DCh
0x63956B: call    TESObjectREFR_GetWorldSpace
0x639570: push    eax
0x639571: mov     ecx, edi; this
0x639573: call    TESObjectREFR_GetParentCell
0x639578: mov     ecx, [esp+194h+a2]
0x63957C: mov     edx, [esp+194h+var_168]
0x639580: push    eax
0x639581: sub     esp, 0Ch
0x639584: mov     eax, esp
0x639586: mov     [eax], ecx
0x639588: mov     ecx, [esp+1A4h+var_164]
0x63958C: mov     [eax+4], edx
0x63958F: mov     edx, [ebx]
0x639591: mov     [eax+8], ecx
0x639594: push    edi
0x639595: mov     ecx, esi
0x639597: call    edx
0x639599: test    al, al
0x63959B: jz      loc_6397A8
0x6395A1: lea     eax, [esp+190h+a2]
0x6395A5: push    eax
0x6395A6: mov     ecx, edi
0x6395A8: call    sub_4D7E30
0x6395AD: fcomp   qword ptr ds:0A3F3D0h
0x6395B3: fnstsw  ax
0x6395B5: test    ah, 5
0x6395B8: jp      short loc_6395BE
0x6395BA: fldz
0x6395BC: jmp     short loc_6395D9
0x6395BE: mov     ecx, edi; this
0x6395C0: call    Actor_GetFatigueFraction
0x6395C5: push    ecx
0x6395C6: mov     ecx, edi
0x6395C8: fstp    [esp+194h+var_198+4]; float
0x6395CB: call    sub_5E1F90
0x6395D0: push    eax; int
0x6395D1: call    sub_546720
0x6395D6: add     esp, 8
0x6395D9: fstp    dword ptr [esi+1D8h]
0x6395DF: call    sub_579440
0x6395E4: cmp     eax, edi
0x6395E6: jnz     loc_6397A8
0x6395EC: fld     [esp+190h+var_168]
0x6395F0: sub     esp, 10h
0x6395F3: fstp    qword ptr [esp+1A0h+var_198]
0x6395F7: mov     ecx, edi; this
0x6395F9: fld     [esp+1A0h+a2]
0x6395FD: fstp    qword ptr [esp+1A0h+a5]
0x639600: call    TESObjectREFR_GetName
0x639605: push    eax
0x639606: lea     ecx, [esp+1A4h+Format]
0x63960A: push    offset aSIsWandering_0; "%s is wandering to point x %.02f and y "...
0x63960F: push    ecx
0x639610: call    __sprintf
0x639615: lea     edx, [esp+1ACh+Format]
0x639619: push    edx; Format
0x63961A: call    Interface_ConsolePrint
0x63961F: add     esp, 20h
0x639622: jmp     loc_6397A8
0x639627: cmp     byte ptr ds:0B3B935h, 0
0x63962E: jnz     loc_6397A8
0x639634: mov     byte ptr ds:0B3B935h, 1
0x63963B: mov     eax, [esi]
0x63963D: mov     edx, [eax+36Ch]
0x639643: mov     ecx, esi
0x639645: call    edx
0x639647: test    eax, eax
0x639649: jz      short loc_639657
0x63964B: mov     eax, [edi]
0x63964D: mov     edx, [eax+320h]
0x639653: mov     ecx, edi
0x639655: call    edx
0x639657: mov     ebx, [esi]
0x639659: mov     ecx, edi; this
0x63965B: add     ebx, 3DCh
0x639661: call    TESObjectREFR_GetWorldSpace
0x639666: push    eax
0x639667: mov     ecx, edi; this
0x639669: call    TESObjectREFR_GetParentCell
0x63966E: mov     ecx, [esp+194h+a2]
0x639672: mov     edx, [esp+194h+var_168]
0x639676: push    eax
0x639677: sub     esp, 0Ch
0x63967A: mov     eax, esp
0x63967C: mov     [eax], ecx
0x63967E: mov     ecx, [esp+1A4h+var_164]
0x639682: mov     [eax+4], edx
0x639685: mov     edx, [ebx]
0x639687: mov     [eax+8], ecx
0x63968A: push    edi
0x63968B: mov     ecx, esi
0x63968D: call    edx
0x63968F: test    al, al
0x639691: jz      loc_6397A8
0x639697: lea     eax, [esp+190h+a2]
0x63969B: push    eax
0x63969C: mov     ecx, edi
0x63969E: call    sub_4D7E30
0x6396A3: fcomp   qword ptr ds:0A3F3D0h
0x6396A9: fnstsw  ax
0x6396AB: test    ah, 5
0x6396AE: jnp     loc_638DCD
0x6396B4: mov     ecx, edi; this
0x6396B6: call    Actor_GetFatigueFraction
0x6396BB: push    ecx
0x6396BC: mov     ecx, edi
0x6396BE: fstp    [esp+194h+var_198+4]; float
0x6396C1: call    sub_5E1F90
0x6396C6: push    eax; int
0x6396C7: call    sub_546720
0x6396CC: fstp    dword ptr [esi+1D8h]
0x6396D2: add     esp, 8
0x6396D5: jmp     loc_6397A8
0x6396DA: cmp     byte ptr [esi+0D0h], 0
0x6396E1: jnz     loc_6397A8
0x6396E7: mov     ecx, [esi+120h]
0x6396ED: test    ecx, ecx
0x6396EF: jz      short loc_639726
0x6396F1: movzx   edx, byte ptr [esi+124h]
0x6396F8: push    edx
0x6396F9: call    sub_4D72C0
0x6396FE: test    al, al
0x639700: jz      short loc_639726
0x639702: mov     eax, [esi]
0x639704: mov     edx, [eax+194h]
0x63970A: push    edi
0x63970B: mov     ecx, esi
0x63970D: call    edx
0x63970F: fldz
0x639711: fstp    dword ptr [esi+1D8h]
0x639717: mov     dword ptr [esi+120h], 0
0x639721: jmp     loc_6397A8
0x639726: mov     eax, [esi]
0x639728: mov     edx, [eax+238h]
0x63972E: push    101h
0x639733: push    edi
0x639734: mov     ecx, esi
0x639736: call    edx
0x639738: cmp     dword ptr [esi+120h], 0
0x63973F: jnz     short loc_639749
0x639741: fld     dword ptr ds:0A5793Ch
0x639747: jmp     short loc_63974F
0x639749: fld     dword ptr ds:0A31C80h
0x63974F: cmp     dword ptr [esi+34h], 0
0x639753: fstp    [esp+190h+var_174]
0x639757: jnz     short loc_639765
0x639759: mov     eax, [esi]
0x63975B: mov     edx, [eax+408h]
0x639761: mov     ecx, esi
0x639763: call    edx
0x639765: mov     ebx, [esi]
0x639767: fld     [esp+190h+var_174]
0x63976B: push    ecx
0x63976C: mov     ecx, [esi+34h]
0x63976F: fstp    [esp+194h+var_198+4]
0x639772: add     ebx, 414h
0x639778: call    sub_68A1A0
0x63977D: mov     ecx, [esi+34h]
0x639780: push    eax
0x639781: call    sub_68A190
0x639786: mov     ecx, [esi+34h]
0x639789: push    eax
0x63978A: call    sub_68A160
0x63978F: push    eax
0x639790: mov     eax, [ebx]
0x639792: push    edi
0x639793: mov     ecx, esi
0x639795: call    eax
0x639797: test    al, al
0x639799: jnz     short loc_6397A8
0x63979B: mov     edx, [esi]
0x63979D: mov     eax, [edx+194h]
0x6397A3: push    edi
0x6397A4: mov     ecx, esi
0x6397A6: call    eax
0x6397A8: mov     ecx, [esp+190h+var_4]
0x6397AF: pop     edi
0x6397B0: pop     esi
0x6397B1: pop     ebp
0x6397B2: pop     ebx
0x6397B3: xor     ecx, esp
0x6397B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6397BA: add     esp, 180h
0x6397C0: retn    4
