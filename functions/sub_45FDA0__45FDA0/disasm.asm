0x45FDA0: sub     esp, 34h
0x45FDA3: mov     eax, ds:0B33398h
0x45FDA8: push    ebx
0x45FDA9: push    ebp
0x45FDAA: push    esi
0x45FDAB: mov     esi, [eax+10h]
0x45FDAE: push    edi
0x45FDAF: mov     edi, ecx
0x45FDB1: mov     [esp+44h+var_30], edi
0x45FDB5: call    dword ptr ds:0A2808Ch
0x45FDBB: cmp     eax, esi
0x45FDBD: jnz     short loc_45FDC4
0x45FDBF: mov     al, [edi+18h]
0x45FDC2: jmp     short loc_45FDCA
0x45FDC4: mov     eax, [edi+18h]
0x45FDC7: shr     eax, 12h
0x45FDCA: and     al, 1
0x45FDCC: xor     ebp, ebp
0x45FDCE: test    al, al
0x45FDD0: jz      loc_4603B8
0x45FDD6: or      dword ptr [edi+18h], 2
0x45FDDA: cmp     [esp+44h+arg_8], 0
0x45FDDF: jz      short loc_45FDEE
0x45FDE1: mov     ecx, ds:0B33A10h
0x45FDE7: mov     dword ptr [ecx+38h], 5
0x45FDEE: mov     ebx, [esp+44h+arg_0]
0x45FDF2: cmp     ebx, ebp
0x45FDF4: mov     byte ptr [esp+44h+var_34+3], 1
0x45FDF9: jnz     short loc_45FE07
0x45FDFB: mov     ebx, [edi+1Ch]
0x45FDFE: mov     [esp+44h+arg_0], ebx
0x45FE02: mov     byte ptr [esp+44h+var_34+3], 0
0x45FE07: mov     esi, [esp+44h+arg_4]
0x45FE0B: cmp     esi, ebp
0x45FE0D: jz      short loc_45FE24
0x45FE0F: mov     eax, [esi+8]
0x45FE12: mov     ecx, ds:0B333C4h
0x45FE18: mov     edx, [ecx]
0x45FE1A: mov     edx, [edx+58h]
0x45FE1D: push    eax
0x45FE1E: mov     eax, [esi+4]
0x45FE21: push    eax
0x45FE22: call    edx
0x45FE24: cmp     ebx, ebp
0x45FE26: mov     [esp+44h+a2], ebp
0x45FE2A: mov     dword ptr [esp+44h+var_20], ebp
0x45FE2E: jz      loc_45FEF1
0x45FE34: mov     eax, [ebx+0Ch]
0x45FE37: cmp     eax, ebp
0x45FE39: mov     [esp+44h+var_28], eax
0x45FE3D: jbe     loc_45FEF1
0x45FE43: mov     ecx, [ebx+4]
0x45FE46: mov     esi, [ecx+ebp*4]
0x45FE49: test    esi, esi
0x45FE4B: jz      loc_45FEE2
0x45FE51: mov     edx, ds:0B333C4h
0x45FE57: cmp     [esi], edx
0x45FE59: jz      loc_45FEE2
0x45FE5F: mov     bl, [esi+0Ch]
0x45FE62: cmp     bl, 13h
0x45FE65: jnb     short loc_45FE7A
0x45FE67: movzx   eax, bl
0x45FE6A: push    13h
0x45FE6C: push    eax; ArgList
0x45FE6D: push    offset aSavegameLoadin; "Savegame loading error: Attempting to s"...
0x45FE72: call    PrintError
0x45FE77: add     esp, 0Ch
0x45FE7A: mov     [edi+7Ch], bl
0x45FE7D: mov     eax, [esi+8]
0x45FE80: mov     ecx, [esi]
0x45FE82: mov     edx, [ecx]
0x45FE84: mov     edx, [edx+58h]
0x45FE87: push    eax
0x45FE88: mov     eax, [esi+4]
0x45FE8B: push    eax
0x45FE8C: call    edx
0x45FE8E: cmp     byte ptr [esp+44h+var_34+3], 0
0x45FE93: jz      short loc_45FED4
0x45FE95: mov     eax, [esi]
0x45FE97: push    0; int
0x45FE99: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x45FE9E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45FEA3: push    0; int
0x45FEA5: push    eax; void *
0x45FEA6: call    OblivionDynamicCast
0x45FEAB: mov     esi, eax
0x45FEAD: add     esp, 14h
0x45FEB0: test    esi, esi
0x45FEB2: jz      short loc_45FED4
0x45FEB4: mov     ecx, esi; this
0x45FEB6: call    TESObjectREFR_GetParentCell
0x45FEBB: test    eax, eax
0x45FEBD: jnz     short loc_45FED4
0x45FEBF: mov     ecx, esi; this
0x45FEC1: call    TESObjectREFR_GetWorldSpace
0x45FEC6: test    eax, eax
0x45FEC8: jnz     short loc_45FED4
0x45FECA: push    esi
0x45FECB: lea     ecx, [esp+48h+a2]
0x45FECF: call    BSSimpleList_PushFront
0x45FED4: mov     cl, [edi+71h]
0x45FED7: mov     eax, [esp+44h+var_28]
0x45FEDB: mov     ebx, [esp+44h+arg_0]
0x45FEDF: mov     [edi+7Ch], cl
0x45FEE2: add     ebp, 1
0x45FEE5: cmp     ebp, eax
0x45FEE7: jb      loc_45FE43
0x45FEED: mov     esi, [esp+44h+arg_4]
0x45FEF1: cmp     byte ptr [esp+44h+var_34+3], 0
0x45FEF6: jz      loc_4600BE
0x45FEFC: lea     edx, [esp+44h+a2]
0x45FF00: mov     [esp+44h+var_2C], edx
0x45FF04: mov     eax, [esp+44h+var_2C]
0x45FF08: cmp     dword ptr [eax+4], 0
0x45FF0C: jnz     short loc_45FF17
0x45FF0E: cmp     dword ptr [eax], 0
0x45FF11: jz      loc_460084
0x45FF17: mov     esi, [eax]
0x45FF19: mov     ecx, esi; int
0x45FF1B: call    sub_5ED860
0x45FF20: mov     eax, [esp+44h+var_30]
0x45FF24: mov     ebx, [eax]
0x45FF26: mov     ebp, [esi+0Ch]
0x45FF29: lea     ecx, [esp+44h+var_28]
0x45FF2D: push    ecx
0x45FF2E: push    ebp
0x45FF2F: mov     ecx, ebx
0x45FF31: call    NiTMap_GetAt
0x45FF36: test    al, al
0x45FF38: jnz     short loc_45FF79
0x45FF3A: push    8; Size
0x45FF3C: call    FormHeapAlloc
0x45FF41: add     esp, 4
0x45FF44: test    eax, eax
0x45FF46: jz      short loc_45FF66
0x45FF48: push    eax; a3
0x45FF49: mov     edi, eax
0x45FF4B: push    ebp; a2
0x45FF4C: mov     ecx, ebx; this
0x45FF4E: mov     dword ptr [eax], 0
0x45FF54: mov     dword ptr [eax+4], 0
0x45FF5B: mov     [esp+4Ch+var_28], edi
0x45FF5F: call    NiTMap_SetAt
0x45FF64: jmp     short loc_45FF7D
0x45FF66: xor     eax, eax
0x45FF68: push    eax; a3
0x45FF69: mov     edi, eax
0x45FF6B: push    ebp; a2
0x45FF6C: mov     ecx, ebx; this
0x45FF6E: mov     [esp+4Ch+var_28], edi
0x45FF72: call    NiTMap_SetAt
0x45FF77: jmp     short loc_45FF7D
0x45FF79: mov     edi, [esp+44h+var_28]
0x45FF7D: cmp     dword ptr [edi+4], 0
0x45FF81: jnz     short loc_45FF86
0x45FF83: or      dword ptr [edi], 4
0x45FF86: mov     ecx, esi; this
0x45FF88: call    TESObjectREFR_GetParentCell
0x45FF8D: test    eax, eax
0x45FF8F: jnz     loc_460071
0x45FF95: mov     ecx, esi; this
0x45FF97: call    TESObjectREFR_GetWorldSpace
0x45FF9C: test    eax, eax
0x45FF9E: jnz     loc_460071
0x45FFA4: mov     edx, ds:0B05BB4h
0x45FFAA: push    10h; Radix
0x45FFAC: push    eax; EndPtr
0x45FFAD: push    edx; Str
0x45FFAE: call    _strtol
0x45FFB3: add     esp, 0Ch
0x45FFB6: push    0; int
0x45FFB8: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x45FFBD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45FFC2: push    0; int
0x45FFC4: push    eax; a1
0x45FFC5: call    TESForm_LookupByFormID
0x45FFCA: add     esp, 4
0x45FFCD: push    eax; void *
0x45FFCE: call    OblivionDynamicCast
0x45FFD3: mov     edi, eax
0x45FFD5: add     esp, 14h
0x45FFD8: test    edi, edi
0x45FFDA: jz      loc_460068
0x45FFE0: mov     eax, ds:0B3F9A8h
0x45FFE5: mov     ecx, ds:0B3F9ACh
0x45FFEB: mov     edx, ds:0B3F9B0h
0x45FFF1: mov     [esp+44h+a3], eax
0x45FFF5: mov     [esp+44h+a4], eax
0x45FFF9: mov     [esp+44h+a3+4], ecx
0x45FFFD: mov     [esp+44h+a4+4], ecx
0x460001: lea     eax, [esp+44h+a4]
0x460005: push    eax; a4
0x460006: lea     ecx, [esp+48h+a3]
0x46000A: push    ecx; a3
0x46000B: mov     ecx, edi
0x46000D: mov     [esp+4Ch+var_10], edx
0x460011: mov     [esp+4Ch+var_4], edx
0x460015: call    sub_4D5D70
0x46001A: mov     edx, [esp+44h+a3]
0x46001E: mov     ecx, [esp+44h+a3+4]
0x460022: sub     esp, 0Ch
0x460025: mov     eax, esp
0x460027: mov     [eax], edx
0x460029: mov     edx, [esp+50h+var_10]
0x46002D: mov     [eax+4], ecx
0x460030: mov     ecx, esi; this
0x460032: mov     [eax+8], edx
0x460035: call    TESObjectREFR_SetPosition
0x46003A: mov     ecx, [esp+44h+a4]
0x46003E: mov     edx, [esp+44h+a4+4]
0x460042: sub     esp, 0Ch
0x460045: mov     eax, esp
0x460047: mov     [eax], ecx
0x460049: mov     ecx, [esp+50h+var_4]
0x46004D: mov     [eax+4], edx
0x460050: mov     [eax+8], ecx
0x460053: mov     ecx, esi
0x460055: call    sub_4D89A0
0x46005A: push    0; int
0x46005C: push    edi; int
0x46005D: push    esi; Concurrency::details::SchedulerBase *
0x46005E: call    sub_4DD4B0
0x460063: add     esp, 0Ch
0x460066: jmp     short loc_460071
0x460068: push    1; a2
0x46006A: mov     ecx, esi; this
0x46006C: call    TESForm_SetEnabled?
0x460071: mov     edx, [esp+44h+var_2C]
0x460075: mov     eax, [edx+4]
0x460078: test    eax, eax
0x46007A: mov     [esp+44h+var_2C], eax
0x46007E: jnz     loc_45FF04
0x460084: mov     eax, dword ptr [esp+44h+var_20]
0x460088: test    eax, eax
0x46008A: jz      short loc_4600A2
0x46008C: lea     esp, [esp+0]
0x460090: mov     esi, [eax+4]
0x460093: push    eax
0x460094: call    FormHeapFree
0x460099: add     esp, 4
0x46009C: test    esi, esi
0x46009E: mov     eax, esi
0x4600A0: jnz     short loc_460090
0x4600A2: mov     ecx, offset ActorProcessManager_ptr
0x4600A7: call    sub_677240
0x4600AC: mov     ecx, offset dword_B3BDB0
0x4600B1: call    sub_67C230
0x4600B6: mov     ebx, [esp+44h+arg_0]
0x4600BA: mov     esi, [esp+44h+arg_4]
0x4600BE: cmp     [esp+44h+arg_8], 0
0x4600C3: jz      loc_460254
0x4600C9: mov     eax, ds:0B333A0h
0x4600CE: mov     esi, [eax+34h]
0x4600D1: test    esi, esi
0x4600D3: jz      loc_4603CD
0x4600D9: mov     ecx, esi; this
0x4600DB: call    TESObjectCELL_IsInterior
0x4600E0: test    al, al
0x4600E2: jz      loc_4603C2
0x4600E8: lea     ecx, [esi+28h]
0x4600EB: call    sub_424180
0x4600F0: mov     esi, eax
0x4600F2: test    esi, esi
0x4600F4: jz      short loc_4600FD
0x4600F6: mov     ecx, esi
0x4600F8: call    sub_889E00
0x4600FD: mov     ecx, ds:0B35C24h
0x460103: test    ecx, ecx
0x460105: jz      short loc_46010C
0x460107: call    sub_889E00
0x46010C: mov     ecx, ds:0B333A0h
0x460112: call    sub_4416F0
0x460117: mov     ecx, ds:0B333C4h
0x46011D: push    0
0x46011F: call    PlayerCharacter_GetPlayerNode
0x460124: test    eax, eax
0x460126: jnz     short loc_46013B
0x460128: mov     ecx, ds:0B333C4h
0x46012E: push    eax
0x46012F: push    ecx
0x460130: mov     ecx, ds:0B33A1Ch
0x460136: call    sub_438060
0x46013B: mov     ecx, ds:0B33A10h
0x460141: push    5
0x460143: call    sub_434020
0x460148: test    esi, esi
0x46014A: mov     edx, ds:0B33A10h
0x460150: mov     dword ptr [edx+38h], 5
0x460157: jz      short loc_460162
0x460159: push    0
0x46015B: mov     ecx, esi
0x46015D: call    sub_88D1D0
0x460162: mov     ecx, ds:0B35C24h
0x460168: test    ecx, ecx
0x46016A: jz      short loc_460173
0x46016C: push    0
0x46016E: call    sub_88D1D0
0x460173: mov     eax, ds:0B333A0h
0x460178: cmp     dword ptr [eax+34h], 0
0x46017C: jnz     loc_460250
0x460182: mov     ecx, [eax+8]
0x460185: call    sub_482310
0x46018A: mov     ecx, ds:0B333C4h
0x460190: mov     eax, [ecx]
0x460192: mov     edx, [eax+174h]
0x460198: call    edx
0x46019A: mov     ecx, [eax]
0x46019C: mov     [esp+44h+a2], ecx
0x4601A0: fld     [esp+44h+a2]
0x4601A4: mov     edx, [eax+4]
0x4601A7: mov     dword ptr [esp+44h+var_20], edx
0x4601AB: mov     eax, [eax+8]
0x4601AE: fstp    [esp+44h+a4]
0x4601B2: fld     dword ptr [esp+44h+var_20]
0x4601B6: lea     ecx, [esp+44h+var_4]
0x4601BA: fstp    [esp+44h+a4+4]
0x4601BE: push    ecx; a3
0x4601BF: fldz
0x4601C1: mov     ecx, ds:0B333A0h; this
0x4601C7: lea     edx, [esp+48h+a2]
0x4601CB: fstp    [esp+48h+var_4]
0x4601CF: push    edx; a2
0x4601D0: mov     dword ptr [esp+4Ch+var_20+4], eax
0x4601D4: call    GetTerrainHeight
0x4601D9: fld1
0x4601DB: mov     ecx, ds:0B258DCh
0x4601E1: mov     edx, ds:0B258E0h
0x4601E7: sub     esp, 10h
0x4601EA: fstp    [esp+54h+var_48]; float
0x4601EE: mov     eax, esp
0x4601F0: mov     [eax], ecx
0x4601F2: mov     ecx, ds:0B258E4h
0x4601F8: mov     [eax+4], edx
0x4601FB: mov     edx, [esp+54h+a4]
0x4601FF: mov     [eax+8], ecx
0x460202: mov     ecx, [esp+54h+a4+4]
0x460206: sub     esp, 0Ch
0x460209: mov     eax, esp
0x46020B: mov     [eax], edx
0x46020D: mov     edx, [esp+60h+var_4]
0x460211: mov     [eax+4], ecx
0x460214: mov     byte ptr ds:0B2CBC0h, 0
0x46021B: mov     [eax+8], edx
0x46021E: call    DrawGrassPass?
0x460223: mov     ecx, [esp+60h+a2]
0x460227: mov     edx, dword ptr [esp+60h+var_20]
0x46022B: add     esp, 1Ch
0x46022E: push    0
0x460230: sub     esp, 0Ch
0x460233: mov     eax, esp
0x460235: mov     [eax], ecx
0x460237: mov     ecx, dword ptr [esp+54h+var_20+4]
0x46023B: mov     [eax+4], edx
0x46023E: mov     [eax+8], ecx
0x460241: call    sub_4EA6E0
0x460246: add     esp, 10h
0x460249: mov     byte ptr ds:0B2CBC0h, 1
0x460250: mov     esi, [esp+44h+arg_4]
0x460254: test    esi, esi
0x460256: jz      short loc_460287
0x460258: mov     ecx, ds:0B333C4h; this
0x46025E: call    TESObjectREFR_GetParentCell
0x460263: test    eax, eax
0x460265: jz      short loc_460272
0x460267: mov     ecx, ds:0B333C4h; this
0x46026D: call    sub_6637C0
0x460272: mov     eax, [esi+8]
0x460275: mov     ecx, ds:0B333C4h
0x46027B: mov     edx, [ecx]
0x46027D: mov     edx, [edx+5Ch]
0x460280: push    eax
0x460281: mov     eax, [esi+4]
0x460284: push    eax
0x460285: call    edx
0x460287: test    ebx, ebx
0x460289: jz      short loc_4602FB
0x46028B: mov     eax, [esp+44h+arg_0]
0x46028F: mov     ebp, [eax+0Ch]
0x460292: xor     edi, edi
0x460294: test    ebp, ebp
0x460296: jbe     short loc_4602FB
0x460298: jmp     short loc_4602A0
0x46029A: align 10h
0x4602A0: mov     ecx, [esp+44h+arg_0]
0x4602A4: mov     edx, [ecx+4]
0x4602A7: mov     esi, [edx+edi*4]
0x4602AA: test    esi, esi
0x4602AC: jz      short loc_4602F4
0x4602AE: mov     bl, [esi+0Ch]
0x4602B1: cmp     bl, 13h
0x4602B4: jnb     short loc_4602C9
0x4602B6: movzx   eax, bl
0x4602B9: push    13h
0x4602BB: push    eax; ArgList
0x4602BC: push    offset aSavegameLoadin; "Savegame loading error: Attempting to s"...
0x4602C1: call    PrintError
0x4602C6: add     esp, 0Ch
0x4602C9: mov     ecx, [esp+44h+var_30]
0x4602CD: mov     [ecx+7Ch], bl
0x4602D0: mov     eax, [esi+8]
0x4602D3: mov     ecx, [esi]
0x4602D5: mov     edx, [ecx]
0x4602D7: mov     edx, [edx+5Ch]
0x4602DA: push    eax
0x4602DB: mov     eax, [esi+4]
0x4602DE: push    eax
0x4602DF: call    edx
0x4602E1: mov     eax, [esp+44h+var_30]
0x4602E5: mov     cl, [eax+71h]
0x4602E8: push    esi
0x4602E9: mov     [eax+7Ch], cl
0x4602EC: call    FormHeapFree
0x4602F1: add     esp, 4
0x4602F4: add     edi, 1
0x4602F7: cmp     edi, ebp
0x4602F9: jb      short loc_4602A0
0x4602FB: mov     edx, [esp+44h+var_30]
0x4602FF: mov     eax, [edx+1Ch]
0x460302: xor     esi, esi
0x460304: cmp     eax, esi
0x460306: jz      short loc_46033E
0x460308: xor     ecx, ecx
0x46030A: cmp     [eax+0Ch], esi
0x46030D: jbe     short loc_46031E
0x46030F: nop
0x460310: mov     edi, [eax+4]
0x460313: mov     [edi+ecx*4], esi
0x460316: add     ecx, 1
0x460319: cmp     ecx, [eax+0Ch]
0x46031C: jb      short loc_460310
0x46031E: mov     [eax+0Ch], esi
0x460321: mov     [eax+10h], esi
0x460324: mov     ecx, [edx+1Ch]
0x460327: cmp     ecx, esi
0x460329: jz      short loc_460337
0x46032B: mov     edx, [ecx]
0x46032D: mov     eax, [edx]
0x46032F: push    1
0x460331: call    eax
0x460333: mov     edx, [esp+44h+var_30]
0x460337: mov     dword ptr [edx+1Ch], 0
0x46033E: cmp     [esp+44h+arg_8], 0
0x460343: jz      short loc_4603B0
0x460345: mov     ecx, ds:0B333A0h
0x46034B: mov     esi, [ecx+34h]
0x46034E: test    esi, esi
0x460350: jz      loc_4603DC
0x460356: mov     ecx, esi; this
0x460358: call    TESObjectCELL_IsInterior
0x46035D: test    al, al
0x46035F: jz      short loc_4603D4
0x460361: lea     ecx, [esi+28h]
0x460364: call    sub_424180
0x460369: mov     esi, eax
0x46036B: test    esi, esi
0x46036D: jz      short loc_460376
0x46036F: mov     ecx, esi
0x460371: call    sub_889E00
0x460376: mov     ecx, ds:0B35C24h
0x46037C: test    ecx, ecx
0x46037E: jz      short loc_460385
0x460380: call    sub_889E00
0x460385: mov     ecx, ds:0B33A10h
0x46038B: push    5
0x46038D: call    sub_434020
0x460392: test    esi, esi
0x460394: jz      short loc_46039F
0x460396: push    0
0x460398: mov     ecx, esi
0x46039A: call    sub_88D1D0
0x46039F: mov     ecx, ds:0B35C24h
0x4603A5: test    ecx, ecx
0x4603A7: jz      short loc_4603B0
0x4603A9: push    0
0x4603AB: call    sub_88D1D0
0x4603B0: mov     eax, [esp+44h+var_30]
0x4603B4: and     dword ptr [eax+18h], 0FFFFFFFDh
0x4603B8: pop     edi
0x4603B9: pop     esi
0x4603BA: pop     ebp
0x4603BB: pop     ebx
0x4603BC: add     esp, 34h
0x4603BF: retn    0Ch
0x4603C2: mov     esi, ds:0B35C24h
0x4603C8: jmp     loc_4600F2
0x4603CD: xor     esi, esi
0x4603CF: jmp     loc_4600FD
0x4603D4: mov     esi, ds:0B35C24h
0x4603DA: jmp     short loc_46036B
0x4603DC: xor     esi, esi
0x4603DE: jmp     short loc_460376
