0x603500: sub     esp, 4Ch
0x603503: push    ebx
0x603504: push    ebp
0x603505: push    esi
0x603506: mov     esi, ecx
0x603508: mov     ecx, [esi+58h]
0x60350B: test    ecx, ecx
0x60350D: push    edi
0x60350E: jz      loc_603C95
0x603514: mov     eax, [ecx]
0x603516: mov     edx, [eax+8]
0x603519: call    edx
0x60351B: test    eax, eax
0x60351D: jnz     loc_603C95
0x603523: mov     ecx, [esi+58h]
0x603526: mov     ebp, ecx
0x603528: test    ebp, ebp
0x60352A: jz      loc_603C95
0x603530: test    ecx, ecx
0x603532: jz      loc_603C95
0x603538: mov     eax, [ecx]
0x60353A: mov     edx, [eax+0E8h]
0x603540: push    esi
0x603541: call    edx
0x603543: test    eax, eax
0x603545: jz      loc_603C95
0x60354B: mov     ecx, [esi+3Ch]
0x60354E: test    ecx, ecx
0x603550: jz      loc_603C95
0x603556: mov     eax, [ecx]
0x603558: mov     edx, [eax+58h]
0x60355B: push    offset aBip01Nonaccum; "Bip01 NonAccum"
0x603560: call    edx
0x603562: mov     edx, [eax]
0x603564: mov     [esp+5Ch+var_30], eax
0x603568: mov     ecx, eax
0x60356A: mov     eax, [edx+58h]
0x60356D: push    offset aBip01Spine2; "Bip01 Spine2"
0x603572: call    eax
0x603574: mov     edx, [eax]
0x603576: mov     [esp+5Ch+var_28], eax
0x60357A: mov     ecx, eax
0x60357C: mov     eax, [edx+58h]
0x60357F: push    offset aBip01Head; "Bip01 Head"
0x603584: call    eax
0x603586: mov     ecx, [esi+0C4h]
0x60358C: not     ecx
0x60358E: test    cl, 7
0x603591: mov     [esp+5Ch+var_2C], eax
0x603595: jz      short loc_6035D3
0x603597: mov     ecx, [esi+58h]
0x60359A: test    ecx, ecx
0x60359C: mov     byte ptr [esi+0E0h], 0
0x6035A3: jz      short loc_6035C1
0x6035A5: mov     edx, [ecx]
0x6035A7: mov     eax, [edx+0E8h]
0x6035AD: push    esi
0x6035AE: call    eax
0x6035B0: mov     byte ptr [eax+1D5h], 0
0x6035B7: pop     edi
0x6035B8: pop     esi
0x6035B9: pop     ebp
0x6035BA: pop     ebx
0x6035BB: add     esp, 4Ch
0x6035BE: retn    4
0x6035C1: xor     eax, eax
0x6035C3: mov     [eax+1D5h], al
0x6035C9: pop     edi
0x6035CA: pop     esi
0x6035CB: pop     ebp
0x6035CC: pop     ebx
0x6035CD: add     esp, 4Ch
0x6035D0: retn    4
0x6035D3: cmp     byte ptr [esi+0E0h], 0
0x6035DA: jnz     short loc_6035F1
0x6035DC: mov     ecx, esi
0x6035DE: call    sub_5E12B0
0x6035E3: mov     byte ptr [eax+1D4h], 1
0x6035EA: mov     byte ptr [esi+0E0h], 1
0x6035F1: mov     ecx, ds:0B333C4h
0x6035F7: push    0
0x6035F9: push    esi
0x6035FA: call    TesObjectREF_GetDistance
0x6035FF: fld     dword ptr ds:0B36AB8h
0x603605: fcompp
0x603607: fnstsw  ax
0x603609: test    ah, 5
0x60360C: jp      short loc_603626
0x60360E: mov     ecx, esi
0x603610: call    sub_5E12B0
0x603615: mov     byte ptr [eax+1D5h], 0
0x60361C: pop     edi
0x60361D: pop     esi
0x60361E: pop     ebp
0x60361F: pop     ebx
0x603620: add     esp, 4Ch
0x603623: retn    4
0x603626: mov     ecx, [esi+58h]
0x603629: mov     edx, [ecx]
0x60362B: mov     eax, [edx+4CCh]
0x603631: call    eax
0x603633: test    eax, eax
0x603635: jz      short loc_60367E
0x603637: mov     ecx, [esi+58h]
0x60363A: mov     edx, [ecx]
0x60363C: mov     eax, [edx+4CCh]
0x603642: call    eax
0x603644: mov     edx, [eax]
0x603646: mov     ecx, eax
0x603648: mov     eax, [edx+188h]
0x60364E: call    eax
0x603650: test    al, al
0x603652: jz      short loc_60367E
0x603654: mov     ecx, [esi+58h]
0x603657: mov     edx, [ecx]
0x603659: mov     eax, [edx+4CCh]
0x60365F: call    eax
0x603661: mov     edx, [eax]
0x603663: mov     ecx, eax
0x603665: mov     eax, [edx+154h]
0x60366B: call    eax
0x60366D: test    eax, eax
0x60366F: jnz     short loc_60367E
0x603671: mov     ecx, [esi+58h]
0x603674: mov     edx, [ecx]
0x603676: mov     eax, [edx+4B4h]
0x60367C: call    eax
0x60367E: fld     dword ptr [esi+100h]
0x603684: fsub    dword ptr ds:0B33E9Ch
0x60368A: fstp    dword ptr [esi+100h]
0x603690: fld     dword ptr [esi+0DCh]
0x603696: fsub    dword ptr ds:0B33E9Ch
0x60369C: fstp    dword ptr [esi+0DCh]
0x6036A2: fldz
0x6036A4: fcomp   dword ptr [esi+100h]
0x6036AA: fnstsw  ax
0x6036AC: test    ah, 1
0x6036AF: jnz     loc_6037E0
0x6036B5: fld     dword ptr ds:0A47E6Ch
0x6036BB: sub     esp, 8
0x6036BE: fstp    [esp+64h+var_60]; float
0x6036C2: fld     dword ptr ds:0A3D9A4h
0x6036C8: fstp    [esp+64h+var_64]; float
0x6036CB: call    Rand4
0x6036D0: fadd    dword ptr [esi+100h]
0x6036D6: mov     ecx, [esi+58h]
0x6036D9: add     esp, 8
0x6036DC: fstp    dword ptr [esi+100h]
0x6036E2: mov     edx, [ecx]
0x6036E4: mov     eax, [edx+4BCh]
0x6036EA: call    eax
0x6036EC: test    al, al
0x6036EE: jz      loc_6037E0
0x6036F4: fldz
0x6036F6: fcom    dword ptr [esi+0DCh]
0x6036FC: fnstsw  ax
0x6036FE: test    ah, 41h
0x603701: jnz     short loc_60370B
0x603703: fstp    dword ptr [esi+0DCh]
0x603709: jmp     short loc_60370D
0x60370B: fstp    st
0x60370D: mov     ecx, esi
0x60370F: call    sub_601670
0x603714: mov     ecx, esi
0x603716: mov     ebx, eax
0x603718: call    sub_5E0380
0x60371D: test    eax, eax
0x60371F: jz      short loc_60379D
0x603721: mov     ecx, esi
0x603723: call    sub_5E0380
0x603728: cmp     byte ptr [eax+20h], 6
0x60372C: jz      short loc_60373B
0x60372E: mov     ecx, esi
0x603730: call    sub_5E0380
0x603735: cmp     byte ptr [eax+20h], 9
0x603739: jnz     short loc_60379D
0x60373B: mov     ecx, esi
0x60373D: call    sub_5E0380
0x603742: test    eax, eax
0x603744: jz      short loc_60379D
0x603746: mov     ecx, esi
0x603748: call    sub_5E0380
0x60374D: cmp     dword ptr [eax+28h], 0
0x603751: jz      short loc_60379D
0x603753: mov     ecx, esi
0x603755: call    sub_5E0380
0x60375A: mov     ecx, [eax+28h]
0x60375D: call    sub_569E60
0x603762: mov     edi, eax
0x603764: test    edi, edi
0x603766: jz      short loc_60379D
0x603768: cmp     edi, ds:0B333C4h
0x60376E: fld     dword ptr ds:0A2FE7Ch
0x603774: fstp    dword ptr [esp+5Ch+var_49+1]
0x603778: jnz     short loc_603784
0x60377A: fld     dword ptr ds:0A34A80h
0x603780: fstp    dword ptr [esp+5Ch+var_49+1]
0x603784: push    0
0x603786: push    edi
0x603787: mov     ecx, esi
0x603789: call    TesObjectREF_GetDistance
0x60378E: fld     dword ptr [esp+5Ch+var_49+1]
0x603792: fcompp
0x603794: fnstsw  ax
0x603796: test    ah, 41h
0x603799: jnz     short loc_60379D
0x60379B: mov     ebx, edi
0x60379D: mov     ecx, [esi+58h]
0x6037A0: mov     edx, [ecx]
0x6037A2: mov     eax, [edx+4CCh]
0x6037A8: call    eax
0x6037AA: cmp     ebx, eax
0x6037AC: jz      short loc_6037E0
0x6037AE: mov     ecx, [esi+58h]
0x6037B1: mov     edx, [ecx]
0x6037B3: mov     eax, [edx+480h]
0x6037B9: push    ebx
0x6037BA: call    eax
0x6037BC: fld     dword ptr ds:0A31C80h
0x6037C2: sub     esp, 8
0x6037C5: fstp    [esp+64h+var_60]; float
0x6037C9: fld     dword ptr ds:0A46B10h
0x6037CF: fstp    [esp+64h+var_64]; float
0x6037D2: call    Rand4
0x6037D7: fstp    dword ptr [esi+0DCh]
0x6037DD: add     esp, 8
0x6037E0: push    0; int
0x6037E2: mov     ecx, esi; int
0x6037E4: call    sub_5F7900
0x6037E9: test    al, al
0x6037EB: jz      loc_6038D5
0x6037F1: mov     edx, [ebp+0]
0x6037F4: mov     eax, [edx+4D8h]
0x6037FA: push    1
0x6037FC: mov     ecx, ebp
0x6037FE: call    eax
0x603800: mov     ecx, [esi+58h]
0x603803: mov     edx, [ecx]
0x603805: mov     eax, [edx+4CCh]
0x60380B: call    eax
0x60380D: mov     edx, [esi]
0x60380F: mov     edi, eax
0x603811: mov     eax, [edx+174h]
0x603817: mov     ecx, esi
0x603819: call    eax
0x60381B: mov     edx, [edi]
0x60381D: push    eax
0x60381E: mov     eax, [edx+174h]
0x603824: lea     ecx, [esp+60h+var_24]
0x603828: push    ecx
0x603829: mov     ecx, edi
0x60382B: call    eax
0x60382D: mov     ecx, eax
0x60382F: call    sub_4121A0
0x603834: lea     ecx, [esp+5Ch+var_24]
0x603838: push    ecx
0x603839: call    sub_683CB0
0x60383E: fstp    [esp+60h+var_44]
0x603842: fldz
0x603844: add     esp, 4
0x603847: lea     edx, [esp+5Ch+var_40]
0x60384B: fstp    [esp+5Ch+var_40]
0x60384F: fld     [esp+5Ch+var_44]
0x603853: push    edx; int
0x603854: push    ecx
0x603855: fstp    [esp+64h+var_64]; float
0x603858: push    esi; int
0x603859: call    sub_683D80
0x60385E: fstp    dword ptr [esp+68h+var_3C]
0x603862: fild    dword ptr ds:0B36C10h
0x603868: add     esp, 0Ch
0x60386B: mov     ecx, esi
0x60386D: fmul    qword ptr ds:0A31C78h
0x603873: fmul    qword ptr ds:0A6B088h
0x603879: fstp    dword ptr [esp+5Ch+var_49+1]
0x60387D: call    sub_5E0590
0x603882: test    al, al
0x603884: jz      short loc_60389C
0x603886: fild    dword ptr ds:0B36C18h
0x60388C: fmul    qword ptr ds:0A31C78h
0x603892: fmul    qword ptr ds:0A6B088h
0x603898: fstp    dword ptr [esp+5Ch+var_49+1]
0x60389C: fld     dword ptr [esp+5Ch+var_3C]
0x6038A0: fabs
0x6038A2: fstp    dword ptr [esp+5Ch+var_3C]
0x6038A6: fld     dword ptr [esp+5Ch+var_3C]
0x6038AA: fld     dword ptr [esp+5Ch+var_49+1]
0x6038AE: fcompp
0x6038B0: fnstsw  ax
0x6038B2: test    ah, 5
0x6038B5: jp      short loc_6038CC
0x6038B7: fld     [esp+5Ch+var_44]
0x6038BB: push    1; char
0x6038BD: push    ecx
0x6038BE: fstp    [esp+64h+var_64]; float
0x6038C1: push    esi; Concurrency::details::SchedulerBase *
0x6038C2: call    sub_685530
0x6038C7: add     esp, 0Ch
0x6038CA: jmp     short loc_6038D5
0x6038CC: push    30h ; '0'
0x6038CE: mov     ecx, esi
0x6038D0: call    sub_5E05F0
0x6038D5: mov     ecx, esi
0x6038D7: call    sub_5E12B0
0x6038DC: mov     edi, eax
0x6038DE: mov     eax, [ebp+0]
0x6038E1: mov     edx, [eax+4CCh]
0x6038E7: push    0
0x6038E9: mov     ecx, ebp
0x6038EB: call    edx
0x6038ED: mov     ecx, ds:0B333C4h
0x6038F3: push    eax
0x6038F4: call    TesObjectREF_GetDistance
0x6038F9: fstp    [esp+5Ch+var_3C]
0x6038FD: mov     ecx, offset unk_B36AE0
0x603902: call    GameSetting_GetSafeFloatPointer
0x603907: fld     dword ptr [eax]
0x603909: fcomp   [esp+5Ch+var_3C]
0x60390D: fnstsw  ax
0x60390F: test    ah, 1
0x603912: jnz     short loc_603918
0x603914: mov     bl, 1
0x603916: jmp     short loc_60391A
0x603918: xor     bl, bl
0x60391A: test    edi, edi
0x60391C: jz      loc_603A1C
0x603922: mov     eax, [esi]
0x603924: mov     edx, [eax+334h]
0x60392A: push    1
0x60392C: mov     ecx, esi
0x60392E: call    edx
0x603930: test    al, al
0x603932: jz      short loc_60396C
0x603934: cmp     byte ptr ds:0B1206Ch, 0
0x60393B: jz      loc_603A03
0x603941: test    bl, bl
0x603943: jz      short loc_603959
0x603945: mov     ecx, esi
0x603947: call    sub_5E0DD0
0x60394C: fstp    [esp+5Ch+var_44]
0x603950: fld     [esp+5Ch+var_44]
0x603954: jmp     loc_6039EF
0x603959: fld     dword ptr ds:0A3D8F0h
0x60395F: fstp    [esp+5Ch+var_44]
0x603963: fld     [esp+5Ch+var_44]
0x603967: jmp     loc_6039EF
0x60396C: cmp     byte ptr ds:0B1206Ch, 0
0x603973: jz      loc_603A03
0x603979: mov     ecx, [esi+58h]
0x60397C: test    ecx, ecx
0x60397E: jz      short loc_6039D4
0x603980: mov     eax, [ecx]
0x603982: mov     edx, [eax+33Ch]
0x603988: push    0
0x60398A: call    edx
0x60398C: test    eax, eax
0x60398E: jnz     loc_603A1C
0x603994: mov     ecx, [esi+58h]
0x603997: mov     eax, [ecx]
0x603999: mov     edx, [eax+1DCh]
0x60399F: call    edx
0x6039A1: test    eax, eax
0x6039A3: jnz     short loc_603A1C
0x6039A5: test    bl, bl
0x6039A7: jz      short loc_6039B2
0x6039A9: mov     ecx, esi
0x6039AB: call    sub_5E0DD0
0x6039B0: jmp     short loc_6039B8
0x6039B2: fld     dword ptr ds:0A3D8F0h
0x6039B8: mov     eax, [edi]
0x6039BA: fstp    [esp+5Ch+var_44]
0x6039BE: fld     [esp+5Ch+var_44]
0x6039C2: mov     edx, [eax+0D0h]
0x6039C8: push    0
0x6039CA: push    ecx
0x6039CB: mov     ecx, edi
0x6039CD: fstp    [esp+64h+var_64]
0x6039D0: call    edx
0x6039D2: jmp     short loc_603A1C
0x6039D4: test    bl, bl
0x6039D6: jz      short loc_6039E1
0x6039D8: mov     ecx, esi
0x6039DA: call    sub_5E0DD0
0x6039DF: jmp     short loc_6039E7
0x6039E1: fld     dword ptr ds:0A3D8F0h
0x6039E7: fstp    [esp+5Ch+var_44]
0x6039EB: fld     [esp+5Ch+var_44]
0x6039EF: mov     eax, [edi]
0x6039F1: mov     edx, [eax+0D0h]
0x6039F7: push    0
0x6039F9: push    ecx
0x6039FA: mov     ecx, edi
0x6039FC: fstp    [esp+64h+var_64]
0x6039FF: call    edx
0x603A01: jmp     short loc_603A1C
0x603A03: mov     eax, [edi]
0x603A05: fldz
0x603A07: mov     edx, [eax+78h]
0x603A0A: push    0
0x603A0C: push    0
0x603A0E: push    0
0x603A10: push    0
0x603A12: push    1
0x603A14: push    ecx
0x603A15: mov     ecx, edi
0x603A17: fstp    [esp+74h+var_74]
0x603A1A: call    edx
0x603A1C: mov     eax, [esi+0B0h]
0x603A22: xor     bl, bl
0x603A24: test    eax, eax
0x603A26: jz      short loc_603A2F
0x603A28: cmp     eax, 5
0x603A2B: jz      short loc_603A2F
0x603A2D: mov     bl, 1
0x603A2F: cmp     dword ptr [esi+58h], 0
0x603A33: jz      short loc_603A9B
0x603A35: mov     eax, [esi]
0x603A37: mov     edx, [eax+168h]
0x603A3D: mov     ecx, esi
0x603A3F: call    edx
0x603A41: test    eax, eax
0x603A43: jz      short loc_603A9B
0x603A45: mov     eax, [esi]
0x603A47: mov     edx, [eax+168h]
0x603A4D: push    0
0x603A4F: mov     ecx, esi
0x603A51: call    edx
0x603A53: mov     ecx, eax
0x603A55: call    sub_477EC0
0x603A5A: push    eax
0x603A5B: mov     eax, [esi]
0x603A5D: mov     edx, [eax+154h]
0x603A63: mov     ecx, esi
0x603A65: call    edx
0x603A67: push    eax
0x603A68: call    sub_47F750
0x603A6D: add     esp, 8
0x603A70: cmp     eax, 5Ah ; 'Z'
0x603A73: jl      short loc_603A77
0x603A75: mov     bl, 1
0x603A77: mov     eax, [esi]
0x603A79: mov     edx, [eax+164h]
0x603A7F: push    3
0x603A81: mov     ecx, esi
0x603A83: call    edx
0x603A85: mov     ecx, eax
0x603A87: call    ActorAnimData_GetAnimGroupFromField8Value
0x603A8C: push    eax
0x603A8D: call    sub_51AC80
0x603A92: add     esp, 4
0x603A95: test    al, al
0x603A97: jz      short loc_603A9B
0x603A99: mov     bl, 1
0x603A9B: mov     ecx, [esi+58h]
0x603A9E: mov     eax, [ecx]
0x603AA0: mov     edx, [eax+4CCh]
0x603AA6: call    edx
0x603AA8: test    eax, eax
0x603AAA: jz      loc_603BB7
0x603AB0: test    bl, bl
0x603AB2: jnz     loc_603BB7
0x603AB8: mov     ecx, [esi+58h]
0x603ABB: mov     eax, [ecx]
0x603ABD: mov     edx, [eax+4CCh]
0x603AC3: call    edx
0x603AC5: mov     ecx, ds:0B333C4h
0x603ACB: mov     ebp, eax
0x603ACD: call    Actor_IsSneaking
0x603AD2: test    al, al
0x603AD4: jz      short loc_603B0C
0x603AD6: mov     ecx, ds:0B333C4h
0x603ADC: cmp     ebp, ecx
0x603ADE: jnz     short loc_603B0C
0x603AE0: push    0; int
0x603AE2: push    0; int
0x603AE4: push    0
0x603AE6: mov     [esp+68h+var_49], 1
0x603AEB: call    PlayerCharacter_IsPlayerInCombat
0x603AF0: mov     ecx, ds:0B333C4h
0x603AF6: push    eax; int
0x603AF7: lea     eax, [esp+68h+var_49]
0x603AFB: push    eax; int
0x603AFC: push    ecx; int
0x603AFD: push    0; int
0x603AFF: mov     ecx, esi; int
0x603B01: call    Actor_GetDetectionLevel
0x603B06: test    eax, eax
0x603B08: jg      short loc_603B0C
0x603B0A: mov     bl, 1
0x603B0C: mov     edx, [esi]
0x603B0E: mov     edx, [edx+11Ch]
0x603B14: lea     eax, [esp+5Ch+var_24]
0x603B18: push    eax
0x603B19: mov     ecx, esi
0x603B1B: call    edx
0x603B1D: mov     edx, [ebp+0]
0x603B20: mov     edx, [edx+11Ch]
0x603B26: push    eax
0x603B27: lea     eax, [esp+5Ch+var_14]
0x603B2B: push    eax
0x603B2C: lea     eax, [esp+60h+var_8]
0x603B30: push    eax
0x603B31: mov     ecx, ebp
0x603B33: call    edx
0x603B35: mov     ecx, eax
0x603B37: call    sub_4121A0
0x603B3C: mov     edx, [eax+4]
0x603B3F: mov     ecx, [eax]
0x603B41: mov     eax, [eax+8]
0x603B44: mov     dword ptr [esp+5Ch+var_3C+4], edx
0x603B48: mov     edx, [esi]
0x603B4A: mov     dword ptr [esp+5Ch+var_3C], ecx
0x603B4E: mov     [esp+5Ch+var_34], eax
0x603B52: mov     eax, [edx+380h]
0x603B58: mov     ecx, esi
0x603B5A: call    eax
0x603B5C: test    eax, eax
0x603B5E: jz      short loc_603B88
0x603B60: mov     edx, [ebp+0]
0x603B63: mov     eax, [edx+190h]
0x603B69: mov     ecx, ebp
0x603B6B: call    eax
0x603B6D: test    al, al
0x603B6F: jz      short loc_603B88
0x603B71: mov     edx, [ebp+0]
0x603B74: mov     eax, [edx+380h]
0x603B7A: mov     ecx, ebp
0x603B7C: call    eax
0x603B7E: test    eax, eax
0x603B80: jz      short loc_603B88
0x603B82: fldz
0x603B84: fstp    [esp+5Ch+var_34]
0x603B88: test    bl, bl
0x603B8A: jz      short loc_603B92
0x603B8C: fldz
0x603B8E: fstp    [esp+5Ch+var_34]
0x603B92: lea     ecx, [esp+5Ch+var_3C]
0x603B96: call    sub_43F350
0x603B9B: fstp    st
0x603B9D: mov     ecx, dword ptr [esp+5Ch+var_3C]
0x603BA1: push    0
0x603BA3: sub     esp, 0Ch
0x603BA6: mov     eax, esp
0x603BA8: mov     [eax], ecx
0x603BAA: mov     ecx, dword ptr [esp+6Ch+var_3C+4]
0x603BAE: mov     [eax+4], ecx
0x603BB1: mov     ecx, [esp+6Ch+var_34]
0x603BB5: jmp     short loc_603BD5
0x603BB7: mov     ecx, ds:0B3F9A8h
0x603BBD: push    0
0x603BBF: sub     esp, 0Ch
0x603BC2: mov     eax, esp
0x603BC4: mov     [eax], ecx
0x603BC6: mov     ecx, ds:0B3F9ACh
0x603BCC: mov     [eax+4], ecx
0x603BCF: mov     ecx, ds:0B3F9B0h
0x603BD5: mov     edx, [edi]
0x603BD7: mov     edx, [edx+84h]
0x603BDD: mov     [eax+8], ecx
0x603BE0: mov     ecx, edi
0x603BE2: call    edx
0x603BE4: mov     ecx, esi
0x603BE6: call    sub_5E05B0
0x603BEB: test    al, al
0x603BED: setz    al
0x603BF0: mov     ecx, edi
0x603BF2: push    eax
0x603BF3: call    sub_54A0A0
0x603BF8: mov     edi, [esp+5Ch+var_30]
0x603BFC: mov     ecx, [edi+1Ch]
0x603BFF: mov     ecx, [ecx+1Ch]
0x603C02: mov     edx, [ecx]
0x603C04: mov     eax, [edx+74h]
0x603C07: call    eax
0x603C09: mov     ecx, [edi+1Ch]
0x603C0C: mov     edx, [ecx]
0x603C0E: mov     eax, [edx+74h]
0x603C11: call    eax
0x603C13: mov     edx, [edi]
0x603C15: mov     eax, [edx+74h]
0x603C18: mov     ecx, edi
0x603C1A: call    eax
0x603C1C: mov     ecx, esi
0x603C1E: call    sub_5E12B0
0x603C23: test    eax, eax
0x603C25: jz      short loc_603C95
0x603C27: fld     dword ptr ds:0B33E9Ch
0x603C2D: push    edi
0x603C2E: mov     edi, [esp+60h+var_2C]
0x603C32: push    edi
0x603C33: push    ecx
0x603C34: mov     ecx, esi
0x603C36: fstp    dword ptr [esp+68h+var_6C+4]
0x603C39: call    sub_5E12B0
0x603C3E: mov     ecx, eax
0x603C40: call    sub_54B010
0x603C45: mov     ecx, esi
0x603C47: call    sub_5E12B0
0x603C4C: cmp     byte ptr [eax+1D5h], 0
0x603C53: jz      short loc_603C95
0x603C55: cmp     byte ptr ds:0B148F4h, 0
0x603C5C: jnz     short loc_603C95
0x603C5E: fld     dword ptr ds:0B33E9Ch
0x603C64: lea     ecx, [esp+5Ch+var_30]
0x603C68: push    ecx; int
0x603C69: lea     edx, [esp+60h+var_2C]
0x603C6D: push    edx; int
0x603C6E: push    edi; int
0x603C6F: push    ecx
0x603C70: mov     ecx, esi
0x603C72: fstp    dword ptr [esp+6Ch+var_6C]; float
0x603C75: call    sub_5E12B0
0x603C7A: mov     ecx, eax
0x603C7C: call    sub_54B3E0
0x603C81: fld     [esp+5Ch+var_2C]
0x603C85: mov     eax, [esp+5Ch+var_28]
0x603C89: push    ecx
0x603C8A: mov     ecx, [eax+1Ch]
0x603C8D: fstp    [esp+60h+var_60]; float
0x603C90: call    sub_47CAF0
0x603C95: pop     edi
0x603C96: pop     esi
0x603C97: pop     ebp
0x603C98: pop     ebx
0x603C99: add     esp, 4Ch
0x603C9C: retn    4
