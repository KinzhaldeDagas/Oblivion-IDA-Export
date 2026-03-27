0x623480: sub     esp, 10h
0x623483: push    esi
0x623484: mov     esi, ecx
0x623486: cmp     dword ptr [esi+6Ch], 4
0x62348A: jnz     loc_6239BE
0x623490: fldz
0x623492: push    ebp; a5
0x623493: fcomp   dword ptr [esi+184h]
0x623499: mov     ebp, [esi+3Ch]
0x62349C: fnstsw  ax
0x62349E: test    ah, 41h
0x6234A1: jnz     short loc_6234BA
0x6234A3: push    0; a4
0x6234A5: call    sub_6135F0
0x6234AA: push    eax; a3
0x6234AB: push    ebp; a2
0x6234AC: call    TESObjectREFR_GetDistanceBetween?
0x6234B1: fstp    dword ptr [esi+184h]
0x6234B7: add     esp, 0Ch
0x6234BA: fld     dword ptr [esi+184h]
0x6234C0: push    edi
0x6234C1: mov     ecx, esi
0x6234C3: fstp    [esp+1Ch+var_8]
0x6234C7: call    sub_615520
0x6234CC: fstp    [esp+1Ch+var_C]
0x6234D0: mov     ecx, esi
0x6234D2: call    sub_6163A0
0x6234D7: fld     dword ptr [esi+44h]
0x6234DA: fsub    dword ptr [esi+0ECh]
0x6234E0: mov     edi, [ebp+58h]
0x6234E3: fld     dword ptr [esi+0F0h]
0x6234E9: mov     [esp+1Ch+var_E], al
0x6234ED: fcompp
0x6234EF: fnstsw  ax
0x6234F1: test    ah, 5
0x6234F4: jp      loc_62362A
0x6234FA: mov     eax, [edi]
0x6234FC: mov     edx, [eax+2C0h]
0x623502: mov     ecx, edi
0x623504: mov     [esp+1Ch+var_D], 1
0x623509: call    edx
0x62350B: cmp     ax, 101h
0x62350F: jnz     short loc_623574
0x623511: mov     eax, [ebp+0]
0x623514: mov     edx, [eax+0ECh]
0x62351A: mov     ecx, ebp
0x62351C: call    edx
0x62351E: fstp    st
0x623520: mov     ecx, [esi+3Ch]
0x623523: push    7
0x623525: mov     dword ptr [esi+0D0h], 201h
0x62352F: call    sub_5E5850
0x623534: fld     dword ptr ds:0A3D65Ch
0x62353A: fcom    st(1)
0x62353C: fnstsw  ax
0x62353E: fstp    st(1)
0x623540: test    ah, 5
0x623543: jp      short loc_623551
0x623545: mov     ecx, [esi+3Ch]
0x623548: fstp    st
0x62354A: push    7
0x62354C: call    sub_5E5850
0x623551: fstp    [esp+1Ch+var_4]
0x623555: fld     dword ptr [esi+44h]
0x623558: fstp    dword ptr [esi+0ECh]
0x62355E: fld     [esp+1Ch+var_4]
0x623562: fstp    dword ptr [esi+0F0h]
0x623568: fld     dword ptr ds:0A30634h
0x62356E: fstp    dword ptr [esi+0F4h]
0x623574: fld     dword ptr [esi+44h]
0x623577: fsub    dword ptr [esi+0D4h]
0x62357D: fld     dword ptr [esi+0D8h]
0x623583: fcompp
0x623585: fnstsw  ax
0x623587: test    ah, 5
0x62358A: jp      short loc_6235BC
0x62358C: mov     ecx, esi
0x62358E: call    loc_622820
0x623593: test    al, al
0x623595: jnz     loc_6239BC
0x62359B: fld     dword ptr [esi+44h]
0x62359E: fstp    dword ptr [esi+0D4h]
0x6235A4: fld     dword ptr ds:0A46C30h
0x6235AA: fstp    dword ptr [esi+0D8h]
0x6235B0: fld     dword ptr ds:0A30634h
0x6235B6: fstp    dword ptr [esi+0DCh]
0x6235BC: mov     ecx, esi
0x6235BE: call    sub_6135F0
0x6235C3: test    eax, eax
0x6235C5: jz      short loc_623634
0x6235C7: mov     ecx, esi
0x6235C9: call    sub_6135F0
0x6235CE: mov     ecx, eax
0x6235D0: call    Actor_IsSwimming
0x6235D5: test    al, al
0x6235D7: jz      short loc_623634
0x6235D9: mov     eax, [esi+70h]
0x6235DC: test    eax, eax
0x6235DE: jz      short loc_6235EA
0x6235E0: cmp     eax, 1
0x6235E3: jz      short loc_6235EA
0x6235E5: cmp     eax, 3
0x6235E8: jnz     short loc_623634
0x6235EA: mov     ecx, ebp
0x6235EC: call    Actor_IsSwimming
0x6235F1: test    al, al
0x6235F3: jnz     short loc_623634
0x6235F5: mov     ecx, ebp
0x6235F7: call    Actor_CanFightInWater
0x6235FC: test    al, al
0x6235FE: jnz     short loc_623634
0x623600: cmp     ds:0B3B908h, al
0x623606: jz      short loc_62361D
0x623608: mov     ecx, ebp; this
0x62360A: call    TESObjectREFR_GetName
0x62360F: push    eax
0x623610: push    offset a_20sCanTFightI; "%.20s can't fight in the water, enterin"...
0x623615: call    Interface_ConsolePrint
0x62361A: add     esp, 8
0x62361D: pop     edi
0x62361E: pop     ebp
0x62361F: mov     ecx, esi
0x623621: pop     esi
0x623622: add     esp, 10h
0x623625: jmp     sub_620E50
0x62362A: mov     [esp+1Ch+var_D], 0
0x62362F: jmp     loc_623574
0x623634: mov     ecx, [esi+0D0h]
0x62363A: mov     eax, [edi]
0x62363C: mov     edx, [eax+198h]
0x623642: push    ebx
0x623643: push    1
0x623645: push    ecx
0x623646: push    0
0x623648: push    ebp
0x623649: mov     ecx, edi
0x62364B: call    edx
0x62364D: mov     ebx, [ebp+58h]
0x623650: mov     eax, [ebx]
0x623652: mov     edx, [eax+184h]
0x623658: mov     ecx, ebx
0x62365A: call    edx
0x62365C: test    eax, eax
0x62365E: jz      short loc_623669
0x623660: movsx   eax, byte ptr [eax+20h]
0x623664: cmp     eax, 0Ch
0x623667: jz      short loc_62368B
0x623669: mov     eax, [ebx]
0x62366B: mov     edx, [eax+0C8h]
0x623671: mov     ecx, ebx
0x623673: call    edx
0x623675: test    al, al
0x623677: jnz     loc_6239BB
0x62367D: pop     ebx
0x62367E: pop     edi
0x62367F: mov     ecx, ebp
0x623681: pop     ebp
0x623682: pop     esi
0x623683: add     esp, 10h
0x623686: jmp     sub_5E02B0
0x62368B: mov     eax, [ebp+0]
0x62368E: mov     edx, [eax+330h]
0x623694: mov     ecx, ebp
0x623696: call    edx
0x623698: mov     edi, eax
0x62369A: mov     eax, [ebx]
0x62369C: mov     edx, [eax+40Ch]
0x6236A2: mov     ecx, ebx
0x6236A4: call    edx
0x6236A6: test    eax, eax
0x6236A8: jz      short loc_6236F6
0x6236AA: mov     eax, [ebx]
0x6236AC: mov     edx, [eax+40Ch]
0x6236B2: mov     ecx, ebx
0x6236B4: call    edx
0x6236B6: mov     edx, [eax]
0x6236B8: mov     ecx, eax
0x6236BA: mov     eax, [edx+2Ch]
0x6236BD: call    eax
0x6236BF: test    al, al
0x6236C1: jz      short loc_6236F6
0x6236C3: cmp     byte ptr ds:0B3B908h, 0
0x6236CA: jz      short loc_6236E1
0x6236CC: mov     ecx, ebp; this
0x6236CE: call    TESObjectREFR_GetName
0x6236D3: push    eax
0x6236D4: push    offset a_20sPathingFai; "%.20s pathing failed, entering combat a"...
0x6236D9: call    Interface_ConsolePrint
0x6236DE: add     esp, 8
0x6236E1: pop     ebx
0x6236E2: mov     ecx, edi
0x6236E4: pop     edi
0x6236E5: pop     ebp
0x6236E6: mov     byte ptr [esi+174h], 0
0x6236ED: pop     esi
0x6236EE: add     esp, 10h
0x6236F1: jmp     sub_620E50
0x6236F6: mov     edx, [ebx]
0x6236F8: mov     eax, [edx+0C8h]
0x6236FE: mov     ecx, ebx
0x623700: call    eax
0x623702: test    al, al
0x623704: jz      loc_62378B
0x62370A: cmp     [esp+20h+var_E], 0
0x62370F: jz      loc_623857
0x623715: mov     ecx, [ebp+58h]
0x623718: mov     edx, [ecx]
0x62371A: mov     eax, [edx+2C4h]
0x623720: push    1
0x623722: push    101h
0x623727: call    eax
0x623729: push    3
0x62372B: mov     ecx, edi
0x62372D: call    sub_619920
0x623732: push    3
0x623734: mov     ecx, ebp
0x623736: call    sub_5E5850
0x62373B: fld     dword ptr ds:0A3D65Ch
0x623741: fcom    st(1)
0x623743: fnstsw  ax
0x623745: fstp    st(1)
0x623747: test    ah, 5
0x62374A: jp      short loc_623757
0x62374C: push    3
0x62374E: fstp    st
0x623750: mov     ecx, ebp
0x623752: call    sub_5E5850
0x623757: fstp    [esp+20h+var_4]
0x62375B: push    9
0x62375D: fld     dword ptr [esi+44h]
0x623760: mov     ecx, edi
0x623762: fstp    dword ptr [edi+0F8h]
0x623768: fld     [esp+24h+var_4]
0x62376C: fstp    dword ptr [edi+0FCh]
0x623772: fld     dword ptr ds:0A30634h
0x623778: fstp    dword ptr [edi+100h]
0x62377E: call    sub_612DA0
0x623783: pop     ebx
0x623784: pop     edi
0x623785: pop     ebp
0x623786: pop     esi
0x623787: add     esp, 10h
0x62378A: retn
0x62378B: mov     ecx, ebp
0x62378D: call    Actor_IsBlocking
0x623792: test    al, al
0x623794: jz      short loc_62379F
0x623796: push    0; float
0x623798: mov     ecx, ebp
0x62379A: call    sub_5F4AE0
0x62379F: mov     eax, [edi+70h]
0x6237A2: cmp     eax, 2
0x6237A5: jz      short loc_6237AC
0x6237A7: cmp     eax, 4
0x6237AA: jnz     short loc_6237BB
0x6237AC: cmp     dword ptr [edi+74h], 0
0x6237B0: jnz     loc_6239BB
0x6237B6: jmp     loc_623857
0x6237BB: fld     [esp+20h+var_C]
0x6237BF: push    0; int
0x6237C1: sub     esp, 8
0x6237C4: fstp    [esp+2Ch+var_28]; float
0x6237C8: mov     ecx, edi
0x6237CA: fld     [esp+2Ch+var_8]
0x6237CE: fstp    [esp+2Ch+var_2C]; float
0x6237D1: call    sub_613440
0x6237D6: test    al, al
0x6237D8: jz      loc_623871
0x6237DE: cmp     byte ptr [edi+158h], 0
0x6237E5: jz      loc_623871
0x6237EB: cmp     [esp+20h+var_E], 0
0x6237F0: jz      short loc_623857
0x6237F2: mov     ecx, [ebp+58h]
0x6237F5: mov     edx, [ecx]
0x6237F7: mov     eax, [edx+2C4h]
0x6237FD: push    1
0x6237FF: push    101h
0x623804: call    eax
0x623806: push    3
0x623808: mov     ecx, edi
0x62380A: call    sub_619920
0x62380F: push    3
0x623811: mov     ecx, ebp
0x623813: call    sub_5E5850
0x623818: fld     dword ptr ds:0A3D65Ch
0x62381E: fcom    st(1)
0x623820: fnstsw  ax
0x623822: fstp    st(1)
0x623824: test    ah, 5
0x623827: jp      short loc_623834
0x623829: push    3
0x62382B: fstp    st
0x62382D: mov     ecx, ebp
0x62382F: call    sub_5E5850
0x623834: fstp    [esp+20h+var_4]
0x623838: fld     dword ptr [esi+44h]
0x62383B: fstp    dword ptr [edi+0F8h]
0x623841: fld     [esp+20h+var_4]
0x623845: fstp    dword ptr [edi+0FCh]
0x62384B: fld     dword ptr ds:0A30634h
0x623851: fstp    dword ptr [edi+100h]
0x623857: push    0
0x623859: mov     ecx, edi
0x62385B: call    sub_619920
0x623860: push    9
0x623862: mov     ecx, edi
0x623864: call    sub_612DA0
0x623869: pop     ebx
0x62386A: pop     edi
0x62386B: pop     ebp
0x62386C: pop     esi
0x62386D: add     esp, 10h
0x623870: retn
0x623871: cmp     dword ptr [edi+74h], 0
0x623875: jz      loc_62399B
0x62387B: fld     [esp+20h+var_C]
0x62387F: push    0; int
0x623881: fadd    st, st
0x623883: sub     esp, 8
0x623886: mov     ecx, edi
0x623888: fstp    [esp+2Ch+var_4]
0x62388C: fld     [esp+2Ch+var_4]
0x623890: fstp    [esp+2Ch+var_28]; float
0x623894: fld     [esp+2Ch+var_8]
0x623898: fstp    [esp+2Ch+var_2C]; float
0x62389B: call    sub_613440
0x6238A0: test    al, al
0x6238A2: jz      loc_62399B
0x6238A8: cmp     byte ptr [edi+158h], 0
0x6238AF: jz      loc_62399B
0x6238B5: mov     ecx, [edi+3Ch]; this
0x6238B8: call    Actor_IsNPC
0x6238BD: test    al, al
0x6238BF: jz      loc_62399B
0x6238C5: mov     ecx, [edi+70h]
0x6238C8: push    ecx
0x6238C9: call    sub_612670
0x6238CE: add     esp, 4
0x6238D1: test    al, al
0x6238D3: jz      loc_62399B
0x6238D9: mov     edx, [ebx]
0x6238DB: mov     eax, [edx+2DCh]
0x6238E1: mov     ecx, ebx
0x6238E3: call    eax
0x6238E5: test    al, al
0x6238E7: jz      loc_62399B
0x6238ED: push    0
0x6238EF: mov     ecx, edi
0x6238F1: call    sub_6135F0
0x6238F6: push    eax
0x6238F7: push    ebp
0x6238F8: call    sub_6131D0
0x6238FD: add     esp, 0Ch
0x623900: test    al, al
0x623902: jz      loc_6239BB
0x623908: mov     ecx, edi
0x62390A: call    sub_612D60
0x62390F: test    eax, eax
0x623911: jz      loc_6239BB
0x623917: mov     al, [eax+90h]
0x62391D: cmp     al, 5
0x62391F: jz      loc_6239BB
0x623925: cmp     al, 4
0x623927: jz      loc_6239BB
0x62392D: mov     ecx, offset unk_B36F68
0x623932: call    GameSetting_GetSafeFloatPointer
0x623937: fld     dword ptr [eax]
0x623939: fmul    qword ptr ds:0A309F0h
0x62393F: call    Double_To_SInt32
0x623944: push    0; Seed
0x623946: mov     ebx, eax
0x623948: call    GetRandomLargeInteger?
0x62394D: cdq
0x62394E: mov     ecx, 64h ; 'd'
0x623953: idiv    ecx
0x623955: add     esp, 4
0x623958: cmp     edx, ebx
0x62395A: jge     short loc_6239BB
0x62395C: mov     esi, [esi+3Ch]
0x62395F: mov     edx, ds:0B241C4h
0x623965: mov     eax, [esi]
0x623967: push    0; int
0x623969: push    edx; Str2
0x62396A: mov     edx, [eax+164h]
0x623970: push    0; MaxCount
0x623972: mov     ecx, esi
0x623974: call    edx
0x623976: mov     ecx, eax
0x623978: call    sub_4727E0
0x62397D: xor     ecx, ecx
0x62397F: cmp     al, 6Ch ; 'l'
0x623981: setnz   cl
0x623984: push    0
0x623986: add     ecx, 14h
0x623989: mov     eax, ecx
0x62398B: push    eax
0x62398C: mov     ecx, edi
0x62398E: call    sub_612BD0
0x623993: pop     ebx
0x623994: pop     edi
0x623995: pop     ebp
0x623996: pop     esi
0x623997: add     esp, 10h
0x62399A: retn
0x62399B: cmp     [esp+20h+var_D], 0
0x6239A0: jz      short loc_6239BB
0x6239A2: fld     [esp+20h+var_C]
0x6239A6: sub     esp, 8
0x6239A9: fstp    [esp+28h+var_24]; float
0x6239AD: mov     ecx, edi
0x6239AF: fld     [esp+28h+var_8]
0x6239B3: fstp    [esp+28h+var_28]; float
0x6239B6: call    sub_61E5A0
0x6239BB: pop     ebx
0x6239BC: pop     edi
0x6239BD: pop     ebp
0x6239BE: pop     esi
0x6239BF: add     esp, 10h
0x6239C2: retn
