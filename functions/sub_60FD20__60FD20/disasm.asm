0x60FD20: push    0FFFFFFFFh
0x60FD22: push    offset SEH_6113B0
0x60FD27: mov     eax, large fs:0
0x60FD2D: push    eax
0x60FD2E: sub     esp, 148h
0x60FD34: mov     eax, ds:0B30AACh
0x60FD39: xor     eax, esp
0x60FD3B: mov     [esp+154h+var_10], eax
0x60FD42: push    ebx
0x60FD43: push    ebp
0x60FD44: push    esi
0x60FD45: push    edi
0x60FD46: mov     eax, ds:0B30AACh
0x60FD4B: xor     eax, esp
0x60FD4D: push    eax
0x60FD4E: lea     eax, [esp+168h+var_C]
0x60FD55: mov     large fs:0, eax
0x60FD5B: mov     edi, [esp+168h+arg_0]
0x60FD62: mov     esi, ecx
0x60FD64: cmp     esi, ds:0B333C4h
0x60FD6A: mov     [esp+168h+var_14C], esi
0x60FD6E: mov     [esp+168h+var_140], edi
0x60FD72: jnz     short loc_60FDB8
0x60FD74: lea     ebx, [edi+44h]
0x60FD77: mov     ecx, ebx
0x60FD79: call    ExtraDataList_GetCrimeGold
0x60FD7E: fcomp   dword ptr ds:0A2FAA8h
0x60FD84: fnstsw  ax
0x60FD86: test    ah, 41h
0x60FD89: jp      short loc_60FDD8
0x60FD8B: mov     eax, ds:0B333C4h
0x60FD90: add     dword ptr [eax+6DCh], 1
0x60FD97: fild    dword ptr ds:0B376B0h
0x60FD9D: push    ecx
0x60FD9E: mov     ecx, ebx
0x60FDA0: fstp    [esp+16Ch+var_16C]; float
0x60FDA3: call    sub_4269E0
0x60FDA8: mov     eax, [edi]
0x60FDAA: mov     edx, [eax+40h]
0x60FDAD: push    80h ; '€'
0x60FDB2: mov     ecx, edi
0x60FDB4: call    edx
0x60FDB6: jmp     short loc_60FDD8
0x60FDB8: mov     eax, [esi]
0x60FDBA: mov     edx, [eax+284h]
0x60FDC0: push    1Fh
0x60FDC2: call    edx
0x60FDC4: cmp     eax, 64h ; 'd'
0x60FDC7: jnz     short loc_60FDD8
0x60FDC9: mov     ecx, esi
0x60FDCB: call    Actor_IsSneaking
0x60FDD0: test    al, al
0x60FDD2: jnz     loc_60FE77
0x60FDD8: mov     ecx, edi; this
0x60FDDA: call    TESObjectREFR_GetOwner
0x60FDDF: push    30h ; '0'; Size
0x60FDE1: mov     ebp, eax
0x60FDE3: call    FormHeapAlloc
0x60FDE8: add     esp, 4
0x60FDEB: mov     [esp+168h+var_150], eax
0x60FDEF: xor     ebx, ebx
0x60FDF1: cmp     eax, ebx
0x60FDF3: mov     [esp+168h+var_4], ebx
0x60FDFA: jz      short loc_60FE0E
0x60FDFC: push    ebp
0x60FDFD: push    ebx
0x60FDFE: push    ebx
0x60FDFF: push    esi
0x60FE00: push    edi
0x60FE01: push    5
0x60FE03: mov     ecx, eax
0x60FE05: call    sub_6070B0
0x60FE0A: mov     edi, eax
0x60FE0C: jmp     short loc_60FE10
0x60FE0E: xor     edi, edi
0x60FE10: push    edi
0x60FE11: mov     ecx, offset ActorProcessManager_ptr
0x60FE16: mov     [esp+16Ch+var_4], 0FFFFFFFFh
0x60FE21: call    sub_67A290
0x60FE26: cmp     eax, ebx
0x60FE28: mov     [esp+168h+var_154], eax
0x60FE2C: mov     [esp+168h+var_148], eax
0x60FE30: jnz     short loc_60FEA5
0x60FE32: cmp     edi, ebx
0x60FE34: jz      short loc_60FE46
0x60FE36: mov     ecx, edi
0x60FE38: call    sub_605E80
0x60FE3D: push    edi
0x60FE3E: call    FormHeapFree
0x60FE43: add     esp, 4
0x60FE46: mov     ecx, esi; this
0x60FE48: call    TESObjectREFR_GetName
0x60FE4D: push    eax
0x60FE4E: lea     eax, [esp+16Ch+Format]
0x60FE52: push    offset aSGotAwayWithSt; "%s got away with stealing horse"
0x60FE57: push    eax
0x60FE58: call    __sprintf
0x60FE5D: lea     ecx, [esp+174h+Format]
0x60FE61: push    ecx; Format
0x60FE62: call    Interface_ConsolePrint
0x60FE67: add     esp, 10h
0x60FE6A: mov     edx, [esp+168h+var_154]
0x60FE6E: push    edx
0x60FE6F: call    FormHeapFree
0x60FE74: add     esp, 4
0x60FE77: mov     ecx, dword ptr [esp+168h+var_C]
0x60FE7E: mov     large fs:0, ecx
0x60FE85: pop     ecx
0x60FE86: pop     edi
0x60FE87: pop     esi
0x60FE88: pop     ebp
0x60FE89: pop     ebx
0x60FE8A: mov     ecx, [esp+154h+var_10]
0x60FE91: xor     ecx, esp
0x60FE93: call    @__security_check_cookie@4; __security_check_cookie(x)
0x60FE98: add     esp, 154h
0x60FE9E: retn    4
0x60FEA1: mov     eax, [esp+168h+var_154]
0x60FEA5: mov     esi, [eax]
0x60FEA7: cmp     esi, ebx
0x60FEA9: jz      loc_60FFDA
0x60FEAF: mov     ecx, [edi+8]; this
0x60FEB2: cmp     esi, ecx
0x60FEB4: mov     byte ptr [esp+168h+var_144], bl
0x60FEB8: jz      short loc_60FEC3
0x60FEBA: call    TESObjectREFR_GetOwner
0x60FEBF: cmp     eax, esi
0x60FEC1: jnz     short loc_60FEC8
0x60FEC3: mov     byte ptr [esp+168h+var_144], 1
0x60FEC8: mov     ecx, [esp+168h+var_140]
0x60FECC: call    sub_4DB760
0x60FED1: test    al, al
0x60FED3: jz      short loc_60FEE4
0x60FED5: mov     ecx, esi
0x60FED7: call    sub_4DB760
0x60FEDC: test    al, al
0x60FEDE: jz      loc_60FFC7
0x60FEE4: mov     eax, [esp+168h+var_144]
0x60FEE8: push    eax
0x60FEE9: push    esi
0x60FEEA: mov     ecx, edi
0x60FEEC: call    sub_605F60
0x60FEF1: mov     edx, [esi]
0x60FEF3: mov     edx, [edx+374h]
0x60FEF9: mov     [esp+168h+var_150], eax
0x60FEFD: fild    [esp+168h+var_150]
0x60FF01: mov     eax, [edi+0Ch]
0x60FF04: push    ecx
0x60FF05: fstp    [esp+16Ch+var_150]
0x60FF09: mov     ecx, esi
0x60FF0B: fld     [esp+16Ch+var_150]
0x60FF0F: fstp    [esp+16Ch+var_16C]
0x60FF12: push    eax
0x60FF13: call    edx
0x60FF15: mov     ecx, [esp+16Ch+var_150]
0x60FF19: mov     eax, [esi]
0x60FF1B: mov     edx, [eax+224h]
0x60FF21: push    esi
0x60FF22: push    ecx
0x60FF23: mov     ecx, esi
0x60FF25: call    edx
0x60FF27: push    eax
0x60FF28: mov     ecx, edi
0x60FF2A: call    sub_605E20
0x60FF2F: test    al, al
0x60FF31: jz      short loc_60FF93
0x60FF33: mov     ecx, [esp+168h+var_14C]
0x60FF37: call    sub_4DB760
0x60FF3C: test    al, al
0x60FF3E: jnz     short loc_60FF80
0x60FF40: mov     eax, [esp+168h+var_14C]
0x60FF44: push    eax
0x60FF45: mov     ecx, edi
0x60FF47: mov     ds:0B361C4h, ebp
0x60FF4D: call    sub_605F00
0x60FF52: mov     ecx, [edi+0Ch]
0x60FF55: push    3
0x60FF57: push    2
0x60FF59: mov     [esi+0E4h], ecx
0x60FF5F: call    TESTopic__GEtTopic
0x60FF64: mov     ecx, [esi+58h]
0x60FF67: mov     edx, [ecx]
0x60FF69: add     esp, 8
0x60FF6C: push    1
0x60FF6E: push    ebx
0x60FF6F: push    ebx
0x60FF70: push    eax
0x60FF71: mov     eax, [edx+1A4h]
0x60FF77: push    esi
0x60FF78: call    eax
0x60FF7A: mov     ds:0B361C4h, ebx
0x60FF80: mov     edx, [esi]
0x60FF82: mov     eax, [edx+310h]
0x60FF88: push    ebx
0x60FF89: push    1
0x60FF8B: push    ebx
0x60FF8C: push    edi
0x60FF8D: mov     ecx, esi
0x60FF8F: call    eax
0x60FF91: jmp     short loc_60FFC7
0x60FF93: mov     ds:0B361C4h, ebp
0x60FF99: mov     ecx, [edi+0Ch]
0x60FF9C: push    0Eh
0x60FF9E: push    2
0x60FFA0: mov     [esi+0E4h], ecx
0x60FFA6: call    TESTopic__GEtTopic
0x60FFAB: mov     ecx, [esi+58h]
0x60FFAE: mov     edx, [ecx]
0x60FFB0: add     esp, 8
0x60FFB3: push    1
0x60FFB5: push    ebx
0x60FFB6: push    ebx
0x60FFB7: push    eax
0x60FFB8: mov     eax, [edx+1A4h]
0x60FFBE: push    esi
0x60FFBF: call    eax
0x60FFC1: mov     ds:0B361C4h, ebx
0x60FFC7: mov     ecx, [esp+168h+var_154]
0x60FFCB: mov     eax, [ecx+4]
0x60FFCE: cmp     eax, ebx
0x60FFD0: mov     [esp+168h+var_154], eax
0x60FFD4: jnz     loc_60FEA1
0x60FFDA: mov     ecx, [esp+168h+var_148]
0x60FFDE: call    BSSimpleList_Clear
0x60FFE3: mov     edx, [esp+168h+var_148]
0x60FFE7: push    edx
0x60FFE8: call    FormHeapFree
0x60FFED: add     esp, 4
0x60FFF0: mov     ecx, edi
0x60FFF2: call    sub_605F30
0x60FFF7: test    eax, eax
0x60FFF9: jnz     short loc_610018
0x60FFFB: cmp     edi, ebx
0x60FFFD: jz      loc_60FE6A
0x610003: mov     ecx, edi
0x610005: call    sub_605E80
0x61000A: push    edi
0x61000B: call    FormHeapFree
0x610010: add     esp, 4
0x610013: jmp     loc_60FE6A
0x610018: push    edi
0x610019: mov     ecx, offset ActorProcessManager_ptr
0x61001E: call    sub_675B30
0x610023: mov     edi, [edi+0Ch]
0x610026: push    ebx; int
0x610027: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x61002C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x610031: push    ebx; int
0x610032: push    ebp; void *
0x610033: call    OblivionDynamicCast
0x610038: add     esp, 14h
0x61003B: cmp     edi, ds:0B333C4h
0x610041: jnz     loc_60FE6A
0x610047: cmp     eax, ebx
0x610049: jnz     short loc_6100A0
0x61004B: push    ebx; int
0x61004C: push    offset ??_R0?AVTESFaction@@@8; struct TypeDescriptor *
0x610051: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x610056: push    ebx; int
0x610057: push    ebp; void *
0x610058: call    OblivionDynamicCast
0x61005D: mov     esi, eax
0x61005F: add     esp, 14h
0x610062: cmp     esi, ebx
0x610064: jz      loc_60FE6A
0x61006A: mov     ecx, ds:0B333C4h; this
0x610070: push    1
0x610072: push    esi
0x610073: push    ebx; a2
0x610074: call    Actor_GetActorBaseForm
0x610079: mov     ecx, eax
0x61007B: add     ecx, 24h ; '$'
0x61007E: call    TESActorBaseData_GetFactionRank
0x610083: cmp     eax, 0FFFFFFFFh
0x610086: jz      loc_60FE6A
0x61008C: mov     eax, [esi]
0x61008E: mov     edx, [eax+40h]
0x610091: or      byte ptr [esi+34h], 10h
0x610095: push    4
0x610097: mov     ecx, esi
0x610099: call    edx
0x61009B: jmp     loc_60FE6A
0x6100A0: push    2
0x6100A2: lea     ecx, [eax+24h]
0x6100A5: call    TESActorBaseData_SetSharedPlayerFactionFlags
0x6100AA: jmp     loc_60FE6A
