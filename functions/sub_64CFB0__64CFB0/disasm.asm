0x64CFB0: sub     esp, 1Ch
0x64CFB3: push    esi
0x64CFB4: mov     esi, ecx
0x64CFB6: cmp     dword ptr [esi+2Ch], 0
0x64CFBA: push    edi
0x64CFBB: mov     edi, [esp+24h+arg_0]
0x64CFBF: jnz     short loc_64CFCC
0x64CFC1: mov     eax, [esi]
0x64CFC3: mov     edx, [eax+558h]
0x64CFC9: push    edi
0x64CFCA: call    edx
0x64CFCC: mov     eax, ds:0B333C4h
0x64CFD1: cmp     [esi+2Ch], eax
0x64CFD4: jnz     short loc_64CFF4
0x64CFD6: cmp     byte ptr [eax+5C0h], 0
0x64CFDD: jz      short loc_64CFF4
0x64CFDF: mov     eax, [esi]
0x64CFE1: mov     edx, [eax+194h]
0x64CFE7: push    edi
0x64CFE8: mov     ecx, esi
0x64CFEA: call    edx
0x64CFEC: pop     edi
0x64CFED: pop     esi
0x64CFEE: add     esp, 1Ch
0x64CFF1: retn    10h
0x64CFF4: mov     eax, [esi]
0x64CFF6: mov     edx, [eax+184h]
0x64CFFC: push    ebx
0x64CFFD: push    ebp; int
0x64CFFE: push    0; int
0x64D000: push    offset ??_R0?AVTrespassPackage@@@8; struct TypeDescriptor *
0x64D005: push    offset ??_R0?AVTESPackage@@@8; struct _s_RTTICompleteObjectLocator *
0x64D00A: push    0; int
0x64D00C: mov     ecx, esi
0x64D00E: call    edx
0x64D010: push    eax; void *
0x64D011: call    OblivionDynamicCast
0x64D016: mov     ebx, [esi+2Ch]
0x64D019: mov     ebp, eax
0x64D01B: add     esp, 14h
0x64D01E: test    ebp, ebp
0x64D020: mov     dword ptr [esp+2Ch+var_14], ebx
0x64D024: jz      short loc_64D053
0x64D026: test    ebx, ebx
0x64D028: jz      short loc_64D053
0x64D02A: mov     eax, [ebx]
0x64D02C: mov     edx, [eax+354h]
0x64D032: mov     ecx, ebx
0x64D034: call    edx
0x64D036: test    al, al
0x64D038: jnz     short loc_64D053
0x64D03A: mov     eax, [esi]
0x64D03C: mov     edx, [eax+188h]
0x64D042: push    2
0x64D044: push    ebx
0x64D045: mov     ecx, esi
0x64D047: call    edx
0x64D049: pop     ebp
0x64D04A: pop     ebx
0x64D04B: pop     edi
0x64D04C: pop     esi
0x64D04D: add     esp, 1Ch
0x64D050: retn    10h
0x64D053: mov     eax, [esi+2Ch]
0x64D056: push    0
0x64D058: push    eax
0x64D059: mov     ecx, edi
0x64D05B: call    TesObjectREF_GetDistance
0x64D060: fcomp   qword ptr ds:0A37478h
0x64D066: fnstsw  ax
0x64D068: test    ah, 41h
0x64D06B: jnz     short loc_64D08D
0x64D06D: mov     eax, [esp+2Ch+arg_C]
0x64D071: mov     edx, [esi]
0x64D073: mov     edx, [edx+198h]
0x64D079: push    1
0x64D07B: push    eax
0x64D07C: push    0
0x64D07E: push    edi
0x64D07F: mov     ecx, esi
0x64D081: call    edx
0x64D083: pop     ebp
0x64D084: pop     ebx
0x64D085: pop     edi
0x64D086: pop     esi
0x64D087: add     esp, 1Ch
0x64D08A: retn    10h
0x64D08D: cmp     byte ptr [esi+0D0h], 0
0x64D094: jnz     short loc_64D0A3
0x64D096: mov     eax, [esi]
0x64D098: mov     edx, [eax+194h]
0x64D09E: push    edi
0x64D09F: mov     ecx, esi
0x64D0A1: call    edx
0x64D0A3: cmp     dword ptr [esi+2Ch], 0
0x64D0A7: jz      loc_64D1A9
0x64D0AD: mov     eax, [edi+58h]
0x64D0B0: push    0; int
0x64D0B2: push    offset ??_R0?AVHighProcess@@@8; struct TypeDescriptor *
0x64D0B7: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x64D0BC: push    0; int
0x64D0BE: push    eax; void *
0x64D0BF: call    OblivionDynamicCast
0x64D0C4: add     esp, 14h
0x64D0C7: test    eax, eax
0x64D0C9: jz      loc_64D1A9
0x64D0CF: mov     ecx, [edi+58h]
0x64D0D2: test    ecx, ecx
0x64D0D4: jz      loc_64D1A9
0x64D0DA: mov     eax, [ecx]
0x64D0DC: mov     edx, [eax+36Ch]
0x64D0E2: call    edx
0x64D0E4: test    eax, eax
0x64D0E6: jnz     loc_64D1A9
0x64D0EC: mov     eax, [edi]
0x64D0EE: mov     edx, [eax+174h]
0x64D0F4: mov     ebx, [esi+2Ch]
0x64D0F7: mov     ecx, edi
0x64D0F9: call    edx
0x64D0FB: mov     edx, [ebx]
0x64D0FD: push    eax
0x64D0FE: lea     eax, [esp+30h+var_C]
0x64D102: push    eax
0x64D103: mov     eax, [edx+174h]
0x64D109: mov     ecx, ebx
0x64D10B: call    eax
0x64D10D: mov     ecx, eax
0x64D10F: call    sub_4121A0
0x64D114: lea     ecx, [esp+2Ch+var_C]
0x64D118: push    ecx
0x64D119: call    sub_683CB0
0x64D11E: fstp    [esp+30h+arg_C]
0x64D122: fldz
0x64D124: add     esp, 4
0x64D127: lea     edx, [esp+2Ch+var_1C]
0x64D12B: fstp    dword ptr [esp+2Ch+var_1C]
0x64D12F: fld     [esp+2Ch+arg_C]
0x64D133: push    edx; int
0x64D134: push    ecx
0x64D135: fstp    [esp+34h+var_34]; float
0x64D138: push    edi; int
0x64D139: call    sub_683D80
0x64D13E: fstp    dword ptr [esp+38h+var_1C+4]
0x64D142: fild    dword ptr ds:0B36C10h
0x64D148: add     esp, 0Ch
0x64D14B: mov     ecx, edi
0x64D14D: fmul    qword ptr ds:0A31C78h
0x64D153: fstp    [esp+2Ch+arg_0]
0x64D157: call    sub_5E0590
0x64D15C: test    al, al
0x64D15E: jz      short loc_64D170
0x64D160: fild    dword ptr ds:0B36C18h
0x64D166: fmul    qword ptr ds:0A31C78h
0x64D16C: fstp    [esp+2Ch+arg_0]
0x64D170: fld     dword ptr [esp+2Ch+var_1C+4]
0x64D174: fabs
0x64D176: fstp    dword ptr [esp+2Ch+var_1C+4]
0x64D17A: fld     dword ptr [esp+2Ch+var_1C+4]
0x64D17E: fld     [esp+2Ch+arg_0]
0x64D182: fcompp
0x64D184: fnstsw  ax
0x64D186: test    ah, 5
0x64D189: jp      short loc_64D1A0
0x64D18B: fld     [esp+2Ch+arg_C]
0x64D18F: push    1; char
0x64D191: push    ecx
0x64D192: fstp    [esp+34h+var_34]; float
0x64D195: push    edi; Concurrency::details::SchedulerBase *
0x64D196: call    sub_685530
0x64D19B: add     esp, 0Ch
0x64D19E: jmp     short loc_64D1A9
0x64D1A0: push    30h ; '0'
0x64D1A2: mov     ecx, edi
0x64D1A4: call    sub_5E05F0
0x64D1A9: test    ebp, ebp
0x64D1AB: jz      loc_64D313
0x64D1B1: mov     eax, [esi+2Ch]
0x64D1B4: push    0; int
0x64D1B6: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x64D1BB: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x64D1C0: push    0; int
0x64D1C2: push    eax; void *
0x64D1C3: call    OblivionDynamicCast
0x64D1C8: mov     ebx, eax
0x64D1CA: add     esp, 14h
0x64D1CD: test    ebx, ebx
0x64D1CF: jz      short loc_64D1E5
0x64D1D1: mov     edx, [ebx]
0x64D1D3: mov     eax, [edx+354h]
0x64D1D9: mov     ecx, ebx
0x64D1DB: call    eax
0x64D1DD: test    al, al
0x64D1DF: jz      loc_64D4D5
0x64D1E5: mov     eax, [ebp+50h]
0x64D1E8: test    eax, eax
0x64D1EA: jz      short loc_64D205
0x64D1EC: cmp     [ebp+40h], eax
0x64D1EF: jle     loc_64D2AA
0x64D1F5: fldz
0x64D1F7: fcomp   dword ptr [ebp+3Ch]
0x64D1FA: fnstsw  ax
0x64D1FC: test    ah, 1
0x64D1FF: jnz     loc_64D2AA
0x64D205: cmp     dword ptr [esp+2Ch+var_14], 0
0x64D20A: jz      loc_64D2AA
0x64D210: mov     ecx, edi; this
0x64D212: call    sub_5E6C60
0x64D217: test    al, al
0x64D219: jz      short loc_64D281
0x64D21B: mov     eax, [ebp+4Ch]
0x64D21E: cmp     eax, 0FFFFFFFFh
0x64D221: jnz     short loc_64D243
0x64D223: mov     eax, [ebp+44h]
0x64D226: mov     edx, [ebx]
0x64D228: push    0FFFFFFFFh
0x64D22A: push    eax
0x64D22B: mov     eax, [edx+248h]
0x64D231: push    edi
0x64D232: mov     ecx, ebx
0x64D234: call    eax
0x64D236: mov     [ebp+4Ch], eax
0x64D239: pop     ebp
0x64D23A: pop     ebx
0x64D23B: pop     edi
0x64D23C: pop     esi
0x64D23D: add     esp, 1Ch
0x64D240: retn    10h
0x64D243: push    eax
0x64D244: push    2
0x64D246: mov     ecx, offset ActorProcessManager_ptr
0x64D24B: call    sub_675BB0
0x64D250: test    eax, eax
0x64D252: jz      loc_64D51B
0x64D258: cmp     byte ptr [eax+2Ch], 0
0x64D25C: jnz     loc_64D51B
0x64D262: mov     eax, [ebp+4Ch]
0x64D265: mov     ecx, [ebp+44h]
0x64D268: mov     edx, [ebx]
0x64D26A: mov     edx, [edx+248h]
0x64D270: push    eax
0x64D271: push    ecx
0x64D272: push    edi
0x64D273: mov     ecx, ebx
0x64D275: call    edx
0x64D277: pop     ebp
0x64D278: pop     ebx
0x64D279: pop     edi
0x64D27A: pop     esi
0x64D27B: add     esp, 1Ch
0x64D27E: retn    10h
0x64D281: mov     ecx, [edi+58h]
0x64D284: mov     eax, [ecx]
0x64D286: mov     edx, [eax+228h]
0x64D28C: push    1
0x64D28E: push    0
0x64D290: push    0
0x64D292: push    0
0x64D294: push    0
0x64D296: push    0
0x64D298: push    0
0x64D29A: push    0
0x64D29C: push    ebx
0x64D29D: push    edi
0x64D29E: call    edx
0x64D2A0: pop     ebp
0x64D2A1: pop     ebx
0x64D2A2: pop     edi
0x64D2A3: pop     esi
0x64D2A4: add     esp, 1Ch
0x64D2A7: retn    10h
0x64D2AA: fldz
0x64D2AC: fcomp   dword ptr [ebp+3Ch]
0x64D2AF: fnstsw  ax
0x64D2B1: test    ah, 1
0x64D2B4: jnz     short loc_64D2CF
0x64D2B6: mov     eax, [esi]
0x64D2B8: mov     edx, [eax+188h]
0x64D2BE: push    1
0x64D2C0: push    edi
0x64D2C1: mov     ecx, esi
0x64D2C3: call    edx
0x64D2C5: pop     ebp
0x64D2C6: pop     ebx
0x64D2C7: pop     edi
0x64D2C8: pop     esi
0x64D2C9: add     esp, 1Ch
0x64D2CC: retn    10h
0x64D2CF: fld     dword ptr ds:0B33E9Ch
0x64D2D5: fadd    st, st
0x64D2D7: fstp    [esp+2Ch+arg_0]
0x64D2DB: fld     [esp+2Ch+arg_0]
0x64D2DF: fadd    dword ptr [ebp+3Ch]
0x64D2E2: fstp    [esp+2Ch+arg_0]
0x64D2E6: fld     [esp+2Ch+arg_0]
0x64D2EA: fst     dword ptr [ebp+3Ch]
0x64D2ED: fld     dword ptr ds:0B36B30h
0x64D2F3: fcomp   st(1)
0x64D2F5: fnstsw  ax
0x64D2F7: test    ah, 5
0x64D2FA: jp      short loc_64D311
0x64D2FC: fld     qword ptr ds:0A3D360h
0x64D302: fmul    st, st(1)
0x64D304: fstp    [esp+2Ch+arg_0]
0x64D308: fadd    [esp+2Ch+arg_0]
0x64D30C: fstp    dword ptr [ebp+3Ch]
0x64D30F: jmp     short loc_64D313
0x64D311: fstp    st
0x64D313: mov     eax, [esi+2Ch]
0x64D316: push    0; int
0x64D318: push    offset ??_R0?AVCharacter@@@8; struct TypeDescriptor *
0x64D31D: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x64D322: push    0; int
0x64D324: push    eax; void *
0x64D325: call    OblivionDynamicCast
0x64D32A: mov     ecx, [esi+2Ch]
0x64D32D: push    0; int
0x64D32F: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x64D334: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x64D339: push    0; int
0x64D33B: push    ecx; void *
0x64D33C: mov     ebx, eax
0x64D33E: call    OblivionDynamicCast
0x64D343: add     esp, 28h
0x64D346: mov     ecx, edi
0x64D348: mov     ebp, eax
0x64D34A: call    sub_5E6BA0
0x64D34F: test    al, al
0x64D351: jz      loc_64D51B
0x64D357: test    ebp, ebp
0x64D359: jz      loc_64D51B
0x64D35F: mov     ecx, ds:0B333C4h; this
0x64D365: cmp     ebx, ecx
0x64D367: jnz     loc_64D479
0x64D36D: cmp     [esi+2Ch], ecx
0x64D370: jnz     short loc_64D3A4
0x64D372: call    PlayerCharacter__IsSleeping?
0x64D377: test    al, al
0x64D379: jz      short loc_64D3A4
0x64D37B: mov     eax, ds:0B333C4h
0x64D380: cmp     byte ptr [eax+12Ch], 0
0x64D387: jnz     short loc_64D3A4
0x64D389: pop     ebp
0x64D38A: pop     ebx
0x64D38B: pop     edi
0x64D38C: mov     dword ptr [eax+590h], 0
0x64D396: mov     byte ptr [eax+594h], 1
0x64D39D: pop     esi
0x64D39E: add     esp, 1Ch
0x64D3A1: retn    10h
0x64D3A4: mov     edx, [esi]
0x64D3A6: mov     eax, [edx+1CCh]
0x64D3AC: mov     ecx, esi
0x64D3AE: call    eax
0x64D3B0: test    al, al
0x64D3B2: mov     ecx, ds:0B333C4h
0x64D3B8: jnz     short loc_64D3F0
0x64D3BA: cmp     byte ptr [ecx+738h], 0
0x64D3C1: jnz     short loc_64D3FD
0x64D3C3: push    1
0x64D3C5: push    0
0x64D3C7: push    0
0x64D3C9: push    edi
0x64D3CA: call    ActivateRef
0x64D3CF: test    al, al
0x64D3D1: jz      loc_64D51B
0x64D3D7: mov     edx, [esi]
0x64D3D9: mov     eax, [edx+188h]
0x64D3DF: push    1
0x64D3E1: push    edi
0x64D3E2: mov     ecx, esi
0x64D3E4: call    eax
0x64D3E6: pop     ebp
0x64D3E7: pop     ebx
0x64D3E8: pop     edi
0x64D3E9: pop     esi
0x64D3EA: add     esp, 1Ch
0x64D3ED: retn    10h
0x64D3F0: cmp     byte ptr [ecx+738h], 0
0x64D3F7: jz      loc_64D51B
0x64D3FD: mov     edx, [esi]
0x64D3FF: mov     eax, [edx+228h]
0x64D405: push    1
0x64D407: push    0
0x64D409: push    0
0x64D40B: push    0
0x64D40D: push    0
0x64D40F: push    0
0x64D411: push    0
0x64D413: push    0
0x64D415: push    ecx
0x64D416: push    edi
0x64D417: mov     ecx, esi
0x64D419: call    eax
0x64D41B: test    al, al
0x64D41D: jnz     loc_64D51B
0x64D423: mov     ecx, ds:0B333C4h
0x64D429: push    ecx
0x64D42A: push    0Ch
0x64D42C: mov     ecx, offset dword_B3BDB0
0x64D431: call    sub_67CF50
0x64D436: mov     esi, eax
0x64D438: test    esi, esi
0x64D43A: mov     ebx, esi
0x64D43C: jz      short loc_64D45F
0x64D43E: mov     edi, edi
0x64D440: mov     ecx, [esi]
0x64D442: test    ecx, ecx
0x64D444: jz      short loc_64D45F
0x64D446: mov     esi, [esi+4]
0x64D449: call    sub_67B710
0x64D44E: test    eax, eax
0x64D450: jnz     short loc_64D458
0x64D452: test    esi, esi
0x64D454: jnz     short loc_64D440
0x64D456: jmp     short loc_64D45F
0x64D458: mov     ecx, edi; int
0x64D45A: call    sub_5EAE70
0x64D45F: mov     ecx, ebx
0x64D461: call    BSSimpleList_Clear
0x64D466: push    ebx
0x64D467: call    FormHeapFree
0x64D46C: add     esp, 4
0x64D46F: pop     ebp
0x64D470: pop     ebx
0x64D471: pop     edi
0x64D472: pop     esi
0x64D473: add     esp, 1Ch
0x64D476: retn    10h
0x64D479: test    ebx, ebx
0x64D47B: jz      short loc_64D4EE
0x64D47D: mov     ecx, ebx
0x64D47F: call    sub_5E4420
0x64D484: mov     edx, [ebx]
0x64D486: mov     [esp+2Ch+arg_0], eax
0x64D48A: fild    [esp+2Ch+arg_0]
0x64D48E: mov     eax, [edx+250h]
0x64D494: mov     ecx, ebx
0x64D496: fstp    [esp+2Ch+var_14]
0x64D49A: call    eax
0x64D49C: fcomp   [esp+2Ch+var_14]
0x64D4A0: fnstsw  ax
0x64D4A2: test    ah, 41h
0x64D4A5: jp      short loc_64D4EE
0x64D4A7: mov     edx, [ebx]
0x64D4A9: mov     eax, [edx+250h]
0x64D4AF: mov     ecx, ebx
0x64D4B1: call    eax
0x64D4B3: call    Double_To_SInt32
0x64D4B8: push    eax
0x64D4B9: push    edi
0x64D4BA: mov     ecx, ebx
0x64D4BC: call    sub_5E4A40
0x64D4C1: mov     edx, [ebx]
0x64D4C3: mov     eax, [edx+2B4h]
0x64D4C9: mov     ecx, ebx
0x64D4CB: call    eax
0x64D4CD: push    edi; int
0x64D4CE: mov     ecx, ebx; int
0x64D4D0: call    sub_5EFF30
0x64D4D5: mov     edx, [esi]
0x64D4D7: mov     eax, [edx+188h]
0x64D4DD: push    2
0x64D4DF: push    edi
0x64D4E0: mov     ecx, esi
0x64D4E2: call    eax
0x64D4E4: pop     ebp
0x64D4E5: pop     ebx
0x64D4E6: pop     edi
0x64D4E7: pop     esi
0x64D4E8: add     esp, 1Ch
0x64D4EB: retn    10h
0x64D4EE: mov     edx, [esi]
0x64D4F0: mov     eax, [edx+188h]
0x64D4F6: push    2
0x64D4F8: push    edi
0x64D4F9: mov     ecx, esi
0x64D4FB: call    eax
0x64D4FD: mov     edx, [esi]
0x64D4FF: mov     eax, [edx+228h]
0x64D505: push    1
0x64D507: push    0
0x64D509: push    0
0x64D50B: push    0
0x64D50D: push    0
0x64D50F: push    0
0x64D511: push    0
0x64D513: push    0
0x64D515: push    ebp
0x64D516: push    edi
0x64D517: mov     ecx, esi
0x64D519: call    eax
0x64D51B: pop     ebp
0x64D51C: pop     ebx
0x64D51D: pop     edi
0x64D51E: pop     esi
0x64D51F: add     esp, 1Ch
0x64D522: retn    10h
