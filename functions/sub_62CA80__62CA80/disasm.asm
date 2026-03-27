0x62CA80: sub     esp, 44h
0x62CA83: push    ebx
0x62CA84: push    ebp
0x62CA85: push    esi
0x62CA86: mov     esi, ecx
0x62CA88: mov     eax, [esi]
0x62CA8A: mov     edx, [eax+184h]
0x62CA90: push    edi
0x62CA91: call    edx
0x62CA93: mov     ebx, eax
0x62CA95: test    ebx, ebx
0x62CA97: mov     [esp+54h+var_30], ebx
0x62CA9B: jz      short loc_62CAA7
0x62CA9D: test    byte ptr [ebx+1Eh], 1
0x62CAA1: jnz     loc_62D73F
0x62CAA7: mov     edi, [esp+54h+arg_0]
0x62CAAB: mov     ecx, ds:0B333C4h
0x62CAB1: push    edi; Concurrency::details::SchedulerBase *
0x62CAB2: call    sub_660E90
0x62CAB7: test    al, al
0x62CAB9: jz      short loc_62CAE0
0x62CABB: mov     eax, ds:0B333C4h
0x62CAC0: cmp     byte ptr [eax+115h], 0
0x62CAC7: jz      short loc_62CAE0
0x62CAC9: mov     edx, [esi]
0x62CACB: mov     eax, [edx+194h]
0x62CAD1: push    edi
0x62CAD2: mov     ecx, esi
0x62CAD4: call    eax
0x62CAD6: pop     edi
0x62CAD7: pop     esi
0x62CAD8: pop     ebp
0x62CAD9: pop     ebx
0x62CADA: add     esp, 44h
0x62CADD: retn    10h
0x62CAE0: cmp     dword ptr [esi+2Ch], 0
0x62CAE4: jnz     short loc_62CB58
0x62CAE6: mov     edx, [edi]
0x62CAE8: mov     eax, [edx+334h]
0x62CAEE: push    1
0x62CAF0: mov     ecx, edi
0x62CAF2: call    eax
0x62CAF4: test    al, al
0x62CAF6: jz      short loc_62CB20
0x62CAF8: mov     edx, [edi]
0x62CAFA: mov     eax, [edx+330h]
0x62CB00: mov     ecx, edi
0x62CB02: call    eax
0x62CB04: test    eax, eax
0x62CB06: jz      short loc_62CB20
0x62CB08: mov     edx, [edi]
0x62CB0A: mov     eax, [edx+330h]
0x62CB10: mov     ecx, edi
0x62CB12: call    eax
0x62CB14: mov     ecx, eax
0x62CB16: call    sub_6135F0
0x62CB1B: mov     [esi+2Ch], eax
0x62CB1E: jmp     short loc_62CB2D
0x62CB20: mov     edx, [esi]
0x62CB22: mov     eax, [edx+558h]
0x62CB28: push    edi
0x62CB29: mov     ecx, esi
0x62CB2B: call    eax
0x62CB2D: mov     ecx, [esi+2Ch]
0x62CB30: test    ecx, ecx
0x62CB32: jz      short loc_62CB58
0x62CB34: mov     edx, [ecx]
0x62CB36: mov     eax, [edx+174h]
0x62CB3C: call    eax
0x62CB3E: mov     ecx, [eax]
0x62CB40: mov     [esi+0D4h], ecx
0x62CB46: mov     edx, [eax+4]
0x62CB49: mov     [esi+0D8h], edx
0x62CB4F: mov     eax, [eax+8]
0x62CB52: mov     [esi+0DCh], eax
0x62CB58: mov     ecx, [esi+2Ch]
0x62CB5B: test    ecx, ecx
0x62CB5D: jnz     short loc_62CB82
0x62CB5F: cmp     byte ptr [esp+54h+arg_4], cl
0x62CB63: jz      loc_62D73F
0x62CB69: mov     edx, [esi]
0x62CB6B: mov     eax, [edx+188h]
0x62CB71: push    1
0x62CB73: push    edi
0x62CB74: mov     ecx, esi
0x62CB76: call    eax
0x62CB78: pop     edi
0x62CB79: pop     esi
0x62CB7A: pop     ebp
0x62CB7B: pop     ebx
0x62CB7C: add     esp, 44h
0x62CB7F: retn    10h
0x62CB82: mov     ebp, [ecx+8]
0x62CB85: mov     eax, ebp
0x62CB87: shr     eax, 5
0x62CB8A: and     al, 1
0x62CB8C: jnz     loc_62D71B
0x62CB92: mov     edx, ebp
0x62CB94: shr     edx, 0Bh
0x62CB97: test    dl, 1
0x62CB9A: jnz     loc_62D71B
0x62CBA0: mov     eax, [ecx]
0x62CBA2: mov     edx, [eax+198h]
0x62CBA8: push    1
0x62CBAA: call    edx
0x62CBAC: test    al, al
0x62CBAE: jz      short loc_62CBD7
0x62CBB0: mov     eax, [esi+2Ch]
0x62CBB3: push    1
0x62CBB5: push    eax
0x62CBB6: mov     ecx, ebx
0x62CBB8: call    sub_566870
0x62CBBD: mov     edx, [edi]
0x62CBBF: mov     eax, [esi+2Ch]
0x62CBC2: mov     edx, [edx+2F8h]
0x62CBC8: push    eax
0x62CBC9: mov     ecx, edi
0x62CBCB: call    edx
0x62CBCD: pop     edi
0x62CBCE: pop     esi
0x62CBCF: pop     ebp
0x62CBD0: pop     ebx
0x62CBD1: add     esp, 44h
0x62CBD4: retn    10h
0x62CBD7: mov     ecx, [esi+2Ch]
0x62CBDA: mov     eax, [ecx]
0x62CBDC: mov     edx, [eax+190h]
0x62CBE2: xor     ebp, ebp
0x62CBE4: mov     [esp+54h+arg_0], ebp
0x62CBE8: call    edx
0x62CBEA: test    al, al
0x62CBEC: jz      short loc_62CC55
0x62CBEE: mov     ebp, [esi+2Ch]
0x62CBF1: test    ebp, ebp
0x62CBF3: mov     [esp+54h+arg_0], ebp
0x62CBF7: jz      short loc_62CC55
0x62CBF9: mov     eax, [esi]
0x62CBFB: mov     edx, [eax+410h]
0x62CC01: mov     ecx, esi
0x62CC03: call    edx
0x62CC05: test    eax, eax
0x62CC07: jz      short loc_62CC55
0x62CC09: mov     ecx, eax
0x62CC0B: call    sub_683AA0
0x62CC10: test    al, al
0x62CC12: jz      short loc_62CC55
0x62CC14: mov     ecx, ebp
0x62CC16: call    Actor_IsSwimming
0x62CC1B: test    al, al
0x62CC1D: mov     ecx, edi; this
0x62CC1F: jz      short loc_62CC4C
0x62CC21: call    Actor_CanSwim
0x62CC26: test    al, al
0x62CC28: jz      short loc_62CC35
0x62CC2A: mov     ecx, edi; this
0x62CC2C: call    sub_5E3400
0x62CC31: test    al, al
0x62CC33: jnz     short loc_62CC55
0x62CC35: mov     eax, [esi]
0x62CC37: mov     edx, [eax+194h]
0x62CC3D: push    edi
0x62CC3E: mov     ecx, esi
0x62CC40: call    edx
0x62CC42: pop     edi
0x62CC43: pop     esi
0x62CC44: pop     ebp
0x62CC45: pop     ebx
0x62CC46: add     esp, 44h
0x62CC49: retn    10h
0x62CC4C: call    sub_5E1E90
0x62CC51: test    al, al
0x62CC53: jnz     short loc_62CC35
0x62CC55: mov     ecx, ebx
0x62CC57: mov     byte ptr [esp+54h+var_44+3], 0
0x62CC5C: call    sub_5660A0
0x62CC61: test    al, al
0x62CC63: jz      short loc_62CCD3
0x62CC65: mov     eax, [esi+8]
0x62CC68: test    eax, eax
0x62CC6A: jz      short loc_62CCD3
0x62CC6C: mov     ecx, [eax+1Ch]
0x62CC6F: shr     ecx, 9
0x62CC72: test    cl, 1
0x62CC75: jz      short loc_62CCD3
0x62CC77: test    byte ptr [eax+1Ch], 1
0x62CC7B: jz      short loc_62CCD3
0x62CC7D: mov     ecx, edi; this
0x62CC7F: call    TESObjectREFR_GetParentCell
0x62CC84: test    eax, eax
0x62CC86: jz      short loc_62CCD3
0x62CC88: push    edi
0x62CC89: mov     ecx, edi; this
0x62CC8B: call    TESObjectREFR_GetParentCell
0x62CC90: mov     ecx, eax
0x62CC92: call    sub_4CAAC0
0x62CC97: test    al, al
0x62CC99: jz      short loc_62CCD3
0x62CC9B: mov     edx, [esi+2Ch]
0x62CC9E: push    0; char
0x62CCA0: push    0; int
0x62CCA2: push    1; char
0x62CCA4: push    edx; int
0x62CCA5: push    0; int
0x62CCA7: mov     ecx, edi; int
0x62CCA9: call    sub_5F2820
0x62CCAE: test    al, al
0x62CCB0: jnz     loc_62CED5
0x62CCB6: mov     ecx, [esi+2Ch]
0x62CCB9: mov     eax, [esi]
0x62CCBB: mov     edx, [eax+3B0h]
0x62CCC1: push    ecx
0x62CCC2: mov     ecx, esi
0x62CCC4: call    edx
0x62CCC6: test    eax, eax
0x62CCC8: jz      loc_62CED5
0x62CCCE: mov     byte ptr [esp+54h+var_44+3], 1
0x62CCD3: mov     eax, [edi]
0x62CCD5: mov     edx, [eax+330h]
0x62CCDB: mov     ecx, edi
0x62CCDD: call    edx
0x62CCDF: mov     [esp+54h+var_38], eax
0x62CCE3: mov     eax, [esi+2Ch]
0x62CCE6: push    0
0x62CCE8: push    eax
0x62CCE9: mov     ecx, edi
0x62CCEB: call    TesObjectREF_GetDistance
0x62CCF0: fstp    [esp+54h+var_3C]
0x62CCF4: mov     ecx, [esi+34h]
0x62CCF7: test    ecx, ecx
0x62CCF9: jz      short loc_62CD31
0x62CCFB: call    sub_6899E0
0x62CD00: test    al, al
0x62CD02: jnz     short loc_62CD31
0x62CD04: mov     ecx, edi; this
0x62CD06: call    TESObjectREFR_GetWorldSpace
0x62CD0B: mov     ecx, [esi+2Ch]; this
0x62CD0E: mov     ebp, eax
0x62CD10: call    TESObjectREFR_GetWorldSpace
0x62CD15: cmp     ebp, eax
0x62CD17: jz      short loc_62CD2D
0x62CD19: mov     ecx, [esi+34h]
0x62CD1C: call    sub_68A160
0x62CD21: push    eax
0x62CD22: mov     ecx, edi
0x62CD24: call    sub_4D7E30
0x62CD29: fstp    [esp+54h+var_3C]
0x62CD2D: mov     ebp, [esp+54h+arg_0]
0x62CD31: test    ebp, ebp
0x62CD33: mov     byte ptr [esp+54h+arg_0], 0
0x62CD38: jz      short loc_62CD5D
0x62CD3A: cmp     ebp, ds:0B333C4h
0x62CD40: jz      short loc_62CD5D
0x62CD42: mov     ecx, ebp
0x62CD44: call    sub_5E05B0
0x62CD49: test    al, al
0x62CD4B: jz      short loc_62CD5D
0x62CD4D: mov     ecx, edi
0x62CD4F: call    sub_5E05B0
0x62CD54: test    al, al
0x62CD56: jz      short loc_62CD5D
0x62CD58: mov     byte ptr [esp+54h+arg_0], 1
0x62CD5D: mov     ecx, [esi+2Ch]
0x62CD60: mov     [esp+54h+var_28], ecx
0x62CD64: mov     ecx, [ebx+28h]
0x62CD67: test    ecx, ecx
0x62CD69: jz      short loc_62CD7F
0x62CD6B: call    TargetData__GetTargetType
0x62CD70: test    eax, eax
0x62CD72: jz      short loc_62CD7F
0x62CD74: mov     edx, [esi+2Ch]
0x62CD77: cmp     edx, ds:0B333C4h
0x62CD7D: jnz     short loc_62CD97
0x62CD7F: push    2
0x62CD81: push    edi
0x62CD82: mov     ecx, ebx
0x62CD84: call    sub_5677B0
0x62CD89: call    Double_To_SInt32
0x62CD8E: cmp     eax, 1
0x62CD91: mov     [esp+54h+var_40], eax
0x62CD95: jge     short loc_62CDA0
0x62CD97: mov     eax, ds:0B36B28h
0x62CD9C: mov     [esp+54h+var_40], eax
0x62CDA0: xor     ebp, ebp
0x62CDA2: cmp     [esi+2Ch], ebp
0x62CDA5: jz      loc_62D423
0x62CDAB: cmp     byte ptr [ebx+20h], 1
0x62CDAF: jnz     short loc_62CDDD
0x62CDB1: mov     ecx, [ebx+24h]
0x62CDB4: cmp     ecx, ebp
0x62CDB6: jz      short loc_62CDDD
0x62CDB8: call    sub_569740
0x62CDBD: cmp     eax, 2
0x62CDC0: jge     short loc_62CDDD
0x62CDC2: fld     dword ptr ds:0A30634h
0x62CDC8: push    ecx
0x62CDC9: fstp    [esp+58h+var_58]; float
0x62CDCC: push    ebp; char
0x62CDCD: push    edi; int
0x62CDCE: mov     ecx, ebx
0x62CDD0: call    sub_566DC0
0x62CDD5: test    al, al
0x62CDD7: jnz     loc_62D423
0x62CDDD: mov     ecx, [esi+2Ch]
0x62CDE0: mov     edx, [ecx]
0x62CDE2: mov     eax, [edx+174h]
0x62CDE8: lea     ebp, [esi+0D4h]
0x62CDEE: call    eax
0x62CDF0: push    eax
0x62CDF1: lea     ecx, [esp+58h+var_C]
0x62CDF5: push    ecx
0x62CDF6: mov     ecx, ebp
0x62CDF8: call    sub_4121A0
0x62CDFD: mov     ecx, eax
0x62CDFF: call    sub_404C90
0x62CE04: fstp    [esp+54h+var_2C]
0x62CE08: mov     ecx, [esi+2Ch]
0x62CE0B: mov     edx, [ecx]
0x62CE0D: mov     eax, [edx+174h]
0x62CE13: call    eax
0x62CE15: cmp     [esp+54h+var_38], 0
0x62CE1A: mov     ecx, [eax]
0x62CE1C: mov     [esp+54h+var_18], ecx
0x62CE20: mov     edx, [eax+4]
0x62CE23: mov     [esp+54h+var_14], edx
0x62CE27: mov     eax, [eax+8]
0x62CE2A: mov     [esp+54h+var_10], eax
0x62CE2E: jz      loc_62CF85
0x62CE34: mov     ecx, [esp+54h+var_38]
0x62CE38: call    sub_628E90
0x62CE3D: fstp    [esp+54h+arg_4]
0x62CE41: fldz
0x62CE43: fld     [esp+54h+arg_4]
0x62CE47: fcom    st(1)
0x62CE49: fnstsw  ax
0x62CE4B: fstp    st(1)
0x62CE4D: test    ah, 41h
0x62CE50: jnz     loc_62CF83
0x62CE56: push    ecx
0x62CE57: lea     ecx, [esp+58h+var_24]
0x62CE5B: fstp    [esp+58h+var_58]; float
0x62CE5E: push    ecx; int
0x62CE5F: mov     ecx, [esi+2Ch]
0x62CE62: call    sub_4DD070
0x62CE67: fld     [esp+54h+var_24]
0x62CE6B: fld     qword ptr ds:0A529C0h
0x62CE71: mov     ecx, [esi+2Ch]
0x62CE74: fmul    st(1), st
0x62CE76: fxch    st(1)
0x62CE78: fstp    [esp+54h+var_24]
0x62CE7C: fld     [esp+54h+var_20]
0x62CE80: fmul    st, st(1)
0x62CE82: fstp    [esp+54h+var_20]
0x62CE86: fmul    [esp+54h+var_1C]
0x62CE8A: fstp    [esp+54h+var_1C]
0x62CE8E: mov     edx, [ecx]
0x62CE90: mov     eax, [edx+174h]
0x62CE96: call    eax
0x62CE98: fld     dword ptr [eax]
0x62CE9A: fadd    [esp+54h+var_24]
0x62CE9E: fstp    [esp+54h+var_C]
0x62CEA2: mov     ecx, [esp+54h+var_C]
0x62CEA6: fld     dword ptr [eax+4]
0x62CEA9: fadd    [esp+54h+var_20]
0x62CEAD: fstp    [esp+54h+var_8]
0x62CEB1: mov     edx, [esp+54h+var_8]
0x62CEB5: fld     dword ptr [eax+8]
0x62CEB8: mov     [esp+54h+var_18], ecx
0x62CEBC: fadd    [esp+54h+var_1C]
0x62CEC0: mov     [esp+54h+var_14], edx
0x62CEC4: fstp    [esp+54h+var_4]
0x62CEC8: mov     eax, [esp+54h+var_4]
0x62CECC: mov     [esp+54h+var_10], eax
0x62CED0: jmp     loc_62CF85
0x62CED5: cmp     byte ptr [esi+0D0h], 0
0x62CEDC: jnz     short loc_62CEEB
0x62CEDE: mov     eax, [esi]
0x62CEE0: mov     edx, [eax+194h]
0x62CEE6: push    edi
0x62CEE7: mov     ecx, esi
0x62CEE9: call    edx
0x62CEEB: mov     eax, [edi]
0x62CEED: mov     edx, [eax+174h]
0x62CEF3: mov     ecx, edi
0x62CEF5: call    edx
0x62CEF7: mov     ecx, ds:0B333C4h
0x62CEFD: mov     edx, [ecx]
0x62CEFF: push    eax
0x62CF00: lea     eax, [esp+58h+var_C]
0x62CF04: push    eax
0x62CF05: mov     eax, [edx+174h]
0x62CF0B: call    eax
0x62CF0D: mov     ecx, eax
0x62CF0F: call    sub_4121A0
0x62CF14: lea     ecx, [esp+54h+var_C]
0x62CF18: push    ecx
0x62CF19: call    sub_683CB0
0x62CF1E: fstp    [esp+58h+arg_C]
0x62CF22: fldz
0x62CF24: add     esp, 4
0x62CF27: lea     edx, [esp+54h+arg_0]
0x62CF2B: fstp    [esp+54h+arg_0]
0x62CF2F: fld     [esp+54h+arg_C]
0x62CF33: push    edx; int
0x62CF34: push    ecx
0x62CF35: fstp    [esp+5Ch+var_5C]; float
0x62CF38: push    edi; int
0x62CF39: call    sub_683D80
0x62CF3E: fstp    [esp+60h+arg_8]
0x62CF42: fild    dword ptr ds:0B36C10h
0x62CF48: add     esp, 0Ch
0x62CF4B: mov     ecx, edi
0x62CF4D: fmul    qword ptr ds:0A31C78h
0x62CF53: fstp    [esp+54h+arg_4]
0x62CF57: call    sub_5E0590
0x62CF5C: test    al, al
0x62CF5E: jz      short loc_62CF70
0x62CF60: fild    dword ptr ds:0B36C18h
0x62CF66: fmul    qword ptr ds:0A31C78h
0x62CF6C: fstp    [esp+54h+arg_4]
0x62CF70: fld     [esp+54h+arg_8]
0x62CF74: fabs
0x62CF76: fstp    [esp+54h+arg_8]
0x62CF7A: fld     [esp+54h+arg_8]
0x62CF7E: jmp     loc_62D6DE
0x62CF83: fstp    st
0x62CF85: cmp     [esp+54h+var_38], 0
0x62CF8A: mov     byte ptr [esp+54h+arg_4], 0
0x62CF8F: jz      short loc_62CFFC
0x62CF91: mov     ecx, offset flt_B36A88
0x62CF96: call    GameSetting_GetSafeFloatPointer
0x62CF9B: fld     [esp+54h+var_3C]
0x62CF9F: fld     dword ptr [eax]
0x62CFA1: fcompp
0x62CFA3: fnstsw  ax
0x62CFA5: test    ah, 41h
0x62CFA8: jnz     short loc_62CFFC
0x62CFAA: mov     edx, [esi]
0x62CFAC: mov     eax, [edx+410h]
0x62CFB2: mov     ecx, esi
0x62CFB4: call    eax
0x62CFB6: mov     ebp, eax
0x62CFB8: test    ebp, ebp
0x62CFBA: jz      short loc_62CFD5
0x62CFBC: mov     edx, [ebp+0]
0x62CFBF: mov     eax, [edx+0Ch]
0x62CFC2: mov     ecx, ebp
0x62CFC4: call    eax
0x62CFC6: test    al, al
0x62CFC8: jnz     short loc_62CFD5
0x62CFCA: mov     ecx, ebp
0x62CFCC: call    sub_683AA0
0x62CFD1: test    al, al
0x62CFD3: jz      short loc_62CFFC
0x62CFD5: mov     ebp, [esp+54h+var_38]
0x62CFD9: mov     ecx, ebp
0x62CFDB: call    sub_6163A0
0x62CFE0: test    al, al
0x62CFE2: jnz     short loc_62CFEF
0x62CFE4: mov     ecx, ebp
0x62CFE6: call    sub_612550
0x62CFEB: test    al, al
0x62CFED: jnz     short loc_62CFFC
0x62CFEF: mov     byte ptr [esp+54h+arg_4], 1
0x62CFF4: mov     [esp+54h+var_40], 0
0x62CFFC: push    1
0x62CFFE: push    edi
0x62CFFF: mov     ecx, ebx
0x62D001: call    sub_5677B0
0x62D006: fmul    qword ptr ds:0A31C70h
0x62D00C: mov     ecx, offset flt_B36A88
0x62D011: fstp    [esp+54h+var_34]
0x62D015: call    GameSetting_GetSafeFloatPointer
0x62D01A: fld     dword ptr [eax]
0x62D01C: fld     [esp+54h+var_34]
0x62D020: fcompp
0x62D022: fnstsw  ax
0x62D024: test    ah, 41h
0x62D027: jnz     short loc_62D039
0x62D029: mov     ecx, offset flt_B36A88
0x62D02E: call    GameSetting_GetSafeFloatPointer
0x62D033: fld     dword ptr [eax]
0x62D035: fstp    [esp+54h+var_34]
0x62D039: cmp     [esp+54h+var_38], 0
0x62D03E: jz      short loc_62D044
0x62D040: fldz
0x62D042: jmp     short loc_62D048
0x62D044: fld     [esp+54h+var_34]
0x62D048: mov     edx, [esi]
0x62D04A: fstp    [esp+54h+var_38]
0x62D04E: mov     eax, [edx+410h]
0x62D054: mov     ecx, esi
0x62D056: xor     bl, bl
0x62D058: call    eax
0x62D05A: mov     ebp, eax
0x62D05C: test    ebp, ebp
0x62D05E: jz      short loc_62D06D
0x62D060: mov     ecx, ebp
0x62D062: call    sub_683A70
0x62D067: test    al, al
0x62D069: jz      short loc_62D06D
0x62D06B: mov     bl, 1
0x62D06D: cmp     byte ptr [esp+54h+var_44+3], 0
0x62D072: jnz     short loc_62D0D5
0x62D074: cmp     byte ptr [esp+54h+arg_4], 0
0x62D079: jnz     short loc_62D0D5
0x62D07B: fld     [esp+54h+var_2C]
0x62D07F: fld     [esp+54h+var_34]
0x62D083: fcompp
0x62D085: fnstsw  ax
0x62D087: test    ah, 5
0x62D08A: jnp     short loc_62D0D5
0x62D08C: fild    [esp+54h+var_40]
0x62D090: mov     ecx, [esi+2Ch]
0x62D093: mov     edx, [ecx]
0x62D095: mov     eax, [edx+174h]
0x62D09B: fadd    [esp+54h+var_38]
0x62D09F: push    0; char
0x62D0A1: push    ecx
0x62D0A2: fstp    [esp+5Ch+var_2C]
0x62D0A6: fld     [esp+5Ch+var_2C]
0x62D0AA: fstp    [esp+5Ch+var_5C]; float
0x62D0AD: call    eax
0x62D0AF: push    eax; int
0x62D0B0: push    edi; int
0x62D0B1: call    sub_684B30
0x62D0B6: add     esp, 10h
0x62D0B9: test    al, al
0x62D0BB: jnz     loc_62D2D7
0x62D0C1: cmp     [esi+0D0h], al
0x62D0C7: jz      loc_62D2E4
0x62D0CD: test    bl, bl
0x62D0CF: jnz     loc_62D2D7
0x62D0D5: test    ebp, ebp
0x62D0D7: jz      short loc_62D0E4
0x62D0D9: test    bl, bl
0x62D0DB: jz      short loc_62D0E4
0x62D0DD: mov     ecx, ebp
0x62D0DF: call    sub_684EC0
0x62D0E4: cmp     byte ptr [esp+54h+arg_C], 0
0x62D0E9: jz      loc_62D1C4
0x62D0EF: mov     ecx, offset unk_B36A90
0x62D0F4: call    GameSetting_GetSafeFloatPointer
0x62D0F9: fld     [esp+54h+var_3C]
0x62D0FD: fld     dword ptr [eax]
0x62D0FF: fcompp
0x62D101: fnstsw  ax
0x62D103: test    ah, 5
0x62D106: jp      loc_62D1BC
0x62D10C: mov     ecx, [esi+2Ch]
0x62D10F: push    0; char
0x62D111: push    0; int
0x62D113: push    1; char
0x62D115: push    ecx; int
0x62D116: push    0; int
0x62D118: mov     ecx, edi; int
0x62D11A: call    sub_5F2820
0x62D11F: test    al, al
0x62D121: jnz     loc_62D1BC
0x62D127: fld     dword ptr [esi+0B8h]
0x62D12D: fadd    qword ptr ds:0A2F928h
0x62D133: fstp    [esp+54h+arg_C]
0x62D137: fld     [esp+54h+arg_C]
0x62D13B: fst     dword ptr [esi+0B8h]
0x62D141: fcomp   qword ptr ds:0A3AA50h
0x62D147: fnstsw  ax
0x62D149: test    ah, 1
0x62D14C: jnz     short loc_62D1C4
0x62D14E: mov     edx, [edi]
0x62D150: mov     eax, [edx+334h]
0x62D156: push    1
0x62D158: mov     ecx, edi
0x62D15A: call    eax
0x62D15C: test    al, al
0x62D15E: jz      short loc_62D19B
0x62D160: mov     ecx, [esi+2Ch]
0x62D163: test    ecx, ecx
0x62D165: jz      short loc_62D1AA
0x62D167: mov     edx, [ecx]
0x62D169: mov     eax, [edx+190h]
0x62D16F: call    eax
0x62D171: test    al, al
0x62D173: jz      short loc_62D1AA
0x62D175: mov     eax, [esi+2Ch]
0x62D178: test    eax, eax
0x62D17A: jz      short loc_62D1AA
0x62D17C: mov     edx, [edi]
0x62D17E: push    eax
0x62D17F: mov     eax, [edx+340h]
0x62D185: mov     ecx, edi
0x62D187: call    eax
0x62D189: fldz
0x62D18B: fstp    dword ptr [esi+0B8h]
0x62D191: pop     edi
0x62D192: pop     esi
0x62D193: pop     ebp
0x62D194: pop     ebx
0x62D195: add     esp, 44h
0x62D198: retn    10h
0x62D19B: mov     edx, [esi]
0x62D19D: mov     eax, [edx+188h]
0x62D1A3: push    2
0x62D1A5: push    edi
0x62D1A6: mov     ecx, esi
0x62D1A8: call    eax
0x62D1AA: fldz
0x62D1AC: fstp    dword ptr [esi+0B8h]
0x62D1B2: pop     edi
0x62D1B3: pop     esi
0x62D1B4: pop     ebp
0x62D1B5: pop     ebx
0x62D1B6: add     esp, 44h
0x62D1B9: retn    10h
0x62D1BC: fldz
0x62D1BE: fstp    dword ptr [esi+0B8h]
0x62D1C4: mov     edx, [edi]
0x62D1C6: mov     eax, [edx+334h]
0x62D1CC: push    1
0x62D1CE: mov     ecx, edi
0x62D1D0: call    eax
0x62D1D2: test    al, al
0x62D1D4: jz      loc_62D270
0x62D1DA: mov     ecx, [esi+2Ch]
0x62D1DD: cmp     ecx, ds:0B333C4h
0x62D1E3: jz      loc_62D270
0x62D1E9: mov     edx, [ecx]
0x62D1EB: fld     dword ptr ds:0A57A64h
0x62D1F1: mov     eax, [edx+174h]
0x62D1F7: push    ecx
0x62D1F8: fstp    [esp+58h+var_58]; float
0x62D1FB: call    eax
0x62D1FD: mov     edx, [edi]
0x62D1FF: push    eax; int
0x62D200: mov     eax, [edx+174h]
0x62D206: mov     ecx, edi
0x62D208: call    eax
0x62D20A: push    eax; int
0x62D20B: call    sub_480520
0x62D210: add     esp, 0Ch
0x62D213: test    eax, eax
0x62D215: jge     short loc_62D270
0x62D217: mov     ecx, [esi+2Ch]
0x62D21A: push    0; char
0x62D21C: push    0; int
0x62D21E: push    1; char
0x62D220: push    ecx; int
0x62D221: push    0; int
0x62D223: mov     ecx, edi; int
0x62D225: call    sub_5F2820
0x62D22A: test    al, al
0x62D22C: jz      short loc_62D270
0x62D22E: cmp     dword ptr [esi+34h], 0
0x62D232: jnz     short loc_62D240
0x62D234: mov     edx, [esi]
0x62D236: mov     eax, [edx+408h]
0x62D23C: mov     ecx, esi
0x62D23E: call    eax
0x62D240: mov     edx, [esi]
0x62D242: mov     eax, [edx+410h]
0x62D248: mov     ecx, esi
0x62D24A: call    eax
0x62D24C: mov     ebp, eax
0x62D24E: test    ebp, ebp
0x62D250: jz      short loc_62D2B0
0x62D252: mov     ecx, [esi+2Ch]
0x62D255: mov     edx, [ecx]
0x62D257: mov     eax, [edx+174h]
0x62D25D: call    eax
0x62D25F: push    eax
0x62D260: mov     ecx, ebp
0x62D262: call    sub_6862C0
0x62D267: mov     byte ptr [esi+0D0h], 0
0x62D26E: jmp     short loc_62D2B0
0x62D270: mov     ecx, [esi+2Ch]; this
0x62D273: mov     ebp, [esi]
0x62D275: call    TESObjectREFR_GetWorldSpace
0x62D27A: mov     ecx, [esi+2Ch]; this
0x62D27D: push    eax
0x62D27E: call    TESObjectREFR_GetParentCell
0x62D283: mov     ecx, [esp+58h+var_18]
0x62D287: mov     edx, [esp+58h+var_14]
0x62D28B: push    eax
0x62D28C: sub     esp, 0Ch
0x62D28F: mov     eax, esp
0x62D291: mov     [eax], ecx
0x62D293: mov     ecx, [esp+68h+var_10]
0x62D297: mov     [eax+4], edx
0x62D29A: mov     edx, [ebp+3DCh]
0x62D2A0: mov     [eax+8], ecx
0x62D2A3: push    edi
0x62D2A4: mov     ecx, esi
0x62D2A6: call    edx
0x62D2A8: test    al, al
0x62D2AA: jz      loc_62D73F
0x62D2B0: mov     ecx, [esi+2Ch]
0x62D2B3: mov     eax, [ecx]
0x62D2B5: mov     edx, [eax+174h]
0x62D2BB: call    edx
0x62D2BD: mov     ecx, [eax]
0x62D2BF: mov     [esi+0D4h], ecx
0x62D2C5: mov     edx, [eax+4]
0x62D2C8: mov     [esi+0D8h], edx
0x62D2CE: mov     eax, [eax+8]
0x62D2D1: mov     [esi+0DCh], eax
0x62D2D7: cmp     byte ptr [esi+0D0h], 0
0x62D2DE: jnz     loc_62D507
0x62D2E4: mov     eax, [esp+54h+arg_8]
0x62D2E8: cmp     eax, 0FFFFFFFFh
0x62D2EB: jnz     loc_62D3B6
0x62D2F1: mov     ecx, [esp+54h+var_30]
0x62D2F5: mov     al, [ecx+20h]
0x62D2F8: cmp     al, 0Fh
0x62D2FA: mov     byte ptr [esp+54h+arg_C], 0
0x62D2FF: jz      short loc_62D305
0x62D301: cmp     al, 0Ch
0x62D303: jnz     short loc_62D30A
0x62D305: mov     byte ptr [esp+54h+arg_C], 1
0x62D30A: push    2
0x62D30C: push    edi
0x62D30D: mov     ebx, ecx
0x62D30F: call    sub_5677B0
0x62D314: call    Double_To_SInt32
0x62D319: mov     ebp, eax
0x62D31B: mov     ecx, ebx
0x62D31D: mov     [esp+54h+arg_8], ebp
0x62D321: call    sub_5660A0
0x62D326: test    al, al
0x62D328: jz      short loc_62D375
0x62D32A: mov     eax, [esi+8]
0x62D32D: test    eax, eax
0x62D32F: jz      short loc_62D375
0x62D331: mov     edx, [eax+1Ch]
0x62D334: shr     edx, 9
0x62D337: test    dl, 1
0x62D33A: jz      short loc_62D375
0x62D33C: test    byte ptr [eax+1Ch], 1
0x62D340: jz      short loc_62D375
0x62D342: mov     ecx, edi; this
0x62D344: call    TESObjectREFR_GetParentCell
0x62D349: test    eax, eax
0x62D34B: jz      short loc_62D375
0x62D34D: push    edi
0x62D34E: mov     ecx, edi; this
0x62D350: call    TESObjectREFR_GetParentCell
0x62D355: mov     ecx, eax
0x62D357: call    sub_4CAAC0
0x62D35C: test    al, al
0x62D35E: jz      short loc_62D375
0x62D360: mov     edx, [esi]
0x62D362: mov     eax, 101h
0x62D367: push    eax
0x62D368: mov     eax, [edx+238h]
0x62D36E: push    edi
0x62D36F: mov     ecx, esi
0x62D371: call    eax
0x62D373: jmp     short loc_62D3C8
0x62D375: mov     eax, [esp+54h+arg_C]
0x62D379: push    0; char
0x62D37B: lea     ecx, [ebp+ebp+0]
0x62D37F: mov     [esp+58h+arg_C], ecx
0x62D383: fild    [esp+58h+arg_C]
0x62D387: push    eax; char
0x62D388: sub     esp, 0Ch
0x62D38B: mov     ecx, esi
0x62D38D: fstp    dword ptr [esp+68h+var_60]; char
0x62D391: fild    [esp+68h+arg_8]
0x62D395: fstp    [esp+68h+var_64]; float
0x62D399: fld     [esp+68h+var_3C]
0x62D39D: fstp    [esp+68h+var_68]; float
0x62D3A0: push    edi; Concurrency::details::SchedulerBase *
0x62D3A1: call    sub_629F40
0x62D3A6: mov     edx, [esi]
0x62D3A8: push    eax
0x62D3A9: mov     eax, [edx+238h]
0x62D3AF: push    edi
0x62D3B0: mov     ecx, esi
0x62D3B2: call    eax
0x62D3B4: jmp     short loc_62D3C8
0x62D3B6: mov     edx, [esi]
0x62D3B8: push    eax
0x62D3B9: mov     eax, [edx+238h]
0x62D3BF: push    edi
0x62D3C0: mov     ecx, esi
0x62D3C2: call    eax
0x62D3C4: mov     ebx, [esp+54h+var_30]
0x62D3C8: cmp     byte ptr [esp+54h+arg_0], 0
0x62D3CD: jz      short loc_62D3D7
0x62D3CF: fld     dword ptr ds:0A31C80h
0x62D3D5: jmp     short loc_62D3EE
0x62D3D7: cmp     byte ptr [esp+54h+arg_4], 0
0x62D3DC: jz      short loc_62D3E4
0x62D3DE: fild    [esp+54h+var_40]
0x62D3E2: jmp     short loc_62D3EE
0x62D3E4: push    2
0x62D3E6: push    edi
0x62D3E7: mov     ecx, ebx
0x62D3E9: call    sub_5677B0
0x62D3EE: mov     ebp, [esi]
0x62D3F0: fstp    [esp+54h+arg_4]
0x62D3F4: fld     [esp+54h+arg_4]
0x62D3F8: push    ecx
0x62D3F9: mov     ecx, [esi+2Ch]; this
0x62D3FC: fstp    [esp+58h+var_58]
0x62D3FF: call    TESObjectREFR_GetWorldSpace
0x62D404: mov     ecx, [esi+2Ch]; this
0x62D407: push    eax
0x62D408: call    TESObjectREFR_GetParentCell
0x62D40D: mov     edx, [ebp+414h]
0x62D413: push    eax
0x62D414: lea     ecx, [esp+60h+var_18]
0x62D418: push    ecx
0x62D419: push    edi
0x62D41A: mov     ecx, esi
0x62D41C: call    edx
0x62D41E: jmp     loc_62D507
0x62D423: cmp     byte ptr [esp+54h+arg_4], 0
0x62D428: jz      loc_62D507
0x62D42E: mov     eax, [esi]
0x62D430: mov     edx, [eax+188h]
0x62D436: push    1
0x62D438: push    edi
0x62D439: mov     ecx, esi
0x62D43B: call    edx
0x62D43D: mov     ecx, ebx
0x62D43F: call    sub_5660A0
0x62D444: test    al, al
0x62D446: jz      loc_62D4F1
0x62D44C: cmp     [esi+0C0h], ebp
0x62D452: jz      short loc_62D45C
0x62D454: mov     [esi+0C0h], ebp
0x62D45A: jmp     short loc_62D45F
0x62D45C: mov     [esi+8], ebp
0x62D45F: mov     eax, [ebx]
0x62D461: mov     edx, [eax+10h]
0x62D464: push    1
0x62D466: mov     ecx, ebx
0x62D468: call    edx
0x62D46A: mov     eax, [edi]
0x62D46C: mov     edx, [eax+44h]
0x62D46F: push    30000h
0x62D474: mov     ecx, edi
0x62D476: call    edx
0x62D478: mov     eax, [esi]
0x62D47A: mov     edx, [eax+18h]
0x62D47D: push    ebp
0x62D47E: push    edi
0x62D47F: mov     ecx, esi
0x62D481: call    edx
0x62D483: mov     eax, [edi]
0x62D485: mov     edx, [eax+380h]
0x62D48B: mov     ecx, edi
0x62D48D: call    edx
0x62D48F: test    eax, eax
0x62D491: jz      loc_62D73F
0x62D497: mov     eax, [esi+8]
0x62D49A: mov     ecx, [eax+1Ch]
0x62D49D: shr     ecx, 17h
0x62D4A0: test    cl, 1
0x62D4A3: jnz     loc_62D73F
0x62D4A9: mov     edx, [edi]
0x62D4AB: mov     eax, [edx+380h]
0x62D4B1: mov     ecx, edi
0x62D4B3: call    eax
0x62D4B5: mov     ecx, eax
0x62D4B7: call    sub_5E9A60
0x62D4BC: test    al, al
0x62D4BE: jnz     short loc_62D4DB
0x62D4C0: mov     edx, [edi]
0x62D4C2: mov     eax, [edx+380h]
0x62D4C8: mov     ecx, edi
0x62D4CA: call    eax
0x62D4CC: mov     ecx, eax; int
0x62D4CE: call    sub_5F80D0
0x62D4D3: fldz
0x62D4D5: fstp    dword ptr [esi+1A8h]
0x62D4DB: mov     edx, [edi]
0x62D4DD: mov     eax, [edx+230h]
0x62D4E3: mov     ecx, edi
0x62D4E5: call    eax
0x62D4E7: pop     edi
0x62D4E8: pop     esi
0x62D4E9: pop     ebp
0x62D4EA: pop     ebx
0x62D4EB: add     esp, 44h
0x62D4EE: retn    10h
0x62D4F1: cmp     byte ptr [esi+0D0h], 0
0x62D4F8: jnz     short loc_62D507
0x62D4FA: mov     edx, [esi]
0x62D4FC: mov     eax, [edx+194h]
0x62D502: push    edi
0x62D503: mov     ecx, esi
0x62D505: call    eax
0x62D507: mov     ebx, [esp+54h+var_28]
0x62D50B: xor     ebp, ebp
0x62D50D: push    ebp
0x62D50E: push    ebx
0x62D50F: mov     ecx, edi
0x62D511: call    TesObjectREF_GetDistance
0x62D516: fstp    [esp+54h+var_3C]
0x62D51A: cmp     byte ptr [esp+54h+arg_0], 0
0x62D51F: jz      short loc_62D52C
0x62D521: sub     [esp+54h+var_40], 32h ; '2'
0x62D526: jns     short loc_62D52C
0x62D528: mov     [esp+54h+var_40], ebp
0x62D52C: fld     [esp+54h+var_3C]
0x62D530: fild    [esp+54h+var_40]
0x62D534: fcompp
0x62D536: fnstsw  ax
0x62D538: test    ah, 1
0x62D53B: jnz     loc_62D73F
0x62D541: mov     eax, [esi+2Ch]
0x62D544: cmp     eax, ds:0B333C4h
0x62D54A: jnz     short loc_62D561
0x62D54C: push    ebp; char
0x62D54D: push    ebp; int
0x62D54E: push    1; char
0x62D550: push    eax; int
0x62D551: push    ebp; int
0x62D552: mov     ecx, edi; int
0x62D554: call    sub_5F2820
0x62D559: test    al, al
0x62D55B: jz      loc_62D73F
0x62D561: mov     edx, [edi]
0x62D563: mov     eax, [edx+334h]
0x62D569: push    1
0x62D56B: mov     ecx, edi
0x62D56D: call    eax
0x62D56F: test    al, al
0x62D571: jz      short loc_62D5A2
0x62D573: mov     edx, [edi]
0x62D575: mov     eax, [edx+330h]
0x62D57B: mov     ecx, edi
0x62D57D: call    eax
0x62D57F: test    eax, eax
0x62D581: jz      loc_62D73F
0x62D587: mov     edx, [edi]
0x62D589: mov     eax, [edx+330h]
0x62D58F: mov     ecx, edi
0x62D591: call    eax
0x62D593: mov     ecx, eax
0x62D595: call    sub_6163A0
0x62D59A: test    al, al
0x62D59C: jnz     loc_62D73F
0x62D5A2: cmp     byte ptr [esi+0D0h], 0
0x62D5A9: jnz     short loc_62D621
0x62D5AB: mov     ecx, [edi+58h]
0x62D5AE: test    ecx, ecx
0x62D5B0: jz      short loc_62D5C0
0x62D5B2: mov     edx, [ecx]
0x62D5B4: mov     eax, [edx+8]
0x62D5B7: call    eax
0x62D5B9: test    eax, eax
0x62D5BB: jnz     short loc_62D5C0
0x62D5BD: mov     ebp, [edi+58h]
0x62D5C0: mov     ecx, edi
0x62D5C2: call    sub_5E0E80
0x62D5C7: test    al, al
0x62D5C9: jz      short loc_62D61A
0x62D5CB: test    ebp, ebp
0x62D5CD: jz      short loc_62D61A
0x62D5CF: push    4
0x62D5D1: push    6
0x62D5D3: call    TESTopic__GEtTopic
0x62D5D8: mov     ecx, ds:0B333C4h
0x62D5DE: add     esp, 8
0x62D5E1: test    eax, eax
0x62D5E3: mov     [edi+0E4h], ecx
0x62D5E9: jz      short loc_62D5F4
0x62D5EB: push    1
0x62D5ED: push    0
0x62D5EF: push    0
0x62D5F1: push    eax
0x62D5F2: jmp     short loc_62D60C
0x62D5F4: mov     edx, [esi]
0x62D5F6: mov     eax, [edx+200h]
0x62D5FC: mov     ecx, esi
0x62D5FE: call    eax
0x62D600: test    al, al
0x62D602: jz      short loc_62D61A
0x62D604: push    1
0x62D606: push    0
0x62D608: push    0
0x62D60A: push    0
0x62D60C: mov     edx, [ebp+0]
0x62D60F: mov     eax, [edx+1A4h]
0x62D615: push    edi
0x62D616: mov     ecx, ebp
0x62D618: call    eax
0x62D61A: mov     ecx, edi
0x62D61C: call    sub_5E02B0
0x62D621: test    ebx, ebx
0x62D623: jz      loc_62D73F
0x62D629: cmp     byte ptr [esi+23Ch], 0
0x62D630: jz      loc_62D73F
0x62D636: mov     ecx, [edi+58h]
0x62D639: test    ecx, ecx
0x62D63B: jz      short loc_62D64F
0x62D63D: mov     edx, [ecx]
0x62D63F: mov     eax, [edx+36Ch]
0x62D645: call    eax
0x62D647: test    eax, eax
0x62D649: jnz     loc_62D73F
0x62D64F: mov     edx, [edi]
0x62D651: mov     eax, [edx+174h]
0x62D657: mov     ecx, edi
0x62D659: call    eax
0x62D65B: mov     edx, [ebx]
0x62D65D: push    eax
0x62D65E: mov     eax, [edx+174h]
0x62D664: lea     ecx, [esp+58h+var_C]
0x62D668: push    ecx
0x62D669: mov     ecx, ebx
0x62D66B: call    eax
0x62D66D: mov     ecx, eax
0x62D66F: call    sub_4121A0
0x62D674: lea     ecx, [esp+54h+var_C]
0x62D678: push    ecx
0x62D679: call    sub_683CB0
0x62D67E: fstp    [esp+58h+arg_C]
0x62D682: fldz
0x62D684: add     esp, 4
0x62D687: lea     edx, [esp+54h+arg_0]
0x62D68B: fstp    [esp+54h+arg_0]
0x62D68F: fld     [esp+54h+arg_C]
0x62D693: push    edx; int
0x62D694: push    ecx
0x62D695: fstp    [esp+5Ch+var_5C]; float
0x62D698: push    edi; int
0x62D699: call    sub_683D80
0x62D69E: fstp    [esp+60h+arg_8]
0x62D6A2: fild    dword ptr ds:0B36C10h
0x62D6A8: add     esp, 0Ch
0x62D6AB: mov     ecx, edi
0x62D6AD: fmul    qword ptr ds:0A31C78h
0x62D6B3: fstp    [esp+54h+arg_4]
0x62D6B7: call    sub_5E0590
0x62D6BC: test    al, al
0x62D6BE: jz      short loc_62D6D0
0x62D6C0: fild    dword ptr ds:0B36C18h
0x62D6C6: fmul    qword ptr ds:0A31C78h
0x62D6CC: fstp    [esp+54h+arg_4]
0x62D6D0: fld     [esp+54h+arg_8]
0x62D6D4: fabs
0x62D6D6: fstp    [esp+54h+arg_8]
0x62D6DA: fld     [esp+54h+arg_8]
0x62D6DE: fld     [esp+54h+arg_4]
0x62D6E2: fcompp
0x62D6E4: fnstsw  ax
0x62D6E6: test    ah, 5
0x62D6E9: jp      short loc_62D708
0x62D6EB: fld     [esp+54h+arg_C]
0x62D6EF: push    1; char
0x62D6F1: push    ecx
0x62D6F2: fstp    [esp+5Ch+var_5C]; float
0x62D6F5: push    edi; Concurrency::details::SchedulerBase *
0x62D6F6: call    sub_685530
0x62D6FB: add     esp, 0Ch
0x62D6FE: pop     edi
0x62D6FF: pop     esi
0x62D700: pop     ebp
0x62D701: pop     ebx
0x62D702: add     esp, 44h
0x62D705: retn    10h
0x62D708: push    30h ; '0'
0x62D70A: mov     ecx, edi
0x62D70C: call    sub_5E05F0
0x62D711: pop     edi
0x62D712: pop     esi
0x62D713: pop     ebp
0x62D714: pop     ebx
0x62D715: add     esp, 44h
0x62D718: retn    10h
0x62D71B: test    al, al
0x62D71D: jz      short loc_62D729
0x62D71F: push    1
0x62D721: push    ecx
0x62D722: mov     ecx, ebx
0x62D724: call    sub_566870
0x62D729: cmp     byte ptr [esp+54h+arg_4], 0
0x62D72E: jz      short loc_62D73F
0x62D730: mov     eax, [esi]
0x62D732: mov     edx, [eax+188h]
0x62D738: push    1
0x62D73A: push    edi
0x62D73B: mov     ecx, esi
0x62D73D: call    edx
0x62D73F: pop     edi
0x62D740: pop     esi
0x62D741: pop     ebp
0x62D742: pop     ebx
0x62D743: add     esp, 44h
0x62D746: retn    10h
