0x633F10: sub     esp, 24h
0x633F13: mov     ecx, [esp+24h+arg_0]
0x633F17: push    edi
0x633F18: add     ecx, 44h ; 'D'
0x633F1B: xor     edi, edi
0x633F1D: cmp     ecx, edi
0x633F1F: mov     [esp+28h+var_14], ecx
0x633F23: jz      loc_634265
0x633F29: push    esi
0x633F2A: call    GetExtraDataFollower
0x633F2F: mov     esi, eax
0x633F31: cmp     esi, edi
0x633F33: mov     [esp+2Ch+var_4], esi
0x633F37: jz      loc_634264
0x633F3D: push    8; Size
0x633F3F: call    FormHeapAlloc
0x633F44: add     esp, 4
0x633F47: cmp     eax, edi
0x633F49: jz      short loc_633F56
0x633F4B: mov     [eax], edi
0x633F4D: mov     [eax+4], edi
0x633F50: mov     [esp+2Ch+var_18], eax
0x633F54: jmp     short loc_633F5A
0x633F56: mov     [esp+2Ch+var_18], edi
0x633F5A: push    8; Size
0x633F5C: call    FormHeapAlloc
0x633F61: add     esp, 4
0x633F64: cmp     eax, edi
0x633F66: jz      short loc_633F73
0x633F68: mov     [eax], edi
0x633F6A: mov     [eax+4], edi
0x633F6D: mov     [esp+2Ch+var_24], eax
0x633F71: jmp     short loc_633F77
0x633F73: mov     [esp+2Ch+var_24], edi
0x633F77: push    ebx
0x633F78: mov     ebx, [esp+30h+var_24]
0x633F7C: push    ebp
0x633F7D: mov     ebp, [esi+0Ch]
0x633F80: push    edi; a2
0x633F81: mov     ecx, offset ActorProcessManager_ptr; this
0x633F86: mov     [esp+38h+var_1C], ebx
0x633F8A: call    sub_673A50
0x633F8F: mov     ecx, eax; this
0x633F91: call    sub_7616D0
0x633F96: fldz
0x633F98: cmp     ebp, edi
0x633F9A: fstp    [esp+34h+var_20]
0x633F9E: mov     [esp+34h+var_C], eax
0x633FA2: jz      short loc_633FF4
0x633FA4: mov     edi, [ebp+0]
0x633FA7: test    edi, edi
0x633FA9: jz      short loc_633FF2
0x633FAB: cmp     dword ptr [ebx+4], 0
0x633FAF: lea     eax, [ebx+4]
0x633FB2: mov     esi, ebx
0x633FB4: jz      short loc_633FC1
0x633FB6: mov     esi, [eax]
0x633FB8: cmp     dword ptr [esi+4], 0
0x633FBC: lea     eax, [esi+4]
0x633FBF: jnz     short loc_633FB6
0x633FC1: cmp     dword ptr [esi], 0
0x633FC4: jz      short loc_633FE9
0x633FC6: push    8; Size
0x633FC8: call    FormHeapAlloc
0x633FCD: add     esp, 4
0x633FD0: test    eax, eax
0x633FD2: jz      short loc_633FE2
0x633FD4: mov     [eax], edi
0x633FD6: mov     dword ptr [eax+4], 0
0x633FDD: mov     [esi+4], eax
0x633FE0: jmp     short loc_633FEB
0x633FE2: xor     eax, eax
0x633FE4: mov     [esi+4], eax
0x633FE7: jmp     short loc_633FEB
0x633FE9: mov     [esi], edi
0x633FEB: mov     ebp, [ebp+4]
0x633FEE: test    ebp, ebp
0x633FF0: jnz     short loc_633FA4
0x633FF2: xor     edi, edi
0x633FF4: cmp     ebx, edi
0x633FF6: jz      loc_634204
0x633FFC: lea     esp, [esp+0]
0x634000: mov     eax, [esp+34h+var_1C]
0x634004: mov     esi, [eax]
0x634006: test    esi, esi
0x634008: jz      loc_634204
0x63400E: mov     ecx, [esp+34h+var_C]
0x634012: call    BSSimpleList_Count
0x634017: cmp     esi, ds:0B333C4h
0x63401D: mov     [esp+34h+var_8], eax
0x634021: jz      loc_6341ED
0x634027: mov     ecx, [esp+34h+arg_0]
0x63402B: xor     bl, bl
0x63402D: call    sub_5E03A0
0x634032: mov     ecx, [esp+34h+var_14]
0x634036: mov     edi, eax
0x634038: call    ExtraDataList__GetExtraPackage
0x63403D: test    edi, edi
0x63403F: mov     ebp, eax
0x634041: jz      short loc_63404E
0x634043: mov     ecx, edi
0x634045: call    sub_567770
0x63404A: test    al, al
0x63404C: jz      short loc_634054
0x63404E: test    ebp, ebp
0x634050: jz      short loc_634054
0x634052: mov     edi, ebp
0x634054: test    edi, edi
0x634056: jz      short loc_634060
0x634058: cmp     byte ptr [edi+20h], 2
0x63405C: jnz     short loc_634060
0x63405E: mov     bl, 1
0x634060: mov     ecx, esi
0x634062: call    sub_5E03A0
0x634067: lea     ecx, [esi+44h]
0x63406A: mov     edi, eax
0x63406C: call    ExtraDataList__GetExtraPackage
0x634071: test    edi, edi
0x634073: mov     ebp, eax
0x634075: jz      short loc_634088
0x634077: mov     ecx, edi
0x634079: call    sub_567770
0x63407E: test    al, al
0x634080: jz      short loc_634088
0x634082: test    ebp, ebp
0x634084: jz      short loc_634088
0x634086: mov     edi, ebp
0x634088: test    bl, bl
0x63408A: jnz     short loc_6340AA
0x63408C: test    edi, edi
0x63408E: jz      short loc_63409B
0x634090: mov     al, [edi+20h]
0x634093: cmp     al, 1
0x634095: jz      short loc_6340AA
0x634097: cmp     al, 7
0x634099: jz      short loc_6340AA
0x63409B: mov     ecx, [esp+34h+var_18]
0x63409F: push    esi
0x6340A0: call    BSSimpleList_PushFront
0x6340A5: jmp     loc_6341ED
0x6340AA: mov     ecx, esi; this
0x6340AC: call    Actor__GetProcessLevel
0x6340B1: mov     ecx, eax
0x6340B3: test    ecx, ecx
0x6340B5: jz      short loc_63411D
0x6340B7: fld     [esp+34h+arg_4]
0x6340BB: fst     [esp+34h+var_10]
0x6340BF: fldz
0x6340C1: fcompp
0x6340C3: fnstsw  ax
0x6340C5: test    ah, 1
0x6340C8: jnz     short loc_6340D4
0x6340CA: fld     dword ptr ds:0A71E4Ch
0x6340D0: fstp    [esp+34h+var_10]
0x6340D4: cmp     ecx, 3
0x6340D7: jnz     short loc_634104
0x6340D9: mov     ebp, [esi+58h]
0x6340DC: mov     edi, [ebp+0]
0x6340DF: mov     ecx, offset TimeGlobals
0x6340E4: add     edi, 1Ch
0x6340E7: call    TimeGlobals_GetGameHour
0x6340EC: fsub    qword ptr ds:0A2F928h
0x6340F2: mov     edx, [edi]
0x6340F4: push    ecx
0x6340F5: fstp    [esp+38h+var_8]
0x6340F9: mov     ecx, ebp
0x6340FB: fld     [esp+38h+var_8]
0x6340FF: fstp    [esp+38h+var_38]
0x634102: call    edx
0x634104: mov     eax, [esi]
0x634106: fld     [esp+34h+var_10]
0x63410A: mov     edx, [eax+1C0h]
0x634110: push    ecx
0x634111: mov     ecx, esi
0x634113: fstp    [esp+38h+var_38]
0x634116: call    edx
0x634118: jmp     loc_6341ED
0x63411D: mov     eax, [esi]
0x63411F: fldz
0x634121: mov     edx, [eax+1C0h]
0x634127: push    ecx
0x634128: mov     ecx, esi
0x63412A: fstp    [esp+38h+var_38]
0x63412D: call    edx
0x63412F: mov     eax, [esi]
0x634131: mov     edx, [eax+190h]
0x634137: mov     ecx, esi
0x634139: call    edx
0x63413B: test    al, al
0x63413D: jz      loc_6341ED
0x634143: mov     ecx, esi; this
0x634145: call    Actor__GetProcessLevel
0x63414A: test    eax, eax
0x63414C: jnz     loc_6341ED
0x634152: mov     eax, [esi]
0x634154: mov     edx, [eax+1D8h]
0x63415A: mov     ecx, esi
0x63415C: call    edx
0x63415E: fcomp   dword ptr ds:0A2FAA8h
0x634164: fnstsw  ax
0x634166: test    ah, 5
0x634169: jp      short loc_6341E1
0x63416B: mov     ecx, esi; this
0x63416D: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x634172: cmp     eax, 3
0x634175: jz      short loc_6341E1
0x634177: mov     eax, [esi]
0x634179: mov     edx, [eax+198h]
0x63417F: push    0
0x634181: mov     ecx, esi
0x634183: call    edx
0x634185: test    al, al
0x634187: jnz     short loc_6341E1
0x634189: mov     eax, ds:0B333C4h
0x63418E: push    0
0x634190: push    eax
0x634191: mov     ecx, esi
0x634193: call    TesObjectREF_GetDistance
0x634198: fcomp   qword ptr ds:0A2F938h
0x63419E: fnstsw  ax
0x6341A0: test    ah, 5
0x6341A3: jp      short loc_6341E1
0x6341A5: mov     edx, [esi]
0x6341A7: fld     [esp+34h+var_20]
0x6341AB: mov     eax, [edx+1D4h]
0x6341B1: push    ecx
0x6341B2: mov     ecx, esi
0x6341B4: fstp    [esp+38h+var_38]
0x6341B7: call    eax
0x6341B9: fild    [esp+34h+var_8]
0x6341BD: mov     ecx, [esp+34h+var_8]
0x6341C1: test    ecx, ecx
0x6341C3: jge     short loc_6341CB
0x6341C5: fadd    dword ptr ds:0A2FC78h
0x6341CB: fmul    qword ptr ds:0A3C770h
0x6341D1: fmul    dword ptr ds:0B33E9Ch
0x6341D7: fadd    [esp+34h+var_20]
0x6341DB: fstp    [esp+34h+var_20]
0x6341DF: jmp     short loc_6341ED
0x6341E1: mov     edx, [esi]
0x6341E3: mov     eax, [edx+1DCh]
0x6341E9: mov     ecx, esi
0x6341EB: call    eax
0x6341ED: mov     ecx, [esp+34h+var_1C]
0x6341F1: mov     eax, [ecx+4]
0x6341F4: test    eax, eax
0x6341F6: mov     ebx, [esp+34h+var_24]
0x6341FA: mov     [esp+34h+var_1C], eax
0x6341FE: jnz     loc_634000
0x634204: mov     edi, [esp+34h+var_18]
0x634208: test    edi, edi
0x63420A: mov     esi, edi
0x63420C: jz      short loc_634227
0x63420E: mov     edi, edi
0x634210: mov     eax, [esi]
0x634212: test    eax, eax
0x634214: jz      short loc_634227
0x634216: mov     ecx, [esp+34h+var_14]
0x63421A: push    eax
0x63421B: call    sub_424D00
0x634220: mov     esi, [esi+4]
0x634223: test    esi, esi
0x634225: jnz     short loc_634210
0x634227: mov     ecx, edi
0x634229: call    BSSimpleList_Clear
0x63422E: push    edi
0x63422F: call    FormHeapFree
0x634234: add     esp, 4
0x634237: mov     ecx, ebx
0x634239: call    BSSimpleList_Clear
0x63423E: push    ebx
0x63423F: call    FormHeapFree
0x634244: mov     edx, [esp+38h+var_4]
0x634248: mov     eax, [edx+0Ch]
0x63424B: add     esp, 4
0x63424E: cmp     dword ptr [eax+4], 0
0x634252: pop     ebp
0x634253: pop     ebx
0x634254: jnz     short loc_634264
0x634256: cmp     dword ptr [eax], 0
0x634259: jnz     short loc_634264
0x63425B: mov     ecx, [esp+2Ch+var_14]
0x63425F: call    sub_420F00
0x634264: pop     esi
0x634265: pop     edi
0x634266: add     esp, 24h
0x634269: retn    8
