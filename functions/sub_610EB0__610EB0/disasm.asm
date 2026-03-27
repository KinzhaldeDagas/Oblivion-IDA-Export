0x610EB0: push    0FFFFFFFFh
0x610EB2: push    offset SEH_610EB0
0x610EB7: mov     eax, large fs:0
0x610EBD: push    eax
0x610EBE: sub     esp, 274h
0x610EC4: mov     eax, ds:0B30AACh
0x610EC9: xor     eax, esp
0x610ECB: mov     [esp+280h+var_10], eax
0x610ED2: push    ebx
0x610ED3: push    ebp
0x610ED4: push    esi
0x610ED5: push    edi
0x610ED6: mov     eax, ds:0B30AACh
0x610EDB: xor     eax, esp
0x610EDD: push    eax
0x610EDE: lea     eax, [esp+294h+var_C]
0x610EE5: mov     large fs:0, eax
0x610EEB: mov     esi, [esp+294h+arg_0]
0x610EF2: push    0; int
0x610EF4: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x610EF9: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x610EFE: push    0; int
0x610F00: push    esi; void *
0x610F01: mov     ebp, ecx
0x610F03: mov     [esp+2A8h+var_270], esi
0x610F07: call    OblivionDynamicCast
0x610F0C: mov     edi, eax
0x610F0E: add     esp, 14h
0x610F11: mov     ecx, ebp
0x610F13: mov     [esp+294h+var_26C], edi
0x610F17: call    Actor__GetRaceIfNPC
0x610F1C: test    byte ptr [eax+70h], 1
0x610F20: jnz     short loc_610F31
0x610F22: mov     ecx, ebp; this
0x610F24: call    sub_5E6C60
0x610F29: test    al, al
0x610F2B: jz      loc_61137F
0x610F31: mov     ecx, ds:0B333C4h
0x610F37: push    0
0x610F39: call    PlayerCharacter_IsPlayerInCombat
0x610F3E: test    al, al
0x610F40: jnz     short loc_610F59
0x610F42: mov     ecx, ds:0B333C4h; this
0x610F48: cmp     edi, ecx
0x610F4A: jnz     short loc_610F59
0x610F4C: call    PlayerCharacter__IsJailed; Check the meaning of JailedState
0x610F51: test    al, al
0x610F53: jnz     loc_61137F
0x610F59: mov     eax, [edi]
0x610F5B: mov     edx, [eax+354h]
0x610F61: mov     ecx, edi
0x610F63: call    edx
0x610F65: test    al, al
0x610F67: jnz     loc_61137F
0x610F6D: mov     ecx, edi; this
0x610F6F: call    Actor_IsNPC
0x610F74: test    al, al
0x610F76: jz      loc_61137F
0x610F7C: mov     ecx, edi
0x610F7E: call    Actor__GetRaceIfNPC
0x610F83: test    byte ptr [eax+70h], 1
0x610F87: jz      loc_61137F
0x610F8D: mov     ecx, edi; this
0x610F8F: call    sub_5E6C60
0x610F94: test    al, al
0x610F96: jnz     loc_61137F
0x610F9C: mov     ecx, ebp
0x610F9E: call    sub_5E8A90
0x610FA3: test    al, al
0x610FA5: jz      short loc_610FB6
0x610FA7: mov     ecx, edi
0x610FA9: call    sub_5E8A90
0x610FAE: test    al, al
0x610FB0: jnz     loc_61137F
0x610FB6: cmp     edi, ds:0B333C4h
0x610FBC: jz      short loc_610FE0
0x610FBE: mov     eax, [edi]
0x610FC0: mov     edx, [eax+284h]
0x610FC6: push    1Fh
0x610FC8: mov     ecx, edi
0x610FCA: call    edx
0x610FCC: cmp     eax, 64h ; 'd'
0x610FCF: jnz     short loc_610FE0
0x610FD1: mov     ecx, edi
0x610FD3: call    Actor_IsSneaking
0x610FD8: test    al, al
0x610FDA: jnz     loc_61137F
0x610FE0: push    30h ; '0'; Size
0x610FE2: call    FormHeapAlloc
0x610FE7: add     esp, 4
0x610FEA: mov     [esp+294h+var_274], eax
0x610FEE: test    eax, eax
0x610FF0: mov     [esp+294h+var_4], 0
0x610FFB: jz      short loc_611012
0x610FFD: push    0
0x610FFF: push    0
0x611001: push    0
0x611003: push    esi
0x611004: push    ebp
0x611005: push    4
0x611007: mov     ecx, eax
0x611009: call    sub_6070B0
0x61100E: mov     edi, eax
0x611010: jmp     short loc_611014
0x611012: xor     edi, edi
0x611014: push    edi
0x611015: mov     ecx, offset ActorProcessManager_ptr
0x61101A: mov     [esp+298h+var_4], 0FFFFFFFFh
0x611025: call    sub_67A290
0x61102A: test    edi, edi
0x61102C: mov     ebx, eax
0x61102E: mov     [esp+294h+var_27C], ebx
0x611032: mov     [esp+294h+var_274], ebx
0x611036: jz      loc_6110EE
0x61103C: mov     ecx, [edi+0Ch]
0x61103F: call    sub_5E32D0
0x611044: test    al, al
0x611046: jz      loc_6110EE
0x61104C: cmp     byte ptr [edi+11h], 0
0x611050: jnz     loc_6110EE
0x611056: mov     eax, [ebp+0]
0x611059: mov     edx, [eax+284h]
0x61105F: push    24h ; '$'
0x611061: mov     ecx, ebp
0x611063: call    edx
0x611065: cmp     eax, 64h ; 'd'
0x611068: jge     short loc_61107C
0x61106A: mov     ecx, ebp
0x61106C: call    Actor_GetBaseClass
0x611071: mov     ecx, eax
0x611073: call    TESClass__IsGuardClass
0x611078: test    al, al
0x61107A: jz      short loc_6110EE
0x61107C: push    1; a2
0x61107E: mov     ecx, ebp; this
0x611080: call    Actor_GetActorBaseForm
0x611085: mov     esi, eax
0x611087: lea     ecx, [esi+3Ch]
0x61108A: call    BSSimpleList_IsEmpty
0x61108F: test    al, al
0x611091: jz      short loc_61109E
0x611093: push    0; a2
0x611095: mov     ecx, ebp; this
0x611097: call    Actor_GetActorBaseForm
0x61109C: mov     esi, eax
0x61109E: push    0; int
0x6110A0: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x6110A5: push    offset ??_R0?AVTESActorBase@@@8; struct _s_RTTICompleteObjectLocator *
0x6110AA: push    0; int
0x6110AC: push    esi; void *
0x6110AD: call    OblivionDynamicCast
0x6110B2: add     esp, 14h
0x6110B5: mov     ecx, edi
0x6110B7: mov     esi, eax
0x6110B9: call    sub_606140
0x6110BE: fstp    [esp+294h+var_280]
0x6110C2: mov     ecx, esi
0x6110C4: call    sub_5234A0
0x6110C9: fmul    [esp+294h+var_280]
0x6110CD: mov     ecx, [edi+0Ch]
0x6110D0: mov     eax, [ecx]
0x6110D2: mov     edx, [eax+254h]
0x6110D8: fstp    [esp+294h+var_280]
0x6110DC: fld     [esp+294h+var_280]
0x6110E0: push    ecx
0x6110E1: fstp    [esp+298h+var_298]
0x6110E4: call    edx
0x6110E6: mov     esi, [esp+294h+var_270]
0x6110EA: mov     byte ptr [edi+11h], 1
0x6110EE: test    ebx, ebx
0x6110F0: jz      loc_611330
0x6110F6: mov     esi, [ebx]
0x6110F8: test    esi, esi
0x6110FA: jz      loc_6112C8
0x611100: mov     ecx, [edi+8]; this
0x611103: cmp     esi, ecx
0x611105: mov     byte ptr [esp+294h+var_280], 0
0x61110A: jz      short loc_611115
0x61110C: call    TESObjectREFR_GetOwner
0x611111: cmp     eax, esi
0x611113: jnz     short loc_61111A
0x611115: mov     byte ptr [esp+294h+var_280], 1
0x61111A: mov     ecx, ebp
0x61111C: call    sub_4DB760
0x611121: test    al, al
0x611123: jz      short loc_611134
0x611125: mov     ecx, esi
0x611127: call    sub_4DB760
0x61112C: test    al, al
0x61112E: jz      loc_6112B7
0x611134: mov     eax, [esp+294h+var_280]
0x611138: push    eax
0x611139: push    esi
0x61113A: mov     ecx, edi
0x61113C: call    sub_605F60
0x611141: mov     edx, [esi]
0x611143: mov     edx, [edx+374h]
0x611149: mov     [esp+294h+var_278], eax
0x61114D: fild    [esp+294h+var_278]
0x611151: mov     eax, [edi+0Ch]
0x611154: push    ecx
0x611155: mov     ecx, esi
0x611157: fstp    [esp+298h+var_278]
0x61115B: fld     [esp+298h+var_278]
0x61115F: fstp    [esp+298h+var_298]
0x611162: push    eax
0x611163: call    edx
0x611165: mov     eax, [esi]
0x611167: mov     edx, [eax+198h]
0x61116D: push    0
0x61116F: mov     ecx, esi
0x611171: call    edx
0x611173: test    al, al
0x611175: jnz     loc_611206
0x61117B: mov     eax, [edi+0Ch]
0x61117E: mov     edx, [esi]
0x611180: push    esi
0x611181: push    eax
0x611182: mov     eax, [edx+224h]
0x611188: mov     ecx, esi
0x61118A: call    eax
0x61118C: push    eax
0x61118D: mov     ecx, edi
0x61118F: call    sub_605E20
0x611194: test    al, al
0x611196: jz      short loc_611206
0x611198: mov     ecx, ebp
0x61119A: call    sub_4DB760
0x61119F: test    al, al
0x6111A1: jnz     short loc_6111F1
0x6111A3: mov     edx, [ebp+0]
0x6111A6: mov     eax, [edx+170h]
0x6111AC: mov     ecx, ebp
0x6111AE: call    eax
0x6111B0: mov     ds:0B361C4h, eax
0x6111B5: mov     ecx, [edi+0Ch]
0x6111B8: push    9
0x6111BA: push    2
0x6111BC: mov     [esi+0E4h], ecx
0x6111C2: call    TESTopic__GEtTopic
0x6111C7: mov     ecx, [esi+58h]
0x6111CA: mov     edx, [ecx]
0x6111CC: add     esp, 8
0x6111CF: push    1
0x6111D1: push    0
0x6111D3: push    0
0x6111D5: push    eax
0x6111D6: mov     eax, [edx+1A4h]
0x6111DC: push    esi
0x6111DD: call    eax
0x6111DF: push    ebp
0x6111E0: mov     ecx, edi
0x6111E2: call    sub_605F00
0x6111E7: mov     dword ptr ds:0B361C4h, 0
0x6111F1: mov     edx, [esi]
0x6111F3: mov     eax, [edx+310h]
0x6111F9: push    0
0x6111FB: push    1
0x6111FD: push    0
0x6111FF: push    edi
0x611200: mov     ecx, esi
0x611202: call    eax
0x611204: jmp     short loc_611281
0x611206: mov     edx, [ebp+0]
0x611209: mov     eax, [edx+170h]
0x61120F: mov     ecx, ebp
0x611211: call    eax
0x611213: mov     ds:0B361C4h, eax
0x611218: mov     ecx, [edi+0Ch]
0x61121B: push    0Ch
0x61121D: push    2
0x61121F: mov     [esi+0E4h], ecx
0x611225: call    TESTopic__GEtTopic
0x61122A: mov     ebx, eax
0x61122C: mov     eax, [edi+0Ch]
0x61122F: add     esp, 8
0x611232: test    eax, eax
0x611234: jz      short loc_61125E
0x611236: push    eax
0x611237: mov     ecx, esi
0x611239: call    sub_5EA050
0x61123E: test    al, al
0x611240: jz      short loc_61125E
0x611242: mov     edx, [esi]
0x611244: mov     eax, [edi+0Ch]
0x611247: mov     edx, [edx+32Ch]
0x61124D: push    1
0x61124F: push    0
0x611251: push    0
0x611253: push    0
0x611255: push    0
0x611257: push    eax
0x611258: mov     ecx, esi
0x61125A: call    edx
0x61125C: jmp     short loc_611273
0x61125E: mov     ecx, [esi+58h]
0x611261: mov     eax, [ecx]
0x611263: mov     edx, [eax+1A4h]
0x611269: push    1
0x61126B: push    0
0x61126D: push    0
0x61126F: push    ebx
0x611270: push    esi
0x611271: call    edx
0x611273: mov     ebx, [esp+294h+var_27C]
0x611277: mov     dword ptr ds:0B361C4h, 0
0x611281: mov     ecx, esi; this
0x611283: call    TESObjectREFR_GetName
0x611288: push    eax
0x611289: mov     ecx, ebp; this
0x61128B: call    TESObjectREFR_GetName
0x611290: mov     ecx, [esp+298h+var_26C]; this
0x611294: push    eax
0x611295: call    TESObjectREFR_GetName
0x61129A: push    eax
0x61129B: lea     eax, [esp+2A0h+Format]
0x61129F: push    offset aSBeenMurderedB; "%s been Murdered by %s and sent to  %s "
0x6112A4: push    eax; ArgList
0x6112A5: call    __sprintf
0x6112AA: lea     ecx, [esp+2A8h+Format]
0x6112AE: push    ecx; Format
0x6112AF: call    sub_40FEC0
0x6112B4: add     esp, 18h
0x6112B7: mov     eax, [ebx+4]
0x6112BA: test    eax, eax
0x6112BC: mov     [esp+294h+var_27C], eax
0x6112C0: mov     ebx, eax
0x6112C2: jnz     loc_6110F6
0x6112C8: mov     esi, [esp+294h+var_274]
0x6112CC: mov     ecx, esi
0x6112CE: call    BSSimpleList_Clear
0x6112D3: push    esi
0x6112D4: call    FormHeapFree
0x6112D9: add     esp, 4
0x6112DC: mov     ecx, edi
0x6112DE: call    sub_605F30
0x6112E3: test    eax, eax
0x6112E5: jnz     short loc_611323
0x6112E7: test    edi, edi
0x6112E9: jz      short loc_6112FB
0x6112EB: mov     ecx, edi
0x6112ED: call    sub_605E80
0x6112F2: push    edi
0x6112F3: call    FormHeapFree
0x6112F8: add     esp, 4
0x6112FB: mov     ecx, [esp+294h+var_270]; this
0x6112FF: call    TESObjectREFR_GetName
0x611304: push    eax
0x611305: mov     ecx, ebp; this
0x611307: call    TESObjectREFR_GetName
0x61130C: push    eax
0x61130D: lea     edx, [esp+29Ch+Format]
0x611311: push    offset aSMurderingSNoO; "%s  murdering %s no one cared"
0x611316: push    edx
0x611317: call    __sprintf
0x61131C: lea     eax, [esp+2A4h+Format]
0x611320: push    eax
0x611321: jmp     short loc_61136E
0x611323: push    edi
0x611324: mov     ecx, offset ActorProcessManager_ptr
0x611329: call    sub_675B30
0x61132E: jmp     short loc_611376
0x611330: test    edi, edi
0x611332: jz      short loc_611344
0x611334: mov     ecx, edi
0x611336: call    sub_605E80
0x61133B: push    edi
0x61133C: call    FormHeapFree
0x611341: add     esp, 4
0x611344: mov     ecx, esi; this
0x611346: call    TESObjectREFR_GetName
0x61134B: push    eax
0x61134C: mov     ecx, ebp; this
0x61134E: call    TESObjectREFR_GetName
0x611353: push    eax
0x611354: lea     ecx, [esp+29Ch+var_13C]
0x61135B: push    offset aSGotAwayWithMu; "%s got away with murdering %s"
0x611360: push    ecx
0x611361: call    __sprintf
0x611366: lea     edx, [esp+2A4h+var_13C]
0x61136D: push    edx; Format
0x61136E: call    Interface_ConsolePrint
0x611373: add     esp, 14h
0x611376: push    ebx
0x611377: call    FormHeapFree
0x61137C: add     esp, 4
0x61137F: mov     ecx, dword ptr [esp+294h+var_C]
0x611386: mov     large fs:0, ecx
0x61138D: pop     ecx
0x61138E: pop     edi
0x61138F: pop     esi
0x611390: pop     ebp
0x611391: pop     ebx
0x611392: mov     ecx, [esp+280h+var_10]
0x611399: xor     ecx, esp
0x61139B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6113A0: add     esp, 280h
0x6113A6: retn    4
