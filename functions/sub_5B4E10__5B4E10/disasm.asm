0x5B4E10: push    0FFFFFFFFh
0x5B4E12: push    offset SEH_5B4E10
0x5B4E17: mov     eax, large fs:0
0x5B4E1D: push    eax
0x5B4E1E: sub     esp, 23Ch
0x5B4E24: mov     eax, ds:0B30AACh
0x5B4E29: xor     eax, esp
0x5B4E2B: mov     [esp+248h+var_10], eax
0x5B4E32: push    ebx; a3
0x5B4E33: push    ebp; a3
0x5B4E34: push    esi; a3
0x5B4E35: push    edi; a3
0x5B4E36: mov     eax, ds:0B30AACh
0x5B4E3B: xor     eax, esp
0x5B4E3D: push    eax; a3
0x5B4E3E: lea     eax, [esp+25Ch+var_C]
0x5B4E45: mov     large fs:0, eax
0x5B4E4B: mov     edi, [esp+25Ch+arg_0]
0x5B4E52: push    400h
0x5B4E57: mov     [esp+260h+var_23C], edi; a3
0x5B4E5B: call    Menu_GetOpenMenuTile
0x5B4E60: mov     ebx, eax
0x5B4E62: xor     ebp, ebp
0x5B4E64: add     esp, 4
0x5B4E67: cmp     ebx, ebp
0x5B4E69: mov     [esp+25Ch+var_234], ebx
0x5B4E6D: jz      loc_5B57AC
0x5B4E73: cmp     edi, ebp
0x5B4E75: jz      loc_5B57AC
0x5B4E7B: push    ebp; int
0x5B4E7C: push    offset ??_R0?AVMagicPopupMenu@@@8; struct TypeDescriptor *
0x5B4E81: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5B4E86: push    ebp; int
0x5B4E87: mov     ecx, ebx
0x5B4E89: call    Tile_GetParentMenu
0x5B4E8E: push    eax; void *
0x5B4E8F: call    OblivionDynamicCast
0x5B4E94: mov     esi, eax
0x5B4E96: add     esp, 14h
0x5B4E99: cmp     esi, ebp
0x5B4E9B: jz      loc_5B57AC
0x5B4EA1: mov     edi, [edi+8]
0x5B4EA4: movzx   eax, byte ptr [edi+4]
0x5B4EA8: add     eax, 0FFFFFFECh; switch 23 cases
0x5B4EAB: cmp     eax, 16h
0x5B4EAE: ja      def_5B4EBB; jumptable 005B4EBB default case, cases 21-32,34-37,39-41
0x5B4EB4: movzx   eax, ds:byte_5B57E8[eax]
0x5B4EBB: jmp     ds:jpt_5B4EBB[eax*4]; switch jump
0x5B4EC2: push    ebp; jumptable 005B4EBB case 38
0x5B4EC3: push    offset ??_R0?AVTESSoulGem@@@8; struct TypeDescriptor *
0x5B4EC8: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5B4ECD: push    ebp; int
0x5B4ECE: push    edi; void *
0x5B4ECF: call    OblivionDynamicCast
0x5B4ED4: fld     dword ptr ds:0A379B4h
0x5B4EDA: mov     ecx, [esi+2Ch]; this
0x5B4EDD: fstp    [esp+270h+a2]; a3
0x5B4EE1: add     esp, 10h
0x5B4EE4: push    0FA1h; a2
0x5B4EE9: mov     [esp+264h+a3], eax; a3
0x5B4EED: mov     dword ptr [esi+58h], 1
0x5B4EF4: call    Tile_SetFloat
0x5B4EF9: lea     edi, [esi+30h]
0x5B4EFC: mov     [esp+25Ch+var_234], 7
0x5B4F04: mov     ecx, [edi]; this
0x5B4F06: fld1
0x5B4F08: push    ecx
0x5B4F09: fstp    [esp+260h+a2]; a3
0x5B4F0C: push    0FA1h; a2
0x5B4F11: call    Tile_SetFloat
0x5B4F16: add     edi, 4
0x5B4F19: sub     [esp+25Ch+var_234], 1
0x5B4F1E: jnz     short loc_5B4F04
0x5B4F20: mov     edi, [esp+25Ch+a3]
0x5B4F24: mov     eax, [edi+4Ch]
0x5B4F27: cmp     eax, ebp
0x5B4F29: jnz     short loc_5B4F30
0x5B4F2B: mov     eax, offset EmptyString
0x5B4F30: push    eax
0x5B4F31: push    offset aIcons; "Icons"
0x5B4F36: lea     ecx, [esp+264h+var_218]
0x5B4F3A: push    offset aSS_2; "%s\\%s"
0x5B4F3F: push    ecx
0x5B4F40: call    __sprintf
0x5B4F45: mov     ecx, [esi+2Ch]
0x5B4F48: add     esp, 10h
0x5B4F4B: lea     edx, [esp+25Ch+var_218]
0x5B4F4F: push    edx
0x5B4F50: push    0FAFh
0x5B4F55: call    Tile_SetString
0x5B4F5A: fld     dword ptr ds:0A30634h
0x5B4F60: mov     ecx, [esi+2Ch]; this
0x5B4F63: push    ecx
0x5B4F64: fstp    [esp+260h+a2]; a3
0x5B4F67: push    0FB0h; a2
0x5B4F6C: call    Tile_SetFloat
0x5B4F71: mov     [esp+25Ch+var_244], ebp
0x5B4F75: mov     word ptr [esp+25Ch+var_244+4], bp
0x5B4F7A: mov     word ptr [esp+25Ch+var_244+6], bp
0x5B4F7F: push    1; ArgList
0x5B4F81: lea     eax, [esp+260h+var_244]
0x5B4F85: push    offset aMagicpop_effec; "magicpop_effect_%d_icon"
0x5B4F8A: push    eax; int
0x5B4F8B: mov     [esp+268h+var_4], ebp
0x5B4F92: call    BSStringT_Static_Format
0x5B4F97: mov     ecx, [esp+268h+var_244]
0x5B4F9B: add     esp, 0Ch
0x5B4F9E: push    ecx; unsigned __int8 *
0x5B4F9F: mov     ecx, [esi+2Ch]
0x5B4FA2: call    sub_589930
0x5B4FA7: cmp     eax, ebp
0x5B4FA9: jz      short loc_5B4FB4
0x5B4FAB: mov     ecx, [eax+2Ch]
0x5B4FAE: or      ecx, 10h
0x5B4FB1: mov     [eax+2Ch], ecx
0x5B4FB4: mov     edx, [esp+25Ch+var_23C]
0x5B4FB8: mov     eax, [edx]
0x5B4FBA: cmp     eax, ebp
0x5B4FBC: jz      short loc_5B4FC2
0x5B4FBE: mov     ecx, [eax]
0x5B4FC0: jmp     short loc_5B4FC4
0x5B4FC2: xor     ecx, ecx; this
0x5B4FC4: cmp     ecx, ebp
0x5B4FC6: jz      short loc_5B4FE6
0x5B4FC8: push    ebp; int
0x5B4FC9: push    offset ??_R0?AVExtraSoul@@@8; struct TypeDescriptor *
0x5B4FCE: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x5B4FD3: push    ebp; int
0x5B4FD4: push    2Fh ; '/'; a2
0x5B4FD6: call    BaseExtraList_GetExtraData
0x5B4FDB: push    eax; void *
0x5B4FDC: call    OblivionDynamicCast
0x5B4FE1: add     esp, 14h
0x5B4FE4: jmp     short loc_5B4FE8
0x5B4FE6: xor     eax, eax
0x5B4FE8: mov     dword ptr [esp+25Ch+var_230], ebp
0x5B4FEC: mov     word ptr [esp+25Ch+var_230+4], bp
0x5B4FF1: mov     word ptr [esp+25Ch+var_230+6], bp
0x5B4FF6: cmp     eax, ebp
0x5B4FF8: mov     byte ptr [esp+25Ch+var_4], 1
0x5B5000: jz      short loc_5B5008
0x5B5002: movsx   eax, byte ptr [eax+0Ch]
0x5B5006: jmp     short loc_5B500C
0x5B5008: movzx   eax, byte ptr [edi+70h]
0x5B500C: mov     edi, ds:0B38BE0h
0x5B5012: push    eax
0x5B5013: call    sub_4BC020
0x5B5018: push    eax
0x5B5019: push    edi; ArgList
0x5B501A: lea     eax, [esp+268h+var_230]
0x5B501E: push    offset aSS_5; "%s: %s"
0x5B5023: push    eax; int
0x5B5024: call    BSStringT_Static_Format
0x5B5029: mov     edi, dword ptr [esp+270h+var_230]
0x5B502D: mov     ecx, [esi+2Ch]
0x5B5030: add     esp, 14h
0x5B5033: push    edi
0x5B5034: push    0FAEh
0x5B5039: call    Tile_SetString
0x5B503E: fld     [esp+25Ch+arg_8]
0x5B5045: push    ecx
0x5B5046: fstp    [esp+260h+a2]; a3
0x5B5049: push    0FAEh; a2
0x5B504E: mov     ecx, ebx; this
0x5B5050: call    Tile_SetFloat
0x5B5055: fld     [esp+25Ch+arg_C]
0x5B505C: push    ecx
0x5B505D: fstp    [esp+260h+a2]; a3
0x5B5060: push    0FAFh; a2
0x5B5065: mov     ecx, ebx; this
0x5B5067: call    Tile_SetFloat
0x5B506C: fld     [esp+25Ch+arg_10]
0x5B5073: push    ecx
0x5B5074: fstp    [esp+260h+a2]; a3
0x5B5077: push    0FB1h; a2
0x5B507C: mov     ecx, ebx; this
0x5B507E: call    Tile_SetFloat
0x5B5083: fld     [esp+25Ch+arg_4]
0x5B508A: mov     ecx, [esi+28h]
0x5B508D: fst     dword ptr [esi+50h]
0x5B5090: push    0FCBh
0x5B5095: fstp    qword ptr [esp+260h+var_23C]
0x5B5099: call    Tile_GetFloat
0x5B509E: fsubr   qword ptr [esp+25Ch+var_23C]
0x5B50A2: push    ecx
0x5B50A3: mov     ecx, [esi+28h]; this
0x5B50A6: fstp    [esp+260h+var_23C]
0x5B50AA: fld     [esp+260h+var_23C]
0x5B50AE: fst     dword ptr [esi+54h]
0x5B50B1: fstp    [esp+260h+a2]; a3
0x5B50B4: push    0FADh; a2
0x5B50B9: call    Tile_SetFloat
0x5B50BE: fld1
0x5B50C0: mov     esi, [esi+4Ch]
0x5B50C3: push    ecx
0x5B50C4: fstp    [esp+260h+a2]; a3
0x5B50C7: push    0FA1h; a2
0x5B50CC: mov     ecx, esi; this
0x5B50CE: call    Tile_SetFloat
0x5B50D3: push    edi
0x5B50D4: call    FormHeapFree
0x5B50D9: mov     ecx, [esp+260h+var_244]
0x5B50DD: push    ecx
0x5B50DE: mov     [esp+264h+var_4], 0FFFFFFFFh
0x5B50E9: call    FormHeapFree
0x5B50EE: add     esp, 8
0x5B50F1: jmp     def_5B4EBB; jumptable 005B4EBB default case, cases 21-32,34-37,39-41
0x5B50F6: push    ebp; jumptable 005B4EBB case 42
0x5B50F7: push    offset ??_R0?AVTESSigilStone@@@8; struct TypeDescriptor *
0x5B50FC: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5B5101: push    ebp; int
0x5B5102: push    edi; void *
0x5B5103: call    OblivionDynamicCast
0x5B5108: fld     dword ptr ds:0A379B4h
0x5B510E: mov     ecx, [esi+2Ch]; this
0x5B5111: fstp    [esp+270h+a2]; a3
0x5B5115: add     esp, 10h
0x5B5118: push    0FA1h; a2
0x5B511D: mov     [esp+264h+var_23C], eax
0x5B5121: mov     dword ptr [esi+58h], 1
0x5B5128: call    Tile_SetFloat
0x5B512D: lea     edi, [esi+30h]
0x5B5130: mov     ebx, 7
0x5B5135: mov     ecx, [edi]; this
0x5B5137: fld1
0x5B5139: push    ecx
0x5B513A: fstp    [esp+260h+a2]; a3
0x5B513D: push    0FA1h; a2
0x5B5142: call    Tile_SetFloat
0x5B5147: add     edi, 4
0x5B514A: sub     ebx, 1
0x5B514D: jnz     short loc_5B5135
0x5B514F: mov     eax, [esp+25Ch+var_23C]
0x5B5153: cmp     eax, ebp
0x5B5155: jz      short loc_5B5167
0x5B5157: add     eax, 78h ; 'x'
0x5B515A: mov     [esp+25Ch+a3], eax
0x5B515E: mov     [esp+25Ch+var_23C], ebp
0x5B5162: lea     edi, [esi+2Ch]
0x5B5165: jmp     short loc_5B5184
0x5B5167: mov     [esp+25Ch+a3], ebp
0x5B516B: mov     eax, ebp
0x5B516D: mov     [esp+25Ch+var_23C], ebp
0x5B5171: lea     edi, [esi+2Ch]
0x5B5174: jmp     short loc_5B5184
0x5B5176: jmp     short loc_5B5180
0x5B5178: align 10h
0x5B5180: mov     eax, [esp+274h+a2]
0x5B5184: cmp     eax, ebp
0x5B5186: jz      loc_5B57A0
0x5B518C: mov     ebx, [eax+4]
0x5B518F: mov     eax, [ebx+1Ch]
0x5B5192: mov     eax, [eax+48h]
0x5B5195: cmp     eax, ebp
0x5B5197: jnz     short loc_5B519E
0x5B5199: mov     eax, offset EmptyString
0x5B519E: push    eax
0x5B519F: push    offset aIcons; "Icons"
0x5B51A4: lea     edx, [esp+264h+var_218]
0x5B51A8: push    offset aSS_2; "%s\\%s"
0x5B51AD: push    edx
0x5B51AE: call    __sprintf
0x5B51B3: mov     ecx, [edi]
0x5B51B5: add     esp, 10h
0x5B51B8: lea     eax, [esp+25Ch+var_218]
0x5B51BC: push    eax
0x5B51BD: push    0FAFh
0x5B51C2: call    Tile_SetString
0x5B51C7: fld     dword ptr ds:0A30634h
0x5B51CD: mov     ecx, [edi]; this
0x5B51CF: push    ecx
0x5B51D0: fstp    [esp+260h+a2]; a3
0x5B51D3: push    0FB0h; a2
0x5B51D8: call    Tile_SetFloat
0x5B51DD: mov     [esp+25Ch+var_244], ebp
0x5B51E1: mov     word ptr [esp+25Ch+var_244+4], bp
0x5B51E6: mov     word ptr [esp+25Ch+var_244+6], bp
0x5B51EB: mov     eax, [esp+25Ch+var_23C]
0x5B51EF: add     eax, 1
0x5B51F2: push    eax; ArgList
0x5B51F3: lea     ecx, [esp+260h+var_244]
0x5B51F7: push    offset aMagicpop_effec; "magicpop_effect_%d_icon"
0x5B51FC: push    ecx; int
0x5B51FD: mov     [esp+268h+var_4], 2
0x5B5208: mov     dword ptr [esp+268h+var_230], eax
0x5B520C: call    BSStringT_Static_Format
0x5B5211: mov     edx, [esp+268h+var_244]
0x5B5215: mov     ecx, [edi]
0x5B5217: add     esp, 0Ch
0x5B521A: push    edx; unsigned __int8 *
0x5B521B: call    sub_589930
0x5B5220: cmp     eax, ebp
0x5B5222: jz      short loc_5B522D
0x5B5224: mov     ecx, [eax+2Ch]
0x5B5227: or      ecx, 10h
0x5B522A: mov     [eax+2Ch], ecx
0x5B522D: mov     ecx, [edi]; this
0x5B522F: fld     dword ptr ds:0A379B4h
0x5B5235: push    ecx
0x5B5236: fstp    [esp+260h+a2]; a3
0x5B5239: push    0FA1h; a2
0x5B523E: call    Tile_SetFloat
0x5B5243: fld1
0x5B5245: mov     eax, [ebx+10h]
0x5B5248: cmp     eax, 1
0x5B524B: setz    cl
0x5B524E: cmp     eax, ebp
0x5B5250: setz    dl
0x5B5253: lea     eax, [esp+25Ch+var_228]
0x5B5257: push    ecx
0x5B5258: push    ebp; a3
0x5B5259: push    edx; a3
0x5B525A: push    ecx
0x5B525B: fstp    [esp+26Ch+var_26C]; a3
0x5B525E: push    6; a3
0x5B5260: push    eax; a3
0x5B5261: mov     ecx, ebx
0x5B5263: call    EffectItem_BuildDisplayString
0x5B5268: mov     eax, [eax]
0x5B526A: mov     ecx, [edi]
0x5B526C: push    eax
0x5B526D: push    0FAEh
0x5B5272: mov     byte ptr [esp+27Ch+var_1C], 3
0x5B527A: call    Tile_SetString
0x5B527F: mov     ecx, [esp+274h+var_244+4]
0x5B5283: push    ecx
0x5B5284: mov     byte ptr [esp+278h+var_1C], 2
0x5B528C: call    FormHeapFree
0x5B5291: fld     [esp+278h+var_C]
0x5B5298: mov     ebx, [esp+278h+var_24C]
0x5B529C: fstp    [esp+278h+var_278]; a3
0x5B529F: push    0FAEh; a2
0x5B52A4: mov     ecx, ebx; this
0x5B52A6: mov     [esp+27Ch+var_244+4], ebp
0x5B52AA: mov     word ptr [esp+27Ch+var_23C+2], bp
0x5B52AF: mov     word ptr [esp+27Ch+var_23C], bp
0x5B52B4: call    Tile_SetFloat
0x5B52B9: fld     [esp+274h+var_8]
0x5B52C0: push    ecx
0x5B52C1: fstp    [esp+278h+var_278]; a3
0x5B52C4: push    0FAFh; a2
0x5B52C9: mov     ecx, ebx; this
0x5B52CB: call    Tile_SetFloat
0x5B52D0: fld     [esp+274h+var_4]
0x5B52D7: push    ecx
0x5B52D8: fstp    [esp+278h+var_278]; a3
0x5B52DB: push    0FB1h; a2
0x5B52E0: mov     ecx, ebx; this
0x5B52E2: call    Tile_SetFloat
0x5B52E7: fld     [esp+274h+var_10]
0x5B52EE: mov     ecx, [esi+28h]
0x5B52F1: fst     dword ptr [esi+50h]
0x5B52F4: push    0FCBh
0x5B52F9: fstp    qword ptr [esp+278h+var_254]
0x5B52FD: call    Tile_GetFloat
0x5B5302: fsubr   qword ptr [esp+274h+var_254]
0x5B5306: push    ecx
0x5B5307: mov     ecx, [esi+28h]; this
0x5B530A: fstp    [esp+278h+var_254]
0x5B530E: fld     [esp+278h+var_254]
0x5B5312: fst     dword ptr [esi+54h]
0x5B5315: fstp    [esp+278h+var_278]; a3
0x5B5318: push    0FADh; a2
0x5B531D: call    Tile_SetFloat
0x5B5322: fld1
0x5B5324: mov     ecx, [esi+4Ch]; this
0x5B5327: push    ecx
0x5B5328: fstp    [esp+278h+var_278]; a3
0x5B532B: push    0FA1h; a2
0x5B5330: call    Tile_SetFloat
0x5B5335: mov     edx, [esp+274h+a2]
0x5B5339: mov     eax, [edx+8]
0x5B533C: cmp     eax, ebp
0x5B533E: jz      short loc_5B5349
0x5B5340: add     eax, 0FFFFFFFCh
0x5B5343: mov     [esp+274h+a2], eax
0x5B5347: jmp     short loc_5B534D
0x5B5349: mov     [esp+274h+a2], ebp
0x5B534D: mov     eax, [esp+274h+var_25C]
0x5B5351: push    eax
0x5B5352: mov     [esp+278h+var_1C], 0FFFFFFFFh
0x5B535D: call    FormHeapFree
0x5B5362: mov     eax, [esp+278h+a3]
0x5B5366: add     esp, 4
0x5B5369: add     edi, 4
0x5B536C: cmp     eax, 8
0x5B536F: mov     [esp+274h+var_25C], ebp
0x5B5373: mov     word ptr [esp+274h+var_258+2], bp
0x5B5378: mov     word ptr [esp+274h+var_258], bp
0x5B537D: mov     [esp+274h+var_254], eax
0x5B5381: jl      loc_5B5180
0x5B5387: jmp     def_5B4EBB; jumptable 005B4EBB default case, cases 21-32,34-37,39-41
0x5B538C: push    ebp; jumptable 005B4EBB case 20
0x5B538D: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x5B5392: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5B5397: push    ebp; int
0x5B5398: push    edi; void *
0x5B5399: call    OblivionDynamicCast
0x5B539E: fld     dword ptr ds:0A379B4h
0x5B53A4: mov     ecx, [esi+2Ch]; this
0x5B53A7: fstp    [esp+270h+a2]; a3
0x5B53AB: add     esp, 10h
0x5B53AE: push    0FA1h; a2
0x5B53B3: mov     dword ptr [esp+264h+var_230], eax
0x5B53B7: mov     dword ptr [esi+58h], 1
0x5B53BE: call    Tile_SetFloat
0x5B53C3: lea     edi, [esi+30h]
0x5B53C6: mov     [esp+25Ch+var_23C], 7
0x5B53CE: mov     ecx, [edi]; this
0x5B53D0: fld1
0x5B53D2: push    ecx
0x5B53D3: fstp    [esp+260h+a2]; a3
0x5B53D6: push    0FA1h; a2
0x5B53DB: call    Tile_SetFloat
0x5B53E0: add     edi, 4
0x5B53E3: sub     [esp+25Ch+var_23C], 1
0x5B53E8: jnz     short loc_5B53CE
0x5B53EA: push    offset aIcon_small_arm; "icon_small_armor.dds"
0x5B53EF: push    offset aIcons; "Icons"
0x5B53F4: lea     ecx, [esp+264h+var_218]
0x5B53F8: push    offset aSS_2; "%s\\%s"
0x5B53FD: push    ecx
0x5B53FE: call    __sprintf
0x5B5403: mov     ecx, [esi+2Ch]
0x5B5406: add     esp, 10h
0x5B5409: lea     edx, [esp+25Ch+var_218]
0x5B540D: push    edx
0x5B540E: push    0FAFh
0x5B5413: call    Tile_SetString
0x5B5418: fld     dword ptr ds:0A2FE7Ch
0x5B541E: mov     ecx, [esi+2Ch]; this
0x5B5421: push    ecx
0x5B5422: fstp    [esp+260h+a2]; a3
0x5B5425: push    0FB0h; a2
0x5B542A: call    Tile_SetFloat
0x5B542F: mov     [esp+25Ch+var_244], ebp
0x5B5433: mov     word ptr [esp+25Ch+var_244+4], bp
0x5B5438: mov     word ptr [esp+25Ch+var_244+6], bp
0x5B543D: mov     ecx, dword ptr [esp+25Ch+var_230]
0x5B5441: mov     edi, ds:0B38BE8h
0x5B5447: mov     [esp+25Ch+var_4], 4
0x5B5452: call    TESObjectARMO_ISHeavyArmor
0x5B5457: movzx   eax, al
0x5B545A: mov     eax, ds:0B084E8h[eax*4]
0x5B5461: cmp     eax, ebp
0x5B5463: jz      short loc_5B5469
0x5B5465: mov     eax, [eax]
0x5B5467: jmp     short loc_5B546B
0x5B5469: xor     eax, eax
0x5B546B: push    edi
0x5B546C: push    eax; ArgList
0x5B546D: lea     ecx, [esp+264h+var_244]
0x5B5471: push    offset aSS; "%s %s"
0x5B5476: push    ecx; int
0x5B5477: call    BSStringT_Static_Format
0x5B547C: mov     edi, [esp+26Ch+var_244]
0x5B5480: mov     ecx, [esi+2Ch]
0x5B5483: add     esp, 10h
0x5B5486: push    edi
0x5B5487: push    0FAEh
0x5B548C: call    Tile_SetString
0x5B5491: fld     [esp+25Ch+arg_8]
0x5B5498: push    ecx
0x5B5499: fstp    [esp+260h+a2]; a3
0x5B549C: push    0FAEh; a2
0x5B54A1: mov     ecx, ebx; this
0x5B54A3: call    Tile_SetFloat
0x5B54A8: fld     [esp+25Ch+arg_C]
0x5B54AF: push    ecx
0x5B54B0: fstp    [esp+260h+a2]; a3
0x5B54B3: push    0FAFh; a2
0x5B54B8: mov     ecx, ebx; this
0x5B54BA: call    Tile_SetFloat
0x5B54BF: fld     [esp+25Ch+arg_10]
0x5B54C6: push    ecx
0x5B54C7: fstp    [esp+260h+a2]; a3
0x5B54CA: push    0FB1h; a2
0x5B54CF: mov     ecx, ebx; this
0x5B54D1: call    Tile_SetFloat
0x5B54D6: fld     [esp+25Ch+arg_4]
0x5B54DD: mov     ecx, [esi+28h]
0x5B54E0: fst     dword ptr [esi+50h]
0x5B54E3: push    0FCBh
0x5B54E8: fstp    [esp+260h+var_230]
0x5B54EC: call    Tile_GetFloat
0x5B54F1: fsubr   [esp+25Ch+var_230]
0x5B54F5: push    ecx
0x5B54F6: mov     ecx, [esi+28h]; this
0x5B54F9: fstp    dword ptr [esp+260h+var_230]
0x5B54FD: fld     dword ptr [esp+260h+var_230]
0x5B5501: fst     dword ptr [esi+54h]
0x5B5504: fstp    [esp+260h+a2]; a3
0x5B5507: push    0FADh; a2
0x5B550C: call    Tile_SetFloat
0x5B5511: fld1
0x5B5513: mov     esi, [esi+4Ch]
0x5B5516: push    ecx
0x5B5517: fstp    [esp+260h+a2]; a3
0x5B551A: push    0FA1h; a2
0x5B551F: mov     ecx, esi; this
0x5B5521: call    Tile_SetFloat
0x5B5526: push    edi
0x5B5527: mov     [esp+260h+var_4], 0FFFFFFFFh
0x5B5532: call    FormHeapFree
0x5B5537: add     esp, 4
0x5B553A: jmp     def_5B4EBB; jumptable 005B4EBB default case, cases 21-32,34-37,39-41
0x5B553F: mov     ecx, [esi+2Ch]; jumptable 005B4EBB case 33
0x5B5542: fld     dword ptr ds:0A379B4h
0x5B5548: push    ecx
0x5B5549: fstp    [esp+260h+a2]; a3
0x5B554C: mov     ebx, 1
0x5B5551: push    0FA1h; a2
0x5B5556: mov     [esi+58h], ebx
0x5B5559: call    Tile_SetFloat
0x5B555E: push    offset aIcon_small_dam; "icon_small_damage.dds"
0x5B5563: push    offset aIcons; "Icons"
0x5B5568: lea     edx, [esp+264h+var_114]
0x5B556F: push    offset aSS_2; "%s\\%s"
0x5B5574: push    edx
0x5B5575: call    __sprintf
0x5B557A: mov     ecx, [esi+2Ch]
0x5B557D: add     esp, 10h
0x5B5580: lea     eax, [esp+25Ch+var_114]
0x5B5587: push    eax
0x5B5588: push    0FAFh
0x5B558D: call    Tile_SetString
0x5B5592: fld     dword ptr ds:0A2FE7Ch
0x5B5598: mov     ecx, [esi+2Ch]; this
0x5B559B: push    ecx
0x5B559C: fstp    [esp+260h+a2]; a3
0x5B559F: push    0FB0h; a2
0x5B55A4: call    Tile_SetFloat
0x5B55A9: movsx   ecx, byte ptr [edi+90h]
0x5B55B0: mov     eax, ds:0B39A44h[ecx*4]
0x5B55B7: cmp     eax, ebp
0x5B55B9: jz      short loc_5B55BF
0x5B55BB: mov     eax, [eax]
0x5B55BD: jmp     short loc_5B55C1
0x5B55BF: xor     eax, eax
0x5B55C1: mov     ecx, [esi+2Ch]
0x5B55C4: push    eax
0x5B55C5: push    0FAEh
0x5B55CA: call    Tile_SetString
0x5B55CF: mov     ecx, [esp+25Ch+var_23C]
0x5B55D3: mov     [esp+25Ch+a3], ebx; a3
0x5B55D7: call    sub_484DF0
0x5B55DC: cmp     eax, ebp
0x5B55DE: jz      loc_5B56DC
0x5B55E4: lea     edi, [eax+34h]
0x5B55E7: cmp     edi, ebp
0x5B55E9: jz      loc_5B56DC
0x5B55EF: lea     ebx, [esi+30h]
0x5B55F2: mov     eax, [edi]
0x5B55F4: cmp     eax, ebp
0x5B55F6: jz      loc_5B56D5
0x5B55FC: cmp     [esp+25Ch+a3], 8
0x5B5601: jge     loc_5B5705
0x5B5607: mov     eax, [eax+1Ch]
0x5B560A: mov     eax, [eax+48h]
0x5B560D: cmp     eax, ebp
0x5B560F: jnz     short loc_5B5616
0x5B5611: mov     eax, offset EmptyString
0x5B5616: push    eax
0x5B5617: push    offset aIcons; "Icons"
0x5B561C: lea     edx, [esp+264h+var_114]
0x5B5623: push    offset aSS_2; "%s\\%s"
0x5B5628: push    edx
0x5B5629: call    __sprintf
0x5B562E: fld     dword ptr ds:0A379B4h
0x5B5634: mov     ecx, [ebx]; this
0x5B5636: fstp    [esp+26Ch+a2]; a3
0x5B563A: add     esp, 0Ch
0x5B563D: push    0FA1h; a2
0x5B5642: call    Tile_SetFloat
0x5B5647: mov     ecx, [ebx]
0x5B5649: lea     eax, [esp+25Ch+var_114]
0x5B5650: push    eax
0x5B5651: push    0FAFh
0x5B5656: call    Tile_SetString
0x5B565B: mov     ecx, [esp+25Ch+var_23C]
0x5B565F: call    sub_484DF0
0x5B5664: cmp     eax, ebp
0x5B5666: jz      short loc_5B566D
0x5B5668: add     eax, 24h ; '$'
0x5B566B: jmp     short loc_5B566F
0x5B566D: xor     eax, eax
0x5B566F: mov     ecx, [edi]
0x5B5671: fld1
0x5B5673: push    ecx
0x5B5674: fstp    [esp+260h+a2]; float
0x5B5677: push    eax; int
0x5B5678: lea     edx, [esp+264h+var_220]
0x5B567C: push    edx; int
0x5B567D: call    EffectItem_GetDisplayText
0x5B5682: mov     eax, [eax]
0x5B5684: mov     ecx, [ebx]
0x5B5686: push    eax
0x5B5687: push    0FAEh
0x5B568C: mov     [esp+264h+var_4], 5
0x5B5697: call    Tile_SetString
0x5B569C: mov     eax, [esp+25Ch+var_220]
0x5B56A0: push    eax
0x5B56A1: mov     [esp+260h+var_4], 0FFFFFFFFh
0x5B56AC: call    FormHeapFree
0x5B56B1: add     [esp+260h+a3], 1
0x5B56B6: mov     [esp+260h+var_220], ebp
0x5B56BA: mov     [esp+260h+var_21A], bp
0x5B56BF: mov     [esp+260h+var_21C], bp
0x5B56C4: mov     edi, [edi+4]
0x5B56C7: add     esp, 4
0x5B56CA: add     ebx, 4
0x5B56CD: cmp     edi, ebp
0x5B56CF: jnz     loc_5B55F2
0x5B56D5: cmp     [esp+25Ch+a3], 8
0x5B56DA: jge     short loc_5B5705
0x5B56DC: mov     ecx, [esp+25Ch+a3]
0x5B56E0: mov     ebx, 8
0x5B56E5: lea     edi, [esi+ecx*4+2Ch]
0x5B56E9: sub     ebx, ecx
0x5B56EB: mov     ecx, [edi]; this
0x5B56ED: fld1
0x5B56EF: push    ecx
0x5B56F0: fstp    [esp+260h+a2]; a3
0x5B56F3: push    0FA1h; a2
0x5B56F8: add     edi, 4
0x5B56FB: call    Tile_SetFloat
0x5B5700: sub     ebx, 1
0x5B5703: jnz     short loc_5B56EB
0x5B5705: fld     [esp+25Ch+arg_8]
0x5B570C: mov     edi, [esp+25Ch+var_234]
0x5B5710: push    ecx
0x5B5711: fstp    [esp+260h+a2]; a3
0x5B5714: push    0FAEh; a2
0x5B5719: mov     ecx, edi; this
0x5B571B: call    Tile_SetFloat
0x5B5720: fld     [esp+25Ch+arg_C]
0x5B5727: push    ecx
0x5B5728: fstp    [esp+260h+a2]; a3
0x5B572B: push    0FAFh; a2
0x5B5730: mov     ecx, edi; this
0x5B5732: call    Tile_SetFloat
0x5B5737: fld     [esp+25Ch+arg_10]
0x5B573E: push    ecx
0x5B573F: fstp    [esp+260h+a2]; a3
0x5B5742: push    0FB1h; a2
0x5B5747: mov     ecx, edi; this
0x5B5749: call    Tile_SetFloat
0x5B574E: fld     [esp+25Ch+arg_4]
0x5B5755: mov     ecx, [esi+28h]
0x5B5758: fst     dword ptr [esi+50h]
0x5B575B: push    0FCBh
0x5B5760: fstp    qword ptr [esp+260h+var_244]
0x5B5764: call    Tile_GetFloat
0x5B5769: fsubr   qword ptr [esp+25Ch+var_244]
0x5B576D: push    ecx
0x5B576E: mov     ecx, [esi+28h]; this
0x5B5771: fstp    dword ptr [esp+260h+var_230]
0x5B5775: fld     dword ptr [esp+260h+var_230]
0x5B5779: fst     dword ptr [esi+54h]
0x5B577C: fstp    [esp+260h+a2]; a3
0x5B577F: push    0FADh; a2
0x5B5784: call    Tile_SetFloat
0x5B5789: fld1
0x5B578B: push    ecx
0x5B578C: fstp    [esp+260h+a2]; a3
0x5B578F: mov     ecx, [esi+4Ch]; this
0x5B5792: push    0FA1h; a2
0x5B5797: call    Tile_SetFloat
0x5B579C: mov     ebx, edi
0x5B579E: jmp     short def_5B4EBB; jumptable 005B4EBB default case, cases 21-32,34-37,39-41
0x5B57A0: mov     ebx, [esp+25Ch+var_234]
0x5B57A4: push    ebp; jumptable 005B4EBB default case, cases 21-32,34-37,39-41
0x5B57A5: mov     ecx, ebx
0x5B57A7: call    sub_58FBA0
0x5B57AC: mov     ecx, [esp+25Ch+var_C]
0x5B57B3: mov     large fs:0, ecx
0x5B57BA: pop     ecx
0x5B57BB: pop     edi
0x5B57BC: pop     esi
0x5B57BD: pop     ebp
0x5B57BE: pop     ebx
0x5B57BF: mov     ecx, [esp+248h+var_10]
0x5B57C6: xor     ecx, esp
0x5B57C8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5B57CD: add     esp, 248h
0x5B57D3: retn
