0x655590: sub     esp, 24h
0x655593: push    ebp
0x655594: push    esi
0x655595: mov     esi, [esp+2Ch+arg_0]
0x655599: mov     eax, [esi]
0x65559B: mov     edx, [eax+380h]
0x6555A1: mov     ebp, ecx
0x6555A3: push    edi
0x6555A4: mov     ecx, esi
0x6555A6: call    edx
0x6555A8: mov     edi, eax
0x6555AA: test    edi, edi
0x6555AC: jnz     short loc_6555B9
0x6555AE: pop     edi
0x6555AF: pop     esi
0x6555B0: xor     al, al
0x6555B2: pop     ebp
0x6555B3: add     esp, 24h
0x6555B6: retn    4
0x6555B9: mov     ecx, [edi+58h]
0x6555BC: test    ecx, ecx
0x6555BE: jz      short loc_6555EC
0x6555C0: mov     eax, [ecx]
0x6555C2: mov     edx, [eax+174h]
0x6555C8: call    edx
0x6555CA: test    eax, eax
0x6555CC: jz      short loc_6555EC
0x6555CE: mov     ecx, [edi+58h]
0x6555D1: mov     eax, [ecx]
0x6555D3: mov     edx, [eax+174h]
0x6555D9: call    edx
0x6555DB: cmp     byte ptr [eax+20h], 1Eh
0x6555DF: jnz     short loc_6555EC
0x6555E1: pop     edi
0x6555E2: pop     esi
0x6555E3: mov     al, 1
0x6555E5: pop     ebp
0x6555E6: add     esp, 24h
0x6555E9: retn    4
0x6555EC: mov     eax, [edi+58h]
0x6555EF: mov     edx, [edi]
0x6555F1: mov     [esp+30h+var_24], eax
0x6555F5: mov     eax, [edx+164h]
0x6555FB: push    ebx
0x6555FC: mov     ecx, edi
0x6555FE: call    eax
0x655600: mov     edx, [esi]
0x655602: mov     [esp+34h+arg_0], eax
0x655606: mov     eax, [edx+164h]
0x65560C: mov     ecx, esi
0x65560E: call    eax
0x655610: mov     edx, [edi]
0x655612: mov     ebx, eax
0x655614: mov     eax, [edx+154h]
0x65561A: mov     ecx, edi
0x65561C: call    eax
0x65561E: mov     edx, [esi]
0x655620: mov     [esp+34h+var_20], eax
0x655624: mov     eax, [edx+154h]
0x65562A: mov     ecx, esi
0x65562C: call    eax
0x65562E: cmp     [esp+34h+var_20], 0
0x655633: mov     [esp+34h+var_18], eax
0x655637: jz      loc_655BDD
0x65563D: test    eax, eax
0x65563F: jz      loc_655BDD
0x655645: mov     ecx, [esp+34h+arg_0]
0x655649: mov     edx, [ecx+98h]
0x65564F: mov     ecx, [edx+7Ch]
0x655652: mov     eax, [ecx]
0x655654: mov     edx, [eax+4Ch]
0x655657: push    offset aActorparent; "ActorParent"
0x65565C: call    edx
0x65565E: mov     [esp+34h+var_20], eax
0x655662: lea     eax, [esp+34h+var_C]
0x655666: push    eax
0x655667: mov     ecx, edi
0x655669: call    sub_625290
0x65566E: cmp     [esp+34h+var_20], 0
0x655673: jnz     short loc_6556A1
0x655675: mov     edx, [edi]
0x655677: mov     eax, [edx+170h]
0x65567D: mov     ecx, edi
0x65567F: call    eax
0x655681: push    eax
0x655682: call    GetFormModelPAth
0x655687: push    eax; ArgList
0x655688: push    offset aMissingActorpa; "Missing 'ActorParent' node for horse '%"...
0x65568D: call    PrintError
0x655692: add     esp, 0Ch
0x655695: pop     ebx
0x655696: pop     edi
0x655697: pop     esi
0x655698: xor     al, al
0x65569A: pop     ebp
0x65569B: add     esp, 24h
0x65569E: retn    4
0x6556A1: mov     edx, [esi]
0x6556A3: mov     eax, [edx+0ECh]
0x6556A9: mov     ecx, esi
0x6556AB: call    eax
0x6556AD: fld1
0x6556AF: fdivrp  st(1), st
0x6556B1: mov     ecx, [esp+34h+var_20]
0x6556B5: mov     edx, [ecx]
0x6556B7: mov     eax, [edx+8]
0x6556BA: fstp    [esp+34h+var_1C]
0x6556BE: fld     [esp+34h+var_1C]
0x6556C2: fabs
0x6556C4: fstp    [esp+34h+var_1C]
0x6556C8: fld     [esp+34h+var_1C]
0x6556CC: fstp    dword ptr [ecx+60h]
0x6556CF: call    eax
0x6556D1: mov     [esp+34h+var_20], eax
0x6556D5: movzx   eax, byte ptr [ebp+11Dh]
0x6556DC: sub     eax, 0
0x6556DF: jz      loc_655A70
0x6556E5: sub     eax, 2
0x6556E8: jz      loc_655936
0x6556EE: sub     eax, 1
0x6556F1: jnz     loc_655B9B
0x6556F7: mov     ecx, [esp+34h+arg_0]
0x6556FB: call    sub_4711F0
0x655700: test    al, al
0x655702: jz      loc_6558B8
0x655708: mov     edx, [ebp+0]
0x65570B: mov     eax, [edx+2D0h]
0x655711: mov     ecx, ebp
0x655713: call    eax
0x655715: cmp     eax, 0FFFFFFFFh
0x655718: jnz     loc_6558B8
0x65571E: push    0
0x655720: mov     ecx, ebx
0x655722: call    sub_4706E0
0x655727: test    eax, eax
0x655729: jz      short loc_65573E
0x65572B: push    0
0x65572D: mov     ecx, ebx
0x65572F: call    sub_4706E0
0x655734: cmp     dword ptr [eax+44h], 1
0x655738: jnz     loc_6558B8
0x65573E: fldz
0x655740: push    ecx
0x655741: fstp    [esp+38h+var_38]; float
0x655744: mov     ecx, ebx
0x655746: push    0; int
0x655748: call    sub_470FC0
0x65574D: mov     ecx, [esp+34h+var_20]
0x655751: mov     eax, [esp+34h+var_18]
0x655755: mov     byte ptr [ebx+0C4h], 1
0x65575C: mov     edx, [ecx]
0x65575E: mov     edx, [edx+84h]
0x655764: push    1
0x655766: push    eax
0x655767: call    edx
0x655769: mov     ecx, edi; this
0x65576B: call    TESObjectREFR_GetParentCell
0x655770: mov     ecx, esi; this
0x655772: mov     ebp, eax
0x655774: call    TESObjectREFR_GetParentCell
0x655779: cmp     eax, ebp
0x65577B: jz      short loc_6557B3
0x65577D: mov     ecx, edi; this
0x65577F: call    TESObjectREFR_GetParentCell
0x655784: test    eax, eax
0x655786: jz      short loc_655799
0x655788: push    esi; Concurrency::details::SchedulerBase *
0x655789: mov     ecx, edi; this
0x65578B: call    TESObjectREFR_GetParentCell
0x655790: mov     ecx, eax
0x655792: call    sub_4D35D0
0x655797: jmp     short loc_6557B3
0x655799: mov     ecx, esi; this
0x65579B: call    TESObjectREFR_GetParentCell
0x6557A0: test    eax, eax
0x6557A2: jz      short loc_6557B3
0x6557A4: push    esi
0x6557A5: mov     ecx, esi; this
0x6557A7: call    TESObjectREFR_GetParentCell
0x6557AC: mov     ecx, eax
0x6557AE: call    sub_4CECD0
0x6557B3: fld     dword ptr [ebx+94h]
0x6557B9: mov     eax, [esp+34h+arg_0]
0x6557BD: push    1
0x6557BF: fstp    dword ptr [eax+94h]
0x6557C5: mov     ecx, edi
0x6557C7: call    sub_5E13D0
0x6557CC: mov     ecx, ds:0B333C4h
0x6557D2: cmp     esi, ecx
0x6557D4: jnz     short loc_65582D
0x6557D6: push    1
0x6557D8: call    PlayerCharacter_GetPlayerNode
0x6557DD: mov     ecx, ds:0B3F9A8h
0x6557E3: mov     [eax+54h], ecx
0x6557E6: mov     edx, ds:0B3F9ACh
0x6557EC: mov     [eax+58h], edx
0x6557EF: mov     ecx, ds:0B3F9B0h
0x6557F5: mov     [eax+5Ch], ecx
0x6557F8: mov     ecx, [esp+34h+var_20]
0x6557FC: mov     edx, [ecx]
0x6557FE: push    1
0x655800: push    eax
0x655801: mov     eax, [edx+84h]
0x655807: call    eax
0x655809: lea     ecx, [esp+34h+var_14]
0x65580D: push    ecx
0x65580E: mov     ecx, ds:0B333C4h
0x655814: call    sub_65ABE0
0x655819: mov     edx, [edi]
0x65581B: movzx   ebx, word ptr [eax+2]
0x65581F: mov     eax, [edx+154h]
0x655825: mov     ecx, edi
0x655827: call    eax
0x655829: mov     ecx, edi
0x65582B: jmp     short loc_65584B
0x65582D: lea     ecx, [esp+34h+var_10]
0x655831: push    ecx
0x655832: mov     ecx, edi
0x655834: call    sub_65ABE0
0x655839: mov     edx, [esi]
0x65583B: movzx   ebx, word ptr [eax+2]
0x65583F: mov     eax, [edx+154h]
0x655845: mov     ecx, esi
0x655847: call    eax
0x655849: mov     ecx, esi; this
0x65584B: mov     ebp, eax
0x65584D: call    MobileObject_GetCharProxy
0x655852: push    ebx
0x655853: mov     ecx, eax
0x655855: call    sub_5EA350
0x65585A: push    0
0x65585C: push    1
0x65585E: push    ebx
0x65585F: push    ebp
0x655860: call    sub_88D0E0
0x655865: mov     esi, [esp+44h+arg_0]
0x655869: add     esp, 10h
0x65586C: push    edi
0x65586D: mov     ecx, esi
0x65586F: mov     byte ptr [esi+0C4h], 1
0x655876: call    sub_477E50
0x65587B: test    al, al
0x65587D: jz      loc_655B9B
0x655883: fld     dword ptr ds:0A30634h
0x655889: sub     esp, 8
0x65588C: fstp    [esp+3Ch+var_38]; float
0x655890: mov     ecx, esi; this
0x655892: fldz
0x655894: mov     byte ptr [esi+0C4h], 1
0x65589B: fstp    [esp+3Ch+var_3C]; float
0x65589E: push    edi; int
0x65589F: call    sub_476D10
0x6558A4: push    edi; a2
0x6558A5: mov     ecx, esi; this
0x6558A7: call    sub_474510
0x6558AC: pop     ebx
0x6558AD: pop     edi
0x6558AE: pop     esi
0x6558AF: mov     al, 1
0x6558B1: pop     ebp
0x6558B2: add     esp, 24h
0x6558B5: retn    4
0x6558B8: mov     ebx, [esp+34h+arg_0]
0x6558BC: mov     ecx, ebx
0x6558BE: call    sub_472EA0
0x6558C3: test    al, al
0x6558C5: jz      loc_655B9B
0x6558CB: fldz
0x6558CD: push    ecx
0x6558CE: fstp    [esp+38h+var_38]; float
0x6558D1: mov     ecx, ebx
0x6558D3: push    5; int
0x6558D5: call    sub_470FC0
0x6558DA: fld1
0x6558DC: sub     esp, 8
0x6558DF: fst     [esp+3Ch+var_38]; int
0x6558E3: mov     ecx, edi
0x6558E5: fstp    [esp+3Ch+var_3C]; float
0x6558E8: mov     byte ptr [ebx+0C4h], 1
0x6558EF: call    Actor_ProcessAction
0x6558F4: mov     edx, [ebp+0]
0x6558F7: mov     eax, [edx+188h]
0x6558FD: push    1
0x6558FF: push    esi
0x655900: mov     ecx, ebp
0x655902: call    eax
0x655904: fldz
0x655906: mov     edx, [esi]
0x655908: mov     eax, [edx+1E8h]
0x65590E: push    ecx
0x65590F: mov     ecx, esi
0x655911: fstp    [esp+38h+var_38]
0x655914: call    eax
0x655916: mov     edx, [ebp+0]
0x655919: mov     eax, [edx+370h]
0x65591F: push    7Fh
0x655921: push    0
0x655923: push    4
0x655925: push    esi
0x655926: mov     ecx, ebp
0x655928: call    eax
0x65592A: pop     ebx
0x65592B: pop     edi
0x65592C: pop     esi
0x65592D: mov     al, 1
0x65592F: pop     ebp
0x655930: add     esp, 24h
0x655933: retn    4
0x655936: mov     edx, [edi]
0x655938: mov     eax, [edx+1E0h]
0x65593E: mov     ecx, edi
0x655940: call    eax
0x655942: fadd    qword ptr ds:0A6E740h
0x655948: fstp    [esp+34h+arg_0]
0x65594C: fldz
0x65594E: fld     [esp+34h+arg_0]
0x655952: fcom    st(1)
0x655954: fnstsw  ax
0x655956: fstp    st(1)
0x655958: test    ah, 5
0x65595B: fld     qword ptr ds:0A3D5B0h
0x655961: jp      short loc_655980
0x655963: call    unknown_libname_14
0x655968: fstp    [esp+34h+arg_0]
0x65596C: fld     [esp+34h+arg_0]
0x655970: fadd    qword ptr ds:0A3D5B0h
0x655976: fstp    [esp+34h+arg_0]
0x65597A: fld     [esp+34h+arg_0]
0x65597E: jmp     short loc_6559A2
0x655980: fcom    st(1)
0x655982: fnstsw  ax
0x655984: test    ah, 41h
0x655987: jp      short loc_6559A0
0x655989: call    unknown_libname_14
0x65598E: fstp    [esp+34h+arg_0]
0x655992: fld     [esp+34h+arg_0]
0x655996: fstp    [esp+34h+arg_0]
0x65599A: fld     [esp+34h+arg_0]
0x65599E: jmp     short loc_6559A2
0x6559A0: fstp    st
0x6559A2: fldz
0x6559A4: lea     ecx, [esp+34h+var_18]
0x6559A8: push    ecx; int
0x6559A9: fstp    [esp+38h+var_18]
0x6559AD: push    ecx
0x6559AE: fstp    [esp+3Ch+var_3C]; float
0x6559B1: push    esi; int
0x6559B2: call    sub_683D80
0x6559B7: fstp    [esp+40h+var_1C]
0x6559BB: fld     [esp+40h+var_1C]
0x6559BF: add     esp, 0Ch
0x6559C2: fabs
0x6559C4: fstp    [esp+34h+var_1C]
0x6559C8: fld     [esp+34h+var_1C]
0x6559CC: fild    dword ptr ds:0B36C18h
0x6559D2: fmul    qword ptr ds:0A31C78h
0x6559D8: fstp    [esp+34h+var_1C]
0x6559DC: fld     [esp+34h+var_1C]
0x6559E0: fcompp
0x6559E2: fnstsw  ax
0x6559E4: test    ah, 5
0x6559E7: jp      short loc_655A08
0x6559E9: fld     [esp+34h+arg_0]
0x6559ED: push    1; char
0x6559EF: push    ecx
0x6559F0: fstp    [esp+3Ch+var_3C]; float
0x6559F3: push    esi; Concurrency::details::SchedulerBase *
0x6559F4: call    sub_685530
0x6559F9: add     esp, 0Ch
0x6559FC: pop     ebx
0x6559FD: pop     edi
0x6559FE: pop     esi
0x6559FF: mov     al, 1
0x655A01: pop     ebp
0x655A02: add     esp, 24h
0x655A05: retn    4
0x655A08: push    30h ; '0'
0x655A0A: mov     ecx, esi
0x655A0C: call    sub_5E05F0
0x655A11: fld     [esp+34h+arg_0]
0x655A15: mov     edx, [esi]
0x655A17: mov     eax, [edx+1E8h]
0x655A1D: push    ecx
0x655A1E: mov     ecx, esi
0x655A20: fstp    [esp+38h+var_38]
0x655A23: call    eax
0x655A25: mov     edx, [esi]
0x655A27: mov     edx, [edx+1CCh]
0x655A2D: lea     eax, [esp+34h+var_C]
0x655A31: push    eax
0x655A32: mov     ecx, esi
0x655A34: call    edx
0x655A36: mov     eax, ds:0B3F9A8h
0x655A3B: mov     [ebx+0Ch], eax
0x655A3E: mov     ecx, ds:0B3F9ACh
0x655A44: mov     [ebx+10h], ecx
0x655A47: mov     edx, ds:0B3F9B0h
0x655A4D: push    7Fh
0x655A4F: push    0
0x655A51: mov     [ebx+14h], edx
0x655A54: mov     eax, [ebp+0]
0x655A57: mov     edx, [eax+370h]
0x655A5D: push    3
0x655A5F: push    esi
0x655A60: mov     ecx, ebp
0x655A62: call    edx
0x655A64: pop     ebx
0x655A65: pop     edi
0x655A66: pop     esi
0x655A67: mov     al, 1
0x655A69: pop     ebp
0x655A6A: add     esp, 24h
0x655A6D: retn    4
0x655A70: mov     eax, [edi]
0x655A72: mov     edx, [eax+198h]
0x655A78: push    0
0x655A7A: mov     ecx, edi
0x655A7C: call    edx
0x655A7E: test    al, al
0x655A80: jnz     loc_655BA7
0x655A86: mov     eax, [edi]
0x655A88: mov     edx, [eax+388h]
0x655A8E: mov     ecx, edi
0x655A90: call    edx
0x655A92: cmp     eax, esi
0x655A94: jnz     loc_655BA7
0x655A9A: mov     eax, [ebp+0]
0x655A9D: mov     edx, [eax+2C4h]
0x655AA3: push    0
0x655AA5: push    400h
0x655AAA: mov     ecx, ebp
0x655AAC: call    edx
0x655AAE: cmp     esi, ds:0B333C4h
0x655AB4: jz      short loc_655AC4
0x655AB6: mov     eax, [ebp+0]
0x655AB9: mov     edx, [eax+194h]
0x655ABF: push    esi
0x655AC0: mov     ecx, ebp
0x655AC2: call    edx
0x655AC4: mov     ecx, [esp+30h+var_20]
0x655AC8: mov     eax, [ecx]
0x655ACA: mov     edx, [eax+370h]
0x655AD0: push    7Fh
0x655AD2: push    0
0x655AD4: push    2
0x655AD6: push    edi
0x655AD7: call    edx
0x655AD9: mov     eax, [ebp+120h]
0x655ADF: mov     ecx, ds:0B362C0h
0x655AE5: push    eax
0x655AE6: push    edi
0x655AE7: call    sub_521450
0x655AEC: mov     ecx, [esp+30h+var_20]
0x655AF0: mov     edx, [ecx]
0x655AF2: push    7Fh
0x655AF4: push    0
0x655AF6: push    0
0x655AF8: mov     [esp+3Ch+var_1C], eax
0x655AFC: mov     eax, [edx+370h]
0x655B02: push    edi
0x655B03: call    eax
0x655B05: mov     ecx, [esp+30h+var_1C]
0x655B09: test    ecx, ecx
0x655B0B: jnz     short loc_655B3F
0x655B0D: mov     edx, [esi]
0x655B0F: mov     eax, [edx+384h]
0x655B15: push    ecx
0x655B16: mov     ecx, esi
0x655B18: call    eax
0x655B1A: mov     edx, [edi]
0x655B1C: mov     eax, [edx+38Ch]
0x655B22: push    0
0x655B24: mov     ecx, edi
0x655B26: call    eax
0x655B28: mov     ecx, [esp+34h+var_24]
0x655B2C: pop     ebx
0x655B2D: pop     edi
0x655B2E: pop     esi
0x655B2F: mov     dword ptr [ecx+8], 0
0x655B36: xor     al, al
0x655B38: pop     ebp
0x655B39: add     esp, 24h
0x655B3C: retn    4
0x655B3F: call    sub_520200
0x655B44: mov     edx, [esp+30h+var_1C]
0x655B48: mov     ecx, [esp+30h+arg_4]
0x655B4C: push    eax
0x655B4D: push    edx
0x655B4E: call    sub_475300
0x655B53: mov     eax, [esi]
0x655B55: mov     edx, [eax+1CCh]
0x655B5B: lea     ecx, [esp+30h+var_8]
0x655B5F: push    ecx
0x655B60: mov     ecx, esi
0x655B62: call    edx
0x655B64: mov     eax, ds:0B3F9A8h
0x655B69: mov     [ebx+0Ch], eax
0x655B6C: mov     ecx, ds:0B3F9ACh
0x655B72: mov     [ebx+10h], ecx
0x655B75: mov     edx, ds:0B3F9B0h
0x655B7B: push    7Fh
0x655B7D: push    0
0x655B7F: mov     [ebx+14h], edx
0x655B82: mov     eax, [ebp+0]
0x655B85: mov     edx, [eax+370h]
0x655B8B: push    2
0x655B8D: push    esi
0x655B8E: mov     ecx, ebp
0x655B90: call    edx
0x655B92: push    1
0x655B94: mov     ecx, esi
0x655B96: call    sub_65AC20
0x655B9B: pop     ebx
0x655B9C: pop     edi
0x655B9D: pop     esi
0x655B9E: mov     al, 1
0x655BA0: pop     ebp
0x655BA1: add     esp, 24h
0x655BA4: retn    4
0x655BA7: mov     eax, [ebp+0]
0x655BAA: mov     edx, [eax+178h]
0x655BB0: push    0
0x655BB2: mov     ecx, ebp
0x655BB4: call    edx
0x655BB6: mov     eax, [esi]
0x655BB8: mov     edx, [eax+384h]
0x655BBE: push    0
0x655BC0: mov     ecx, esi
0x655BC2: call    edx
0x655BC4: mov     eax, [edi]
0x655BC6: mov     edx, [eax+384h]
0x655BCC: push    0
0x655BCE: mov     ecx, edi
0x655BD0: call    edx
0x655BD2: mov     eax, [esp+34h+var_24]
0x655BD6: mov     dword ptr [eax+8], 0
0x655BDD: pop     ebx
0x655BDE: pop     edi
0x655BDF: pop     esi
0x655BE0: xor     al, al
0x655BE2: pop     ebp
0x655BE3: add     esp, 24h
0x655BE6: retn    4
