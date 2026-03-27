0x668D00: push    0FFFFFFFFh
0x668D02: push    offset SEH_668D00
0x668D07: mov     eax, large fs:0
0x668D0D: push    eax
0x668D0E: sub     esp, 288h
0x668D14: mov     eax, ds:0B30AACh
0x668D19: xor     eax, esp
0x668D1B: mov     [esp+294h+var_10], eax
0x668D22: push    ebx
0x668D23: push    ebp
0x668D24: push    esi
0x668D25: push    edi
0x668D26: mov     eax, ds:0B30AACh
0x668D2B: xor     eax, esp
0x668D2D: push    eax
0x668D2E: lea     eax, [esp+2A8h+var_C]
0x668D35: mov     large fs:0, eax
0x668D3B: mov     ebx, ecx
0x668D3D: xor     edi, edi
0x668D3F: cmp     [esp+2A8h+arg_0], 0
0x668D47: lea     ebp, [ebx+5D8h]
0x668D4D: jz      loc_6695FB
0x668D53: cmp     [ebp+0], edi
0x668D56: jnz     loc_66965E
0x668D5C: mov     al, ds:0B45DA4h
0x668D61: mov     ecx, offset ActorProcessManager_ptr
0x668D66: mov     [esp+2A8h+var_28D], al
0x668D6A: mov     byte ptr ds:0B45DA4h, 1
0x668D71: call    sub_679060
0x668D76: fldz
0x668D78: push    ecx
0x668D79: fstp    [esp+2ACh+a5]
0x668D7C: mov     ecx, offset ActorProcessManager_ptr
0x668D81: call    sub_67ACA0
0x668D86: mov     edx, [ebx]
0x668D88: mov     eax, [edx+154h]
0x668D8E: mov     ecx, ebx
0x668D90: call    eax
0x668D92: push    eax
0x668D93: call    sub_8B8700
0x668D98: add     esp, 4
0x668D9B: mov     ecx, ebx; this
0x668D9D: call    TESObjectREFR__GetNiNode
0x668DA2: push    eax
0x668DA3: call    sub_8B8700
0x668DA8: add     esp, 4
0x668DAB: mov     ecx, ebx; this
0x668DAD: call    TESObjectREFR__GetNiNode
0x668DB2: mov     esi, eax
0x668DB4: mov     eax, [esi+0Ch]
0x668DB7: cmp     eax, edi
0x668DB9: mov     [esp+2A8h+a2], eax
0x668DBD: jz      short loc_668DC9
0x668DBF: add     eax, 4
0x668DC2: push    eax; lpAddend
0x668DC3: call    dword ptr ds:0A28078h
0x668DC9: mov     ecx, esi
0x668DCB: mov     [esp+2A8h+var_4], 0
0x668DD6: call    sub_6FFFD0
0x668DDB: lea     ecx, [esp+2A8h+var_27C]
0x668DDF: call    sub_478B90
0x668DE4: fld1
0x668DE6: fst     [esp+2A8h+var_264]
0x668DEA: fst     [esp+2A8h+var_268]
0x668DEE: fstp    [esp+2A8h+var_26C]
0x668DF2: lea     ecx, [esp+2A8h+var_27C]
0x668DF6: push    ecx
0x668DF7: mov     ecx, esi
0x668DF9: mov     byte ptr [esp+2ACh+var_4], 1
0x668E01: call    sub_700610
0x668E06: mov     edi, eax
0x668E08: test    edi, edi
0x668E0A: jz      short loc_668E2D
0x668E0C: mov     edx, [edi]
0x668E0E: mov     eax, [edx+8]
0x668E11: mov     ecx, edi
0x668E13: call    eax
0x668E15: test    eax, eax
0x668E17: jz      short loc_668E2D
0x668E19: push    0
0x668E1B: push    eax
0x668E1C: push    1
0x668E1E: call    GetShadowSceneNode
0x668E23: add     esp, 4
0x668E26: mov     ecx, eax
0x668E28: call    sub_7C7F90
0x668E2D: mov     ecx, [esp+2A8h+a2]
0x668E31: push    ecx; a2
0x668E32: mov     ecx, esi; this
0x668E34: call    sub_478300
0x668E39: test    edi, edi
0x668E3B: jz      short loc_668E48
0x668E3D: mov     edx, [edi]
0x668E3F: mov     eax, [edx+8]
0x668E42: mov     ecx, edi
0x668E44: call    eax
0x668E46: jmp     short loc_668E4A
0x668E48: xor     eax, eax
0x668E4A: push    eax; a2
0x668E4B: mov     ecx, ebp; this
0x668E4D: call    NiSmartPointer_Set??
0x668E52: mov     ecx, [ebp+0]
0x668E55: call    sub_6FFFD0
0x668E5A: mov     eax, [ebp+0]
0x668E5D: push    eax
0x668E5E: call    sub_473120
0x668E63: mov     ecx, [ebp+0]
0x668E66: add     esp, 4
0x668E69: push    offset off_A3FA90
0x668E6E: call    sub_6FFAC0
0x668E73: mov     ecx, [ebp+0]
0x668E76: push    0
0x668E78: lea     edx, [esp+2ACh+var_28C]
0x668E7C: push    edx
0x668E7D: call    sub_708560
0x668E82: mov     eax, [esp+2A8h+var_28C]
0x668E86: test    eax, eax
0x668E88: jz      short loc_668EA8
0x668E8A: mov     esi, eax
0x668E8C: add     eax, 4
0x668E8F: push    eax; lpAddend
0x668E90: call    dword ptr ds:0A2807Ch
0x668E96: test    eax, eax
0x668E98: jnz     short loc_668EA8
0x668E9A: test    esi, esi
0x668E9C: jz      short loc_668EA8
0x668E9E: mov     eax, [esi]
0x668EA0: mov     edx, [eax]
0x668EA2: push    1
0x668EA4: mov     ecx, esi
0x668EA6: call    edx
0x668EA8: mov     ecx, [ebp+0]; this
0x668EAB: call    NiAVObject_InitializePropertyState
0x668EB0: fld1
0x668EB2: mov     eax, [ebp+0]
0x668EB5: push    ecx
0x668EB6: fstp    [esp+2ACh+a5]; float
0x668EB9: push    eax; int
0x668EBA: call    sub_4A2A90
0x668EBF: mov     eax, [ebp+0]
0x668EC2: add     esp, 8
0x668EC5: push    eax
0x668EC6: mov     ecx, ebx
0x668EC8: call    sub_664D70
0x668ECD: mov     eax, [ebp+0]
0x668ED0: mov     ecx, ds:0B3F9A8h
0x668ED6: mov     [eax+54h], ecx
0x668ED9: mov     edx, ds:0B3F9ACh
0x668EDF: mov     [eax+58h], edx
0x668EE2: mov     ecx, ds:0B3F9B0h
0x668EE8: mov     [eax+5Ch], ecx
0x668EEB: mov     eax, [ebp+0]
0x668EEE: mov     edx, [ebx]
0x668EF0: push    eax
0x668EF1: mov     eax, [edx+170h]
0x668EF7: push    ebx
0x668EF8: mov     ecx, ebx
0x668EFA: call    eax
0x668EFC: mov     ecx, eax
0x668EFE: call    sub_524510
0x668F03: mov     ecx, [ebp+0]
0x668F06: mov     edx, [ecx]
0x668F08: mov     eax, ds:0B06568h
0x668F0D: mov     edx, [edx+58h]
0x668F10: push    eax
0x668F11: call    edx
0x668F13: push    eax
0x668F14: push    0
0x668F16: mov     ecx, ebx
0x668F18: call    sub_5F8300
0x668F1D: push    0
0x668F1F: mov     ecx, 9
0x668F24: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x668F29: lea     edi, [esp+2ACh+var_260]
0x668F2D: rep movsd
0x668F2F: mov     edi, [ebp+0]
0x668F32: lea     eax, [esp+2ACh+var_260]
0x668F36: push    eax
0x668F37: lea     ecx, [esp+2B0h+var_23C]
0x668F3B: push    ecx
0x668F3C: mov     ecx, ebx
0x668F3E: call    sub_4D7C50
0x668F43: mov     esi, eax
0x668F45: add     edi, 30h ; '0'
0x668F48: mov     ecx, 9
0x668F4D: rep movsd
0x668F4F: mov     ecx, [ebp+0]
0x668F52: push    offset aPlayerinventor; "PlayerInventoryPC"
0x668F57: call    NiObjectNET_SetName
0x668F5C: push    1E0h; Size
0x668F61: call    FormHeapAlloc
0x668F66: add     esp, 4
0x668F69: mov     [esp+2A8h+var_280], eax
0x668F6D: test    eax, eax
0x668F6F: mov     byte ptr [esp+2A8h+var_4], 2
0x668F77: jz      short loc_668F84
0x668F79: mov     ecx, eax; this
0x668F7B: call    ??0BSFaceGenAnimationData@@QAE@XZ; BSFaceGenAnimationData::BSFaceGenAnimationData(void)
0x668F80: mov     esi, eax
0x668F82: jmp     short loc_668F86
0x668F84: xor     esi, esi
0x668F86: test    esi, esi
0x668F88: mov     [esp+2A8h+var_28C], esi
0x668F8C: jz      short loc_668F98
0x668F8E: lea     edx, [esi+4]
0x668F91: push    edx; lpAddend
0x668F92: call    dword ptr ds:0A28078h
0x668F98: mov     ecx, [ebp+0]
0x668F9B: mov     eax, [ecx]
0x668F9D: mov     edx, [eax+58h]
0x668FA0: push    offset aBsfacegenninod; "BSFaceGenNiNodeBiped"
0x668FA5: mov     byte ptr [esp+2ACh+var_4], 3
0x668FAD: call    edx
0x668FAF: push    eax
0x668FB0: push    offset dword_B39DB8
0x668FB5: call    NiRTTI_Cast
0x668FBA: mov     edi, eax
0x668FBC: add     esp, 8
0x668FBF: test    edi, edi
0x668FC1: jz      short loc_668FF4
0x668FC3: mov     eax, [ebx]
0x668FC5: mov     edx, [eax+284h]
0x668FCB: push    45h ; 'E'
0x668FCD: mov     ecx, ebx
0x668FCF: call    edx
0x668FD1: mov     [esp+2A8h+var_294], eax
0x668FD5: fild    [esp+2A8h+var_294]
0x668FD9: mov     eax, [edi]
0x668FDB: mov     edx, [eax+0A0h]
0x668FE1: fstp    [esp+2A8h+var_294]
0x668FE5: push    esi
0x668FE6: fld     [esp+2ACh+var_294]
0x668FEA: mov     ecx, edi
0x668FEC: fstp    dword ptr [esi+1DCh]
0x668FF2: call    edx
0x668FF4: mov     ecx, [ebp+0]
0x668FF7: mov     eax, [ecx]
0x668FF9: mov     edx, [eax+58h]
0x668FFC: push    offset aBsfacegennin_0; "BSFaceGenNiNodeSkinned"
0x669001: call    edx
0x669003: push    eax
0x669004: push    offset dword_B39DB8
0x669009: call    NiRTTI_Cast
0x66900E: mov     edi, eax
0x669010: add     esp, 8
0x669013: test    edi, edi
0x669015: jz      short loc_66902D
0x669017: mov     eax, [edi]
0x669019: mov     edx, [eax+0A0h]
0x66901F: push    esi
0x669020: mov     ecx, edi
0x669022: call    edx
0x669024: push    1
0x669026: mov     ecx, edi
0x669028: call    sub_55D1B0
0x66902D: test    esi, esi
0x66902F: jz      short loc_669051
0x669031: lea     eax, [esi+4]
0x669034: push    eax; lpAddend
0x669035: call    dword ptr ds:0A2807Ch
0x66903B: test    eax, eax
0x66903D: jnz     short loc_669049
0x66903F: mov     edx, [esi]
0x669041: mov     eax, [edx]
0x669043: push    1
0x669045: mov     ecx, esi
0x669047: call    eax
0x669049: mov     [esp+2A8h+var_28C], 0
0x669051: mov     ecx, [ebx+58h]
0x669054: mov     edx, [ecx]
0x669056: mov     eax, [edx+304h]
0x66905C: call    eax
0x66905E: test    al, al
0x669060: jnz     loc_669142
0x669066: mov     ecx, [ebx+58h]
0x669069: mov     edx, [ecx]
0x66906B: mov     eax, [edx+0ECh]
0x669071: push    1
0x669073: call    eax
0x669075: test    eax, eax
0x669077: jz      loc_669142
0x66907D: mov     ecx, [ebp+0]
0x669080: mov     edx, [ecx]
0x669082: mov     eax, ds:0B065B0h
0x669087: mov     edx, [edx+58h]
0x66908A: push    eax
0x66908B: call    edx
0x66908D: mov     ecx, [ebp+0]
0x669090: mov     edx, ds:0B065B4h
0x669096: mov     esi, eax
0x669098: mov     eax, [ecx]
0x66909A: mov     eax, [eax+58h]
0x66909D: push    edx
0x66909E: call    eax
0x6690A0: mov     ecx, [ebx+58h]
0x6690A3: mov     edx, [ecx]
0x6690A5: mov     edi, eax
0x6690A7: mov     eax, [edx+0ECh]
0x6690AD: push    1
0x6690AF: call    eax
0x6690B1: mov     eax, [eax+8]
0x6690B4: cmp     byte ptr [eax+90h], 5
0x6690BB: mov     ecx, [ebp+0]
0x6690BE: jnz     short loc_6690CF
0x6690C0: mov     edx, [ecx]
0x6690C2: mov     eax, ds:0B065C0h
0x6690C7: mov     edx, [edx+58h]
0x6690CA: push    eax
0x6690CB: call    edx
0x6690CD: jmp     short loc_6690DD
0x6690CF: mov     eax, [ecx]
0x6690D1: mov     edx, ds:0B065ACh
0x6690D7: mov     eax, [eax+58h]
0x6690DA: push    edx
0x6690DB: call    eax
0x6690DD: test    eax, eax
0x6690DF: mov     [esp+2A8h+var_294], eax
0x6690E3: jz      short loc_669142
0x6690E5: xor     eax, eax
0x6690E7: test    esi, esi
0x6690E9: jz      short loc_6690F3
0x6690EB: push    eax
0x6690EC: mov     ecx, esi
0x6690EE: call    sub_405790
0x6690F3: test    edi, edi
0x6690F5: jz      short loc_669103
0x6690F7: test    eax, eax
0x6690F9: jnz     short loc_669107
0x6690FB: push    eax
0x6690FC: mov     ecx, edi
0x6690FE: call    sub_405790
0x669103: test    eax, eax
0x669105: jz      short loc_669142
0x669107: mov     ecx, ds:0B3F9A8h
0x66910D: mov     [eax+54h], ecx
0x669110: mov     edx, ds:0B3F9ACh
0x669116: mov     [eax+58h], edx
0x669119: mov     ecx, ds:0B3F9B0h
0x66911F: mov     [eax+5Ch], ecx
0x669122: lea     edi, [eax+30h]
0x669125: mov     ecx, 9
0x66912A: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x66912F: rep movsd
0x669131: mov     ecx, [esp+2A8h+var_294]
0x669135: mov     edx, [ecx]
0x669137: push    1
0x669139: push    eax
0x66913A: mov     eax, [edx+84h]
0x669140: call    eax
0x669142: mov     ecx, [ebp+0]
0x669145: mov     edx, [ecx]
0x669147: mov     eax, [edx+58h]
0x66914A: push    offset aArrowbone; "ArrowBone"
0x66914F: call    eax
0x669151: test    eax, eax
0x669153: jz      short loc_6691C1
0x669155: mov     edx, [eax]
0x669157: mov     ecx, eax
0x669159: mov     eax, [edx+8]
0x66915C: call    eax
0x66915E: mov     esi, eax
0x669160: test    esi, esi
0x669162: jz      short loc_6691C1
0x669164: xor     eax, eax
0x669166: cmp     [esi+0B6h], ax
0x66916D: mov     [esp+2A8h+var_294], eax
0x669171: jbe     short loc_6691C1
0x669173: mov     edx, [esi]
0x669175: mov     edx, [edx+8Ch]
0x66917B: push    eax
0x66917C: lea     eax, [esp+2ACh+var_288]
0x669180: push    eax
0x669181: mov     ecx, esi
0x669183: call    edx
0x669185: mov     eax, [esp+2A8h+var_288]
0x669189: test    eax, eax
0x66918B: jz      short loc_6691AB
0x66918D: mov     edi, eax
0x66918F: add     eax, 4
0x669192: push    eax; lpAddend
0x669193: call    dword ptr ds:0A2807Ch
0x669199: test    eax, eax
0x66919B: jnz     short loc_6691AB
0x66919D: test    edi, edi
0x66919F: jz      short loc_6691AB
0x6691A1: mov     eax, [edi]
0x6691A3: mov     edx, [eax]
0x6691A5: push    1
0x6691A7: mov     ecx, edi
0x6691A9: call    edx
0x6691AB: mov     eax, [esp+2A8h+var_294]
0x6691AF: movzx   ecx, word ptr [esi+0B6h]
0x6691B6: add     eax, 1
0x6691B9: cmp     eax, ecx
0x6691BB: mov     [esp+2A8h+var_294], eax
0x6691BF: jb      short loc_669173
0x6691C1: mov     ecx, [ebp+0]
0x6691C4: mov     edx, [ecx]
0x6691C6: mov     eax, [edx+58h]
0x6691C9: push    offset aMagicnode; "magicNode"
0x6691CE: call    eax
0x6691D0: test    eax, eax
0x6691D2: jz      short loc_669240
0x6691D4: mov     edx, [eax]
0x6691D6: mov     ecx, eax
0x6691D8: mov     eax, [edx+8]
0x6691DB: call    eax
0x6691DD: mov     esi, eax
0x6691DF: test    esi, esi
0x6691E1: jz      short loc_669240
0x6691E3: xor     eax, eax
0x6691E5: cmp     [esi+0B6h], ax
0x6691EC: mov     [esp+2A8h+var_294], eax
0x6691F0: jbe     short loc_669240
0x6691F2: mov     edx, [esi]
0x6691F4: mov     edx, [edx+8Ch]
0x6691FA: push    eax
0x6691FB: lea     eax, [esp+2ACh+var_280]
0x6691FF: push    eax
0x669200: mov     ecx, esi
0x669202: call    edx
0x669204: mov     eax, [esp+2A8h+var_280]
0x669208: test    eax, eax
0x66920A: jz      short loc_66922A
0x66920C: mov     edi, eax
0x66920E: add     eax, 4
0x669211: push    eax; lpAddend
0x669212: call    dword ptr ds:0A2807Ch
0x669218: test    eax, eax
0x66921A: jnz     short loc_66922A
0x66921C: test    edi, edi
0x66921E: jz      short loc_66922A
0x669220: mov     eax, [edi]
0x669222: mov     edx, [eax]
0x669224: push    1
0x669226: mov     ecx, edi
0x669228: call    edx
0x66922A: mov     eax, [esp+2A8h+var_294]
0x66922E: movzx   ecx, word ptr [esi+0B6h]
0x669235: add     eax, 1
0x669238: cmp     eax, ecx
0x66923A: mov     [esp+2A8h+var_294], eax
0x66923E: jb      short loc_6691F2
0x669240: fldz
0x669242: mov     eax, [ebp+0]
0x669245: push    ecx
0x669246: fst     [esp+2ACh+a5]; a5
0x669249: push    0; a4
0x66924B: push    ecx
0x66924C: fstp    [esp+2B4h+a3]; a3
0x66924F: push    0; a2
0x669251: push    eax; a1
0x669252: call    sub_7D92C0
0x669257: push    0DCh ; 'Ü'; Size
0x66925C: call    FormHeapAlloc
0x669261: add     esp, 18h
0x669264: mov     [esp+2A8h+var_294], eax
0x669268: test    eax, eax
0x66926A: mov     byte ptr [esp+2A8h+var_4], 4
0x669272: jz      short loc_66927D
0x669274: mov     ecx, eax
0x669276: call    NewActorAnimData
0x66927B: jmp     short loc_66927F
0x66927D: xor     eax, eax
0x66927F: mov     edx, [ebx]
0x669281: mov     [ebx+5DCh], eax
0x669287: mov     eax, [edx+170h]
0x66928D: mov     ecx, ebx
0x66928F: mov     byte ptr [esp+2A8h+var_4], 3
0x669297: call    eax
0x669299: push    eax
0x66929A: mov     [esp+2ACh+var_288], eax
0x66929E: call    GetFormModelPAth
0x6692A3: push    eax
0x6692A4: lea     ecx, [esp+2B0h+Str]
0x6692AB: push    offset aS; "%s"
0x6692B0: push    ecx
0x6692B1: call    __sprintf
0x6692B6: lea     edx, [esp+2B8h+Str]
0x6692BD: push    5Ch ; '\'; Ch
0x6692BF: push    edx; Str
0x6692C0: call    _strrchr
0x6692C5: mov     esi, eax
0x6692C7: add     esp, 18h
0x6692CA: test    esi, esi
0x6692CC: jnz     loc_669354
0x6692D2: mov     esi, [esp+2A8h+var_28C]
0x6692D6: test    esi, esi
0x6692D8: mov     byte ptr [esp+2A8h+var_4], 1
0x6692E0: jz      short loc_6692FA
0x6692E2: lea     eax, [esi+4]
0x6692E5: push    eax; lpAddend
0x6692E6: call    dword ptr ds:0A2807Ch
0x6692EC: test    eax, eax
0x6692EE: jnz     short loc_6692FA
0x6692F0: mov     edx, [esi]
0x6692F2: mov     eax, [edx]
0x6692F4: push    1
0x6692F6: mov     ecx, esi
0x6692F8: call    eax
0x6692FA: mov     ecx, [esp+2A8h+var_27C]
0x6692FE: test    ecx, ecx
0x669300: mov     byte ptr [esp+2A8h+var_4], 0
0x669308: jz      short loc_669312
0x66930A: mov     edx, [ecx]
0x66930C: mov     eax, [edx]
0x66930E: push    1
0x669310: call    eax
0x669312: mov     ecx, [esp+2A8h+var_278]
0x669316: test    ecx, ecx
0x669318: jz      short loc_669322
0x66931A: mov     edx, [ecx]
0x66931C: mov     eax, [edx]
0x66931E: push    1
0x669320: call    eax
0x669322: mov     esi, [esp+2A8h+a2]
0x669326: test    esi, esi
0x669328: mov     [esp+2A8h+var_4], 0FFFFFFFFh
0x669333: jz      short loc_66934D
0x669335: lea     ecx, [esi+4]
0x669338: push    ecx; lpAddend
0x669339: call    dword ptr ds:0A2807Ch
0x66933F: test    eax, eax
0x669341: jnz     short loc_66934D
0x669343: mov     edx, [esi]
0x669345: mov     eax, [edx]
0x669347: push    1
0x669349: mov     ecx, esi
0x66934B: call    eax
0x66934D: xor     eax, eax
0x66934F: jmp     loc_669661
0x669354: mov     ecx, ds:0A370DCh
0x66935A: mov     [esi], ecx
0x66935C: mov     edx, ds:0A370E0h
0x669362: lea     ecx, [esp+2A8h+Str]
0x669369: push    ecx
0x66936A: mov     [esi+4], edx
0x66936D: mov     al, ds:0A370E4h
0x669372: push    offset aMeshes_0; "Meshes"
0x669377: lea     edx, [esp+2B0h+var_218]
0x66937E: push    offset aDataSS; "Data\\%s\\%s"
0x669383: push    edx
0x669384: mov     [esi+8], al
0x669387: call    __sprintf
0x66938C: mov     eax, [esp+2B8h+var_288]
0x669390: add     esp, 10h
0x669393: push    0; int
0x669395: push    eax
0x669396: call    GetFormModelPAth
0x66939B: add     esp, 4
0x66939E: push    eax; char *
0x66939F: lea     ecx, [esp+2B0h+var_218]
0x6693A6: push    ecx; Str
0x6693A7: mov     ecx, ds:0B33A1Ch
0x6693AD: call    sub_434850
0x6693B2: mov     [esp+2A8h+var_294], eax
0x6693B6: mov     byte ptr [esi], 0
0x6693B9: mov     edi, offset off_B102CC; "HandToHand"
0x6693BE: mov     edi, edi
0x6693C0: mov     edx, [edi]
0x6693C2: push    edx
0x6693C3: lea     eax, [esp+2ACh+Str]
0x6693CA: push    eax
0x6693CB: push    offset aMeshes_0; "Meshes"
0x6693D0: lea     ecx, [esp+2B4h+var_218]
0x6693D7: push    offset aDataSSSidle_kf; "Data\\%s\\%s\\%sIdle.KF"
0x6693DC: push    ecx
0x6693DD: call    __sprintf
0x6693E2: mov     ecx, ds:0B33A04h
0x6693E8: mov     edx, [ecx]
0x6693EA: mov     edx, [edx+4]
0x6693ED: add     esp, 14h
0x6693F0: push    0FFFFFFFFh
0x6693F2: push    0
0x6693F4: push    0
0x6693F6: lea     eax, [esp+2B4h+var_218]
0x6693FD: push    eax
0x6693FE: call    edx
0x669400: test    eax, eax
0x669402: jz      short loc_66945B
0x669404: push    104h; Size
0x669409: call    FormHeapAlloc
0x66940E: mov     esi, eax
0x669410: mov     eax, [esp+2ACh+var_288]
0x669414: push    eax
0x669415: call    GetFormModelPAth
0x66941A: add     esp, 8
0x66941D: mov     edx, esi
0x66941F: nop
0x669420: mov     cl, [eax]
0x669422: mov     [edx], cl
0x669424: add     eax, 1
0x669427: add     edx, 1
0x66942A: test    cl, cl
0x66942C: jnz     short loc_669420
0x66942E: push    5Ch ; '\'; Ch
0x669430: push    esi; Str
0x669431: call    _strrchr
0x669436: add     esp, 8
0x669439: test    eax, eax
0x66943B: jz      short loc_66945B
0x66943D: mov     ecx, [edi]
0x66943F: push    ecx
0x669440: add     eax, 1
0x669443: push    offset aSidle_kf; "%sIdle.KF"
0x669448: push    eax
0x669449: call    __sprintf
0x66944E: mov     ecx, [esp+2B4h+var_294]
0x669452: add     esp, 0Ch
0x669455: push    esi
0x669456: call    BSSimpleList_PushBack
0x66945B: mov     edx, [edi]
0x66945D: push    edx
0x66945E: lea     eax, [esp+2ACh+Str]
0x669465: push    eax
0x669466: push    offset aMeshes_0; "Meshes"
0x66946B: lea     ecx, [esp+2B4h+var_218]
0x669472: push    offset aDataSSStorchid; "Data\\%s\\%s\\%sTorchIdle.KF"
0x669477: push    ecx
0x669478: call    __sprintf
0x66947D: mov     ecx, ds:0B33A04h
0x669483: mov     edx, [ecx]
0x669485: mov     edx, [edx+4]
0x669488: add     esp, 14h
0x66948B: push    0FFFFFFFFh
0x66948D: push    0
0x66948F: push    0
0x669491: lea     eax, [esp+2B4h+var_218]
0x669498: push    eax
0x669499: call    edx
0x66949B: test    eax, eax
0x66949D: jz      short loc_6694FB
0x66949F: push    104h; Size
0x6694A4: call    FormHeapAlloc
0x6694A9: mov     esi, eax
0x6694AB: mov     eax, [esp+2ACh+var_288]
0x6694AF: push    eax
0x6694B0: call    GetFormModelPAth
0x6694B5: add     esp, 8
0x6694B8: mov     edx, esi
0x6694BA: lea     ebx, [ebx+0]
0x6694C0: mov     cl, [eax]
0x6694C2: mov     [edx], cl
0x6694C4: add     eax, 1
0x6694C7: add     edx, 1
0x6694CA: test    cl, cl
0x6694CC: jnz     short loc_6694C0
0x6694CE: push    5Ch ; '\'; Ch
0x6694D0: push    esi; Str
0x6694D1: call    _strrchr
0x6694D6: add     esp, 8
0x6694D9: test    eax, eax
0x6694DB: jz      short loc_6694FB
0x6694DD: mov     ecx, [edi]
0x6694DF: push    ecx
0x6694E0: add     eax, 1
0x6694E3: push    offset aStorchidle_kf; "%sTorchIdle.KF"
0x6694E8: push    eax
0x6694E9: call    __sprintf
0x6694EE: mov     ecx, [esp+2B4h+var_294]
0x6694F2: add     esp, 0Ch
0x6694F5: push    esi
0x6694F6: call    BSSimpleList_PushBack
0x6694FB: add     edi, 4
0x6694FE: cmp     edi, offset animGroupInfos_ptr
0x669504: jl      loc_6693C0
0x66950A: mov     eax, [ebp+0]
0x66950D: mov     edx, [esp+2A8h+var_294]
0x669511: mov     ecx, [ebx+5DCh]; this
0x669517: push    ebx; int
0x669518: push    eax; int
0x669519: push    edx; int
0x66951A: call    Menu_PickIdles??
0x66951F: lea     ecx, [ebx+44h]
0x669522: call    sub_41E650
0x669527: test    eax, eax
0x669529: jz      short loc_669545
0x66952B: mov     eax, [eax]
0x66952D: test    eax, eax
0x66952F: jz      short loc_669545
0x669531: push    0
0x669533: push    eax
0x669534: push    1
0x669536: call    GetShadowSceneNode
0x66953B: add     esp, 4
0x66953E: mov     ecx, eax
0x669540: call    sub_7C6AE0
0x669545: mov     al, [esp+2A8h+var_28D]
0x669549: mov     ds:0B45DA4h, al
0x66954E: mov     ecx, [ebp+0]
0x669551: mov     edx, [ecx]
0x669553: mov     eax, [edx+78h]
0x669556: call    eax
0x669558: mov     ecx, [ebp+0]
0x66955B: mov     edx, [ecx]
0x66955D: mov     eax, [edx+50h]
0x669560: call    eax
0x669562: mov     ecx, [ebx+58h]
0x669565: test    ecx, ecx
0x669567: jz      short loc_66957A
0x669569: mov     edx, [ecx]
0x66956B: mov     eax, [edx+42Ch]
0x669571: push    0
0x669573: push    0
0x669575: push    1
0x669577: push    ebx
0x669578: call    eax
0x66957A: mov     esi, [esp+2A8h+var_28C]
0x66957E: test    esi, esi
0x669580: mov     byte ptr [esp+2A8h+var_4], 1
0x669588: jz      short loc_6695A2
0x66958A: lea     ecx, [esi+4]
0x66958D: push    ecx; lpAddend
0x66958E: call    dword ptr ds:0A2807Ch
0x669594: test    eax, eax
0x669596: jnz     short loc_6695A2
0x669598: mov     edx, [esi]
0x66959A: mov     eax, [edx]
0x66959C: push    1
0x66959E: mov     ecx, esi
0x6695A0: call    eax
0x6695A2: mov     ecx, [esp+2A8h+var_27C]
0x6695A6: test    ecx, ecx
0x6695A8: mov     byte ptr [esp+2A8h+var_4], 0
0x6695B0: jz      short loc_6695BA
0x6695B2: mov     edx, [ecx]
0x6695B4: mov     eax, [edx]
0x6695B6: push    1
0x6695B8: call    eax
0x6695BA: mov     ecx, [esp+2A8h+var_278]
0x6695BE: test    ecx, ecx
0x6695C0: jz      short loc_6695CA
0x6695C2: mov     edx, [ecx]
0x6695C4: mov     eax, [edx]
0x6695C6: push    1
0x6695C8: call    eax
0x6695CA: mov     esi, [esp+2A8h+a2]
0x6695CE: test    esi, esi
0x6695D0: mov     [esp+2A8h+var_4], 0FFFFFFFFh
0x6695DB: jz      loc_66965E
0x6695E1: lea     ecx, [esi+4]
0x6695E4: push    ecx; lpAddend
0x6695E5: call    dword ptr ds:0A2807Ch
0x6695EB: test    eax, eax
0x6695ED: jnz     short loc_66965E
0x6695EF: mov     edx, [esi]
0x6695F1: mov     eax, [edx]
0x6695F3: push    1
0x6695F5: mov     ecx, esi
0x6695F7: call    eax
0x6695F9: jmp     short loc_66965E
0x6695FB: cmp     [ebp+0], edi
0x6695FE: jz      short loc_66965E
0x669600: mov     esi, [ebx+5DCh]
0x669606: cmp     esi, edi
0x669608: jz      short loc_66961A
0x66960A: mov     ecx, esi; this
0x66960C: call    DisposeActorAnimData
0x669611: push    esi
0x669612: call    FormHeapFree
0x669617: add     esp, 4
0x66961A: mov     [ebx+5DCh], edi
0x669620: mov     esi, [ebp+0]
0x669623: cmp     esi, edi
0x669625: jz      short loc_669646
0x669627: lea     ecx, [esi+4]
0x66962A: push    ecx; lpAddend
0x66962B: call    dword ptr ds:0A2807Ch
0x669631: test    eax, eax
0x669633: jnz     short loc_669643
0x669635: cmp     esi, edi
0x669637: jz      short loc_669643
0x669639: mov     edx, [esi]
0x66963B: mov     eax, [edx]
0x66963D: push    1
0x66963F: mov     ecx, esi
0x669641: call    eax
0x669643: mov     [ebp+0], edi
0x669646: mov     ecx, [ebx+5E0h]
0x66964C: cmp     ecx, edi
0x66964E: jz      short loc_66965E
0x669650: mov     edx, [ecx]
0x669652: mov     eax, [edx]
0x669654: push    1
0x669656: call    eax
0x669658: mov     [ebx+5E0h], edi
0x66965E: mov     eax, [ebp+0]
0x669661: mov     ecx, dword ptr [esp+2A8h+var_C]
0x669668: mov     large fs:0, ecx
0x66966F: pop     ecx
0x669670: pop     edi
0x669671: pop     esi
0x669672: pop     ebp
0x669673: pop     ebx
0x669674: mov     ecx, [esp+294h+var_10]
0x66967B: xor     ecx, esp
0x66967D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x669682: add     esp, 294h
0x669688: retn    4
