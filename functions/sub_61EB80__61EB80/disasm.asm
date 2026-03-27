0x61EB80: push    0FFFFFFFFh
0x61EB82: push    offset SEH_61EB80
0x61EB87: mov     eax, large fs:0
0x61EB8D: push    eax
0x61EB8E: sub     esp, 104h
0x61EB94: mov     eax, ds:0B30AACh
0x61EB99: xor     eax, esp
0x61EB9B: mov     [esp+110h+var_10], eax
0x61EBA2: push    ebx
0x61EBA3: push    ebp
0x61EBA4: push    esi
0x61EBA5: push    edi
0x61EBA6: mov     eax, ds:0B30AACh
0x61EBAB: xor     eax, esp
0x61EBAD: push    eax
0x61EBAE: lea     eax, [esp+124h+var_C]
0x61EBB5: mov     large fs:0, eax
0x61EBBB: mov     eax, [esp+124h+arg_8]
0x61EBC2: mov     ecx, [esp+124h+arg_C]
0x61EBC9: mov     ebp, [eax]
0x61EBCB: mov     esi, [esp+124h+arg_0]
0x61EBD2: push    0; int
0x61EBD4: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x61EBD9: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x61EBDE: mov     [esp+130h+var_F8], eax
0x61EBE2: mov     eax, [ecx]
0x61EBE4: push    0; int
0x61EBE6: push    esi; void *
0x61EBE7: mov     [esp+138h+var_F4], ecx
0x61EBEB: mov     [esp+138h+var_110], ebp
0x61EBEF: mov     [esp+138h+var_104], eax
0x61EBF3: call    OblivionDynamicCast
0x61EBF8: mov     ecx, ds:0B3B914h
0x61EBFE: mov     edx, ds:0B3B90Ch
0x61EC04: push    ecx
0x61EC05: push    edx
0x61EC06: mov     edi, eax
0x61EC08: lea     eax, [esp+140h+var_D8]
0x61EC0C: push    offset aCombatInfoDAct; "COMBAT INFO: %d actors in combat with P"...
0x61EC11: push    eax
0x61EC12: call    __sprintf
0x61EC17: fild    [esp+148h+var_110]
0x61EC1B: add     esp, 24h
0x61EC1E: push    0FFFFFFFFh; int
0x61EC20: push    1; int
0x61EC22: sub     esp, 8
0x61EC25: fstp    [esp+134h+var_134+4]; float
0x61EC29: lea     ecx, [esp+134h+var_D8]
0x61EC2D: fild    dword ptr ds:0B02E24h
0x61EC33: fstp    [esp+134h+var_134]; float
0x61EC36: push    ecx; int
0x61EC37: call    InterfaceMgr_DebugTextLine
0x61EC3C: fld     dword ptr ds:0B3C0D0h
0x61EC42: mov     ebx, [esp+138h+arg_4]
0x61EC49: fstp    [esp+138h+var_10C]
0x61EC4D: fldz
0x61EC4F: add     ebp, ebx
0x61EC51: fld     [esp+138h+var_10C]
0x61EC55: add     esp, 14h
0x61EC58: fcom    st(1)
0x61EC5A: mov     [esp+124h+var_110], ebp
0x61EC5E: mov     [esp+124h+var_108], ebp
0x61EC62: fnstsw  ax
0x61EC64: fstp    st(1)
0x61EC66: test    ah, 41h
0x61EC69: jnz     short loc_61ECD3
0x61EC6B: cmp     byte ptr ds:0B333B8h, 0
0x61EC72: jz      short loc_61EC7C
0x61EC74: fld     dword ptr ds:0B38100h
0x61EC7A: jmp     short loc_61EC82
0x61EC7C: fld     dword ptr ds:0B380F8h
0x61EC82: fstp    [esp+124h+var_10C]
0x61EC86: sub     esp, 10h
0x61EC89: fld     [esp+134h+var_10C]
0x61EC8D: lea     edx, [esp+134h+var_D8]
0x61EC91: fstp    [esp+134h+var_12C]
0x61EC95: fstp    qword ptr [esp+134h+var_134]
0x61EC98: push    offset aMagicProjectil; "Magic Projectile tracking value: %.2f/%"...
0x61EC9D: push    edx
0x61EC9E: call    __sprintf
0x61ECA3: fild    [esp+13Ch+var_110]
0x61ECA7: add     esp, 18h
0x61ECAA: push    0FFFFFFFFh; int
0x61ECAC: push    1; int
0x61ECAE: sub     esp, 8
0x61ECB1: fstp    [esp+134h+var_134+4]; float
0x61ECB5: lea     eax, [esp+134h+var_D8]
0x61ECB9: fild    dword ptr ds:0B02E24h
0x61ECBF: fstp    [esp+134h+var_134]; float
0x61ECC2: push    eax; int
0x61ECC3: call    InterfaceMgr_DebugTextLine
0x61ECC8: add     esp, 14h
0x61ECCB: add     ebp, ebx
0x61ECCD: mov     [esp+124h+var_110], ebp
0x61ECD1: jmp     short loc_61ECD5
0x61ECD3: fstp    st
0x61ECD5: fild    [esp+124h+var_110]
0x61ECD9: push    0FFFFFFFFh; int
0x61ECDB: push    1; int
0x61ECDD: sub     esp, 8
0x61ECE0: fstp    [esp+134h+var_134+4]; float
0x61ECE4: mov     ecx, esi; this
0x61ECE6: fild    dword ptr ds:0B02E24h
0x61ECEC: fstp    [esp+134h+var_134]; float
0x61ECEF: call    TESObjectREFR_GetName
0x61ECF4: push    eax; int
0x61ECF5: call    InterfaceMgr_DebugTextLine
0x61ECFA: add     ebp, ebx
0x61ECFC: add     esp, 14h
0x61ECFF: test    edi, edi
0x61ED01: mov     [esp+124h+var_110], ebp
0x61ED05: jnz     short loc_61ED37
0x61ED07: fild    [esp+124h+var_110]
0x61ED0B: push    0FFFFFFFFh; int
0x61ED0D: push    1; int
0x61ED0F: sub     esp, 8
0x61ED12: fstp    [esp+134h+var_134+4]; float
0x61ED16: fild    dword ptr ds:0B02E24h
0x61ED1C: fstp    [esp+134h+var_134]; float
0x61ED1F: push    offset aCurrentRefIs_1; "Current ref is not an actor."
0x61ED24: call    InterfaceMgr_DebugTextLine
0x61ED29: add     esp, 14h
0x61ED2C: add     ebp, ebx
0x61ED2E: mov     [esp+124h+var_110], ebp
0x61ED32: jmp     loc_61F890
0x61ED37: cmp     edi, ds:0B333C4h
0x61ED3D: jnz     loc_61F4FE
0x61ED43: fild    [esp+124h+var_110]
0x61ED47: push    0FFFFFFFFh; int
0x61ED49: push    1; int
0x61ED4B: sub     esp, 8
0x61ED4E: fstp    [esp+134h+var_134+4]; float
0x61ED52: fild    dword ptr ds:0B02E24h
0x61ED58: fstp    [esp+134h+var_134]; float
0x61ED5B: push    offset aCurrentRefIsTh; "Current ref is the player -- no combat "...
0x61ED60: call    InterfaceMgr_DebugTextLine
0x61ED65: mov     ecx, ds:0B333C4h
0x61ED6B: fld     dword ptr [ecx+640h]
0x61ED71: add     esp, 4
0x61ED74: fstp    [esp+134h+var_108]
0x61ED78: lea     edx, [esp+134h+var_D8]
0x61ED7C: fld     dword ptr ds:0B3BAFCh
0x61ED82: add     ebp, ebx
0x61ED84: fstp    [esp+134h+var_12C]
0x61ED88: mov     [esp+134h+var_110], ebp
0x61ED8C: fld     [esp+134h+var_108]
0x61ED90: fstp    qword ptr [esp+134h+var_134]
0x61ED93: push    offset aBowTimer_2fZoo; "Bow Timer: %.2f zoom timer: %.2f"
0x61ED98: push    edx
0x61ED99: call    __sprintf
0x61ED9E: fild    [esp+13Ch+var_110]
0x61EDA2: add     esp, 18h
0x61EDA5: push    0FFFFFFFFh; int
0x61EDA7: push    1; int
0x61EDA9: sub     esp, 8
0x61EDAC: fstp    [esp+134h+var_134+4]; float
0x61EDB0: lea     eax, [esp+134h+var_D8]
0x61EDB4: fild    dword ptr ds:0B02E24h
0x61EDBA: fstp    [esp+134h+var_134]; float
0x61EDBD: push    eax; int
0x61EDBE: call    InterfaceMgr_DebugTextLine
0x61EDC3: add     ebp, ebx
0x61EDC5: add     esp, 14h
0x61EDC8: mov     ecx, edi
0x61EDCA: mov     [esp+124h+var_110], ebp
0x61EDCE: call    sub_5E3C80
0x61EDD3: sub     esp, 8
0x61EDD6: mov     ecx, edi
0x61EDD8: fstp    [esp+12Ch+var_12C]
0x61EDDB: call    sub_5E3AD0
0x61EDE0: sub     esp, 8
0x61EDE3: mov     ecx, edi
0x61EDE5: fstp    qword ptr [esp+134h+var_134]
0x61EDE8: call    sub_5E3920
0x61EDED: sub     esp, 8
0x61EDF0: mov     ecx, edi
0x61EDF2: fstp    [esp+13Ch+var_13C]
0x61EDF5: call    sub_5E3750
0x61EDFA: sub     esp, 8
0x61EDFD: mov     ecx, edi
0x61EDFF: fstp    [esp+144h+var_144]
0x61EE02: call    sub_5E3590
0x61EE07: sub     esp, 8
0x61EE0A: fstp    [esp+14Ch+var_14C]
0x61EE0D: lea     ecx, [esp+14Ch+var_D8]
0x61EE11: push    offset aSpeedsWalk_2fR; "SPEEDS: Walk: %.2f Run: %.2f Swim: %.2f"...
0x61EE16: push    ecx
0x61EE17: call    __sprintf
0x61EE1C: fild    [esp+154h+var_110]
0x61EE20: add     esp, 30h
0x61EE23: push    0FFFFFFFFh; int
0x61EE25: push    1; int
0x61EE27: sub     esp, 8
0x61EE2A: fstp    [esp+134h+var_134+4]; float
0x61EE2E: lea     edx, [esp+134h+var_D8]
0x61EE32: fild    dword ptr ds:0B02E24h
0x61EE38: fstp    [esp+134h+var_134]; float
0x61EE3B: push    edx; int
0x61EE3C: call    InterfaceMgr_DebugTextLine
0x61EE41: mov     ecx, ds:0B333C4h
0x61EE47: add     ebp, ebx
0x61EE49: add     esp, 14h
0x61EE4C: mov     [esp+124h+var_110], ebp
0x61EE50: mov     [esp+124h+var_10C], 0
0x61EE58: call    Player_GetCurrentMagicItem
0x61EE5D: test    eax, eax
0x61EE5F: jz      loc_61EF57
0x61EE65: mov     ecx, ds:0B333C4h
0x61EE6B: mov     esi, [ecx+5Ch]
0x61EE6E: push    0
0x61EE70: lea     eax, [esp+128h+var_10C]
0x61EE74: push    eax
0x61EE75: push    0
0x61EE77: add     esi, 1Ch
0x61EE7A: call    Player_GetCurrentMagicItem
0x61EE7F: mov     ecx, ds:0B333C4h
0x61EE85: mov     edx, [esi]
0x61EE87: push    eax
0x61EE88: add     ecx, 5Ch ; '\'
0x61EE8B: call    edx
0x61EE8D: test    al, al
0x61EE8F: jz      short loc_61EEBD
0x61EE91: mov     ecx, ds:0B333C4h
0x61EE97: call    Player_GetCurrentMagicItem
0x61EE9C: mov     eax, [eax+4]
0x61EE9F: test    eax, eax
0x61EEA1: jnz     short loc_61EEA8
0x61EEA3: mov     eax, offset EmptyString
0x61EEA8: push    eax
0x61EEA9: lea     eax, [esp+128h+var_D8]
0x61EEAD: push    offset aSelectedSpellS; "Selected Spell: %s (can cast)"
0x61EEB2: push    eax
0x61EEB3: call    __sprintf
0x61EEB8: add     esp, 0Ch
0x61EEBB: jmp     short loc_61EF2C
0x61EEBD: mov     ecx, [esp+124h+var_10C]
0x61EEC1: push    ecx
0x61EEC2: mov     ecx, ds:0B333C4h
0x61EEC8: lea     edx, [esp+128h+var_104+4]
0x61EECC: push    edx
0x61EECD: call    Player_GetCurrentMagicItem
0x61EED2: mov     ecx, eax
0x61EED4: call    Magic_CastFailureMsg
0x61EED9: mov     esi, eax
0x61EEDB: mov     ecx, ds:0B333C4h
0x61EEE1: mov     [esp+124h+var_4], 0
0x61EEEC: call    Player_GetCurrentMagicItem
0x61EEF1: mov     eax, [eax+4]
0x61EEF4: test    eax, eax
0x61EEF6: jnz     short loc_61EEFD
0x61EEF8: mov     eax, offset EmptyString
0x61EEFD: mov     ecx, [esi+4]
0x61EF00: mov     edx, [esi]
0x61EF02: push    ecx
0x61EF03: push    edx
0x61EF04: push    eax
0x61EF05: lea     eax, [esp+130h+var_D8]
0x61EF09: push    offset aSelectedSpel_0; "Selected Spell: %s Cannot Cast: %s"
0x61EF0E: push    eax
0x61EF0F: call    __sprintf
0x61EF14: mov     ecx, [esp+138h+var_104+4]
0x61EF18: push    ecx
0x61EF19: mov     [esp+13Ch+var_4], 0FFFFFFFFh
0x61EF24: call    FormHeapFree
0x61EF29: add     esp, 18h
0x61EF2C: fild    [esp+124h+var_110]
0x61EF30: push    0FFFFFFFFh; int
0x61EF32: push    1; int
0x61EF34: sub     esp, 8
0x61EF37: fstp    [esp+134h+var_134+4]; float
0x61EF3B: lea     edx, [esp+134h+var_D8]
0x61EF3F: fild    dword ptr ds:0B02E24h
0x61EF45: fstp    [esp+134h+var_134]; float
0x61EF48: push    edx; int
0x61EF49: call    InterfaceMgr_DebugTextLine
0x61EF4E: add     esp, 14h
0x61EF51: add     ebp, ebx
0x61EF53: mov     [esp+124h+var_110], ebp
0x61EF57: push    0; a2
0x61EF59: mov     ecx, offset ActorProcessManager_ptr; this
0x61EF5E: call    sub_673A50
0x61EF63: mov     ecx, eax; this
0x61EF65: call    sub_7616D0
0x61EF6A: mov     ebp, eax
0x61EF6C: test    ebp, ebp
0x61EF6E: jz      loc_61F0C1
0x61EF74: cmp     dword ptr [ebp+4], 0
0x61EF78: jnz     short loc_61EF80
0x61EF7A: cmp     dword ptr [ebp+0], 0
0x61EF7E: jz      short loc_61EFA9
0x61EF80: fild    [esp+124h+var_110]
0x61EF84: push    0FFFFFFFFh; int
0x61EF86: push    1; int
0x61EF88: sub     esp, 8
0x61EF8B: fstp    [esp+134h+var_134+4]; float
0x61EF8F: fild    dword ptr ds:0B02E24h
0x61EF95: fstp    [esp+134h+var_134]; float
0x61EF98: push    offset aHighProcessAct; "High Process Actors targeting the Playe"...
0x61EF9D: call    InterfaceMgr_DebugTextLine
0x61EFA2: add     esp, 14h
0x61EFA5: add     [esp+124h+var_110], ebx
0x61EFA9: cmp     dword ptr [ebp+4], 0
0x61EFAD: jnz     short loc_61EFB9
0x61EFAF: cmp     dword ptr [ebp+0], 0
0x61EFB3: jz      loc_61F0C1
0x61EFB9: mov     eax, [ebp+0]
0x61EFBC: push    0; int
0x61EFBE: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x61EFC3: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x61EFC8: push    0; int
0x61EFCA: push    eax; void *
0x61EFCB: call    OblivionDynamicCast
0x61EFD0: mov     ebp, [ebp+4]
0x61EFD3: mov     esi, eax
0x61EFD5: add     esp, 14h
0x61EFD8: test    esi, esi
0x61EFDA: jz      loc_61F0B9
0x61EFE0: mov     eax, [esi]
0x61EFE2: mov     edx, [eax+330h]
0x61EFE8: mov     ecx, esi
0x61EFEA: call    edx
0x61EFEC: test    eax, eax
0x61EFEE: jz      short loc_61F045
0x61EFF0: mov     eax, [eax+40h]
0x61EFF3: test    eax, eax
0x61EFF5: jz      short loc_61F045
0x61EFF7: mov     edx, ds:0B333C4h
0x61EFFD: lea     ecx, [ecx+0]
0x61F000: mov     ecx, [eax+4]
0x61F003: test    ecx, ecx
0x61F005: jnz     short loc_61F00B
0x61F007: cmp     [eax], ecx
0x61F009: jz      short loc_61F045
0x61F00B: mov     eax, [eax]
0x61F00D: cmp     [eax], edx
0x61F00F: jz      short loc_61F019
0x61F011: mov     eax, ecx
0x61F013: test    eax, eax
0x61F015: jnz     short loc_61F000
0x61F017: jmp     short loc_61F045
0x61F019: fild    [esp+124h+var_110]
0x61F01D: push    0FFFFFFFFh; int
0x61F01F: push    1; int
0x61F021: sub     esp, 8
0x61F024: fstp    [esp+134h+var_134+4]; float
0x61F028: mov     ecx, esi; this
0x61F02A: fild    dword ptr ds:0B02E24h
0x61F030: fstp    [esp+134h+var_134]; float
0x61F033: call    TESObjectREFR_GetName
0x61F038: push    eax; int
0x61F039: call    InterfaceMgr_DebugTextLine
0x61F03E: add     esp, 14h
0x61F041: add     [esp+124h+var_110], ebx
0x61F045: lea     ecx, [esi+44h]
0x61F048: call    GetExtraDataFollower
0x61F04D: test    eax, eax
0x61F04F: jz      short loc_61F0B9
0x61F051: mov     edi, [eax+0Ch]
0x61F054: test    edi, edi
0x61F056: jz      short loc_61F0B9
0x61F058: mov     esi, [edi]
0x61F05A: test    esi, esi
0x61F05C: jz      short loc_61F0B9
0x61F05E: cmp     dword ptr [esi+58h], 0
0x61F062: jz      short loc_61F0B2
0x61F064: mov     edx, [esi]
0x61F066: mov     eax, [edx+330h]
0x61F06C: mov     ecx, esi
0x61F06E: call    eax
0x61F070: test    eax, eax
0x61F072: jz      short loc_61F0B2
0x61F074: mov     ecx, ds:0B333C4h
0x61F07A: push    ecx
0x61F07B: mov     ecx, eax
0x61F07D: call    sub_613670
0x61F082: test    al, al
0x61F084: jz      short loc_61F0B2
0x61F086: fild    [esp+124h+var_110]
0x61F08A: push    0FFFFFFFFh; int
0x61F08C: push    1; int
0x61F08E: sub     esp, 8
0x61F091: fstp    [esp+134h+var_134+4]; float
0x61F095: mov     ecx, esi; this
0x61F097: fild    dword ptr ds:0B02E24h
0x61F09D: fstp    [esp+134h+var_134]; float
0x61F0A0: call    TESObjectREFR_GetName
0x61F0A5: push    eax; int
0x61F0A6: call    InterfaceMgr_DebugTextLine
0x61F0AB: add     esp, 14h
0x61F0AE: add     [esp+124h+var_110], ebx
0x61F0B2: mov     edi, [edi+4]
0x61F0B5: test    edi, edi
0x61F0B7: jnz     short loc_61F058
0x61F0B9: test    ebp, ebp
0x61F0BB: jnz     loc_61EFA9
0x61F0C1: push    1; a2
0x61F0C3: mov     ecx, offset ActorProcessManager_ptr; this
0x61F0C8: call    sub_673A50
0x61F0CD: mov     ecx, eax; this
0x61F0CF: call    sub_7616D0
0x61F0D4: mov     ebp, eax
0x61F0D6: test    ebp, ebp
0x61F0D8: jz      loc_61F229
0x61F0DE: cmp     dword ptr [ebp+4], 0
0x61F0E2: jnz     short loc_61F0EA
0x61F0E4: cmp     dword ptr [ebp+0], 0
0x61F0E8: jz      short loc_61F113
0x61F0EA: fild    [esp+124h+var_110]
0x61F0EE: push    0FFFFFFFFh; int
0x61F0F0: push    1; int
0x61F0F2: sub     esp, 8
0x61F0F5: fstp    [esp+134h+var_134+4]; float
0x61F0F9: fild    dword ptr ds:0B02E24h
0x61F0FF: fstp    [esp+134h+var_134]; float
0x61F102: push    offset aMiddleHighProc; "Middle High Process Actors targeting th"...
0x61F107: call    InterfaceMgr_DebugTextLine
0x61F10C: add     esp, 14h
0x61F10F: add     [esp+124h+var_110], ebx
0x61F113: cmp     dword ptr [ebp+4], 0
0x61F117: jnz     short loc_61F123
0x61F119: cmp     dword ptr [ebp+0], 0
0x61F11D: jz      loc_61F229
0x61F123: mov     eax, [ebp+0]
0x61F126: push    0; int
0x61F128: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x61F12D: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x61F132: push    0; int
0x61F134: push    eax; void *
0x61F135: call    OblivionDynamicCast
0x61F13A: mov     ebp, [ebp+4]
0x61F13D: mov     esi, eax
0x61F13F: add     esp, 14h
0x61F142: test    esi, esi
0x61F144: jz      loc_61F221
0x61F14A: mov     edx, [esi]
0x61F14C: mov     eax, [edx+330h]
0x61F152: mov     ecx, esi
0x61F154: call    eax
0x61F156: test    eax, eax
0x61F158: jz      short loc_61F1AC
0x61F15A: mov     eax, [eax+40h]
0x61F15D: test    eax, eax
0x61F15F: jz      short loc_61F1AC
0x61F161: mov     edx, ds:0B333C4h
0x61F167: mov     ecx, [eax+4]
0x61F16A: test    ecx, ecx
0x61F16C: jnz     short loc_61F172
0x61F16E: cmp     [eax], ecx
0x61F170: jz      short loc_61F1AC
0x61F172: mov     eax, [eax]
0x61F174: cmp     [eax], edx
0x61F176: jz      short loc_61F180
0x61F178: mov     eax, ecx
0x61F17A: test    eax, eax
0x61F17C: jnz     short loc_61F167
0x61F17E: jmp     short loc_61F1AC
0x61F180: fild    [esp+124h+var_110]
0x61F184: push    0FFFFFFFFh; int
0x61F186: push    1; int
0x61F188: sub     esp, 8
0x61F18B: fstp    [esp+134h+var_134+4]; float
0x61F18F: mov     ecx, esi; this
0x61F191: fild    dword ptr ds:0B02E24h
0x61F197: fstp    [esp+134h+var_134]; float
0x61F19A: call    TESObjectREFR_GetName
0x61F19F: push    eax; int
0x61F1A0: call    InterfaceMgr_DebugTextLine
0x61F1A5: add     esp, 14h
0x61F1A8: add     [esp+124h+var_110], ebx
0x61F1AC: lea     ecx, [esi+44h]
0x61F1AF: call    GetExtraDataFollower
0x61F1B4: test    eax, eax
0x61F1B6: jz      short loc_61F221
0x61F1B8: mov     edi, [eax+0Ch]
0x61F1BB: test    edi, edi
0x61F1BD: jz      short loc_61F221
0x61F1BF: nop
0x61F1C0: mov     esi, [edi]
0x61F1C2: test    esi, esi
0x61F1C4: jz      short loc_61F221
0x61F1C6: cmp     dword ptr [esi+58h], 0
0x61F1CA: jz      short loc_61F21A
0x61F1CC: mov     edx, [esi]
0x61F1CE: mov     eax, [edx+330h]
0x61F1D4: mov     ecx, esi
0x61F1D6: call    eax
0x61F1D8: test    eax, eax
0x61F1DA: jz      short loc_61F21A
0x61F1DC: mov     ecx, ds:0B333C4h
0x61F1E2: push    ecx
0x61F1E3: mov     ecx, eax
0x61F1E5: call    sub_613670
0x61F1EA: test    al, al
0x61F1EC: jz      short loc_61F21A
0x61F1EE: fild    [esp+124h+var_110]
0x61F1F2: push    0FFFFFFFFh; int
0x61F1F4: push    1; int
0x61F1F6: sub     esp, 8
0x61F1F9: fstp    [esp+134h+var_134+4]; float
0x61F1FD: mov     ecx, esi; this
0x61F1FF: fild    dword ptr ds:0B02E24h
0x61F205: fstp    [esp+134h+var_134]; float
0x61F208: call    TESObjectREFR_GetName
0x61F20D: push    eax; int
0x61F20E: call    InterfaceMgr_DebugTextLine
0x61F213: add     esp, 14h
0x61F216: add     [esp+124h+var_110], ebx
0x61F21A: mov     edi, [edi+4]
0x61F21D: test    edi, edi
0x61F21F: jnz     short loc_61F1C0
0x61F221: test    ebp, ebp
0x61F223: jnz     loc_61F113
0x61F229: push    2; a2
0x61F22B: mov     ecx, offset ActorProcessManager_ptr; this
0x61F230: call    sub_673A50
0x61F235: mov     ecx, eax; this
0x61F237: call    sub_7616D0
0x61F23C: mov     ebp, eax
0x61F23E: test    ebp, ebp
0x61F240: jz      loc_61F391
0x61F246: cmp     dword ptr [ebp+4], 0
0x61F24A: jnz     short loc_61F252
0x61F24C: cmp     dword ptr [ebp+0], 0
0x61F250: jz      short loc_61F27B
0x61F252: fild    [esp+124h+var_110]
0x61F256: push    0FFFFFFFFh; int
0x61F258: push    1; int
0x61F25A: sub     esp, 8
0x61F25D: fstp    [esp+134h+var_134+4]; float
0x61F261: fild    dword ptr ds:0B02E24h
0x61F267: fstp    [esp+134h+var_134]; float
0x61F26A: push    offset aMiddleLowProce; "Middle Low Process Actors targeting the"...
0x61F26F: call    InterfaceMgr_DebugTextLine
0x61F274: add     esp, 14h
0x61F277: add     [esp+124h+var_110], ebx
0x61F27B: cmp     dword ptr [ebp+4], 0
0x61F27F: jnz     short loc_61F28B
0x61F281: cmp     dword ptr [ebp+0], 0
0x61F285: jz      loc_61F391
0x61F28B: mov     eax, [ebp+0]
0x61F28E: push    0; int
0x61F290: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x61F295: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x61F29A: push    0; int
0x61F29C: push    eax; void *
0x61F29D: call    OblivionDynamicCast
0x61F2A2: mov     ebp, [ebp+4]
0x61F2A5: mov     esi, eax
0x61F2A7: add     esp, 14h
0x61F2AA: test    esi, esi
0x61F2AC: jz      loc_61F389
0x61F2B2: mov     edx, [esi]
0x61F2B4: mov     eax, [edx+330h]
0x61F2BA: mov     ecx, esi
0x61F2BC: call    eax
0x61F2BE: test    eax, eax
0x61F2C0: jz      short loc_61F315
0x61F2C2: mov     eax, [eax+40h]
0x61F2C5: test    eax, eax
0x61F2C7: jz      short loc_61F315
0x61F2C9: mov     edx, ds:0B333C4h
0x61F2CF: nop
0x61F2D0: mov     ecx, [eax+4]
0x61F2D3: test    ecx, ecx
0x61F2D5: jnz     short loc_61F2DB
0x61F2D7: cmp     [eax], ecx
0x61F2D9: jz      short loc_61F315
0x61F2DB: mov     eax, [eax]
0x61F2DD: cmp     [eax], edx
0x61F2DF: jz      short loc_61F2E9
0x61F2E1: mov     eax, ecx
0x61F2E3: test    eax, eax
0x61F2E5: jnz     short loc_61F2D0
0x61F2E7: jmp     short loc_61F315
0x61F2E9: fild    [esp+124h+var_110]
0x61F2ED: push    0FFFFFFFFh; int
0x61F2EF: push    1; int
0x61F2F1: sub     esp, 8
0x61F2F4: fstp    [esp+134h+var_134+4]; float
0x61F2F8: mov     ecx, esi; this
0x61F2FA: fild    dword ptr ds:0B02E24h
0x61F300: fstp    [esp+134h+var_134]; float
0x61F303: call    TESObjectREFR_GetName
0x61F308: push    eax; int
0x61F309: call    InterfaceMgr_DebugTextLine
0x61F30E: add     esp, 14h
0x61F311: add     [esp+124h+var_110], ebx
0x61F315: lea     ecx, [esi+44h]
0x61F318: call    GetExtraDataFollower
0x61F31D: test    eax, eax
0x61F31F: jz      short loc_61F389
0x61F321: mov     edi, [eax+0Ch]
0x61F324: test    edi, edi
0x61F326: jz      short loc_61F389
0x61F328: mov     esi, [edi]
0x61F32A: test    esi, esi
0x61F32C: jz      short loc_61F389
0x61F32E: cmp     dword ptr [esi+58h], 0
0x61F332: jz      short loc_61F382
0x61F334: mov     edx, [esi]
0x61F336: mov     eax, [edx+330h]
0x61F33C: mov     ecx, esi
0x61F33E: call    eax
0x61F340: test    eax, eax
0x61F342: jz      short loc_61F382
0x61F344: mov     ecx, ds:0B333C4h
0x61F34A: push    ecx
0x61F34B: mov     ecx, eax
0x61F34D: call    sub_613670
0x61F352: test    al, al
0x61F354: jz      short loc_61F382
0x61F356: fild    [esp+124h+var_110]
0x61F35A: push    0FFFFFFFFh; int
0x61F35C: push    1; int
0x61F35E: sub     esp, 8
0x61F361: fstp    [esp+134h+var_134+4]; float
0x61F365: mov     ecx, esi; this
0x61F367: fild    dword ptr ds:0B02E24h
0x61F36D: fstp    [esp+134h+var_134]; float
0x61F370: call    TESObjectREFR_GetName
0x61F375: push    eax; int
0x61F376: call    InterfaceMgr_DebugTextLine
0x61F37B: add     esp, 14h
0x61F37E: add     [esp+124h+var_110], ebx
0x61F382: mov     edi, [edi+4]
0x61F385: test    edi, edi
0x61F387: jnz     short loc_61F328
0x61F389: test    ebp, ebp
0x61F38B: jnz     loc_61F27B
0x61F391: push    3; a2
0x61F393: mov     ecx, offset ActorProcessManager_ptr; this
0x61F398: call    sub_673A50
0x61F39D: mov     ecx, eax; this
0x61F39F: call    sub_7616D0
0x61F3A4: mov     ebp, eax
0x61F3A6: test    ebp, ebp
0x61F3A8: jz      loc_61F890
0x61F3AE: cmp     dword ptr [ebp+4], 0
0x61F3B2: jnz     short loc_61F3BA
0x61F3B4: cmp     dword ptr [ebp+0], 0
0x61F3B8: jz      short loc_61F3E3
0x61F3BA: fild    [esp+124h+var_110]
0x61F3BE: push    0FFFFFFFFh; int
0x61F3C0: push    1; int
0x61F3C2: sub     esp, 8
0x61F3C5: fstp    [esp+134h+var_134+4]; float
0x61F3C9: fild    dword ptr ds:0B02E24h
0x61F3CF: fstp    [esp+134h+var_134]; float
0x61F3D2: push    offset aLowProcessActo; "Low Process Actors targeting the Player"
0x61F3D7: call    InterfaceMgr_DebugTextLine
0x61F3DC: add     esp, 14h
0x61F3DF: add     [esp+124h+var_110], ebx
0x61F3E3: cmp     dword ptr [ebp+4], 0
0x61F3E7: jnz     short loc_61F3F3
0x61F3E9: cmp     dword ptr [ebp+0], 0
0x61F3ED: jz      loc_61F890
0x61F3F3: mov     eax, [ebp+0]
0x61F3F6: push    0; int
0x61F3F8: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x61F3FD: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x61F402: push    0; int
0x61F404: push    eax; void *
0x61F405: call    OblivionDynamicCast
0x61F40A: mov     ebp, [ebp+4]
0x61F40D: mov     esi, eax
0x61F40F: add     esp, 14h
0x61F412: test    esi, esi
0x61F414: jz      loc_61F4F1
0x61F41A: mov     edx, [esi]
0x61F41C: mov     eax, [edx+330h]
0x61F422: mov     ecx, esi
0x61F424: call    eax
0x61F426: test    eax, eax
0x61F428: jz      short loc_61F47C
0x61F42A: mov     eax, [eax+40h]
0x61F42D: test    eax, eax
0x61F42F: jz      short loc_61F47C
0x61F431: mov     edx, ds:0B333C4h
0x61F437: mov     ecx, [eax+4]
0x61F43A: test    ecx, ecx
0x61F43C: jnz     short loc_61F442
0x61F43E: cmp     [eax], ecx
0x61F440: jz      short loc_61F47C
0x61F442: mov     eax, [eax]
0x61F444: cmp     [eax], edx
0x61F446: jz      short loc_61F450
0x61F448: mov     eax, ecx
0x61F44A: test    eax, eax
0x61F44C: jnz     short loc_61F437
0x61F44E: jmp     short loc_61F47C
0x61F450: fild    [esp+124h+var_110]
0x61F454: push    0FFFFFFFFh; int
0x61F456: push    1; int
0x61F458: sub     esp, 8
0x61F45B: fstp    [esp+134h+var_134+4]; float
0x61F45F: mov     ecx, esi; this
0x61F461: fild    dword ptr ds:0B02E24h
0x61F467: fstp    [esp+134h+var_134]; float
0x61F46A: call    TESObjectREFR_GetName
0x61F46F: push    eax; int
0x61F470: call    InterfaceMgr_DebugTextLine
0x61F475: add     esp, 14h
0x61F478: add     [esp+124h+var_110], ebx
0x61F47C: lea     ecx, [esi+44h]
0x61F47F: call    GetExtraDataFollower
0x61F484: test    eax, eax
0x61F486: jz      short loc_61F4F1
0x61F488: mov     edi, [eax+0Ch]
0x61F48B: test    edi, edi
0x61F48D: jz      short loc_61F4F1
0x61F48F: nop
0x61F490: mov     esi, [edi]
0x61F492: test    esi, esi
0x61F494: jz      short loc_61F4F1
0x61F496: cmp     dword ptr [esi+58h], 0
0x61F49A: jz      short loc_61F4EA
0x61F49C: mov     edx, [esi]
0x61F49E: mov     eax, [edx+330h]
0x61F4A4: mov     ecx, esi
0x61F4A6: call    eax
0x61F4A8: test    eax, eax
0x61F4AA: jz      short loc_61F4EA
0x61F4AC: mov     ecx, ds:0B333C4h
0x61F4B2: push    ecx
0x61F4B3: mov     ecx, eax
0x61F4B5: call    sub_613670
0x61F4BA: test    al, al
0x61F4BC: jz      short loc_61F4EA
0x61F4BE: fild    [esp+124h+var_110]
0x61F4C2: push    0FFFFFFFFh; int
0x61F4C4: push    1; int
0x61F4C6: sub     esp, 8
0x61F4C9: fstp    [esp+134h+var_134+4]; float
0x61F4CD: mov     ecx, esi; this
0x61F4CF: fild    dword ptr ds:0B02E24h
0x61F4D5: fstp    [esp+134h+var_134]; float
0x61F4D8: call    TESObjectREFR_GetName
0x61F4DD: push    eax; int
0x61F4DE: call    InterfaceMgr_DebugTextLine
0x61F4E3: add     esp, 14h
0x61F4E6: add     [esp+124h+var_110], ebx
0x61F4EA: mov     edi, [edi+4]
0x61F4ED: test    edi, edi
0x61F4EF: jnz     short loc_61F490
0x61F4F1: test    ebp, ebp
0x61F4F3: jnz     loc_61F3E3
0x61F4F9: jmp     loc_61F890
0x61F4FE: mov     edx, [edi]
0x61F500: mov     eax, [edx+334h]
0x61F506: push    1
0x61F508: mov     ecx, edi
0x61F50A: call    eax
0x61F50C: test    al, al
0x61F50E: jnz     short loc_61F540
0x61F510: fild    [esp+124h+var_110]
0x61F514: push    0FFFFFFFFh; int
0x61F516: push    1; int
0x61F518: sub     esp, 8
0x61F51B: fstp    [esp+134h+var_134+4]; float
0x61F51F: fild    dword ptr ds:0B02E24h
0x61F525: fstp    [esp+134h+var_134]; float
0x61F528: push    offset aCurrentRefIs_2; "Current ref is not in combat."
0x61F52D: call    InterfaceMgr_DebugTextLine
0x61F532: add     esp, 14h
0x61F535: add     ebp, ebx
0x61F537: mov     [esp+124h+var_110], ebp
0x61F53B: jmp     loc_61F890
0x61F540: mov     edx, [edi]
0x61F542: mov     eax, [edx+330h]
0x61F548: mov     ecx, edi
0x61F54A: call    eax
0x61F54C: test    eax, eax
0x61F54E: jnz     short loc_61F580
0x61F550: fild    [esp+124h+var_110]
0x61F554: push    0FFFFFFFFh; int
0x61F556: push    1; int
0x61F558: sub     esp, 8
0x61F55B: fstp    [esp+134h+var_134+4]; float
0x61F55F: fild    dword ptr ds:0B02E24h
0x61F565: fstp    [esp+134h+var_134]; float
0x61F568: push    offset aCurrentRefIsIn; "Current ref is in combat but has no con"...
0x61F56D: call    InterfaceMgr_DebugTextLine
0x61F572: add     esp, 14h
0x61F575: add     ebp, ebx
0x61F577: mov     [esp+124h+var_110], ebp
0x61F57B: jmp     loc_61F890
0x61F580: mov     edx, [edi]
0x61F582: mov     eax, [edx+330h]
0x61F588: mov     ecx, edi
0x61F58A: call    eax
0x61F58C: lea     ecx, [esp+124h+var_104]
0x61F590: push    ecx
0x61F591: lea     edx, [esp+128h+var_110]
0x61F595: push    edx
0x61F596: mov     ebp, eax
0x61F598: push    ebx
0x61F599: push    1
0x61F59B: mov     ecx, ebp
0x61F59D: call    sub_6135F0
0x61F5A2: push    eax
0x61F5A3: push    edi
0x61F5A4: call    sub_61A090
0x61F5A9: add     esp, 18h
0x61F5AC: mov     ecx, ebp
0x61F5AE: call    sub_6135F0
0x61F5B3: fild    [esp+124h+var_104]
0x61F5B7: push    0FFFFFFFFh; int
0x61F5B9: push    3; int
0x61F5BB: sub     esp, 8
0x61F5BE: test    eax, eax
0x61F5C0: fstp    [esp+134h+var_134+4]; float
0x61F5C4: jnz     short loc_61F5EF
0x61F5C6: mov     eax, 500h
0x61F5CB: sub     eax, ds:0B02E24h
0x61F5D1: mov     [esp+134h+var_10C], eax
0x61F5D5: fild    [esp+134h+var_10C]
0x61F5D9: fstp    [esp+134h+var_134]; float
0x61F5DC: push    offset aCurrentRefHasN; "Current ref has no targets."
0x61F5E1: call    InterfaceMgr_DebugTextLine
0x61F5E6: add     esp, 14h
0x61F5E9: add     [esp+124h+var_110], ebx
0x61F5ED: jmp     short loc_61F63E
0x61F5EF: mov     ecx, 500h
0x61F5F4: sub     ecx, ds:0B02E24h
0x61F5FA: mov     [esp+134h+var_10C], ecx
0x61F5FE: fild    [esp+134h+var_10C]
0x61F602: mov     ecx, ebp
0x61F604: fstp    [esp+134h+var_134]; float
0x61F607: call    sub_6135F0
0x61F60C: mov     ecx, eax; this
0x61F60E: call    TESObjectREFR_GetName
0x61F613: push    eax; int
0x61F614: call    InterfaceMgr_DebugTextLine
0x61F619: add     [esp+138h+var_104], ebx
0x61F61D: add     esp, 14h
0x61F620: lea     edx, [esp+124h+var_104]
0x61F624: push    edx
0x61F625: lea     eax, [esp+128h+var_110]
0x61F629: push    eax
0x61F62A: push    ebx
0x61F62B: push    0
0x61F62D: push    edi
0x61F62E: mov     ecx, ebp
0x61F630: call    sub_6135F0
0x61F635: push    eax
0x61F636: call    sub_61A090
0x61F63B: add     esp, 18h
0x61F63E: mov     ecx, [ebp+40h]
0x61F641: call    BSSimpleList_Count
0x61F646: cmp     eax, 1
0x61F649: jb      loc_61F6E3
0x61F64F: fild    [esp+124h+var_110]
0x61F653: push    0FFFFFFFFh; int
0x61F655: push    1; int
0x61F657: sub     esp, 8
0x61F65A: fstp    [esp+134h+var_134+4]; float
0x61F65E: fild    dword ptr ds:0B02E24h
0x61F664: fstp    [esp+134h+var_134]; float
0x61F667: push    offset aCurrentTargets; "Current Targets"
0x61F66C: call    InterfaceMgr_DebugTextLine
0x61F671: mov     esi, [ebp+40h]
0x61F674: add     [esp+138h+var_110], ebx
0x61F678: add     esp, 14h
0x61F67B: test    esi, esi
0x61F67D: jz      short loc_61F6E3
0x61F67F: nop
0x61F680: cmp     dword ptr [esi+4], 0
0x61F684: jnz     short loc_61F68B
0x61F686: cmp     dword ptr [esi], 0
0x61F689: jz      short loc_61F6E3
0x61F68B: mov     eax, [esi]
0x61F68D: test    eax, eax
0x61F68F: jz      short loc_61F6DC
0x61F691: mov     ecx, [eax]; this
0x61F693: test    ecx, ecx
0x61F695: jz      short loc_61F6DC
0x61F697: mov     eax, [eax+4]
0x61F69A: push    eax
0x61F69B: call    TESObjectREFR_GetName
0x61F6A0: push    eax
0x61F6A1: lea     ecx, [esp+12Ch+var_D8]
0x61F6A5: push    offset aSD_3; "%s: %d"
0x61F6AA: push    ecx
0x61F6AB: call    __sprintf
0x61F6B0: fild    [esp+134h+var_110]
0x61F6B4: add     esp, 10h
0x61F6B7: push    0FFFFFFFFh; int
0x61F6B9: push    1; int
0x61F6BB: sub     esp, 8
0x61F6BE: fstp    [esp+134h+var_134+4]; float
0x61F6C2: lea     edx, [esp+134h+var_D8]
0x61F6C6: fild    dword ptr ds:0B02E24h
0x61F6CC: fstp    [esp+134h+var_134]; float
0x61F6CF: push    edx; int
0x61F6D0: call    InterfaceMgr_DebugTextLine
0x61F6D5: add     esp, 14h
0x61F6D8: add     [esp+124h+var_110], ebx
0x61F6DC: mov     esi, [esi+4]
0x61F6DF: test    esi, esi
0x61F6E1: jnz     short loc_61F680
0x61F6E3: add     ebp, 15Ch
0x61F6E9: jz      loc_61F801
0x61F6EF: fild    dword ptr ds:0B02E24h
0x61F6F5: mov     eax, 500h
0x61F6FA: sub     eax, ds:0B02E24h
0x61F700: push    0FFFFFFFFh; int
0x61F702: fstp    [esp+128h+var_104+4]
0x61F706: mov     [esp+128h+var_10C], eax
0x61F70A: fild    [esp+128h+var_10C]
0x61F70E: push    2; int
0x61F710: fld     [esp+12Ch+var_104+4]
0x61F714: sub     esp, 8
0x61F717: fld     st
0x61F719: fsubp   st(2), st
0x61F71B: fxch    st(1)
0x61F71D: fmul    qword ptr ds:0A2FAA0h
0x61F723: faddp   st(1), st
0x61F725: fstp    [esp+134h+var_10C]
0x61F729: fild    [esp+134h+var_108]
0x61F72D: fstp    [esp+134h+var_134+4]; float
0x61F731: fld     [esp+134h+var_10C]
0x61F735: fstp    [esp+134h+var_134]; float
0x61F738: push    offset aAllies; "ALLIES"
0x61F73D: call    InterfaceMgr_DebugTextLine
0x61F742: add     esp, 14h
0x61F745: add     [esp+124h+var_108], ebx
0x61F749: lea     esp, [esp+0]
0x61F750: mov     esi, [ebp+0]
0x61F753: test    esi, esi
0x61F755: mov     ebp, [ebp+4]
0x61F758: jz      loc_61F7F9
0x61F75E: cmp     esi, edi
0x61F760: jz      loc_61F7F9
0x61F766: mov     edx, [esi]
0x61F768: mov     eax, [edx+330h]
0x61F76E: mov     ecx, esi
0x61F770: call    eax
0x61F772: test    eax, eax
0x61F774: jz      short loc_61F790
0x61F776: mov     edx, [esi]
0x61F778: mov     eax, [edx+330h]
0x61F77E: mov     ecx, esi
0x61F780: call    eax
0x61F782: fld     dword ptr [eax+0CCh]
0x61F788: fmul    qword ptr ds:0A30DC8h
0x61F78E: jmp     short loc_61F792
0x61F790: fldz
0x61F792: mov     edx, [esi]
0x61F794: fstp    qword ptr [esp+124h+var_104+4]
0x61F798: mov     eax, [edx+170h]
0x61F79E: mov     ecx, esi
0x61F7A0: call    eax
0x61F7A2: fld     qword ptr [esp+124h+var_104+4]
0x61F7A6: mov     eax, [eax+0Ch]
0x61F7A9: fstp    [esp+124h+var_104+4]
0x61F7AD: fld     [esp+124h+var_104+4]
0x61F7B1: sub     esp, 8
0x61F7B4: fstp    [esp+12Ch+var_12C]
0x61F7B7: push    eax
0x61F7B8: mov     ecx, esi; this
0x61F7BA: call    TESObjectREFR_GetName
0x61F7BF: push    eax
0x61F7C0: lea     ecx, [esp+134h+var_D8]
0x61F7C4: push    offset a_20s08xPos_2f; "%.20s: (%08X) pos %.2f"
0x61F7C9: push    ecx
0x61F7CA: call    __sprintf
0x61F7CF: fild    [esp+13Ch+var_108]
0x61F7D3: add     esp, 18h
0x61F7D6: push    0FFFFFFFFh; int
0x61F7D8: push    2; int
0x61F7DA: sub     esp, 8
0x61F7DD: fstp    [esp+134h+var_134+4]; float
0x61F7E1: lea     edx, [esp+134h+var_D8]
0x61F7E5: fld     [esp+134h+var_10C]
0x61F7E9: fstp    [esp+134h+var_134]; float
0x61F7EC: push    edx; int
0x61F7ED: call    InterfaceMgr_DebugTextLine
0x61F7F2: add     esp, 14h
0x61F7F5: add     [esp+124h+var_108], ebx
0x61F7F9: test    ebp, ebp
0x61F7FB: jnz     loc_61F750
0x61F801: mov     eax, [edi]
0x61F803: mov     edx, [eax+15Ch]
0x61F809: lea     ecx, [esp+124h+var_F0]
0x61F80D: push    ecx
0x61F80E: mov     ecx, edi
0x61F810: call    edx
0x61F812: mov     eax, [edi]
0x61F814: mov     edx, [eax+158h]
0x61F81A: lea     ecx, [esp+124h+var_E4]
0x61F81E: push    ecx
0x61F81F: mov     ecx, edi
0x61F821: call    edx
0x61F823: fld     [esp+124h+var_E8]
0x61F827: sub     esp, 30h
0x61F82A: fstp    [esp+154h+var_12C]
0x61F82E: lea     eax, [esp+154h+var_D8]
0x61F832: fld     [esp+154h+var_EC]
0x61F836: fstp    qword ptr [esp+154h+var_134]
0x61F83A: fld     [esp+154h+var_F0]
0x61F83E: fstp    [esp+154h+var_13C]
0x61F842: fld     [esp+154h+var_DC]
0x61F846: fstp    [esp+154h+var_144]
0x61F84A: fld     [esp+154h+var_E0]
0x61F84E: fstp    [esp+154h+var_14C]
0x61F852: fld     [esp+154h+var_E4]
0x61F856: fstp    [esp+154h+var_158+4]
0x61F859: push    offset aBounds_2f_2f_2; "BOUNDS: (%.2f, %.2f, %.2f)-(%.2f, %.2f,"...
0x61F85E: push    eax
0x61F85F: call    __sprintf
0x61F864: fild    [esp+15Ch+var_110]
0x61F868: add     esp, 38h
0x61F86B: push    0FFFFFFFFh; int
0x61F86D: push    1; int
0x61F86F: sub     esp, 8
0x61F872: fstp    [esp+134h+var_134+4]; float
0x61F876: lea     ecx, [esp+134h+var_D8]
0x61F87A: fild    dword ptr ds:0B02E24h
0x61F880: fstp    [esp+134h+var_134]; float
0x61F883: push    ecx; int
0x61F884: call    InterfaceMgr_DebugTextLine
0x61F889: add     esp, 14h
0x61F88C: add     [esp+124h+var_110], ebx
0x61F890: mov     edx, [esp+124h+var_110]
0x61F894: mov     eax, [esp+124h+var_F8]
0x61F898: mov     ecx, [esp+124h+var_104]
0x61F89C: mov     [eax], edx
0x61F89E: mov     edx, [esp+124h+var_F4]
0x61F8A2: mov     [edx], ecx
0x61F8A4: mov     ecx, dword ptr [esp+124h+var_C]
0x61F8AB: mov     large fs:0, ecx
0x61F8B2: pop     ecx
0x61F8B3: pop     edi
0x61F8B4: pop     esi
0x61F8B5: pop     ebp
0x61F8B6: pop     ebx
0x61F8B7: mov     ecx, [esp+110h+var_10]
0x61F8BE: xor     ecx, esp
0x61F8C0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x61F8C5: add     esp, 110h
0x61F8CB: retn
