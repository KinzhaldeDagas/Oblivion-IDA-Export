0x4EBDA0: push    0FFFFFFFFh
0x4EBDA2: push    offset SEH_73AC20
0x4EBDA7: mov     eax, large fs:0
0x4EBDAD: push    eax
0x4EBDAE: sub     esp, 28h
0x4EBDB1: push    ebx
0x4EBDB2: push    ebp
0x4EBDB3: push    esi
0x4EBDB4: push    edi
0x4EBDB5: mov     eax, ds:0B30AACh
0x4EBDBA: xor     eax, esp
0x4EBDBC: push    eax
0x4EBDBD: lea     eax, [esp+48h+var_C]
0x4EBDC1: mov     large fs:0, eax
0x4EBDC7: mov     eax, ds:0B333A0h
0x4EBDCC: mov     eax, [eax+34h]
0x4EBDCF: test    eax, eax
0x4EBDD1: jnz     loc_4EC570
0x4EBDD7: cmp     ds:0B09B00h, al
0x4EBDDD: jz      loc_4EC570
0x4EBDE3: cmp     ds:0B09AE4h, al
0x4EBDE9: jz      loc_4EC570
0x4EBDEF: cmp     ds:0B3608Dh, al
0x4EBDF5: jnz     short loc_4EBDFC
0x4EBDF7: call    sub_4EA750
0x4EBDFC: fld     dword ptr ds:0B09B18h
0x4EBE02: mov     cl, ds:0B09B08h
0x4EBE08: fstp    [esp+48h+var_30]
0x4EBE0C: mov     ds:0B43344h, cl
0x4EBE12: fld     dword ptr ds:0B09B10h
0x4EBE18: fstp    [esp+48h+var_2C]
0x4EBE1C: fldz
0x4EBE1E: fcomp   [esp+48h+var_30]
0x4EBE22: fnstsw  ax
0x4EBE24: test    ah, 1
0x4EBE27: jz      loc_4EC570
0x4EBE2D: cmp     dword ptr ds:0B36094h, 0
0x4EBE34: jnz     short loc_4EBEB0
0x4EBE36: push    0
0x4EBE38: call    GetShadowSceneNode
0x4EBE3D: mov     esi, eax
0x4EBE3F: mov     edx, [esi]
0x4EBE41: mov     eax, [edx+58h]
0x4EBE44: add     esp, 4
0x4EBE47: push    offset aGrass; "Grass"
0x4EBE4C: mov     ecx, esi
0x4EBE4E: call    eax
0x4EBE50: test    eax, eax
0x4EBE52: mov     ds:0B36094h, eax
0x4EBE57: jnz     short loc_4EBEB0
0x4EBE59: push    0DCh ; 'Ü'; Size
0x4EBE5E: call    FormHeapAlloc
0x4EBE63: add     esp, 4
0x4EBE66: mov     [esp+48h+var_18], eax
0x4EBE6A: test    eax, eax
0x4EBE6C: mov     [esp+48h+var_4], 0
0x4EBE74: jz      short loc_4EBE81
0x4EBE76: push    0
0x4EBE78: mov     ecx, eax; this
0x4EBE7A: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4EBE7F: jmp     short loc_4EBE83
0x4EBE81: xor     eax, eax
0x4EBE83: push    offset aGrass; "Grass"
0x4EBE88: mov     ecx, eax
0x4EBE8A: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x4EBE92: mov     ds:0B36094h, eax
0x4EBE97: call    NiObjectNET_SetName
0x4EBE9C: mov     edx, [esi]
0x4EBE9E: mov     eax, ds:0B36094h
0x4EBEA3: mov     edx, [edx+84h]
0x4EBEA9: push    0
0x4EBEAB: push    eax
0x4EBEAC: mov     ecx, esi
0x4EBEAE: call    edx
0x4EBEB0: fld     [esp+48h+var_30]
0x4EBEB4: sub     esp, 10h
0x4EBEB7: fstp    [esp+58h+var_4C]; float
0x4EBEBB: fld     [esp+58h+var_2C]
0x4EBEBF: fstp    [esp+58h+var_50]; float
0x4EBEC3: fldz
0x4EBEC5: fst     [esp+58h+var_54]; float
0x4EBEC9: fstp    [esp+58h+var_58]; int
0x4EBECC: call    sub_7C2960
0x4EBED1: fld     [esp+58h+arg_0]
0x4EBED5: fld     st
0x4EBED7: add     esp, 10h
0x4EBEDA: fld     qword ptr ds:0A46040h
0x4EBEE0: fmul    st(1), st
0x4EBEE2: fxch    st(1)
0x4EBEE4: call    Double_To_SInt32
0x4EBEE9: fld     [esp+48h+arg_4]
0x4EBEED: fld     st
0x4EBEEF: mov     esi, eax
0x4EBEF1: fmulp   st(2), st
0x4EBEF3: mov     [esp+48h+a2], eax
0x4EBEF7: fxch    st(1)
0x4EBEF9: call    Double_To_SInt32
0x4EBEFE: fldz
0x4EBF00: fcom    st(2)
0x4EBF02: mov     ecx, eax
0x4EBF04: mov     [esp+48h+a3], eax
0x4EBF08: fnstsw  ax
0x4EBF0A: fstp    st(2)
0x4EBF0C: test    ah, 41h
0x4EBF0F: jnz     short loc_4EBF18
0x4EBF11: sub     esi, 1
0x4EBF14: mov     [esp+48h+a2], esi
0x4EBF18: fcompp
0x4EBF1A: fnstsw  ax
0x4EBF1C: test    ah, 5
0x4EBF1F: jp      short loc_4EBF28
0x4EBF21: sub     ecx, 1
0x4EBF24: mov     [esp+48h+a3], ecx
0x4EBF28: push    ecx; a3
0x4EBF29: mov     ecx, ds:0B333A0h; this
0x4EBF2F: push    esi; a2
0x4EBF30: call    TES_GetCellFromCoords
0x4EBF35: fld     [esp+48h+arg_18]
0x4EBF39: mov     esi, [esp+48h+arg_C]
0x4EBF3D: mov     edi, [esp+48h+arg_10]
0x4EBF41: mov     ebx, [esp+48h+arg_14]
0x4EBF45: mov     ebp, [esp+48h+arg_0]
0x4EBF49: mov     edx, [esp+48h+arg_4]
0x4EBF4D: sub     esp, 18h
0x4EBF50: fstp    [esp+60h+var_4C]; float
0x4EBF54: mov     ecx, esp
0x4EBF56: fld     [esp+60h+var_30]
0x4EBF5A: sub     esp, 0Ch
0x4EBF5D: fstp    [esp+6Ch+var_50]; float
0x4EBF61: fld     [esp+6Ch+var_2C]
0x4EBF65: fstp    [esp+6Ch+var_54]; float
0x4EBF69: mov     [ecx], esi
0x4EBF6B: mov     [ecx+4], edi
0x4EBF6E: mov     [ecx+8], ebx
0x4EBF71: mov     ecx, esp
0x4EBF73: mov     [ecx], ebp
0x4EBF75: mov     [ecx+4], edx
0x4EBF78: mov     edx, [esp+6Ch+arg_8]
0x4EBF7C: mov     [ecx+8], edx
0x4EBF7F: mov     ecx, ds:0B36094h
0x4EBF85: push    ecx; int
0x4EBF86: push    eax; int
0x4EBF87: call    DrawGrass
0x4EBF8C: fld     [esp+74h+arg_0]
0x4EBF90: mov     eax, [esp+74h+a2]
0x4EBF94: mov     ecx, [esp+74h+a3]
0x4EBF98: mov     edx, eax
0x4EBF9A: shl     edx, 0Ch
0x4EBF9D: mov     [esp+74h+var_18], edx
0x4EBFA1: fisub   [esp+74h+var_18]
0x4EBFA5: mov     edx, ecx
0x4EBFA7: shl     edx, 0Ch
0x4EBFAA: mov     [esp+74h+var_18], edx
0x4EBFAE: add     esp, 2Ch
0x4EBFB1: add     eax, 0FFFFFFFFh
0x4EBFB4: push    ecx; a3
0x4EBFB5: mov     ecx, ds:0B333A0h; this
0x4EBFBB: fstp    [esp+4Ch+var_14]
0x4EBFBF: fld     [esp+4Ch+arg_4]
0x4EBFC3: push    eax; a2
0x4EBFC4: fisub   [esp+50h+var_18]
0x4EBFC8: mov     [esp+50h+var_20], eax
0x4EBFCC: fstp    [esp+50h+var_10]
0x4EBFD0: call    TES_GetCellFromCoords
0x4EBFD5: mov     ecx, eax; this
0x4EBFD7: test    ecx, ecx
0x4EBFD9: mov     [esp+48h+var_34], ecx
0x4EBFDD: jz      short loc_4EC05B
0x4EBFDF: fld     [esp+48h+var_14]
0x4EBFE3: fld     [esp+48h+var_30]
0x4EBFE7: fld     st
0x4EBFE9: fsubp   st(2), st
0x4EBFEB: fxch    st(1)
0x4EBFED: fcomp   qword ptr ds:0A2FC68h
0x4EBFF3: fnstsw  ax
0x4EBFF5: test    ah, 5
0x4EBFF8: jp      short loc_4EC041
0x4EBFFA: fld     [esp+48h+arg_18]
0x4EBFFE: mov     edx, [esp+48h+arg_4]
0x4EC002: sub     esp, 18h
0x4EC005: fstp    [esp+60h+var_4C]; float
0x4EC009: mov     eax, esp
0x4EC00B: sub     esp, 0Ch
0x4EC00E: fstp    [esp+6Ch+var_50]; float
0x4EC012: fld     [esp+6Ch+var_2C]
0x4EC016: fstp    [esp+6Ch+var_54]; float
0x4EC01A: mov     [eax], esi
0x4EC01C: mov     [eax+4], edi
0x4EC01F: mov     [eax+8], ebx
0x4EC022: mov     eax, esp
0x4EC024: mov     [eax], ebp
0x4EC026: mov     [eax+4], edx
0x4EC029: mov     edx, [esp+6Ch+arg_8]
0x4EC02D: mov     [eax+8], edx
0x4EC030: mov     eax, ds:0B36094h
0x4EC035: push    eax; int
0x4EC036: push    ecx; int
0x4EC037: call    DrawGrass
0x4EC03C: add     esp, 2Ch
0x4EC03F: jmp     short loc_4EC05B
0x4EC041: fstp    st
0x4EC043: call    TESObjectCELL_GetYCoordinate
0x4EC048: mov     ecx, [esp+48h+var_34]; this
0x4EC04C: push    eax
0x4EC04D: call    TESObjectCELL_GetXCoordinate
0x4EC052: push    eax
0x4EC053: call    sub_7C3AB0
0x4EC058: add     esp, 8
0x4EC05B: mov     ecx, [esp+48h+a3]
0x4EC05F: mov     eax, [esp+48h+a2]
0x4EC063: add     eax, 1
0x4EC066: push    ecx; a3
0x4EC067: mov     ecx, ds:0B333A0h; this
0x4EC06D: push    eax; a2
0x4EC06E: mov     [esp+50h+var_18], eax
0x4EC072: call    TES_GetCellFromCoords
0x4EC077: mov     ecx, eax; this
0x4EC079: test    ecx, ecx
0x4EC07B: mov     [esp+48h+var_34], ecx
0x4EC07F: jz      short loc_4EC0FD
0x4EC081: fld     [esp+48h+var_14]
0x4EC085: fld     [esp+48h+var_30]
0x4EC089: fld     st
0x4EC08B: faddp   st(2), st
0x4EC08D: fxch    st(1)
0x4EC08F: fcomp   qword ptr ds:0A37650h
0x4EC095: fnstsw  ax
0x4EC097: test    ah, 41h
0x4EC09A: jnz     short loc_4EC0E3
0x4EC09C: fld     [esp+48h+arg_18]
0x4EC0A0: mov     edx, [esp+48h+arg_4]
0x4EC0A4: sub     esp, 18h
0x4EC0A7: fstp    [esp+60h+var_4C]; float
0x4EC0AB: mov     eax, esp
0x4EC0AD: sub     esp, 0Ch
0x4EC0B0: fstp    [esp+6Ch+var_50]; float
0x4EC0B4: fld     [esp+6Ch+var_2C]
0x4EC0B8: fstp    [esp+6Ch+var_54]; float
0x4EC0BC: mov     [eax], esi
0x4EC0BE: mov     [eax+4], edi
0x4EC0C1: mov     [eax+8], ebx
0x4EC0C4: mov     eax, esp
0x4EC0C6: mov     [eax], ebp
0x4EC0C8: mov     [eax+4], edx
0x4EC0CB: mov     edx, [esp+6Ch+arg_8]
0x4EC0CF: mov     [eax+8], edx
0x4EC0D2: mov     eax, ds:0B36094h
0x4EC0D7: push    eax; int
0x4EC0D8: push    ecx; int
0x4EC0D9: call    DrawGrass
0x4EC0DE: add     esp, 2Ch
0x4EC0E1: jmp     short loc_4EC0FD
0x4EC0E3: fstp    st
0x4EC0E5: call    TESObjectCELL_GetYCoordinate
0x4EC0EA: mov     ecx, [esp+48h+var_34]; this
0x4EC0EE: push    eax
0x4EC0EF: call    TESObjectCELL_GetXCoordinate
0x4EC0F4: push    eax
0x4EC0F5: call    sub_7C3AB0
0x4EC0FA: add     esp, 8
0x4EC0FD: mov     eax, [esp+48h+a3]
0x4EC101: mov     ecx, [esp+48h+a2]
0x4EC105: add     eax, 0FFFFFFFFh
0x4EC108: push    eax; a3
0x4EC109: push    ecx; a2
0x4EC10A: mov     ecx, ds:0B333A0h; this
0x4EC110: mov     [esp+50h+var_1C], eax
0x4EC114: call    TES_GetCellFromCoords
0x4EC119: mov     ecx, eax; this
0x4EC11B: test    ecx, ecx
0x4EC11D: mov     [esp+48h+var_34], ecx
0x4EC121: jz      short loc_4EC19F
0x4EC123: fld     [esp+48h+var_10]
0x4EC127: fld     [esp+48h+var_30]
0x4EC12B: fld     st
0x4EC12D: fsubp   st(2), st
0x4EC12F: fxch    st(1)
0x4EC131: fcomp   qword ptr ds:0A2FC68h
0x4EC137: fnstsw  ax
0x4EC139: test    ah, 5
0x4EC13C: jp      short loc_4EC185
0x4EC13E: fld     [esp+48h+arg_18]
0x4EC142: mov     edx, [esp+48h+arg_4]
0x4EC146: sub     esp, 18h
0x4EC149: fstp    [esp+60h+var_4C]; float
0x4EC14D: mov     eax, esp
0x4EC14F: sub     esp, 0Ch
0x4EC152: fstp    [esp+6Ch+var_50]; float
0x4EC156: fld     [esp+6Ch+var_2C]
0x4EC15A: fstp    [esp+6Ch+var_54]; float
0x4EC15E: mov     [eax], esi
0x4EC160: mov     [eax+4], edi
0x4EC163: mov     [eax+8], ebx
0x4EC166: mov     eax, esp
0x4EC168: mov     [eax], ebp
0x4EC16A: mov     [eax+4], edx
0x4EC16D: mov     edx, [esp+6Ch+arg_8]
0x4EC171: mov     [eax+8], edx
0x4EC174: mov     eax, ds:0B36094h
0x4EC179: push    eax; int
0x4EC17A: push    ecx; int
0x4EC17B: call    DrawGrass
0x4EC180: add     esp, 2Ch
0x4EC183: jmp     short loc_4EC19F
0x4EC185: fstp    st
0x4EC187: call    TESObjectCELL_GetYCoordinate
0x4EC18C: mov     ecx, [esp+48h+var_34]; this
0x4EC190: push    eax
0x4EC191: call    TESObjectCELL_GetXCoordinate
0x4EC196: push    eax
0x4EC197: call    sub_7C3AB0
0x4EC19C: add     esp, 8
0x4EC19F: mov     eax, [esp+48h+a3]
0x4EC1A3: mov     ecx, [esp+48h+a2]
0x4EC1A7: add     eax, 1
0x4EC1AA: push    eax; a3
0x4EC1AB: push    ecx; a2
0x4EC1AC: mov     ecx, ds:0B333A0h; this
0x4EC1B2: mov     [esp+50h+a3], eax
0x4EC1B6: call    TES_GetCellFromCoords
0x4EC1BB: mov     ecx, eax; this
0x4EC1BD: test    ecx, ecx
0x4EC1BF: mov     [esp+48h+var_34], ecx
0x4EC1C3: jz      short loc_4EC241
0x4EC1C5: fld     [esp+48h+var_10]
0x4EC1C9: fld     [esp+48h+var_30]
0x4EC1CD: fld     st
0x4EC1CF: faddp   st(2), st
0x4EC1D1: fxch    st(1)
0x4EC1D3: fcomp   qword ptr ds:0A37650h
0x4EC1D9: fnstsw  ax
0x4EC1DB: test    ah, 41h
0x4EC1DE: jnz     short loc_4EC227
0x4EC1E0: fld     [esp+48h+arg_18]
0x4EC1E4: mov     edx, [esp+48h+arg_4]
0x4EC1E8: sub     esp, 18h
0x4EC1EB: fstp    [esp+60h+var_4C]; float
0x4EC1EF: mov     eax, esp
0x4EC1F1: sub     esp, 0Ch
0x4EC1F4: fstp    [esp+6Ch+var_50]; float
0x4EC1F8: fld     [esp+6Ch+var_2C]
0x4EC1FC: fstp    [esp+6Ch+var_54]; float
0x4EC200: mov     [eax], esi
0x4EC202: mov     [eax+4], edi
0x4EC205: mov     [eax+8], ebx
0x4EC208: mov     eax, esp
0x4EC20A: mov     [eax], ebp
0x4EC20C: mov     [eax+4], edx
0x4EC20F: mov     edx, [esp+6Ch+arg_8]
0x4EC213: mov     [eax+8], edx
0x4EC216: mov     eax, ds:0B36094h
0x4EC21B: push    eax; int
0x4EC21C: push    ecx; int
0x4EC21D: call    DrawGrass
0x4EC222: add     esp, 2Ch
0x4EC225: jmp     short loc_4EC241
0x4EC227: fstp    st
0x4EC229: call    TESObjectCELL_GetYCoordinate
0x4EC22E: mov     ecx, [esp+48h+var_34]; this
0x4EC232: push    eax
0x4EC233: call    TESObjectCELL_GetXCoordinate
0x4EC238: push    eax
0x4EC239: call    sub_7C3AB0
0x4EC23E: add     esp, 8
0x4EC241: mov     ecx, [esp+48h+var_1C]
0x4EC245: mov     edx, [esp+48h+var_20]
0x4EC249: push    ecx; a3
0x4EC24A: mov     ecx, ds:0B333A0h; this
0x4EC250: push    edx; a2
0x4EC251: call    TES_GetCellFromCoords
0x4EC256: mov     ecx, eax; this
0x4EC258: test    ecx, ecx
0x4EC25A: mov     [esp+48h+var_34], ecx
0x4EC25E: jz      loc_4EC2F1
0x4EC264: fld     [esp+48h+var_14]
0x4EC268: fld     [esp+48h+var_30]
0x4EC26C: fld     st
0x4EC26E: fsubp   st(2), st
0x4EC270: fldz
0x4EC272: fcom    st(2)
0x4EC274: fnstsw  ax
0x4EC276: fstp    st(2)
0x4EC278: test    ah, 41h
0x4EC27B: jnz     short loc_4EC2D5
0x4EC27D: fld     [esp+48h+var_10]
0x4EC281: fsub    st, st(1)
0x4EC283: fcomp   st(2)
0x4EC285: fnstsw  ax
0x4EC287: fstp    st(1)
0x4EC289: test    ah, 5
0x4EC28C: jp      short loc_4EC2D7
0x4EC28E: fld     [esp+48h+arg_18]
0x4EC292: mov     edx, [esp+48h+arg_4]
0x4EC296: sub     esp, 18h
0x4EC299: fstp    [esp+60h+var_4C]; float
0x4EC29D: mov     eax, esp
0x4EC29F: sub     esp, 0Ch
0x4EC2A2: fstp    [esp+6Ch+var_50]; float
0x4EC2A6: fld     [esp+6Ch+var_2C]
0x4EC2AA: fstp    [esp+6Ch+var_54]; float
0x4EC2AE: mov     [eax], esi
0x4EC2B0: mov     [eax+4], edi
0x4EC2B3: mov     [eax+8], ebx
0x4EC2B6: mov     eax, esp
0x4EC2B8: mov     [eax], ebp
0x4EC2BA: mov     [eax+4], edx
0x4EC2BD: mov     edx, [esp+6Ch+arg_8]
0x4EC2C1: mov     [eax+8], edx
0x4EC2C4: mov     eax, ds:0B36094h
0x4EC2C9: push    eax; int
0x4EC2CA: push    ecx; int
0x4EC2CB: call    DrawGrass
0x4EC2D0: add     esp, 2Ch
0x4EC2D3: jmp     short loc_4EC2F1
0x4EC2D5: fstp    st
0x4EC2D7: fstp    st
0x4EC2D9: call    TESObjectCELL_GetYCoordinate
0x4EC2DE: mov     ecx, [esp+48h+var_34]; this
0x4EC2E2: push    eax
0x4EC2E3: call    TESObjectCELL_GetXCoordinate
0x4EC2E8: push    eax
0x4EC2E9: call    sub_7C3AB0
0x4EC2EE: add     esp, 8
0x4EC2F1: mov     ecx, [esp+48h+a3]
0x4EC2F5: mov     edx, [esp+48h+var_20]
0x4EC2F9: push    ecx; a3
0x4EC2FA: mov     ecx, ds:0B333A0h; this
0x4EC300: push    edx; a2
0x4EC301: call    TES_GetCellFromCoords
0x4EC306: mov     ecx, eax; this
0x4EC308: test    ecx, ecx
0x4EC30A: mov     [esp+48h+var_34], ecx
0x4EC30E: jz      loc_4EC3A3
0x4EC314: fld     [esp+48h+var_14]
0x4EC318: fld     [esp+48h+var_30]
0x4EC31C: fld     st
0x4EC31E: fsubp   st(2), st
0x4EC320: fxch    st(1)
0x4EC322: fcomp   qword ptr ds:0A2FC68h
0x4EC328: fnstsw  ax
0x4EC32A: test    ah, 5
0x4EC32D: jp      short loc_4EC389
0x4EC32F: fld     [esp+48h+var_10]
0x4EC333: fadd    st, st(1)
0x4EC335: fcomp   qword ptr ds:0A37650h
0x4EC33B: fnstsw  ax
0x4EC33D: test    ah, 41h
0x4EC340: jnz     short loc_4EC389
0x4EC342: fld     [esp+48h+arg_18]
0x4EC346: mov     edx, [esp+48h+arg_4]
0x4EC34A: sub     esp, 18h
0x4EC34D: fstp    [esp+60h+var_4C]; float
0x4EC351: mov     eax, esp
0x4EC353: sub     esp, 0Ch
0x4EC356: fstp    [esp+6Ch+var_50]; float
0x4EC35A: fld     [esp+6Ch+var_2C]
0x4EC35E: fstp    [esp+6Ch+var_54]; float
0x4EC362: mov     [eax], esi
0x4EC364: mov     [eax+4], edi
0x4EC367: mov     [eax+8], ebx
0x4EC36A: mov     eax, esp
0x4EC36C: mov     [eax], ebp
0x4EC36E: mov     [eax+4], edx
0x4EC371: mov     edx, [esp+6Ch+arg_8]
0x4EC375: mov     [eax+8], edx
0x4EC378: mov     eax, ds:0B36094h
0x4EC37D: push    eax; int
0x4EC37E: push    ecx; int
0x4EC37F: call    DrawGrass
0x4EC384: add     esp, 2Ch
0x4EC387: jmp     short loc_4EC3A3
0x4EC389: fstp    st
0x4EC38B: call    TESObjectCELL_GetYCoordinate
0x4EC390: mov     ecx, [esp+48h+var_34]; this
0x4EC394: push    eax
0x4EC395: call    TESObjectCELL_GetXCoordinate
0x4EC39A: push    eax
0x4EC39B: call    sub_7C3AB0
0x4EC3A0: add     esp, 8
0x4EC3A3: mov     ecx, [esp+48h+var_1C]
0x4EC3A7: mov     edx, [esp+48h+var_18]
0x4EC3AB: push    ecx; a3
0x4EC3AC: mov     ecx, ds:0B333A0h; this
0x4EC3B2: push    edx; a2
0x4EC3B3: call    TES_GetCellFromCoords
0x4EC3B8: mov     ecx, eax; this
0x4EC3BA: test    ecx, ecx
0x4EC3BC: mov     [esp+48h+var_34], ecx
0x4EC3C0: jz      loc_4EC455
0x4EC3C6: fld     [esp+48h+var_14]
0x4EC3CA: fld     [esp+48h+var_30]
0x4EC3CE: fld     st
0x4EC3D0: faddp   st(2), st
0x4EC3D2: fxch    st(1)
0x4EC3D4: fcomp   qword ptr ds:0A37650h
0x4EC3DA: fnstsw  ax
0x4EC3DC: test    ah, 41h
0x4EC3DF: jnz     short loc_4EC43B
0x4EC3E1: fld     [esp+48h+var_10]
0x4EC3E5: fsub    st, st(1)
0x4EC3E7: fcomp   qword ptr ds:0A2FC68h
0x4EC3ED: fnstsw  ax
0x4EC3EF: test    ah, 5
0x4EC3F2: jp      short loc_4EC43B
0x4EC3F4: fld     [esp+48h+arg_18]
0x4EC3F8: mov     edx, [esp+48h+arg_4]
0x4EC3FC: sub     esp, 18h
0x4EC3FF: fstp    [esp+60h+var_4C]; float
0x4EC403: mov     eax, esp
0x4EC405: sub     esp, 0Ch
0x4EC408: fstp    [esp+6Ch+var_50]; float
0x4EC40C: fld     [esp+6Ch+var_2C]
0x4EC410: fstp    [esp+6Ch+var_54]; float
0x4EC414: mov     [eax], esi
0x4EC416: mov     [eax+4], edi
0x4EC419: mov     [eax+8], ebx
0x4EC41C: mov     eax, esp
0x4EC41E: mov     [eax], ebp
0x4EC420: mov     [eax+4], edx
0x4EC423: mov     edx, [esp+6Ch+arg_8]
0x4EC427: mov     [eax+8], edx
0x4EC42A: mov     eax, ds:0B36094h
0x4EC42F: push    eax; int
0x4EC430: push    ecx; int
0x4EC431: call    DrawGrass
0x4EC436: add     esp, 2Ch
0x4EC439: jmp     short loc_4EC455
0x4EC43B: fstp    st
0x4EC43D: call    TESObjectCELL_GetYCoordinate
0x4EC442: mov     ecx, [esp+48h+var_34]; this
0x4EC446: push    eax
0x4EC447: call    TESObjectCELL_GetXCoordinate
0x4EC44C: push    eax
0x4EC44D: call    sub_7C3AB0
0x4EC452: add     esp, 8
0x4EC455: mov     ecx, [esp+48h+a3]
0x4EC459: mov     edx, [esp+48h+var_18]
0x4EC45D: push    ecx; a3
0x4EC45E: mov     ecx, ds:0B333A0h; this
0x4EC464: push    edx; a2
0x4EC465: call    TES_GetCellFromCoords
0x4EC46A: mov     ecx, eax; this
0x4EC46C: test    ecx, ecx
0x4EC46E: mov     [esp+48h+var_34], ecx
0x4EC472: jz      loc_4EC509
0x4EC478: fld     [esp+48h+var_14]
0x4EC47C: fld     [esp+48h+var_30]
0x4EC480: fld     st
0x4EC482: faddp   st(2), st
0x4EC484: fld     qword ptr ds:0A37650h
0x4EC48A: fcom    st(2)
0x4EC48C: fnstsw  ax
0x4EC48E: fstp    st(2)
0x4EC490: test    ah, 5
0x4EC493: jp      short loc_4EC4ED
0x4EC495: fld     [esp+48h+var_10]
0x4EC499: fadd    st, st(1)
0x4EC49B: fcomp   st(2)
0x4EC49D: fnstsw  ax
0x4EC49F: fstp    st(1)
0x4EC4A1: test    ah, 41h
0x4EC4A4: jnz     short loc_4EC4EF
0x4EC4A6: fld     [esp+48h+arg_18]
0x4EC4AA: mov     edx, [esp+48h+arg_4]
0x4EC4AE: sub     esp, 18h
0x4EC4B1: fstp    [esp+60h+var_4C]; float
0x4EC4B5: mov     eax, esp
0x4EC4B7: sub     esp, 0Ch
0x4EC4BA: fstp    [esp+6Ch+var_50]; float
0x4EC4BE: fld     [esp+6Ch+var_2C]
0x4EC4C2: fstp    [esp+6Ch+var_54]; float
0x4EC4C6: mov     [eax], esi
0x4EC4C8: mov     [eax+4], edi
0x4EC4CB: mov     [eax+8], ebx
0x4EC4CE: mov     eax, esp
0x4EC4D0: mov     [eax], ebp
0x4EC4D2: mov     [eax+4], edx
0x4EC4D5: mov     edx, [esp+6Ch+arg_8]
0x4EC4D9: mov     [eax+8], edx
0x4EC4DC: mov     eax, ds:0B36094h
0x4EC4E1: push    eax; int
0x4EC4E2: push    ecx; int
0x4EC4E3: call    DrawGrass
0x4EC4E8: add     esp, 2Ch
0x4EC4EB: jmp     short loc_4EC509
0x4EC4ED: fstp    st
0x4EC4EF: fstp    st
0x4EC4F1: call    TESObjectCELL_GetYCoordinate
0x4EC4F6: mov     ecx, [esp+48h+var_34]; this
0x4EC4FA: push    eax
0x4EC4FB: call    TESObjectCELL_GetXCoordinate
0x4EC500: push    eax
0x4EC501: call    sub_7C3AB0
0x4EC506: add     esp, 8
0x4EC509: cmp     byte ptr ds:0B09B08h, 0
0x4EC510: jz      short loc_4EC54E
0x4EC512: xor     bl, bl
0x4EC514: cmp     ds:0B43384h, bl
0x4EC51A: jz      short loc_4EC528
0x4EC51C: mov     ecx, offset stru_B43400; lpCriticalSection
0x4EC521: call    sub_43F2E0
0x4EC526: mov     bl, 1
0x4EC528: push    0
0x4EC52A: call    GetShadowSceneNode
0x4EC52F: mov     ecx, ds:0B36094h
0x4EC535: push    0
0x4EC537: push    ecx
0x4EC538: call    sub_7C7050
0x4EC53D: add     esp, 0Ch
0x4EC540: test    bl, bl
0x4EC542: jz      short loc_4EC54E
0x4EC544: mov     ecx, offset stru_B43400; lpCriticalSection
0x4EC549: call    sub_43F300
0x4EC54E: mov     ecx, ds:0B36094h; this
0x4EC554: test    ecx, ecx
0x4EC556: jz      short loc_4EC570
0x4EC558: fldz
0x4EC55A: push    0; a3
0x4EC55C: push    ecx
0x4EC55D: fstp    [esp+50h+var_50]; a2
0x4EC560: call    NiAVObject_UpdateNiAVObject
0x4EC565: mov     ecx, ds:0B36094h; this
0x4EC56B: call    NiAVObject_InitializePropertyState
0x4EC570: mov     ecx, dword ptr [esp+48h+var_C]
0x4EC574: mov     large fs:0, ecx
0x4EC57B: pop     ecx
0x4EC57C: pop     edi
0x4EC57D: pop     esi
0x4EC57E: pop     ebp
0x4EC57F: pop     ebx
0x4EC580: add     esp, 34h
0x4EC583: retn
