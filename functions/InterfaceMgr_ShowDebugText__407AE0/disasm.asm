0x407AE0: push    ebp
0x407AE1: mov     ebp, esp
0x407AE3: and     esp, 0FFFFFFC0h
0x407AE6: push    0FFFFFFFFh
0x407AE8: push    offset InterfaceMgr_ShowDebugText_SEH
0x407AED: mov     eax, large fs:0
0x407AF3: push    eax
0x407AF4: sub     esp, 528h
0x407AFA: mov     eax, ___security_cookie
0x407AFF: xor     eax, esp
0x407B01: mov     [esp+534h+var_44], eax
0x407B08: push    ebx
0x407B09: push    esi
0x407B0A: push    edi
0x407B0B: mov     eax, ___security_cookie
0x407B10: xor     eax, esp
0x407B12: push    eax; Format
0x407B13: lea     eax, [esp+544h+var_C]
0x407B1A: mov     large fs:0, eax
0x407B20: cmp     byte_B3BD9A, 0
0x407B27: mov     edi, ecx
0x407B29: jnz     loc_40C0CA
0x407B2F: mov     esi, 1
0x407B34: push    esi
0x407B35: call    GetGlobalScriptStateObj??
0x407B3A: add     esp, 4
0x407B3D: cmp     byte ptr [eax+31h], 0
0x407B41: jg      short loc_407B55
0x407B43: cmp     srcObj, 0
0x407B4A: jz      short loc_407B55
0x407B4C: mov     IsConsoleOpen, 0
0x407B53: jmp     short loc_407BB1
0x407B55: call    sub_579440
0x407B5A: test    eax, eax
0x407B5C: jz      short loc_407B74
0x407B5E: cmp     eax, TESDataHandler_g_PlayerRef
0x407B64: mov     srcObj, eax
0x407B69: setz    cl
0x407B6C: mov     byte_B33414, cl
0x407B72: jmp     short loc_407BAA
0x407B74: cmp     IsConsoleOpen, 0
0x407B7B: mov     ecx, TESDataHandler_g_PlayerRef
0x407B81: jnz     short loc_407BA4
0x407B83: mov     eax, srcObj
0x407B88: test    eax, eax
0x407B8A: jz      short loc_407BA4
0x407B8C: cmp     eax, ecx
0x407B8E: jnz     short loc_407B99
0x407B90: cmp     byte_B33414, 0
0x407B97: jz      short loc_407BA4
0x407B99: push    eax
0x407B9A: call    sub_57C980
0x407B9F: add     esp, 4
0x407BA2: jmp     short loc_407BAA
0x407BA4: mov     srcObj, ecx
0x407BAA: mov     IsConsoleOpen, 1
0x407BB1: call    GetInterfaceSingleton0x50
0x407BB6: test    al, al
0x407BB8: jz      loc_40C0CA
0x407BBE: mov     ecx, [edi+20h]; this
0x407BC1: push    esi; a3
0x407BC2: push    46h ; 'F'; a2
0x407BC4: call    InputGlobals__QueryKeyboardState
0x407BC9: test    eax, eax
0x407BCB: jz      short loc_407C0A
0x407BCD: push    esi
0x407BCE: call    sub_571F90
0x407BD3: add     esp, 4
0x407BD6: mov     ecx, eax
0x407BD8: call    sub_571820
0x407BDD: mov     ecx, [edi+20h]; this
0x407BE0: push    0; a3
0x407BE2: push    2Ah ; '*'; a2
0x407BE4: call    InputGlobals__QueryKeyboardState
0x407BE9: test    eax, eax
0x407BEB: jnz     short loc_407C04
0x407BED: mov     ecx, [edi+20h]; this
0x407BF0: push    eax; a3
0x407BF1: push    36h ; '6'; a2
0x407BF3: call    InputGlobals__QueryKeyboardState
0x407BF8: test    eax, eax
0x407BFA: jnz     short loc_407C04
0x407BFC: add     iDebugText, esi
0x407C02: jmp     short loc_407C0A
0x407C04: sub     iDebugText, esi
0x407C0A: mov     eax, iDebugText
0x407C0F: test    eax, eax
0x407C11: jge     short loc_407C1F
0x407C13: mov     iDebugText, 20h ; ' '
0x407C1D: jmp     short loc_407C2E
0x407C1F: cmp     eax, 21h ; '!'
0x407C22: jl      short loc_407C2E
0x407C24: mov     iDebugText, 0
0x407C2E: mov     edx, srcObj
0x407C34: push    0; int
0x407C36: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x407C3B: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x407C40: push    0; int
0x407C42: push    edx; void *
0x407C43: call    OblivionDynamicCast
0x407C48: mov     esi, dword_B12DB4
0x407C4E: add     esp, 14h
0x407C51: mov     [esp+544h+var_504], eax
0x407C55: add     esi, 0FFFFFFFFh
0x407C58: call    FontManager_GetSingleton
0x407C5D: mov     eax, [eax+esi*4]
0x407C60: mov     eax, [eax+38h]
0x407C63: test    eax, eax
0x407C65: jz      short loc_407C6B
0x407C67: fld     dword ptr [eax]
0x407C69: jmp     short loc_407C6D
0x407C6B: fldz
0x407C6D: fstp    [esp+544h+var_500]
0x407C71: fld     [esp+544h+var_500]
0x407C75: fadd    ds:dbl_A30E48
0x407C7B: call    Double_To_SInt32
0x407C80: mov     edx, dword_B33EA4
0x407C86: mov     ebx, eax
0x407C88: mov     eax, iDebugTextTopBottomOffset
0x407C8D: add     eax, ebx
0x407C8F: cmp     dword_B33410, edx
0x407C95: mov     [esp+544h+var_50C], eax
0x407C99: mov     [esp+544h+var_510], eax
0x407C9D: mov     eax, Seed
0x407CA2: jz      short loc_407CAE
0x407CA4: mov     ecx, eax
0x407CA6: mov     dword_B33410, edx
0x407CAC: jmp     short loc_407CB4
0x407CAE: mov     ecx, dword_B3340C
0x407CB4: mov     edx, eax
0x407CB6: sub     edx, ecx
0x407CB8: test    edx, edx
0x407CBA: mov     [esp+544h+var_4E8.m_data], edx
0x407CBE: fild    [esp+544h+var_4E8.m_data]
0x407CC2: jge     short loc_407CCA
0x407CC4: fadd    ds:flt_A2FC78
0x407CCA: fmul    ds:dbl_A30E40
0x407CD0: add     word_B33408, 1
0x407CD8: mov     dword_B3340C, eax
0x407CDD: fstp    [esp+544h+var_508]
0x407CE1: fld     flt_B33404
0x407CE7: fadd    [esp+544h+var_508]
0x407CEB: fstp    flt_B33404
0x407CF1: fld1
0x407CF3: fcomp   flt_B33404
0x407CF9: fnstsw  ax
0x407CFB: test    ah, 41h
0x407CFE: jp      short loc_407D69
0x407D00: mov     eax, iDebugText
0x407D05: cmp     eax, 18h
0x407D08: jz      short loc_407D0F
0x407D0A: cmp     eax, 19h
0x407D0D: jnz     short loc_407D30
0x407D0F: push    1
0x407D11: call    GetGlobalScriptStateObj??
0x407D16: add     esp, 4
0x407D19: cmp     byte ptr [eax+31h], 0
0x407D1D: jg      short loc_407D30
0x407D1F: push    1
0x407D21: call    sub_571F90
0x407D26: add     esp, 4
0x407D29: mov     ecx, eax
0x407D2B: call    sub_571820
0x407D30: fld     flt_B33404
0x407D36: mov     si, word_B33408
0x407D3D: push    ecx
0x407D3E: fst     qword ptr [esp+548h+var_4E8.m_data]
0x407D42: fstp    [esp+548h+var_548]; float
0x407D45: mov     word_B33400, si
0x407D4C: call    FloatFloor
0x407D51: fsubr   qword ptr [esp+548h+var_4E8.m_data]
0x407D55: add     esp, 4
0x407D58: mov     word_B33408, 0
0x407D61: fstp    flt_B33404
0x407D67: jmp     short loc_407D70
0x407D69: mov     si, word_B33400
0x407D70: mov     eax, fromiUpdateType
0x407D75: cmp     eax, 0Ah
0x407D78: jz      short loc_407D8E
0x407D7A: push    eax
0x407D7B: movsx   eax, si
0x407D7E: push    eax
0x407D7F: push    offset aFpsDTypeD; "FPS %d (Type %d)"
0x407D84: lea     ecx, [esp+550h+Dest]
0x407D8B: push    ecx
0x407D8C: jmp     short loc_407DAF
0x407D8E: fld     flt_B2E2EC
0x407D94: fld1
0x407D96: fdivrp  st(1), st
0x407D98: call    Double_To_SInt32
0x407D9D: push    eax
0x407D9E: movsx   edx, si
0x407DA1: push    edx
0x407DA2: push    offset aFpsDD; "FPS %d (%d)"
0x407DA7: lea     eax, [esp+550h+Dest]
0x407DAE: push    eax
0x407DAF: call    __sprintf
0x407DB4: fild    [esp+554h+var_50C]
0x407DB8: add     esp, 10h
0x407DBB: push    0FFFFFFFFh; int
0x407DBD: push    3; int
0x407DBF: mov     ecx, 500h
0x407DC4: sub     ecx, iDebugTextLeftRightOffset
0x407DCA: sub     esp, 8
0x407DCD: fstp    [esp+554h+Format+4]; float
0x407DD1: mov     [esp+554h+var_508], ecx
0x407DD5: fild    [esp+554h+var_508]
0x407DD9: lea     edx, [esp+554h+Dest]
0x407DE0: fstp    [esp+554h+Format]; float
0x407DE3: push    edx; int
0x407DE4: call    InterfaceMgr_DebugTextLine
0x407DE9: mov     eax, iDebugText
0x407DEE: add     [esp+558h+var_50C], ebx
0x407DF2: add     esp, 14h
0x407DF5: cmp     eax, 20h; switch 33 cases
0x407DF8: ja      InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x407DFE: jmp     ds:jpt_407DFE[eax*4]; switch jump
0x407E05: mov     ecx, srcObj; jumptable 00407DFE case 31
0x407E0B: test    ecx, ecx
0x407E0D: jz      loc_408B84
0x407E13: mov     eax, [ecx]
0x407E15: mov     edx, [eax+190h]
0x407E1B: call    edx
0x407E1D: test    al, al
0x407E1F: jz      loc_408B84
0x407E25: mov     eax, srcObj
0x407E2A: push    0; int
0x407E2C: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x407E31: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x407E36: push    0; int
0x407E38: push    eax; void *
0x407E39: call    OblivionDynamicCast
0x407E3E: mov     esi, eax
0x407E40: mov     edx, [esi]
0x407E42: mov     eax, [edx+174h]
0x407E48: add     esp, 14h
0x407E4B: mov     ecx, esi
0x407E4D: call    eax
0x407E4F: fild    [esp+544h+var_50C]
0x407E53: mov     ecx, [eax]
0x407E55: mov     edx, [eax+4]
0x407E58: mov     eax, [eax+8]
0x407E5B: mov     [esp+544h+var_4E8.m_data], ecx
0x407E5F: push    0FFFFFFFFh; int
0x407E61: push    3; int
0x407E63: mov     ecx, 500h
0x407E68: sub     ecx, iDebugTextLeftRightOffset
0x407E6E: sub     esp, 8
0x407E71: fstp    [esp+554h+Format+4]; float
0x407E75: mov     [esp+554h+var_508], ecx
0x407E79: fild    [esp+554h+var_508]
0x407E7D: mov     ecx, esi; this
0x407E7F: mov     dword ptr [esp+554h+var_4E8.m_dataLen], edx
0x407E83: mov     [esp+554h+var_4E0], eax
0x407E87: fstp    [esp+554h+Format]; float
0x407E8A: call    TESObjectREFR_GetName
0x407E8F: push    eax; int
0x407E90: call    InterfaceMgr_DebugTextLine
0x407E95: add     [esp+558h+var_50C], ebx
0x407E99: add     esp, 14h
0x407E9C: mov     ecx, esi; this
0x407E9E: call    TESObjectREFR_GetParentCell
0x407EA3: mov     ecx, esi; this
0x407EA5: mov     edi, eax
0x407EA7: call    TESObjectREFR_GetWorldSpace
0x407EAC: test    edi, edi
0x407EAE: mov     [esp+544h+var_508], eax
0x407EB2: jz      short loc_407F18
0x407EB4: mov     ecx, edi; this
0x407EB6: call    TESObjectCELL_IsInterior
0x407EBB: test    al, al
0x407EBD: jz      short loc_407F18
0x407EBF: mov     edx, [edi]
0x407EC1: mov     eax, [edx+0D4h]
0x407EC7: mov     ecx, edi
0x407EC9: call    eax
0x407ECB: push    eax; Format
0x407ECC: push    offset Format; "Actor Loc: Interior '%s'"
0x407ED1: lea     ecx, [esp+54Ch+Dest]
0x407ED8: push    0C8h ; 'È'; Count
0x407EDD: push    ecx; Dest
0x407EDE: call    __snprintf
0x407EE3: fild    [esp+554h+var_50C]
0x407EE7: add     esp, 10h
0x407EEA: push    0FFFFFFFFh
0x407EEC: push    3
0x407EEE: sub     esp, 8
0x407EF1: mov     edx, 500h
0x407EF6: fstp    [esp+554h+Format+4]
0x407EFA: sub     edx, iDebugTextLeftRightOffset
0x407F00: lea     eax, [esp+554h+Dest]
0x407F07: mov     [esp+554h+var_508], edx
0x407F0B: fild    [esp+554h+var_508]
0x407F0F: fstp    [esp+554h+Format]
0x407F12: push    eax
0x407F13: jmp     loc_407FD8
0x407F18: mov     ecx, [esp+544h+var_508]
0x407F1C: test    ecx, ecx
0x407F1E: jz      short loc_407F91
0x407F20: fld     dword ptr [esp+544h+var_4E8.m_dataLen]
0x407F24: fistp   [esp+544h+var_504]
0x407F28: mov     edi, [esp+544h+var_504]
0x407F2C: fld     [esp+544h+var_4E8.m_data]
0x407F30: fistp   [esp+544h+var_500]
0x407F34: mov     edx, [esp+544h+var_500]
0x407F38: mov     eax, [ecx]
0x407F3A: mov     [esp+544h+var_508], edx
0x407F3E: mov     edx, [eax+0D4h]
0x407F44: call    edx
0x407F46: mov     ecx, [esp+544h+var_508]
0x407F4A: sar     edi, 0Ch
0x407F4D: push    edi
0x407F4E: sar     ecx, 0Ch
0x407F51: push    ecx
0x407F52: push    eax; Format
0x407F53: push    offset aActorLocWorldS; "Actor Loc: World '%s' (%i, %i)"
0x407F58: lea     eax, [esp+554h+Dest]
0x407F5F: push    0C8h ; 'È'; Count
0x407F64: push    eax; Dest
0x407F65: call    __snprintf
0x407F6A: fild    [esp+55Ch+var_50C]
0x407F6E: add     esp, 18h
0x407F71: push    0FFFFFFFFh
0x407F73: push    3
0x407F75: sub     esp, 8
0x407F78: mov     ecx, 500h
0x407F7D: fstp    [esp+554h+Format+4]
0x407F81: sub     ecx, iDebugTextLeftRightOffset
0x407F87: mov     [esp+554h+var_508], ecx
0x407F8B: fild    [esp+554h+var_508]
0x407F8F: jmp     short loc_407FCD
0x407F91: push    offset aActorLocUnknow; "Actor Loc: UNKNOWN"
0x407F96: lea     eax, [esp+548h+Dest]
0x407F9D: push    0C8h ; 'È'; Count
0x407FA2: push    eax; Dest
0x407FA3: call    __snprintf
0x407FA8: fild    [esp+550h+var_50C]
0x407FAC: add     esp, 0Ch
0x407FAF: push    0FFFFFFFFh; int
0x407FB1: push    3; int
0x407FB3: sub     esp, 8
0x407FB6: mov     ecx, 500h
0x407FBB: fstp    [esp+554h+Format+4]; float
0x407FBF: sub     ecx, iDebugTextLeftRightOffset
0x407FC5: mov     [esp+554h+var_508], ecx
0x407FC9: fild    [esp+554h+var_508]
0x407FCD: lea     edx, [esp+554h+Dest]
0x407FD4: fstp    [esp+554h+Format]; float
0x407FD7: push    edx; int
0x407FD8: call    InterfaceMgr_DebugTextLine
0x407FDD: add     [esp+558h+var_50C], ebx
0x407FE1: mov     eax, [esi]
0x407FE3: mov     edx, [eax+1E0h]
0x407FE9: add     esp, 14h
0x407FEC: mov     ecx, esi
0x407FEE: call    edx
0x407FF0: fmul    ds:dbl_A30DC8
0x407FF6: sub     esp, 8
0x407FF9: lea     eax, [esp+54Ch+Dest]
0x408000: fstp    qword ptr [esp+54Ch+Format+8]; Format
0x408003: push    offset aActorHeading0_; "Actor Heading: %0.2f"
0x408008: push    0C8h ; 'È'; Count
0x40800D: push    eax; Dest
0x40800E: call    __snprintf
0x408013: fild    [esp+558h+var_50C]
0x408017: add     esp, 14h
0x40801A: push    0FFFFFFFFh; int
0x40801C: push    3; int
0x40801E: mov     ecx, 500h
0x408023: sub     ecx, iDebugTextLeftRightOffset
0x408029: sub     esp, 8
0x40802C: fstp    [esp+554h+Format+4]; float
0x408030: mov     [esp+554h+var_508], ecx
0x408034: fild    [esp+554h+var_508]
0x408038: lea     edx, [esp+554h+Dest]
0x40803F: fstp    [esp+554h+Format]; float
0x408042: push    edx; int
0x408043: call    InterfaceMgr_DebugTextLine
0x408048: fld     [esp+558h+var_4E0]
0x40804C: add     [esp+558h+var_50C], ebx
0x408050: push    ecx
0x408051: fstp    qword ptr [esp+55Ch+Format+8]
0x408055: lea     eax, [esp+55Ch+Dest]
0x40805C: fld     dword ptr [esp+55Ch+var_4E8.m_dataLen]
0x408060: fstp    qword ptr [esp+55Ch+Format]
0x408064: fld     [esp+55Ch+var_4E8.m_data]
0x408068: fstp    qword ptr [esp+55Ch+var_55C]; Format
0x40806B: push    offset aActorPos_0f_0f; "Actor Pos: ( %.0f, %.0f, %.0f )"
0x408070: push    0C8h ; 'È'; Count
0x408075: push    eax; Dest
0x408076: call    __snprintf
0x40807B: fild    [esp+568h+var_50C]
0x40807F: add     esp, 24h
0x408082: push    0FFFFFFFFh; int
0x408084: push    3; int
0x408086: mov     ecx, 500h
0x40808B: sub     ecx, iDebugTextLeftRightOffset
0x408091: sub     esp, 8
0x408094: fstp    [esp+554h+Format+4]; float
0x408098: mov     [esp+554h+var_508], ecx
0x40809C: fild    [esp+554h+var_508]
0x4080A0: lea     edx, [esp+554h+Dest]
0x4080A7: fstp    [esp+554h+Format]; float
0x4080AA: push    edx; int
0x4080AB: call    InterfaceMgr_DebugTextLine
0x4080B0: mov     eax, [esp+558h+var_50C]
0x4080B4: lea     ecx, [eax+ebx*2]
0x4080B7: mov     [esp+558h+var_50C], ecx
0x4080BB: mov     ecx, [esi+58h]
0x4080BE: add     esp, 14h
0x4080C1: test    ecx, ecx
0x4080C3: jz      loc_408B46
0x4080C9: mov     edx, [ecx]
0x4080CB: mov     eax, [edx+40Ch]
0x4080D1: call    eax
0x4080D3: mov     edi, eax
0x4080D5: test    edi, edi
0x4080D7: lea     ecx, [esp+544h+Dest]
0x4080DE: jz      loc_408B0F
0x4080E4: push    offset asc_A30D74; "------------------------"
0x4080E9: push    0C8h ; 'È'; Count
0x4080EE: push    ecx; Dest
0x4080EF: call    __snprintf
0x4080F4: fild    [esp+550h+var_50C]
0x4080F8: add     esp, 0Ch
0x4080FB: push    0FFFFFFFFh; int
0x4080FD: push    3; int
0x4080FF: mov     edx, 500h
0x408104: sub     edx, iDebugTextLeftRightOffset
0x40810A: sub     esp, 8
0x40810D: fstp    [esp+554h+Format+4]; float
0x408111: mov     [esp+554h+var_508], edx
0x408115: fild    [esp+554h+var_508]
0x408119: lea     eax, [esp+554h+Dest]
0x408120: fstp    [esp+554h+Format]; float
0x408123: push    eax; int
0x408124: call    InterfaceMgr_DebugTextLine
0x408129: add     [esp+558h+var_50C], ebx
0x40812D: mov     edx, [edi]
0x40812F: mov     eax, [edx+2Ch]
0x408132: add     esp, 14h
0x408135: mov     ecx, edi
0x408137: call    eax
0x408139: test    al, al
0x40813B: lea     ecx, [esp+544h+Dest]
0x408142: jz      short loc_40817B
0x408144: push    offset aOverallPathing; "Overall Pathing Status: FAILED"
0x408149: push    0C8h ; 'È'; Count
0x40814E: push    ecx; Dest
0x40814F: call    __snprintf
0x408154: fild    [esp+550h+var_50C]
0x408158: add     esp, 0Ch
0x40815B: push    0FFFFFFFFh
0x40815D: push    3
0x40815F: sub     esp, 8
0x408162: mov     edx, 500h
0x408167: fstp    [esp+554h+Format+4]
0x40816B: sub     edx, iDebugTextLeftRightOffset
0x408171: mov     [esp+554h+var_508], edx
0x408175: fild    [esp+554h+var_508]
0x408179: jmp     short loc_4081B0
0x40817B: push    offset aOverallPathi_0; "Overall Pathing Status: Active"
0x408180: push    0C8h ; 'È'; Count
0x408185: push    ecx; Dest
0x408186: call    __snprintf
0x40818B: fild    [esp+550h+var_50C]
0x40818F: add     esp, 0Ch
0x408192: push    0FFFFFFFFh; int
0x408194: push    3; int
0x408196: sub     esp, 8
0x408199: mov     edx, 500h
0x40819E: fstp    [esp+554h+Format+4]; float
0x4081A2: sub     edx, iDebugTextLeftRightOffset
0x4081A8: mov     [esp+554h+var_508], edx
0x4081AC: fild    [esp+554h+var_508]
0x4081B0: lea     eax, [esp+554h+Dest]
0x4081B7: fstp    [esp+554h+Format]; float
0x4081BA: push    eax; int
0x4081BB: call    InterfaceMgr_DebugTextLine
0x4081C0: add     [esp+558h+var_50C], ebx
0x4081C4: add     esp, 14h
0x4081C7: mov     ecx, edi
0x4081C9: call    sub_6899E0
0x4081CE: test    al, al
0x4081D0: lea     ecx, [esp+544h+Dest]
0x4081D7: jnz     loc_408AD5
0x4081DD: push    offset asc_A30D74; "------------------------"
0x4081E2: push    0C8h ; 'È'; Count
0x4081E7: push    ecx; Dest
0x4081E8: call    __snprintf
0x4081ED: fild    [esp+550h+var_50C]
0x4081F1: add     esp, 0Ch
0x4081F4: push    0FFFFFFFFh; int
0x4081F6: push    3; int
0x4081F8: mov     edx, 500h
0x4081FD: sub     edx, iDebugTextLeftRightOffset
0x408203: sub     esp, 8
0x408206: fstp    [esp+554h+Format+4]; float
0x40820A: mov     [esp+554h+var_508], edx
0x40820E: fild    [esp+554h+var_508]
0x408212: lea     eax, [esp+554h+Dest]
0x408219: fstp    [esp+554h+Format]; float
0x40821C: push    eax; int
0x40821D: call    InterfaceMgr_DebugTextLine
0x408222: add     [esp+558h+var_50C], ebx
0x408226: add     esp, 14h
0x408229: mov     ecx, edi
0x40822B: call    sub_68A1F0
0x408230: test    eax, eax
0x408232: mov     [esp+544h+var_500], eax
0x408236: jnz     short loc_408243
0x408238: mov     ecx, esi
0x40823A: call    sub_4D8AF0
0x40823F: mov     [esp+544h+var_500], eax
0x408243: mov     ecx, [esp+544h+var_500]
0x408247: push    0; int
0x408249: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x40824E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x408253: push    0; int
0x408255: push    ecx; void *
0x408256: call    OblivionDynamicCast
0x40825B: mov     edx, [esp+558h+var_500]
0x40825F: push    0; int
0x408261: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x408266: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x40826B: push    0; int
0x40826D: push    edx; void *
0x40826E: mov     esi, eax
0x408270: call    OblivionDynamicCast
0x408275: add     esp, 28h
0x408278: test    esi, esi
0x40827A: jz      short loc_4082D5
0x40827C: mov     eax, [esi]
0x40827E: mov     edx, [eax+0D4h]
0x408284: mov     ecx, esi
0x408286: call    edx
0x408288: push    eax; Format
0x408289: push    offset aFinalTargetLoc; "Final Target Loc: Interior '%s'"
0x40828E: lea     eax, [esp+54Ch+Dest]
0x408295: push    0C8h ; 'È'; Count
0x40829A: push    eax; Dest
0x40829B: call    __snprintf
0x4082A0: fild    [esp+554h+var_50C]
0x4082A4: add     esp, 10h
0x4082A7: push    0FFFFFFFFh
0x4082A9: push    3
0x4082AB: sub     esp, 8
0x4082AE: mov     ecx, 500h
0x4082B3: fstp    [esp+554h+Format+4]
0x4082B7: sub     ecx, iDebugTextLeftRightOffset
0x4082BD: lea     edx, [esp+554h+Dest]
0x4082C4: mov     [esp+554h+var_508], ecx
0x4082C8: fild    [esp+554h+var_508]
0x4082CC: fstp    [esp+554h+Format]
0x4082CF: push    edx
0x4082D0: jmp     loc_40836B
0x4082D5: test    eax, eax
0x4082D7: jz      short loc_408324
0x4082D9: mov     edx, [eax]
0x4082DB: mov     ecx, eax
0x4082DD: mov     eax, [edx+0D4h]
0x4082E3: call    eax
0x4082E5: push    eax; Format
0x4082E6: push    offset aFinalTargetL_0; "Final Target Loc: World '%s'"
0x4082EB: lea     ecx, [esp+54Ch+Dest]
0x4082F2: push    0C8h ; 'È'; Count
0x4082F7: push    ecx; Dest
0x4082F8: call    __snprintf
0x4082FD: fild    [esp+554h+var_50C]
0x408301: add     esp, 10h
0x408304: push    0FFFFFFFFh
0x408306: push    3
0x408308: sub     esp, 8
0x40830B: mov     edx, 500h
0x408310: fstp    [esp+554h+Format+4]
0x408314: sub     edx, iDebugTextLeftRightOffset
0x40831A: mov     [esp+554h+var_508], edx
0x40831E: fild    [esp+554h+var_508]
0x408322: jmp     short loc_408360
0x408324: push    offset aFinalTargetL_1; "Final Target Loc: UNKNOWN"
0x408329: lea     ecx, [esp+548h+Dest]
0x408330: push    0C8h ; 'È'; Count
0x408335: push    ecx; Dest
0x408336: call    __snprintf
0x40833B: fild    [esp+550h+var_50C]
0x40833F: add     esp, 0Ch
0x408342: push    0FFFFFFFFh; int
0x408344: push    3; int
0x408346: sub     esp, 8
0x408349: mov     edx, 500h
0x40834E: fstp    [esp+554h+Format+4]; float
0x408352: sub     edx, iDebugTextLeftRightOffset
0x408358: mov     [esp+554h+var_508], edx
0x40835C: fild    [esp+554h+var_508]
0x408360: lea     eax, [esp+554h+Dest]
0x408367: fstp    [esp+554h+Format]; float
0x40836A: push    eax; int
0x40836B: call    InterfaceMgr_DebugTextLine
0x408370: add     [esp+558h+var_50C], ebx
0x408374: add     esp, 14h
0x408377: mov     ecx, edi
0x408379: call    sub_68A250
0x40837E: mov     ecx, [eax]
0x408380: mov     edx, [eax+4]
0x408383: mov     eax, [eax+8]
0x408386: sub     esp, 18h
0x408389: mov     [esp+55Ch+var_4EC], eax
0x40838D: fld     [esp+55Ch+var_4EC]
0x408391: fstp    qword ptr [esp+55Ch+Format+8]
0x408395: mov     dword ptr [esp+55Ch+var_4F4+4], edx
0x408399: fld     dword ptr [esp+55Ch+var_4F4+4]
0x40839D: mov     dword ptr [esp+55Ch+var_4F4], ecx
0x4083A1: fstp    qword ptr [esp+55Ch+Format]
0x4083A5: lea     ecx, [esp+55Ch+Dest]
0x4083AC: fld     dword ptr [esp+55Ch+var_4F4]
0x4083B0: fstp    qword ptr [esp+55Ch+var_55C]; Format
0x4083B3: push    offset aFinalTargetPos; "Final Target Pos: ( %.0f, %.0f, %.0f )"
0x4083B8: push    0C8h ; 'È'; Count
0x4083BD: push    ecx; Dest
0x4083BE: call    __snprintf
0x4083C3: fild    [esp+568h+var_50C]
0x4083C7: add     esp, 24h
0x4083CA: push    0FFFFFFFFh; int
0x4083CC: push    3; int
0x4083CE: mov     edx, 500h
0x4083D3: sub     edx, iDebugTextLeftRightOffset
0x4083D9: sub     esp, 8
0x4083DC: fstp    [esp+554h+Format+4]; float
0x4083E0: mov     [esp+554h+var_508], edx
0x4083E4: fild    [esp+554h+var_508]
0x4083E8: lea     eax, [esp+554h+Dest]
0x4083EF: fstp    [esp+554h+Format]; float
0x4083F2: push    eax; int
0x4083F3: call    InterfaceMgr_DebugTextLine
0x4083F8: add     [esp+558h+var_50C], ebx
0x4083FC: add     esp, 14h
0x4083FF: mov     ecx, edi
0x408401: call    sub_68A160
0x408406: mov     ecx, [eax]
0x408408: mov     edx, [eax+4]
0x40840B: mov     eax, [eax+8]
0x40840E: sub     esp, 18h
0x408411: mov     [esp+55Ch+var_4EC], eax
0x408415: fld     [esp+55Ch+var_4EC]
0x408419: fstp    qword ptr [esp+55Ch+Format+8]
0x40841D: mov     dword ptr [esp+55Ch+var_4F4+4], edx
0x408421: fld     dword ptr [esp+55Ch+var_4F4+4]
0x408425: mov     dword ptr [esp+55Ch+var_4F4], ecx
0x408429: fstp    qword ptr [esp+55Ch+Format]
0x40842D: lea     ecx, [esp+55Ch+Dest]
0x408434: fld     dword ptr [esp+55Ch+var_4F4]
0x408438: fstp    qword ptr [esp+55Ch+var_55C]; Format
0x40843B: push    offset aCurrentLowTarg; "Current Low Target Pos: ( %.0f, %.0f, %"...
0x408440: push    0C8h ; 'È'; Count
0x408445: push    ecx; Dest
0x408446: call    __snprintf
0x40844B: fild    [esp+568h+var_50C]
0x40844F: add     esp, 24h
0x408452: push    0FFFFFFFFh; int
0x408454: push    3; int
0x408456: mov     edx, 500h
0x40845B: sub     edx, iDebugTextLeftRightOffset
0x408461: sub     esp, 8
0x408464: fstp    [esp+554h+Format+4]; float
0x408468: mov     [esp+554h+var_508], edx
0x40846C: fild    [esp+554h+var_508]
0x408470: lea     eax, [esp+554h+Dest]
0x408477: fstp    [esp+554h+Format]; float
0x40847A: push    eax; int
0x40847B: call    InterfaceMgr_DebugTextLine
0x408480: add     [esp+558h+var_50C], ebx
0x408484: push    0; int
0x408486: push    offset ??_R0?AVPathMiddleHigh@@@8; struct TypeDescriptor *
0x40848B: push    offset ??_R0?AVPathLow@@@8; struct _s_RTTICompleteObjectLocator *
0x408490: push    0; int
0x408492: push    edi; void *
0x408493: call    OblivionDynamicCast
0x408498: add     esp, 28h
0x40849B: mov     esi, eax
0x40849D: test    esi, esi
0x40849F: lea     ecx, [esp+544h+Dest]
0x4084A6: jz      loc_408A9B
0x4084AC: push    offset asc_A30D74; "------------------------"
0x4084B1: push    0C8h ; 'È'; Count
0x4084B6: push    ecx; Dest
0x4084B7: call    __snprintf
0x4084BC: fild    [esp+550h+var_50C]
0x4084C0: add     esp, 0Ch
0x4084C3: push    0FFFFFFFFh; int
0x4084C5: push    3; int
0x4084C7: mov     edx, 500h
0x4084CC: sub     edx, iDebugTextLeftRightOffset
0x4084D2: sub     esp, 8
0x4084D5: fstp    [esp+554h+Format+4]; float
0x4084D9: mov     [esp+554h+var_508], edx
0x4084DD: fild    [esp+554h+var_508]
0x4084E1: lea     eax, [esp+554h+Dest]
0x4084E8: fstp    [esp+554h+Format]; float
0x4084EB: push    eax; int
0x4084EC: call    InterfaceMgr_DebugTextLine
0x4084F1: add     [esp+558h+var_50C], ebx
0x4084F5: mov     edx, [esi]
0x4084F7: mov     eax, [edx+0Ch]
0x4084FA: add     esp, 14h
0x4084FD: mov     ecx, esi
0x4084FF: call    eax
0x408501: test    al, al
0x408503: jnz     loc_408A5A
0x408509: mov     ecx, esi
0x40850B: call    sub_68B3F0
0x408510: mov     ecx, [eax]
0x408512: mov     edx, [eax+4]
0x408515: mov     eax, [eax+8]
0x408518: sub     esp, 18h
0x40851B: mov     [esp+55Ch+var_4EC], eax
0x40851F: fld     [esp+55Ch+var_4EC]
0x408523: fstp    qword ptr [esp+55Ch+Format+8]
0x408527: mov     dword ptr [esp+55Ch+var_4F4+4], edx
0x40852B: fld     dword ptr [esp+55Ch+var_4F4+4]
0x40852F: mov     dword ptr [esp+55Ch+var_4F4], ecx
0x408533: fstp    qword ptr [esp+55Ch+Format]
0x408537: lea     ecx, [esp+55Ch+Dest]
0x40853E: fld     dword ptr [esp+55Ch+var_4F4]
0x408542: fstp    qword ptr [esp+55Ch+var_55C]; Format
0x408545: push    offset aCurrentHighTar; "Current High Target Pos: ( %.0f, %.0f, "...
0x40854A: push    0C8h ; 'È'; Count
0x40854F: push    ecx; Dest
0x408550: call    __snprintf
0x408555: fild    [esp+568h+var_50C]
0x408559: add     esp, 24h
0x40855C: push    0FFFFFFFFh; int
0x40855E: push    3; int
0x408560: mov     edx, 500h
0x408565: sub     edx, iDebugTextLeftRightOffset
0x40856B: sub     esp, 8
0x40856E: fstp    [esp+554h+Format+4]; float
0x408572: mov     [esp+554h+var_508], edx
0x408576: fild    [esp+554h+var_508]
0x40857A: lea     eax, [esp+554h+Dest]
0x408581: fstp    [esp+554h+Format]; float
0x408584: push    eax; int
0x408585: call    InterfaceMgr_DebugTextLine
0x40858A: add     [esp+558h+var_50C], ebx
0x40858E: push    0; int
0x408590: push    offset ??_R0?AVPathHigh@@@8; struct TypeDescriptor *
0x408595: push    offset ??_R0?AVPathLow@@@8; struct _s_RTTICompleteObjectLocator *
0x40859A: push    0; int
0x40859C: push    edi; void *
0x40859D: call    OblivionDynamicCast
0x4085A2: mov     esi, eax
0x4085A4: add     esp, 28h
0x4085A7: test    esi, esi
0x4085A9: lea     ecx, [esp+544h+Dest]
0x4085B0: jz      loc_408A20
0x4085B6: push    offset asc_A30D74; "------------------------"
0x4085BB: push    0C8h ; 'È'; Count
0x4085C0: push    ecx; Dest
0x4085C1: call    __snprintf
0x4085C6: fild    [esp+550h+var_50C]
0x4085CA: add     esp, 0Ch
0x4085CD: push    0FFFFFFFFh; int
0x4085CF: push    3; int
0x4085D1: mov     edx, 500h
0x4085D6: sub     edx, iDebugTextLeftRightOffset
0x4085DC: sub     esp, 8
0x4085DF: fstp    [esp+554h+Format+4]; float
0x4085E3: mov     [esp+554h+var_508], edx
0x4085E7: fild    [esp+554h+var_508]
0x4085EB: lea     eax, [esp+554h+Dest]
0x4085F2: fstp    [esp+554h+Format]; float
0x4085F5: push    eax; int
0x4085F6: call    InterfaceMgr_DebugTextLine
0x4085FB: add     [esp+558h+var_50C], ebx
0x4085FF: mov     edx, [esi]
0x408601: mov     eax, [edx+0Ch]
0x408604: add     esp, 14h
0x408607: mov     ecx, esi
0x408609: call    eax
0x40860B: test    al, al
0x40860D: jnz     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x408613: mov     ecx, esi
0x408615: call    sub_4A9720
0x40861A: fstp    [esp+544h+var_508]
0x40861E: mov     ecx, offset flt_B3A498
0x408623: call    GameSetting_GetSafeFloatPointer
0x408628: fld     dword ptr [eax]
0x40862A: sub     esp, 10h
0x40862D: fstp    qword ptr [esp+554h+Format+8]
0x408631: lea     ecx, [esp+554h+Dest]
0x408638: fld     [esp+554h+var_508]
0x40863C: fstp    qword ptr [esp+554h+Format]; Format
0x40863F: push    offset aFailureTime_2f; "Failure Time: %.2f / %.2f"
0x408644: push    0C8h ; 'È'; Count
0x408649: push    ecx; Dest
0x40864A: call    __snprintf
0x40864F: fild    [esp+560h+var_50C]
0x408653: add     esp, 1Ch
0x408656: push    0FFFFFFFFh; int
0x408658: push    3; int
0x40865A: mov     edx, 500h
0x40865F: sub     edx, iDebugTextLeftRightOffset
0x408665: sub     esp, 8
0x408668: fstp    [esp+554h+Format+4]; float
0x40866C: mov     [esp+554h+var_508], edx
0x408670: fild    [esp+554h+var_508]
0x408674: lea     eax, [esp+554h+Dest]
0x40867B: fstp    [esp+554h+Format]; float
0x40867E: push    eax; int
0x40867F: call    InterfaceMgr_DebugTextLine
0x408684: add     [esp+558h+var_50C], ebx
0x408688: add     esp, 14h
0x40868B: mov     ecx, esi
0x40868D: call    sub_629420
0x408692: cmp     eax, 3
0x408695: jge     short loc_4086C2
0x408697: mov     ecx, esi
0x408699: call    sub_629420
0x40869E: mov     ecx, off_B15808[eax*4]; "NONE"
0x4086A5: push    ecx; Format
0x4086A6: push    offset aFailureStateS; "Failure State: %s"
0x4086AB: lea     edx, [esp+54Ch+Dest]
0x4086B2: push    0C8h ; 'È'; Count
0x4086B7: push    edx; Dest
0x4086B8: call    __snprintf
0x4086BD: add     esp, 10h
0x4086C0: jmp     short loc_4086DC
0x4086C2: push    offset aFailureStateFa; "Failure State: FAILED"
0x4086C7: lea     eax, [esp+548h+Dest]
0x4086CE: push    0C8h ; 'È'; Count
0x4086D3: push    eax; Dest
0x4086D4: call    __snprintf
0x4086D9: add     esp, 0Ch
0x4086DC: fild    [esp+544h+var_50C]
0x4086E0: push    0FFFFFFFFh; int
0x4086E2: push    3; int
0x4086E4: mov     ecx, 500h
0x4086E9: sub     ecx, iDebugTextLeftRightOffset
0x4086EF: sub     esp, 8
0x4086F2: fstp    [esp+554h+Format+4]; float
0x4086F6: mov     [esp+554h+var_508], ecx
0x4086FA: fild    [esp+554h+var_508]
0x4086FE: lea     edx, [esp+554h+Dest]
0x408705: fstp    [esp+554h+Format]; float
0x408708: push    edx; int
0x408709: call    InterfaceMgr_DebugTextLine
0x40870E: add     [esp+558h+var_50C], ebx
0x408712: add     esp, 14h
0x408715: mov     ecx, esi
0x408717: call    sub_683A60
0x40871C: test    al, al
0x40871E: jz      short loc_40875E
0x408720: push    offset aHighPathingSta; "High Pathing Status: Turning"
0x408725: lea     eax, [esp+548h+Dest]
0x40872C: push    0C8h ; 'È'; Count
0x408731: push    eax; Dest
0x408732: call    __snprintf
0x408737: fild    [esp+550h+var_50C]
0x40873B: add     esp, 0Ch
0x40873E: push    0FFFFFFFFh
0x408740: push    3
0x408742: sub     esp, 8
0x408745: mov     ecx, 500h
0x40874A: fstp    [esp+554h+Format+4]
0x40874E: sub     ecx, iDebugTextLeftRightOffset
0x408754: mov     [esp+554h+var_508], ecx
0x408758: fild    [esp+554h+var_508]
0x40875C: jmp     short loc_4087DC
0x40875E: mov     ecx, esi
0x408760: call    sub_684780
0x408765: test    al, al
0x408767: lea     eax, [esp+544h+Dest]
0x40876E: jz      short loc_4087A7
0x408770: push    offset aHighPathingS_0; "High Pathing Status: Avoiding"
0x408775: push    0C8h ; 'È'; Count
0x40877A: push    eax; Dest
0x40877B: call    __snprintf
0x408780: fild    [esp+550h+var_50C]
0x408784: add     esp, 0Ch
0x408787: push    0FFFFFFFFh
0x408789: push    3
0x40878B: sub     esp, 8
0x40878E: mov     ecx, 500h
0x408793: fstp    [esp+554h+Format+4]
0x408797: sub     ecx, iDebugTextLeftRightOffset
0x40879D: mov     [esp+554h+var_508], ecx
0x4087A1: fild    [esp+554h+var_508]
0x4087A5: jmp     short loc_4087DC
0x4087A7: push    offset aHighPathingS_1; "High Pathing Status: Pathing"
0x4087AC: push    0C8h ; 'È'; Count
0x4087B1: push    eax; Dest
0x4087B2: call    __snprintf
0x4087B7: fild    [esp+550h+var_50C]
0x4087BB: add     esp, 0Ch
0x4087BE: push    0FFFFFFFFh; int
0x4087C0: push    3; int
0x4087C2: sub     esp, 8
0x4087C5: mov     ecx, 500h
0x4087CA: fstp    [esp+554h+Format+4]; float
0x4087CE: sub     ecx, iDebugTextLeftRightOffset
0x4087D4: mov     [esp+554h+var_508], ecx
0x4087D8: fild    [esp+554h+var_508]
0x4087DC: lea     edx, [esp+554h+Dest]
0x4087E3: fstp    [esp+554h+Format]; float
0x4087E6: push    edx; int
0x4087E7: call    InterfaceMgr_DebugTextLine
0x4087EC: add     [esp+558h+var_50C], ebx
0x4087F0: add     esp, 14h
0x4087F3: mov     ecx, esi
0x4087F5: call    HighProcess__GetUnk030
0x4087FA: mov     esi, eax
0x4087FC: test    esi, esi
0x4087FE: jz      loc_4089DF
0x408804: push    offset asc_A30D74; "------------------------"
0x408809: lea     eax, [esp+548h+Dest]
0x408810: push    0C8h ; 'È'; Count
0x408815: push    eax; Dest
0x408816: call    __snprintf
0x40881B: fild    [esp+550h+var_50C]
0x40881F: add     esp, 0Ch
0x408822: push    0FFFFFFFFh; int
0x408824: push    3; int
0x408826: mov     ecx, 500h
0x40882B: sub     ecx, iDebugTextLeftRightOffset
0x408831: sub     esp, 8
0x408834: fstp    [esp+554h+Format+4]; float
0x408838: mov     [esp+554h+var_508], ecx
0x40883C: fild    [esp+554h+var_508]
0x408840: lea     edx, [esp+554h+Dest]
0x408847: fstp    [esp+554h+Format]; float
0x40884A: push    edx; int
0x40884B: call    InterfaceMgr_DebugTextLine
0x408850: add     [esp+558h+var_50C], ebx
0x408854: add     esp, 14h
0x408857: mov     ecx, esi
0x408859: call    sub_680CB0
0x40885E: mov     eax, off_B15728[eax*4]; "NO AVOIDANCE"
0x408865: push    eax; Format
0x408866: push    offset aAvoidanceStatu; "Avoidance Status: %s"
0x40886B: lea     ecx, [esp+54Ch+Dest]
0x408872: push    0C8h ; 'È'; Count
0x408877: push    ecx; Dest
0x408878: call    __snprintf
0x40887D: fild    [esp+554h+var_50C]
0x408881: add     esp, 10h
0x408884: push    0FFFFFFFFh; int
0x408886: push    3; int
0x408888: mov     edx, 500h
0x40888D: sub     edx, iDebugTextLeftRightOffset
0x408893: sub     esp, 8
0x408896: fstp    [esp+554h+Format+4]; float
0x40889A: mov     [esp+554h+var_508], edx
0x40889E: fild    [esp+554h+var_508]
0x4088A2: lea     eax, [esp+554h+Dest]
0x4088A9: fstp    [esp+554h+Format]; float
0x4088AC: push    eax; int
0x4088AD: call    InterfaceMgr_DebugTextLine
0x4088B2: add     [esp+558h+var_50C], ebx
0x4088B6: add     esp, 14h
0x4088B9: mov     ecx, esi
0x4088BB: call    sub_680CC0
0x4088C0: fstp    [esp+544h+var_508]
0x4088C4: fld     [esp+544h+var_508]
0x4088C8: sub     esp, 8
0x4088CB: fstp    qword ptr [esp+54Ch+Format+8]; Format
0x4088CE: push    offset aAvoidanceWaitT; "Avoidance Wait Time: %.2f"
0x4088D3: lea     ecx, [esp+550h+Dest]
0x4088DA: push    0C8h ; 'È'; Count
0x4088DF: push    ecx; Dest
0x4088E0: call    __snprintf
0x4088E5: fild    [esp+558h+var_50C]
0x4088E9: add     esp, 14h
0x4088EC: push    0FFFFFFFFh; int
0x4088EE: push    3; int
0x4088F0: mov     edx, 500h
0x4088F5: sub     edx, iDebugTextLeftRightOffset
0x4088FB: sub     esp, 8
0x4088FE: fstp    [esp+554h+Format+4]; float
0x408902: mov     [esp+554h+var_508], edx
0x408906: fild    [esp+554h+var_508]
0x40890A: lea     eax, [esp+554h+Dest]
0x408911: fstp    [esp+554h+Format]; float
0x408914: push    eax; int
0x408915: call    InterfaceMgr_DebugTextLine
0x40891A: add     [esp+558h+var_50C], ebx
0x40891E: add     esp, 14h
0x408921: mov     ecx, esi
0x408923: call    sub_4A9720
0x408928: fstp    [esp+544h+var_508]
0x40892C: fld     [esp+544h+var_508]
0x408930: sub     esp, 8
0x408933: fstp    qword ptr [esp+54Ch+Format+8]; Format
0x408936: push    offset aAvoidanceAngli; "Avoidance Angling Time: %.2f"
0x40893B: push    0C8h ; 'È'; Count
0x408940: lea     ecx, [esp+554h+Dest]
0x408947: push    ecx; Dest
0x408948: call    __snprintf
0x40894D: fild    [esp+558h+var_50C]
0x408951: add     esp, 14h
0x408954: push    0FFFFFFFFh; int
0x408956: push    3; int
0x408958: mov     edx, 500h
0x40895D: sub     edx, iDebugTextLeftRightOffset
0x408963: sub     esp, 8
0x408966: fstp    [esp+554h+Format+4]; float
0x40896A: mov     [esp+554h+var_508], edx
0x40896E: fild    [esp+554h+var_508]
0x408972: lea     eax, [esp+554h+Dest]
0x408979: fstp    [esp+554h+Format]; float
0x40897C: push    eax; int
0x40897D: call    InterfaceMgr_DebugTextLine
0x408982: add     [esp+558h+var_50C], ebx
0x408986: add     esp, 14h
0x408989: mov     ecx, esi
0x40898B: call    sub_680CF0
0x408990: fstp    [esp+544h+var_508]
0x408994: fld     [esp+544h+var_508]
0x408998: sub     esp, 8
0x40899B: fstp    qword ptr [esp+54Ch+Format+8]; Format
0x40899E: push    offset aAvoidanceAvoid; "Avoidance Avoid Time: %.2f"
0x4089A3: lea     ecx, [esp+550h+Dest]
0x4089AA: push    0C8h ; 'È'; Count
0x4089AF: push    ecx; Dest
0x4089B0: call    __snprintf
0x4089B5: fild    [esp+558h+var_50C]
0x4089B9: add     esp, 14h
0x4089BC: push    0FFFFFFFFh
0x4089BE: push    3
0x4089C0: sub     esp, 8
0x4089C3: mov     edx, 500h
0x4089C8: fstp    [esp+554h+Format+4]
0x4089CC: sub     edx, iDebugTextLeftRightOffset
0x4089D2: mov     [esp+554h+var_508], edx
0x4089D6: fild    [esp+554h+var_508]
0x4089DA: jmp     loc_408BC0
0x4089DF: push    offset aNoAvoidance; "NO AVOIDANCE"
0x4089E4: lea     ecx, [esp+548h+Dest]
0x4089EB: push    0C8h ; 'È'; Count
0x4089F0: push    ecx; Dest
0x4089F1: call    __snprintf
0x4089F6: fild    [esp+550h+var_50C]
0x4089FA: add     esp, 0Ch
0x4089FD: push    0FFFFFFFFh
0x4089FF: push    3
0x408A01: sub     esp, 8
0x408A04: mov     edx, 500h
0x408A09: fstp    [esp+554h+Format+4]
0x408A0D: sub     edx, iDebugTextLeftRightOffset
0x408A13: mov     [esp+554h+var_508], edx
0x408A17: fild    [esp+554h+var_508]
0x408A1B: jmp     loc_408BC0
0x408A20: push    offset aMiddleHighPath; "MIDDLE HIGH PATH SYSTEM ONLY"
0x408A25: push    0C8h ; 'È'; Count
0x408A2A: push    ecx; Dest
0x408A2B: call    __snprintf
0x408A30: fild    [esp+550h+var_50C]
0x408A34: add     esp, 0Ch
0x408A37: push    0FFFFFFFFh
0x408A39: push    3
0x408A3B: sub     esp, 8
0x408A3E: mov     edx, 500h
0x408A43: fstp    [esp+554h+Format+4]
0x408A47: sub     edx, iDebugTextLeftRightOffset
0x408A4D: mov     [esp+554h+var_508], edx
0x408A51: fild    [esp+554h+var_508]
0x408A55: jmp     loc_408BC0
0x408A5A: push    offset aPathingSystemH; "PATHING SYSTEM HAS NO HIGH PATH"
0x408A5F: lea     ecx, [esp+548h+Dest]
0x408A66: push    0C8h ; 'È'; Count
0x408A6B: push    ecx; Dest
0x408A6C: call    __snprintf
0x408A71: fild    [esp+550h+var_50C]
0x408A75: add     esp, 0Ch
0x408A78: push    0FFFFFFFFh
0x408A7A: push    3
0x408A7C: sub     esp, 8
0x408A7F: mov     edx, 500h
0x408A84: fstp    [esp+554h+Format+4]
0x408A88: sub     edx, iDebugTextLeftRightOffset
0x408A8E: mov     [esp+554h+var_508], edx
0x408A92: fild    [esp+554h+var_508]
0x408A96: jmp     loc_408BC0
0x408A9B: push    offset aLowPathSystemO; "LOW PATH SYSTEM ONLY"
0x408AA0: push    0C8h ; 'È'; Count
0x408AA5: push    ecx; Dest
0x408AA6: call    __snprintf
0x408AAB: fild    [esp+550h+var_50C]
0x408AAF: add     esp, 0Ch
0x408AB2: push    0FFFFFFFFh
0x408AB4: push    3
0x408AB6: sub     esp, 8
0x408AB9: mov     edx, 500h
0x408ABE: fstp    [esp+554h+Format+4]
0x408AC2: sub     edx, iDebugTextLeftRightOffset
0x408AC8: mov     [esp+554h+var_508], edx
0x408ACC: fild    [esp+554h+var_508]
0x408AD0: jmp     loc_408BC0
0x408AD5: push    offset aPathingSyste_0; "PATHING SYSTEM HAS NO LOW PATH"
0x408ADA: push    0C8h ; 'È'; Count
0x408ADF: push    ecx; Dest
0x408AE0: call    __snprintf
0x408AE5: fild    [esp+550h+var_50C]
0x408AE9: add     esp, 0Ch
0x408AEC: push    0FFFFFFFFh
0x408AEE: push    3
0x408AF0: sub     esp, 8
0x408AF3: mov     edx, 500h
0x408AF8: fstp    [esp+554h+Format+4]
0x408AFC: sub     edx, iDebugTextLeftRightOffset
0x408B02: mov     [esp+554h+var_508], edx
0x408B06: fild    [esp+554h+var_508]
0x408B0A: jmp     loc_408BC0
0x408B0F: push    offset aNoPathingSyste; "NO PATHING SYSTEM"
0x408B14: push    0C8h ; 'È'; Count
0x408B19: push    ecx; Dest
0x408B1A: call    __snprintf
0x408B1F: fild    [esp+550h+var_50C]
0x408B23: add     esp, 0Ch
0x408B26: push    0FFFFFFFFh
0x408B28: push    3
0x408B2A: sub     esp, 8
0x408B2D: mov     edx, 500h
0x408B32: fstp    [esp+554h+Format+4]
0x408B36: sub     edx, iDebugTextLeftRightOffset
0x408B3C: mov     [esp+554h+var_508], edx
0x408B40: fild    [esp+554h+var_508]
0x408B44: jmp     short loc_408BC0
0x408B46: push    offset aNoBaseProcess; "NO BASE PROCESS"
0x408B4B: lea     ecx, [esp+548h+Dest]
0x408B52: push    0C8h ; 'È'; Count
0x408B57: push    ecx; Dest
0x408B58: call    __snprintf
0x408B5D: fild    [esp+550h+var_50C]
0x408B61: add     esp, 0Ch
0x408B64: push    0FFFFFFFFh
0x408B66: push    3
0x408B68: sub     esp, 8
0x408B6B: mov     edx, 500h
0x408B70: fstp    [esp+554h+Format+4]
0x408B74: sub     edx, iDebugTextLeftRightOffset
0x408B7A: mov     [esp+554h+var_508], edx
0x408B7E: fild    [esp+554h+var_508]
0x408B82: jmp     short loc_408BC0
0x408B84: push    offset aNoPathingDataF; "NO PATHING DATA FOR REF"
0x408B89: lea     ecx, [esp+548h+Dest]
0x408B90: push    0C8h ; 'È'; Count
0x408B95: push    ecx; Dest
0x408B96: call    __snprintf
0x408B9B: fild    [esp+550h+var_50C]
0x408B9F: add     esp, 0Ch
0x408BA2: push    0FFFFFFFFh; int
0x408BA4: push    3; int
0x408BA6: sub     esp, 8
0x408BA9: mov     edx, 500h
0x408BAE: fstp    [esp+554h+Format+4]; float
0x408BB2: sub     edx, iDebugTextLeftRightOffset
0x408BB8: mov     [esp+554h+var_508], edx
0x408BBC: fild    [esp+554h+var_508]
0x408BC0: lea     eax, [esp+554h+Dest]
0x408BC7: fstp    [esp+554h+Format]; float
0x408BCA: push    eax; int
0x408BCB: call    InterfaceMgr_DebugTextLine
0x408BD0: add     esp, 14h
0x408BD3: add     [esp+544h+var_50C], ebx
0x408BD7: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x408BDC: mov     ecx, offset TimeGlobals; jumptable 00407DFE case 0
0x408BE1: mov     [esp+544h+var_4B4], offset aSunday; "Sunday"
0x408BEC: mov     [esp+544h+var_4B0], offset aMonday; "Monday"
0x408BF7: mov     [esp+544h+var_4AC], offset aTuesday; "Tuesday"
0x408C02: mov     [esp+544h+var_4A8], offset aWednesday; "Wednesday"
0x408C0D: mov     [esp+544h+var_4A4], offset aThursday; "Thursday"
0x408C18: mov     [esp+544h+var_4A0], offset aFriday; "Friday"
0x408C23: mov     [esp+544h+var_49C], offset aSaturday; "Saturday"
0x408C2E: call    TimeGlobals_GetGameDayOfWeek
0x408C33: mov     ecx, [esp+eax*4+544h+var_4B4]
0x408C3A: push    ecx
0x408C3B: lea     edx, [esp+548h+Dest]
0x408C42: push    offset aDayOfTheWeekS; "Day of the Week %s"
0x408C47: push    edx
0x408C48: call    __sprintf
0x408C4D: fild    [esp+550h+var_510]
0x408C51: add     esp, 0Ch
0x408C54: push    0FFFFFFFFh; int
0x408C56: push    1; int
0x408C58: sub     esp, 8
0x408C5B: fstp    [esp+554h+Format+4]; float
0x408C5F: lea     eax, [esp+554h+Dest]
0x408C66: fild    iDebugTextLeftRightOffset
0x408C6C: fstp    [esp+554h+Format]; float
0x408C6F: push    eax; int
0x408C70: call    InterfaceMgr_DebugTextLine
0x408C75: add     [esp+558h+var_510], ebx
0x408C79: add     esp, 14h
0x408C7C: mov     ecx, offset TimeGlobals
0x408C81: call    TimeGlobals_GetGameYear
0x408C86: push    eax
0x408C87: mov     ecx, offset TimeGlobals
0x408C8C: call    TimeGlobals_GetGameDay
0x408C91: movsx   ecx, al
0x408C94: push    ecx
0x408C95: mov     ecx, offset TimeGlobals
0x408C9A: call    TimeGlobals_GetGameMonth
0x408C9F: push    eax
0x408CA0: lea     edx, [esp+550h+Dest]
0x408CA7: push    offset aDateDDD; "Date %d/%d/%d"
0x408CAC: push    edx
0x408CAD: call    __sprintf
0x408CB2: fild    [esp+558h+var_510]
0x408CB6: add     esp, 14h
0x408CB9: push    0FFFFFFFFh; int
0x408CBB: push    1; int
0x408CBD: sub     esp, 8
0x408CC0: fstp    [esp+554h+Format+4]; float
0x408CC4: lea     eax, [esp+554h+Dest]
0x408CCB: fild    iDebugTextLeftRightOffset
0x408CD1: fstp    [esp+554h+Format]; float
0x408CD4: push    eax; int
0x408CD5: call    InterfaceMgr_DebugTextLine
0x408CDA: add     [esp+558h+var_510], ebx
0x408CDE: add     esp, 14h
0x408CE1: mov     ecx, offset TimeGlobals
0x408CE6: call    TimeGlobals_GetGameHour
0x408CEB: fstp    [esp+544h+var_508]
0x408CEF: fld     [esp+544h+var_508]
0x408CF3: fld     st
0x408CF5: call    Double_To_SInt32
0x408CFA: movsx   esi, al
0x408CFD: mov     [esp+544h+var_508], esi
0x408D01: fisub   [esp+544h+var_508]
0x408D05: fld     ds:dbl_A2FCC8
0x408D0B: fmul    st(1), st
0x408D0D: fld     st(1)
0x408D0F: call    Double_To_SInt32
0x408D14: movsx   edi, al
0x408D17: mov     [esp+544h+var_508], edi
0x408D1B: fild    [esp+544h+var_508]
0x408D1F: fsubp   st(2), st
0x408D21: fmulp   st(1), st
0x408D23: call    Double_To_SInt32
0x408D28: movsx   ecx, al
0x408D2B: push    ecx
0x408D2C: push    edi
0x408D2D: push    esi
0x408D2E: push    offset aTimeD02d02d; "Time %d:%02d:%02d"
0x408D33: lea     edx, [esp+554h+Dest]
0x408D3A: push    edx
0x408D3B: call    __sprintf
0x408D40: fild    [esp+558h+var_510]
0x408D44: add     esp, 14h
0x408D47: push    0FFFFFFFFh; int
0x408D49: push    1; int
0x408D4B: sub     esp, 8
0x408D4E: fstp    [esp+554h+Format+4]; float
0x408D52: lea     eax, [esp+554h+Dest]
0x408D59: fild    iDebugTextLeftRightOffset
0x408D5F: fstp    [esp+554h+Format]; float
0x408D62: push    eax; int
0x408D63: call    InterfaceMgr_DebugTextLine
0x408D68: fild    Seed
0x408D6E: mov     ecx, Seed
0x408D74: add     [esp+558h+var_510], ebx
0x408D78: add     esp, 14h
0x408D7B: test    ecx, ecx
0x408D7D: jge     short loc_408D85
0x408D7F: fadd    ds:flt_A2FC78
0x408D85: fdiv    ds:dbl_A2FC70
0x408D8B: fstp    [esp+544h+var_500]
0x408D8F: fld     [esp+544h+var_500]
0x408D93: fld     ds:dbl_A2F938
0x408D99: fdivr   st, st(1)
0x408D9B: call    Double_To_SInt32
0x408DA0: fld     ds:dbl_A2FCC8
0x408DA6: fdiv    st(1), st
0x408DA8: mov     [esp+544h+var_4CD], al
0x408DAC: fxch    st(1)
0x408DAE: fstp    [esp+544h+var_508]
0x408DB2: fld     [esp+544h+var_508]
0x408DB6: fxch    st(1)
0x408DB8: call    unknown_libname_14
0x408DBD: fstp    [esp+544h+var_508]
0x408DC1: fld     [esp+544h+var_508]
0x408DC5: call    Double_To_SInt32
0x408DCA: fld     [esp+544h+var_500]
0x408DCE: fld     ds:dbl_A2FCC8
0x408DD4: mov     [esp+544h+var_4CE], al
0x408DD8: call    unknown_libname_14
0x408DDD: fstp    [esp+544h+var_508]
0x408DE1: fld     [esp+544h+var_508]
0x408DE5: call    Double_To_SInt32
0x408DEA: fld     flt_B33E9C
0x408DF0: sub     esp, 8
0x408DF3: fstp    qword ptr [esp+54Ch+Format+8]
0x408DF6: mov     [esp+54Ch+var_4CF], al
0x408DFA: fld     [esp+54Ch+var_500]
0x408DFE: fld     st
0x408E00: fxch    st(1)
0x408E02: call    Double_To_SInt32
0x408E07: mov     [esp+54Ch+var_508], eax
0x408E0B: fisub   [esp+54Ch+var_508]
0x408E0F: fmul    ds:fCostant_100
0x408E15: call    Double_To_SInt32
0x408E1A: movsx   edx, [esp+54Ch+var_4CF]
0x408E1F: movsx   ecx, [esp+54Ch+var_4CD]
0x408E24: push    eax
0x408E25: movsx   eax, [esp+550h+var_4CE]
0x408E2D: push    edx
0x408E2E: push    eax
0x408E2F: push    ecx
0x408E30: lea     edx, [esp+55Ch+Dest]
0x408E37: push    offset aGameplayD02d02; "GamePlay %d:%02d:%02d.%02d (%0.2f)"
0x408E3C: push    edx
0x408E3D: call    __sprintf
0x408E42: add     esp, 20h
0x408E45: fild    [esp+544h+var_510]
0x408E49: push    0FFFFFFFFh; int
0x408E4B: push    1; int
0x408E4D: sub     esp, 8
0x408E50: lea     eax, [esp+554h+Dest]
0x408E57: fstp    [esp+554h+Format+4]; float
0x408E5B: fild    iDebugTextLeftRightOffset
0x408E61: fstp    [esp+554h+Format]; float
0x408E64: push    eax; int
0x408E65: call    InterfaceMgr_DebugTextLine
0x408E6A: mov     ecx, TESDataHandler_g_PlayerRef
0x408E70: add     [esp+558h+var_510], ebx
0x408E74: add     esp, 14h
0x408E77: test    ecx, ecx
0x408E79: jz      loc_40903B
0x408E7F: mov     edx, [ecx]
0x408E81: mov     eax, [edx+174h]
0x408E87: call    eax
0x408E89: mov     ecx, [eax]
0x408E8B: mov     edx, [eax+4]
0x408E8E: mov     eax, [eax+8]
0x408E91: mov     dword ptr [esp+544h+var_4F4], ecx
0x408E95: mov     ecx, TES
0x408E9B: mov     edi, [ecx+34h]
0x408E9E: xor     esi, esi
0x408EA0: test    edi, edi
0x408EA2: mov     dword ptr [esp+544h+var_4F4+4], edx
0x408EA6: mov     [esp+544h+var_4EC], eax
0x408EAA: jnz     short loc_408EDC
0x408EAC: call    TES__GetCurrentWorldspace
0x408EB1: fld     dword ptr [esp+544h+var_4F4+4]
0x408EB5: mov     ecx, TESDataHandler
0x408EBB: push    edi; int
0x408EBC: mov     esi, eax
0x408EBE: push    esi; int
0x408EBF: sub     esp, 8
0x408EC2: fstp    [esp+554h+Format+4]; float
0x408EC6: fld     dword ptr [esp+554h+var_4F4]
0x408ECA: fstp    [esp+554h+Format]; float
0x408ECD: call    sub_44A270
0x408ED2: mov     edi, eax
0x408ED4: test    edi, edi
0x408ED6: jz      loc_40903B
0x408EDC: mov     ecx, edi; this
0x408EDE: call    TESObjectCELL_IsInterior
0x408EE3: test    al, al
0x408EE5: jz      short loc_408F12
0x408EE7: mov     ecx, TES
0x408EED: mov     ecx, [ecx+34h]
0x408EF0: mov     edx, [ecx]
0x408EF2: mov     eax, [edx+0D4h]
0x408EF8: call    eax
0x408EFA: push    eax
0x408EFB: lea     ecx, [esp+548h+Dest]
0x408F02: push    offset aPcCellS; "PC Cell %s"
0x408F07: push    ecx
0x408F08: call    __sprintf
0x408F0D: add     esp, 0Ch
0x408F10: jmp     short loc_408F44
0x408F12: mov     ecx, edi; this
0x408F14: call    TESObjectCELL_GetYCoordinate
0x408F19: push    eax
0x408F1A: mov     ecx, edi; this
0x408F1C: call    TESObjectCELL_GetXCoordinate
0x408F21: mov     edx, [edi]
0x408F23: push    eax
0x408F24: mov     eax, [edx+0D4h]
0x408F2A: mov     ecx, edi
0x408F2C: call    eax
0x408F2E: push    eax
0x408F2F: lea     ecx, [esp+550h+Dest]
0x408F36: push    offset aPcCellSDD; "PC Cell %s: %d %d "
0x408F3B: push    ecx
0x408F3C: call    __sprintf
0x408F41: add     esp, 14h
0x408F44: fild    [esp+544h+var_510]
0x408F48: push    0FFFFFFFFh; int
0x408F4A: push    1; int
0x408F4C: sub     esp, 8
0x408F4F: fstp    [esp+554h+Format+4]; float
0x408F53: lea     edx, [esp+554h+Dest]
0x408F5A: fild    iDebugTextLeftRightOffset
0x408F60: fstp    [esp+554h+Format]; float
0x408F63: push    edx; int
0x408F64: call    InterfaceMgr_DebugTextLine
0x408F69: add     [esp+558h+var_510], ebx
0x408F6D: xor     eax, eax
0x408F6F: add     esp, 14h
0x408F72: mov     [esp+544h+var_4E8.m_data], eax
0x408F76: mov     [esp+544h+var_4E8.m_dataLen], ax
0x408F7B: mov     [esp+544h+var_4E8.m_bufLen], ax
0x408F80: cmp     esi, eax
0x408F82: mov     [esp+544h+var_4], eax
0x408F89: jz      short loc_408FB7
0x408F8B: mov     ecx, dword ptr [esp+544h+var_4F4]
0x408F8F: mov     edx, [esi]
0x408F91: mov     edx, [edx+0DCh]
0x408F97: sub     esp, 0Ch
0x408F9A: mov     eax, esp
0x408F9C: mov     [eax], ecx
0x408F9E: mov     ecx, dword ptr [esp+550h+var_4F4+4]
0x408FA2: mov     [eax+4], ecx
0x408FA5: mov     ecx, [esp+550h+var_4EC]
0x408FA9: mov     [eax+8], ecx
0x408FAC: lea     eax, [esp+550h+var_4E8]
0x408FB0: push    eax
0x408FB1: mov     ecx, esi
0x408FB3: call    edx
0x408FB5: jmp     short loc_408FCF
0x408FB7: mov     edi, [edi+1Ch]
0x408FBA: test    edi, edi
0x408FBC: jnz     short loc_408FC3
0x408FBE: mov     edi, offset EmptyString
0x408FC3: push    0; a3
0x408FC5: push    edi; a2
0x408FC6: lea     ecx, [esp+54Ch+var_4E8]; this
0x408FCA: call    BSStringT_Set
0x408FCF: lea     ecx, [esp+544h+var_4E8]
0x408FD3: call    BSStringT_GetLen
0x408FD8: test    eax, eax
0x408FDA: mov     eax, offset aUnknown; "UNKNOWN"
0x408FDF: jz      short loc_408FE5
0x408FE1: mov     eax, [esp+544h+var_4E8.m_data]
0x408FE5: push    eax
0x408FE6: lea     eax, [esp+548h+Dest]
0x408FED: push    offset aMapNameS; "Map Name: %s "
0x408FF2: push    eax
0x408FF3: call    __sprintf
0x408FF8: fild    [esp+550h+var_510]
0x408FFC: add     esp, 0Ch
0x408FFF: push    0FFFFFFFFh; int
0x409001: push    1; int
0x409003: sub     esp, 8
0x409006: fstp    [esp+554h+Format+4]; float
0x40900A: lea     ecx, [esp+554h+Dest]
0x409011: fild    iDebugTextLeftRightOffset
0x409017: fstp    [esp+554h+Format]; float
0x40901A: push    ecx; int
0x40901B: call    InterfaceMgr_DebugTextLine
0x409020: add     [esp+558h+var_510], ebx
0x409024: add     esp, 14h
0x409027: lea     ecx, [esp+544h+var_4E8]; void *
0x40902B: mov     [esp+544h+var_4], 0FFFFFFFFh
0x409036: call    BSStringT_Clear
0x40903B: mov     esi, srcObj
0x409041: test    esi, esi
0x409043: jz      InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x409049: mov     edx, [esi]
0x40904B: mov     eax, [edx+174h]
0x409051: mov     ecx, esi
0x409053: call    eax
0x409055: fild    [esp+544h+var_50C]
0x409059: mov     ecx, [eax]
0x40905B: mov     edx, [eax+4]
0x40905E: mov     eax, [eax+8]
0x409061: mov     dword ptr [esp+544h+var_4F4], ecx
0x409065: push    0FFFFFFFFh; int
0x409067: push    3; int
0x409069: mov     ecx, 500h
0x40906E: sub     ecx, iDebugTextLeftRightOffset
0x409074: sub     esp, 8
0x409077: fstp    [esp+554h+Format+4]; float
0x40907B: mov     [esp+554h+var_508], ecx
0x40907F: fild    [esp+554h+var_508]
0x409083: mov     ecx, esi; this
0x409085: mov     dword ptr [esp+554h+var_4F4+4], edx
0x409089: mov     [esp+554h+var_4EC], eax
0x40908D: fstp    [esp+554h+Format]; float
0x409090: call    TESObjectREFR_GetName
0x409095: push    eax; int
0x409096: call    InterfaceMgr_DebugTextLine
0x40909B: add     [esp+558h+var_50C], ebx
0x40909F: mov     edx, [esi]
0x4090A1: mov     eax, [edx+190h]
0x4090A7: add     esp, 14h
0x4090AA: mov     ecx, esi
0x4090AC: call    eax
0x4090AE: test    al, al
0x4090B0: jz      short loc_409118
0x4090B2: mov     edx, [esi]
0x4090B4: mov     eax, [edx+1E0h]
0x4090BA: mov     ecx, esi
0x4090BC: call    eax
0x4090BE: fmul    ds:dbl_A30DC8
0x4090C4: sub     esp, 8
0x4090C7: lea     ecx, [esp+54Ch+Dest]
0x4090CE: fstp    qword ptr [esp+54Ch+Format+8]
0x4090D1: push    offset aHeading0_2f; "Heading %0.2f"
0x4090D6: push    ecx
0x4090D7: call    __sprintf
0x4090DC: fild    [esp+554h+var_50C]
0x4090E0: add     esp, 10h
0x4090E3: push    0FFFFFFFFh; int
0x4090E5: push    3; int
0x4090E7: mov     edx, 500h
0x4090EC: sub     edx, iDebugTextLeftRightOffset
0x4090F2: sub     esp, 8
0x4090F5: fstp    [esp+554h+Format+4]; float
0x4090F9: mov     [esp+554h+var_508], edx
0x4090FD: fild    [esp+554h+var_508]
0x409101: lea     eax, [esp+554h+Dest]
0x409108: fstp    [esp+554h+Format]; float
0x40910B: push    eax; int
0x40910C: call    InterfaceMgr_DebugTextLine
0x409111: add     esp, 14h
0x409114: add     [esp+544h+var_50C], ebx
0x409118: fld     [esp+544h+var_4EC]
0x40911C: sub     esp, 18h
0x40911F: fstp    qword ptr [esp+55Ch+Format+8]
0x409123: lea     ecx, [esp+55Ch+Dest]
0x40912A: fld     dword ptr [esp+55Ch+var_4F4+4]
0x40912E: fstp    qword ptr [esp+55Ch+Format]
0x409132: fld     dword ptr [esp+55Ch+var_4F4]
0x409136: fstp    qword ptr [esp+55Ch+var_55C]
0x409139: push    offset aPos_0f_0f_0f; "Pos: %.0f %.0f %.0f"
0x40913E: push    ecx
0x40913F: call    __sprintf
0x409144: fild    [esp+564h+var_50C]
0x409148: add     esp, 20h
0x40914B: push    0FFFFFFFFh; int
0x40914D: push    3; int
0x40914F: mov     edx, 500h
0x409154: sub     edx, iDebugTextLeftRightOffset
0x40915A: sub     esp, 8
0x40915D: fstp    [esp+554h+Format+4]; float
0x409161: mov     [esp+554h+var_508], edx
0x409165: fild    [esp+554h+var_508]
0x409169: lea     eax, [esp+554h+Dest]
0x409170: fstp    [esp+554h+Format]; float
0x409173: push    eax; int
0x409174: call    InterfaceMgr_DebugTextLine
0x409179: add     [esp+558h+var_50C], ebx
0x40917D: mov     edx, [esi]
0x40917F: mov     eax, [edx+154h]
0x409185: add     esp, 14h
0x409188: mov     ecx, esi
0x40918A: call    eax
0x40918C: test    eax, eax
0x40918E: jz      loc_40924B
0x409194: mov     edx, [esi]
0x409196: mov     eax, [edx+154h]
0x40919C: push    offset aBip01; "Bip01"
0x4091A1: mov     ecx, esi
0x4091A3: call    eax
0x4091A5: push    eax; a1
0x4091A6: call    NiObjectNET_LookupObjectByName
0x4091AB: push    eax
0x4091AC: push    offset dword_B3FAB0
0x4091B1: call    NiRTTI_Cast
0x4091B6: add     esp, 10h
0x4091B9: test    eax, eax
0x4091BB: jz      loc_40924B
0x4091C1: mov     ecx, [eax+88h]
0x4091C7: mov     edx, [eax+8Ch]
0x4091CD: mov     dword ptr [esp+544h+var_4F4], ecx
0x4091D1: mov     ecx, [eax+90h]
0x4091D7: sub     esp, 18h
0x4091DA: mov     [esp+55Ch+var_4EC], ecx
0x4091DE: fld     [esp+55Ch+var_4EC]
0x4091E2: fstp    qword ptr [esp+55Ch+Format+8]
0x4091E6: mov     dword ptr [esp+55Ch+var_4F4+4], edx
0x4091EA: fld     dword ptr [esp+55Ch+var_4F4+4]
0x4091EE: mov     edx, [eax+8]
0x4091F1: fstp    qword ptr [esp+55Ch+Format]
0x4091F5: lea     eax, [esp+55Ch+Dest]
0x4091FC: fld     dword ptr [esp+55Ch+var_4F4]
0x409200: fstp    qword ptr [esp+55Ch+var_55C]
0x409203: push    edx
0x409204: push    offset aSPos_0f_0f_0f; "%s Pos: %.0f %.0f %.0f"
0x409209: push    eax
0x40920A: call    __sprintf
0x40920F: fild    [esp+568h+var_50C]
0x409213: add     esp, 24h
0x409216: push    0FFFFFFFFh; int
0x409218: push    3; int
0x40921A: mov     ecx, 500h
0x40921F: sub     ecx, iDebugTextLeftRightOffset
0x409225: sub     esp, 8
0x409228: fstp    [esp+554h+Format+4]; float
0x40922C: mov     [esp+554h+var_508], ecx
0x409230: fild    [esp+554h+var_508]
0x409234: lea     edx, [esp+554h+Dest]
0x40923B: fstp    [esp+554h+Format]; float
0x40923E: push    edx; int
0x40923F: call    InterfaceMgr_DebugTextLine
0x409244: add     esp, 14h
0x409247: add     [esp+544h+var_50C], ebx
0x40924B: mov     ecx, g_worldScenegraph; this
0x409251: call    SceneGraph_GetChildNiAvNodeVtbl
0x409256: test    eax, eax
0x409258: jz      loc_4092E8
0x40925E: mov     ecx, [eax+88h]
0x409264: mov     edx, [eax+8Ch]
0x40926A: mov     dword ptr [esp+544h+var_4F4], ecx
0x40926E: mov     ecx, [eax+90h]
0x409274: sub     esp, 18h
0x409277: mov     [esp+55Ch+var_4EC], ecx
0x40927B: fld     [esp+55Ch+var_4EC]
0x40927F: fstp    qword ptr [esp+55Ch+Format+8]
0x409283: mov     dword ptr [esp+55Ch+var_4F4+4], edx
0x409287: fld     dword ptr [esp+55Ch+var_4F4+4]
0x40928B: mov     edx, [eax+8]
0x40928E: fstp    qword ptr [esp+55Ch+Format]
0x409292: lea     eax, [esp+55Ch+Dest]
0x409299: fld     dword ptr [esp+55Ch+var_4F4]
0x40929D: fstp    qword ptr [esp+55Ch+var_55C]
0x4092A0: push    edx
0x4092A1: push    offset aS_0f_0f_0f; "%s: %.0f %.0f %.0f"
0x4092A6: push    eax
0x4092A7: call    __sprintf
0x4092AC: fild    [esp+568h+var_50C]
0x4092B0: add     esp, 24h
0x4092B3: push    0FFFFFFFFh; int
0x4092B5: push    3; int
0x4092B7: mov     ecx, 500h
0x4092BC: sub     ecx, iDebugTextLeftRightOffset
0x4092C2: sub     esp, 8
0x4092C5: fstp    [esp+554h+Format+4]; float
0x4092C9: mov     [esp+554h+var_508], ecx
0x4092CD: fild    [esp+554h+var_508]
0x4092D1: lea     edx, [esp+554h+Dest]
0x4092D8: fstp    [esp+554h+Format]; float
0x4092DB: push    edx; int
0x4092DC: call    InterfaceMgr_DebugTextLine
0x4092E1: add     esp, 14h
0x4092E4: add     [esp+544h+var_50C], ebx
0x4092E8: mov     ecx, esi; this
0x4092EA: call    TESObjectREFR_GetParentCell
0x4092EF: test    eax, eax
0x4092F1: jz      loc_409379
0x4092F7: mov     ecx, esi; this
0x4092F9: call    TESObjectREFR_GetParentCell
0x4092FE: mov     ecx, esi; this
0x409300: mov     edi, eax
0x409302: call    TESObjectREFR_GetParentCell
0x409307: mov     ecx, eax; this
0x409309: call    TESObjectCELL_GetYCoordinate
0x40930E: push    eax
0x40930F: mov     ecx, esi; this
0x409311: call    TESObjectREFR_GetParentCell
0x409316: mov     ecx, eax; this
0x409318: call    TESObjectCELL_GetXCoordinate
0x40931D: push    eax
0x40931E: mov     eax, [edi]
0x409320: mov     edx, [eax+0D4h]
0x409326: mov     ecx, edi
0x409328: call    edx
0x40932A: push    eax
0x40932B: lea     eax, [esp+550h+Dest]
0x409332: push    offset aCellSDD; "Cell %s: %d %d"
0x409337: push    eax
0x409338: call    __sprintf
0x40933D: fild    [esp+558h+var_50C]
0x409341: add     esp, 14h
0x409344: push    0FFFFFFFFh; int
0x409346: push    3; int
0x409348: mov     ecx, 500h
0x40934D: sub     ecx, iDebugTextLeftRightOffset
0x409353: sub     esp, 8
0x409356: fstp    [esp+554h+Format+4]; float
0x40935A: mov     [esp+554h+var_508], ecx
0x40935E: fild    [esp+554h+var_508]
0x409362: lea     edx, [esp+554h+Dest]
0x409369: fstp    [esp+554h+Format]; float
0x40936C: push    edx; int
0x40936D: call    InterfaceMgr_DebugTextLine
0x409372: add     esp, 14h
0x409375: add     [esp+544h+var_50C], ebx
0x409379: mov     edi, [esp+544h+var_504]
0x40937D: test    edi, edi
0x40937F: jz      InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x409385: mov     eax, [edi+8]
0x409388: mov     ecx, eax
0x40938A: shr     ecx, 0Bh
0x40938D: test    cl, 1
0x409390: jnz     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x409396: shr     eax, 5
0x409399: test    al, 1
0x40939B: jnz     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x4093A1: mov     ecx, edi; this
0x4093A3: call    Actor__GetProcessLevel
0x4093A8: push    eax
0x4093A9: lea     edx, [esp+548h+Dest]
0x4093B0: push    offset aLevelD; "Level %d"
0x4093B5: push    edx
0x4093B6: call    __sprintf
0x4093BB: fild    [esp+550h+var_50C]
0x4093BF: add     esp, 0Ch
0x4093C2: push    0FFFFFFFFh; int
0x4093C4: push    3; int
0x4093C6: mov     eax, 500h
0x4093CB: sub     eax, iDebugTextLeftRightOffset
0x4093D1: sub     esp, 8
0x4093D4: fstp    [esp+554h+Format+4]; float
0x4093D8: mov     [esp+554h+var_508], eax
0x4093DC: fild    [esp+554h+var_508]
0x4093E0: lea     ecx, [esp+554h+Dest]
0x4093E7: fstp    [esp+554h+Format]; float
0x4093EA: push    ecx; int
0x4093EB: call    InterfaceMgr_DebugTextLine
0x4093F0: add     [esp+558h+var_50C], ebx
0x4093F4: add     esp, 14h
0x4093F7: mov     ecx, edi
0x4093F9: call    sub_5E0380
0x4093FE: test    eax, eax
0x409400: jz      short loc_409464
0x409402: mov     ecx, edi
0x409404: call    sub_5E0380
0x409409: mov     ecx, eax
0x40940B: call    TESForm__GetEditorNameLen
0x409410: test    eax, eax
0x409412: mov     ecx, edi
0x409414: jz      short loc_409447
0x409416: call    sub_5E0380
0x40941B: mov     edx, [eax]
0x40941D: mov     ecx, eax
0x40941F: mov     eax, [edx+0D4h]
0x409425: call    eax
0x409427: push    eax
0x409428: mov     ecx, edi
0x40942A: call    sub_5E4080
0x40942F: push    eax
0x409430: lea     ecx, [esp+54Ch+Dest]
0x409437: push    offset aPackageSS; "Package %s (%s)"
0x40943C: push    ecx
0x40943D: call    __sprintf
0x409442: add     esp, 10h
0x409445: jmp     short loc_409479
0x409447: call    sub_5E4080
0x40944C: push    eax
0x40944D: lea     edx, [esp+548h+Dest]
0x409454: push    offset aPackageS; "Package %s"
0x409459: push    edx
0x40945A: call    __sprintf
0x40945F: add     esp, 0Ch
0x409462: jmp     short loc_409479
0x409464: lea     eax, [esp+544h+Dest]
0x40946B: push    offset aPackageNone; "Package NONE"
0x409470: push    eax
0x409471: call    __sprintf
0x409476: add     esp, 8
0x409479: fild    [esp+544h+var_50C]
0x40947D: push    0FFFFFFFFh; int
0x40947F: push    3; int
0x409481: mov     ecx, 500h
0x409486: sub     ecx, iDebugTextLeftRightOffset
0x40948C: sub     esp, 8
0x40948F: fstp    [esp+554h+Format+4]; float
0x409493: mov     [esp+554h+var_508], ecx
0x409497: fild    [esp+554h+var_508]
0x40949B: lea     edx, [esp+554h+Dest]
0x4094A2: fstp    [esp+554h+Format]; float
0x4094A5: push    edx; int
0x4094A6: call    InterfaceMgr_DebugTextLine
0x4094AB: add     [esp+558h+var_50C], ebx
0x4094AF: mov     ecx, [edi+58h]
0x4094B2: mov     eax, [ecx]
0x4094B4: mov     edx, [eax+180h]
0x4094BA: add     esp, 14h
0x4094BD: call    edx
0x4094BF: mov     ecx, edi
0x4094C1: mov     esi, eax
0x4094C3: call    sub_5E0380
0x4094C8: test    eax, eax
0x4094CA: jz      short loc_409504
0x4094CC: mov     ecx, edi
0x4094CE: call    sub_5E0380
0x4094D3: cmp     dword ptr [eax+18h], 0FFFFFFFFh
0x4094D7: jz      short loc_409504
0x4094D9: mov     ecx, edi
0x4094DB: call    sub_5E0380
0x4094E0: mov     eax, [eax+18h]
0x4094E3: mov     ecx, off_B152B0[eax*4]
0x4094EA: mov     edx, [ecx+esi*4]
0x4094ED: mov     eax, proceudreNamesArray[edx*4]
0x4094F4: push    eax
0x4094F5: push    offset aProcedureCurre; "Procedure Current Pack %s"
0x4094FA: lea     ecx, [esp+54Ch+Dest]
0x409501: push    ecx
0x409502: jmp     short loc_409516
0x409504: push    offset aNone; "None"
0x409509: push    offset aProcedureCurre; "Procedure Current Pack %s"
0x40950E: lea     edx, [esp+54Ch+Dest]
0x409515: push    edx
0x409516: call    __sprintf
0x40951B: fild    [esp+550h+var_50C]
0x40951F: add     esp, 0Ch
0x409522: push    0FFFFFFFFh; int
0x409524: push    3; int
0x409526: mov     eax, 500h
0x40952B: sub     eax, iDebugTextLeftRightOffset
0x409531: sub     esp, 8
0x409534: fstp    [esp+554h+Format+4]; float
0x409538: mov     [esp+554h+var_508], eax
0x40953C: fild    [esp+554h+var_508]
0x409540: lea     ecx, [esp+554h+Dest]
0x409547: fstp    [esp+554h+Format]; float
0x40954A: push    ecx; int
0x40954B: call    InterfaceMgr_DebugTextLine
0x409550: add     esp, 14h
0x409553: mov     ecx, edi
0x409555: call    sub_5E03A0
0x40955A: add     [esp+544h+var_50C], ebx
0x40955E: mov     esi, eax
0x409560: test    esi, esi
0x409562: jz      short loc_40957A
0x409564: mov     ecx, esi
0x409566: call    sub_5660A0
0x40956B: test    al, al
0x40956D: jnz     short loc_40957A
0x40956F: mov     ecx, esi
0x409571: call    TESForm__GetEditorNameLen
0x409576: test    eax, eax
0x409578: jnz     short loc_4095A0
0x40957A: lea     ecx, [edi+44h]
0x40957D: call    ExtraDataList__GetExtraPackage
0x409582: test    eax, eax
0x409584: jz      short loc_4095C4
0x409586: lea     ecx, [edi+44h]
0x409589: call    ExtraDataList__GetExtraPackage
0x40958E: mov     esi, eax
0x409590: mov     edx, [esi]
0x409592: mov     eax, [edx+0D4h]
0x409598: mov     ecx, esi
0x40959A: call    eax
0x40959C: test    eax, eax
0x40959E: jz      short loc_4095D9
0x4095A0: mov     edx, [esi]
0x4095A2: mov     eax, [edx+0D4h]
0x4095A8: mov     ecx, esi
0x4095AA: call    eax
0x4095AC: push    eax
0x4095AD: lea     ecx, [esp+548h+Dest]
0x4095B4: push    offset aCurrentEditorP; "Current Editor Package %s"
0x4095B9: push    ecx
0x4095BA: call    __sprintf
0x4095BF: add     esp, 0Ch
0x4095C2: jmp     short loc_4095D9
0x4095C4: lea     edx, [esp+544h+Dest]
0x4095CB: push    offset aCurrentEdito_0; "Current Editor Package NONE"
0x4095D0: push    edx
0x4095D1: call    __sprintf
0x4095D6: add     esp, 8
0x4095D9: fild    [esp+544h+var_50C]
0x4095DD: push    0FFFFFFFFh; int
0x4095DF: push    3; int
0x4095E1: mov     eax, 500h
0x4095E6: sub     eax, iDebugTextLeftRightOffset
0x4095EC: sub     esp, 8
0x4095EF: fstp    [esp+554h+Format+4]; float
0x4095F3: mov     [esp+554h+var_508], eax
0x4095F7: fild    [esp+554h+var_508]
0x4095FB: lea     ecx, [esp+554h+Dest]
0x409602: fstp    [esp+554h+Format]; float
0x409605: push    ecx; int
0x409606: call    InterfaceMgr_DebugTextLine
0x40960B: add     [esp+558h+var_50C], ebx
0x40960F: add     esp, 14h
0x409612: test    esi, esi
0x409614: jz      short loc_409645
0x409616: mov     esi, [esi+18h]
0x409619: cmp     esi, 0FFFFFFFFh
0x40961C: jz      short loc_409645
0x40961E: mov     edx, [edi+58h]
0x409621: mov     eax, [edx+4]
0x409624: mov     ecx, off_B152B0[esi*4]
0x40962B: mov     edx, [ecx+eax*4]
0x40962E: mov     eax, proceudreNamesArray[edx*4]
0x409635: push    eax
0x409636: push    offset aProcedureEdito; "Procedure Editor Pack %s"
0x40963B: lea     ecx, [esp+54Ch+Dest]
0x409642: push    ecx
0x409643: jmp     short loc_409657
0x409645: push    offset aNone; "None"
0x40964A: push    offset aProcedureEdi_0; "Procedure Editor Pack  %s"
0x40964F: lea     edx, [esp+54Ch+Dest]
0x409656: push    edx
0x409657: call    __sprintf
0x40965C: fild    [esp+550h+var_50C]
0x409660: add     esp, 0Ch
0x409663: push    0FFFFFFFFh; int
0x409665: push    3; int
0x409667: mov     eax, 500h
0x40966C: sub     eax, iDebugTextLeftRightOffset
0x409672: sub     esp, 8
0x409675: fstp    [esp+554h+Format+4]; float
0x409679: mov     [esp+554h+var_508], eax
0x40967D: fild    [esp+554h+var_508]
0x409681: lea     ecx, [esp+554h+Dest]
0x409688: fstp    [esp+554h+Format]; float
0x40968B: push    ecx; int
0x40968C: call    InterfaceMgr_DebugTextLine
0x409691: add     [esp+558h+var_50C], ebx
0x409695: mov     edx, [edi]
0x409697: mov     eax, [edx+288h]
0x40969D: add     esp, 14h
0x4096A0: push    8
0x4096A2: mov     ecx, edi
0x4096A4: call    eax
0x4096A6: sub     esp, 8
0x4096A9: fstp    qword ptr [esp+54Ch+Format+8]
0x4096AC: lea     ecx, [esp+54Ch+Dest]
0x4096B3: push    offset aActorHealth_02; "Actor Health %.02f"
0x4096B8: push    ecx
0x4096B9: call    __sprintf
0x4096BE: fild    [esp+554h+var_50C]
0x4096C2: add     esp, 10h
0x4096C5: push    0FFFFFFFFh; int
0x4096C7: push    3; int
0x4096C9: mov     edx, 500h
0x4096CE: sub     edx, iDebugTextLeftRightOffset
0x4096D4: sub     esp, 8
0x4096D7: fstp    [esp+554h+Format+4]; float
0x4096DB: mov     [esp+554h+var_508], edx
0x4096DF: fild    [esp+554h+var_508]
0x4096E3: lea     eax, [esp+554h+Dest]
0x4096EA: fstp    [esp+554h+Format]; float
0x4096ED: push    eax; int
0x4096EE: call    InterfaceMgr_DebugTextLine
0x4096F3: add     [esp+558h+var_50C], ebx
0x4096F7: add     esp, 14h
0x4096FA: mov     ecx, edi
0x4096FC: call    sub_5E6830
0x409701: test    eax, eax
0x409703: jz      short loc_40974E
0x409705: mov     esi, [edi+58h]
0x409708: mov     ecx, edi
0x40970A: call    sub_5E6830
0x40970F: mov     ecx, [eax+0Ch]
0x409712: mov     edx, [esi]
0x409714: mov     eax, [edx+4D4h]
0x40971A: mov     [esp+544h+var_508], ecx
0x40971E: mov     ecx, esi
0x409720: call    eax
0x409722: mov     ecx, [esp+544h+var_508]
0x409726: push    eax
0x409727: push    ecx
0x409728: mov     ecx, edi
0x40972A: call    sub_5E6830
0x40972F: mov     ecx, eax; this
0x409731: call    TESObjectREFR_GetName
0x409736: push    eax
0x409737: lea     edx, [esp+550h+Dest]
0x40973E: push    offset aHeadingTargetS; "Heading Target: %s (%08X), (%s)"
0x409743: push    edx
0x409744: call    __sprintf
0x409749: add     esp, 14h
0x40974C: jmp     short loc_409771
0x40974E: mov     ecx, [edi+58h]
0x409751: mov     eax, [ecx]
0x409753: mov     edx, [eax+4D4h]
0x409759: call    edx
0x40975B: push    eax
0x40975C: lea     eax, [esp+548h+Dest]
0x409763: push    offset aHeadingTargetN; "Heading Target: (none) (%s)"
0x409768: push    eax
0x409769: call    __sprintf
0x40976E: add     esp, 0Ch
0x409771: fild    [esp+544h+var_50C]
0x409775: push    0FFFFFFFFh; int
0x409777: push    3; int
0x409779: mov     ecx, 500h
0x40977E: sub     ecx, iDebugTextLeftRightOffset
0x409784: sub     esp, 8
0x409787: fstp    [esp+554h+Format+4]; float
0x40978B: mov     [esp+554h+var_508], ecx
0x40978F: fild    [esp+554h+var_508]
0x409793: lea     edx, [esp+554h+Dest]
0x40979A: fstp    [esp+554h+Format]; float
0x40979D: push    edx; int
0x40979E: call    InterfaceMgr_DebugTextLine
0x4097A3: add     [esp+558h+var_50C], ebx
0x4097A7: mov     edi, [edi+58h]
0x4097AA: add     esp, 14h
0x4097AD: test    edi, edi
0x4097AF: jz      InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x4097B5: mov     eax, [edi]
0x4097B7: mov     edx, [eax+34Ch]
0x4097BD: mov     ecx, edi
0x4097BF: call    edx
0x4097C1: test    al, al
0x4097C3: jz      InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x4097C9: lea     eax, [esp+544h+Dest]
0x4097D0: push    offset aMovementIsStop; " Movement is stopped"
0x4097D5: push    eax
0x4097D6: call    __sprintf
0x4097DB: fild    [esp+54Ch+var_50C]
0x4097DF: add     esp, 8
0x4097E2: push    0FFFFFFFFh; int
0x4097E4: push    3; int
0x4097E6: mov     ecx, 500h
0x4097EB: sub     ecx, iDebugTextLeftRightOffset
0x4097F1: sub     esp, 8
0x4097F4: fstp    [esp+554h+Format+4]; float
0x4097F8: mov     [esp+554h+var_508], ecx
0x4097FC: fild    [esp+554h+var_508]
0x409800: lea     edx, [esp+554h+Dest]
0x409807: fstp    [esp+554h+Format]; float
0x40980A: push    edx; int
0x40980B: call    InterfaceMgr_DebugTextLine
0x409810: add     esp, 14h
0x409813: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x409818: mov     ecx, srcObj; jumptable 00407DFE case 1
0x40981E: test    ecx, ecx
0x409820: jz      loc_40A5E2
0x409826: mov     eax, [ecx]
0x409828: mov     edx, [eax+164h]
0x40982E: call    edx
0x409830: test    eax, eax
0x409832: mov     ecx, srcObj; this
0x409838: jz      loc_40A5E2
0x40983E: fild    [esp+544h+var_510]
0x409842: push    0FFFFFFFFh; int
0x409844: push    1; int
0x409846: sub     esp, 8
0x409849: fstp    [esp+554h+Format+4]; float
0x40984D: fild    iDebugTextLeftRightOffset
0x409853: fstp    [esp+554h+Format]; float
0x409856: call    TESObjectREFR_GetName
0x40985B: push    eax; int
0x40985C: call    InterfaceMgr_DebugTextLine
0x409861: mov     esi, [esp+558h+var_504]
0x409865: add     [esp+558h+var_510], ebx
0x409869: add     esp, 14h
0x40986C: test    esi, esi
0x40986E: jz      loc_40A141
0x409874: mov     ecx, [esi+58h]
0x409877: mov     eax, [ecx]
0x409879: mov     edx, [eax+8]
0x40987C: call    edx
0x40987E: test    eax, eax
0x409880: jnz     loc_40A141
0x409886: mov     [esp+544h+Dest], al
0x40988D: mov     ecx, [esi+58h]
0x409890: mov     eax, [ecx]
0x409892: mov     edx, [eax+2C0h]
0x409898: call    edx
0x40989A: movzx   edx, ax
0x40989D: test    edx, 100h
0x4098A3: jz      short loc_4098CD
0x4098A5: lea     eax, [esp+544h+Dest]
0x4098AC: add     eax, 0FFFFFFFFh
0x4098AF: nop
0x4098B0: mov     cl, [eax+1]
0x4098B3: add     eax, 1
0x4098B6: test    cl, cl
0x4098B8: jnz     short loc_4098B0
0x4098BA: mov     ecx, ds:dword_A307F0
0x4098C0: mov     [eax], ecx
0x4098C2: mov     cx, ds:word_A307F4
0x4098C9: mov     [eax+4], cx
0x4098CD: test    edx, 200h
0x4098D3: jz      short loc_4098FB
0x4098D5: lea     eax, [esp+544h+Dest]
0x4098DC: add     eax, 0FFFFFFFFh
0x4098DF: nop
0x4098E0: mov     cl, [eax+1]
0x4098E3: add     eax, 1
0x4098E6: test    cl, cl
0x4098E8: jnz     short loc_4098E0
0x4098EA: mov     ecx, ds:dword_A307E8
0x4098F0: mov     [eax], ecx
0x4098F2: mov     cl, ds:byte_A307EC
0x4098F8: mov     [eax+4], cl
0x4098FB: test    edx, 400h
0x409901: jz      short loc_409936
0x409903: lea     eax, [esp+544h+Dest]
0x40990A: add     eax, 0FFFFFFFFh
0x40990D: lea     ecx, [ecx+0]
0x409910: mov     cl, [eax+1]
0x409913: add     eax, 1
0x409916: test    cl, cl
0x409918: jnz     short loc_409910
0x40991A: mov     ecx, ds:dword_A307E0
0x409920: mov     [eax], ecx
0x409922: mov     cx, ds:word_A307E4
0x409929: mov     [eax+4], cx
0x40992D: mov     cl, ds:byte_A307E6
0x409933: mov     [eax+6], cl
0x409936: test    edx, 800h
0x40993C: jz      short loc_409965
0x40993E: lea     eax, [esp+544h+Dest]
0x409945: add     eax, 0FFFFFFFFh
0x409948: mov     cl, [eax+1]
0x40994B: add     eax, 1
0x40994E: test    cl, cl
0x409950: jnz     short loc_409948
0x409952: mov     ecx, ds:dword_A307D8
0x409958: mov     [eax], ecx
0x40995A: mov     cx, ds:word_A307DC
0x409961: mov     [eax+4], cx
0x409965: test    edx, 1000h
0x40996B: jz      short loc_409994
0x40996D: lea     eax, [esp+544h+Dest]
0x409974: add     eax, 0FFFFFFFFh
0x409977: mov     cl, [eax+1]
0x40997A: add     eax, 1
0x40997D: test    cl, cl
0x40997F: jnz     short loc_409977
0x409981: mov     ecx, ds:dword_A307D0
0x409987: mov     [eax], ecx
0x409989: mov     cx, ds:word_A307D4
0x409990: mov     [eax+4], cx
0x409994: test    edx, 2000h
0x40999A: jz      short loc_4099C1
0x40999C: lea     eax, [esp+544h+Dest]
0x4099A3: add     eax, 0FFFFFFFFh
0x4099A6: mov     cl, [eax+1]
0x4099A9: add     eax, 1
0x4099AC: test    cl, cl
0x4099AE: jnz     short loc_4099A6
0x4099B0: mov     ecx, ds:dword_A307C8
0x4099B6: mov     [eax], ecx
0x4099B8: mov     cl, ds:byte_A307CC
0x4099BE: mov     [eax+4], cl
0x4099C1: test    edx, 4000h
0x4099C7: jz      short loc_4099F0
0x4099C9: lea     eax, [esp+544h+Dest]
0x4099D0: add     eax, 0FFFFFFFFh
0x4099D3: mov     cl, [eax+1]
0x4099D6: add     eax, 1
0x4099D9: test    cl, cl
0x4099DB: jnz     short loc_4099D3
0x4099DD: mov     ecx, ds:dword_A307C0
0x4099E3: mov     [eax], ecx
0x4099E5: mov     cx, ds:word_A307C4
0x4099EC: mov     [eax+4], cx
0x4099F0: test    edx, 8000h
0x4099F6: jz      short loc_409A28
0x4099F8: lea     eax, [esp+544h+Dest]
0x4099FF: add     eax, 0FFFFFFFFh
0x409A02: mov     cl, [eax+1]
0x409A05: add     eax, 1
0x409A08: test    cl, cl
0x409A0A: jnz     short loc_409A02
0x409A0C: mov     ecx, ds:dword_A307B8
0x409A12: mov     [eax], ecx
0x409A14: mov     cx, ds:word_A307BC
0x409A1B: mov     [eax+4], cx
0x409A1F: mov     cl, ds:byte_A307BE
0x409A25: mov     [eax+6], cl
0x409A28: test    dl, 10h
0x409A2B: jz      short loc_409A5D
0x409A2D: lea     eax, [esp+544h+Dest]
0x409A34: add     eax, 0FFFFFFFFh
0x409A37: mov     cl, [eax+1]
0x409A3A: add     eax, 1
0x409A3D: test    cl, cl
0x409A3F: jnz     short loc_409A37
0x409A41: mov     ecx, ds:dword_A307AC
0x409A47: mov     [eax], ecx
0x409A49: mov     ecx, ds:dword_A307B0
0x409A4F: mov     [eax+4], ecx
0x409A52: mov     cx, ds:word_A307B4
0x409A59: mov     [eax+8], cx
0x409A5D: test    dl, 20h
0x409A60: jz      short loc_409A9F
0x409A62: lea     eax, [esp+544h+Dest]
0x409A69: add     eax, 0FFFFFFFFh
0x409A6C: lea     esp, [esp+0]
0x409A70: mov     cl, [eax+1]
0x409A73: add     eax, 1
0x409A76: test    cl, cl
0x409A78: jnz     short loc_409A70
0x409A7A: mov     ecx, ds:dword_A307A0
0x409A80: mov     [eax], ecx
0x409A82: mov     ecx, ds:dword_A307A4
0x409A88: mov     [eax+4], ecx
0x409A8B: mov     cx, ds:word_A307A8
0x409A92: mov     [eax+8], cx
0x409A96: mov     cl, ds:byte_A307AA
0x409A9C: mov     [eax+0Ah], cl
0x409A9F: test    dl, 1
0x409AA2: jz      short loc_409AD4
0x409AA4: lea     eax, [esp+544h+Dest]
0x409AAB: add     eax, 0FFFFFFFFh
0x409AAE: mov     edi, edi
0x409AB0: mov     cl, [eax+1]
0x409AB3: add     eax, 1
0x409AB6: test    cl, cl
0x409AB8: jnz     short loc_409AB0
0x409ABA: mov     ecx, ds:dword_A30794
0x409AC0: mov     [eax], ecx
0x409AC2: mov     ecx, ds:dword_A30798
0x409AC8: mov     [eax+4], ecx
0x409ACB: mov     cl, ds:byte_A3079C
0x409AD1: mov     [eax+8], cl
0x409AD4: test    dl, 2
0x409AD7: jz      short loc_409B09
0x409AD9: lea     eax, [esp+544h+Dest]
0x409AE0: add     eax, 0FFFFFFFFh
0x409AE3: mov     cl, [eax+1]
0x409AE6: add     eax, 1
0x409AE9: test    cl, cl
0x409AEB: jnz     short loc_409AE3
0x409AED: mov     ecx, ds:dword_A30788
0x409AF3: mov     [eax], ecx
0x409AF5: mov     ecx, ds:dword_A3078C
0x409AFB: mov     [eax+4], ecx
0x409AFE: mov     cx, ds:word_A30790
0x409B05: mov     [eax+8], cx
0x409B09: test    dl, 4
0x409B0C: jz      short loc_409B35
0x409B0E: lea     eax, [esp+544h+Dest]
0x409B15: add     eax, 0FFFFFFFFh
0x409B18: mov     cl, [eax+1]
0x409B1B: add     eax, 1
0x409B1E: test    cl, cl
0x409B20: jnz     short loc_409B18
0x409B22: mov     ecx, ds:dword_A30780
0x409B28: mov     [eax], ecx
0x409B2A: mov     cx, ds:word_A30784
0x409B31: mov     [eax+4], cx
0x409B35: test    dl, 8
0x409B38: jz      short loc_409B6A
0x409B3A: lea     eax, [esp+544h+Dest]
0x409B41: add     eax, 0FFFFFFFFh
0x409B44: mov     cl, [eax+1]
0x409B47: add     eax, 1
0x409B4A: test    cl, cl
0x409B4C: jnz     short loc_409B44
0x409B4E: mov     edx, ds:dword_A30778
0x409B54: mov     cx, ds:word_A3077C
0x409B5B: mov     [eax], edx
0x409B5D: mov     dl, ds:byte_A3077E
0x409B63: mov     [eax+4], cx
0x409B67: mov     [eax+6], dl
0x409B6A: mov     eax, [esi]
0x409B6C: mov     edx, [eax+380h]
0x409B72: mov     ecx, esi
0x409B74: call    edx
0x409B76: test    eax, eax
0x409B78: jz      loc_409F0A
0x409B7E: lea     eax, [esp+544h+Dest]
0x409B85: add     eax, 0FFFFFFFFh
0x409B88: mov     cl, [eax+1]
0x409B8B: add     eax, 1
0x409B8E: test    cl, cl
0x409B90: jnz     short loc_409B88
0x409B92: mov     ecx, ds:dword_A3076C
0x409B98: mov     edx, ds:dword_A30770
0x409B9E: mov     [eax], ecx
0x409BA0: mov     cl, ds:byte_A30774
0x409BA6: mov     [eax+4], edx
0x409BA9: mov     [eax+8], cl
0x409BAC: mov     ecx, [esp+544h+var_504]
0x409BB0: mov     edx, [ecx]
0x409BB2: mov     eax, [edx+380h]
0x409BB8: call    eax
0x409BBA: mov     ecx, eax; this
0x409BBC: call    TESObjectREFR_GetName
0x409BC1: mov     esi, eax
0x409BC3: mov     cl, [eax]
0x409BC5: add     eax, 1
0x409BC8: test    cl, cl
0x409BCA: jnz     short loc_409BC3
0x409BCC: lea     edi, [esp+544h+Dest]
0x409BD3: sub     eax, esi
0x409BD5: add     edi, 0FFFFFFFFh
0x409BD8: mov     cl, [edi+1]
0x409BDB: add     edi, 1
0x409BDE: test    cl, cl
0x409BE0: jnz     short loc_409BD8
0x409BE2: mov     ecx, eax
0x409BE4: shr     ecx, 2
0x409BE7: rep movsd
0x409BE9: mov     ecx, eax
0x409BEB: and     ecx, 3
0x409BEE: lea     eax, [esp+544h+Dest]
0x409BF5: rep movsb
0x409BF7: add     eax, 0FFFFFFFFh
0x409BFA: lea     ebx, [ebx+0]
0x409C00: mov     cl, [eax+1]
0x409C03: add     eax, 1
0x409C06: test    cl, cl
0x409C08: jnz     short loc_409C00
0x409C0A: mov     cx, ds:word_A30768
0x409C11: mov     dl, ds:byte_A3076A
0x409C17: mov     [eax], cx
0x409C1A: mov     ecx, [esp+544h+var_504]
0x409C1E: mov     [eax+2], dl
0x409C21: mov     eax, [ecx]
0x409C23: mov     edx, [eax+380h]
0x409C29: call    edx
0x409C2B: mov     ecx, [eax+58h]
0x409C2E: mov     eax, [ecx]
0x409C30: mov     edx, [eax+2C0h]
0x409C36: call    edx
0x409C38: movzx   edx, ax
0x409C3B: test    edx, 100h
0x409C41: jz      short loc_409C6D
0x409C43: lea     eax, [esp+544h+Dest]
0x409C4A: add     eax, 0FFFFFFFFh
0x409C4D: lea     ecx, [ecx+0]
0x409C50: mov     cl, [eax+1]
0x409C53: add     eax, 1
0x409C56: test    cl, cl
0x409C58: jnz     short loc_409C50
0x409C5A: mov     ecx, ds:dword_A307F0
0x409C60: mov     [eax], ecx
0x409C62: mov     cx, ds:word_A307F4
0x409C69: mov     [eax+4], cx
0x409C6D: test    edx, 200h
0x409C73: jz      short loc_409C9B
0x409C75: lea     eax, [esp+544h+Dest]
0x409C7C: add     eax, 0FFFFFFFFh
0x409C7F: nop
0x409C80: mov     cl, [eax+1]
0x409C83: add     eax, 1
0x409C86: test    cl, cl
0x409C88: jnz     short loc_409C80
0x409C8A: mov     ecx, ds:dword_A307E8
0x409C90: mov     [eax], ecx
0x409C92: mov     cl, ds:byte_A307EC
0x409C98: mov     [eax+4], cl
0x409C9B: test    edx, 400h
0x409CA1: jz      short loc_409CD6
0x409CA3: lea     eax, [esp+544h+Dest]
0x409CAA: add     eax, 0FFFFFFFFh
0x409CAD: lea     ecx, [ecx+0]
0x409CB0: mov     cl, [eax+1]
0x409CB3: add     eax, 1
0x409CB6: test    cl, cl
0x409CB8: jnz     short loc_409CB0
0x409CBA: mov     ecx, ds:dword_A307E0
0x409CC0: mov     [eax], ecx
0x409CC2: mov     cx, ds:word_A307E4
0x409CC9: mov     [eax+4], cx
0x409CCD: mov     cl, ds:byte_A307E6
0x409CD3: mov     [eax+6], cl
0x409CD6: test    edx, 800h
0x409CDC: jz      short loc_409D05
0x409CDE: lea     eax, [esp+544h+Dest]
0x409CE5: add     eax, 0FFFFFFFFh
0x409CE8: mov     cl, [eax+1]
0x409CEB: add     eax, 1
0x409CEE: test    cl, cl
0x409CF0: jnz     short loc_409CE8
0x409CF2: mov     ecx, ds:dword_A307D8
0x409CF8: mov     [eax], ecx
0x409CFA: mov     cx, ds:word_A307DC
0x409D01: mov     [eax+4], cx
0x409D05: test    edx, 1000h
0x409D0B: jz      short loc_409D34
0x409D0D: lea     eax, [esp+544h+Dest]
0x409D14: add     eax, 0FFFFFFFFh
0x409D17: mov     cl, [eax+1]
0x409D1A: add     eax, 1
0x409D1D: test    cl, cl
0x409D1F: jnz     short loc_409D17
0x409D21: mov     ecx, ds:dword_A307D0
0x409D27: mov     [eax], ecx
0x409D29: mov     cx, ds:word_A307D4
0x409D30: mov     [eax+4], cx
0x409D34: test    edx, 2000h
0x409D3A: jz      short loc_409D61
0x409D3C: lea     eax, [esp+544h+Dest]
0x409D43: add     eax, 0FFFFFFFFh
0x409D46: mov     cl, [eax+1]
0x409D49: add     eax, 1
0x409D4C: test    cl, cl
0x409D4E: jnz     short loc_409D46
0x409D50: mov     ecx, ds:dword_A307C8
0x409D56: mov     [eax], ecx
0x409D58: mov     cl, ds:byte_A307CC
0x409D5E: mov     [eax+4], cl
0x409D61: test    edx, 4000h
0x409D67: jz      short loc_409D90
0x409D69: lea     eax, [esp+544h+Dest]
0x409D70: add     eax, 0FFFFFFFFh
0x409D73: mov     cl, [eax+1]
0x409D76: add     eax, 1
0x409D79: test    cl, cl
0x409D7B: jnz     short loc_409D73
0x409D7D: mov     ecx, ds:dword_A307C0
0x409D83: mov     [eax], ecx
0x409D85: mov     cx, ds:word_A307C4
0x409D8C: mov     [eax+4], cx
0x409D90: test    edx, 8000h
0x409D96: jz      short loc_409DC8
0x409D98: lea     eax, [esp+544h+Dest]
0x409D9F: add     eax, 0FFFFFFFFh
0x409DA2: mov     cl, [eax+1]
0x409DA5: add     eax, 1
0x409DA8: test    cl, cl
0x409DAA: jnz     short loc_409DA2
0x409DAC: mov     ecx, ds:dword_A307B8
0x409DB2: mov     [eax], ecx
0x409DB4: mov     cx, ds:word_A307BC
0x409DBB: mov     [eax+4], cx
0x409DBF: mov     cl, ds:byte_A307BE
0x409DC5: mov     [eax+6], cl
0x409DC8: test    dl, 10h
0x409DCB: jz      short loc_409DFD
0x409DCD: lea     eax, [esp+544h+Dest]
0x409DD4: add     eax, 0FFFFFFFFh
0x409DD7: mov     cl, [eax+1]
0x409DDA: add     eax, 1
0x409DDD: test    cl, cl
0x409DDF: jnz     short loc_409DD7
0x409DE1: mov     ecx, ds:dword_A307AC
0x409DE7: mov     [eax], ecx
0x409DE9: mov     ecx, ds:dword_A307B0
0x409DEF: mov     [eax+4], ecx
0x409DF2: mov     cx, ds:word_A307B4
0x409DF9: mov     [eax+8], cx
0x409DFD: test    dl, 20h
0x409E00: jz      short loc_409E3F
0x409E02: lea     eax, [esp+544h+Dest]
0x409E09: add     eax, 0FFFFFFFFh
0x409E0C: lea     esp, [esp+0]
0x409E10: mov     cl, [eax+1]
0x409E13: add     eax, 1
0x409E16: test    cl, cl
0x409E18: jnz     short loc_409E10
0x409E1A: mov     ecx, ds:dword_A307A0
0x409E20: mov     [eax], ecx
0x409E22: mov     ecx, ds:dword_A307A4
0x409E28: mov     [eax+4], ecx
0x409E2B: mov     cx, ds:word_A307A8
0x409E32: mov     [eax+8], cx
0x409E36: mov     cl, ds:byte_A307AA
0x409E3C: mov     [eax+0Ah], cl
0x409E3F: test    dl, 1
0x409E42: jz      short loc_409E74
0x409E44: lea     eax, [esp+544h+Dest]
0x409E4B: add     eax, 0FFFFFFFFh
0x409E4E: mov     edi, edi
0x409E50: mov     cl, [eax+1]
0x409E53: add     eax, 1
0x409E56: test    cl, cl
0x409E58: jnz     short loc_409E50
0x409E5A: mov     ecx, ds:dword_A30794
0x409E60: mov     [eax], ecx
0x409E62: mov     ecx, ds:dword_A30798
0x409E68: mov     [eax+4], ecx
0x409E6B: mov     cl, ds:byte_A3079C
0x409E71: mov     [eax+8], cl
0x409E74: test    dl, 2
0x409E77: jz      short loc_409EA9
0x409E79: lea     eax, [esp+544h+Dest]
0x409E80: add     eax, 0FFFFFFFFh
0x409E83: mov     cl, [eax+1]
0x409E86: add     eax, 1
0x409E89: test    cl, cl
0x409E8B: jnz     short loc_409E83
0x409E8D: mov     ecx, ds:dword_A30788
0x409E93: mov     [eax], ecx
0x409E95: mov     ecx, ds:dword_A3078C
0x409E9B: mov     [eax+4], ecx
0x409E9E: mov     cx, ds:word_A30790
0x409EA5: mov     [eax+8], cx
0x409EA9: test    dl, 4
0x409EAC: jz      short loc_409ED5
0x409EAE: lea     eax, [esp+544h+Dest]
0x409EB5: add     eax, 0FFFFFFFFh
0x409EB8: mov     cl, [eax+1]
0x409EBB: add     eax, 1
0x409EBE: test    cl, cl
0x409EC0: jnz     short loc_409EB8
0x409EC2: mov     ecx, ds:dword_A30780
0x409EC8: mov     [eax], ecx
0x409ECA: mov     cx, ds:word_A30784
0x409ED1: mov     [eax+4], cx
0x409ED5: test    dl, 8
0x409ED8: jz      short loc_409F0A
0x409EDA: lea     eax, [esp+544h+Dest]
0x409EE1: add     eax, 0FFFFFFFFh
0x409EE4: mov     cl, [eax+1]
0x409EE7: add     eax, 1
0x409EEA: test    cl, cl
0x409EEC: jnz     short loc_409EE4
0x409EEE: mov     edx, ds:dword_A30778
0x409EF4: mov     cx, ds:word_A3077C
0x409EFB: mov     [eax], edx
0x409EFD: mov     dl, ds:byte_A3077E
0x409F03: mov     [eax+4], cx
0x409F07: mov     [eax+6], dl
0x409F0A: mov     esi, [esp+544h+var_504]
0x409F0E: mov     ecx, esi
0x409F10: call    Actor_GetCurrentAction
0x409F15: cmp     eax, 0FFFFFFFFh
0x409F18: jz      short loc_409F94
0x409F1A: lea     eax, [esp+544h+Dest]
0x409F21: add     eax, 0FFFFFFFFh
0x409F24: mov     cl, [eax+1]
0x409F27: add     eax, 1
0x409F2A: test    cl, cl
0x409F2C: jnz     short loc_409F24
0x409F2E: mov     ecx, ds:dword_A3075C
0x409F34: mov     edx, ds:dword_A30760
0x409F3A: mov     [eax], ecx
0x409F3C: mov     cx, ds:word_A30764
0x409F43: mov     [eax+4], edx
0x409F46: mov     dl, ds:byte_A30766
0x409F4C: mov     [eax+8], cx
0x409F50: mov     ecx, esi
0x409F52: mov     [eax+0Ah], dl
0x409F55: call    Actor_GetCurrentAction
0x409F5A: mov     eax, off_B14C80[eax*4]; "Equip Weapon"
0x409F61: mov     esi, eax
0x409F63: mov     cl, [eax]
0x409F65: add     eax, 1
0x409F68: test    cl, cl
0x409F6A: jnz     short loc_409F63
0x409F6C: lea     edi, [esp+544h+Dest]
0x409F73: sub     eax, esi
0x409F75: add     edi, 0FFFFFFFFh
0x409F78: mov     cl, [edi+1]
0x409F7B: add     edi, 1
0x409F7E: test    cl, cl
0x409F80: jnz     short loc_409F78
0x409F82: mov     ecx, eax
0x409F84: shr     ecx, 2
0x409F87: rep movsd
0x409F89: mov     ecx, eax
0x409F8B: and     ecx, 3
0x409F8E: rep movsb
0x409F90: mov     esi, [esp+544h+var_504]
0x409F94: mov     ecx, esi; this
0x409F96: mov     [esp+544h+var_4B4], offset aOnground; "OnGround"
0x409FA1: mov     [esp+544h+var_4B0], offset aJumping; "Jumping"
0x409FAC: mov     [esp+544h+var_4AC], offset aInair; "InAir"
0x409FB7: mov     [esp+544h+var_4A8], offset aClimbing; "Climbing"
0x409FC2: mov     [esp+544h+var_4A4], offset aFlying; "Flying"
0x409FCD: mov     [esp+544h+var_4A0], offset aSwimming; "Swimming"
0x409FD8: mov     [esp+544h+var_49C], offset aProjectile; "Projectile"
0x409FE3: mov     [esp+544h+var_498], offset aUserstate2; "UserState2"
0x409FEE: mov     [esp+544h+var_494], offset aUserstate3; "UserState3"
0x409FF9: mov     [esp+544h+var_490], offset aUserstate4; "UserState4"
0x40A004: mov     [esp+544h+var_48C], offset aUserstate5; "UserState5"
0x40A00F: call    MobileObject_GetCharProxy
0x40A014: mov     edi, eax
0x40A016: test    edi, edi
0x40A018: jz      short loc_40A094
0x40A01A: lea     ecx, [esp+544h+Dest]
0x40A021: add     ecx, 0FFFFFFFFh
0x40A024: mov     dl, [ecx+1]
0x40A027: add     ecx, 1
0x40A02A: test    dl, dl
0x40A02C: jnz     short loc_40A024
0x40A02E: mov     eax, ds:dword_A306D4
0x40A033: mov     edx, ds:dword_A306D8
0x40A039: mov     [ecx], eax
0x40A03B: mov     eax, ds:dword_A306DC
0x40A040: mov     [ecx+4], edx
0x40A043: mov     dl, ds:byte_A306E0
0x40A049: mov     [ecx+8], eax
0x40A04C: mov     [ecx+0Ch], dl
0x40A04F: lea     ecx, [edi+1E0h]
0x40A055: call    sub_88D370
0x40A05A: mov     eax, [esp+eax*4+544h+var_4B4]
0x40A061: mov     esi, eax
0x40A063: mov     cl, [eax]
0x40A065: add     eax, 1
0x40A068: test    cl, cl
0x40A06A: jnz     short loc_40A063
0x40A06C: lea     edi, [esp+544h+Dest]
0x40A073: sub     eax, esi
0x40A075: add     edi, 0FFFFFFFFh
0x40A078: mov     cl, [edi+1]
0x40A07B: add     edi, 1
0x40A07E: test    cl, cl
0x40A080: jnz     short loc_40A078
0x40A082: mov     ecx, eax
0x40A084: shr     ecx, 2
0x40A087: rep movsd
0x40A089: mov     ecx, eax
0x40A08B: and     ecx, 3
0x40A08E: rep movsb
0x40A090: mov     esi, [esp+544h+var_504]
0x40A094: fild    [esp+544h+var_510]
0x40A098: push    0FFFFFFFFh; int
0x40A09A: push    1; int
0x40A09C: sub     esp, 8
0x40A09F: cmp     [esp+554h+Dest], 0
0x40A0A7: fstp    [esp+554h+Format+4]; float
0x40A0AB: fild    iDebugTextLeftRightOffset
0x40A0B1: fstp    [esp+554h+Format]; float
0x40A0B4: jz      short loc_40A0C0
0x40A0B6: lea     eax, [esp+554h+Dest]
0x40A0BD: push    eax
0x40A0BE: jmp     short loc_40A0C5
0x40A0C0: push    offset EmptyString; int
0x40A0C5: call    InterfaceMgr_DebugTextLine
0x40A0CA: add     [esp+558h+var_510], ebx
0x40A0CE: mov     eax, [esi+58h]
0x40A0D1: mov     ecx, [eax+1ECh]
0x40A0D7: add     esp, 14h
0x40A0DA: test    ecx, ecx
0x40A0DC: jz      short loc_40A100
0x40A0DE: mov     ecx, [ecx+40h]
0x40A0E1: mov     edx, [eax+1F0h]
0x40A0E7: push    ecx
0x40A0E8: push    edx
0x40A0E9: lea     eax, [esp+54Ch+Dest]
0x40A0F0: push    offset aBonelodDOfD; "BoneLOD %d of %d"
0x40A0F5: push    eax
0x40A0F6: call    __sprintf
0x40A0FB: add     esp, 10h
0x40A0FE: jmp     short loc_40A115
0x40A100: lea     ecx, [esp+544h+Dest]
0x40A107: push    offset aBonelodNone; "BoneLOD NONE"
0x40A10C: push    ecx
0x40A10D: call    __sprintf
0x40A112: add     esp, 8
0x40A115: fild    [esp+544h+var_510]
0x40A119: push    0FFFFFFFFh; int
0x40A11B: push    1; int
0x40A11D: sub     esp, 8
0x40A120: fstp    [esp+554h+Format+4]; float
0x40A124: lea     edx, [esp+554h+Dest]
0x40A12B: fild    iDebugTextLeftRightOffset
0x40A131: fstp    [esp+554h+Format]; float
0x40A134: push    edx; int
0x40A135: call    InterfaceMgr_DebugTextLine
0x40A13A: add     esp, 14h
0x40A13D: add     [esp+544h+var_510], ebx
0x40A141: mov     ecx, srcObj
0x40A147: mov     eax, TESDataHandler_g_PlayerRef
0x40A14C: cmp     ecx, eax
0x40A14E: mov     [esp+544h+var_500], 1
0x40A156: jnz     loc_40A22D
0x40A15C: cmp     dword ptr [eax+5D8h], 0
0x40A163: jnz     short loc_40A175
0x40A165: mov     [esp+544h+var_500], 2
0x40A16D: jmp     short loc_40A175
0x40A16F: align 10h
0x40A170: mov     eax, TESDataHandler_g_PlayerRef
0x40A175: cmp     ecx, eax
0x40A177: jnz     loc_40A22D
0x40A17D: cmp     dword ptr [eax+5D8h], 0
0x40A184: jz      short loc_40A1C2
0x40A186: mov     ecx, ds:dword_A306A0
0x40A18C: mov     edx, ds:dword_A306A4
0x40A192: mov     dword ptr [esp+544h+Dest], ecx
0x40A199: mov     ecx, ds:dword_A306A8
0x40A19F: mov     [esp+544h+var_10C], edx
0x40A1A6: mov     dl, ds:byte_A306AC
0x40A1AC: mov     [esp+544h+var_108], ecx
0x40A1B3: mov     [esp+544h+var_104], dl
0x40A1BA: mov     edi, [eax+5DCh]
0x40A1C0: jmp     short loc_40A1FF
0x40A1C2: mov     esi, [esp+544h+var_500]
0x40A1C6: cmp     esi, 2
0x40A1C9: mov     eax, offset off_A3069C
0x40A1CE: jz      short loc_40A1D5
0x40A1D0: mov     eax, offset off_A30698
0x40A1D5: push    eax
0x40A1D6: lea     eax, [esp+548h+Dest]
0x40A1DD: push    offset aSPerson; "%s Person"
0x40A1E2: push    eax
0x40A1E3: call    __sprintf
0x40A1E8: add     esp, 0Ch
0x40A1EB: cmp     esi, 2
0x40A1EE: setz    cl
0x40A1F1: push    ecx; a2
0x40A1F2: mov     ecx, TESDataHandler_g_PlayerRef; this
0x40A1F8: call    Player_GetAnimData
0x40A1FD: mov     edi, eax
0x40A1FF: fild    [esp+544h+var_510]
0x40A203: push    0FFFFFFFFh; int
0x40A205: push    1; int
0x40A207: sub     esp, 8
0x40A20A: fstp    [esp+554h+Format+4]; float
0x40A20E: lea     edx, [esp+554h+Dest]
0x40A215: fild    iDebugTextLeftRightOffset
0x40A21B: fstp    [esp+554h+Format]; float
0x40A21E: push    edx; int
0x40A21F: call    InterfaceMgr_DebugTextLine
0x40A224: add     esp, 14h
0x40A227: add     [esp+544h+var_510], ebx
0x40A22B: jmp     short loc_40A239
0x40A22D: mov     eax, [ecx]
0x40A22F: mov     edx, [eax+164h]
0x40A235: call    edx
0x40A237: mov     edi, eax
0x40A239: xor     esi, esi
0x40A23B: mov     [esp+544h+var_4F8], esi
0x40A23F: nop
0x40A240: push    esi
0x40A241: mov     ecx, edi
0x40A243: call    sub_4706E0
0x40A248: test    eax, eax
0x40A24A: mov     [esp+544h+var_508], eax
0x40A24E: jz      loc_40A2F2
0x40A254: mov     eax, [esp+544h+var_4F8]
0x40A258: push    eax
0x40A259: mov     ecx, edi
0x40A25B: call    ActorAnimData_GetAnimGroupFromField8Value
0x40A260: mov     ecx, [esp+544h+var_508]
0x40A264: movzx   esi, ax
0x40A267: mov     eax, [ecx+0Ch]
0x40A26A: push    eax
0x40A26B: push    esi
0x40A26C: call    sub_51AA00
0x40A271: lea     edx, [eax+eax*8]
0x40A274: mov     eax, animGroupInfos_ptr[edx*4]
0x40A27B: add     esp, 4
0x40A27E: push    eax
0x40A27F: push    esi
0x40A280: call    sub_51A9E0
0x40A285: mov     ecx, off_B102C8[eax*4]
0x40A28C: add     esp, 4
0x40A28F: push    ecx
0x40A290: push    esi
0x40A291: call    sub_51A9D0
0x40A296: mov     edx, off_B102B8[eax*4]
0x40A29D: mov     eax, [esp+554h+var_4F8]
0x40A2A1: mov     ecx, off_B108EC[eax*4]; "LowerBody"
0x40A2A8: add     esp, 4
0x40A2AB: push    edx
0x40A2AC: push    ecx
0x40A2AD: lea     edx, [esp+558h+Dest]
0x40A2B4: push    offset aSSSSCountD; "%s -> %s/%s/%s, Count: %d"
0x40A2B9: push    edx
0x40A2BA: call    __sprintf
0x40A2BF: fild    [esp+560h+var_510]
0x40A2C3: add     esp, 1Ch
0x40A2C6: push    0FFFFFFFFh; int
0x40A2C8: push    1; int
0x40A2CA: sub     esp, 8
0x40A2CD: fstp    [esp+554h+Format+4]; float
0x40A2D1: lea     eax, [esp+554h+Dest]
0x40A2D8: fild    iDebugTextLeftRightOffset
0x40A2DE: fstp    [esp+554h+Format]; float
0x40A2E1: push    eax; int
0x40A2E2: call    InterfaceMgr_DebugTextLine
0x40A2E7: mov     esi, [esp+558h+var_4F8]
0x40A2EB: add     esp, 14h
0x40A2EE: add     [esp+544h+var_510], ebx
0x40A2F2: add     esi, 1
0x40A2F5: cmp     esi, 5
0x40A2F8: mov     [esp+544h+var_4F8], esi
0x40A2FC: jl      loc_40A240
0x40A302: mov     ecx, dword ptr Vector3_InitValue?
0x40A308: mov     edx, dword ptr Vector3_InitValue?+4
0x40A30E: mov     eax, dword_B3F9B0
0x40A313: xor     esi, esi
0x40A315: cmp     [esp+544h+var_504], esi
0x40A319: mov     dword ptr [esp+544h+var_4F4], ecx
0x40A31D: mov     dword ptr [esp+544h+var_4F4+4], edx
0x40A321: mov     [esp+544h+var_4EC], eax
0x40A325: jz      loc_40A3C6
0x40A32B: push    esi
0x40A32C: mov     ecx, edi
0x40A32E: call    ActorAnimData_GetAnimGroupFromField8Value
0x40A333: push    eax
0x40A334: call    sub_51AA00
0x40A339: mov     esi, [esp+548h+var_504]
0x40A33D: mov     ecx, [esi+58h]
0x40A340: mov     edx, [ecx]
0x40A342: add     eax, 0FFFFFFF9h
0x40A345: add     esp, 4
0x40A348: cmp     eax, 3
0x40A34B: mov     eax, [edx+2C0h]
0x40A351: ja      short loc_40A389
0x40A353: call    eax
0x40A355: test    ax, 800h
0x40A359: jz      short loc_40A364
0x40A35B: mov     ecx, esi
0x40A35D: call    sub_5E3AD0
0x40A362: jmp     short loc_40A3BF
0x40A364: mov     ecx, [esi+58h]
0x40A367: mov     edx, [ecx]
0x40A369: mov     eax, [edx+2C0h]
0x40A36F: call    eax
0x40A371: test    ax, 2000h
0x40A375: mov     ecx, [esp+544h+var_504]
0x40A379: jz      short loc_40A382
0x40A37B: call    sub_5E3C80
0x40A380: jmp     short loc_40A3BF
0x40A382: call    sub_5E3750
0x40A387: jmp     short loc_40A3BF
0x40A389: call    eax
0x40A38B: test    ax, 800h
0x40A38F: jz      short loc_40A39C
0x40A391: mov     ecx, [esp+544h+var_504]
0x40A395: call    sub_5E3920
0x40A39A: jmp     short loc_40A3BF
0x40A39C: mov     ecx, [esi+58h]
0x40A39F: mov     edx, [ecx]
0x40A3A1: mov     eax, [edx+2C0h]
0x40A3A7: call    eax
0x40A3A9: test    ax, 2000h
0x40A3AD: mov     ecx, [esp+544h+var_504]
0x40A3B1: jz      short loc_40A3BA
0x40A3B3: call    sub_5E3C80
0x40A3B8: jmp     short loc_40A3BF
0x40A3BA: call    sub_5E3590
0x40A3BF: call    Double_To_SInt32
0x40A3C4: mov     esi, eax
0x40A3C6: push    0
0x40A3C8: mov     ecx, edi
0x40A3CA: call    ActorAnimData_GetAnimGroupFromField8Value
0x40A3CF: mov     edx, srcObj
0x40A3D5: push    0
0x40A3D7: movzx   ecx, ax
0x40A3DA: push    0
0x40A3DC: push    edx
0x40A3DD: lea     eax, [esp+550h+var_4F4]
0x40A3E1: mov     [esp+550h+var_508], ecx
0x40A3E5: push    eax
0x40A3E6: mov     ecx, edi
0x40A3E8: call    sub_4723A0
0x40A3ED: lea     ecx, [esp+544h+var_4F4]
0x40A3F1: fld     dword ptr [edi+0C0h]
0x40A3F7: fstp    [esp+544h+var_4F8]
0x40A3FB: fld     dword ptr [edi+0BCh]
0x40A401: fstp    [esp+544h+var_4D4]
0x40A405: fld     dword ptr [edi+94h]
0x40A40B: fstp    [esp+544h+var_4FC]
0x40A40F: call    sub_404C90
0x40A414: mov     ecx, [esp+544h+var_508]
0x40A418: sub     esp, 8
0x40A41B: fstp    qword ptr [esp+54Ch+Format+8]
0x40A41E: push    esi
0x40A41F: push    ecx
0x40A420: mov     ecx, edi
0x40A422: call    sub_472330
0x40A427: fld     [esp+550h+var_4F8]
0x40A42B: movsx   edx, ax
0x40A42E: push    edx
0x40A42F: sub     esp, 18h
0x40A432: lea     eax, [esp+56Ch+Dest]
0x40A439: fstp    qword ptr [esp+56Ch+var_55C]
0x40A43D: fld     [esp+56Ch+var_4D4]
0x40A444: fstp    qword ptr [esp+56Ch+var_564]
0x40A448: fld     [esp+56Ch+var_4FC]
0x40A44C: fstp    [esp+56Ch+var_56C]
0x40A44F: push    offset aTime_2fMove_1f; "time %.2f move %.1f attack %.1f speed %"...
0x40A454: push    eax
0x40A455: call    __sprintf
0x40A45A: fild    [esp+574h+var_510]
0x40A45E: add     esp, 30h
0x40A461: push    0FFFFFFFFh; int
0x40A463: push    1; int
0x40A465: sub     esp, 8
0x40A468: fstp    [esp+554h+Format+4]; float
0x40A46C: lea     ecx, [esp+554h+Dest]
0x40A473: fild    iDebugTextLeftRightOffset
0x40A479: fstp    [esp+554h+Format]; float
0x40A47C: push    ecx; int
0x40A47D: call    InterfaceMgr_DebugTextLine
0x40A482: add     [esp+558h+var_510], ebx
0x40A486: add     esp, 14h
0x40A489: mov     ecx, edi
0x40A48B: call    sub_474BD0
0x40A490: mov     esi, eax
0x40A492: test    esi, esi
0x40A494: jz      loc_40A5D1
0x40A49A: lea     ebx, [ebx+0]
0x40A4A0: mov     eax, [esi+14h]
0x40A4A3: fld     ds:flt_A30634
0x40A4A9: mov     ecx, [eax+8]
0x40A4AC: fstp    [esp+544h+var_4F8]
0x40A4B0: test    ecx, ecx
0x40A4B2: jz      short loc_40A4C7
0x40A4B4: movzx   eax, byte ptr [eax+0Ch]
0x40A4B8: cmp     al, [ecx+0Dh]
0x40A4BB: jnb     short loc_40A4C7
0x40A4BD: push    eax
0x40A4BE: call    sub_404E90
0x40A4C3: fstp    [esp+544h+var_4F8]
0x40A4C7: fld     dword ptr [edi+94h]
0x40A4CD: push    ecx
0x40A4CE: fstp    [esp+548h+var_4FC]
0x40A4D2: mov     ecx, esi
0x40A4D4: fld     [esp+548h+var_4FC]
0x40A4D8: fstp    [esp+548h+var_548]; float
0x40A4DB: call    sub_49F4A0
0x40A4E0: fld     ds:flt_A7DEB4
0x40A4E6: mov     ecx, [esi+44h]
0x40A4E9: mov     edx, [esi+8]
0x40A4EC: fchs
0x40A4EE: mov     ecx, off_B02C58[ecx*4]; "INACTIVE"
0x40A4F5: fucompp
0x40A4F7: sub     esp, 8
0x40A4FA: fnstsw  ax
0x40A4FC: test    ah, 44h
0x40A4FF: mov     eax, [esi+24h]
0x40A502: mov     eax, off_B02C74[eax*4]; "LOOP"
0x40A509: jp      short loc_40A53E
0x40A50B: fld     [esp+54Ch+var_4F8]
0x40A50F: mov     [esp+54Ch+var_4FC], edx
0x40A513: fstp    qword ptr [esp+54Ch+Format+8]
0x40A516: push    eax
0x40A517: push    ecx
0x40A518: push    esi
0x40A519: call    sub_470CE0
0x40A51E: mov     edx, [esp+558h+var_4FC]
0x40A522: push    ecx
0x40A523: fstp    qword ptr [esp+55Ch+var_55C]
0x40A526: push    edx
0x40A527: lea     eax, [esp+560h+Dest]
0x40A52E: push    offset aSTimeInf_2fSta; "'%s' time -INF/%.2f state %s/%s ease %."...
0x40A533: push    eax
0x40A534: call    __sprintf
0x40A539: add     esp, 24h
0x40A53C: jmp     short loc_40A593
0x40A53E: fld     dword ptr [edi+94h]
0x40A544: mov     [esp+54Ch+var_4D4], edx
0x40A548: fstp    [esp+54Ch+var_4FC]
0x40A54C: fld     [esp+54Ch+var_4F8]
0x40A550: fstp    qword ptr [esp+54Ch+Format+8]
0x40A553: push    eax
0x40A554: push    ecx
0x40A555: push    esi
0x40A556: call    sub_470CE0
0x40A55B: sub     esp, 8
0x40A55E: fstp    qword ptr [esp+560h+var_55C]
0x40A562: mov     ecx, esi
0x40A564: fld     [esp+560h+var_4FC]
0x40A568: fstp    [esp+560h+var_564+4]; float
0x40A56B: call    sub_49F4A0
0x40A570: mov     edx, [esp+55Ch+var_4D4]
0x40A577: sub     esp, 8
0x40A57A: fstp    qword ptr [esp+564h+var_564]
0x40A57D: push    edx
0x40A57E: lea     eax, [esp+568h+Dest]
0x40A585: push    offset aSTime_2f_2fSta; "'%s' time %.2f/%.2f state %s/%s ease %."...
0x40A58A: push    eax
0x40A58B: call    __sprintf
0x40A590: add     esp, 2Ch
0x40A593: fild    [esp+544h+var_510]
0x40A597: push    0FFFFFFFFh; int
0x40A599: push    1; int
0x40A59B: sub     esp, 8
0x40A59E: fstp    [esp+554h+Format+4]; float
0x40A5A2: lea     ecx, [esp+554h+Dest]
0x40A5A9: fild    iDebugTextLeftRightOffset
0x40A5AF: fstp    [esp+554h+Format]; float
0x40A5B2: push    ecx; int
0x40A5B3: call    InterfaceMgr_DebugTextLine
0x40A5B8: add     [esp+558h+var_510], ebx
0x40A5BC: add     esp, 14h
0x40A5BF: push    esi
0x40A5C0: mov     ecx, edi
0x40A5C2: call    sub_472690
0x40A5C7: mov     esi, eax
0x40A5C9: test    esi, esi
0x40A5CB: jnz     loc_40A4A0
0x40A5D1: sub     [esp+544h+var_500], 1
0x40A5D6: mov     ecx, srcObj
0x40A5DC: jnz     loc_40A170
0x40A5E2: cmp     [esp+544h+var_504], 0
0x40A5E7: jnz     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40A5ED: mov     esi, ecx
0x40A5EF: test    esi, esi
0x40A5F1: mov     [esp+544h+var_4F8], esi
0x40A5F5: jz      InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40A5FB: xor     eax, eax
0x40A5FD: mov     [esp+544h+var_504], eax
0x40A601: test    eax, eax
0x40A603: jnz     short loc_40A682
0x40A605: mov     edx, [esi]
0x40A607: mov     eax, [edx+154h]
0x40A60D: mov     ecx, esi
0x40A60F: call    eax
0x40A611: test    eax, eax
0x40A613: jz      loc_40A81B
0x40A619: mov     edx, [esi]
0x40A61B: mov     eax, [edx+154h]
0x40A621: push    0
0x40A623: mov     ecx, esi
0x40A625: call    eax
0x40A627: mov     ecx, eax
0x40A629: call    sub_405790
0x40A62E: test    eax, eax
0x40A630: jz      loc_40A81B
0x40A636: mov     edx, [esi]
0x40A638: mov     eax, [edx+154h]
0x40A63E: push    0
0x40A640: mov     ecx, esi
0x40A642: call    eax
0x40A644: mov     ecx, eax
0x40A646: call    sub_405790
0x40A64B: cmp     dword ptr [eax+0Ch], 0
0x40A64F: jz      loc_40A81B
0x40A655: mov     ecx, [esp+544h+var_4F8]
0x40A659: mov     edx, [ecx]
0x40A65B: mov     eax, [edx+154h]
0x40A661: push    0
0x40A663: call    eax
0x40A665: mov     ecx, eax
0x40A667: call    sub_405790
0x40A66C: mov     eax, [eax+0Ch]
0x40A66F: push    eax
0x40A670: push    offset stru_B3CAC0
0x40A675: call    NiRTTI_Cast
0x40A67A: mov     edi, eax
0x40A67C: mov     [esp+54Ch+var_508], edi
0x40A680: jmp     short loc_40A6B3
0x40A682: cmp     eax, 1
0x40A685: jnz     loc_40A823
0x40A68B: mov     edx, [esi]
0x40A68D: mov     eax, [edx+154h]
0x40A693: mov     ecx, esi
0x40A695: call    eax
0x40A697: test    eax, eax
0x40A699: jz      short loc_40A6A0
0x40A69B: mov     eax, [eax+0Ch]
0x40A69E: jmp     short loc_40A6A2
0x40A6A0: xor     eax, eax
0x40A6A2: push    eax
0x40A6A3: push    offset stru_B3CAC0
0x40A6A8: call    NiRTTI_Cast
0x40A6AD: mov     edi, eax
0x40A6AF: mov     [esp+54Ch+var_508], eax
0x40A6B3: add     esp, 8
0x40A6B6: test    edi, edi
0x40A6B8: jz      loc_40A81B
0x40A6BE: cmp     word ptr [edi+46h], 0
0x40A6C3: mov     [esp+544h+var_500], 0
0x40A6CB: jbe     loc_40A7F2
0x40A6D1: mov     eax, [esp+544h+var_500]
0x40A6D5: mov     ecx, [edi+40h]
0x40A6D8: mov     esi, [ecx+eax*4]
0x40A6DB: test    esi, esi
0x40A6DD: jz      loc_40A7DF
0x40A6E3: cmp     dword ptr [esi+44h], 0
0x40A6E7: jz      loc_40A7DF
0x40A6ED: fld     flt_B33A30
0x40A6F3: push    ecx
0x40A6F4: mov     ecx, esi
0x40A6F6: fstp    [esp+548h+var_548]; float
0x40A6F9: call    sub_49F4A0
0x40A6FE: fld     ds:flt_A7DEB4
0x40A704: mov     ecx, [esi+44h]
0x40A707: fchs
0x40A709: fucompp
0x40A70B: fnstsw  ax
0x40A70D: test    ah, 44h
0x40A710: jp      short loc_40A74C
0x40A712: mov     edx, [esi+24h]
0x40A715: fld     dword ptr [esi+30h]
0x40A718: mov     eax, off_B02C74[edx*4]; "LOOP"
0x40A71F: fsub    dword ptr [esi+2Ch]
0x40A722: mov     edx, off_B02C58[ecx*4]; "INACTIVE"
0x40A729: push    eax
0x40A72A: mov     eax, [esi+8]
0x40A72D: push    edx
0x40A72E: sub     esp, 8
0x40A731: fstp    qword ptr [esp+554h+Format]
0x40A734: push    eax
0x40A735: lea     ecx, [esp+558h+Dest]
0x40A73C: push    offset aSTimeInf_2fS_0; "'%s' time -INF/%.2f state %s/%s"
0x40A741: push    ecx
0x40A742: call    __sprintf
0x40A747: add     esp, 1Ch
0x40A74A: jmp     short loc_40A7AF
0x40A74C: fld     dword ptr [esi+30h]
0x40A74F: mov     eax, [esi+24h]
0x40A752: mov     edx, off_B02C74[eax*4]; "LOOP"
0x40A759: fstp    [esp+544h+var_4FC]
0x40A75D: fld     dword ptr [esi+2Ch]
0x40A760: mov     eax, off_B02C58[ecx*4]; "INACTIVE"
0x40A767: mov     edi, [esi+8]
0x40A76A: fstp    [esp+544h+var_4D4]
0x40A76E: fld     [esp+544h+var_4FC]
0x40A772: push    edx
0x40A773: fsub    [esp+548h+var_4D4]
0x40A777: push    eax
0x40A778: sub     esp, 0Ch
0x40A77B: mov     ecx, esi
0x40A77D: fstp    qword ptr [esp+558h+Format]
0x40A781: fld     flt_B33A30
0x40A787: fstp    [esp+558h+var_55C+4]; float
0x40A78A: call    sub_49F4A0
0x40A78F: sub     esp, 8
0x40A792: fstp    qword ptr [esp+55Ch+var_55C]
0x40A795: push    edi
0x40A796: lea     ecx, [esp+560h+Dest]
0x40A79D: push    offset aSTime_2f_2fS_0; "'%s' time %.2f/%.2f state %s/%s"
0x40A7A2: push    ecx
0x40A7A3: call    __sprintf
0x40A7A8: mov     edi, [esp+568h+var_508]
0x40A7AC: add     esp, 24h
0x40A7AF: fild    [esp+544h+var_510]
0x40A7B3: push    0FFFFFFFFh; int
0x40A7B5: push    1; int
0x40A7B7: sub     esp, 8
0x40A7BA: fstp    [esp+554h+Format+4]; float
0x40A7BE: lea     edx, [esp+554h+Dest]
0x40A7C5: fild    iDebugTextLeftRightOffset
0x40A7CB: fstp    [esp+554h+Format]; float
0x40A7CE: push    edx; int
0x40A7CF: call    InterfaceMgr_DebugTextLine
0x40A7D4: mov     eax, [esp+558h+var_500]
0x40A7D8: add     esp, 14h
0x40A7DB: add     [esp+544h+var_510], ebx
0x40A7DF: movzx   ecx, word ptr [edi+46h]
0x40A7E3: add     eax, 1
0x40A7E6: cmp     eax, ecx
0x40A7E8: mov     [esp+544h+var_500], eax
0x40A7EC: jb      loc_40A6D5
0x40A7F2: fild    [esp+544h+var_510]
0x40A7F6: push    0FFFFFFFFh; int
0x40A7F8: push    1; int
0x40A7FA: sub     esp, 8
0x40A7FD: fstp    [esp+554h+Format+4]; float
0x40A801: fild    iDebugTextLeftRightOffset
0x40A807: fstp    [esp+554h+Format]; float
0x40A80A: push    offset EmptyString; int
0x40A80F: call    InterfaceMgr_DebugTextLine
0x40A814: add     esp, 14h
0x40A817: add     [esp+544h+var_510], ebx
0x40A81B: mov     esi, [esp+544h+var_4F8]
0x40A81F: mov     eax, [esp+544h+var_504]
0x40A823: add     eax, 1
0x40A826: cmp     eax, 2
0x40A829: mov     [esp+544h+var_504], eax
0x40A82D: jl      loc_40A601
0x40A833: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40A838: mov     ecx, dword_B3BF80; jumptable 00407DFE case 30
0x40A83E: test    ecx, ecx
0x40A840: jz      InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40A846: lea     edx, [esp+544h+var_50C]
0x40A84A: push    edx
0x40A84B: lea     eax, [esp+548h+var_510]
0x40A84F: push    eax
0x40A850: push    ebx
0x40A851: call    sub_682A90
0x40A856: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40A85B: mov     ecx, dword_B35B90; jumptable 00407DFE case 4
0x40A861: test    ecx, ecx
0x40A863: jz      InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40A869: lea     edx, [esp+544h+var_50C]
0x40A86D: push    edx
0x40A86E: lea     eax, [esp+548h+var_510]
0x40A872: push    eax
0x40A873: push    ebx
0x40A874: call    sub_4BE5B0
0x40A879: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40A87E: push    0; jumptable 00407DFE case 2
0x40A880: lea     ecx, [esp+548h+var_50C]
0x40A884: push    ecx
0x40A885: mov     ecx, ModelLoaderPtr
0x40A88B: lea     edx, [esp+54Ch+var_510]
0x40A88F: push    edx
0x40A890: push    ebx
0x40A891: call    sub_435600
0x40A896: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40A89B: push    1; jumptable 00407DFE case 3
0x40A89D: lea     eax, [esp+548h+var_50C]
0x40A8A1: push    eax
0x40A8A2: lea     ecx, [esp+54Ch+var_510]
0x40A8A6: push    ecx
0x40A8A7: mov     ecx, ModelLoaderPtr
0x40A8AD: push    ebx
0x40A8AE: call    sub_435600
0x40A8B3: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40A8B8: lea     edx, [esp+544h+var_50C]; jumptable 00407DFE case 5
0x40A8BC: push    edx
0x40A8BD: lea     eax, [esp+548h+var_510]
0x40A8C1: push    eax
0x40A8C2: push    ebx
0x40A8C3: call    sub_4FC360
0x40A8C8: call    sub_4FAAF0
0x40A8CD: push    1
0x40A8CF: call    GetGlobalScriptStateObj??
0x40A8D4: add     esp, 10h
0x40A8D7: cmp     byte ptr [eax+31h], 0
0x40A8DB: jg      loc_40C0CA
0x40A8E1: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40A8E6: mov     eax, srcObj; jumptable 00407DFE case 6
0x40A8EB: lea     ecx, [esp+544h+var_50C]
0x40A8EF: push    ecx
0x40A8F0: lea     edx, [esp+548h+var_510]
0x40A8F4: push    edx
0x40A8F5: push    ebx
0x40A8F6: push    eax
0x40A8F7: call    sub_61EB80
0x40A8FC: add     esp, 10h
0x40A8FF: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40A904: mov     eax, srcObj; jumptable 00407DFE case 8
0x40A909: lea     ecx, [esp+544h+var_50C]
0x40A90D: push    ecx
0x40A90E: lea     edx, [esp+548h+var_510]
0x40A912: push    edx
0x40A913: push    ebx
0x40A914: push    eax
0x40A915: call    Magic_ShowDebugText
0x40A91A: add     esp, 10h
0x40A91D: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40A922: mov     eax, srcObj; jumptable 00407DFE case 9
0x40A927: lea     ecx, [esp+544h+var_50C]
0x40A92B: push    ecx
0x40A92C: lea     edx, [esp+548h+var_510]
0x40A930: push    edx
0x40A931: push    ebx
0x40A932: push    eax
0x40A933: call    sub_5F8890
0x40A938: add     esp, 10h
0x40A93B: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40A940: lea     ecx, [esp+544h+var_50C]; jumptable 00407DFE case 10
0x40A944: push    ecx
0x40A945: lea     edx, [esp+548h+var_510]
0x40A949: push    edx
0x40A94A: push    ebx
0x40A94B: call    sub_666BB0
0x40A950: add     esp, 0Ch
0x40A953: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40A958: mov     edx, srcObj; jumptable 00407DFE case 7
0x40A95E: lea     eax, [esp+544h+var_50C]
0x40A962: push    eax
0x40A963: lea     ecx, [esp+548h+var_510]
0x40A967: push    ecx
0x40A968: push    ebx
0x40A969: push    edx
0x40A96A: call    sub_4AA1F0
0x40A96F: add     esp, 10h
0x40A972: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40A977: mov     edx, [edi+24h]; jumptable 00407DFE case 11
0x40A97A: lea     eax, [esp+544h+var_50C]
0x40A97E: push    eax
0x40A97F: lea     ecx, [esp+548h+var_510]
0x40A983: push    ecx
0x40A984: push    ebx
0x40A985: push    edx
0x40A986: call    sub_6A9110
0x40A98B: add     esp, 10h
0x40A98E: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40A993: mov     edx, srcObj; jumptable 00407DFE case 29
0x40A999: lea     eax, [esp+544h+var_50C]
0x40A99D: push    eax
0x40A99E: lea     ecx, [esp+548h+var_510]
0x40A9A2: push    ecx
0x40A9A3: push    ebx
0x40A9A4: push    edx
0x40A9A5: call    sub_45CC60
0x40A9AA: add     esp, 10h
0x40A9AD: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40A9B2: lea     eax, [esp+544h+var_4C4]; jumptable 00407DFE case 13
0x40A9B9: push    eax
0x40A9BA: lea     ecx, [esp+548h+var_4E8]
0x40A9BE: push    ecx
0x40A9BF: lea     edx, [esp+54Ch+var_4C0]
0x40A9C6: push    edx
0x40A9C7: lea     eax, [esp+550h+var_4B8]
0x40A9CE: push    eax
0x40A9CF: lea     ecx, [esp+554h+var_4BC]
0x40A9D6: push    ecx
0x40A9D7: lea     edx, [esp+558h+var_504]
0x40A9DB: push    edx
0x40A9DC: lea     eax, [esp+55Ch+var_4F8]
0x40A9E0: push    eax
0x40A9E1: lea     ecx, [esp+560h+var_500]
0x40A9E5: push    ecx
0x40A9E6: lea     edx, [esp+564h+var_508]
0x40A9EA: push    edx
0x40A9EB: lea     eax, [esp+568h+var_4FC]
0x40A9EF: push    eax
0x40A9F0: lea     ecx, [esp+56Ch+var_4D4]
0x40A9F7: push    ecx
0x40A9F8: call    sub_4048B0
0x40A9FD: call    InitBSShaderAccumulator
0x40AA02: mov     edx, dword_B42064
0x40AA08: mov     edi, [esp+570h+var_4D4]
0x40AA0F: mov     ecx, dword_B42054
0x40AA15: mov     esi, eax
0x40AA17: mov     eax, dword_B3FAB8
0x40AA1C: add     eax, edx
0x40AA1E: mov     edx, [esp+570h+var_4FC]
0x40AA22: push    edx
0x40AA23: push    edi
0x40AA24: mov     [esp+578h+var_4CC], eax
0x40AA2B: lea     eax, [esp+578h+Dest]
0x40AA32: push    offset aGeometryDD; "Geometry %d (%d)"
0x40AA37: push    eax
0x40AA38: mov     [esp+580h+var_4C8], ecx
0x40AA3F: call    __sprintf
0x40AA44: fild    [esp+580h+var_510]
0x40AA48: add     esp, 3Ch
0x40AA4B: push    0FFFFFFFFh; int
0x40AA4D: push    1; int
0x40AA4F: sub     esp, 8
0x40AA52: fstp    [esp+554h+Format+4]; float
0x40AA56: lea     ecx, [esp+554h+Dest]
0x40AA5D: fild    iDebugTextLeftRightOffset
0x40AA63: fstp    [esp+554h+Format]; float
0x40AA66: push    ecx; int
0x40AA67: call    InterfaceMgr_DebugTextLine
0x40AA6C: add     [esp+558h+var_510], ebx
0x40AA70: mov     eax, [esp+558h+var_508]
0x40AA74: add     esp, 14h
0x40AA77: test    edi, edi
0x40AA79: jbe     short loc_40AAA7
0x40AA7B: mov     edx, eax
0x40AA7D: test    edx, edx
0x40AA7F: mov     [esp+544h+var_4FC], edx
0x40AA83: fild    [esp+544h+var_4FC]
0x40AA87: jge     short loc_40AA8F
0x40AA89: fadd    ds:flt_A2FC78
0x40AA8F: mov     ecx, edi
0x40AA91: test    ecx, ecx
0x40AA93: mov     [esp+544h+var_4FC], ecx
0x40AA97: fild    [esp+544h+var_4FC]
0x40AA9B: jge     short loc_40AAA3
0x40AA9D: fadd    ds:flt_A2FC78
0x40AAA3: fdivp   st(1), st
0x40AAA5: jmp     short loc_40AAA9
0x40AAA7: fldz
0x40AAA9: sub     esp, 8
0x40AAAC: fstp    [esp+54Ch+var_4FC]
0x40AAB0: fld     [esp+54Ch+var_4FC]
0x40AAB4: lea     edx, [esp+54Ch+Dest]
0x40AABB: fstp    qword ptr [esp+54Ch+Format+8]
0x40AABE: push    eax
0x40AABF: push    offset aTriD_2f; "Tri %d  : %.2f"
0x40AAC4: push    edx
0x40AAC5: call    __sprintf
0x40AACA: fild    [esp+558h+var_510]
0x40AACE: add     esp, 14h
0x40AAD1: push    0FFFFFFFFh; int
0x40AAD3: push    1; int
0x40AAD5: sub     esp, 8
0x40AAD8: fstp    [esp+554h+Format+4]; float
0x40AADC: lea     eax, [esp+554h+Dest]
0x40AAE3: fild    iDebugTextLeftRightOffset
0x40AAE9: fstp    [esp+554h+Format]; float
0x40AAEC: push    eax; int
0x40AAED: call    InterfaceMgr_DebugTextLine
0x40AAF2: add     [esp+558h+var_510], ebx
0x40AAF6: mov     eax, [esp+558h+var_500]
0x40AAFA: add     esp, 14h
0x40AAFD: test    edi, edi
0x40AAFF: jbe     short loc_40AB2B
0x40AB01: mov     ecx, eax
0x40AB03: test    ecx, ecx
0x40AB05: mov     [esp+544h+var_4FC], ecx
0x40AB09: fild    [esp+544h+var_4FC]
0x40AB0D: jge     short loc_40AB15
0x40AB0F: fadd    ds:flt_A2FC78
0x40AB15: test    edi, edi
0x40AB17: mov     [esp+544h+var_4FC], edi
0x40AB1B: fild    [esp+544h+var_4FC]
0x40AB1F: jge     short loc_40AB27
0x40AB21: fadd    ds:flt_A2FC78
0x40AB27: fdivp   st(1), st
0x40AB29: jmp     short loc_40AB2D
0x40AB2B: fldz
0x40AB2D: sub     esp, 8
0x40AB30: fstp    [esp+54Ch+var_4FC]
0x40AB34: fld     [esp+54Ch+var_4FC]
0x40AB38: lea     edx, [esp+54Ch+Dest]
0x40AB3F: fstp    qword ptr [esp+54Ch+Format+8]
0x40AB42: push    eax
0x40AB43: push    offset aPassD_2f; "Pass %d  : %.2f"
0x40AB48: push    edx
0x40AB49: call    __sprintf
0x40AB4E: fild    [esp+558h+var_510]
0x40AB52: add     esp, 14h
0x40AB55: push    0FFFFFFFFh; int
0x40AB57: push    1; int
0x40AB59: sub     esp, 8
0x40AB5C: fstp    [esp+554h+Format+4]; float
0x40AB60: lea     eax, [esp+554h+Dest]
0x40AB67: fild    iDebugTextLeftRightOffset
0x40AB6D: fstp    [esp+554h+Format]; float
0x40AB70: push    eax; int
0x40AB71: call    InterfaceMgr_DebugTextLine
0x40AB76: mov     ecx, [esp+558h+var_4F8]
0x40AB7A: add     [esp+558h+var_510], ebx
0x40AB7E: push    ecx
0x40AB7F: lea     edx, [esp+55Ch+Dest]
0x40AB86: push    offset aTripassesD; "TriPasses %d"
0x40AB8B: push    edx
0x40AB8C: call    __sprintf
0x40AB91: fild    [esp+564h+var_510]
0x40AB95: add     esp, 20h
0x40AB98: push    0FFFFFFFFh; int
0x40AB9A: push    1; int
0x40AB9C: sub     esp, 8
0x40AB9F: fstp    [esp+554h+Format+4]; float
0x40ABA3: lea     eax, [esp+554h+Dest]
0x40ABAA: fild    iDebugTextLeftRightOffset
0x40ABB0: fstp    [esp+554h+Format]; float
0x40ABB3: push    eax; int
0x40ABB4: call    InterfaceMgr_DebugTextLine
0x40ABB9: fild    [esp+558h+var_504]
0x40ABBD: mov     ecx, [esp+558h+var_504]
0x40ABC1: add     [esp+558h+var_510], ebx
0x40ABC5: test    ecx, ecx
0x40ABC7: jge     short loc_40ABCF
0x40ABC9: fadd    ds:flt_A2FC78
0x40ABCF: fmul    ds:dbl_A30550
0x40ABD5: add     esp, 0Ch
0x40ABD8: lea     edx, [esp+54Ch+Dest]
0x40ABDF: fstp    [esp+54Ch+var_4FC]
0x40ABE3: fld     [esp+54Ch+var_4FC]
0x40ABE7: fstp    qword ptr [esp+54Ch+Format+8]
0x40ABEA: push    offset aQueuemem_2fKb; "QueueMem %.2f kb"
0x40ABEF: push    edx
0x40ABF0: call    __sprintf
0x40ABF5: fild    [esp+554h+var_510]
0x40ABF9: add     esp, 10h
0x40ABFC: push    0FFFFFFFFh; int
0x40ABFE: push    1; int
0x40AC00: sub     esp, 8
0x40AC03: fstp    [esp+554h+Format+4]; float
0x40AC07: lea     eax, [esp+554h+Dest]
0x40AC0E: fild    iDebugTextLeftRightOffset
0x40AC14: fstp    [esp+554h+Format]; float
0x40AC17: push    eax; int
0x40AC18: call    InterfaceMgr_DebugTextLine
0x40AC1D: fild    [esp+558h+var_4CC]
0x40AC24: mov     ecx, [esp+558h+var_4CC]
0x40AC2B: add     [esp+558h+var_510], ebx
0x40AC2F: test    ecx, ecx
0x40AC31: jge     short loc_40AC39
0x40AC33: fadd    ds:flt_A2FC78
0x40AC39: fld     ds:dbl_A30530
0x40AC3F: mov     edx, [esp+558h+var_4C8]
0x40AC46: test    edx, edx
0x40AC48: fmul    st(1), st
0x40AC4A: fxch    st(1)
0x40AC4C: fstp    [esp+558h+var_4CC]
0x40AC53: fild    [esp+558h+var_4C8]
0x40AC5A: jge     short loc_40AC62
0x40AC5C: fadd    ds:flt_A2FC78
0x40AC62: fmulp   st(1), st
0x40AC64: push    ecx
0x40AC65: lea     eax, [esp+55Ch+Dest]
0x40AC6C: fstp    [esp+55Ch+var_4C8]
0x40AC73: fld     [esp+55Ch+var_4CC]
0x40AC7A: fld     st
0x40AC7C: fld     [esp+55Ch+var_4C8]
0x40AC83: fld     st
0x40AC85: faddp   st(2), st
0x40AC87: fxch    st(1)
0x40AC89: fstp    qword ptr [esp+55Ch+Format+8]
0x40AC8D: fxch    st(1)
0x40AC8F: fstp    qword ptr [esp+55Ch+Format]
0x40AC93: fstp    qword ptr [esp+55Ch+var_55C]
0x40AC96: push    offset aTexturememS_2f; "TextureMem S %.2f + R %.2f = T %.2f Mb"
0x40AC9B: push    eax
0x40AC9C: call    __sprintf
0x40ACA1: fild    [esp+564h+var_510]
0x40ACA5: add     esp, 20h
0x40ACA8: push    0FFFFFFFFh; int
0x40ACAA: push    1; int
0x40ACAC: sub     esp, 8
0x40ACAF: fstp    [esp+554h+Format+4]; float
0x40ACB3: lea     ecx, [esp+554h+Dest]
0x40ACBA: fild    iDebugTextLeftRightOffset
0x40ACC0: fstp    [esp+554h+Format]; float
0x40ACC3: push    ecx; int
0x40ACC4: call    InterfaceMgr_DebugTextLine
0x40ACC9: mov     edx, [esp+558h+var_4C0]
0x40ACD0: mov     eax, [esp+558h+var_4B8]
0x40ACD7: mov     ecx, [esp+558h+var_4BC]
0x40ACDE: add     [esp+558h+var_510], ebx
0x40ACE2: push    edx
0x40ACE3: push    eax
0x40ACE4: push    ecx
0x40ACE5: lea     edx, [esp+564h+Dest]
0x40ACEC: push    offset aOcclusionGeomD; "Occlusion Geom: %d , %d tri , %d wait l"...
0x40ACF1: push    edx
0x40ACF2: call    __sprintf
0x40ACF7: fild    [esp+56Ch+var_510]
0x40ACFB: add     esp, 28h
0x40ACFE: push    0FFFFFFFFh; int
0x40AD00: push    1; int
0x40AD02: sub     esp, 8
0x40AD05: fstp    [esp+554h+Format+4]; float
0x40AD09: lea     eax, [esp+554h+Dest]
0x40AD10: fild    iDebugTextLeftRightOffset
0x40AD16: fstp    [esp+554h+Format]; float
0x40AD19: push    eax; int
0x40AD1A: call    InterfaceMgr_DebugTextLine
0x40AD1F: mov     ecx, [esp+558h+var_4C4]
0x40AD26: add     [esp+558h+var_510], ebx
0x40AD2A: push    ecx
0x40AD2B: lea     edx, [esp+55Ch+Dest]
0x40AD32: push    offset aSunOcclusionWa; "Sun Occlusion Wait Frames: %d"
0x40AD37: push    edx
0x40AD38: call    __sprintf
0x40AD3D: fild    [esp+564h+var_510]
0x40AD41: add     esp, 20h
0x40AD44: push    0FFFFFFFFh; int
0x40AD46: push    1; int
0x40AD48: sub     esp, 8
0x40AD4B: fstp    [esp+554h+Format+4]; float
0x40AD4F: lea     eax, [esp+554h+Dest]
0x40AD56: fild    iDebugTextLeftRightOffset
0x40AD5C: fstp    [esp+554h+Format]; float
0x40AD5F: push    eax; int
0x40AD60: call    InterfaceMgr_DebugTextLine
0x40AD65: add     [esp+558h+var_510], ebx
0x40AD69: add     esp, 14h
0x40AD6C: test    esi, esi
0x40AD6E: jz      short loc_40ADB8
0x40AD70: mov     ecx, [esi+0BCh]
0x40AD76: push    ecx
0x40AD77: lea     edx, [esp+548h+Dest]
0x40AD7E: push    offset aSunOcclusionPi; "Sun Occlusion Pixels: %d"
0x40AD83: push    edx
0x40AD84: call    __sprintf
0x40AD89: fild    [esp+550h+var_510]
0x40AD8D: add     esp, 0Ch
0x40AD90: push    0FFFFFFFFh; int
0x40AD92: push    1; int
0x40AD94: sub     esp, 8
0x40AD97: fstp    [esp+554h+Format+4]; float
0x40AD9B: lea     eax, [esp+554h+Dest]
0x40ADA2: fild    iDebugTextLeftRightOffset
0x40ADA8: fstp    [esp+554h+Format]; float
0x40ADAB: push    eax; int
0x40ADAC: call    InterfaceMgr_DebugTextLine
0x40ADB1: add     esp, 14h
0x40ADB4: add     [esp+544h+var_510], ebx
0x40ADB8: mov     ecx, [esp+544h+var_4E8.m_data]
0x40ADBC: push    ecx
0x40ADBD: lea     edx, [esp+548h+Dest]
0x40ADC4: push    offset aBoundVolumeOcc; "Bound Volume Occlusion Wait Loops: %d"
0x40ADC9: push    edx
0x40ADCA: call    __sprintf
0x40ADCF: fild    [esp+550h+var_510]
0x40ADD3: add     esp, 0Ch
0x40ADD6: push    0FFFFFFFFh; int
0x40ADD8: push    1; int
0x40ADDA: sub     esp, 8
0x40ADDD: fstp    [esp+554h+Format+4]; float
0x40ADE1: lea     eax, [esp+554h+Dest]
0x40ADE8: fild    iDebugTextLeftRightOffset
0x40ADEE: fstp    [esp+554h+Format]; float
0x40ADF1: push    eax; int
0x40ADF2: call    InterfaceMgr_DebugTextLine
0x40ADF7: add     [esp+558h+var_510], ebx
0x40ADFB: add     esp, 14h
0x40ADFE: test    esi, esi
0x40AE00: jz      short loc_40AE74
0x40AE02: mov     ecx, srcObj
0x40AE08: test    ecx, ecx
0x40AE0A: jz      short loc_40AE74
0x40AE0C: mov     edx, [ecx]
0x40AE0E: mov     eax, [edx+190h]
0x40AE14: call    eax
0x40AE16: test    al, al
0x40AE18: jz      short loc_40AE74
0x40AE1A: mov     eax, srcObj
0x40AE1F: cmp     eax, TESDataHandler_g_PlayerRef
0x40AE25: jz      short loc_40AE74
0x40AE27: mov     eax, [eax+0Ch]
0x40AE2A: push    eax
0x40AE2B: mov     ecx, esi
0x40AE2D: call    sub_7AA4A0
0x40AE32: push    eax
0x40AE33: lea     ecx, [esp+548h+Dest]
0x40AE3A: push    offset aBoundVolumeO_0; "Bound Volume Occlusion Pixels: %d"
0x40AE3F: push    ecx
0x40AE40: call    __sprintf
0x40AE45: fild    [esp+550h+var_510]
0x40AE49: add     esp, 0Ch
0x40AE4C: push    0FFFFFFFFh; int
0x40AE4E: push    1; int
0x40AE50: sub     esp, 8
0x40AE53: fstp    [esp+554h+Format+4]; float
0x40AE57: lea     edx, [esp+554h+Dest]
0x40AE5E: fild    iDebugTextLeftRightOffset
0x40AE64: fstp    [esp+554h+Format]; float
0x40AE67: push    edx; int
0x40AE68: call    InterfaceMgr_DebugTextLine
0x40AE6D: add     esp, 14h
0x40AE70: add     [esp+544h+var_510], ebx
0x40AE74: push    0
0x40AE76: call    GetShadowSceneNode
0x40AE7B: movzx   esi, word ptr [eax+0F0h]
0x40AE82: push    0
0x40AE84: call    GetShadowSceneNode
0x40AE89: add     esp, 8
0x40AE8C: mov     ecx, eax
0x40AE8E: call    sub_7C6740
0x40AE93: movzx   eax, ax
0x40AE96: movzx   ecx, si
0x40AE99: movzx   edx, ax
0x40AE9C: push    ecx
0x40AE9D: push    edx
0x40AE9E: lea     eax, [esp+54Ch+Dest]
0x40AEA5: push    offset aActiveLightsDD; "Active Lights: %d / %d"
0x40AEAA: push    eax
0x40AEAB: call    __sprintf
0x40AEB0: add     esp, 10h
0x40AEB3: fild    [esp+544h+var_510]
0x40AEB7: push    0FFFFFFFFh; int
0x40AEB9: push    1; int
0x40AEBB: sub     esp, 8
0x40AEBE: lea     ecx, [esp+554h+Dest]
0x40AEC5: fstp    [esp+554h+Format+4]; float
0x40AEC9: fild    iDebugTextLeftRightOffset
0x40AECF: fstp    [esp+554h+Format]; float
0x40AED2: push    ecx; int
0x40AED3: call    InterfaceMgr_DebugTextLine
0x40AED8: mov     edx, dword_B4334C
0x40AEDE: mov     eax, dword_B43348
0x40AEE3: add     [esp+558h+var_510], ebx
0x40AEE7: push    edx
0x40AEE8: push    eax
0x40AEE9: lea     ecx, [esp+560h+Dest]
0x40AEF0: push    offset aGrassIGII; "Grass : %i g, %i i"
0x40AEF5: push    ecx
0x40AEF6: call    __sprintf
0x40AEFB: fild    [esp+568h+var_510]
0x40AEFF: add     esp, 24h
0x40AF02: push    0FFFFFFFFh; int
0x40AF04: push    1; int
0x40AF06: sub     esp, 8
0x40AF09: fstp    [esp+554h+Format+4]; float
0x40AF0D: lea     edx, [esp+554h+Dest]
0x40AF14: fild    iDebugTextLeftRightOffset
0x40AF1A: fstp    [esp+554h+Format]; float
0x40AF1D: push    edx; int
0x40AF1E: call    InterfaceMgr_DebugTextLine
0x40AF23: mov     eax, dword_B42D60
0x40AF28: mov     ecx, dword_B42D5C
0x40AF2E: add     [esp+558h+var_510], ebx
0x40AF32: push    eax
0x40AF33: push    ecx
0x40AF34: lea     edx, [esp+560h+Dest]
0x40AF3B: push    offset aDistantlodIGII; "DistantLOD : %i g, %i i"
0x40AF40: push    edx
0x40AF41: call    __sprintf
0x40AF46: fild    [esp+568h+var_510]
0x40AF4A: add     esp, 24h
0x40AF4D: push    0FFFFFFFFh
0x40AF4F: push    1
0x40AF51: sub     esp, 8
0x40AF54: fstp    [esp+554h+Format+4]
0x40AF58: lea     eax, [esp+554h+Dest]
0x40AF5F: fild    iDebugTextLeftRightOffset
0x40AF65: fstp    [esp+554h+Format]
0x40AF68: push    eax
0x40AF69: jmp     loc_40C013
0x40AF6E: add     eax, 0FFFFFFF2h; jumptable 00407DFE cases 14-23
0x40AF71: mov     [esp+544h+var_4E8.m_data], eax
0x40AF75: add     eax, 1
0x40AF78: push    eax
0x40AF79: lea     ecx, [esp+548h+Dest]
0x40AF80: push    offset aSourceTextures; "SOURCE TEXTURES: PAGE %d"
0x40AF85: push    ecx
0x40AF86: call    __sprintf
0x40AF8B: fild    [esp+550h+var_510]
0x40AF8F: add     esp, 0Ch
0x40AF92: push    0FFFFFFFFh; int
0x40AF94: push    1; int
0x40AF96: sub     esp, 8
0x40AF99: fstp    [esp+554h+Format+4]; float
0x40AF9D: lea     edx, [esp+554h+Dest]
0x40AFA4: fild    iDebugTextLeftRightOffset
0x40AFAA: fstp    [esp+554h+Format]; float
0x40AFAD: push    edx; int
0x40AFAE: call    InterfaceMgr_DebugTextLine
0x40AFB3: add     [esp+558h+var_510], ebx
0x40AFB7: add     esp, 14h
0x40AFBA: cmp     word_B33408, 0
0x40AFC2: jnz     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40AFC8: push    1
0x40AFCA: call    GetGlobalScriptStateObj??
0x40AFCF: add     esp, 4
0x40AFD2: cmp     byte ptr [eax+31h], 0
0x40AFD6: jg      InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40AFDC: push    320h
0x40AFE1: lea     eax, [esp+548h+var_430]
0x40AFE8: push    0
0x40AFEA: push    eax
0x40AFEB: call    __memset
0x40AFF0: mov     edi, dword_B3F700
0x40AFF6: add     esp, 0Ch
0x40AFF9: test    edi, edi
0x40AFFB: jz      loc_40B0A7
0x40B001: push    edi
0x40B002: push    offset dword_B3F95C
0x40B007: call    NiRTTI__IsObjectOfRTTIType
0x40B00C: add     esp, 8
0x40B00F: test    al, al
0x40B011: jz      loc_40B09C
0x40B017: mov     esi, [edi+24h]
0x40B01A: test    esi, esi
0x40B01C: jz      short loc_40B09C
0x40B01E: cmp     bShowMenuTextureUse, 0
0x40B025: jnz     short loc_40B034
0x40B027: push    edi
0x40B028: call    sub_4053E0
0x40B02D: add     esp, 4
0x40B030: test    al, al
0x40B032: jnz     short loc_40B09C
0x40B034: or      ecx, 0FFFFFFFFh
0x40B037: xor     eax, eax
0x40B039: lea     esp, [esp+0]
0x40B040: cmp     ecx, 0FFFFFFFFh
0x40B043: jnz     short loc_40B070
0x40B045: mov     edx, [esp+eax*4+544h+var_430]
0x40B04C: test    edx, edx
0x40B04E: jz      short loc_40B05F
0x40B050: mov     edx, [edx+24h]
0x40B053: test    edx, edx
0x40B055: jz      short loc_40B061
0x40B057: mov     edx, [edx+60h]
0x40B05A: cmp     edx, [esi+60h]
0x40B05D: jnb     short loc_40B061
0x40B05F: mov     ecx, eax
0x40B061: add     eax, 1
0x40B064: cmp     eax, 0C8h ; 'È'
0x40B069: jl      short loc_40B040
0x40B06B: cmp     ecx, 0FFFFFFFFh
0x40B06E: jz      short loc_40B09C
0x40B070: mov     eax, 0C7h ; 'Ç'
0x40B075: cmp     ecx, eax
0x40B077: jge     short loc_40B095
0x40B079: lea     esp, [esp+0]
0x40B080: mov     edx, [esp+eax*4+544h+var_434]
0x40B087: mov     [esp+eax*4+544h+var_430], edx
0x40B08E: sub     eax, 1
0x40B091: cmp     eax, ecx
0x40B093: jg      short loc_40B080
0x40B095: mov     [esp+ecx*4+544h+var_430], edi
0x40B09C: mov     edi, [edi+2Ch]
0x40B09F: test    edi, edi
0x40B0A1: jnz     loc_40B001
0x40B0A7: mov     eax, [esp+544h+var_4E8.m_data]
0x40B0AB: lea     eax, [eax+eax*4]
0x40B0AE: add     eax, eax
0x40B0B0: add     eax, eax
0x40B0B2: lea     ecx, [eax+14h]
0x40B0B5: cmp     eax, ecx
0x40B0B7: mov     [esp+544h+var_500], eax
0x40B0BB: mov     [esp+544h+var_4C4], ecx
0x40B0C2: jge     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40B0C8: jmp     short loc_40B0D0
0x40B0CA: align 10h
0x40B0D0: mov     esi, [esp+eax*4+544h+var_430]
0x40B0D7: test    esi, esi
0x40B0D9: jz      loc_40B178
0x40B0DF: mov     edi, [esi+34h]
0x40B0E2: test    edi, edi
0x40B0E4: mov     edx, [esi+24h]
0x40B0E7: jz      short loc_40B108
0x40B0E9: mov     eax, edi
0x40B0EB: lea     ecx, [eax+1]
0x40B0EE: mov     [esp+544h+var_4E8.m_data], ecx
0x40B0F2: mov     cl, [eax]
0x40B0F4: add     eax, 1
0x40B0F7: test    cl, cl
0x40B0F9: jnz     short loc_40B0F2
0x40B0FB: sub     eax, [esp+544h+var_4E8.m_data]
0x40B0FF: cmp     eax, 19h
0x40B102: jle     short loc_40B108
0x40B104: lea     edi, [edi+eax-19h]
0x40B108: mov     edx, [edx+60h]
0x40B10B: mov     eax, [esi]
0x40B10D: shr     edx, 0Ah
0x40B110: push    edx
0x40B111: mov     edx, [eax+50h]
0x40B114: mov     ecx, esi
0x40B116: call    edx
0x40B118: push    eax
0x40B119: mov     eax, [esi]
0x40B11B: mov     edx, [eax+4Ch]
0x40B11E: mov     ecx, esi
0x40B120: call    edx
0x40B122: push    eax
0x40B123: mov     eax, [esp+550h+var_500]
0x40B127: push    edi
0x40B128: add     eax, 1
0x40B12B: push    eax
0x40B12C: lea     ecx, [esp+558h+Dest]
0x40B133: push    offset aDSDxDDkb; "%d: %s, %dx%d, %dkb"
0x40B138: push    ecx
0x40B139: call    __sprintf
0x40B13E: fild    [esp+560h+var_510]
0x40B142: add     esp, 1Ch
0x40B145: push    0FFFFFFFFh; int
0x40B147: push    1; int
0x40B149: sub     esp, 8
0x40B14C: fstp    [esp+554h+Format+4]; float
0x40B150: lea     edx, [esp+554h+Dest]
0x40B157: fild    iDebugTextLeftRightOffset
0x40B15D: fstp    [esp+554h+Format]; float
0x40B160: push    edx; int
0x40B161: call    InterfaceMgr_DebugTextLine
0x40B166: mov     ecx, [esp+558h+var_4C4]
0x40B16D: mov     eax, [esp+558h+var_500]
0x40B171: add     esp, 14h
0x40B174: add     [esp+544h+var_510], ebx
0x40B178: add     eax, 1
0x40B17B: cmp     eax, ecx
0x40B17D: mov     [esp+544h+var_500], eax
0x40B181: jl      loc_40B0D0
0x40B187: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40B18C: mov     esi, dword_B3C21C; jumptable 00407DFE case 24
0x40B192: test    esi, esi
0x40B194: jnz     short loc_40B1C5
0x40B196: lea     eax, [esp+544h+Dest]
0x40B19D: push    offset aProfilerNotEna; "PROFILER NOT ENABLED"
0x40B1A2: push    eax
0x40B1A3: call    __sprintf
0x40B1A8: fild    [esp+54Ch+var_510]
0x40B1AC: add     esp, 8
0x40B1AF: push    0FFFFFFFFh
0x40B1B1: push    1
0x40B1B3: sub     esp, 8
0x40B1B6: fstp    [esp+554h+Format+4]
0x40B1BA: fild    iDebugTextLeftRightOffset
0x40B1C0: jmp     loc_40C008
0x40B1C5: push    3Ch ; '<'
0x40B1C7: lea     edx, [esp+548h+Dest]
0x40B1CE: push    offset aProfilerAveDFr; "PROFILER(AVE/%d FRAMES)"
0x40B1D3: push    edx
0x40B1D4: call    __sprintf
0x40B1D9: fild    [esp+550h+var_510]
0x40B1DD: add     esp, 0Ch
0x40B1E0: push    0FFFFFFFFh; int
0x40B1E2: push    1; int
0x40B1E4: sub     esp, 8
0x40B1E7: fstp    [esp+554h+Format+4]; float
0x40B1EB: lea     eax, [esp+554h+Dest]
0x40B1F2: fild    iDebugTextLeftRightOffset
0x40B1F8: fstp    [esp+554h+Format]; float
0x40B1FB: push    eax; int
0x40B1FC: call    InterfaceMgr_DebugTextLine
0x40B201: add     [esp+558h+var_510], ebx
0x40B205: add     esp, 14h
0x40B208: cmp     word_B33408, 0
0x40B210: jnz     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40B216: push    1
0x40B218: call    GetGlobalScriptStateObj??
0x40B21D: add     esp, 4
0x40B220: cmp     byte ptr [eax+31h], 0
0x40B224: jg      InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40B22A: mov     ecx, esi
0x40B22C: call    sub_6B9520
0x40B231: mov     ecx, [esi+4]
0x40B234: test    ecx, ecx
0x40B236: jz      InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40B23C: mov     edx, [ecx+24h]
0x40B23F: push    offset EmptyString
0x40B244: push    edx
0x40B245: push    ebx
0x40B246: lea     eax, [esp+550h+var_510]
0x40B24A: push    eax
0x40B24B: call    sub_6B9750
0x40B250: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40B255: mov     esi, dword_B3C21C; jumptable 00407DFE case 25
0x40B25B: test    esi, esi
0x40B25D: jnz     short loc_40B299
0x40B25F: lea     ecx, [esp+544h+Dest]
0x40B266: push    offset aProfilerMaxNot; "PROFILER(MAX) NOT ENABLED"
0x40B26B: push    ecx
0x40B26C: call    __sprintf
0x40B271: fild    [esp+54Ch+var_510]
0x40B275: add     esp, 8
0x40B278: push    0FFFFFFFFh
0x40B27A: push    1
0x40B27C: sub     esp, 8
0x40B27F: fstp    [esp+554h+Format+4]
0x40B283: lea     edx, [esp+554h+Dest]
0x40B28A: fild    iDebugTextLeftRightOffset
0x40B290: fstp    [esp+554h+Format]
0x40B293: push    edx
0x40B294: jmp     loc_40C013
0x40B299: push    12Ch
0x40B29E: lea     eax, [esp+548h+Dest]
0x40B2A5: push    offset aProfilerMaxDFr; "PROFILER(MAX/%d FRAMES)"
0x40B2AA: push    eax
0x40B2AB: call    __sprintf
0x40B2B0: fild    [esp+550h+var_510]
0x40B2B4: add     esp, 0Ch
0x40B2B7: push    0FFFFFFFFh; int
0x40B2B9: push    1; int
0x40B2BB: sub     esp, 8
0x40B2BE: fstp    [esp+554h+Format+4]; float
0x40B2C2: lea     ecx, [esp+554h+Dest]
0x40B2C9: fild    iDebugTextLeftRightOffset
0x40B2CF: fstp    [esp+554h+Format]; float
0x40B2D2: push    ecx; int
0x40B2D3: call    InterfaceMgr_DebugTextLine
0x40B2D8: add     [esp+558h+var_510], ebx
0x40B2DC: add     esp, 14h
0x40B2DF: cmp     word_B33408, 0
0x40B2E7: jnz     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40B2ED: push    1
0x40B2EF: call    GetGlobalScriptStateObj??
0x40B2F4: add     esp, 4
0x40B2F7: cmp     byte ptr [eax+31h], 0
0x40B2FB: jg      InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40B301: mov     ecx, esi
0x40B303: call    sub_6B9510
0x40B308: push    28h ; '('; Size
0x40B30A: mov     esi, eax
0x40B30C: call    FormHeapAlloc
0x40B311: add     esp, 4
0x40B314: mov     [esp+544h+var_4E8.m_data], eax
0x40B318: test    eax, eax
0x40B31A: mov     [esp+544h+var_4], 1
0x40B325: jz      short loc_40B337
0x40B327: push    0
0x40B329: push    offset aRoot; "Root"
0x40B32E: mov     ecx, eax
0x40B330: call    sub_6B9BD0
0x40B335: jmp     short loc_40B339
0x40B337: xor     eax, eax
0x40B339: push    eax
0x40B33A: lea     ecx, [esp+548h+var_508]
0x40B33E: call    sub_405070
0x40B343: push    esi
0x40B344: mov     esi, [esp+548h+var_508]
0x40B348: mov     ecx, esi
0x40B34A: mov     [esp+548h+var_4], 2
0x40B355: call    sub_6B9D10
0x40B35A: mov     ecx, esi
0x40B35C: call    ??0?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VAverageEntry@@@@@@QAE@XZ; NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<AverageEntry>>::NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<AverageEntry>>(void)
0x40B361: mov     ecx, esi
0x40B363: call    sub_6B9E10
0x40B368: mov     eax, [esi+24h]
0x40B36B: test    eax, eax
0x40B36D: jnz     short loc_40B374
0x40B36F: mov     eax, 1
0x40B374: push    offset EmptyString
0x40B379: push    eax
0x40B37A: push    ebx
0x40B37B: lea     edx, [esp+550h+var_510]
0x40B37F: push    edx
0x40B380: mov     ecx, esi
0x40B382: call    sub_6B9750
0x40B387: lea     ecx, [esp+544h+var_508]; this
0x40B38B: mov     [esp+544h+var_4], 0FFFFFFFFh
0x40B396: call    sub_7016A0
0x40B39B: jmp     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40B3A0: lea     eax, [esp+544h+Dest]; jumptable 00407DFE case 26
0x40B3A7: push    offset aHeapStats; "HEAP STATS"
0x40B3AC: push    eax
0x40B3AD: call    __sprintf
0x40B3B2: fild    [esp+54Ch+var_510]
0x40B3B6: add     esp, 8
0x40B3B9: push    0FFFFFFFFh; int
0x40B3BB: push    1; int
0x40B3BD: sub     esp, 8
0x40B3C0: fstp    [esp+554h+Format+4]; float
0x40B3C4: lea     ecx, [esp+554h+Dest]
0x40B3CB: fild    iDebugTextLeftRightOffset
0x40B3D1: fstp    [esp+554h+Format]; float
0x40B3D4: push    ecx; int
0x40B3D5: call    InterfaceMgr_DebugTextLine
0x40B3DA: add     [esp+558h+var_510], ebx
0x40B3DE: add     esp, 14h
0x40B3E1: cmp     word_B33408, 0
0x40B3E9: jnz     InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40B3EF: push    1
0x40B3F1: call    GetGlobalScriptStateObj??
0x40B3F6: add     esp, 4
0x40B3F9: cmp     byte ptr [eax+31h], 0
0x40B3FD: jg      InterfaceMgr_ShowDebugText___def_407DFE; jumptable 00407DFE default case, case 12
0x40B403: push    1
0x40B405: lea     edx, [esp+548h+var_488]
0x40B40C: push    edx
0x40B40D: mov     ecx, offset FormHeap
0x40B412: call    MemoryHeap_GetStats
0x40B417: mov     edi, [esp+544h+var_488]
0x40B41E: shr     edi, 0Ah
0x40B421: jnz     short loc_40B428
0x40B423: mov     edi, 1
0x40B428: push    edi
0x40B429: lea     eax, [esp+548h+Dest]
0x40B430: push    offset aMemHeapSizeDKb; "Mem heap size: %d kb"
0x40B435: push    eax
0x40B436: call    __sprintf
0x40B43B: fild    [esp+550h+var_510]
0x40B43F: add     esp, 0Ch
0x40B442: push    0FFFFFFFFh; int
0x40B444: push    1; int
0x40B446: sub     esp, 8
0x40B449: fstp    [esp+554h+Format+4]; float
0x40B44D: lea     ecx, [esp+554h+Dest]
0x40B454: fild    iDebugTextLeftRightOffset
0x40B45A: fstp    [esp+554h+Format]; float
0x40B45D: push    ecx; int
0x40B45E: call    InterfaceMgr_DebugTextLine
0x40B463: mov     eax, [esp+558h+var_484]
0x40B46A: add     [esp+558h+var_510], ebx
0x40B46E: cdq
0x40B46F: and     edx, 3FFh
0x40B475: add     eax, edx
0x40B477: add     esp, 14h
0x40B47A: sar     eax, 0Ah
0x40B47D: mov     esi, eax
0x40B47F: jnz     short loc_40B486
0x40B481: mov     esi, 1
0x40B486: imul    eax, 64h ; 'd'
0x40B489: xor     edx, edx
0x40B48B: div     edi
0x40B48D: lea     edx, [esp+544h+Dest]
0x40B494: push    eax
0x40B495: push    esi
0x40B496: push    offset aMemUsedForBloc; "Mem used for blocks: %d kb, %d%%"
0x40B49B: push    edx
0x40B49C: call    __sprintf
0x40B4A1: fild    [esp+554h+var_510]
0x40B4A5: add     esp, 10h
0x40B4A8: push    0FFFFFFFFh; int
0x40B4AA: push    1; int
0x40B4AC: sub     esp, 8
0x40B4AF: fstp    [esp+554h+Format+4]; float
0x40B4B3: lea     eax, [esp+554h+Dest]
0x40B4BA: fild    iDebugTextLeftRightOffset
0x40B4C0: fstp    [esp+554h+Format]; float
0x40B4C3: push    eax; int
0x40B4C4: call    InterfaceMgr_DebugTextLine
0x40B4C9: mov     eax, [esp+558h+var_480]
0x40B4D0: cdq
0x40B4D1: and     edx, 3FFh
0x40B4D7: add     eax, edx
0x40B4D9: mov     ecx, eax
0x40B4DB: sar     ecx, 0Ah
0x40B4DE: mov     eax, ecx
0x40B4E0: imul    eax, 64h ; 'd'
0x40B4E3: xor     edx, edx
0x40B4E5: div     edi
0x40B4E7: add     [esp+558h+var_510], ebx
0x40B4EB: push    eax
0x40B4EC: push    ecx
0x40B4ED: lea     ecx, [esp+560h+Dest]
0x40B4F4: push    offset aHighMemAllocat; "High mem allocated: %d kb, %d%%"
0x40B4F9: push    ecx
0x40B4FA: call    __sprintf
0x40B4FF: fild    [esp+568h+var_510]
0x40B503: add     esp, 24h
0x40B506: push    0FFFFFFFFh; int
0x40B508: push    1; int
0x40B50A: sub     esp, 8
0x40B50D: fstp    [esp+554h+Format+4]; float
0x40B511: lea     edx, [esp+554h+Dest]
0x40B518: fild    iDebugTextLeftRightOffset
0x40B51E: fstp    [esp+554h+Format]; float
0x40B521: push    edx; int
0x40B522: call    InterfaceMgr_DebugTextLine
0x40B527: mov     eax, [esp+558h+var_47C]
0x40B52E: add     [esp+558h+var_510], ebx
0x40B532: push    eax
0x40B533: lea     ecx, [esp+55Ch+Dest]
0x40B53A: push    offset aUsedBlocksD; "Used blocks: %d"
0x40B53F: push    ecx
0x40B540: call    __sprintf
0x40B545: fild    [esp+564h+var_510]
0x40B549: add     esp, 20h
0x40B54C: push    0FFFFFFFFh; int
0x40B54E: push    1; int
0x40B550: sub     esp, 8
0x40B553: fstp    [esp+554h+Format+4]; float
0x40B557: lea     edx, [esp+554h+Dest]
0x40B55E: fild    iDebugTextLeftRightOffset
0x40B564: fstp    [esp+554h+Format]; float
0x40B567: push    edx; int
0x40B568: call    InterfaceMgr_DebugTextLine
0x40B56D: mov     eax, [esp+558h+var_478]
0x40B574: add     [esp+558h+var_510], ebx
0x40B578: push    eax
0x40B579: lea     ecx, [esp+55Ch+Dest]
0x40B580: push    offset aFreeBlocksD; "Free blocks: %d"
0x40B585: push    ecx
0x40B586: call    __sprintf
0x40B58B: fild    [esp+564h+var_510]
0x40B58F: add     esp, 20h
0x40B592: push    0FFFFFFFFh; int
0x40B594: push    1; int
0x40B596: sub     esp, 8
0x40B599: fstp    [esp+554h+Format+4]; float
0x40B59D: fild    iDebugTextLeftRightOffset
0x40B5A3: fstp    [esp+554h+Format]; float
0x40B5A6: lea     edx, [esp+554h+Dest]
0x40B5AD: push    edx; int
0x40B5AE: call    InterfaceMgr_DebugTextLine
0x40B5B3: mov     eax, [esp+558h+var_474]
0x40B5BA: add     [esp+558h+var_510], ebx
0x40B5BE: push    eax
0x40B5BF: lea     ecx, [esp+55Ch+Dest]
0x40B5C6: push    offset aMaxFreeBlocksD; "Max free blocks: %d"
0x40B5CB: push    ecx
0x40B5CC: call    __sprintf
0x40B5D1: fild    [esp+564h+var_510]
0x40B5D5: add     esp, 20h
0x40B5D8: push    0FFFFFFFFh; int
0x40B5DA: push    1; int
0x40B5DC: sub     esp, 8
0x40B5DF: fstp    [esp+554h+Format+4]; float
0x40B5E3: lea     edx, [esp+554h+Dest]
0x40B5EA: fild    iDebugTextLeftRightOffset
0x40B5F0: fstp    [esp+554h+Format]; float
0x40B5F3: push    edx; int
0x40B5F4: call    InterfaceMgr_DebugTextLine
0x40B5F9: mov     eax, [esp+558h+var_470]
0x40B600: add     [esp+558h+var_510], ebx
0x40B604: push    eax
0x40B605: lea     ecx, [esp+55Ch+Dest]
0x40B60C: push    offset aBlocksOverHeap; "Blocks over heap: %d"
0x40B611: push    ecx
0x40B612: call    __sprintf
0x40B617: fild    [esp+564h+var_510]
0x40B61B: add     esp, 20h
0x40B61E: push    0FFFFFFFFh; int
0x40B620: push    1; int
0x40B622: sub     esp, 8
0x40B625: fstp    [esp+554h+Format+4]; float
0x40B629: lea     edx, [esp+554h+Dest]
0x40B630: fild    iDebugTextLeftRightOffset
0x40B636: fstp    [esp+554h+Format]; float
0x40B639: push    edx; int
0x40B63A: call    InterfaceMgr_DebugTextLine
0x40B63F: mov     eax, [esp+558h+var_46C]
0x40B646: add     [esp+558h+var_510], ebx
0x40B64A: cdq
0x40B64B: and     edx, 3FFh
0x40B651: add     eax, edx
0x40B653: sar     eax, 0Ah
0x40B656: push    eax
0x40B657: lea     eax, [esp+55Ch+Dest]
0x40B65E: push    offset aMemOverHeapDKb; "Mem over heap: %d kb"
0x40B663: push    eax
0x40B664: call    __sprintf
0x40B669: fild    [esp+564h+var_510]
0x40B66D: add     esp, 20h
0x40B670: push    0FFFFFFFFh; int
0x40B672: push    1; int
0x40B674: sub     esp, 8
0x40B677: fstp    [esp+554h+Format+4]; float
0x40B67B: lea     ecx, [esp+554h+Dest]
0x40B682: fild    iDebugTextLeftRightOffset
0x40B688: fstp    [esp+554h+Format]; float
0x40B68B: push    ecx; int
0x40B68C: call    InterfaceMgr_DebugTextLine
0x40B691: mov     eax, [esp+558h+var_468]
0x40B698: add     [esp+558h+var_510], ebx
0x40B69C: cdq
0x40B69D: and     edx, 3FFh
0x40B6A3: add     eax, edx
0x40B6A5: sar     eax, 0Ah
0x40B6A8: push    eax
0x40B6A9: lea     edx, [esp+55Ch+Dest]
0x40B6B0: push    offset aHighMemOverHea; "High mem over heap: %d kb"
0x40B6B5: push    edx
0x40B6B6: call    __sprintf
0x40B6BB: fild    [esp+564h+var_510]
0x40B6BF: add     esp, 20h
0x40B6C2: push    0FFFFFFFFh; int
0x40B6C4: push    1; int
0x40B6C6: sub     esp, 8
0x40B6C9: fstp    [esp+554h+Format+4]; float
0x40B6CD: lea     eax, [esp+554h+Dest]
0x40B6D4: fild    iDebugTextLeftRightOffset
0x40B6DA: fstp    [esp+554h+Format]; float
0x40B6DD: push    eax; int
0x40B6DE: call    InterfaceMgr_DebugTextLine
0x40B6E3: mov     eax, [esp+558h+var_464]
0x40B6EA: cdq
0x40B6EB: and     edx, 3FFh
0x40B6F1: add     eax, edx
0x40B6F3: mov     ecx, eax
0x40B6F5: sar     ecx, 0Ah
0x40B6F8: mov     eax, ecx
0x40B6FA: imul    eax, 64h ; 'd'
0x40B6FD: xor     edx, edx
0x40B6FF: div     esi
0x40B701: add     [esp+558h+var_510], ebx
0x40B705: push    eax
0x40B706: push    ecx
0x40B707: lea     ecx, [esp+560h+Dest]
0x40B70E: push    offset aFreeBlocksMemD; "Free blocks mem: %d kb, %d%%"
0x40B713: push    ecx
0x40B714: call    __sprintf
0x40B719: fild    [esp+568h+var_510]
0x40B71D: add     esp, 24h
0x40B720: push    0FFFFFFFFh; int
0x40B722: push    1; int
0x40B724: sub     esp, 8
0x40B727: fstp    [esp+554h+Format+4]; float
0x40B72B: lea     edx, [esp+554h+Dest]
0x40B732: fild    iDebugTextLeftRightOffset
0x40B738: fstp    [esp+554h+Format]; float
0x40B73B: push    edx; int
0x40B73C: call    InterfaceMgr_DebugTextLine
0x40B741: mov     eax, [esp+558h+var_460]
0x40B748: cdq
0x40B749: and     edx, 3FFh
0x40B74F: add     eax, edx
0x40B751: mov     ecx, eax
0x40B753: sar     ecx, 0Ah
0x40B756: mov     eax, ecx
0x40B758: imul    eax, 64h ; 'd'
0x40B75B: xor     edx, edx
0x40B75D: div     esi
0x40B75F: add     [esp+558h+var_510], ebx
0x40B763: push    eax
0x40B764: push    ecx
0x40B765: lea     eax, [esp+560h+Dest]
0x40B76C: push    offset aUsedBlockMemDK; "Used block mem: %d kb, %d%%"
0x40B771: push    eax
0x40B772: call    __sprintf
0x40B777: fild    [esp+568h+var_510]
0x40B77B: add     esp, 24h
0x40B77E: push    0FFFFFFFFh; int
0x40B780: push    1; int
0x40B782: sub     esp, 8
0x40B785: fstp    [esp+554h+Format+4]; float
0x40B789: lea     ecx, [esp+554h+Dest]
0x40B790: fild    iDebugTextLeftRightOffset
0x40B796: fstp    [esp+554h+Format]; float
0x40B799: push    ecx; int
0x40B79A: call    InterfaceMgr_DebugTextLine
0x40B79F: mov     eax, [esp+558h+var_45C]
0x40B7A6: add     [esp+558h+var_510], ebx
0x40B7AA: cdq
0x40B7AB: and     edx, 3FFh
0x40B7B1: add     eax, edx
0x40B7B3: sar     eax, 0Ah
0x40B7B6: push    eax
0x40B7B7: lea     edx, [esp+55Ch+Dest]
0x40B7BE: push    offset aLargestFreeBlo; "Largest free block size: %d kb"
0x40B7C3: push    edx
0x40B7C4: call    __sprintf
0x40B7C9: fild    [esp+564h+var_510]
0x40B7CD: add     esp, 20h
0x40B7D0: push    0FFFFFFFFh; int
0x40B7D2: push    1; int
0x40B7D4: sub     esp, 8
0x40B7D7: fstp    [esp+554h+Format+4]; float
0x40B7DB: lea     eax, [esp+554h+Dest]
0x40B7E2: fild    iDebugTextLeftRightOffset
0x40B7E8: fstp    [esp+554h+Format]; float
0x40B7EB: push    eax; int
0x40B7EC: call    InterfaceMgr_DebugTextLine
0x40B7F1: add     [esp+558h+var_510], ebx
0x40B7F5: mov     eax, [esp+558h+var_458]
0x40B7FC: cdq
0x40B7FD: and     edx, 3FFh
0x40B803: add     eax, edx
0x40B805: sar     eax, 0Ah
0x40B808: push    eax
0x40B809: lea     ecx, [esp+55Ch+Dest]
0x40B810: push    offset aLargestUsedBlo; "Largest used block size: %d kb"
0x40B815: push    ecx
0x40B816: call    __sprintf
0x40B81B: fild    [esp+564h+var_510]
0x40B81F: add     esp, 20h
0x40B822: push    0FFFFFFFFh; int
0x40B824: push    1; int
0x40B826: sub     esp, 8
0x40B829: fstp    [esp+554h+Format+4]; float
0x40B82D: lea     edx, [esp+554h+Dest]
0x40B834: fild    iDebugTextLeftRightOffset
0x40B83A: fstp    [esp+554h+Format]; float
0x40B83D: push    edx; int
0x40B83E: call    InterfaceMgr_DebugTextLine
0x40B843: mov     eax, [esp+558h+var_454]
0x40B84A: add     [esp+558h+var_510], ebx
0x40B84E: cdq
0x40B84F: and     edx, 3FFh
0x40B855: add     eax, edx
0x40B857: sar     eax, 0Ah
0x40B85A: push    eax
0x40B85B: lea     eax, [esp+55Ch+Dest]
0x40B862: push    offset aClassOverheadD; "Class overhead: %d kb"
0x40B867: push    eax
0x40B868: call    __sprintf
0x40B86D: fild    [esp+564h+var_510]
0x40B871: add     esp, 20h
0x40B874: push    0FFFFFFFFh; int
0x40B876: push    1; int
0x40B878: sub     esp, 8
0x40B87B: fstp    [esp+554h+Format+4]; float
0x40B87F: lea     ecx, [esp+554h+Dest]
0x40B886: fild    iDebugTextLeftRightOffset
0x40B88C: fstp    [esp+554h+Format]; float
0x40B88F: push    ecx; int
0x40B890: call    InterfaceMgr_DebugTextLine
0x40B895: mov     eax, [esp+558h+var_450]
0x40B89C: add     [esp+558h+var_510], ebx
0x40B8A0: cdq
0x40B8A1: and     edx, 3FFh
0x40B8A7: add     eax, edx
0x40B8A9: sar     eax, 0Ah
0x40B8AC: push    eax
0x40B8AD: lea     edx, [esp+55Ch+Dest]
0x40B8B4: push    offset aFreeListOverhe; "Free list overhead: %d kb"
0x40B8B9: push    edx
0x40B8BA: call    __sprintf
0x40B8BF: fild    [esp+564h+var_510]
0x40B8C3: add     esp, 20h
0x40B8C6: push    0FFFFFFFFh; int
0x40B8C8: push    1; int
0x40B8CA: sub     esp, 8
0x40B8CD: fstp    [esp+554h+Format+4]; float
0x40B8D1: lea     eax, [esp+554h+Dest]
0x40B8D8: fild    iDebugTextLeftRightOffset
0x40B8DE: fstp    [esp+554h+Format]; float
0x40B8E1: push    eax; int
0x40B8E2: call    InterfaceMgr_DebugTextLine
0x40B8E7: mov     eax, [esp+558h+var_44C]
0x40B8EE: add     [esp+558h+var_510], ebx
0x40B8F2: cdq
0x40B8F3: and     edx, 3FFh
0x40B8F9: add     eax, edx
0x40B8FB: sar     eax, 0Ah
0x40B8FE: push    eax
0x40B8FF: lea     ecx, [esp+55Ch+Dest]
0x40B906: push    offset aMemDebugOverhe; "Mem debug overhead: %d kb"
0x40B90B: push    ecx
0x40B90C: call    __sprintf
0x40B911: fild    [esp+564h+var_510]
0x40B915: add     esp, 20h
0x40B918: push    0FFFFFFFFh; int
0x40B91A: push    1; int
0x40B91C: sub     esp, 8
0x40B91F: fstp    [esp+554h+Format+4]; float
0x40B923: lea     edx, [esp+554h+Dest]
0x40B92A: fild    iDebugTextLeftRightOffset
0x40B930: fstp    [esp+554h+Format]; float
0x40B933: push    edx; int
0x40B934: call    InterfaceMgr_DebugTextLine
0x40B939: mov     eax, [esp+558h+var_448]
0x40B940: add     [esp+558h+var_510], ebx
0x40B944: cdq
0x40B945: and     edx, 3FFh
0x40B94B: add     eax, edx
0x40B94D: sar     eax, 0Ah
0x40B950: push    eax
0x40B951: lea     eax, [esp+55Ch+Dest]
0x40B958: push    offset aMemUsedSystemD; "Mem used (System): %d kb"
0x40B95D: push    eax
0x40B95E: call    __sprintf
0x40B963: fild    [esp+564h+var_510]
0x40B967: add     esp, 20h
0x40B96A: push    0FFFFFFFFh; int
0x40B96C: push    1; int
0x40B96E: sub     esp, 8
0x40B971: fstp    [esp+554h+Format+4]; float
0x40B975: lea     ecx, [esp+554h+Dest]
0x40B97C: fild    iDebugTextLeftRightOffset
0x40B982: fstp    [esp+554h+Format]; float
0x40B985: push    ecx; int
0x40B986: call    InterfaceMgr_DebugTextLine
0x40B98B: mov     eax, [esp+558h+var_444]
0x40B992: add     [esp+558h+var_510], ebx
0x40B996: cdq
0x40B997: and     edx, 3FFh
0x40B99D: add     eax, edx
0x40B99F: sar     eax, 0Ah
0x40B9A2: push    eax
0x40B9A3: lea     edx, [esp+55Ch+Dest]
0x40B9AA: push    offset aMemTotalSystem; "Mem total (System): %d kb"
0x40B9AF: push    edx
0x40B9B0: call    __sprintf
0x40B9B5: fild    [esp+564h+var_510]
0x40B9B9: add     esp, 20h
0x40B9BC: push    0FFFFFFFFh; int
0x40B9BE: push    1; int
0x40B9C0: sub     esp, 8
0x40B9C3: fstp    [esp+554h+Format+4]; float
0x40B9C7: lea     eax, [esp+554h+Dest]
0x40B9CE: fild    iDebugTextLeftRightOffset
0x40B9D4: fstp    [esp+554h+Format]; float
0x40B9D7: push    eax; int
0x40B9D8: call    InterfaceMgr_DebugTextLine
0x40B9DD: mov     eax, [esp+558h+var_440]
0x40B9E4: add     [esp+558h+var_510], ebx
0x40B9E8: cdq
0x40B9E9: and     edx, 3FFh
0x40B9EF: add     eax, edx
0x40B9F1: sar     eax, 0Ah
0x40B9F4: push    eax
0x40B9F5: lea     ecx, [esp+55Ch+Dest]
0x40B9FC: push    offset aHighMemUsedSys; "High mem used (System): %d kb"
0x40BA01: push    ecx
0x40BA02: call    __sprintf
0x40BA07: fild    [esp+564h+var_510]
0x40BA0B: add     esp, 20h
0x40BA0E: push    0FFFFFFFFh; int
0x40BA10: push    1; int
0x40BA12: sub     esp, 8
0x40BA15: fstp    [esp+554h+Format+4]; float
0x40BA19: lea     edx, [esp+554h+Dest]
0x40BA20: fild    iDebugTextLeftRightOffset
0x40BA26: fstp    [esp+554h+Format]; float
0x40BA29: push    edx; int
0x40BA2A: call    InterfaceMgr_DebugTextLine
0x40BA2F: mov     eax, [esp+558h+var_43C]
0x40BA36: add     [esp+558h+var_510], ebx
0x40BA3A: cdq
0x40BA3B: and     edx, 3FFh
0x40BA41: add     eax, edx
0x40BA43: sar     eax, 0Ah
0x40BA46: push    eax
0x40BA47: push    offset aMemUsedByPools; "Mem used by pools: %d kb"
0x40BA4C: lea     eax, [esp+560h+Dest]
0x40BA53: push    eax
0x40BA54: call    __sprintf
0x40BA59: fild    [esp+564h+var_510]
0x40BA5D: add     esp, 20h
0x40BA60: push    0FFFFFFFFh
0x40BA62: push    1
0x40BA64: sub     esp, 8
0x40BA67: fstp    [esp+554h+Format+4]
0x40BA6B: fild    iDebugTextLeftRightOffset
0x40BA71: jmp     loc_40C008
0x40BA76: lea     edx, [esp+544h+Dest]; jumptable 00407DFE case 27
0x40BA7D: push    offset aMemcontext; "MEMCONTEXT"
0x40BA82: push    edx
0x40BA83: call    __sprintf
0x40BA88: fild    [esp+54Ch+var_510]
0x40BA8C: add     esp, 8
0x40BA8F: push    0FFFFFFFFh; int
0x40BA91: push    1; int
0x40BA93: sub     esp, 8
0x40BA96: fstp    [esp+554h+Format+4]; float
0x40BA9A: lea     eax, [esp+554h+Dest]
0x40BAA1: fild    iDebugTextLeftRightOffset
0x40BAA7: fstp    [esp+554h+Format]; float
0x40BAAA: push    eax; int
0x40BAAB: call    InterfaceMgr_DebugTextLine
0x40BAB0: add     [esp+558h+var_510], ebx
0x40BAB4: lea     ecx, [esp+558h+Dest]
0x40BABB: push    offset aNotEnabled; "NOT ENABLED"
0x40BAC0: push    ecx
0x40BAC1: call    __sprintf
0x40BAC6: fild    [esp+560h+var_510]
0x40BACA: add     esp, 1Ch
0x40BACD: push    0FFFFFFFFh
0x40BACF: push    1
0x40BAD1: sub     esp, 8
0x40BAD4: fstp    [esp+554h+Format+4]
0x40BAD8: lea     edx, [esp+554h+Dest]
0x40BADF: fild    iDebugTextLeftRightOffset
0x40BAE5: fstp    [esp+554h+Format]
0x40BAE8: push    edx
0x40BAE9: jmp     loc_40C013
0x40BAEE: lea     eax, [esp+544h+Dest]; jumptable 00407DFE case 28
0x40BAF5: push    offset aSystemMemconte; "SYSTEM MEMCONTEXT"
0x40BAFA: push    eax
0x40BAFB: call    __sprintf
0x40BB00: fild    [esp+54Ch+var_510]
0x40BB04: add     esp, 8
0x40BB07: push    0FFFFFFFFh; int
0x40BB09: push    1; int
0x40BB0B: sub     esp, 8
0x40BB0E: fstp    [esp+554h+Format+4]; float
0x40BB12: lea     ecx, [esp+554h+Dest]
0x40BB19: fild    iDebugTextLeftRightOffset
0x40BB1F: fstp    [esp+554h+Format]; float
0x40BB22: push    ecx; int
0x40BB23: call    InterfaceMgr_DebugTextLine
0x40BB28: add     [esp+558h+var_510], ebx
0x40BB2C: lea     edx, [esp+558h+Dest]
0x40BB33: push    offset aNotEnabled; "NOT ENABLED"
0x40BB38: push    edx
0x40BB39: call    __sprintf
0x40BB3E: fild    [esp+560h+var_510]
0x40BB42: add     esp, 1Ch
0x40BB45: push    0FFFFFFFFh
0x40BB47: push    1
0x40BB49: sub     esp, 8
0x40BB4C: fstp    [esp+554h+Format+4]
0x40BB50: lea     eax, [esp+554h+Dest]
0x40BB57: fild    iDebugTextLeftRightOffset
0x40BB5D: fstp    [esp+554h+Format]
0x40BB60: push    eax
0x40BB61: jmp     loc_40C013
0x40BB66: lea     ecx, [esp+544h+Dest]; jumptable 00407DFE case 32
0x40BB6D: push    offset aMemInfo; "MEM INFO"
0x40BB72: push    ecx
0x40BB73: call    __sprintf
0x40BB78: fild    [esp+54Ch+var_510]
0x40BB7C: add     esp, 8
0x40BB7F: push    0FFFFFFFFh; int
0x40BB81: push    1; int
0x40BB83: sub     esp, 8
0x40BB86: fstp    [esp+554h+Format+4]; float
0x40BB8A: lea     edx, [esp+554h+Dest]
0x40BB91: fild    iDebugTextLeftRightOffset
0x40BB97: fstp    [esp+554h+Format]; float
0x40BB9A: push    edx; int
0x40BB9B: call    InterfaceMgr_DebugTextLine
0x40BBA0: add     [esp+558h+var_510], ebx
0x40BBA4: lea     eax, [esp+558h+Dest]
0x40BBAB: push    offset aGameNotCompile; "Game not compiled with MEM_DEBUG."
0x40BBB0: push    eax
0x40BBB1: call    __sprintf
0x40BBB6: fild    [esp+560h+var_510]
0x40BBBA: add     esp, 1Ch
0x40BBBD: push    0FFFFFFFFh; int
0x40BBBF: push    1; int
0x40BBC1: sub     esp, 8
0x40BBC4: fstp    [esp+554h+Format+4]; float
0x40BBC8: lea     ecx, [esp+554h+Dest]
0x40BBCF: fild    iDebugTextLeftRightOffset
0x40BBD5: fstp    [esp+554h+Format]; float
0x40BBD8: push    ecx; int
0x40BBD9: call    InterfaceMgr_DebugTextLine
0x40BBDE: mov     ecx, TES
0x40BBE4: lea     edx, [ebx+ebx*4]
0x40BBE7: add     edx, edx
0x40BBE9: add     esp, 14h
0x40BBEC: mov     [esp+544h+var_510], edx
0x40BBF0: call    sub_43FD20
0x40BBF5: xor     edi, edi
0x40BBF7: xor     esi, esi
0x40BBF9: cmp     eax, edi
0x40BBFB: jbe     short loc_40BC15
0x40BBFD: mov     ecx, TES
0x40BC03: mov     ecx, [ecx+3Ch]
0x40BC06: cmp     [ecx], edi
0x40BC08: jz      short loc_40BC0D
0x40BC0A: add     esi, 1
0x40BC0D: add     ecx, 4
0x40BC10: sub     eax, 1
0x40BC13: jnz     short loc_40BC06
0x40BC15: lea     edx, [esp+544h+Dest]
0x40BC1C: push    offset aExteriorCellBu; "Exterior Cell Buffer"
0x40BC21: push    edx
0x40BC22: call    __sprintf
0x40BC27: fild    [esp+54Ch+var_510]
0x40BC2B: add     esp, 8
0x40BC2E: push    0FFFFFFFFh; int
0x40BC30: push    1; int
0x40BC32: sub     esp, 8
0x40BC35: fstp    [esp+554h+Format+4]; float
0x40BC39: lea     eax, [esp+554h+Dest]
0x40BC40: fild    iDebugTextLeftRightOffset
0x40BC46: fstp    [esp+554h+Format]; float
0x40BC49: push    eax; int
0x40BC4A: call    InterfaceMgr_DebugTextLine
0x40BC4F: push    esi
0x40BC50: lea     ecx, [esp+55Ch+Dest]
0x40BC57: push    offset aI; "%i"
0x40BC5C: push    ecx
0x40BC5D: call    __sprintf
0x40BC62: fild    [esp+564h+var_510]
0x40BC66: mov     edx, iDebugTextLeftRightOffset
0x40BC6C: add     esp, 20h
0x40BC6F: push    0FFFFFFFFh; int
0x40BC71: push    1; int
0x40BC73: sub     esp, 8
0x40BC76: add     edx, 1C2h
0x40BC7C: fstp    [esp+554h+Format+4]; float
0x40BC80: mov     [esp+554h+var_4E8.m_data], edx
0x40BC84: fild    [esp+554h+var_4E8.m_data]
0x40BC88: lea     eax, [esp+554h+Dest]
0x40BC8F: fstp    [esp+554h+Format]; float
0x40BC92: push    eax; int
0x40BC93: call    InterfaceMgr_DebugTextLine
0x40BC98: mov     ecx, TES
0x40BC9E: add     [esp+558h+var_510], ebx
0x40BCA2: add     esp, 14h
0x40BCA5: call    sub_43FD30
0x40BCAA: xor     esi, esi
0x40BCAC: cmp     eax, edi
0x40BCAE: jbe     short loc_40BCCF
0x40BCB0: mov     ecx, TES
0x40BCB6: mov     ecx, [ecx+38h]
0x40BCB9: lea     esp, [esp+0]
0x40BCC0: cmp     [ecx], edi
0x40BCC2: jz      short loc_40BCC7
0x40BCC4: add     esi, 1
0x40BCC7: add     ecx, 4
0x40BCCA: sub     eax, 1
0x40BCCD: jnz     short loc_40BCC0
0x40BCCF: lea     edx, [esp+544h+Dest]
0x40BCD6: push    offset aInteriorCellBu; "Interior Cell Buffer"
0x40BCDB: push    edx
0x40BCDC: call    __sprintf
0x40BCE1: fild    [esp+54Ch+var_510]
0x40BCE5: add     esp, 8
0x40BCE8: push    0FFFFFFFFh; int
0x40BCEA: push    1; int
0x40BCEC: sub     esp, 8
0x40BCEF: fstp    [esp+554h+Format+4]; float
0x40BCF3: lea     eax, [esp+554h+Dest]
0x40BCFA: fild    iDebugTextLeftRightOffset
0x40BD00: fstp    [esp+554h+Format]; float
0x40BD03: push    eax; int
0x40BD04: call    InterfaceMgr_DebugTextLine
0x40BD09: push    esi
0x40BD0A: lea     ecx, [esp+55Ch+Dest]
0x40BD11: push    offset aI; "%i"
0x40BD16: push    ecx
0x40BD17: call    __sprintf
0x40BD1C: fild    [esp+564h+var_510]
0x40BD20: mov     edx, iDebugTextLeftRightOffset
0x40BD26: add     esp, 20h
0x40BD29: push    0FFFFFFFFh; int
0x40BD2B: push    1; int
0x40BD2D: sub     esp, 8
0x40BD30: add     edx, 1C2h
0x40BD36: fstp    [esp+554h+Format+4]; float
0x40BD3A: mov     [esp+554h+var_4E8.m_data], edx
0x40BD3E: fild    [esp+554h+var_4E8.m_data]
0x40BD42: lea     eax, [esp+554h+Dest]
0x40BD49: fstp    [esp+554h+Format]; float
0x40BD4C: push    eax; int
0x40BD4D: call    InterfaceMgr_DebugTextLine
0x40BD52: mov     ecx, [esp+558h+var_510]
0x40BD56: add     esp, 14h
0x40BD59: lea     edx, [ecx+ebx*2]
0x40BD5C: push    edi; a2
0x40BD5D: mov     ecx, offset ActorProcessManager_ptr; this
0x40BD62: mov     [esp+548h+var_510], edx
0x40BD66: mov     [esp+548h+var_500], edi
0x40BD6A: mov     [esp+548h+var_4F8], edi
0x40BD6E: mov     [esp+548h+var_504], edi
0x40BD72: call    sub_673A50
0x40BD77: mov     ecx, eax; this
0x40BD79: call    sub_7616D0
0x40BD7E: mov     esi, eax
0x40BD80: cmp     esi, edi
0x40BD82: jz      short loc_40BDC4
0x40BD84: mov     edi, [esi]
0x40BD86: test    edi, edi
0x40BD88: jz      short loc_40BDBD
0x40BD8A: mov     eax, [edi]
0x40BD8C: mov     edx, [eax+190h]
0x40BD92: mov     ecx, edi
0x40BD94: call    edx
0x40BD96: test    al, al
0x40BD98: jnz     short loc_40BDA1
0x40BD9A: add     [esp+544h+var_504], 1
0x40BD9F: jmp     short loc_40BDBD
0x40BDA1: mov     eax, [edi]
0x40BDA3: mov     edx, [eax+334h]
0x40BDA9: add     [esp+544h+var_500], 1
0x40BDAE: push    1
0x40BDB0: mov     ecx, edi
0x40BDB2: call    edx
0x40BDB4: test    al, al
0x40BDB6: jz      short loc_40BDBD
0x40BDB8: add     [esp+544h+var_4F8], 1
0x40BDBD: mov     esi, [esi+4]
0x40BDC0: test    esi, esi
0x40BDC2: jnz     short loc_40BD84
0x40BDC4: lea     eax, [esp+544h+Dest]
0x40BDCB: push    offset aHighActors; "High Actors"
0x40BDD0: push    eax
0x40BDD1: call    __sprintf
0x40BDD6: fild    [esp+54Ch+var_510]
0x40BDDA: add     esp, 8
0x40BDDD: push    0FFFFFFFFh; int
0x40BDDF: push    1; int
0x40BDE1: sub     esp, 8
0x40BDE4: fstp    [esp+554h+Format+4]; float
0x40BDE8: lea     ecx, [esp+554h+Dest]
0x40BDEF: fild    iDebugTextLeftRightOffset
0x40BDF5: fstp    [esp+554h+Format]; float
0x40BDF8: push    ecx; int
0x40BDF9: call    InterfaceMgr_DebugTextLine
0x40BDFE: mov     edx, [esp+558h+var_500]
0x40BE02: push    edx
0x40BE03: lea     eax, [esp+55Ch+Dest]
0x40BE0A: push    offset aI; "%i"
0x40BE0F: push    eax
0x40BE10: call    __sprintf
0x40BE15: fild    [esp+564h+var_510]
0x40BE19: mov     ecx, iDebugTextLeftRightOffset
0x40BE1F: add     esp, 20h
0x40BE22: push    0FFFFFFFFh; int
0x40BE24: push    1; int
0x40BE26: sub     esp, 8
0x40BE29: add     ecx, 1C2h
0x40BE2F: fstp    [esp+554h+Format+4]; float
0x40BE33: mov     [esp+554h+var_4E8.m_data], ecx
0x40BE37: fild    [esp+554h+var_4E8.m_data]
0x40BE3B: lea     edx, [esp+554h+Dest]
0x40BE42: fstp    [esp+554h+Format]; float
0x40BE45: push    edx; int
0x40BE46: call    InterfaceMgr_DebugTextLine
0x40BE4B: add     [esp+558h+var_510], ebx
0x40BE4F: add     esp, 14h
0x40BE52: push    1; a2
0x40BE54: mov     ecx, offset ActorProcessManager_ptr; this
0x40BE59: call    sub_673A50
0x40BE5E: mov     edi, eax
0x40BE60: lea     eax, [esp+544h+Dest]
0x40BE67: push    offset aMiddleHighActo; "Middle High Actors"
0x40BE6C: push    eax
0x40BE6D: call    __sprintf
0x40BE72: fild    [esp+54Ch+var_510]
0x40BE76: add     esp, 8
0x40BE79: push    0FFFFFFFFh; int
0x40BE7B: push    1; int
0x40BE7D: sub     esp, 8
0x40BE80: fstp    [esp+554h+Format+4]; float
0x40BE84: lea     ecx, [esp+554h+Dest]
0x40BE8B: fild    iDebugTextLeftRightOffset
0x40BE91: fstp    [esp+554h+Format]; float
0x40BE94: push    ecx; int
0x40BE95: call    InterfaceMgr_DebugTextLine
0x40BE9A: add     esp, 14h
0x40BE9D: mov     ecx, edi; this
0x40BE9F: xor     esi, esi
0x40BEA1: call    sub_7616D0
0x40BEA6: test    eax, eax
0x40BEA8: jz      short loc_40BEBF
0x40BEAA: lea     ebx, [ebx+0]
0x40BEB0: cmp     dword ptr [eax], 0
0x40BEB3: jz      short loc_40BEB8
0x40BEB5: add     esi, 1
0x40BEB8: mov     eax, [eax+4]
0x40BEBB: test    eax, eax
0x40BEBD: jnz     short loc_40BEB0
0x40BEBF: push    esi
0x40BEC0: lea     edx, [esp+548h+Dest]
0x40BEC7: push    offset aI; "%i"
0x40BECC: push    edx
0x40BECD: call    __sprintf
0x40BED2: fild    [esp+550h+var_510]
0x40BED6: mov     eax, iDebugTextLeftRightOffset
0x40BEDB: add     esp, 0Ch
0x40BEDE: push    0FFFFFFFFh; int
0x40BEE0: push    1; int
0x40BEE2: sub     esp, 8
0x40BEE5: add     eax, 1C2h
0x40BEEA: fstp    [esp+554h+Format+4]; float
0x40BEEE: mov     [esp+554h+var_4E8.m_data], eax
0x40BEF2: fild    [esp+554h+var_4E8.m_data]
0x40BEF6: lea     ecx, [esp+554h+Dest]
0x40BEFD: fstp    [esp+554h+Format]; float
0x40BF00: push    ecx; int
0x40BF01: call    InterfaceMgr_DebugTextLine
0x40BF06: add     [esp+558h+var_510], ebx
0x40BF0A: lea     edx, [esp+558h+Dest]
0x40BF11: push    offset aCombatActors; "Combat Actors"
0x40BF16: push    edx
0x40BF17: call    __sprintf
0x40BF1C: fild    [esp+560h+var_510]
0x40BF20: add     esp, 1Ch
0x40BF23: push    0FFFFFFFFh; int
0x40BF25: push    1; int
0x40BF27: sub     esp, 8
0x40BF2A: fstp    [esp+554h+Format+4]; float
0x40BF2E: lea     eax, [esp+554h+Dest]
0x40BF35: fild    iDebugTextLeftRightOffset
0x40BF3B: fstp    [esp+554h+Format]; float
0x40BF3E: push    eax; int
0x40BF3F: call    InterfaceMgr_DebugTextLine
0x40BF44: mov     ecx, [esp+558h+var_4F8]
0x40BF48: push    ecx
0x40BF49: lea     edx, [esp+55Ch+Dest]
0x40BF50: push    offset aI; "%i"
0x40BF55: push    edx
0x40BF56: call    __sprintf
0x40BF5B: fild    [esp+564h+var_510]
0x40BF5F: mov     eax, iDebugTextLeftRightOffset
0x40BF64: add     esp, 20h
0x40BF67: push    0FFFFFFFFh; int
0x40BF69: push    1; int
0x40BF6B: sub     esp, 8
0x40BF6E: add     eax, 1C2h
0x40BF73: fstp    [esp+554h+Format+4]; float
0x40BF77: mov     [esp+554h+var_4E8.m_data], eax
0x40BF7B: fild    [esp+554h+var_4E8.m_data]
0x40BF7F: lea     ecx, [esp+554h+Dest]
0x40BF86: fstp    [esp+554h+Format]; float
0x40BF89: push    ecx; int
0x40BF8A: call    InterfaceMgr_DebugTextLine
0x40BF8F: add     [esp+558h+var_510], ebx
0x40BF93: lea     edx, [esp+558h+Dest]
0x40BF9A: push    offset aNonActorMobile; "Non-Actor Mobile Objects"
0x40BF9F: push    edx
0x40BFA0: call    __sprintf
0x40BFA5: fild    [esp+560h+var_510]
0x40BFA9: add     esp, 1Ch
0x40BFAC: push    0FFFFFFFFh; int
0x40BFAE: push    1; int
0x40BFB0: sub     esp, 8
0x40BFB3: fstp    [esp+554h+Format+4]; float
0x40BFB7: lea     eax, [esp+554h+Dest]
0x40BFBE: fild    iDebugTextLeftRightOffset
0x40BFC4: fstp    [esp+554h+Format]; float
0x40BFC7: push    eax; int
0x40BFC8: call    InterfaceMgr_DebugTextLine
0x40BFCD: mov     ecx, [esp+558h+var_504]
0x40BFD1: push    ecx
0x40BFD2: lea     edx, [esp+55Ch+Dest]
0x40BFD9: push    offset aI; "%i"
0x40BFDE: push    edx
0x40BFDF: call    __sprintf
0x40BFE4: fild    [esp+564h+var_510]
0x40BFE8: add     esp, 20h
0x40BFEB: push    0FFFFFFFFh; int
0x40BFED: push    1; int
0x40BFEF: mov     eax, iDebugTextLeftRightOffset
0x40BFF4: sub     esp, 8
0x40BFF7: add     eax, 1C2h
0x40BFFC: fstp    [esp+554h+Format+4]; float
0x40C000: mov     [esp+554h+var_4E8.m_data], eax
0x40C004: fild    [esp+554h+var_4E8.m_data]
0x40C008: lea     ecx, [esp+554h+Dest]
0x40C00F: fstp    [esp+554h+Format]; float
0x40C012: push    ecx; int
0x40C013: call    InterfaceMgr_DebugTextLine
0x40C018: add     esp, 14h
0x40C01B: add     [esp+544h+var_510], ebx
0x40C01F: mov     esi, [esp+544h+var_510]; jumptable 00407DFE default case, case 12
0x40C023: cmp     esi, dword_B333FC
0x40C029: mov     edi, [esp+544h+var_50C]
0x40C02D: jge     short loc_40C067
0x40C02F: nop
0x40C030: fild    [esp+544h+var_510]
0x40C034: push    0FFFFFFFFh; int
0x40C036: push    1; int
0x40C038: sub     esp, 8
0x40C03B: fstp    [esp+554h+Format+4]; float
0x40C03F: fild    iDebugTextLeftRightOffset
0x40C045: fstp    [esp+554h+Format]; float
0x40C048: push    offset EmptyString; int
0x40C04D: call    InterfaceMgr_DebugTextLine
0x40C052: mov     eax, [esp+558h+var_510]
0x40C056: add     eax, ebx
0x40C058: add     esp, 14h
0x40C05B: cmp     eax, dword_B333FC
0x40C061: mov     [esp+544h+var_510], eax
0x40C065: jl      short loc_40C030
0x40C067: mov     edx, [esp+544h+var_50C]
0x40C06B: cmp     edx, dword_B333F8
0x40C071: mov     dword_B333FC, esi
0x40C077: jge     short loc_40C0C4
0x40C079: lea     esp, [esp+0]
0x40C080: fild    [esp+544h+var_50C]
0x40C084: push    0FFFFFFFFh; int
0x40C086: push    3; int
0x40C088: mov     eax, 500h
0x40C08D: sub     eax, iDebugTextLeftRightOffset
0x40C093: sub     esp, 8
0x40C096: fstp    [esp+554h+Format+4]; float
0x40C09A: mov     [esp+554h+var_4E8.m_data], eax
0x40C09E: fild    [esp+554h+var_4E8.m_data]
0x40C0A2: fstp    [esp+554h+Format]; float
0x40C0A5: push    offset EmptyString; int
0x40C0AA: call    InterfaceMgr_DebugTextLine
0x40C0AF: mov     eax, [esp+558h+var_50C]
0x40C0B3: add     eax, ebx
0x40C0B5: add     esp, 14h
0x40C0B8: cmp     eax, dword_B333F8
0x40C0BE: mov     [esp+544h+var_50C], eax
0x40C0C2: jl      short loc_40C080
0x40C0C4: mov     dword_B333F8, edi
0x40C0CA: mov     ecx, dword ptr [esp+544h+var_C]
0x40C0D1: mov     large fs:0, ecx
0x40C0D8: pop     ecx
0x40C0D9: pop     edi
0x40C0DA: pop     esi
0x40C0DB: pop     ebx
0x40C0DC: mov     ecx, [esp+534h+var_44]
0x40C0E3: xor     ecx, esp
0x40C0E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x40C0EA: mov     esp, ebp
0x40C0EC: pop     ebp
0x40C0ED: retn
