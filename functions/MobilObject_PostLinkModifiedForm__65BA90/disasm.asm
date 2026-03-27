0x65BA90: mov     eax, [esp+arg_4]
0x65BA94: sub     esp, 0Ch
0x65BA97: push    ebx
0x65BA98: mov     ebx, [esp+10h+arg_0]
0x65BA9C: push    esi
0x65BA9D: push    edi
0x65BA9E: push    eax
0x65BA9F: push    ebx
0x65BAA0: mov     esi, ecx
0x65BAA2: call    TESObjectREFR_PostLinkModifiedForm
0x65BAA7: push    0; int
0x65BAA9: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x65BAAE: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x65BAB3: push    0; int
0x65BAB5: push    esi; void *
0x65BAB6: call    OblivionDynamicCast
0x65BABB: mov     edi, eax
0x65BABD: add     esp, 14h
0x65BAC0: test    edi, edi
0x65BAC2: jz      short loc_65BAEA
0x65BAC4: mov     ecx, edi; this
0x65BAC6: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x65BACB: cmp     eax, 2
0x65BACE: jz      short loc_65BADC
0x65BAD0: mov     ecx, edi; this
0x65BAD2: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x65BAD7: cmp     eax, 1
0x65BADA: jnz     short loc_65BAEA
0x65BADC: mov     edx, [esi]
0x65BADE: mov     eax, [edx+1C8h]
0x65BAE4: mov     ecx, esi
0x65BAE6: call    eax
0x65BAE8: jmp     short loc_65BB65
0x65BAEA: test    bl, 0Eh
0x65BAED: jz      short loc_65BB65
0x65BAEF: mov     ecx, esi; this
0x65BAF1: call    MobileObject_GetCharProxy
0x65BAF6: mov     edi, eax
0x65BAF8: test    edi, edi
0x65BAFA: jz      short loc_65BB65
0x65BAFC: mov     ecx, esi; this
0x65BAFE: call    TESObjectREFR_GetParentCell
0x65BB03: test    eax, eax
0x65BB05: jz      short loc_65BB34
0x65BB07: push    ebp
0x65BB08: mov     ecx, esi; this
0x65BB0A: call    TESObjectREFR_GetParentCell
0x65BB0F: mov     ebp, eax
0x65BB11: mov     ecx, ebp; this
0x65BB13: call    TESObjectCELL_IsInterior
0x65BB18: test    al, al
0x65BB1A: jz      short loc_65BB26
0x65BB1C: lea     ecx, [ebp+28h]
0x65BB1F: call    sub_424180
0x65BB24: jmp     short loc_65BB2B
0x65BB26: mov     eax, ds:0B35C24h
0x65BB2B: push    eax
0x65BB2C: mov     ecx, edi
0x65BB2E: call    sub_895060
0x65BB33: pop     ebp
0x65BB34: lea     ecx, [edi+1E0h]
0x65BB3A: call    sub_88D370
0x65BB3F: cmp     eax, 4
0x65BB42: jz      short loc_65BB65
0x65BB44: mov     ecx, [esi+2Ch]
0x65BB47: mov     edx, [esi+30h]
0x65BB4A: mov     eax, [esi+34h]
0x65BB4D: mov     [esp+18h+a2], ecx
0x65BB51: lea     ecx, [esp+18h+a2]
0x65BB55: push    ecx; a2
0x65BB56: mov     ecx, edi; this
0x65BB58: mov     [esp+1Ch+var_8], edx
0x65BB5C: mov     [esp+1Ch+var_4], eax
0x65BB60: call    sub_452A10
0x65BB65: mov     ecx, [esi+58h]
0x65BB68: test    ecx, ecx
0x65BB6A: jz      loc_65BC37
0x65BB70: mov     eax, [esi+8]
0x65BB73: mov     edx, eax
0x65BB75: shr     edx, 5
0x65BB78: test    dl, 1
0x65BB7B: jnz     short loc_65BBF6
0x65BB7D: shr     eax, 0Bh
0x65BB80: test    al, 1
0x65BB82: jnz     short loc_65BBF6
0x65BB84: cmp     dword ptr [esi+3Ch], 0
0x65BB88: jnz     loc_65BC1F
0x65BB8E: cmp     esi, ds:0B333C4h
0x65BB94: jz      loc_65BC1F
0x65BB9A: mov     eax, [ecx]
0x65BB9C: mov     edx, [eax+8]
0x65BB9F: call    edx
0x65BBA1: test    eax, eax
0x65BBA3: jz      short loc_65BBB4
0x65BBA5: mov     ecx, [esi+58h]
0x65BBA8: mov     eax, [ecx]
0x65BBAA: mov     edx, [eax+8]
0x65BBAD: call    edx
0x65BBAF: cmp     eax, 1
0x65BBB2: jnz     short loc_65BC1F
0x65BBB4: mov     eax, [esi]
0x65BBB6: mov     edx, [eax+1ACh]
0x65BBBC: mov     ecx, esi
0x65BBBE: call    edx
0x65BBC0: mov     eax, [esi+58h]
0x65BBC3: mov     edi, [eax]
0x65BBC5: mov     ecx, offset TimeGlobals
0x65BBCA: call    TimeGlobals_GetGameHour
0x65BBCF: fsub    qword ptr ds:0A2FAA0h
0x65BBD5: mov     edx, [edi+1Ch]
0x65BBD8: push    ecx
0x65BBD9: mov     ecx, [esi+58h]
0x65BBDC: fstp    [esp+1Ch+arg_0]
0x65BBE0: fld     [esp+1Ch+arg_0]
0x65BBE4: fstp    [esp+1Ch+var_1C]
0x65BBE7: call    edx
0x65BBE9: push    esi
0x65BBEA: mov     ecx, offset ActorProcessManager_ptr
0x65BBEF: call    sub_674E10
0x65BBF4: jmp     short loc_65BC1F
0x65BBF6: mov     eax, [ecx]
0x65BBF8: mov     edx, [eax+8]
0x65BBFB: call    edx
0x65BBFD: push    eax
0x65BBFE: push    esi
0x65BBFF: mov     ecx, offset ActorProcessManager_ptr
0x65BC04: call    sub_674550
0x65BC09: mov     ecx, [esi+58h]
0x65BC0C: test    ecx, ecx
0x65BC0E: jz      short loc_65BC18
0x65BC10: mov     eax, [ecx]
0x65BC12: mov     edx, [eax]
0x65BC14: push    1
0x65BC16: call    edx
0x65BC18: mov     dword ptr [esi+58h], 0
0x65BC1F: mov     ecx, [esi+58h]
0x65BC22: test    ecx, ecx
0x65BC24: jz      short loc_65BC37
0x65BC26: mov     edx, [esp+18h+arg_4]
0x65BC2A: mov     eax, [ecx]
0x65BC2C: mov     eax, [eax+400h]
0x65BC32: push    esi
0x65BC33: push    edx
0x65BC34: push    ebx
0x65BC35: call    eax
0x65BC37: pop     edi
0x65BC38: pop     esi
0x65BC39: pop     ebx
0x65BC3A: add     esp, 0Ch
0x65BC3D: retn    8
