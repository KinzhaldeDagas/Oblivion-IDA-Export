0x4DEEE0: sub     esp, 28h
0x4DEEE3: push    ebx
0x4DEEE4: mov     ebx, [esp+2Ch+arg_0]
0x4DEEE8: push    esi
0x4DEEE9: push    edi
0x4DEEEA: xor     edi, edi
0x4DEEEC: cmp     ebx, edi
0x4DEEEE: mov     esi, ecx
0x4DEEF0: jz      loc_4DF18F
0x4DEEF6: lea     eax, [esp+34h+var_28]
0x4DEEFA: push    eax
0x4DEEFB: push    esi
0x4DEEFC: mov     ecx, ebx
0x4DEEFE: mov     [esp+3Ch+var_28], edi
0x4DEF02: call    NiTMap_GetAt
0x4DEF07: test    al, al
0x4DEF09: jz      loc_4DF18F
0x4DEF0F: mov     eax, [esp+34h+var_28]
0x4DEF13: cmp     eax, edi
0x4DEF15: jz      loc_4DF18F
0x4DEF1B: push    ebp
0x4DEF1C: push    edi; int
0x4DEF1D: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4DEF22: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4DEF27: push    edi; int
0x4DEF28: push    eax; void *
0x4DEF29: call    OblivionDynamicCast
0x4DEF2E: mov     ebp, eax
0x4DEF30: add     esp, 14h
0x4DEF33: cmp     ebp, edi
0x4DEF35: jz      loc_4DF18E
0x4DEF3B: add     esi, 44h ; 'D'
0x4DEF3E: mov     ecx, esi
0x4DEF40: call    sub_420260
0x4DEF45: cmp     eax, edi
0x4DEF47: jz      short loc_4DEF9F
0x4DEF49: lea     ecx, [esp+38h+var_28]
0x4DEF4D: push    ecx
0x4DEF4E: push    eax
0x4DEF4F: mov     ecx, ebx
0x4DEF51: mov     [esp+40h+var_28], edi
0x4DEF55: call    NiTMap_GetAt
0x4DEF5A: test    al, al
0x4DEF5C: jz      short loc_4DEF9F
0x4DEF5E: mov     eax, [esp+38h+var_28]
0x4DEF62: cmp     eax, edi
0x4DEF64: jz      short loc_4DEF9F
0x4DEF66: push    edi; int
0x4DEF67: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4DEF6C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4DEF71: push    edi; int
0x4DEF72: push    eax; void *
0x4DEF73: call    OblivionDynamicCast
0x4DEF78: add     esp, 14h
0x4DEF7B: cmp     eax, edi
0x4DEF7D: jz      short loc_4DEF9F
0x4DEF7F: push    eax
0x4DEF80: mov     ecx, ebp
0x4DEF82: call    sub_4DBF60
0x4DEF87: mov     ecx, esi
0x4DEF89: call    sub_420340
0x4DEF8E: mov     byte ptr [esp+38h+var_28], al
0x4DEF92: mov     edx, [esp+38h+var_28]
0x4DEF96: push    edx
0x4DEF97: lea     ecx, [ebp+44h]
0x4DEF9A: call    sub_420360
0x4DEF9F: mov     ecx, esi; this
0x4DEFA1: call    ExtraDataList__GetRandomTeleportMarker
0x4DEFA6: cmp     eax, edi
0x4DEFA8: jz      short loc_4DEFE8
0x4DEFAA: lea     ecx, [esp+38h+var_28]
0x4DEFAE: push    ecx
0x4DEFAF: push    eax
0x4DEFB0: mov     ecx, ebx
0x4DEFB2: mov     [esp+40h+var_28], edi
0x4DEFB6: call    NiTMap_GetAt
0x4DEFBB: test    al, al
0x4DEFBD: jz      short loc_4DEFE8
0x4DEFBF: mov     eax, [esp+38h+var_28]
0x4DEFC3: cmp     eax, edi
0x4DEFC5: jz      short loc_4DEFE8
0x4DEFC7: push    edi; int
0x4DEFC8: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4DEFCD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4DEFD2: push    edi; int
0x4DEFD3: push    eax; void *
0x4DEFD4: call    OblivionDynamicCast
0x4DEFD9: add     esp, 14h
0x4DEFDC: cmp     eax, edi
0x4DEFDE: jz      short loc_4DEFE8
0x4DEFE0: push    eax
0x4DEFE1: mov     ecx, ebp
0x4DEFE3: call    sub_4DBF00
0x4DEFE8: mov     ecx, esi
0x4DEFEA: call    sub_420680
0x4DEFEF: cmp     eax, edi
0x4DEFF1: jz      short loc_4DF031
0x4DEFF3: lea     edx, [esp+38h+var_28]
0x4DEFF7: push    edx
0x4DEFF8: push    eax
0x4DEFF9: mov     ecx, ebx
0x4DEFFB: mov     [esp+40h+var_28], edi
0x4DEFFF: call    NiTMap_GetAt
0x4DF004: test    al, al
0x4DF006: jz      short loc_4DF031
0x4DF008: mov     eax, [esp+38h+var_28]
0x4DF00C: cmp     eax, edi
0x4DF00E: jz      short loc_4DF031
0x4DF010: push    edi; int
0x4DF011: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4DF016: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4DF01B: push    edi; int
0x4DF01C: push    eax; void *
0x4DF01D: call    OblivionDynamicCast
0x4DF022: add     esp, 14h
0x4DF025: cmp     eax, edi
0x4DF027: jz      short loc_4DF031
0x4DF029: push    eax
0x4DF02A: mov     ecx, ebp
0x4DF02C: call    sub_4DBF30
0x4DF031: mov     ecx, esi; this
0x4DF033: call    ExtraDataList__GetTravelHorse
0x4DF038: cmp     eax, edi
0x4DF03A: jz      short loc_4DF07A
0x4DF03C: lea     ecx, [esp+38h+var_28]
0x4DF040: push    ecx
0x4DF041: push    eax
0x4DF042: mov     ecx, ebx
0x4DF044: mov     [esp+40h+var_28], edi
0x4DF048: call    NiTMap_GetAt
0x4DF04D: test    al, al
0x4DF04F: jz      short loc_4DF07A
0x4DF051: mov     eax, [esp+38h+var_28]
0x4DF055: cmp     eax, edi
0x4DF057: jz      short loc_4DF07A
0x4DF059: push    edi; int
0x4DF05A: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4DF05F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4DF064: push    edi; int
0x4DF065: push    eax; void *
0x4DF066: call    OblivionDynamicCast
0x4DF06B: add     esp, 14h
0x4DF06E: cmp     eax, edi
0x4DF070: jz      short loc_4DF07A
0x4DF072: push    eax
0x4DF073: mov     ecx, ebp
0x4DF075: call    sub_4D7940
0x4DF07A: mov     ecx, esi; this
0x4DF07C: call    ExtraDataList_GetTeleport
0x4DF081: mov     ebx, eax
0x4DF083: cmp     ebx, edi
0x4DF085: jz      loc_4DF18E
0x4DF08B: mov     ecx, ebx
0x4DF08D: call    sub_42B410
0x4DF092: test    eax, eax
0x4DF094: jz      loc_4DF18E
0x4DF09A: lea     edx, [esp+38h+var_28]
0x4DF09E: push    edx
0x4DF09F: mov     ecx, ebx
0x4DF0A1: mov     [esp+3Ch+var_28], edi
0x4DF0A5: call    sub_42B410
0x4DF0AA: mov     ecx, [esp+3Ch+arg_0]
0x4DF0AE: push    eax
0x4DF0AF: call    NiTMap_GetAt
0x4DF0B4: test    al, al
0x4DF0B6: jz      loc_4DF18E
0x4DF0BC: mov     eax, [esp+38h+var_28]
0x4DF0C0: cmp     eax, edi
0x4DF0C2: jz      loc_4DF18E
0x4DF0C8: push    edi; int
0x4DF0C9: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4DF0CE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4DF0D3: push    edi; int
0x4DF0D4: push    eax; void *
0x4DF0D5: call    OblivionDynamicCast
0x4DF0DA: mov     esi, eax
0x4DF0DC: add     esp, 14h
0x4DF0DF: cmp     esi, edi
0x4DF0E1: jz      loc_4DF18E
0x4DF0E7: mov     ecx, ebp
0x4DF0E9: call    TESObjectREFR__GetTeleportData
0x4DF0EE: mov     edi, eax
0x4DF0F0: push    esi
0x4DF0F1: mov     ecx, edi
0x4DF0F3: call    TeleportData__SetLinkedDoor
0x4DF0F8: mov     ecx, ebx
0x4DF0FA: call    sub_42B430
0x4DF0FF: mov     ecx, [eax]
0x4DF101: mov     [esp+38h+var_C], ecx
0x4DF105: mov     edx, [eax+4]
0x4DF108: mov     [esp+38h+var_8], edx
0x4DF10C: mov     eax, [eax+8]
0x4DF10F: mov     ecx, ebx
0x4DF111: mov     [esp+38h+var_4], eax
0x4DF115: call    sub_42B410
0x4DF11A: mov     edx, [eax]
0x4DF11C: mov     ecx, eax
0x4DF11E: mov     eax, [edx+174h]
0x4DF124: call    eax
0x4DF126: push    eax
0x4DF127: lea     ecx, [esp+3Ch+var_24]
0x4DF12B: push    ecx
0x4DF12C: mov     ecx, ebx
0x4DF12E: call    sub_6899C0
0x4DF133: mov     ecx, eax
0x4DF135: call    sub_4121A0
0x4DF13A: mov     edx, [esi]
0x4DF13C: mov     eax, [edx+174h]
0x4DF142: mov     ecx, esi
0x4DF144: call    eax
0x4DF146: fld     dword ptr [eax+4]
0x4DF149: fadd    [esp+38h+var_20]
0x4DF14D: lea     ecx, [esp+38h+var_18]
0x4DF151: push    ecx
0x4DF152: mov     ecx, edi
0x4DF154: fstp    [esp+3Ch+arg_0]
0x4DF158: fld     dword ptr [eax+8]
0x4DF15B: fadd    [esp+3Ch+var_1C]
0x4DF15F: fstp    [esp+3Ch+var_28]
0x4DF163: fld     dword ptr [eax]
0x4DF165: fadd    [esp+3Ch+var_24]
0x4DF169: fstp    [esp+3Ch+var_18]
0x4DF16D: fld     [esp+3Ch+arg_0]
0x4DF171: fstp    [esp+3Ch+var_14]
0x4DF175: fld     [esp+3Ch+var_28]
0x4DF179: fstp    [esp+3Ch+var_10]
0x4DF17D: call    TeleportData__SetTeleportPosition
0x4DF182: lea     edx, [esp+38h+var_C]
0x4DF186: push    edx
0x4DF187: mov     ecx, edi
0x4DF189: call    TeleportData__SetTeleportRotation
0x4DF18E: pop     ebp
0x4DF18F: pop     edi
0x4DF190: pop     esi
0x4DF191: pop     ebx
0x4DF192: add     esp, 28h
0x4DF195: retn    4
