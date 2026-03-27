0x63D0C0: sub     esp, 48h
0x63D0C3: push    ebx
0x63D0C4: push    ebp
0x63D0C5: push    esi
0x63D0C6: mov     esi, ecx
0x63D0C8: mov     eax, [esi]
0x63D0CA: mov     edx, [eax+184h]
0x63D0D0: push    edi
0x63D0D1: call    edx
0x63D0D3: mov     edi, [esp+58h+a1]
0x63D0D7: mov     [esp+58h+var_40], eax
0x63D0DB: mov     eax, ds:0B333C4h
0x63D0E0: xor     ebp, ebp
0x63D0E2: push    ebp
0x63D0E3: push    eax
0x63D0E4: mov     ecx, edi
0x63D0E6: call    TesObjectREF_GetDistance
0x63D0EB: fld     dword ptr ds:0B36CC8h
0x63D0F1: fcompp
0x63D0F3: fnstsw  ax
0x63D0F5: test    ah, 5
0x63D0F8: jnp     loc_63EAEB
0x63D0FE: mov     eax, [esi+24h]
0x63D101: cmp     eax, ebp
0x63D103: jz      short loc_63D144
0x63D105: mov     ebx, [esi+0E0h]
0x63D10B: push    eax
0x63D10C: call    sub_568240
0x63D111: add     esp, 4
0x63D114: cmp     ebx, eax
0x63D116: jz      short loc_63D144
0x63D118: cmp     ebx, ebp
0x63D11A: jz      short loc_63D144
0x63D11C: mov     edx, [esi]
0x63D11E: mov     eax, [edx+594h]
0x63D124: push    edi
0x63D125: mov     ecx, esi
0x63D127: call    eax
0x63D129: mov     edx, [esi]
0x63D12B: mov     eax, [edx+188h]
0x63D131: push    0FFFFFFFEh
0x63D133: push    edi
0x63D134: mov     ecx, esi
0x63D136: call    eax
0x63D138: xor     al, al
0x63D13A: pop     edi
0x63D13B: pop     esi
0x63D13C: pop     ebp
0x63D13D: pop     ebx
0x63D13E: add     esp, 48h
0x63D141: retn    4
0x63D144: push    ebp; Seed
0x63D145: call    GetRandomLargeInteger?
0x63D14A: cdq
0x63D14B: mov     ecx, 64h ; 'd'
0x63D150: idiv    ecx
0x63D152: add     esp, 4
0x63D155: push    0; a2
0x63D157: mov     ecx, edi; this
0x63D159: mov     [esp+5Ch+var_38], ebp
0x63D15D: mov     [esp+5Ch+var_3C], ebp
0x63D161: mov     [esp+5Ch+var_44], ebp
0x63D165: mov     dword ptr [esp+5Ch+var_4C+4], ebp
0x63D169: mov     [esp+5Ch+var_34], ebp
0x63D16D: mov     [esp+5Ch+var_28], edx
0x63D171: mov     edx, [esp+5Ch+var_40]
0x63D175: mov     ebx, [edx+24h]
0x63D178: call    Actor_GetActorBaseForm
0x63D17D: test    eax, eax
0x63D17F: jz      short loc_63D186
0x63D181: add     eax, 44h ; 'D'
0x63D184: jmp     short loc_63D188
0x63D186: xor     eax, eax
0x63D188: push    eax
0x63D189: push    edi; a1
0x63D18A: call    ContainerExtraData_GetContainerExtraDataForRef
0x63D18F: mov     [esp+60h+var_30], eax
0x63D193: mov     eax, [esp+60h+var_40]
0x63D197: mov     ecx, [eax+28h]
0x63D19A: add     esp, 8
0x63D19D: test    ebx, ebx
0x63D19F: mov     [esp+58h+var_2C], ecx
0x63D1A3: jz      short loc_63D1BD
0x63D1A5: mov     ecx, ebx
0x63D1A7: call    sub_5697E0
0x63D1AC: test    eax, eax
0x63D1AE: jz      short loc_63D1BD
0x63D1B0: mov     ecx, ebx
0x63D1B2: call    sub_5697E0
0x63D1B7: mov     ebp, eax
0x63D1B9: mov     [esp+58h+var_44], eax
0x63D1BD: fld     dword ptr ds:0A30634h
0x63D1C3: push    ecx
0x63D1C4: mov     ecx, [esp+5Ch+var_40]
0x63D1C8: fstp    [esp+5Ch+var_5C]; float
0x63D1CB: push    0; char
0x63D1CD: push    edi; int
0x63D1CE: call    sub_566DC0
0x63D1D3: test    al, al
0x63D1D5: jnz     short loc_63D1F2
0x63D1D7: mov     edx, [esi]
0x63D1D9: mov     eax, [edx+188h]
0x63D1DF: push    0FFFFFFFFh
0x63D1E1: push    edi
0x63D1E2: mov     ecx, esi
0x63D1E4: call    eax
0x63D1E6: xor     al, al
0x63D1E8: pop     edi
0x63D1E9: pop     esi
0x63D1EA: pop     ebp
0x63D1EB: pop     ebx
0x63D1EC: add     esp, 48h
0x63D1EF: retn    4
0x63D1F2: mov     ecx, edi
0x63D1F4: call    Actor_GetCurrentAction
0x63D1F9: cmp     eax, 0FFFFFFFFh
0x63D1FC: jnz     loc_63D352
0x63D202: test    ebp, ebp
0x63D204: jz      loc_63D352
0x63D20A: mov     edx, [ebp+0]
0x63D20D: mov     eax, [edx+170h]
0x63D213: mov     ecx, ebp
0x63D215: call    eax
0x63D217: cmp     eax, ds:0B35EB0h
0x63D21D: jnz     loc_63D352
0x63D223: fld     dword ptr [ebp+28h]
0x63D226: fstp    [esp+58h+a1]
0x63D22A: fldz
0x63D22C: fld     [esp+58h+a1]
0x63D230: fcom    st(1)
0x63D232: fnstsw  ax
0x63D234: fstp    st(1)
0x63D236: test    ah, 5
0x63D239: fld     qword ptr ds:0A3D5B0h
0x63D23F: jp      short loc_63D25E
0x63D241: call    unknown_libname_14
0x63D246: fstp    [esp+58h+a1]
0x63D24A: fld     [esp+58h+a1]
0x63D24E: fadd    qword ptr ds:0A3D5B0h
0x63D254: fstp    [esp+58h+a1]
0x63D258: fld     [esp+58h+a1]
0x63D25C: jmp     short loc_63D280
0x63D25E: fcom    st(1)
0x63D260: fnstsw  ax
0x63D262: test    ah, 41h
0x63D265: jp      short loc_63D27E
0x63D267: call    unknown_libname_14
0x63D26C: fstp    [esp+58h+a1]
0x63D270: fld     [esp+58h+a1]
0x63D274: fstp    [esp+58h+a1]
0x63D278: fld     [esp+58h+a1]
0x63D27C: jmp     short loc_63D280
0x63D27E: fstp    st
0x63D280: fldz
0x63D282: lea     ecx, [esp+58h+var_24]
0x63D286: push    ecx; int
0x63D287: fstp    dword ptr [esp+5Ch+var_24]
0x63D28B: push    ecx
0x63D28C: fstp    [esp+60h+a3]; a3
0x63D28F: push    edi; a2
0x63D290: call    sub_683D80
0x63D295: fstp    dword ptr [esp+64h+var_18]
0x63D299: fld     dword ptr [esp+64h+var_18]
0x63D29D: add     esp, 0Ch
0x63D2A0: fabs
0x63D2A2: fstp    dword ptr [esp+58h+var_18]
0x63D2A6: fld     dword ptr [esp+58h+var_18]
0x63D2AA: fild    dword ptr ds:0B36C18h
0x63D2B0: fmul    qword ptr ds:0A31C78h
0x63D2B6: fstp    dword ptr [esp+58h+var_18]
0x63D2BA: fld     dword ptr [esp+58h+var_18]
0x63D2BE: fcompp
0x63D2C0: fnstsw  ax
0x63D2C2: test    ah, 5
0x63D2C5: jp      short loc_63D2F4
0x63D2C7: fld     [esp+58h+a1]
0x63D2CB: push    1; char
0x63D2CD: push    ecx
0x63D2CE: fstp    [esp+60h+a3]; float
0x63D2D1: push    edi; Concurrency::details::SchedulerBase *
0x63D2D2: call    sub_685530
0x63D2D7: mov     edx, [esi]
0x63D2D9: mov     eax, [edx+484h]
0x63D2DF: add     esp, 0Ch
0x63D2E2: push    0
0x63D2E4: mov     ecx, esi
0x63D2E6: call    eax
0x63D2E8: xor     al, al
0x63D2EA: pop     edi
0x63D2EB: pop     esi
0x63D2EC: pop     ebp
0x63D2ED: pop     ebx
0x63D2EE: add     esp, 48h
0x63D2F1: retn    4
0x63D2F4: push    30h ; '0'; a4
0x63D2F6: mov     ecx, edi
0x63D2F8: call    sub_5E05F0
0x63D2FD: mov     edx, [esi]
0x63D2FF: mov     eax, [edx+49Ch]
0x63D305: mov     ecx, esi
0x63D307: call    eax
0x63D309: mov     edx, [ebp+0]
0x63D30C: mov     eax, [edx+174h]
0x63D312: mov     ecx, ebp
0x63D314: call    eax
0x63D316: mov     edx, [eax]
0x63D318: sub     esp, 0Ch
0x63D31B: mov     ecx, esp
0x63D31D: mov     [ecx], edx
0x63D31F: mov     edx, [eax+4]
0x63D322: mov     eax, [eax+8]
0x63D325: mov     [ecx+4], edx
0x63D328: mov     [ecx+8], eax
0x63D32B: mov     ecx, edi; this
0x63D32D: call    TESObjectREFR_SetPosition
0x63D332: fld     dword ptr [ebp+28h]
0x63D335: mov     edx, [edi]
0x63D337: mov     eax, [edx+1E8h]
0x63D33D: push    ecx
0x63D33E: mov     ecx, edi
0x63D340: fstp    [esp+5Ch+var_5C]
0x63D343: call    eax
0x63D345: mov     edx, [esi]
0x63D347: mov     eax, [edx+194h]
0x63D34D: push    edi
0x63D34E: mov     ecx, esi
0x63D350: call    eax
0x63D352: mov     edx, [edi]
0x63D354: mov     eax, [edx+174h]
0x63D35A: mov     ecx, edi
0x63D35C: call    eax
0x63D35E: mov     ecx, ds:0B333C4h
0x63D364: mov     edx, [ecx]
0x63D366: mov     ebp, eax
0x63D368: mov     eax, [edx+174h]
0x63D36E: call    eax
0x63D370: fld     dword ptr [eax+4]
0x63D373: fsub    dword ptr [ebp+4]
0x63D376: lea     ecx, [esp+58h+var_C]
0x63D37A: push    ecx
0x63D37B: fstp    [esp+5Ch+a1]
0x63D37F: fld     dword ptr [eax+8]
0x63D382: fsub    dword ptr [ebp+8]
0x63D385: fstp    dword ptr [esp+5Ch+var_18]
0x63D389: fld     dword ptr [eax]
0x63D38B: fsub    dword ptr [ebp+0]
0x63D38E: fstp    [esp+5Ch+var_C]
0x63D392: fld     [esp+5Ch+a1]
0x63D396: fstp    [esp+5Ch+var_8]
0x63D39A: fld     dword ptr [esp+5Ch+var_18]
0x63D39E: fstp    [esp+5Ch+var_4]
0x63D3A2: call    sub_683CB0
0x63D3A7: add     esp, 4
0x63D3AA: fstp    dword ptr [esp+58h+var_18]
0x63D3AE: fld     dword ptr [esp+58h+var_18]
0x63D3B2: lea     edx, [esp+58h+var_10]
0x63D3B6: push    edx; int
0x63D3B7: push    ecx
0x63D3B8: fstp    [esp+60h+a3]; float
0x63D3BB: push    edi; int
0x63D3BC: mov     byte ptr [esp+64h+a1], 0
0x63D3C1: call    sub_683D80
0x63D3C6: fabs
0x63D3C8: fstp    dword ptr [esp+64h+var_18]
0x63D3CC: add     esp, 0Ch
0x63D3CF: fld     dword ptr [esp+58h+var_18]
0x63D3D3: fcomp   qword ptr ds:0A4D918h
0x63D3D9: fnstsw  ax
0x63D3DB: test    ah, 5
0x63D3DE: jp      short loc_63D3E5
0x63D3E0: mov     byte ptr [esp+58h+a1], 1
0x63D3E5: mov     ebp, [esp+58h+var_2C]
0x63D3E9: test    ebp, ebp
0x63D3EB: jz      loc_63D54D
0x63D3F1: test    ebx, ebx
0x63D3F3: jz      short loc_63D40B
0x63D3F5: mov     ecx, ebx
0x63D3F7: call    sub_5697E0
0x63D3FC: test    eax, eax
0x63D3FE: jz      short loc_63D40B
0x63D400: mov     ecx, ebx
0x63D402: call    sub_5697E0
0x63D407: mov     [esp+58h+var_44], eax
0x63D40B: cmp     [esp+58h+var_44], 0
0x63D410: jz      short loc_63D43C
0x63D412: mov     ecx, [esp+58h+var_44]
0x63D416: mov     eax, [ecx]
0x63D418: mov     edx, [eax+170h]
0x63D41E: call    edx
0x63D420: cmp     eax, ds:0B35EB0h
0x63D426: jnz     short loc_63D43C
0x63D428: mov     ecx, [esp+58h+var_44]
0x63D42C: add     ecx, 44h ; 'D'
0x63D42F: call    ExtraDataList__GetExtraXTarget
0x63D434: mov     ebx, eax
0x63D436: mov     dword ptr [esp+58h+var_4C+4], eax
0x63D43A: jmp     short loc_63D444
0x63D43C: mov     ebx, [esp+58h+var_44]
0x63D440: mov     dword ptr [esp+58h+var_4C+4], ebx
0x63D444: mov     ecx, ebp
0x63D446: call    sub_452A60
0x63D44B: mov     ecx, ebp
0x63D44D: mov     [esp+58h+var_34], eax
0x63D451: call    TargetData__GetTargetType
0x63D456: test    eax, eax
0x63D458: jnz     short loc_63D49D
0x63D45A: mov     ecx, [esp+58h+var_2C]
0x63D45E: mov     ebp, [esi]
0x63D460: call    sub_569E60
0x63D465: push    eax
0x63D466: mov     eax, [ebp+0D0h]
0x63D46C: mov     ecx, esi
0x63D46E: call    eax
0x63D470: mov     ecx, [esi+2Ch]
0x63D473: mov     edx, [ecx]
0x63D475: mov     eax, [edx+170h]
0x63D47B: call    eax
0x63D47D: mov     ecx, [esi+2Ch]
0x63D480: mov     edx, [ecx]
0x63D482: mov     [esp+58h+var_3C], eax
0x63D486: mov     eax, [edx+170h]
0x63D48C: call    eax
0x63D48E: push    eax
0x63D48F: call    sub_568240
0x63D494: mov     ebx, dword ptr [esp+5Ch+var_4C+4]
0x63D498: add     esp, 4
0x63D49B: jmp     short loc_63D4D0
0x63D49D: mov     ecx, ebp
0x63D49F: call    TargetData__GetTargetType
0x63D4A4: cmp     eax, 1
0x63D4A7: mov     ecx, ebp
0x63D4A9: jnz     short loc_63D4BF
0x63D4AB: call    sub_569E70
0x63D4B0: push    eax
0x63D4B1: mov     [esp+5Ch+var_3C], eax
0x63D4B5: call    sub_568240
0x63D4BA: add     esp, 4
0x63D4BD: jmp     short loc_63D4D0
0x63D4BF: call    TargetData__GetTargetType
0x63D4C4: cmp     eax, 2
0x63D4C7: jnz     short loc_63D4D6
0x63D4C9: mov     ecx, ebp
0x63D4CB: call    sub_569E80
0x63D4D0: mov     [esi+0E0h], eax
0x63D4D6: cmp     dword ptr [esi+0E0h], 0
0x63D4DD: jnz     short loc_63D557
0x63D4DF: test    ebx, ebx
0x63D4E1: jz      short loc_63D502
0x63D4E3: mov     edx, [esi]
0x63D4E5: mov     eax, [edx+0D0h]
0x63D4EB: push    ebx
0x63D4EC: mov     ecx, esi
0x63D4EE: call    eax
0x63D4F0: mov     edx, [ebx]
0x63D4F2: mov     eax, [edx+170h]
0x63D4F8: mov     ecx, ebx
0x63D4FA: call    eax
0x63D4FC: mov     edx, [ebx]
0x63D4FE: mov     ecx, ebx
0x63D500: jmp     short loc_63D530
0x63D502: mov     ebx, [esp+58h+var_44]
0x63D506: test    ebx, ebx
0x63D508: jnz     short loc_63D4E3
0x63D50A: mov     eax, [esi+30h]
0x63D50D: test    eax, eax
0x63D50F: jz      short loc_63D54D
0x63D511: mov     edx, [esi]
0x63D513: push    eax
0x63D514: mov     eax, [edx+0D0h]
0x63D51A: mov     ecx, esi
0x63D51C: call    eax
0x63D51E: mov     ecx, [esi+30h]
0x63D521: mov     edx, [ecx]
0x63D523: mov     eax, [edx+170h]
0x63D529: call    eax
0x63D52B: mov     ecx, [esi+30h]
0x63D52E: mov     edx, [ecx]
0x63D530: mov     [esp+58h+var_3C], eax
0x63D534: mov     eax, [edx+170h]
0x63D53A: call    eax
0x63D53C: push    eax
0x63D53D: call    sub_568240
0x63D542: add     esp, 4
0x63D545: mov     [esi+0E0h], eax
0x63D54B: jmp     short loc_63D557
0x63D54D: mov     dword ptr [esi+0E0h], 0
0x63D557: mov     edx, [esi]
0x63D559: mov     eax, [edx+0ECh]
0x63D55F: push    1
0x63D561: mov     ecx, esi
0x63D563: call    eax
0x63D565: test    eax, eax
0x63D567: jz      short loc_63D5A9
0x63D569: mov     edx, [esi]
0x63D56B: mov     eax, [edx+0ECh]
0x63D571: push    1
0x63D573: mov     ecx, esi
0x63D575: call    eax
0x63D577: cmp     dword ptr [eax+8], 0
0x63D57B: jz      short loc_63D5A9
0x63D57D: mov     edx, [esi]
0x63D57F: mov     eax, [edx+0ECh]
0x63D585: push    1
0x63D587: mov     ecx, esi
0x63D589: call    eax
0x63D58B: mov     ecx, [eax+8]
0x63D58E: cmp     byte ptr [ecx+4], 21h ; '!'
0x63D592: jnz     short loc_63D5A9
0x63D594: mov     edx, [esi]
0x63D596: mov     eax, [edx+0ECh]
0x63D59C: push    1
0x63D59E: mov     ecx, esi
0x63D5A0: call    eax
0x63D5A2: mov     ecx, [eax+8]
0x63D5A5: mov     [esp+58h+var_38], ecx
0x63D5A9: mov     eax, [esi+0E0h]
0x63D5AF: add     eax, 0FFFFFFFFh; switch 35 cases
0x63D5B2: cmp     eax, 22h
0x63D5B5: ja      def_63D5C2; jumptable 0063D5C2 default case, cases 2,4,6-12,17-20,22
0x63D5BB: movzx   edx, ds:byte_63ECF0[eax]
0x63D5C2: jmp     ds:jpt_63D5C2[edx*4]; switch jump
0x63D5C9: mov     eax, [esp+58h+var_40]; jumptable 0063D5C2 case 3
0x63D5CD: mov     esi, [eax+28h]
0x63D5D0: mov     ecx, esi
0x63D5D2: call    TargetData__GetTargetType
0x63D5D7: cmp     eax, 1
0x63D5DA: mov     ecx, esi
0x63D5DC: jnz     short loc_63D5E5
0x63D5DE: call    sub_569E70
0x63D5E3: jmp     short loc_63D605
0x63D5E5: call    TargetData__GetTargetType
0x63D5EA: test    eax, eax
0x63D5EC: jnz     loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63D5F2: mov     ecx, esi
0x63D5F4: call    sub_569E60
0x63D5F9: mov     edx, [eax]
0x63D5FB: mov     ecx, eax
0x63D5FD: mov     eax, [edx+170h]
0x63D603: call    eax
0x63D605: push    0
0x63D607: push    0Dh
0x63D609: lea     ecx, [eax+64h]
0x63D60C: call    TESBipedModelForm_CoversSlot
0x63D611: test    al, al
0x63D613: jz      loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63D619: mov     ecx, edi
0x63D61B: call    Actor_IsBlocking
0x63D620: test    al, al
0x63D622: jnz     loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63D628: push    1; float
0x63D62A: mov     ecx, edi
0x63D62C: call    sub_5F4AE0
0x63D631: xor     al, al
0x63D633: pop     edi
0x63D634: pop     esi
0x63D635: pop     ebp
0x63D636: pop     ebx
0x63D637: add     esp, 48h
0x63D63A: retn    4
0x63D63D: mov     eax, [esp+58h+var_34]; jumptable 0063D5C2 case 14
0x63D641: test    eax, eax
0x63D643: jle     short loc_63D65D
0x63D645: cmp     [esi+1CCh], eax
0x63D64B: jl      short loc_63D65D
0x63D64D: mov     ecx, edi
0x63D64F: call    Actor_GetCurrentAction
0x63D654: cmp     eax, 0FFFFFFFFh
0x63D657: jz      loc_63EAB9
0x63D65D: fldz
0x63D65F: fcomp   dword ptr [esi+1B4h]
0x63D665: fnstsw  ax
0x63D667: test    ah, 1
0x63D66A: jnz     short loc_63D6D1
0x63D66C: mov     ecx, edi
0x63D66E: call    Actor_GetCurrentAction
0x63D673: cmp     eax, 0FFFFFFFFh
0x63D676: jnz     short loc_63D6D1
0x63D678: mov     ebx, dword ptr [esp+58h+var_4C+4]
0x63D67C: test    ebx, ebx
0x63D67E: jz      short loc_63D6D1
0x63D680: mov     edx, [ebx]
0x63D682: mov     eax, [edx+190h]
0x63D688: mov     ecx, ebx
0x63D68A: call    eax
0x63D68C: test    al, al
0x63D68E: jnz     short loc_63D6D1
0x63D690: cmp     [esp+58h+var_28], 46h ; 'F'
0x63D695: jle     short loc_63D6D1
0x63D697: cmp     dword ptr [esi+1CCh], 7
0x63D69E: jle     short loc_63D6D1
0x63D6A0: mov     edx, [esi]
0x63D6A2: mov     eax, [edx+300h]
0x63D6A8: push    0
0x63D6AA: mov     ecx, esi
0x63D6AC: call    eax
0x63D6AE: mov     edx, [esi]
0x63D6B0: mov     eax, [edx+214h]
0x63D6B6: push    0
0x63D6B8: mov     ecx, esi
0x63D6BA: call    eax
0x63D6BC: push    ebx
0x63D6BD: push    edi
0x63D6BE: mov     ecx, esi
0x63D6C0: call    sub_631DC0
0x63D6C5: xor     al, al
0x63D6C7: pop     edi
0x63D6C8: pop     esi
0x63D6C9: pop     ebp
0x63D6CA: pop     ebx
0x63D6CB: add     esp, 48h
0x63D6CE: retn    4
0x63D6D1: mov     ebx, [esp+58h+var_44]
0x63D6D5: test    ebx, ebx
0x63D6D7: jz      loc_63D81F
0x63D6DD: mov     edx, [ebx]
0x63D6DF: mov     eax, [edx+170h]
0x63D6E5: mov     ecx, ebx
0x63D6E7: call    eax
0x63D6E9: cmp     eax, ds:0B35EB0h
0x63D6EF: jnz     loc_63D81F
0x63D6F5: fld     dword ptr [ebx+28h]
0x63D6F8: fstp    [esp+58h+var_34]
0x63D6FC: fldz
0x63D6FE: fld     [esp+58h+var_34]
0x63D702: fcom    st(1)
0x63D704: fnstsw  ax
0x63D706: fstp    st(1)
0x63D708: test    ah, 5
0x63D70B: fld     qword ptr ds:0A3D5B0h
0x63D711: jp      short loc_63D730
0x63D713: call    unknown_libname_14
0x63D718: fstp    dword ptr [esp+58h+var_18]
0x63D71C: fld     dword ptr [esp+58h+var_18]
0x63D720: fadd    qword ptr ds:0A3D5B0h
0x63D726: fstp    [esp+58h+var_34]
0x63D72A: fld     [esp+58h+var_34]
0x63D72E: jmp     short loc_63D752
0x63D730: fcom    st(1)
0x63D732: fnstsw  ax
0x63D734: test    ah, 41h
0x63D737: jp      short loc_63D750
0x63D739: call    unknown_libname_14
0x63D73E: fstp    dword ptr [esp+58h+var_18]
0x63D742: fld     dword ptr [esp+58h+var_18]
0x63D746: fstp    [esp+58h+var_34]
0x63D74A: fld     [esp+58h+var_34]
0x63D74E: jmp     short loc_63D752
0x63D750: fstp    st
0x63D752: fldz
0x63D754: lea     ecx, [esp+58h+var_18]
0x63D758: push    ecx; int
0x63D759: fstp    dword ptr [esp+5Ch+var_18]
0x63D75D: push    ecx
0x63D75E: fstp    [esp+60h+a3]; a3
0x63D761: push    edi; a2
0x63D762: call    sub_683D80
0x63D767: fstp    dword ptr [esp+64h+var_24]
0x63D76B: fld     dword ptr [esp+64h+var_24]
0x63D76F: mov     edx, [esi]
0x63D771: fabs
0x63D773: add     esp, 0Ch
0x63D776: fstp    dword ptr [esp+58h+var_24]
0x63D77A: mov     ecx, esi
0x63D77C: fld     dword ptr [esp+58h+var_24]
0x63D780: fild    dword ptr ds:0B36C18h
0x63D786: fmul    qword ptr ds:0A31C78h
0x63D78C: fstp    dword ptr [esp+58h+var_24]
0x63D790: fld     dword ptr [esp+58h+var_24]
0x63D794: fcompp
0x63D796: fnstsw  ax
0x63D798: test    ah, 5
0x63D79B: jp      short loc_63D7C6
0x63D79D: mov     eax, [edx+484h]
0x63D7A3: push    0
0x63D7A5: call    eax
0x63D7A7: fld     [esp+58h+var_34]
0x63D7AB: push    1; char
0x63D7AD: push    ecx
0x63D7AE: fstp    [esp+60h+a3]; float
0x63D7B1: push    edi; Concurrency::details::SchedulerBase *
0x63D7B2: call    sub_685530
0x63D7B7: add     esp, 0Ch
0x63D7BA: xor     al, al
0x63D7BC: pop     edi
0x63D7BD: pop     esi
0x63D7BE: pop     ebp
0x63D7BF: pop     ebx
0x63D7C0: add     esp, 48h
0x63D7C3: retn    4
0x63D7C6: mov     eax, [edx+49Ch]
0x63D7CC: call    eax
0x63D7CE: push    30h ; '0'; a4
0x63D7D0: mov     ecx, edi
0x63D7D2: call    sub_5E05F0
0x63D7D7: mov     edx, [ebx]
0x63D7D9: mov     eax, [edx+174h]
0x63D7DF: mov     ecx, ebx
0x63D7E1: call    eax
0x63D7E3: mov     edx, [eax]
0x63D7E5: sub     esp, 0Ch
0x63D7E8: mov     ecx, esp
0x63D7EA: mov     [ecx], edx
0x63D7EC: mov     edx, [eax+4]
0x63D7EF: mov     eax, [eax+8]
0x63D7F2: mov     [ecx+4], edx
0x63D7F5: mov     [ecx+8], eax
0x63D7F8: mov     ecx, edi; this
0x63D7FA: call    TESObjectREFR_SetPosition
0x63D7FF: fld     dword ptr [ebx+28h]
0x63D802: mov     edx, [edi]
0x63D804: mov     eax, [edx+1E8h]
0x63D80A: push    ecx
0x63D80B: mov     ecx, edi
0x63D80D: fstp    [esp+5Ch+var_5C]
0x63D810: call    eax
0x63D812: mov     edx, [esi]
0x63D814: mov     eax, [edx+194h]
0x63D81A: push    edi
0x63D81B: mov     ecx, esi
0x63D81D: call    eax
0x63D81F: mov     edx, [esi]
0x63D821: mov     eax, [edx+0ECh]
0x63D827: xor     ebx, ebx
0x63D829: push    1
0x63D82B: mov     ecx, esi
0x63D82D: mov     [esp+5Ch+var_2C], ebx
0x63D831: call    eax
0x63D833: cmp     [eax+8], ebx
0x63D836: jz      short loc_63D875
0x63D838: mov     edx, [esi]
0x63D83A: mov     eax, [edx+0ECh]
0x63D840: push    1
0x63D842: mov     ecx, esi
0x63D844: call    eax
0x63D846: mov     ecx, [eax+8]
0x63D849: cmp     byte ptr [ecx+4], 21h ; '!'
0x63D84D: jnz     short loc_63D875
0x63D84F: mov     edx, [esi]
0x63D851: mov     eax, [edx+0ECh]
0x63D857: push    1
0x63D859: mov     ecx, esi
0x63D85B: call    eax
0x63D85D: mov     ebx, [eax+8]
0x63D860: test    ebx, ebx
0x63D862: mov     [esp+58h+var_2C], ebx
0x63D866: jz      short loc_63D875
0x63D868: cmp     byte ptr [ebx+90h], 5
0x63D86F: jz      loc_63D90F
0x63D875: mov     edx, [edi]
0x63D877: mov     eax, [edx+2B8h]
0x63D87D: push    5
0x63D87F: mov     ecx, edi
0x63D881: call    eax
0x63D883: mov     ebp, eax
0x63D885: test    ebp, ebp
0x63D887: jz      short loc_63D89C
0x63D889: mov     ecx, [ebp+8]
0x63D88C: push    0
0x63D88E: push    1
0x63D890: push    0
0x63D892: push    1
0x63D894: push    ecx
0x63D895: mov     ecx, edi
0x63D897: call    Actor_EquipItem
0x63D89C: cmp     dword ptr [esi+0ECh], 0
0x63D8A3: jnz     short loc_63D8D4
0x63D8A5: mov     edx, [edi]
0x63D8A7: mov     eax, [edx+2BCh]
0x63D8AD: mov     ecx, edi
0x63D8AF: call    eax
0x63D8B1: mov     ebp, eax
0x63D8B3: test    ebp, ebp
0x63D8B5: jz      short loc_63D8D4
0x63D8B7: mov     ebx, [ebp+8]
0x63D8BA: push    0
0x63D8BC: push    1
0x63D8BE: push    0
0x63D8C0: mov     ecx, ebp
0x63D8C2: call    TESHealthForm_GetHealth
0x63D8C7: push    eax
0x63D8C8: push    ebx
0x63D8C9: mov     ecx, edi
0x63D8CB: call    Actor_EquipItem
0x63D8D0: mov     ebx, [esp+58h+var_2C]
0x63D8D4: mov     edx, [esi]
0x63D8D6: mov     eax, [edx+0F4h]
0x63D8DC: push    1
0x63D8DE: mov     ecx, esi
0x63D8E0: call    eax
0x63D8E2: test    eax, eax
0x63D8E4: jz      loc_63DA1F
0x63D8EA: test    ebx, ebx
0x63D8EC: jz      short loc_63D8FB
0x63D8EE: cmp     byte ptr [ebx+90h], 5
0x63D8F5: jnz     loc_63DA1F
0x63D8FB: test    ebp, ebp
0x63D8FD: jz      short loc_63D90F
0x63D8FF: mov     ecx, ebp
0x63D901: call    ContainerEntryExtraData_DestroyDataTable
0x63D906: push    ebp
0x63D907: call    FormHeapFree
0x63D90C: add     esp, 4
0x63D90F: mov     edx, [esi]
0x63D911: mov     eax, [edx+304h]
0x63D917: mov     ecx, esi
0x63D919: call    eax
0x63D91B: test    al, al
0x63D91D: jnz     short loc_63D93B
0x63D91F: push    1
0x63D921: mov     ecx, edi
0x63D923: call    sub_5E6D70
0x63D928: mov     byte ptr [esi+244h], 1
0x63D92F: xor     al, al
0x63D931: pop     edi
0x63D932: pop     esi
0x63D933: pop     ebp
0x63D934: pop     ebx
0x63D935: add     esp, 48h
0x63D938: retn    4
0x63D93B: fldz
0x63D93D: fcomp   dword ptr [esi+1B0h]
0x63D943: fnstsw  ax
0x63D945: test    ah, 1
0x63D948: jnz     loc_63DA01
0x63D94E: mov     ecx, edi
0x63D950: call    Actor_GetCurrentAction
0x63D955: cmp     eax, 0FFFFFFFFh
0x63D958: jnz     loc_63DA01
0x63D95E: mov     ecx, ds:0B333C4h
0x63D964: push    0
0x63D966: push    edi
0x63D967: call    TesObjectREF_GetDistance
0x63D96C: fstp    [esp+58h+var_18]
0x63D970: mov     ebx, dword ptr [esp+58h+var_4C+4]
0x63D974: push    0
0x63D976: push    ebx
0x63D977: mov     ecx, edi
0x63D979: call    TesObjectREF_GetDistance
0x63D97E: fcomp   [esp+58h+var_18]
0x63D982: fnstsw  ax
0x63D984: test    ah, 41h
0x63D987: jnz     short loc_63D990
0x63D989: cmp     byte ptr [esp+58h+a1], 0
0x63D98E: jnz     short loc_63DA01
0x63D990: push    13h
0x63D992: mov     ecx, edi
0x63D994: call    sub_5F48D0
0x63D999: mov     ecx, offset fBowHoldTimer
0x63D99E: call    GameSetting_GetSafeFloatPointer
0x63D9A3: fld     dword ptr [eax]
0x63D9A5: add     dword ptr [esi+1CCh], 1
0x63D9AC: fstp    dword ptr [esi+1B4h]
0x63D9B2: test    ebx, ebx
0x63D9B4: fld     dword ptr ds:0A3D65Ch
0x63D9BA: fstp    dword ptr [esi+1B0h]
0x63D9C0: jz      short loc_63D9CB
0x63D9C2: push    ebx
0x63D9C3: push    edi
0x63D9C4: mov     ecx, esi
0x63D9C6: call    sub_632090
0x63D9CB: mov     edi, [edi+58h]
0x63D9CE: mov     edx, [edi]
0x63D9D0: mov     eax, [edx+0ECh]
0x63D9D6: push    1
0x63D9D8: mov     ecx, edi
0x63D9DA: call    eax
0x63D9DC: test    eax, eax
0x63D9DE: jz      loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63D9E4: mov     eax, [eax]
0x63D9E6: test    eax, eax
0x63D9E8: jz      loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63D9EE: mov     ecx, [eax]
0x63D9F0: call    sub_41F610
0x63D9F5: xor     al, al
0x63D9F7: pop     edi
0x63D9F8: pop     esi
0x63D9F9: pop     ebp
0x63D9FA: pop     ebx
0x63D9FB: add     esp, 48h
0x63D9FE: retn    4
0x63DA01: fld     dword ptr [esi+1B0h]
0x63DA07: xor     al, al
0x63DA09: fsub    qword ptr ds:0A2F928h
0x63DA0F: fstp    dword ptr [esi+1B0h]
0x63DA15: pop     edi
0x63DA16: pop     esi
0x63DA17: pop     ebp
0x63DA18: pop     ebx
0x63DA19: add     esp, 48h
0x63DA1C: retn    4
0x63DA1F: mov     edx, [esi]
0x63DA21: mov     eax, [edx+188h]
0x63DA27: push    2
0x63DA29: push    edi
0x63DA2A: mov     ecx, esi
0x63DA2C: call    eax
0x63DA2E: jmp     loc_63EAD5
0x63DA33: mov     ecx, [esp+58h+var_40]; jumptable 0063D5C2 cases 13,23-25
0x63DA37: mov     edx, [esi]
0x63DA39: mov     ebp, [ecx+28h]
0x63DA3C: mov     eax, [edx+554h]
0x63DA42: push    1
0x63DA44: push    edi
0x63DA45: mov     ecx, esi
0x63DA47: call    eax
0x63DA49: test    al, al
0x63DA4B: jnz     short loc_63DA98
0x63DA4D: cmp     dword ptr [esi+0E0h], 17h
0x63DA54: jz      short loc_63DA98
0x63DA56: mov     edx, [esi]
0x63DA58: mov     eax, [edx+188h]
0x63DA5E: push    2
0x63DA60: push    edi
0x63DA61: mov     ecx, esi
0x63DA63: call    eax
0x63DA65: mov     edx, [esi]
0x63DA67: mov     eax, [edx+594h]
0x63DA6D: push    edi
0x63DA6E: mov     ecx, esi
0x63DA70: call    eax
0x63DA72: cmp     byte ptr [esi+0D0h], 0
0x63DA79: jnz     loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63DA7F: mov     edx, [esi]
0x63DA81: mov     eax, [edx+194h]
0x63DA87: push    edi
0x63DA88: mov     ecx, esi
0x63DA8A: call    eax
0x63DA8C: xor     al, al
0x63DA8E: pop     edi
0x63DA8F: pop     esi
0x63DA90: pop     ebp
0x63DA91: pop     ebx
0x63DA92: add     esp, 48h
0x63DA95: retn    4
0x63DA98: mov     ebx, [esp+58h+var_38]
0x63DA9C: test    ebx, ebx
0x63DA9E: jz      loc_63DB26
0x63DAA4: mov     ecx, ebp
0x63DAA6: call    TargetData__GetTargetType
0x63DAAB: cmp     eax, 1
0x63DAAE: mov     ecx, ebp
0x63DAB0: jnz     short loc_63DAD4
0x63DAB2: call    sub_569E70
0x63DAB7: cmp     ebx, eax
0x63DAB9: jz      short loc_63DB26
0x63DABB: push    0
0x63DABD: push    1
0x63DABF: push    0
0x63DAC1: push    1
0x63DAC3: mov     ecx, ebp
0x63DAC5: call    sub_569E70
0x63DACA: push    eax
0x63DACB: mov     ecx, edi
0x63DACD: call    Actor_EquipItem
0x63DAD2: jmp     short loc_63DB26
0x63DAD4: call    TargetData__GetTargetType
0x63DAD9: test    eax, eax
0x63DADB: jnz     short loc_63DB26
0x63DADD: mov     ecx, ebp
0x63DADF: call    sub_569E60
0x63DAE4: mov     edx, [eax]
0x63DAE6: mov     ecx, eax
0x63DAE8: mov     eax, [edx+170h]
0x63DAEE: call    eax
0x63DAF0: cmp     ebx, eax
0x63DAF2: jz      short loc_63DB26
0x63DAF4: mov     ecx, ebp
0x63DAF6: call    sub_569E60
0x63DAFB: mov     ecx, ebp
0x63DAFD: mov     ebx, eax
0x63DAFF: call    sub_569E60
0x63DB04: mov     edx, [ebx]
0x63DB06: push    0
0x63DB08: push    1
0x63DB0A: add     eax, 44h ; 'D'
0x63DB0D: push    eax
0x63DB0E: mov     eax, [edx+170h]
0x63DB14: push    1
0x63DB16: mov     ecx, ebx
0x63DB18: call    eax
0x63DB1A: push    eax
0x63DB1B: mov     ecx, edi
0x63DB1D: call    Actor_EquipItem
0x63DB22: mov     ebx, [esp+58h+var_38]
0x63DB26: mov     eax, [esp+58h+var_34]
0x63DB2A: test    eax, eax
0x63DB2C: jle     short loc_63DB46
0x63DB2E: cmp     [esi+1CCh], eax
0x63DB34: jl      short loc_63DB46
0x63DB36: mov     ecx, edi
0x63DB38: call    Actor_GetCurrentAction
0x63DB3D: cmp     eax, 0FFFFFFFFh
0x63DB40: jz      loc_63EAB9
0x63DB46: fldz
0x63DB48: fcomp   dword ptr [esi+1B4h]
0x63DB4E: fnstsw  ax
0x63DB50: test    ah, 1
0x63DB53: jnz     short loc_63DBBB
0x63DB55: mov     ecx, edi
0x63DB57: call    Actor_GetCurrentAction
0x63DB5C: cmp     eax, 0FFFFFFFFh
0x63DB5F: jnz     short loc_63DBBB
0x63DB61: mov     ebp, dword ptr [esp+58h+var_4C+4]
0x63DB65: test    ebp, ebp
0x63DB67: jz      short loc_63DBBB
0x63DB69: mov     edx, [ebp+0]
0x63DB6C: mov     eax, [edx+190h]
0x63DB72: mov     ecx, ebp
0x63DB74: call    eax
0x63DB76: test    al, al
0x63DB78: jnz     short loc_63DBBB
0x63DB7A: cmp     [esp+58h+var_28], 46h ; 'F'
0x63DB7F: jle     short loc_63DBBB
0x63DB81: cmp     dword ptr [esi+1CCh], 7
0x63DB88: jle     short loc_63DBBB
0x63DB8A: mov     edx, [esi]
0x63DB8C: mov     eax, [edx+300h]
0x63DB92: push    0
0x63DB94: mov     ecx, esi
0x63DB96: call    eax
0x63DB98: mov     edx, [esi]
0x63DB9A: mov     eax, [edx+214h]
0x63DBA0: push    0
0x63DBA2: mov     ecx, esi
0x63DBA4: call    eax
0x63DBA6: push    ebp
0x63DBA7: push    edi
0x63DBA8: mov     ecx, esi
0x63DBAA: call    sub_631DC0
0x63DBAF: xor     al, al
0x63DBB1: pop     edi
0x63DBB2: pop     esi
0x63DBB3: pop     ebp
0x63DBB4: pop     ebx
0x63DBB5: add     esp, 48h
0x63DBB8: retn    4
0x63DBBB: fld     dword ptr ds:0A30634h
0x63DBC1: push    ecx
0x63DBC2: mov     ecx, [esp+5Ch+var_40]
0x63DBC6: fstp    [esp+5Ch+var_5C]; float
0x63DBC9: push    0; char
0x63DBCB: push    edi; int
0x63DBCC: call    sub_566DC0
0x63DBD1: test    al, al
0x63DBD3: mov     edx, [esi]
0x63DBD5: mov     ecx, esi
0x63DBD7: jnz     short loc_63DBF0
0x63DBD9: mov     eax, [edx+188h]
0x63DBDF: push    0FFFFFFFFh
0x63DBE1: push    edi
0x63DBE2: call    eax
0x63DBE4: xor     al, al
0x63DBE6: pop     edi
0x63DBE7: pop     esi
0x63DBE8: pop     ebp
0x63DBE9: pop     ebx
0x63DBEA: add     esp, 48h
0x63DBED: retn    4
0x63DBF0: mov     eax, [edx+0ECh]
0x63DBF6: push    1
0x63DBF8: call    eax
0x63DBFA: test    eax, eax
0x63DBFC: jz      short loc_63DC43
0x63DBFE: mov     edx, [esi]
0x63DC00: mov     eax, [edx+0ECh]
0x63DC06: xor     ebx, ebx
0x63DC08: push    1
0x63DC0A: mov     ecx, esi
0x63DC0C: mov     [esp+5Ch+var_38], ebx
0x63DC10: call    eax
0x63DC12: cmp     [eax+8], ebx
0x63DC15: jz      short loc_63DC43
0x63DC17: mov     edx, [esi]
0x63DC19: mov     eax, [edx+0ECh]
0x63DC1F: push    1
0x63DC21: mov     ecx, esi
0x63DC23: call    eax
0x63DC25: mov     ecx, [eax+8]
0x63DC28: cmp     byte ptr [ecx+4], 21h ; '!'
0x63DC2C: jnz     short loc_63DC43
0x63DC2E: mov     edx, [esi]
0x63DC30: mov     eax, [edx+0ECh]
0x63DC36: push    1
0x63DC38: mov     ecx, esi
0x63DC3A: call    eax
0x63DC3C: mov     ebx, [eax+8]
0x63DC3F: mov     [esp+58h+var_38], ebx
0x63DC43: mov     eax, [esi+0E0h]
0x63DC49: cmp     eax, 17h
0x63DC4C: jnz     short loc_63DC6D
0x63DC4E: test    ebx, ebx
0x63DC50: jz      loc_63DEAF
0x63DC56: push    0
0x63DC58: push    0
0x63DC5A: push    0
0x63DC5C: push    0
0x63DC5E: push    1
0x63DC60: push    ebx
0x63DC61: mov     ecx, edi
0x63DC63: call    Actor_UnequipItem
0x63DC68: jmp     loc_63DEAF
0x63DC6D: cmp     eax, 19h
0x63DC70: jnz     loc_63DDF1
0x63DC76: xor     ebp, ebp
0x63DC78: cmp     ebx, ebp
0x63DC7A: jz      short loc_63DC92
0x63DC7C: mov     al, [ebx+90h]
0x63DC82: cmp     al, 5
0x63DC84: jz      loc_63DD85
0x63DC8A: cmp     al, 4
0x63DC8C: jz      loc_63DD85
0x63DC92: mov     ecx, [esi+2Ch]
0x63DC95: cmp     ecx, ebp
0x63DC97: mov     dword ptr [esp+58h+var_18], ebp
0x63DC9B: jz      loc_63DD37
0x63DCA1: mov     edx, [ecx]
0x63DCA3: mov     eax, [edx+170h]
0x63DCA9: push    0
0x63DCAB: push    1
0x63DCAD: call    eax
0x63DCAF: mov     ecx, [esp+60h+var_30]
0x63DCB3: push    eax
0x63DCB4: call    ContainerExtraData_GetEntryForForm
0x63DCB9: mov     ebp, eax
0x63DCBB: test    ebp, ebp
0x63DCBD: jz      loc_63DD60
0x63DCC3: mov     eax, [ebp+8]
0x63DCC6: test    eax, eax
0x63DCC8: jz      loc_63DD60
0x63DCCE: push    0
0x63DCD0: push    1
0x63DCD2: push    0
0x63DCD4: push    1
0x63DCD6: push    eax
0x63DCD7: mov     ecx, edi
0x63DCD9: call    Actor_EquipItem
0x63DCDE: mov     edx, [esi]
0x63DCE0: mov     eax, [edx+0ECh]
0x63DCE6: push    1
0x63DCE8: mov     ecx, esi
0x63DCEA: call    eax
0x63DCEC: test    eax, eax
0x63DCEE: jz      short loc_63DD6F
0x63DCF0: mov     edx, [esi]
0x63DCF2: mov     eax, [edx+0ECh]
0x63DCF8: xor     ebx, ebx
0x63DCFA: push    1
0x63DCFC: mov     ecx, esi
0x63DCFE: mov     [esp+5Ch+var_38], ebx
0x63DD02: call    eax
0x63DD04: cmp     [eax+8], ebx
0x63DD07: jz      short loc_63DD6F
0x63DD09: mov     edx, [esi]
0x63DD0B: mov     eax, [edx+0ECh]
0x63DD11: push    1
0x63DD13: mov     ecx, esi
0x63DD15: call    eax
0x63DD17: mov     ecx, [eax+8]
0x63DD1A: cmp     byte ptr [ecx+4], 21h ; '!'
0x63DD1E: jnz     short loc_63DD6F
0x63DD20: mov     edx, [esi]
0x63DD22: mov     eax, [edx+0ECh]
0x63DD28: push    1
0x63DD2A: mov     ecx, esi
0x63DD2C: call    eax
0x63DD2E: mov     ebx, [eax+8]
0x63DD31: mov     [esp+58h+var_38], ebx
0x63DD35: jmp     short loc_63DD6F
0x63DD37: mov     eax, [esp+58h+var_3C]
0x63DD3B: cmp     eax, ebp
0x63DD3D: jz      short loc_63DD48
0x63DD3F: push    0
0x63DD41: push    1
0x63DD43: jmp     loc_63DCAF
0x63DD48: lea     ecx, [esp+58h+var_18]
0x63DD4C: push    ecx
0x63DD4D: mov     ecx, [esp+5Ch+var_30]
0x63DD51: push    19h
0x63DD53: call    sub_486150
0x63DD58: test    eax, eax
0x63DD5A: jnz     loc_63DCCE
0x63DD60: mov     edx, [esi]
0x63DD62: mov     eax, [edx+188h]
0x63DD68: push    2
0x63DD6A: push    edi
0x63DD6B: mov     ecx, esi
0x63DD6D: call    eax
0x63DD6F: test    ebp, ebp
0x63DD71: jz      short loc_63DD83
0x63DD73: mov     ecx, ebp
0x63DD75: call    ContainerEntryExtraData_DestroyDataTable
0x63DD7A: push    ebp
0x63DD7B: call    FormHeapFree
0x63DD80: add     esp, 4
0x63DD83: xor     ebp, ebp
0x63DD85: cmp     dword ptr [esi+0ECh], 0
0x63DD8C: jnz     short loc_63DDBD
0x63DD8E: mov     edx, [edi]
0x63DD90: mov     eax, [edx+2BCh]
0x63DD96: mov     ecx, edi
0x63DD98: call    eax
0x63DD9A: mov     ebp, eax
0x63DD9C: test    ebp, ebp
0x63DD9E: jz      short loc_63DDBD
0x63DDA0: mov     ebx, [ebp+8]
0x63DDA3: push    0
0x63DDA5: push    1
0x63DDA7: push    0
0x63DDA9: mov     ecx, ebp
0x63DDAB: call    TESHealthForm_GetHealth
0x63DDB0: push    eax
0x63DDB1: push    ebx
0x63DDB2: mov     ecx, edi
0x63DDB4: call    Actor_EquipItem
0x63DDB9: mov     ebx, [esp+58h+var_38]
0x63DDBD: mov     edx, [esi]
0x63DDBF: mov     eax, [edx+0F4h]
0x63DDC5: push    1
0x63DDC7: mov     ecx, esi
0x63DDC9: call    eax
0x63DDCB: test    eax, eax
0x63DDCD: jz      loc_63DA1F
0x63DDD3: test    ebx, ebx
0x63DDD5: jz      short loc_63DDE4
0x63DDD7: cmp     byte ptr [ebx+90h], 5
0x63DDDE: jnz     loc_63DA1F
0x63DDE4: test    ebp, ebp
0x63DDE6: jz      loc_63DEAF
0x63DDEC: jmp     loc_63DE9F
0x63DDF1: cmp     eax, 18h
0x63DDF4: jnz     loc_63DEAF
0x63DDFA: test    ebx, ebx
0x63DDFC: jz      short loc_63DE10
0x63DDFE: mov     al, [ebx+90h]
0x63DE04: cmp     al, 5
0x63DE06: jz      short loc_63DE10
0x63DE08: cmp     al, 4
0x63DE0A: jnz     loc_63DEAF
0x63DE10: mov     ecx, [esi+2Ch]
0x63DE13: xor     ebp, ebp
0x63DE15: test    ecx, ecx
0x63DE17: mov     dword ptr [esp+58h+var_18], 0
0x63DE1F: jz      short loc_63DE57
0x63DE21: mov     edx, [ecx]
0x63DE23: mov     eax, [edx+170h]
0x63DE29: push    ebp
0x63DE2A: push    1
0x63DE2C: call    eax
0x63DE2E: mov     ecx, [esp+60h+var_30]
0x63DE32: push    eax
0x63DE33: call    ContainerExtraData_GetEntryForForm
0x63DE38: mov     ebp, eax
0x63DE3A: test    ebp, ebp
0x63DE3C: jz      short loc_63DE79
0x63DE3E: mov     eax, [ebp+8]
0x63DE41: test    eax, eax
0x63DE43: jz      short loc_63DE79
0x63DE45: push    0
0x63DE47: push    1
0x63DE49: push    0
0x63DE4B: push    1
0x63DE4D: push    eax
0x63DE4E: mov     ecx, edi
0x63DE50: call    Actor_EquipItem
0x63DE55: jmp     short loc_63DE88
0x63DE57: mov     eax, [esp+58h+var_3C]
0x63DE5B: test    eax, eax
0x63DE5D: jz      short loc_63DE65
0x63DE5F: push    0
0x63DE61: push    1
0x63DE63: jmp     short loc_63DE2E
0x63DE65: lea     ecx, [esp+58h+var_18]
0x63DE69: push    ecx
0x63DE6A: mov     ecx, [esp+5Ch+var_30]
0x63DE6E: push    18h
0x63DE70: call    sub_486150
0x63DE75: test    eax, eax
0x63DE77: jnz     short loc_63DE45
0x63DE79: mov     edx, [esi]
0x63DE7B: mov     eax, [edx+188h]
0x63DE81: push    2
0x63DE83: push    edi
0x63DE84: mov     ecx, esi
0x63DE86: call    eax
0x63DE88: test    ebp, ebp
0x63DE8A: jz      short loc_63DEAF
0x63DE8C: mov     ecx, [ebp+8]
0x63DE8F: push    0
0x63DE91: push    1
0x63DE93: push    0
0x63DE95: push    1
0x63DE97: push    ecx
0x63DE98: mov     ecx, edi
0x63DE9A: call    Actor_EquipItem
0x63DE9F: mov     ecx, ebp
0x63DEA1: call    ContainerEntryExtraData_DestroyDataTable
0x63DEA6: push    ebp
0x63DEA7: call    FormHeapFree
0x63DEAC: add     esp, 4
0x63DEAF: mov     ebp, [esp+58h+var_44]
0x63DEB3: test    ebp, ebp
0x63DEB5: jz      loc_63DFEF
0x63DEBB: mov     edx, [ebp+0]
0x63DEBE: mov     eax, [edx+170h]
0x63DEC4: mov     ecx, ebp
0x63DEC6: call    eax
0x63DEC8: cmp     eax, ds:0B35EB0h
0x63DECE: jnz     loc_63DFEF
0x63DED4: fld     dword ptr [ebp+28h]
0x63DED7: fstp    [esp+58h+var_30]
0x63DEDB: fldz
0x63DEDD: fld     [esp+58h+var_30]
0x63DEE1: fcom    st(1)
0x63DEE3: fnstsw  ax
0x63DEE5: fstp    st(1)
0x63DEE7: test    ah, 5
0x63DEEA: fld     qword ptr ds:0A3D5B0h
0x63DEF0: jp      short loc_63DF0F
0x63DEF2: call    unknown_libname_14
0x63DEF7: fstp    dword ptr [esp+58h+var_18]
0x63DEFB: fld     dword ptr [esp+58h+var_18]
0x63DEFF: fadd    qword ptr ds:0A3D5B0h
0x63DF05: fstp    [esp+58h+var_30]
0x63DF09: fld     [esp+58h+var_30]
0x63DF0D: jmp     short loc_63DF31
0x63DF0F: fcom    st(1)
0x63DF11: fnstsw  ax
0x63DF13: test    ah, 41h
0x63DF16: jp      short loc_63DF2F
0x63DF18: call    unknown_libname_14
0x63DF1D: fstp    dword ptr [esp+58h+var_18]
0x63DF21: fld     dword ptr [esp+58h+var_18]
0x63DF25: fstp    [esp+58h+var_30]
0x63DF29: fld     [esp+58h+var_30]
0x63DF2D: jmp     short loc_63DF31
0x63DF2F: fstp    st
0x63DF31: fldz
0x63DF33: lea     ecx, [esp+58h+var_18]
0x63DF37: push    ecx; int
0x63DF38: fstp    dword ptr [esp+5Ch+var_18]
0x63DF3C: push    ecx
0x63DF3D: fstp    [esp+60h+a3]; a3
0x63DF40: push    edi; a2
0x63DF41: call    sub_683D80
0x63DF46: fstp    dword ptr [esp+64h+var_24]
0x63DF4A: fld     dword ptr [esp+64h+var_24]
0x63DF4E: add     esp, 0Ch
0x63DF51: fabs
0x63DF53: fstp    dword ptr [esp+58h+var_24]
0x63DF57: fld     dword ptr [esp+58h+var_24]
0x63DF5B: fild    dword ptr ds:0B36C18h
0x63DF61: fmul    qword ptr ds:0A31C78h
0x63DF67: fstp    dword ptr [esp+58h+var_24]
0x63DF6B: fld     dword ptr [esp+58h+var_24]
0x63DF6F: fcompp
0x63DF71: fnstsw  ax
0x63DF73: test    ah, 5
0x63DF76: jp      short loc_63DF81
0x63DF78: fld     [esp+58h+var_30]
0x63DF7C: jmp     loc_63D2CB
0x63DF81: push    30h ; '0'; a4
0x63DF83: mov     ecx, edi
0x63DF85: call    sub_5E05F0
0x63DF8A: mov     edx, [esi]
0x63DF8C: mov     eax, [edx+49Ch]
0x63DF92: mov     ecx, esi
0x63DF94: call    eax
0x63DF96: mov     edx, [ebp+0]
0x63DF99: mov     eax, [edx+174h]
0x63DF9F: mov     ecx, ebp
0x63DFA1: call    eax
0x63DFA3: mov     edx, [eax]
0x63DFA5: sub     esp, 0Ch
0x63DFA8: mov     ecx, esp
0x63DFAA: mov     [ecx], edx
0x63DFAC: mov     edx, [eax+4]
0x63DFAF: mov     eax, [eax+8]
0x63DFB2: mov     [ecx+4], edx
0x63DFB5: mov     [ecx+8], eax
0x63DFB8: mov     ecx, edi; this
0x63DFBA: call    TESObjectREFR_SetPosition
0x63DFBF: fld     dword ptr [ebp+28h]
0x63DFC2: mov     edx, [edi]
0x63DFC4: mov     eax, [edx+1E8h]
0x63DFCA: push    ecx
0x63DFCB: mov     ecx, edi
0x63DFCD: fstp    [esp+5Ch+var_5C]
0x63DFD0: call    eax
0x63DFD2: mov     edx, [esi]
0x63DFD4: mov     eax, [edx+194h]
0x63DFDA: push    edi
0x63DFDB: mov     ecx, esi
0x63DFDD: call    eax
0x63DFDF: lea     ecx, [ebp+44h]
0x63DFE2: call    ExtraDataList__GetExtraXTarget
0x63DFE7: mov     ebx, eax
0x63DFE9: mov     dword ptr [esp+58h+var_4C+4], ebx
0x63DFED: jmp     short loc_63DFF3
0x63DFEF: mov     ebx, dword ptr [esp+58h+var_4C+4]
0x63DFF3: mov     edx, [esi]
0x63DFF5: mov     eax, [edx+304h]
0x63DFFB: mov     ecx, esi
0x63DFFD: call    eax
0x63DFFF: test    al, al
0x63E001: jnz     short loc_63E018
0x63E003: push    1
0x63E005: mov     ecx, edi
0x63E007: call    sub_5E6D70
0x63E00C: mov     byte ptr [esi+244h], 1
0x63E013: jmp     loc_63E42C
0x63E018: fldz
0x63E01A: fcomp   dword ptr [esi+1B0h]
0x63E020: fnstsw  ax
0x63E022: test    ah, 1
0x63E025: jnz     loc_63E2EC
0x63E02B: mov     ecx, edi
0x63E02D: call    Actor_GetCurrentAction
0x63E032: cmp     eax, 0FFFFFFFFh
0x63E035: jz      short loc_63E047
0x63E037: mov     ecx, edi
0x63E039: call    Actor_GetCurrentAction
0x63E03E: cmp     eax, 6
0x63E041: jnz     loc_63E2EC
0x63E047: mov     ecx, ds:0B333C4h
0x63E04D: push    0
0x63E04F: push    edi
0x63E050: call    TesObjectREF_GetDistance
0x63E055: fstp    [esp+58h+var_24]
0x63E059: push    0
0x63E05B: push    ebx
0x63E05C: mov     ecx, edi
0x63E05E: call    TesObjectREF_GetDistance
0x63E063: fcomp   [esp+58h+var_24]
0x63E067: fnstsw  ax
0x63E069: test    ah, 41h
0x63E06C: jnz     short loc_63E079
0x63E06E: cmp     byte ptr [esp+58h+a1], 0
0x63E073: jnz     loc_63E2EC
0x63E079: push    0; Seed
0x63E07B: call    GetRandomLargeInteger?
0x63E080: cdq
0x63E081: mov     ecx, 64h ; 'd'
0x63E086: idiv    ecx
0x63E088: add     esp, 4
0x63E08B: push    1
0x63E08D: mov     ecx, esi
0x63E08F: mov     ebp, 0FFh
0x63E094: mov     ebx, edx
0x63E096: mov     edx, [esi]
0x63E098: mov     eax, [edx+0ECh]
0x63E09E: call    eax
0x63E0A0: test    eax, eax
0x63E0A2: jz      loc_63E139
0x63E0A8: mov     edx, [esi]
0x63E0AA: mov     eax, [edx+0ECh]
0x63E0B0: push    1
0x63E0B2: mov     ecx, esi
0x63E0B4: call    eax
0x63E0B6: cmp     dword ptr [eax+8], 0
0x63E0BA: jz      short loc_63E139
0x63E0BC: mov     edx, [esi]
0x63E0BE: mov     eax, [edx+0ECh]
0x63E0C4: push    1
0x63E0C6: mov     ecx, esi
0x63E0C8: call    eax
0x63E0CA: mov     ecx, [eax+8]
0x63E0CD: cmp     byte ptr [ecx+4], 21h ; '!'
0x63E0D1: jnz     short loc_63E139
0x63E0D3: mov     edx, [esi]
0x63E0D5: mov     eax, [edx+0ECh]
0x63E0DB: push    1
0x63E0DD: mov     ecx, esi
0x63E0DF: call    eax
0x63E0E1: mov     eax, [eax+8]
0x63E0E4: test    eax, eax
0x63E0E6: jz      short loc_63E139
0x63E0E8: cmp     byte ptr [eax+90h], 5
0x63E0EF: jnz     short loc_63E139
0x63E0F1: push    13h
0x63E0F3: mov     ecx, edi
0x63E0F5: call    sub_5F48D0
0x63E0FA: mov     ecx, offset fBowHoldTimer
0x63E0FF: call    GameSetting_GetSafeFloatPointer
0x63E104: fld     dword ptr [eax]
0x63E106: mov     eax, dword ptr [esp+58h+var_4C+4]
0x63E10A: fstp    dword ptr [esi+1B4h]
0x63E110: fld     dword ptr ds:0A3D65Ch
0x63E116: add     dword ptr [esi+1CCh], 1
0x63E11D: test    eax, eax
0x63E11F: fstp    dword ptr [esi+1B0h]
0x63E125: jz      loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63E12B: push    eax
0x63E12C: push    edi
0x63E12D: mov     ecx, esi
0x63E12F: call    sub_632090
0x63E134: jmp     loc_63E42C
0x63E139: cmp     byte ptr [esi+0D0h], 0
0x63E140: jz      loc_63E42C
0x63E146: mov     edx, [esi]
0x63E148: mov     eax, [edx+2D0h]
0x63E14E: mov     ecx, esi
0x63E150: call    eax
0x63E152: cmp     eax, 0FFFFFFFFh
0x63E155: jnz     loc_63E2CF
0x63E15B: cmp     dword ptr [esp+58h+var_4C+4], 0
0x63E160: jz      loc_63E20E
0x63E166: mov     ecx, dword ptr [esp+58h+var_4C+4]
0x63E16A: mov     edx, [ecx]
0x63E16C: mov     eax, [edx+190h]
0x63E172: call    eax
0x63E174: test    al, al
0x63E176: jz      loc_63E20E
0x63E17C: mov     ecx, dword ptr [esp+58h+var_4C+4]
0x63E180: call    sub_5E05B0
0x63E185: test    al, al
0x63E187: jnz     loc_63E24B
0x63E18D: cmp     ebx, 1Eh
0x63E190: jl      short loc_63E1CF
0x63E192: mov     ebp, dword ptr [esp+58h+var_4C+4]
0x63E196: mov     ecx, ebp
0x63E198: call    Actor_GetCurrentAction
0x63E19D: cmp     eax, 2
0x63E1A0: jz      short loc_63E1AE
0x63E1A2: mov     ecx, ebp
0x63E1A4: call    Actor_GetCurrentAction
0x63E1A9: cmp     eax, 3
0x63E1AC: jnz     short loc_63E1CF
0x63E1AE: push    1; float
0x63E1B0: mov     ecx, edi
0x63E1B2: call    sub_5F4AE0
0x63E1B7: fld     dword ptr ds:0A57414h
0x63E1BD: fstp    dword ptr [esi+1B0h]
0x63E1C3: xor     al, al
0x63E1C5: pop     edi
0x63E1C6: pop     esi
0x63E1C7: pop     ebp
0x63E1C8: pop     ebx
0x63E1C9: add     esp, 48h
0x63E1CC: retn    4
0x63E1CF: cmp     ebx, 0Ah
0x63E1D2: jg      short loc_63E1DB
0x63E1D4: mov     ebp, 18h
0x63E1D9: jmp     short loc_63E24B
0x63E1DB: cmp     ebx, 14h
0x63E1DE: jg      short loc_63E1E7
0x63E1E0: mov     ebp, 1Ah
0x63E1E5: jmp     short loc_63E24B
0x63E1E7: cmp     ebx, 1Eh
0x63E1EA: jg      short loc_63E1F3
0x63E1EC: mov     ebp, 16h
0x63E1F1: jmp     short loc_63E24B
0x63E1F3: cmp     ebx, 28h ; '('
0x63E1F6: jg      short loc_63E1FF
0x63E1F8: mov     ebp, 19h
0x63E1FD: jmp     short loc_63E24B
0x63E1FF: xor     ecx, ecx
0x63E201: cmp     ebx, 46h ; 'F'
0x63E204: setnle  cl
0x63E207: add     ecx, 14h
0x63E20A: mov     ebp, ecx
0x63E20C: jmp     short loc_63E24B
0x63E20E: cmp     ebx, 0Ah
0x63E211: jg      short loc_63E21A
0x63E213: mov     ebp, 18h
0x63E218: jmp     short loc_63E24B
0x63E21A: cmp     ebx, 14h
0x63E21D: jg      short loc_63E226
0x63E21F: mov     ebp, 1Ah
0x63E224: jmp     short loc_63E24B
0x63E226: cmp     ebx, 1Eh
0x63E229: jg      short loc_63E232
0x63E22B: mov     ebp, 16h
0x63E230: jmp     short loc_63E24B
0x63E232: cmp     ebx, 28h ; '('
0x63E235: jg      short loc_63E23E
0x63E237: mov     ebp, 19h
0x63E23C: jmp     short loc_63E24B
0x63E23E: xor     edx, edx
0x63E240: cmp     ebx, 46h ; 'F'
0x63E243: setnle  dl
0x63E246: add     edx, 14h
0x63E249: mov     ebp, edx
0x63E24B: lea     eax, [esp+58h+var_24]
0x63E24F: push    eax
0x63E250: push    ebp
0x63E251: push    edi
0x63E252: call    sub_615F70
0x63E257: add     esp, 0Ch
0x63E25A: test    al, al
0x63E25C: jz      short loc_63E270
0x63E25E: fldz
0x63E260: fcomp   dword ptr [esp+58h+var_24+4]
0x63E264: fnstsw  ax
0x63E266: test    ah, 44h
0x63E269: jnp     short loc_63E270
0x63E26B: mov     ebp, 15h
0x63E270: mov     ecx, edi
0x63E272: call    Actor_IsSneaking
0x63E277: test    al, al
0x63E279: jz      short loc_63E2AB
0x63E27B: mov     edx, [esi]
0x63E27D: mov     eax, [edx+13Ch]
0x63E283: mov     ecx, esi
0x63E285: call    eax
0x63E287: test    al, al
0x63E289: jnz     short loc_63E2AB
0x63E28B: mov     edx, [esi]
0x63E28D: mov     eax, [edx+138h]
0x63E293: mov     ecx, esi
0x63E295: call    eax
0x63E297: test    al, al
0x63E299: jnz     short loc_63E2AB
0x63E29B: mov     ecx, edi
0x63E29D: call    Actor_IsSwimming
0x63E2A2: test    al, al
0x63E2A4: jnz     short loc_63E2AB
0x63E2A6: mov     ebp, 16h
0x63E2AB: mov     ecx, edi
0x63E2AD: call    Actor_IsBlocking
0x63E2B2: test    al, al
0x63E2B4: jnz     short loc_63E2BE
0x63E2B6: push    ebp
0x63E2B7: mov     ecx, edi
0x63E2B9: call    sub_5F48D0
0x63E2BE: fld     dword ptr ds:0A524B0h
0x63E2C4: fstp    dword ptr [esi+1B0h]
0x63E2CA: jmp     loc_63E42C
0x63E2CF: mov     ecx, edi
0x63E2D1: call    Actor_IsBlocking
0x63E2D6: test    al, al
0x63E2D8: jz      loc_63E42C
0x63E2DE: push    0; float
0x63E2E0: mov     ecx, edi
0x63E2E2: call    sub_5F4AE0
0x63E2E7: jmp     loc_63E42C
0x63E2EC: fld     dword ptr ds:0A30634h
0x63E2F2: push    ecx
0x63E2F3: mov     ecx, [esp+5Ch+var_40]
0x63E2F7: fstp    [esp+5Ch+var_5C]; float
0x63E2FA: push    0; char
0x63E2FC: push    edi; int
0x63E2FD: call    sub_566DC0
0x63E302: test    al, al
0x63E304: jnz     short loc_63E338
0x63E306: mov     ecx, edi
0x63E308: call    Actor_GetCurrentAction
0x63E30D: cmp     eax, 0FFFFFFFFh
0x63E310: jnz     short loc_63E338
0x63E312: mov     edx, [edi]
0x63E314: mov     eax, [edx+164h]
0x63E31A: mov     ecx, edi
0x63E31C: call    eax
0x63E31E: mov     ecx, eax
0x63E320: call    sub_472EA0
0x63E325: test    al, al
0x63E327: jz      short loc_63E338
0x63E329: mov     edx, [esi]
0x63E32B: mov     eax, [edx+188h]
0x63E331: push    0FFFFFFFFh
0x63E333: push    edi
0x63E334: mov     ecx, esi
0x63E336: call    eax
0x63E338: fldz
0x63E33A: fcomp   dword ptr [esi+1B4h]
0x63E340: fnstsw  ax
0x63E342: test    ah, 1
0x63E345: jnz     short loc_63E35E
0x63E347: fld     dword ptr [esi+1B0h]
0x63E34D: fsub    dword ptr ds:0B33E9Ch
0x63E353: fstp    dword ptr [esi+1B0h]
0x63E359: jmp     loc_63E42C
0x63E35E: mov     edx, [edi]
0x63E360: mov     eax, [edx+164h]
0x63E366: mov     ecx, edi
0x63E368: call    eax
0x63E36A: mov     ebp, eax
0x63E36C: push    3
0x63E36E: mov     ecx, ebp
0x63E370: call    ActorAnimData_GetAnimGroupFromField8Value
0x63E375: push    eax
0x63E376: call    sub_51AC80
0x63E37B: add     esp, 4
0x63E37E: test    al, al
0x63E380: jz      short loc_63E3EC
0x63E382: push    3
0x63E384: mov     ecx, ebp
0x63E386: call    ActorAnimData_GetAnimGroupFromField8Value
0x63E38B: push    eax
0x63E38C: call    sub_51ACC0
0x63E391: add     esp, 4
0x63E394: test    al, al
0x63E396: jnz     short loc_63E3EC
0x63E398: fldz
0x63E39A: fcomp   dword ptr [esi+1B4h]
0x63E3A0: fnstsw  ax
0x63E3A2: test    ah, 5
0x63E3A5: jnp     short loc_63E3D5
0x63E3A7: mov     ecx, ds:0B333C4h
0x63E3AD: push    0
0x63E3AF: push    edi
0x63E3B0: call    TesObjectREF_GetDistance
0x63E3B5: fstp    [esp+58h+var_24]
0x63E3B9: push    0
0x63E3BB: push    ebx
0x63E3BC: mov     ecx, edi
0x63E3BE: call    TesObjectREF_GetDistance
0x63E3C3: fcomp   [esp+58h+var_24]
0x63E3C7: fnstsw  ax
0x63E3C9: test    ah, 41h
0x63E3CC: jnz     short loc_63E3EC
0x63E3CE: cmp     byte ptr [esp+58h+a1], 0
0x63E3D3: jz      short loc_63E3EC
0x63E3D5: push    3
0x63E3D7: mov     ecx, ebp
0x63E3D9: call    ActorAnimData_GetSomethingFromField8Value
0x63E3DE: cmp     eax, 2
0x63E3E1: jnz     short loc_63E3EC
0x63E3E3: push    3
0x63E3E5: mov     ecx, ebp
0x63E3E7: call    sub_4706D0
0x63E3EC: mov     ecx, ds:0B333C4h
0x63E3F2: push    0
0x63E3F4: push    edi
0x63E3F5: call    TesObjectREF_GetDistance
0x63E3FA: fstp    [esp+58h+var_24]
0x63E3FE: push    0
0x63E400: push    ebx
0x63E401: mov     ecx, edi
0x63E403: call    TesObjectREF_GetDistance
0x63E408: fcomp   [esp+58h+var_24]
0x63E40C: fnstsw  ax
0x63E40E: test    ah, 41h
0x63E411: jnz     short loc_63E41A
0x63E413: cmp     byte ptr [esp+58h+a1], 0
0x63E418: jnz     short loc_63E42C
0x63E41A: fld     dword ptr [esi+1B4h]
0x63E420: fsub    dword ptr ds:0B33E9Ch
0x63E426: fstp    dword ptr [esi+1B4h]
0x63E42C: mov     eax, dword ptr [esp+58h+var_4C+4]
0x63E430: test    eax, eax
0x63E432: jz      loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63E438: mov     edx, [esi]
0x63E43A: push    eax
0x63E43B: mov     eax, [edx+484h]
0x63E441: mov     ecx, esi
0x63E443: call    eax
0x63E445: xor     al, al
0x63E447: pop     edi
0x63E448: pop     esi
0x63E449: pop     ebp
0x63E44A: pop     ebx
0x63E44B: add     esp, 48h
0x63E44E: retn    4
0x63E451: mov     ecx, [esp+58h+var_40]; jumptable 0063D5C2 cases 5,21
0x63E455: mov     edx, [esi]
0x63E457: mov     ebp, [ecx+28h]
0x63E45A: mov     eax, [edx+554h]
0x63E460: push    1
0x63E462: push    edi
0x63E463: mov     ecx, esi
0x63E465: call    eax
0x63E467: test    al, al
0x63E469: jnz     short loc_63E4AD
0x63E46B: mov     edx, [esi]
0x63E46D: mov     eax, [edx+188h]
0x63E473: push    2
0x63E475: push    edi
0x63E476: mov     ecx, esi
0x63E478: call    eax
0x63E47A: mov     edx, [esi]
0x63E47C: mov     eax, [edx+594h]
0x63E482: push    edi
0x63E483: mov     ecx, esi
0x63E485: call    eax
0x63E487: cmp     byte ptr [esi+0D0h], 0
0x63E48E: jnz     loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63E494: mov     edx, [esi]
0x63E496: mov     eax, [edx+194h]
0x63E49C: push    edi
0x63E49D: mov     ecx, esi
0x63E49F: call    eax
0x63E4A1: xor     al, al
0x63E4A3: pop     edi
0x63E4A4: pop     esi
0x63E4A5: pop     ebp
0x63E4A6: pop     ebx
0x63E4A7: add     esp, 48h
0x63E4AA: retn    4
0x63E4AD: mov     ecx, ebp
0x63E4AF: call    TargetData__GetTargetType
0x63E4B4: cmp     eax, 1
0x63E4B7: mov     ecx, ebp
0x63E4B9: jnz     short loc_63E4C2
0x63E4BB: call    sub_569E70
0x63E4C0: jmp     short loc_63E4E2
0x63E4C2: call    TargetData__GetTargetType
0x63E4C7: test    eax, eax
0x63E4C9: jnz     loc_63E726; jumptable 0063D5C2 case 1
0x63E4CF: mov     ecx, ebp
0x63E4D1: call    sub_569E60
0x63E4D6: mov     edx, [eax]
0x63E4D8: mov     ecx, eax
0x63E4DA: mov     eax, [edx+170h]
0x63E4E0: call    eax
0x63E4E2: test    eax, eax
0x63E4E4: jz      loc_63E726; jumptable 0063D5C2 case 1
0x63E4EA: push    0; int
0x63E4EC: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x63E4F1: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x63E4F6: push    0; int
0x63E4F8: push    eax; void *
0x63E4F9: call    OblivionDynamicCast
0x63E4FE: mov     ebp, eax
0x63E500: add     esp, 14h
0x63E503: test    ebp, ebp
0x63E505: jz      loc_63E726; jumptable 0063D5C2 case 1
0x63E50B: push    ebp
0x63E50C: call    sub_4691B0
0x63E511: add     esp, 4
0x63E514: push    0
0x63E516: push    0Dh
0x63E518: mov     ecx, eax
0x63E51A: call    TESBipedModelForm_CoversSlot
0x63E51F: test    al, al
0x63E521: jz      loc_63E726; jumptable 0063D5C2 case 1
0x63E527: mov     ecx, [edi+58h]
0x63E52A: mov     edx, [ecx]
0x63E52C: mov     eax, [edx+0F8h]
0x63E532: push    1
0x63E534: call    eax
0x63E536: test    eax, eax
0x63E538: jnz     short loc_63E548
0x63E53A: push    eax
0x63E53B: push    1
0x63E53D: push    eax
0x63E53E: push    1
0x63E540: push    ebp
0x63E541: mov     ecx, edi
0x63E543: call    Actor_EquipItem
0x63E548: push    1
0x63E54A: mov     ecx, edi
0x63E54C: call    Actor_SetAlerted
0x63E551: mov     eax, [esp+58h+var_34]
0x63E555: test    eax, eax
0x63E557: jle     short loc_63E5B7
0x63E559: cmp     [esi+1CCh], eax
0x63E55F: jl      short loc_63E5B7
0x63E561: mov     ecx, edi
0x63E563: call    Actor_GetCurrentAction
0x63E568: cmp     eax, 0FFFFFFFFh
0x63E56B: jnz     short loc_63E5B7
0x63E56D: mov     edx, [edi]
0x63E56F: mov     eax, [edx+164h]
0x63E575: mov     ecx, edi
0x63E577: call    eax
0x63E579: mov     ecx, eax
0x63E57B: call    sub_472EA0
0x63E580: test    al, al
0x63E582: jz      short loc_63E5B7
0x63E584: mov     edx, [esi]
0x63E586: mov     eax, [edx+188h]
0x63E58C: push    2
0x63E58E: push    edi
0x63E58F: mov     ecx, esi
0x63E591: call    eax
0x63E593: mov     edx, [esi]
0x63E595: mov     eax, [edx+594h]
0x63E59B: push    edi
0x63E59C: mov     ecx, esi
0x63E59E: call    eax
0x63E5A0: push    0; float
0x63E5A2: mov     ecx, edi
0x63E5A4: call    sub_5F4AE0
0x63E5A9: push    0
0x63E5AB: mov     ecx, edi
0x63E5AD: call    Actor_SetAlerted
0x63E5B2: jmp     loc_63EAD5
0x63E5B7: mov     ebx, [esp+58h+var_44]
0x63E5BB: test    ebx, ebx
0x63E5BD: jz      loc_63E6B5
0x63E5C3: mov     edx, [ebx]
0x63E5C5: mov     eax, [edx+170h]
0x63E5CB: mov     ecx, ebx
0x63E5CD: call    eax
0x63E5CF: cmp     eax, ds:0B35EB0h
0x63E5D5: jnz     loc_63E6B5
0x63E5DB: fld     dword ptr [ebx+28h]
0x63E5DE: fstp    [esp+58h+a1]
0x63E5E2: fldz
0x63E5E4: fld     [esp+58h+a1]
0x63E5E8: fcom    st(1)
0x63E5EA: fnstsw  ax
0x63E5EC: fstp    st(1)
0x63E5EE: test    ah, 5
0x63E5F1: fld     qword ptr ds:0A3D5B0h
0x63E5F7: jp      short loc_63E616
0x63E5F9: call    unknown_libname_14
0x63E5FE: fstp    [esp+58h+a1]
0x63E602: fld     [esp+58h+a1]
0x63E606: fadd    qword ptr ds:0A3D5B0h
0x63E60C: fstp    [esp+58h+a1]
0x63E610: fld     [esp+58h+a1]
0x63E614: jmp     short loc_63E638
0x63E616: fcom    st(1)
0x63E618: fnstsw  ax
0x63E61A: test    ah, 41h
0x63E61D: jp      short loc_63E636
0x63E61F: call    unknown_libname_14
0x63E624: fstp    [esp+58h+a1]
0x63E628: fld     [esp+58h+a1]
0x63E62C: fstp    [esp+58h+a1]
0x63E630: fld     [esp+58h+a1]
0x63E634: jmp     short loc_63E638
0x63E636: fstp    st
0x63E638: fldz
0x63E63A: lea     ecx, [esp+58h+var_18]
0x63E63E: push    ecx; int
0x63E63F: fstp    dword ptr [esp+5Ch+var_18]
0x63E643: push    ecx
0x63E644: fstp    [esp+60h+a3]; float
0x63E647: push    edi; int
0x63E648: call    sub_683D80
0x63E64D: fstp    dword ptr [esp+64h+var_24]
0x63E651: fld     dword ptr [esp+64h+var_24]
0x63E655: add     esp, 0Ch
0x63E658: fabs
0x63E65A: fstp    dword ptr [esp+58h+var_24]
0x63E65E: fld     dword ptr [esp+58h+var_24]
0x63E662: fild    dword ptr ds:0B36C18h
0x63E668: fmul    qword ptr ds:0A31C78h
0x63E66E: fstp    dword ptr [esp+58h+var_24]
0x63E672: fld     dword ptr [esp+58h+var_24]
0x63E676: fcompp
0x63E678: fnstsw  ax
0x63E67A: test    ah, 5
0x63E67D: jp      short loc_63E6AC
0x63E67F: mov     edx, [esi]
0x63E681: mov     eax, [edx+484h]
0x63E687: push    0
0x63E689: mov     ecx, esi
0x63E68B: call    eax
0x63E68D: fld     [esp+58h+a1]
0x63E691: push    1; char
0x63E693: push    ecx
0x63E694: fstp    [esp+60h+a3]; float
0x63E697: push    edi; Concurrency::details::SchedulerBase *
0x63E698: call    sub_685530
0x63E69D: add     esp, 0Ch
0x63E6A0: xor     al, al
0x63E6A2: pop     edi
0x63E6A3: pop     esi
0x63E6A4: pop     ebp
0x63E6A5: pop     ebx
0x63E6A6: add     esp, 48h
0x63E6A9: retn    4
0x63E6AC: push    30h ; '0'
0x63E6AE: mov     ecx, edi
0x63E6B0: call    sub_5E05F0
0x63E6B5: mov     eax, dword ptr [esp+58h+var_4C+4]
0x63E6B9: test    eax, eax
0x63E6BB: jz      short loc_63E6CA
0x63E6BD: mov     edx, [esi]
0x63E6BF: push    eax
0x63E6C0: mov     eax, [edx+484h]
0x63E6C6: mov     ecx, esi
0x63E6C8: call    eax
0x63E6CA: fldz
0x63E6CC: fcom    dword ptr [esi+1B0h]
0x63E6D2: fnstsw  ax
0x63E6D4: test    ah, 41h
0x63E6D7: jnz     short loc_63E6FD
0x63E6D9: fcomp   dword ptr [esi+1B4h]
0x63E6DF: fnstsw  ax
0x63E6E1: test    ah, 41h
0x63E6E4: jnz     short loc_63E6FF
0x63E6E6: push    1; float
0x63E6E8: mov     ecx, edi
0x63E6EA: call    sub_5F4AE0
0x63E6EF: fld     dword ptr ds:0A35AA4h
0x63E6F5: fstp    dword ptr [esi+1B4h]
0x63E6FB: jmp     short loc_63E714
0x63E6FD: fstp    st
0x63E6FF: push    0; float
0x63E701: mov     ecx, edi
0x63E703: call    sub_5F4AE0
0x63E708: fld     dword ptr ds:0A524B0h
0x63E70E: fstp    dword ptr [esi+1B0h]
0x63E714: fld     dword ptr [esi+1B4h]
0x63E71A: fsub    dword ptr ds:0B33E9Ch
0x63E720: fstp    dword ptr [esi+1B4h]
0x63E726: mov     eax, [esp+58h+var_34]; jumptable 0063D5C2 case 1
0x63E72A: test    eax, eax
0x63E72C: jle     short loc_63E75D
0x63E72E: cmp     [esi+1CCh], eax
0x63E734: jl      short loc_63E75D
0x63E736: mov     ecx, edi
0x63E738: call    Actor_GetCurrentAction
0x63E73D: cmp     eax, 0FFFFFFFFh
0x63E740: jnz     short loc_63E75D
0x63E742: mov     edx, [edi]
0x63E744: mov     eax, [edx+164h]
0x63E74A: mov     ecx, edi
0x63E74C: call    eax
0x63E74E: mov     ecx, eax
0x63E750: call    sub_472EA0
0x63E755: test    al, al
0x63E757: jnz     loc_63EAB9
0x63E75D: mov     ebx, [esp+58h+var_44]
0x63E761: test    ebx, ebx
0x63E763: jz      loc_63E832
0x63E769: mov     edx, [ebx]
0x63E76B: mov     eax, [edx+170h]
0x63E771: mov     ecx, ebx
0x63E773: call    eax
0x63E775: cmp     eax, ds:0B35EB0h
0x63E77B: jnz     loc_63E832
0x63E781: fld     dword ptr [ebx+28h]
0x63E784: fstp    [esp+58h+a1]
0x63E788: fldz
0x63E78A: fld     [esp+58h+a1]
0x63E78E: fcom    st(1)
0x63E790: fnstsw  ax
0x63E792: fstp    st(1)
0x63E794: test    ah, 5
0x63E797: fld     qword ptr ds:0A3D5B0h
0x63E79D: jp      short loc_63E7BC
0x63E79F: call    unknown_libname_14
0x63E7A4: fstp    [esp+58h+a1]
0x63E7A8: fld     [esp+58h+a1]
0x63E7AC: fadd    qword ptr ds:0A3D5B0h
0x63E7B2: fstp    [esp+58h+a1]
0x63E7B6: fld     [esp+58h+a1]
0x63E7BA: jmp     short loc_63E7DE
0x63E7BC: fcom    st(1)
0x63E7BE: fnstsw  ax
0x63E7C0: test    ah, 41h
0x63E7C3: jp      short loc_63E7DC
0x63E7C5: call    unknown_libname_14
0x63E7CA: fstp    [esp+58h+a1]
0x63E7CE: fld     [esp+58h+a1]
0x63E7D2: fstp    [esp+58h+a1]
0x63E7D6: fld     [esp+58h+a1]
0x63E7DA: jmp     short loc_63E7DE
0x63E7DC: fstp    st
0x63E7DE: fldz
0x63E7E0: lea     ecx, [esp+58h+var_18]
0x63E7E4: push    ecx; int
0x63E7E5: fstp    dword ptr [esp+5Ch+var_18]
0x63E7E9: push    ecx
0x63E7EA: fstp    [esp+60h+a3]; float
0x63E7ED: push    edi; int
0x63E7EE: call    sub_683D80
0x63E7F3: fstp    dword ptr [esp+64h+var_24]
0x63E7F7: fld     dword ptr [esp+64h+var_24]
0x63E7FB: add     esp, 0Ch
0x63E7FE: fabs
0x63E800: fstp    dword ptr [esp+58h+var_24]
0x63E804: fld     dword ptr [esp+58h+var_24]
0x63E808: fild    dword ptr ds:0B36C18h
0x63E80E: fmul    qword ptr ds:0A31C78h
0x63E814: fstp    dword ptr [esp+58h+var_24]
0x63E818: fld     dword ptr [esp+58h+var_24]
0x63E81C: fcompp
0x63E81E: fnstsw  ax
0x63E820: test    ah, 5
0x63E823: jnp     loc_63E67F
0x63E829: push    30h ; '0'
0x63E82B: mov     ecx, edi
0x63E82D: call    sub_5E05F0
0x63E832: mov     edx, [esi]
0x63E834: mov     eax, [edx+51Ch]
0x63E83A: push    1
0x63E83C: push    edi
0x63E83D: mov     ecx, esi
0x63E83F: call    eax
0x63E841: test    al, al
0x63E843: jz      short loc_63E84C
0x63E845: add     dword ptr [esi+1CCh], 1
0x63E84C: mov     ebx, [esp+58h+var_40]
0x63E850: mov     ecx, ebx
0x63E852: call    sub_565DF0
0x63E857: test    al, al
0x63E859: jz      loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63E85F: cmp     dword ptr [ebx+30h], 0
0x63E863: jnz     loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63E869: mov     edx, [edi]
0x63E86B: mov     eax, [edx+164h]
0x63E871: mov     ecx, edi
0x63E873: call    eax
0x63E875: mov     ecx, eax
0x63E877: call    sub_472EA0
0x63E87C: test    al, al
0x63E87E: jz      loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63E884: mov     edx, [esi]
0x63E886: mov     eax, [edx+49Ch]
0x63E88C: mov     ecx, esi
0x63E88E: call    eax
0x63E890: mov     edx, [esi]
0x63E892: mov     eax, [edx+188h]
0x63E898: push    2
0x63E89A: push    edi
0x63E89B: mov     ecx, esi
0x63E89D: call    eax
0x63E89F: xor     al, al
0x63E8A1: pop     edi
0x63E8A2: pop     esi
0x63E8A3: pop     ebp
0x63E8A4: pop     ebx
0x63E8A5: add     esp, 48h
0x63E8A8: retn    4
0x63E8AB: mov     eax, [esp+58h+var_34]; jumptable 0063D5C2 cases 26-35
0x63E8AF: xor     ebx, ebx
0x63E8B1: cmp     eax, ebx
0x63E8B3: jle     short loc_63E8CD
0x63E8B5: cmp     [esi+1CCh], eax
0x63E8BB: jl      short loc_63E8CD
0x63E8BD: mov     ecx, edi
0x63E8BF: call    Actor_GetCurrentAction
0x63E8C4: cmp     eax, 0FFFFFFFFh
0x63E8C7: jz      loc_63EAB9
0x63E8CD: fldz
0x63E8CF: fcomp   dword ptr [esi+1B0h]
0x63E8D5: fnstsw  ax
0x63E8D7: test    ah, 1
0x63E8DA: jnz     loc_63E9ED
0x63E8E0: cmp     [esi+148h], ebx
0x63E8E6: jnz     short loc_63E90B
0x63E8E8: mov     eax, [esp+58h+var_3C]
0x63E8EC: cmp     eax, ebx
0x63E8EE: jz      short loc_63E90B
0x63E8F0: push    ebx; int
0x63E8F1: push    offset ??_R0?AVMagicItem@@@8; struct TypeDescriptor *
0x63E8F6: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x63E8FB: push    ebx; int
0x63E8FC: push    eax; void *
0x63E8FD: call    OblivionDynamicCast
0x63E902: add     esp, 14h
0x63E905: mov     [esi+148h], eax
0x63E90B: mov     eax, [esi+148h]
0x63E911: cmp     eax, ebx
0x63E913: jz      loc_63E9D9
0x63E919: push    ebx
0x63E91A: push    3
0x63E91C: lea     ecx, [eax+0Ch]
0x63E91F: call    EffectItemList_GetStrongestItem
0x63E924: mov     eax, [eax+10h]
0x63E927: cmp     eax, 2
0x63E92A: jnz     short loc_63E959
0x63E92C: mov     ecx, dword ptr [esp+58h+var_4C+4]
0x63E930: mov     edx, [esi+148h]
0x63E936: push    1; char
0x63E938: push    ecx; int
0x63E939: push    edx; int
0x63E93A: mov     ecx, edi; int
0x63E93C: call    Actor_CastOnTarget
0x63E941: fld     dword ptr ds:0A524B0h
0x63E947: add     dword ptr [esi+1CCh], 1
0x63E94E: mov     [esi+148h], ebx
0x63E954: jmp     loc_63E9F9
0x63E959: mov     ebp, 1
0x63E95E: cmp     eax, ebp
0x63E960: jnz     short loc_63E989
0x63E962: mov     eax, dword ptr [esp+58h+var_4C+4]
0x63E966: mov     ecx, [esi+148h]
0x63E96C: push    eax; int
0x63E96D: push    ecx; int
0x63E96E: mov     ecx, edi; int
0x63E970: call    Actor_CastOnTouch
0x63E975: fld     dword ptr ds:0A524B0h
0x63E97B: add     [esi+1CCh], ebp
0x63E981: mov     [esi+148h], ebx
0x63E987: jmp     short loc_63E9F9
0x63E989: mov     edx, [esi]
0x63E98B: mov     eax, [edx+2DCh]
0x63E991: mov     ecx, esi
0x63E993: call    eax
0x63E995: test    al, al
0x63E997: jz      short loc_63E9D1
0x63E999: mov     ecx, edi
0x63E99B: lea     ebx, [edi+68h]
0x63E99E: call    Actor_GetCurrentAction
0x63E9A3: cmp     eax, 0FFFFFFFFh
0x63E9A6: jnz     short loc_63E9AC
0x63E9A8: test    ebx, ebx
0x63E9AA: jz      short loc_63E9BE
0x63E9AC: mov     ecx, [esi+148h]
0x63E9B2: push    ecx
0x63E9B3: mov     ecx, ebx
0x63E9B5: call    MagicTarget_HasMagicItem
0x63E9BA: test    al, al
0x63E9BC: jnz     short loc_63E9D1
0x63E9BE: mov     edx, [esi]
0x63E9C0: mov     eax, [edx+54Ch]
0x63E9C6: push    edi
0x63E9C7: mov     ecx, esi
0x63E9C9: call    eax
0x63E9CB: add     [esi+1CCh], ebp
0x63E9D1: fld     dword ptr ds:0A524B0h
0x63E9D7: jmp     short loc_63E9F9
0x63E9D9: mov     ecx, [esi+0E0h]
0x63E9DF: push    1
0x63E9E1: push    0FFFFFFFFh
0x63E9E3: push    ecx
0x63E9E4: mov     ecx, edi
0x63E9E6: call    sub_5E91E0
0x63E9EB: jmp     short loc_63E9FF
0x63E9ED: fld     dword ptr [esi+1B0h]
0x63E9F3: fsub    dword ptr ds:0B33E9Ch
0x63E9F9: fstp    dword ptr [esi+1B0h]
0x63E9FF: mov     ebx, [esp+58h+var_40]
0x63EA03: mov     ecx, ebx
0x63EA05: call    sub_565DF0
0x63EA0A: test    al, al
0x63EA0C: jz      loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63EA12: cmp     dword ptr [ebx+30h], 0
0x63EA16: jnz     loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63EA1C: mov     edx, [edi]
0x63EA1E: mov     eax, [edx+164h]
0x63EA24: mov     ecx, edi
0x63EA26: call    eax
0x63EA28: mov     ecx, eax
0x63EA2A: call    sub_472EA0
0x63EA2F: test    al, al
0x63EA31: jz      loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63EA37: mov     edx, [esi]
0x63EA39: mov     eax, [edx+188h]
0x63EA3F: push    2
0x63EA41: push    edi
0x63EA42: mov     ecx, esi
0x63EA44: call    eax
0x63EA46: xor     al, al
0x63EA48: pop     edi
0x63EA49: pop     esi
0x63EA4A: pop     ebp
0x63EA4B: pop     ebx
0x63EA4C: add     esp, 48h
0x63EA4F: retn    4
0x63EA52: mov     eax, [esp+58h+var_3C]; jumptable 0063D5C2 default case, cases 2,4,6-12,17-20,22
0x63EA56: test    eax, eax
0x63EA58: mov     ebx, [esp+58h+var_44]
0x63EA5C: jz      short loc_63EA6B
0x63EA5E: mov     edx, [esi]
0x63EA60: push    eax
0x63EA61: mov     eax, [edx+154h]
0x63EA67: mov     ecx, esi
0x63EA69: call    eax
0x63EA6B: mov     eax, [esp+58h+var_34]
0x63EA6F: test    eax, eax
0x63EA71: jle     loc_63EAF7
0x63EA77: cmp     [esi+1CCh], eax
0x63EA7D: jl      short loc_63EAF7
0x63EA7F: mov     ecx, edi
0x63EA81: call    Actor_GetCurrentAction
0x63EA86: cmp     eax, 0FFFFFFFFh
0x63EA89: jnz     short loc_63EAF7
0x63EA8B: mov     edx, [edi]
0x63EA8D: mov     eax, [edx+164h]
0x63EA93: mov     ecx, edi
0x63EA95: call    eax
0x63EA97: mov     ecx, eax
0x63EA99: call    sub_472EA0
0x63EA9E: test    al, al
0x63EAA0: jz      short loc_63EAF7
0x63EAA2: mov     eax, [esi+24h]
0x63EAA5: test    eax, eax
0x63EAA7: jz      short loc_63EAB9
0x63EAA9: push    0
0x63EAAB: push    1
0x63EAAD: push    0
0x63EAAF: push    1
0x63EAB1: push    eax
0x63EAB2: mov     ecx, edi
0x63EAB4: call    Actor_EquipItem
0x63EAB9: mov     edx, [esi]
0x63EABB: mov     eax, [edx+188h]
0x63EAC1: push    2
0x63EAC3: push    edi
0x63EAC4: mov     ecx, esi
0x63EAC6: call    eax
0x63EAC8: mov     edx, [esi]
0x63EACA: mov     eax, [edx+594h]
0x63EAD0: push    edi
0x63EAD1: mov     ecx, esi
0x63EAD3: call    eax
0x63EAD5: cmp     byte ptr [esi+0D0h], 0
0x63EADC: jnz     short loc_63EAEB
0x63EADE: mov     edx, [esi]
0x63EAE0: mov     eax, [edx+194h]
0x63EAE6: push    edi
0x63EAE7: mov     ecx, esi
0x63EAE9: call    eax
0x63EAEB: mov     al, 1
0x63EAED: pop     edi
0x63EAEE: pop     esi
0x63EAEF: pop     ebp
0x63EAF0: pop     ebx
0x63EAF1: add     esp, 48h
0x63EAF4: retn    4
0x63EAF7: test    ebx, ebx
0x63EAF9: jz      loc_63EBD4
0x63EAFF: mov     edx, [ebx]
0x63EB01: mov     eax, [edx+170h]
0x63EB07: mov     ecx, ebx
0x63EB09: call    eax
0x63EB0B: cmp     eax, ds:0B35EB0h
0x63EB11: jnz     loc_63EBD4
0x63EB17: fld     dword ptr [ebx+28h]
0x63EB1A: fstp    [esp+58h+a1]
0x63EB1E: fldz
0x63EB20: fld     [esp+58h+a1]
0x63EB24: fcom    st(1)
0x63EB26: fnstsw  ax
0x63EB28: fstp    st(1)
0x63EB2A: test    ah, 5
0x63EB2D: fld     qword ptr ds:0A3D5B0h
0x63EB33: jp      short loc_63EB52
0x63EB35: call    unknown_libname_14
0x63EB3A: fstp    [esp+58h+a1]
0x63EB3E: fld     [esp+58h+a1]
0x63EB42: fadd    qword ptr ds:0A3D5B0h
0x63EB48: fstp    [esp+58h+a1]
0x63EB4C: fld     [esp+58h+a1]
0x63EB50: jmp     short loc_63EB74
0x63EB52: fcom    st(1)
0x63EB54: fnstsw  ax
0x63EB56: test    ah, 41h
0x63EB59: jp      short loc_63EB72
0x63EB5B: call    unknown_libname_14
0x63EB60: fstp    [esp+58h+a1]
0x63EB64: fld     [esp+58h+a1]
0x63EB68: fstp    [esp+58h+a1]
0x63EB6C: fld     [esp+58h+a1]
0x63EB70: jmp     short loc_63EB74
0x63EB72: fstp    st
0x63EB74: fldz
0x63EB76: lea     ecx, [esp+58h+var_18]
0x63EB7A: push    ecx; int
0x63EB7B: fstp    dword ptr [esp+5Ch+var_18]
0x63EB7F: push    ecx
0x63EB80: fstp    [esp+60h+a3]; float
0x63EB83: push    edi; int
0x63EB84: call    sub_683D80
0x63EB89: fstp    dword ptr [esp+64h+var_24]
0x63EB8D: fld     dword ptr [esp+64h+var_24]
0x63EB91: add     esp, 0Ch
0x63EB94: fabs
0x63EB96: fstp    dword ptr [esp+58h+var_24]
0x63EB9A: fld     dword ptr [esp+58h+var_24]
0x63EB9E: fild    dword ptr ds:0B36C18h
0x63EBA4: fmul    qword ptr ds:0A31C78h
0x63EBAA: fstp    dword ptr [esp+58h+var_24]
0x63EBAE: fld     dword ptr [esp+58h+var_24]
0x63EBB2: fcompp
0x63EBB4: fnstsw  ax
0x63EBB6: test    ah, 5
0x63EBB9: jnp     loc_63D2C7
0x63EBBF: push    30h ; '0'
0x63EBC1: mov     ecx, edi
0x63EBC3: call    sub_5E05F0
0x63EBC8: mov     edx, [esi]
0x63EBCA: mov     eax, [edx+49Ch]
0x63EBD0: mov     ecx, esi
0x63EBD2: call    eax
0x63EBD4: mov     edx, [edi]
0x63EBD6: mov     eax, [edx+164h]
0x63EBDC: mov     ecx, edi
0x63EBDE: call    eax
0x63EBE0: mov     ebp, eax
0x63EBE2: mov     eax, [esi+24h]
0x63EBE5: test    eax, eax
0x63EBE7: jnz     short loc_63EC01
0x63EBE9: cmp     [esi+0E0h], eax
0x63EBEF: jnz     loc_63D129
0x63EBF5: test    eax, eax
0x63EBF7: jnz     short loc_63EC01
0x63EBF9: cmp     [esi+0E0h], eax
0x63EBFF: jnz     short loc_63EC71
0x63EC01: test    ebp, ebp
0x63EC03: jz      short loc_63EC71
0x63EC05: mov     ecx, ebp
0x63EC07: call    sub_472EA0
0x63EC0C: test    al, al
0x63EC0E: jz      short loc_63EC71
0x63EC10: mov     ecx, [esi+24h]
0x63EC13: push    ecx
0x63EC14: call    sub_520F00
0x63EC19: mov     edx, [esi]
0x63EC1B: mov     eax, [edx+48h]
0x63EC1E: add     esp, 4
0x63EC21: push    edi
0x63EC22: mov     ecx, esi
0x63EC24: call    eax
0x63EC26: mov     ebx, [esi]
0x63EC28: push    0; Seed
0x63EC2A: call    GetRandomLargeInteger?
0x63EC2F: cdq
0x63EC30: mov     ecx, 1388h
0x63EC35: idiv    ecx
0x63EC37: mov     ecx, esi
0x63EC39: mov     [esp+5Ch+a1], edx
0x63EC3D: fild    [esp+5Ch+a1]
0x63EC41: mov     edx, [ebx+224h]
0x63EC47: fmul    qword ptr ds:0A30E40h
0x63EC4D: fadd    qword ptr ds:0A3F3F0h
0x63EC53: fstp    [esp+5Ch+a1]
0x63EC57: fld     [esp+5Ch+a1]
0x63EC5B: fstp    [esp+5Ch+var_5C]
0x63EC5E: call    edx
0x63EC60: push    0
0x63EC62: call    sub_520F00
0x63EC67: add     esp, 4
0x63EC6A: add     dword ptr [esi+1CCh], 1
0x63EC71: mov     ecx, ebp
0x63EC73: call    sub_472EA0
0x63EC78: test    al, al
0x63EC7A: jz      short loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63EC7C: mov     eax, [esi+24h]
0x63EC7F: test    eax, eax
0x63EC81: jz      short loc_63EC93
0x63EC83: push    0
0x63EC85: push    1
0x63EC87: push    0
0x63EC89: push    1
0x63EC8B: push    eax
0x63EC8C: mov     ecx, edi
0x63EC8E: call    Actor_EquipItem
0x63EC93: mov     ebx, [esp+58h+var_40]
0x63EC97: mov     ecx, ebx
0x63EC99: call    sub_565DF0
0x63EC9E: test    al, al
0x63ECA0: jz      short loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63ECA2: cmp     dword ptr [ebx+30h], 0
0x63ECA6: jnz     short loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63ECA8: mov     ecx, ebp
0x63ECAA: call    sub_472EA0
0x63ECAF: test    al, al
0x63ECB1: jz      short loc_63ECC2; jumptable 0063D5C2 cases 15,16
0x63ECB3: mov     eax, [esi]
0x63ECB5: mov     edx, [eax+188h]
0x63ECBB: push    2
0x63ECBD: push    edi
0x63ECBE: mov     ecx, esi
0x63ECC0: call    edx
0x63ECC2: pop     edi; jumptable 0063D5C2 cases 15,16
0x63ECC3: pop     esi
0x63ECC4: pop     ebp
0x63ECC5: xor     al, al
0x63ECC7: pop     ebx
0x63ECC8: add     esp, 48h
0x63ECCB: retn    4
