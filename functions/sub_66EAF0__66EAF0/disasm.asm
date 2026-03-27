0x66EAF0: sub     esp, 0B4h
0x66EAF6: push    ebx
0x66EAF7: push    ebp
0x66EAF8: push    esi
0x66EAF9: push    edi
0x66EAFA: mov     ebp, ecx
0x66EAFC: call    TESObjectREFR_GetWorldSpace
0x66EB01: mov     ebx, [esp+0C4h+arg_18]
0x66EB08: mov     esi, eax
0x66EB0A: mov     ecx, ebx; this
0x66EB0C: mov     [esp+0C4h+var_B0], esi
0x66EB10: call    TESObjectCELL_GetWorldSpace
0x66EB15: push    eax
0x66EB16: push    esi
0x66EB17: mov     [esp+0CCh+var_A0], eax
0x66EB1B: call    sub_4835D0
0x66EB20: add     esp, 8
0x66EB23: call    sub_40FDA0
0x66EB28: mov     ecx, ebp; this
0x66EB2A: mov     byte ptr [esp+0C4h+var_B4+3], al
0x66EB2E: mov     byte ptr [esp+0C4h+var_B4+2], 0
0x66EB33: call    TESObjectREFR_GetParentCell
0x66EB38: test    eax, eax
0x66EB3A: jz      short loc_66EB4B
0x66EB3C: push    ebp
0x66EB3D: mov     ecx, ebp; this
0x66EB3F: call    TESObjectREFR_GetParentCell
0x66EB44: mov     ecx, eax
0x66EB46: call    sub_4CECD0
0x66EB4B: mov     eax, [ebp+0]
0x66EB4E: mov     edx, [eax+1CCh]
0x66EB54: lea     ecx, [esp+0C4h+arg_0]
0x66EB5B: push    ecx
0x66EB5C: mov     ecx, ebp
0x66EB5E: call    edx
0x66EB60: mov     ecx, [esp+0C4h+arg_C]
0x66EB67: mov     edx, [esp+0C4h+arg_10]
0x66EB6E: sub     esp, 0Ch
0x66EB71: mov     eax, esp
0x66EB73: mov     [eax], ecx
0x66EB75: mov     ecx, [esp+0D0h+arg_14]
0x66EB7C: mov     [eax+4], edx
0x66EB7F: mov     [eax+8], ecx
0x66EB82: mov     ecx, ebp
0x66EB84: call    sub_4D89A0
0x66EB89: mov     edx, [ebp+0]
0x66EB8C: mov     eax, [edx+380h]
0x66EB92: mov     ecx, ebp
0x66EB94: call    eax
0x66EB96: mov     ecx, ds:0B33398h
0x66EB9C: mov     edi, [ecx+24h]
0x66EB9F: mov     esi, eax
0x66EBA1: push    ebx; a2
0x66EBA2: mov     ecx, ebp; this
0x66EBA4: mov     [esp+0C8h+var_A8], esi
0x66EBA8: mov     [esp+0C8h+var_AC], edi
0x66EBAC: call    TESObjectREFR_ChangeCell
0x66EBB1: test    esi, esi
0x66EBB3: jz      short loc_66EBCF
0x66EBB5: mov     ecx, esi; this
0x66EBB7: call    TESObjectREFR_GetParentCell
0x66EBBC: test    eax, eax
0x66EBBE: jz      short loc_66EBCF
0x66EBC0: push    esi
0x66EBC1: mov     ecx, esi; this
0x66EBC3: call    TESObjectREFR_GetParentCell
0x66EBC8: mov     ecx, eax
0x66EBCA: call    sub_4CECD0
0x66EBCF: test    ebx, ebx
0x66EBD1: jz      short loc_66EC35
0x66EBD3: mov     ecx, ebx; this
0x66EBD5: call    TESObjectCELL_IsInterior
0x66EBDA: test    al, al
0x66EBDC: jz      short loc_66EC35
0x66EBDE: test    edi, edi
0x66EBE0: jz      short loc_66EC17
0x66EBE2: push    0
0x66EBE4: push    0
0x66EBE6: push    0
0x66EBE8: mov     ecx, ebx
0x66EBEA: call    TESObjectCELL_GetMusicType
0x66EBEF: push    eax
0x66EBF0: mov     ecx, edi
0x66EBF2: call    SoundManager_OpenMusicFile
0x66EBF7: test    al, al
0x66EBF9: jz      short loc_66EC17
0x66EBFB: cmp     byte ptr [esp+0C4h+var_B4+3], 0
0x66EC00: jnz     short loc_66EC12
0x66EC02: mov     ecx, edi
0x66EC04: call    sub_6A8D50
0x66EC09: mov     ecx, edi
0x66EC0B: call    SoundManager_PlayMusic
0x66EC10: jmp     short loc_66EC17
0x66EC12: mov     byte ptr [esp+0C4h+var_B4+2], 1
0x66EC17: mov     ecx, ds:0B333A0h
0x66EC1D: lea     edx, [esp+0C4h+arg_0]
0x66EC24: push    edx
0x66EC25: push    ebx
0x66EC26: call    sub_4455E0
0x66EC2B: call    sub_560110
0x66EC30: jmp     loc_66ED16
0x66EC35: test    ebx, ebx
0x66EC37: mov     esi, 7FFFFFFFh
0x66EC3C: mov     [esp+0C4h+var_A4], esi
0x66EC40: jz      short loc_66EC56
0x66EC42: mov     ecx, ebx; this
0x66EC44: call    TESObjectCELL_GetXCoordinate
0x66EC49: mov     ecx, ebx; this
0x66EC4B: mov     esi, eax
0x66EC4D: call    TESObjectCELL_GetYCoordinate
0x66EC52: mov     [esp+0C4h+var_A4], eax
0x66EC56: mov     eax, [esp+0C4h+var_B0]
0x66EC5A: test    eax, eax
0x66EC5C: jz      short loc_66ECA1
0x66EC5E: cmp     eax, [esp+0C4h+var_A0]
0x66EC62: jz      short loc_66ECA1
0x66EC64: mov     ecx, ds:0B33B00h
0x66EC6A: call    sub_45A500
0x66EC6F: test    al, al
0x66EC71: jnz     short loc_66ECA1
0x66EC73: test    ebx, ebx
0x66EC75: jz      short loc_66EC85
0x66EC77: mov     ecx, ds:0B333A0h
0x66EC7D: push    0
0x66EC7F: push    ebx
0x66EC80: call    sub_4400A0
0x66EC85: mov     ecx, ds:0B333A0h; this
0x66EC8B: push    1; a3
0x66EC8D: push    0; a2
0x66EC8F: call    sub_442630
0x66EC94: mov     ecx, ds:0B333A0h; this
0x66EC9A: push    0; a2
0x66EC9C: call    sub_43FC20
0x66ECA1: test    ebx, ebx
0x66ECA3: jz      short loc_66ECF2
0x66ECA5: test    edi, edi
0x66ECA7: jz      short loc_66ECDD
0x66ECA9: push    0
0x66ECAB: push    0
0x66ECAD: lea     eax, [esp+0CCh+arg_0]
0x66ECB4: push    eax
0x66ECB5: mov     ecx, ebx
0x66ECB7: call    TESObjectCELL_GetMusicType
0x66ECBC: push    eax
0x66ECBD: mov     ecx, edi
0x66ECBF: call    SoundManager_OpenMusicFile
0x66ECC4: test    al, al
0x66ECC6: jz      short loc_66ECD8
0x66ECC8: cmp     byte ptr [esp+0C4h+var_B4+3], 0
0x66ECCD: jnz     short loc_66ECD8
0x66ECCF: mov     ecx, edi
0x66ECD1: call    SoundManager_PlayMusic
0x66ECD6: jmp     short loc_66ECDD
0x66ECD8: mov     byte ptr [esp+0C4h+var_B4+2], 1
0x66ECDD: call    sub_55FDF0
0x66ECE2: mov     ecx, [esp+0C4h+var_A0]
0x66ECE6: push    ecx
0x66ECE7: mov     ecx, ds:0B333A0h
0x66ECED: call    sub_4431F0
0x66ECF2: mov     ecx, ds:0B333A0h
0x66ECF8: lea     edx, [esp+0C4h+arg_0]
0x66ECFF: push    edx
0x66ED00: call    sub_445A10
0x66ED05: mov     eax, [esp+0C4h+var_A4]
0x66ED09: mov     ecx, [esp+0C4h+var_A0]; this
0x66ED0D: push    eax; signed int
0x66ED0E: push    esi; signed int
0x66ED0F: call    TESWorldSpace__GetCellAtCellCoord
0x66ED14: mov     ebx, eax
0x66ED16: test    edi, edi
0x66ED18: jz      short loc_66ED49
0x66ED1A: mov     ecx, edi
0x66ED1C: call    sub_6AC210
0x66ED21: mov     ecx, edi
0x66ED23: call    sub_6AC3C0
0x66ED28: mov     ecx, [ebp+58h]
0x66ED2B: mov     edx, [ecx]
0x66ED2D: mov     eax, [edx+0F0h]
0x66ED33: push    1
0x66ED35: call    eax
0x66ED37: test    eax, eax
0x66ED39: jz      short loc_66ED49
0x66ED3B: mov     ecx, [ebp+58h]
0x66ED3E: mov     edx, [ecx]
0x66ED40: mov     eax, [edx+348h]
0x66ED46: push    ebp
0x66ED47: call    eax
0x66ED49: cmp     [esp+0C4h+arg_1C], 0
0x66ED51: jz      short loc_66ED5F
0x66ED53: call    Sky_CreateOrGetGlobalObject
0x66ED58: mov     ecx, eax
0x66ED5A: call    sub_540380
0x66ED5F: push    0; a2
0x66ED61: mov     ecx, ebp; this
0x66ED63: call    TESObjectREFR_ChangeCell
0x66ED68: push    ebp; Concurrency::details::SchedulerBase *
0x66ED69: mov     ecx, ebx
0x66ED6B: call    sub_4D35D0
0x66ED70: mov     edx, [ebp+0]
0x66ED73: mov     eax, [edx+154h]
0x66ED79: mov     ecx, ebp
0x66ED7B: call    eax
0x66ED7D: test    eax, eax
0x66ED7F: jnz     short loc_66ED9D
0x66ED81: mov     ecx, ds:0B33B00h
0x66ED87: call    sub_45A500
0x66ED8C: test    al, al
0x66ED8E: jnz     short loc_66ED9D
0x66ED90: mov     ecx, ds:0B33A10h
0x66ED96: push    5
0x66ED98: call    sub_434020
0x66ED9D: fld     [esp+0C4h+arg_14]
0x66EDA4: mov     ecx, 9
0x66EDA9: fld     qword ptr ds:0A3D5B8h
0x66EDAF: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x66EDB4: fcom    st(1)
0x66EDB6: lea     edi, [esp+0C4h+var_48]
0x66EDBA: rep movsd
0x66EDBC: fnstsw  ax
0x66EDBE: fld     qword ptr ds:0A3D5B0h
0x66EDC4: test    ah, 5
0x66EDC7: jnp     short loc_66EDCF
0x66EDC9: fstp    st(1)
0x66EDCB: jmp     short loc_66EDEE
0x66EDCD: fxch    st(2)
0x66EDCF: fsub    st(2), st
0x66EDD1: fxch    st(2)
0x66EDD3: fstp    [esp+0C4h+arg_14]
0x66EDDA: fld     [esp+0C4h+arg_14]
0x66EDE1: fcom    st(1)
0x66EDE3: fnstsw  ax
0x66EDE5: test    ah, 41h
0x66EDE8: jz      short loc_66EDCD
0x66EDEA: fstp    st(1)
0x66EDEC: fxch    st(1)
0x66EDEE: fld     qword ptr ds:0A491E0h
0x66EDF4: fcom    st(2)
0x66EDF6: fnstsw  ax
0x66EDF8: test    ah, 41h
0x66EDFB: jz      short loc_66EE05
0x66EDFD: fstp    st(1)
0x66EDFF: fstp    st
0x66EE01: jmp     short loc_66EE24
0x66EE03: fxch    st(2)
0x66EE05: fxch    st(2)
0x66EE07: fadd    st, st(1)
0x66EE09: fstp    [esp+0C4h+arg_14]
0x66EE10: fld     [esp+0C4h+arg_14]
0x66EE17: fcom    st(2)
0x66EE19: fnstsw  ax
0x66EE1B: test    ah, 5
0x66EE1E: jnp     short loc_66EE03
0x66EE20: fstp    st(1)
0x66EE22: fstp    st(1)
0x66EE24: push    ecx
0x66EE25: lea     ecx, [esp+0C8h+var_6C]
0x66EE29: fstp    [esp+0C8h+var_C8]; float
0x66EE2C: call    NiMatrix33_InitRotationTransform
0x66EE31: lea     ecx, [esp+0C4h+var_6C]
0x66EE35: push    ecx
0x66EE36: lea     edx, [esp+0C8h+var_24]
0x66EE3D: push    edx
0x66EE3E: lea     ecx, [esp+0CCh+var_48]
0x66EE45: call    NiMAtrix33_Multiply
0x66EE4A: fldz
0x66EE4C: fcomp   [esp+0C4h+arg_14]
0x66EE53: mov     esi, eax
0x66EE55: mov     ecx, 9
0x66EE5A: lea     edi, [esp+0C4h+var_48]
0x66EE5E: rep movsd
0x66EE60: fnstsw  ax
0x66EE62: test    ah, 41h
0x66EE65: push    ecx
0x66EE66: lea     ecx, [esp+0C8h+var_6C]
0x66EE6A: jp      short loc_66EE84
0x66EE6C: fld     [esp+0C8h+arg_C]
0x66EE73: fsub    [esp+0C8h+arg_10]
0x66EE7A: fstp    [esp+0C8h+var_B0]
0x66EE7E: fld     [esp+0C8h+var_B0]
0x66EE82: jmp     short loc_66EE9A
0x66EE84: fld     [esp+0C8h+arg_10]
0x66EE8B: fadd    [esp+0C8h+arg_C]
0x66EE92: fstp    [esp+0C8h+var_B0]
0x66EE96: fld     [esp+0C8h+var_B0]
0x66EE9A: fstp    [esp+0C8h+var_C8]; float
0x66EE9D: call    NiMatrix33_InitRotationTransposedTransform???
0x66EEA2: mov     eax, [ebp+0]
0x66EEA5: mov     edx, [eax+154h]
0x66EEAB: mov     ecx, ebp
0x66EEAD: call    edx
0x66EEAF: test    eax, eax
0x66EEB1: jz      short loc_66EECE
0x66EEB3: mov     eax, [ebp+0]
0x66EEB6: mov     edx, [eax+154h]
0x66EEBC: mov     ecx, ebp
0x66EEBE: call    edx
0x66EEC0: lea     edi, [eax+30h]
0x66EEC3: mov     ecx, 9
0x66EEC8: lea     esi, [esp+0C4h+var_6C]
0x66EECC: rep movsd
0x66EECE: lea     eax, [esp+0C4h+var_48]
0x66EED2: push    eax
0x66EED3: lea     ecx, [esp+0C8h+var_24]
0x66EEDA: push    ecx
0x66EEDB: lea     ecx, [esp+0CCh+var_6C]
0x66EEDF: call    NiMAtrix33_Multiply
0x66EEE4: mov     ecx, 9
0x66EEE9: mov     esi, eax
0x66EEEB: lea     edi, [esp+0C4h+var_48]
0x66EEEF: rep movsd
0x66EEF1: mov     ecx, ds:0B333CCh
0x66EEF7: cmp     word ptr [ecx+0B6h], 0
0x66EEFF: ja      short loc_66EF05
0x66EF01: xor     ecx, ecx
0x66EF03: jmp     short loc_66EF0D
0x66EF05: mov     edx, [ecx+0B0h]
0x66EF0B: mov     ecx, [edx]
0x66EF0D: lea     edi, [ecx+30h]
0x66EF10: mov     esi, eax
0x66EF12: mov     ecx, 9
0x66EF17: rep movsd
0x66EF19: mov     eax, ds:0B333CCh
0x66EF1E: cmp     word ptr [eax+0B6h], 0
0x66EF26: ja      short loc_66EF2C
0x66EF28: xor     eax, eax
0x66EF2A: jmp     short loc_66EF34
0x66EF2C: mov     eax, [eax+0B0h]
0x66EF32: mov     eax, [eax]
0x66EF34: mov     ecx, [esp+0C4h+arg_0]
0x66EF3B: mov     [eax+54h], ecx
0x66EF3E: mov     edx, [esp+0C4h+arg_4]
0x66EF45: mov     [eax+58h], edx
0x66EF48: mov     ecx, [esp+0C4h+arg_8]
0x66EF4F: mov     [eax+5Ch], ecx
0x66EF52: mov     eax, ds:0B333CCh
0x66EF57: cmp     word ptr [eax+0B6h], 0
0x66EF5F: ja      short loc_66EF65
0x66EF61: xor     ecx, ecx
0x66EF63: jmp     short loc_66EF6D
0x66EF65: mov     edx, [eax+0B0h]
0x66EF6B: mov     ecx, [edx]; this
0x66EF6D: fldz
0x66EF6F: push    0; a3
0x66EF71: push    ecx
0x66EF72: fstp    [esp+0CCh+a2]; a2
0x66EF75: call    NiAVObject_UpdateNiAVObject
0x66EF7A: mov     eax, ds:0B333A0h
0x66EF7F: mov     ecx, [eax+0Ch]; this
0x66EF82: call    NiAVObject_InitializePropertyState
0x66EF87: mov     ecx, ds:0B333A0h
0x66EF8D: mov     ecx, [ecx+0Ch]
0x66EF90: call    NiNode_UpdateDynamicEffectState
0x66EF95: mov     edi, [esp+0C4h+var_AC]
0x66EF99: test    edi, edi
0x66EF9B: jz      loc_66F026
0x66EFA1: fld     [esp+0C4h+arg_8]
0x66EFA8: sub     esp, 0Ch
0x66EFAB: fstp    [esp+0D0h+var_C8]; float
0x66EFAF: mov     ecx, edi
0x66EFB1: fld     [esp+0D0h+arg_4]
0x66EFB8: fstp    [esp+0D0h+a2]; float
0x66EFBC: fld     [esp+0D0h+arg_0]
0x66EFC3: fstp    [esp+0D0h+var_D0]; float
0x66EFC6: call    sub_6A8E10
0x66EFCB: mov     edx, [ebp+0]
0x66EFCE: mov     eax, [edx+1E0h]
0x66EFD4: mov     ecx, ebp
0x66EFD6: call    eax
0x66EFD8: call    __CIcos
0x66EFDD: fstp    [esp+0C4h+var_AC]
0x66EFE1: mov     edx, [ebp+0]
0x66EFE4: fld     [esp+0C4h+var_AC]
0x66EFE8: mov     eax, [edx+1E0h]
0x66EFEE: fstp    [esp+0C4h+var_AC]
0x66EFF2: mov     ecx, ebp
0x66EFF4: call    eax
0x66EFF6: fstp    [esp+0C4h+var_B0]
0x66EFFA: fldz
0x66EFFC: sub     esp, 8
0x66EFFF: fstp    [esp+0CCh+var_C8]; float
0x66F003: fld     [esp+0CCh+var_AC]
0x66F007: fstp    [esp+0CCh+a2]; a3
0x66F00A: fld     [esp+0CCh+var_B0]
0x66F00E: call    __CIsin
0x66F013: fstp    [esp+0CCh+var_AC]
0x66F017: fld     [esp+0CCh+var_AC]
0x66F01B: push    ecx
0x66F01C: mov     ecx, edi
0x66F01E: fstp    [esp+0D0h+var_D0]; a2
0x66F021: call    sub_6A8E40
0x66F026: push    ebp; a4
0x66F027: mov     ecx, ebp
0x66F029: call    sub_665260
0x66F02E: mov     esi, [esp+0C4h+var_A8]
0x66F032: test    esi, esi
0x66F034: jz      short loc_66F07F
0x66F036: mov     ecx, [esp+0C4h+arg_0]
0x66F03D: mov     edx, [esp+0C4h+arg_4]
0x66F044: sub     esp, 0Ch
0x66F047: mov     eax, esp
0x66F049: mov     [eax], ecx
0x66F04B: mov     ecx, [esp+0D0h+arg_8]
0x66F052: mov     [eax+4], edx
0x66F055: mov     [eax+8], ecx
0x66F058: mov     ecx, esi; this
0x66F05A: call    TESObjectREFR_SetPosition
0x66F05F: mov     ecx, ebx; this
0x66F061: call    TESObjectCELL_GetWorldSpace
0x66F066: push    eax; int
0x66F067: push    ebx; int
0x66F068: push    esi; Concurrency::details::SchedulerBase *
0x66F069: call    sub_4DD4B0
0x66F06E: mov     edx, [esi]
0x66F070: mov     eax, [edx+178h]
0x66F076: add     esp, 0Ch
0x66F079: push    0
0x66F07B: mov     ecx, esi
0x66F07D: call    eax
0x66F07F: call    InitBSShaderAccumulator
0x66F084: test    eax, eax
0x66F086: jz      short loc_66F08F
0x66F088: mov     ecx, eax
0x66F08A: call    sub_7AA4D0
0x66F08F: cmp     dword ptr [ebp+5D0h], 0
0x66F096: jz      loc_66F234
0x66F09C: mov     ecx, ds:0B33B00h
0x66F0A2: call    sub_45A500
0x66F0A7: test    al, al
0x66F0A9: jnz     loc_66F1F1
0x66F0AF: mov     edx, [ebp+0]
0x66F0B2: mov     eax, [edx+174h]
0x66F0B8: mov     ecx, ebp
0x66F0BA: call    eax
0x66F0BC: test    ebx, ebx
0x66F0BE: mov     ecx, [eax]
0x66F0C0: mov     [esp+0C4h+var_9C], ecx
0x66F0C4: mov     edx, [eax+4]
0x66F0C7: mov     [esp+0C4h+var_98], edx
0x66F0CB: mov     eax, [eax+8]
0x66F0CE: mov     [esp+0C4h+var_94], eax
0x66F0D2: jz      short loc_66F12B
0x66F0D4: mov     ecx, ebx; this
0x66F0D6: call    TESObjectCELL_IsInterior
0x66F0DB: test    al, al
0x66F0DD: jnz     short loc_66F12B
0x66F0DF: fldz
0x66F0E1: lea     ecx, [esp+0C4h+var_A4]
0x66F0E5: push    ecx
0x66F0E6: fstp    [esp+0C8h+var_A4]
0x66F0EA: lea     edx, [esp+0C8h+var_9C]
0x66F0EE: push    edx
0x66F0EF: mov     ecx, ebx
0x66F0F1: call    sub_4D1E10
0x66F0F6: test    al, al
0x66F0F8: jz      short loc_66F12B
0x66F0FA: fld     [esp+0C4h+var_A4]
0x66F0FE: fadd    qword ptr ds:0A46970h
0x66F104: fld     [esp+0C4h+var_94]
0x66F108: fcomp   st(1)
0x66F10A: fnstsw  ax
0x66F10C: test    ah, 5
0x66F10F: jp      short loc_66F129
0x66F111: mov     eax, [ebp+0]
0x66F114: fstp    [esp+0C4h+var_94]
0x66F118: mov     edx, [eax+1CCh]
0x66F11E: lea     ecx, [esp+0C4h+var_9C]
0x66F122: push    ecx
0x66F123: mov     ecx, ebp
0x66F125: call    edx
0x66F127: jmp     short loc_66F12B
0x66F129: fstp    st
0x66F12B: xor     esi, esi
0x66F12D: lea     ecx, [ecx+0]
0x66F130: mov     eax, [ebp+0]
0x66F133: mov     edx, [eax+174h]
0x66F139: mov     ecx, ebp
0x66F13B: call    edx
0x66F13D: fld     dword ptr ds:0A73DE4h
0x66F143: mov     ecx, [eax]
0x66F145: mov     edx, [eax+4]
0x66F148: mov     eax, [eax+8]
0x66F14B: mov     [esp+0C4h+var_78], ecx
0x66F14F: mov     ecx, ds:0B3F9A8h
0x66F155: mov     dword ptr [esp+0C4h+var_84], ecx
0x66F159: push    0; int
0x66F15B: lea     ecx, [esp+0C8h+var_84]
0x66F15F: push    ecx; int
0x66F160: mov     [esp+0CCh+var_74], edx
0x66F164: mov     edx, ds:0B3F9ACh
0x66F16A: mov     [esp+0CCh+var_70], eax
0x66F16E: mov     eax, ds:0B3F9B0h
0x66F173: push    ecx
0x66F174: mov     ecx, ebp
0x66F176: fstp    [esp+0D0h+var_D0]; float
0x66F179: mov     dword ptr [esp+0D0h+var_84+4], edx
0x66F17D: mov     [esp+0D0h+var_7C], eax
0x66F181: call    sub_65AF30
0x66F186: mov     edx, [ebp+0]
0x66F189: mov     eax, [edx+174h]
0x66F18F: mov     ecx, ebp
0x66F191: call    eax
0x66F193: mov     ecx, [eax]
0x66F195: mov     edx, [eax+4]
0x66F198: mov     eax, [eax+8]
0x66F19B: mov     [esp+0C4h+var_88], eax
0x66F19F: fld     [esp+0C4h+var_88]
0x66F1A3: fsub    [esp+0C4h+var_70]
0x66F1A7: mov     [esp+0C4h+var_90], ecx
0x66F1AB: mov     [esp+0C4h+var_8C], edx
0x66F1AF: fstp    [esp+0C4h+var_A8]
0x66F1B3: fld     [esp+0C4h+var_A8]
0x66F1B7: fabs
0x66F1B9: fstp    [esp+0C4h+var_A8]
0x66F1BD: fld     [esp+0C4h+var_A8]
0x66F1C1: fcomp   qword ptr ds:0A2FC80h
0x66F1C7: fnstsw  ax
0x66F1C9: test    ah, 5
0x66F1CC: jnp     short loc_66F1DA
0x66F1CE: add     esi, 1
0x66F1D1: cmp     esi, 64h ; 'd'
0x66F1D4: jl      loc_66F130
0x66F1DA: cmp     esi, 64h ; 'd'
0x66F1DD: jnz     short loc_66F1F1
0x66F1DF: mov     edx, [ebp+0]
0x66F1E2: mov     edx, [edx+1CCh]
0x66F1E8: lea     eax, [esp+0C4h+var_9C]
0x66F1EC: push    eax
0x66F1ED: mov     ecx, ebp
0x66F1EF: call    edx
0x66F1F1: cmp     byte ptr [ebp+588h], 0
0x66F1F8: fldz
0x66F1FA: push    ecx
0x66F1FB: fstp    [esp+0C8h+var_C8]; a2
0x66F1FE: setz    al
0x66F201: mov     ecx, ebp; this
0x66F203: mov     [ebp+588h], al
0x66F209: call    sub_603CA0
0x66F20E: fldz
0x66F210: cmp     byte ptr [ebp+588h], 0
0x66F217: setz    cl
0x66F21A: mov     [ebp+588h], cl
0x66F220: push    ecx
0x66F221: mov     ecx, ebp; this
0x66F223: fstp    [esp+0C8h+var_C8]; a2
0x66F226: call    sub_603CA0
0x66F22B: push    0
0x66F22D: mov     ecx, ebp
0x66F22F: call    sub_66B710
0x66F234: mov     edx, ds:0B333CCh
0x66F23A: mov     eax, [edx+0DCh]
0x66F240: push    0; float
0x66F242: push    eax; int
0x66F243: call    sub_55FA50
0x66F248: fld     dword ptr ds:0B33E9Ch
0x66F24E: mov     ecx, ds:0B333A0h
0x66F254: fstp    [esp+0CCh+var_C8]; float
0x66F258: add     esp, 4
0x66F25B: call    sub_4424D0
0x66F260: cmp     byte ptr [ebp+7F8h], 0
0x66F267: jz      loc_66F2EE
0x66F26D: fld     dword ptr ds:0A3744Ch
0x66F273: push    ecx
0x66F274: mov     ecx, ds:0B3A6B0h
0x66F27A: fstp    [esp+0C8h+var_C8]; float
0x66F27D: push    2; int
0x66F27F: call    sub_5732D0
0x66F284: mov     ecx, ds:0B333A0h
0x66F28A: push    0
0x66F28C: push    0
0x66F28E: push    0
0x66F290: call    sub_440AF0
0x66F295: call    sub_57B7E0
0x66F29A: push    0
0x66F29C: mov     byte ptr [ebp+7F8h], 0
0x66F2A3: mov     ecx, ds:0B3A6B0h
0x66F2A9: push    2
0x66F2AB: call    sub_572EC0
0x66F2B0: mov     ecx, edi
0x66F2B2: call    sub_6A8D00
0x66F2B7: mov     ecx, edi
0x66F2B9: call    sub_6A9B40
0x66F2BE: mov     ecx, ds:0B030A4h
0x66F2C4: push    0; char
0x66F2C6: push    1; float
0x66F2C8: push    0; int
0x66F2CA: push    0; int
0x66F2CC: push    1; int
0x66F2CE: push    1; int
0x66F2D0: push    ecx; ArgList
0x66F2D1: call    sub_410BA0
0x66F2D6: add     esp, 1Ch
0x66F2D9: mov     ecx, edi
0x66F2DB: call    sub_6A8D50
0x66F2E0: mov     ecx, edi
0x66F2E2: call    sub_6A9C00
0x66F2E7: mov     byte ptr [ebp+7F8h], 0
0x66F2EE: cmp     byte ptr [esp+0C4h+var_B4+3], 0
0x66F2F3: jz      short loc_66F308
0x66F2F5: call    sub_40FDD0
0x66F2FA: cmp     byte ptr [esp+0C4h+var_B4+2], 0
0x66F2FF: jz      short loc_66F308
0x66F301: mov     ecx, edi
0x66F303: call    sub_6A8D50
0x66F308: mov     esi, [ebp+764h]
0x66F30E: xor     edi, edi
0x66F310: cmp     esi, edi
0x66F312: jz      short loc_66F330
0x66F314: mov     ecx, esi; this
0x66F316: call    sub_6B73E0
0x66F31B: push    esi
0x66F31C: call    FormHeapFree
0x66F321: add     esp, 4
0x66F324: mov     [ebp+764h], edi
0x66F32A: mov     [ebp+760h], edi
0x66F330: mov     edx, ds:0B33398h
0x66F336: mov     [edx+18h], edi
0x66F339: mov     ecx, ds:0B333A0h
0x66F33F: cmp     [ecx+34h], edi
0x66F342: jnz     short loc_66F358
0x66F344: mov     eax, [ecx+54h]
0x66F347: cmp     eax, edi
0x66F349: jz      short loc_66F358
0x66F34B: mov     ecx, eax
0x66F34D: call    sub_498F40
0x66F352: mov     ecx, ds:0B333A0h
0x66F358: call    sub_444A10
0x66F35D: pop     edi
0x66F35E: pop     esi
0x66F35F: pop     ebp
0x66F360: pop     ebx
0x66F361: add     esp, 0B4h
0x66F367: retn    20h ; ' '
