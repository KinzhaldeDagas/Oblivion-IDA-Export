0x41CEC5: mov     edx, [eax]
0x41CEC7: mov     ecx, eax
0x41CEC9: mov     eax, [edx+8]
0x41CECC: call    eax
0x41CECE: mov     edi, eax
0x41CED0: test    edi, edi
0x41CED2: jz      Magic_ShowDebugText___Done
0x41CED8: cmp     dword ptr [edi+4], 0
0x41CEDC: jnz     short loc_41CEE3
0x41CEDE: cmp     dword ptr [edi], 0
0x41CEE1: jz      short loc_41CF14
0x41CEE3: fild    [esp+arg_14]
0x41CEE7: push    0FFFFFFFFh; int
0x41CEE9: push    1; int
0x41CEEB: sub     esp, 8
0x41CEEE: fstp    [esp+10h+var_10+4]; float
0x41CEF2: fild    iDebugTextLeftRightOffset
0x41CEF8: fstp    [esp+10h+var_10]; float
0x41CEFB: push    offset aCurrentEffects; "CURRENT EFFECTS:"
0x41CF00: call    InterfaceMgr_DebugTextLine
0x41CF05: add     esp, 14h
0x41CF08: add     ebx, esi
0x41CF0A: mov     [esp+arg_14], ebx
0x41CF0E: jmp     short loc_41CF14
0x41CF10: mov     edi, [esp+arg_2C]
0x41CF14: mov     esi, [edi]
0x41CF16: test    esi, esi
0x41CF18: mov     ecx, [edi+4]
0x41CF1B: mov     [esp+arg_2C], ecx
0x41CF1F: jz      loc_41D150
0x41CF25: cmp     dword ptr [esi+0Ch], 0
0x41CF29: jz      loc_41D150
0x41CF2F: mov     edx, [esp+arg_18]
0x41CF33: push    0; int
0x41CF35: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x41CF3A: push    offset ??_R0?AVMagicCaster@@@8; struct _s_RTTICompleteObjectLocator *
0x41CF3F: push    0; int
0x41CF41: push    edx; void *
0x41CF42: call    OblivionDynamicCast
0x41CF47: fldz
0x41CF49: fcomp   dword ptr [esi+1Ch]
0x41CF4C: mov     [esp+14h+arg_28], eax
0x41CF50: add     esp, 14h
0x41CF53: fnstsw  ax
0x41CF55: test    ah, 44h
0x41CF58: jp      short loc_41CF71
0x41CF5A: lea     eax, [esp+arg_164]
0x41CF61: push    offset EmptyString
0x41CF66: push    eax
0x41CF67: call    __sprintf
0x41CF6C: add     esp, 8
0x41CF6F: jmp     short loc_41CF96
0x41CF71: fld     dword ptr [esi+1Ch]
0x41CF74: sub     esp, 10h
0x41CF77: fstp    [esp+10h+var_8]
0x41CF7B: lea     ecx, [esp+10h+arg_164]
0x41CF82: fld     dword ptr [esi+4]
0x41CF85: fstp    qword ptr [esp+10h+var_10]
0x41CF88: push    offset a0_f0_fsec; ", %0.f/%0.fsec"
0x41CF8D: push    ecx
0x41CF8E: call    __sprintf
0x41CF93: add     esp, 18h
0x41CF96: mov     ecx, [esi+0Ch]
0x41CF99: lea     edx, [esp+arg_1CC]
0x41CFA0: push    edx
0x41CFA1: call    EffectItem_GetQualifiedName_SkillAttr
0x41CFA6: mov     ecx, [esi+8]
0x41CFA9: mov     eax, [ecx]
0x41CFAB: mov     edx, [eax+18h]
0x41CFAE: call    edx
0x41CFB0: cmp     eax, 6
0x41CFB3: jnz     loc_41D039
0x41CFB9: mov     eax, [esi+30h]
0x41CFBC: push    0; int
0x41CFBE: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x41CFC3: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x41CFC8: push    0; int
0x41CFCA: push    eax; void *
0x41CFCB: call    OblivionDynamicCast
0x41CFD0: add     esp, 14h
0x41CFD3: test    eax, eax
0x41CFD5: jz      short loc_41D006
0x41CFD7: mov     eax, [eax+4]
0x41CFDA: test    eax, eax
0x41CFDC: mov     ecx, [esi+8]
0x41CFDF: mov     edi, eax
0x41CFE1: jnz     short loc_41CFE8
0x41CFE3: mov     edi, offset EmptyString
0x41CFE8: mov     eax, [ecx]
0x41CFEA: mov     edx, [eax+18h]
0x41CFED: call    edx
0x41CFEF: mov     eax, Magic_TypeNameArray[eax*4]
0x41CFF6: test    eax, eax
0x41CFF8: jz      short loc_41D000
0x41CFFA: mov     eax, [eax]
0x41CFFC: push    edi
0x41CFFD: push    eax
0x41CFFE: jmp     short loc_41D065
0x41D000: xor     eax, eax
0x41D002: push    edi
0x41D003: push    eax
0x41D004: jmp     short loc_41D065
0x41D006: mov     ecx, ds:dword_A345B0
0x41D00C: mov     edx, ds:dword_A345B4
0x41D012: mov     eax, ds:dword_A345B8
0x41D017: mov     [esp+arg_34], ecx
0x41D01B: mov     ecx, ds:dword_A345BC
0x41D021: mov     [esp+arg_38], edx
0x41D025: mov     edx, ds:off_A345C0
0x41D02B: mov     [esp+arg_3C], eax
0x41D02F: mov     [esp+arg_40], ecx
0x41D033: mov     [esp+arg_44], edx
0x41D037: jmp     short loc_41D077
0x41D039: mov     ecx, [esi+8]
0x41D03C: mov     eax, [ecx]
0x41D03E: mov     edx, [eax+18h]
0x41D041: call    edx
0x41D043: mov     eax, Magic_TypeNameArray[eax*4]
0x41D04A: test    eax, eax
0x41D04C: jz      short loc_41D052
0x41D04E: mov     eax, [eax]
0x41D050: jmp     short loc_41D054
0x41D052: xor     eax, eax
0x41D054: mov     ecx, [esi+8]
0x41D057: mov     ecx, [ecx+4]
0x41D05A: test    ecx, ecx
0x41D05C: jnz     short loc_41D063
0x41D05E: mov     ecx, offset EmptyString
0x41D063: push    eax
0x41D064: push    ecx
0x41D065: lea     eax, [esp+8+arg_34]
0x41D069: push    offset aSS; "%s %s"
0x41D06E: push    eax
0x41D06F: call    __sprintf
0x41D074: add     esp, 10h
0x41D077: cmp     [esp+arg_28], 0
0x41D07C: jz      short loc_41D0EE
0x41D07E: mov     ecx, [esi+0Ch]
0x41D081: cmp     dword ptr [ecx+14h], 48h ; 'H'
0x41D085: jz      short loc_41D0EE
0x41D087: fld     dword ptr [esi+18h]
0x41D08A: mov     esi, [esp+arg_28]
0x41D08E: mov     edx, ecx
0x41D090: fstp    [esp+arg_30]
0x41D094: mov     edi, [edx+14h]
0x41D097: lea     eax, [esp+arg_34]
0x41D09B: push    eax
0x41D09C: lea     ecx, [esp+4+arg_164]
0x41D0A3: push    ecx
0x41D0A4: push    edi
0x41D0A5: mov     ecx, esi
0x41D0A7: call    Actor_GetBaseCalcAVi
0x41D0AC: mov     edx, [esi]
0x41D0AE: push    eax
0x41D0AF: mov     eax, [edx+284h]
0x41D0B5: push    edi
0x41D0B6: mov     ecx, esi
0x41D0B8: call    eax
0x41D0BA: push    eax
0x41D0BB: push    edi
0x41D0BC: call    ActorValue_GetName
0x41D0C1: fld     [esp+14h+arg_30]
0x41D0C5: add     esp, 4
0x41D0C8: push    eax
0x41D0C9: sub     esp, 8
0x41D0CC: fstp    [esp+1Ch+var_1C]
0x41D0CF: lea     ecx, [esp+1Ch+arg_1CC]
0x41D0D6: push    ecx
0x41D0D7: lea     edx, [esp+20h+arg_9C]
0x41D0DE: push    offset aSMag_2fSDDSFro; "%s: Mag=%.2f, %s=%d/%d%s from %s"
0x41D0E3: push    edx
0x41D0E4: call    __sprintf
0x41D0E9: add     esp, 28h
0x41D0EC: jmp     short loc_41D121
0x41D0EE: fld     dword ptr [esi+18h]
0x41D0F1: lea     eax, [esp+arg_34]
0x41D0F5: push    eax
0x41D0F6: lea     ecx, [esp+4+arg_164]
0x41D0FD: push    ecx
0x41D0FE: sub     esp, 8
0x41D101: fstp    qword ptr [esp+10h+var_10]
0x41D104: lea     edx, [esp+10h+arg_1CC]
0x41D10B: push    edx
0x41D10C: lea     eax, [esp+14h+arg_9C]
0x41D113: push    offset aSMag_2fSFromS; "%s: Mag=%.2f, %s from %s"
0x41D118: push    eax
0x41D119: call    __sprintf
0x41D11E: add     esp, 1Ch
0x41D121: fild    [esp+arg_14]
0x41D125: push    0FFFFFFFFh; int
0x41D127: push    1; int
0x41D129: sub     esp, 8
0x41D12C: fstp    [esp+10h+var_10+4]; float
0x41D130: lea     ecx, [esp+10h+arg_9C]
0x41D137: fild    iDebugTextLeftRightOffset
0x41D13D: fstp    [esp+10h+var_10]; float
0x41D140: push    ecx; int
0x41D141: call    InterfaceMgr_DebugTextLine
0x41D146: add     esp, 14h
0x41D149: add     ebx, [ebp+0Ch]
0x41D14C: mov     [esp+arg_14], ebx
0x41D150: cmp     [esp+arg_2C], 0
0x41D155: jnz     loc_41CF10
0x41D15B: jmp     short Magic_ShowDebugText___Done
