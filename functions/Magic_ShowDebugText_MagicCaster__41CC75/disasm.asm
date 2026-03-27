0x41CC75: push    0; int
0x41CC77: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x41CC7C: push    offset ??_R0?AVMagicCaster@@@8; struct _s_RTTICompleteObjectLocator *
0x41CC81: push    0; int
0x41CC83: push    eax; void *
0x41CC84: call    OblivionDynamicCast
0x41CC89: mov     esi, eax
0x41CC8B: add     esp, 14h
0x41CC8E: test    esi, esi
0x41CC90: jz      short loc_41CCF3
0x41CC92: push    9
0x41CC94: mov     ecx, esi
0x41CC96: call    Actor_GetBaseCalcAVi
0x41CC9B: mov     edx, [esi]
0x41CC9D: push    eax
0x41CC9E: mov     eax, [edx+284h]
0x41CCA4: push    9
0x41CCA6: mov     ecx, esi
0x41CCA8: call    eax
0x41CCAA: push    eax
0x41CCAB: lea     ecx, [esp+8+arg_9C]
0x41CCB2: push    offset aCasterMagickaD; "Caster Magicka: %d/%d"
0x41CCB7: push    ecx
0x41CCB8: call    __sprintf
0x41CCBD: fild    [esp+10h+arg_14]
0x41CCC1: add     esp, 10h
0x41CCC4: push    0FFFFFFFFh; int
0x41CCC6: push    1; int
0x41CCC8: sub     esp, 8
0x41CCCB: fstp    [esp+10h+var_C]; float
0x41CCCF: lea     edx, [esp+10h+arg_9C]
0x41CCD6: fild    iDebugTextLeftRightOffset
0x41CCDC: fstp    [esp+10h+var_10]; float
0x41CCDF: push    edx; int
0x41CCE0: call    InterfaceMgr_DebugTextLine
0x41CCE5: mov     esi, [ebp+0Ch]
0x41CCE8: add     esp, 14h
0x41CCEB: add     ebx, esi
0x41CCED: mov     [esp+arg_14], ebx
0x41CCF1: jmp     short loc_41CCF6
0x41CCF3: mov     esi, [ebp+0Ch]
0x41CCF6: mov     ecx, [esp+arg_18]
0x41CCFA: mov     eax, [ecx]
0x41CCFC: mov     edx, [eax+30h]
0x41CCFF: call    edx
0x41CD01: test    eax, eax
0x41CD03: jnz     short loc_41CD34
0x41CD05: fild    [esp+arg_14]
0x41CD09: push    0FFFFFFFFh; int
0x41CD0B: push    1; int
0x41CD0D: sub     esp, 8
0x41CD10: fstp    [esp+10h+var_C]; float
0x41CD14: fild    iDebugTextLeftRightOffset
0x41CD1A: fstp    [esp+10h+var_10]; float
0x41CD1D: push    offset aCasterInactive; "Caster Inactive"
0x41CD22: call    InterfaceMgr_DebugTextLine
0x41CD27: add     esp, 14h
0x41CD2A: add     ebx, esi
0x41CD2C: mov     esi, [ebp+0Ch]
0x41CD2F: jmp     Magic_ShowDebugText___Check_MagicTarget
0x41CD34: mov     ecx, [esp+arg_18]
0x41CD38: mov     eax, [ecx]
0x41CD3A: mov     edx, [eax+30h]
0x41CD3D: call    edx
0x41CD3F: mov     eax, [eax+4]
0x41CD42: test    eax, eax
0x41CD44: jnz     short loc_41CD4B
0x41CD46: mov     eax, offset EmptyString
0x41CD4B: push    eax
0x41CD4C: lea     eax, [esp+4+arg_9C]
0x41CD53: push    offset aCurrentSpellS; "Current Spell: %s:"
0x41CD58: push    eax
0x41CD59: call    __sprintf
0x41CD5E: fild    [esp+0Ch+arg_14]
0x41CD62: add     esp, 0Ch
0x41CD65: push    0FFFFFFFFh; int
0x41CD67: push    1; int
0x41CD69: sub     esp, 8
0x41CD6C: fstp    [esp+10h+var_C]; float
0x41CD70: lea     ecx, [esp+10h+arg_9C]
0x41CD77: fild    iDebugTextLeftRightOffset
0x41CD7D: fstp    [esp+10h+var_10]; float
0x41CD80: push    ecx; int
0x41CD81: call    InterfaceMgr_DebugTextLine
0x41CD86: mov     ecx, [esp+14h+arg_18]
0x41CD8A: add     ebx, esi
0x41CD8C: add     esp, 14h
0x41CD8F: mov     [esp+arg_14], ebx
0x41CD93: call    sub_452A60
0x41CD98: test    eax, eax
0x41CD9A: jnz     short loc_41CDA6
0x41CD9C: mov     eax, offset aNo_spell; "NO_SPELL"
0x41CDA1: jmp     loc_41CE27
0x41CDA6: mov     ecx, [esp+arg_18]
0x41CDAA: call    sub_452A60
0x41CDAF: cmp     eax, 1
0x41CDB2: jnz     short loc_41CDBB
0x41CDB4: mov     eax, offset aAim
0x41CDB9: jmp     short loc_41CE27
0x41CDBB: mov     ecx, [esp+arg_18]
0x41CDBF: call    sub_452A60
0x41CDC4: cmp     eax, 2
0x41CDC7: jnz     short loc_41CDD0
0x41CDC9: mov     eax, offset aCast; "CAST"
0x41CDCE: jmp     short loc_41CE27
0x41CDD0: mov     ecx, [esp+arg_18]
0x41CDD4: call    sub_452A60
0x41CDD9: cmp     eax, 4
0x41CDDC: jnz     short loc_41CDE5
0x41CDDE: mov     eax, offset aFind_targets; "FIND_TARGETS"
0x41CDE3: jmp     short loc_41CE27
0x41CDE5: mov     ecx, [esp+arg_18]
0x41CDE9: call    sub_452A60
0x41CDEE: cmp     eax, 5
0x41CDF1: jnz     short loc_41CDFA
0x41CDF3: mov     eax, offset aErr_spell_disa; "ERR_SPELL_DISABLED"
0x41CDF8: jmp     short loc_41CE27
0x41CDFA: mov     ecx, [esp+arg_18]
0x41CDFE: call    sub_452A60
0x41CE03: cmp     eax, 6
0x41CE06: jnz     short loc_41CE0F
0x41CE08: mov     eax, offset aErr_already_ca; "ERR_ALREADY_CASTING"
0x41CE0D: jmp     short loc_41CE27
0x41CE0F: mov     ecx, [esp+arg_18]
0x41CE13: call    sub_452A60
0x41CE18: cmp     eax, 7
0x41CE1B: mov     eax, offset aErr_cannot_cas; "ERR_CANNOT_CAST"
0x41CE20: jz      short loc_41CE27
0x41CE22: mov     eax, offset aUnknown; "UNKNOWN"
0x41CE27: push    eax
0x41CE28: lea     edx, [esp+4+arg_9C]
0x41CE2F: push    offset aCastingStateS; "Casting State: %s"
0x41CE34: push    edx
0x41CE35: call    __sprintf
0x41CE3A: fild    [esp+0Ch+arg_14]
0x41CE3E: add     esp, 0Ch
0x41CE41: push    0FFFFFFFFh; int
0x41CE43: push    1; int
0x41CE45: sub     esp, 8
0x41CE48: fstp    [esp+10h+var_C]; float
0x41CE4C: lea     eax, [esp+10h+arg_9C]
0x41CE53: fild    iDebugTextLeftRightOffset
0x41CE59: fstp    [esp+10h+var_10]; float
0x41CE5C: push    eax; int
0x41CE5D: call    InterfaceMgr_DebugTextLine
0x41CE62: add     esp, 14h
0x41CE65: add     ebx, esi
0x41CE67: mov     esi, [ebp+0Ch]
0x41CE6A: jmp     short Magic_ShowDebugText___Check_MagicTarget
