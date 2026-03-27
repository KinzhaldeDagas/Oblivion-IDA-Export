0x652210: sub     esp, 10h
0x652213: push    ebx
0x652214: push    ebp
0x652215: push    esi
0x652216: mov     esi, ecx
0x652218: mov     eax, [esi]
0x65221A: mov     edx, [eax+184h]
0x652220: push    edi
0x652221: call    edx
0x652223: mov     edi, [esp+20h+arg_0]
0x652227: mov     ebx, eax
0x652229: mov     eax, [esi+2Ch]
0x65222C: test    eax, eax
0x65222E: mov     [esp+20h+var_10], ebx
0x652232: jz      short loc_65223E
0x652234: mov     eax, [eax+8]
0x652237: shr     eax, 5
0x65223A: test    al, 1
0x65223C: jz      short loc_65224B
0x65223E: mov     edx, [esi]
0x652240: mov     eax, [edx+558h]
0x652246: push    edi
0x652247: mov     ecx, esi
0x652249: call    eax
0x65224B: cmp     dword ptr [esi+2Ch], 0
0x65224F: jnz     short loc_65226C
0x652251: mov     edx, [esi]
0x652253: mov     eax, [edx+188h]
0x652259: push    1
0x65225B: push    edi
0x65225C: mov     ecx, esi
0x65225E: call    eax
0x652260: xor     al, al
0x652262: pop     edi
0x652263: pop     esi
0x652264: pop     ebp
0x652265: pop     ebx
0x652266: add     esp, 10h
0x652269: retn    8
0x65226C: push    edi
0x65226D: mov     ecx, ebx
0x65226F: call    sub_566D00
0x652274: mov     ebp, eax
0x652276: test    ebp, ebp
0x652278: jz      short loc_6522C8
0x65227A: mov     ecx, ebp
0x65227C: call    sub_4D74B0
0x652281: test    al, al
0x652283: jz      short loc_6522C8
0x652285: mov     ecx, [esi+2Ch]
0x652288: mov     edx, [ecx]
0x65228A: mov     eax, [edx+170h]
0x652290: call    eax
0x652292: cmp     eax, ds:0B35EB0h
0x652298: jz      short loc_6522AF
0x65229A: mov     ecx, [esi+2Ch]
0x65229D: mov     edx, [ecx]
0x65229F: mov     eax, [edx+170h]
0x6522A5: call    eax
0x6522A7: cmp     eax, ds:0B35EACh
0x6522AD: jnz     short loc_6522C8
0x6522AF: mov     edx, [esi]
0x6522B1: mov     eax, [edx+484h]
0x6522B7: push    ebp
0x6522B8: mov     ecx, esi
0x6522BA: call    eax
0x6522BC: mov     al, 1
0x6522BE: pop     edi
0x6522BF: pop     esi
0x6522C0: pop     ebp
0x6522C1: pop     ebx
0x6522C2: add     esp, 10h
0x6522C5: retn    8
0x6522C8: cmp     byte ptr [ebx+20h], 9
0x6522CC: jnz     short loc_652330
0x6522CE: push    edi
0x6522CF: lea     ecx, [esp+24h+var_C]
0x6522D3: push    ecx
0x6522D4: mov     ecx, ebx
0x6522D6: call    sub_566B30
0x6522DB: mov     ecx, [esi+2Ch]
0x6522DE: push    eax
0x6522DF: call    sub_4D7E30
0x6522E4: call    Double_To_SInt32
0x6522E9: mov     [esp+20h+arg_0], eax
0x6522ED: fild    [esp+20h+arg_0]
0x6522F1: mov     ecx, ebx
0x6522F3: fstp    [esp+20h+arg_0]
0x6522F7: call    sub_566DB0
0x6522FC: test    eax, eax
0x6522FE: mov     dword ptr [esp+20h+var_C], eax
0x652302: fild    dword ptr [esp+20h+var_C]
0x652306: jge     short loc_65230E
0x652308: fadd    dword ptr ds:0A2FC78h
0x65230E: fadd    qword ptr ds:0A3DDE0h
0x652314: fld     [esp+20h+arg_0]
0x652318: fcompp
0x65231A: fnstsw  ax
0x65231C: test    ah, 41h
0x65231F: jnz     short loc_652330
0x652321: mov     edx, [esi]
0x652323: mov     eax, [edx+188h]
0x652329: push    0FFFFFFFFh
0x65232B: push    edi
0x65232C: mov     ecx, esi
0x65232E: call    eax
0x652330: mov     ecx, [esi+2Ch]; this
0x652333: call    GetTeleportExtraData
0x652338: test    eax, eax
0x65233A: jz      short loc_6523B8
0x65233C: mov     edx, [edi]
0x65233E: mov     eax, [edx+174h]
0x652344: mov     ecx, edi
0x652346: call    eax
0x652348: mov     ecx, [esi+2Ch]
0x65234B: mov     ebp, eax
0x65234D: call    sub_4D76F0
0x652352: fld     dword ptr [eax]
0x652354: fsub    dword ptr [ebp+0]
0x652357: fstp    dword ptr [esp+20h+var_C]
0x65235B: fld     dword ptr [eax+4]
0x65235E: fsub    dword ptr [ebp+4]
0x652361: fstp    dword ptr [esp+20h+var_C+4]
0x652365: fld     dword ptr [eax+8]
0x652368: fsub    dword ptr [ebp+8]
0x65236B: fstp    [esp+20h+var_4]
0x65236F: fld     dword ptr [esp+20h+var_C]
0x652373: fld     dword ptr [esp+20h+var_C+4]
0x652377: fld     [esp+20h+var_4]
0x65237B: fld     st(1)
0x65237D: fmulp   st(2), st
0x65237F: fld     st(2)
0x652381: fmulp   st(3), st
0x652383: fxch    st(1)
0x652385: faddp   st(2), st
0x652387: fmul    st, st
0x652389: faddp   st(1), st
0x65238B: fstp    [esp+20h+arg_0]
0x65238F: fld     [esp+20h+arg_0]
0x652393: call    __CIsqrt
0x652398: fstp    [esp+20h+arg_0]
0x65239C: fld     [esp+20h+arg_0]
0x6523A0: fild    dword ptr ds:0B36B28h
0x6523A6: fcompp
0x6523A8: fnstsw  ax
0x6523AA: test    ah, 1
0x6523AD: jnz     loc_65248E
0x6523B3: jmp     loc_6527AC
0x6523B8: mov     ecx, [esi+2Ch]
0x6523BB: call    sub_4D74B0
0x6523C0: test    al, al
0x6523C2: jz      short loc_6523D8
0x6523C4: mov     edx, [esi]
0x6523C6: mov     eax, [edx+36Ch]
0x6523CC: mov     ecx, esi
0x6523CE: call    eax
0x6523D0: test    eax, eax
0x6523D2: jnz     loc_6527AC
0x6523D8: mov     ecx, [esi+2Ch]
0x6523DB: call    sub_4D74B0
0x6523E0: test    al, al
0x6523E2: jz      loc_65247E
0x6523E8: mov     edx, [esi]
0x6523EA: mov     eax, [edx+36Ch]
0x6523F0: mov     ecx, esi
0x6523F2: call    eax
0x6523F4: test    eax, eax
0x6523F6: jnz     loc_65247E
0x6523FC: movzx   ecx, byte ptr [esi+124h]
0x652403: push    ecx
0x652404: mov     ecx, [esi+2Ch]
0x652407: call    sub_4D72C0
0x65240C: test    al, al
0x65240E: jz      short loc_65247E
0x652410: cmp     byte ptr [esi+0D0h], 0
0x652417: jnz     short loc_65247E
0x652419: fldz
0x65241B: push    ecx
0x65241C: lea     ebp, [esi+128h]
0x652422: fstp    [esp+24h+var_24]; float
0x652425: mov     ecx, ebp
0x652427: mov     dword ptr [esi+120h], 0
0x652431: call    sub_6FAEE0
0x652436: mov     byte ptr [esi+136h], 0
0x65243D: mov     edx, ds:0B3F9A8h
0x652443: mov     [ebp+0], edx
0x652446: mov     eax, ds:0B3F9ACh
0x65244B: mov     edx, [esi]
0x65244D: mov     [ebp+4], eax
0x652450: mov     ecx, ds:0B3F9B0h
0x652456: mov     eax, [edx+194h]
0x65245C: mov     [ebp+8], ecx
0x65245F: push    edi
0x652460: mov     ecx, esi
0x652462: mov     byte ptr [esi+124h], 7Fh
0x652469: call    eax
0x65246B: mov     dword ptr [esi+2Ch], 0
0x652472: xor     al, al
0x652474: pop     edi
0x652475: pop     esi
0x652476: pop     ebp
0x652477: pop     ebx
0x652478: add     esp, 10h
0x65247B: retn    8
0x65247E: push    edi
0x65247F: mov     ecx, ebx
0x652481: call    sub_5687D0
0x652486: test    al, al
0x652488: jnz     loc_6527AC
0x65248E: mov     ecx, [esi+34h]
0x652491: test    ecx, ecx
0x652493: jz      short loc_6524A4
0x652495: mov     edx, [ecx]
0x652497: mov     eax, [edx+2Ch]
0x65249A: call    eax
0x65249C: test    al, al
0x65249E: jnz     loc_652792
0x6524A4: mov     edx, [edi]
0x6524A6: mov     eax, [edx+380h]
0x6524AC: mov     ecx, edi
0x6524AE: call    eax
0x6524B0: test    eax, eax
0x6524B2: jnz     short loc_6524EE
0x6524B4: mov     edx, [esi]
0x6524B6: mov     eax, [edx+36Ch]
0x6524BC: mov     ecx, esi
0x6524BE: call    eax
0x6524C0: cmp     eax, 4
0x6524C3: jz      short loc_6524D6
0x6524C5: mov     edx, [esi]
0x6524C7: mov     eax, [edx+36Ch]
0x6524CD: mov     ecx, esi
0x6524CF: call    eax
0x6524D1: cmp     eax, 9
0x6524D4: jnz     short loc_6524EE
0x6524D6: mov     edx, [edi]
0x6524D8: mov     eax, [edx+320h]
0x6524DE: mov     ecx, edi
0x6524E0: call    eax
0x6524E2: mov     al, 1
0x6524E4: pop     edi
0x6524E5: pop     esi
0x6524E6: pop     ebp
0x6524E7: pop     ebx
0x6524E8: add     esp, 10h
0x6524EB: retn    8
0x6524EE: cmp     byte ptr [esi+0D0h], 0
0x6524F5: jz      loc_6526A8
0x6524FB: mov     ecx, [esi+2Ch]; this
0x6524FE: call    GetTeleportExtraData
0x652503: test    eax, eax
0x652505: mov     ecx, [esi+2Ch]
0x652508: jnz     short loc_65255D
0x65250A: mov     edx, [ecx]
0x65250C: mov     eax, [edx+174h]
0x652512: mov     ebx, [esi]
0x652514: call    eax
0x652516: mov     ecx, [esi+2Ch]; this
0x652519: mov     ebp, eax
0x65251B: call    TESObjectREFR_GetWorldSpace
0x652520: mov     ecx, [esi+2Ch]; this
0x652523: push    eax
0x652524: call    TESObjectREFR_GetParentCell
0x652529: mov     ecx, [ebp+0]
0x65252C: mov     edx, [ebp+4]
0x65252F: push    eax
0x652530: sub     esp, 0Ch
0x652533: mov     eax, esp
0x652535: mov     [eax], ecx
0x652537: mov     ecx, [ebp+8]
0x65253A: mov     [eax+4], edx
0x65253D: mov     edx, [ebx+3DCh]
0x652543: mov     [eax+8], ecx
0x652546: push    edi
0x652547: mov     ecx, esi
0x652549: call    edx
0x65254B: test    al, al
0x65254D: jnz     loc_65269B
0x652553: pop     edi
0x652554: pop     esi
0x652555: pop     ebp
0x652556: pop     ebx
0x652557: add     esp, 10h
0x65255A: retn    8
0x65255D: call    sub_4D74B0
0x652562: test    al, al
0x652564: jz      loc_652654
0x65256A: mov     eax, [edi]
0x65256C: mov     edx, [eax+174h]
0x652572: mov     ecx, edi
0x652574: call    edx
0x652576: mov     ecx, [eax]
0x652578: mov     dword ptr [esp+20h+var_C], ecx
0x65257C: mov     edx, [eax+4]
0x65257F: lea     ecx, [esp+20h+arg_0]
0x652583: push    ecx
0x652584: mov     ecx, [esi+2Ch]
0x652587: lea     ebp, [esi+128h]
0x65258D: push    ebp
0x65258E: push    1
0x652590: mov     dword ptr [esp+2Ch+var_C+4], edx
0x652594: mov     eax, [eax+8]
0x652597: push    1
0x652599: lea     edx, [esp+30h+var_C]
0x65259D: xor     ebx, ebx
0x65259F: push    edx
0x6525A0: mov     [esp+34h+var_4], eax
0x6525A4: mov     [esp+34h+arg_0], ebx
0x6525A8: call    sub_4DBAE0
0x6525AD: test    al, al
0x6525AF: jz      short loc_6525FD
0x6525B1: mov     ecx, [esi+2Ch]; this
0x6525B4: mov     ebx, [esi]
0x6525B6: call    TESObjectREFR_GetWorldSpace
0x6525BB: mov     ecx, [esi+2Ch]; this
0x6525BE: push    eax
0x6525BF: call    TESObjectREFR_GetParentCell
0x6525C4: mov     ecx, [ebp+0]
0x6525C7: mov     edx, [ebp+4]
0x6525CA: push    eax
0x6525CB: sub     esp, 0Ch
0x6525CE: mov     eax, esp
0x6525D0: mov     [eax], ecx
0x6525D2: mov     ecx, [ebp+8]
0x6525D5: mov     [eax+4], edx
0x6525D8: mov     edx, [ebx+3DCh]
0x6525DE: mov     [eax+8], ecx
0x6525E1: push    edi
0x6525E2: mov     ecx, esi
0x6525E4: call    edx
0x6525E6: test    al, al
0x6525E8: jz      loc_6529EC
0x6525EE: mov     al, byte ptr [esp+20h+arg_0]
0x6525F2: mov     [esi+124h], al
0x6525F8: jmp     loc_65269B
0x6525FD: fldz
0x6525FF: push    ecx
0x652600: mov     ecx, ebp
0x652602: fstp    [esp+24h+var_24]; float
0x652605: mov     [esi+120h], ebx
0x65260B: call    sub_6FAEE0
0x652610: mov     byte ptr [esi+136h], 0
0x652617: mov     ecx, ds:0B3F9A8h
0x65261D: mov     [ebp+0], ecx
0x652620: mov     edx, ds:0B3F9ACh
0x652626: mov     [ebp+4], edx
0x652629: mov     eax, ds:0B3F9B0h
0x65262E: mov     edx, [esi]
0x652630: mov     [ebp+8], eax
0x652633: mov     eax, [edx+194h]
0x652639: push    edi
0x65263A: mov     ecx, esi
0x65263C: mov     byte ptr [esi+124h], 7Fh
0x652643: call    eax
0x652645: mov     [esi+2Ch], ebx
0x652648: xor     al, al
0x65264A: pop     edi
0x65264B: pop     esi
0x65264C: pop     ebp
0x65264D: pop     ebx
0x65264E: add     esp, 10h
0x652651: retn    8
0x652654: mov     ecx, [esi+2Ch]
0x652657: mov     ebx, [esi]
0x652659: call    sub_4D76F0
0x65265E: mov     ecx, [esi+2Ch]; this
0x652661: mov     ebp, eax
0x652663: call    TESObjectREFR_GetWorldSpace
0x652668: mov     ecx, [esi+2Ch]; this
0x65266B: push    eax
0x65266C: call    TESObjectREFR_GetParentCell
0x652671: mov     ecx, [ebp+0]
0x652674: mov     edx, [ebp+4]
0x652677: push    eax
0x652678: sub     esp, 0Ch
0x65267B: mov     eax, esp
0x65267D: mov     [eax], ecx
0x65267F: mov     ecx, [ebp+8]
0x652682: mov     [eax+4], edx
0x652685: mov     edx, [ebx+3DCh]
0x65268B: mov     [eax+8], ecx
0x65268E: push    edi
0x65268F: mov     ecx, esi
0x652691: call    edx
0x652693: test    al, al
0x652695: jz      loc_6529EC
0x65269B: cmp     byte ptr [esi+0D0h], 0
0x6526A2: jnz     loc_652792
0x6526A8: push    3Ah ; ':'; a1
0x6526AA: call    TESForm_LookupByFormID
0x6526AF: add     esp, 4
0x6526B2: mov     ecx, offset TimeGlobals
0x6526B7: mov     ebx, eax
0x6526B9: call    TimeGlobals_GetGameHour
0x6526BE: fstp    [esp+20h+arg_0]
0x6526C2: fld     [esp+20h+arg_0]
0x6526C6: mov     ecx, edi; this
0x6526C8: fstp    [esp+20h+var_C]
0x6526CC: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x6526D1: fcomp   [esp+20h+var_C]
0x6526D5: fnstsw  ax
0x6526D7: test    ah, 41h
0x6526DA: jnz     short loc_6526EA
0x6526DC: fld     [esp+20h+arg_0]
0x6526E0: fadd    qword ptr ds:0A2F920h
0x6526E6: fstp    [esp+20h+arg_0]
0x6526EA: fld     [esp+20h+arg_0]
0x6526EE: mov     ecx, edi; this
0x6526F0: fstp    [esp+20h+var_C]
0x6526F4: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x6526F9: fsubr   [esp+20h+var_C]
0x6526FD: mov     ecx, [esp+20h+var_10]
0x652701: mov     ebp, [esi+2Ch]
0x652704: push    2
0x652706: fstp    dword ptr [esp+24h+var_C]
0x65270A: push    edi
0x65270B: fld     dword ptr [ebx+24h]
0x65270E: mov     ebx, [esi]
0x652710: fstp    [esp+28h+arg_0]
0x652714: call    sub_5677B0
0x652719: sub     esp, 8
0x65271C: fstp    [esp+28h+var_24]
0x652720: mov     ecx, [esi+2Ch]; this
0x652723: fld     [esp+28h+arg_0]
0x652727: fdivr   qword ptr ds:0A2F938h
0x65272D: fmul    dword ptr [esp+28h+var_C]
0x652731: fstp    [esp+28h+arg_0]
0x652735: fld     [esp+28h+arg_0]
0x652739: fstp    [esp+28h+var_28]
0x65273C: call    TESObjectREFR_GetWorldSpace
0x652741: mov     ecx, [esi+2Ch]; this
0x652744: push    eax
0x652745: call    TESObjectREFR_GetParentCell
0x65274A: push    eax
0x65274B: mov     eax, [ebp+0]
0x65274E: mov     edx, [eax+174h]
0x652754: mov     ecx, ebp
0x652756: call    edx
0x652758: push    eax
0x652759: mov     eax, [ebx+418h]
0x65275F: push    edi
0x652760: mov     ecx, esi
0x652762: call    eax
0x652764: mov     ecx, edi; this
0x652766: call    Actor__GetProcessLevel
0x65276B: cmp     eax, 1
0x65276E: jnz     loc_6529EC
0x652774: mov     ecx, edi
0x652776: call    MobileObject_GetProcessLevel
0x65277B: cmp     eax, 1
0x65277E: jnz     loc_6529EC
0x652784: mov     ecx, [esp+20h+var_10]
0x652788: push    edi
0x652789: call    sub_5687D0
0x65278E: test    al, al
0x652790: jnz     short loc_6527AC
0x652792: mov     ecx, [esi+34h]
0x652795: test    ecx, ecx
0x652797: jz      loc_6529EC
0x65279D: mov     edx, [ecx]
0x65279F: mov     eax, [edx+2Ch]
0x6527A2: call    eax
0x6527A4: test    al, al
0x6527A6: jz      loc_6529EC
0x6527AC: cmp     byte ptr [esi+0D0h], 0
0x6527B3: jnz     short loc_6527C2
0x6527B5: mov     edx, [esi]
0x6527B7: mov     eax, [edx+194h]
0x6527BD: push    edi
0x6527BE: mov     ecx, esi
0x6527C0: call    eax
0x6527C2: mov     ecx, [esi+8]
0x6527C5: cmp     byte ptr [ecx+20h], 12h
0x6527C9: jnz     short loc_6527F5
0x6527CB: mov     ecx, [esi+34h]
0x6527CE: test    ecx, ecx
0x6527D0: jz      short loc_6527F5
0x6527D2: mov     edx, [ecx]
0x6527D4: mov     eax, [edx+2Ch]
0x6527D7: call    eax
0x6527D9: test    al, al
0x6527DB: jz      short loc_6527F5
0x6527DD: mov     edx, [edi]
0x6527DF: mov     eax, [edx+30Ch]
0x6527E5: mov     ecx, edi
0x6527E7: call    eax
0x6527E9: xor     al, al
0x6527EB: pop     edi
0x6527EC: pop     esi
0x6527ED: pop     ebp
0x6527EE: pop     ebx
0x6527EF: add     esp, 10h
0x6527F2: retn    8
0x6527F5: cmp     [esp+20h+arg_4], 0
0x6527FA: mov     ebx, [esi+2Ch]
0x6527FD: mov     ecx, [esi+34h]
0x652800: jz      loc_652941
0x652806: test    ecx, ecx
0x652808: jz      short loc_652815
0x65280A: mov     edx, [ecx]
0x65280C: mov     eax, [edx+2Ch]
0x65280F: call    eax
0x652811: test    al, al
0x652813: jnz     short loc_652833
0x652815: mov     ecx, [esp+20h+var_10]
0x652819: mov     edx, [ecx+1Ch]
0x65281C: shr     edx, 2
0x65281F: test    dl, 1
0x652822: jnz     short loc_652833
0x652824: mov     eax, [esi]
0x652826: mov     edx, [eax+188h]
0x65282C: push    1
0x65282E: push    edi
0x65282F: mov     ecx, esi
0x652831: call    edx
0x652833: mov     ecx, [esi+34h]
0x652836: test    ecx, ecx
0x652838: jz      short loc_652849
0x65283A: mov     eax, [ecx]
0x65283C: mov     edx, [eax+2Ch]
0x65283F: call    edx
0x652841: test    al, al
0x652843: jnz     loc_6529A7
0x652849: mov     ecx, [esi+2Ch]
0x65284C: call    sub_4D74B0
0x652851: test    al, al
0x652853: jz      loc_6528E1
0x652859: mov     eax, [esi]
0x65285B: mov     edx, [eax+36Ch]
0x652861: mov     ecx, esi
0x652863: call    edx
0x652865: cmp     eax, 4
0x652868: jz      short loc_6528B8
0x65286A: mov     eax, [esi]
0x65286C: mov     edx, [eax+36Ch]
0x652872: mov     ecx, esi
0x652874: call    edx
0x652876: cmp     eax, 9
0x652879: jz      short loc_6528B8
0x65287B: mov     eax, [esi]
0x65287D: mov     edx, [eax+1B4h]
0x652883: push    edi
0x652884: mov     ecx, esi
0x652886: call    edx
0x652888: test    al, al
0x65288A: jnz     loc_6529A7
0x652890: mov     eax, [esi]
0x652892: mov     edx, [eax+188h]
0x652898: push    1
0x65289A: push    edi
0x65289B: mov     ecx, esi
0x65289D: call    edx
0x65289F: mov     eax, [esi]
0x6528A1: mov     edx, [eax+194h]
0x6528A7: push    edi
0x6528A8: mov     ecx, esi
0x6528AA: call    edx
0x6528AC: mov     al, 1
0x6528AE: pop     edi
0x6528AF: pop     esi
0x6528B0: pop     ebp
0x6528B1: pop     ebx
0x6528B2: add     esp, 10h
0x6528B5: retn    8
0x6528B8: mov     eax, [esi]
0x6528BA: mov     edx, [eax+188h]
0x6528C0: push    1
0x6528C2: push    edi
0x6528C3: mov     ecx, esi
0x6528C5: call    edx
0x6528C7: mov     eax, [esi]
0x6528C9: mov     edx, [eax+394h]
0x6528CF: push    1
0x6528D1: mov     ecx, esi
0x6528D3: call    edx
0x6528D5: mov     al, 1
0x6528D7: pop     edi
0x6528D8: pop     esi
0x6528D9: pop     ebp
0x6528DA: pop     ebx
0x6528DB: add     esp, 10h
0x6528DE: retn    8
0x6528E1: mov     eax, [esi+44h]
0x6528E4: test    eax, eax
0x6528E6: mov     ecx, [esi+2Ch]
0x6528E9: jz      short loc_6528F8
0x6528EB: mov     eax, [eax+4]
0x6528EE: push    1
0x6528F0: push    eax
0x6528F1: push    1
0x6528F3: jmp     loc_6529A1
0x6528F8: mov     edx, [ecx]
0x6528FA: mov     eax, [edx+190h]
0x652900: call    eax
0x652902: test    al, al
0x652904: jnz     loc_6529A7
0x65290A: mov     ecx, [esi+2Ch]
0x65290D: push    1
0x65290F: push    0
0x652911: push    1
0x652913: push    edi
0x652914: call    ActivateRef
0x652919: test    al, al
0x65291B: jnz     loc_6529A7
0x652921: mov     ecx, [esp+20h+var_10]
0x652925: mov     edx, [ecx+1Ch]
0x652928: shr     edx, 2
0x65292B: test    dl, 1
0x65292E: jz      short loc_6529A7
0x652930: mov     eax, [esi]
0x652932: mov     edx, [eax+188h]
0x652938: push    0FFFFFFFFh
0x65293A: push    edi
0x65293B: mov     ecx, esi
0x65293D: call    edx
0x65293F: jmp     short loc_6529A7
0x652941: test    ecx, ecx
0x652943: jz      short loc_652950
0x652945: mov     eax, [ecx]
0x652947: mov     edx, [eax+2Ch]
0x65294A: call    edx
0x65294C: test    al, al
0x65294E: jnz     short loc_6529A7
0x652950: mov     ecx, [esi+2Ch]
0x652953: call    sub_4D74B0
0x652958: test    al, al
0x65295A: jz      short loc_65298B
0x65295C: mov     eax, [esi]
0x65295E: mov     edx, [eax+36Ch]
0x652964: mov     ecx, esi
0x652966: call    edx
0x652968: cmp     eax, 4
0x65296B: jz      loc_6528C7
0x652971: mov     eax, [esi]
0x652973: mov     edx, [eax+36Ch]
0x652979: mov     ecx, esi
0x65297B: call    edx
0x65297D: cmp     eax, 9
0x652980: jz      loc_6528C7
0x652986: jmp     loc_65287B
0x65298B: mov     eax, [esi+44h]
0x65298E: test    eax, eax
0x652990: mov     ecx, [esi+2Ch]
0x652993: push    1
0x652995: jz      short loc_65299D
0x652997: mov     eax, [eax+4]
0x65299A: push    eax
0x65299B: jmp     short loc_65299F
0x65299D: push    0
0x65299F: push    0
0x6529A1: push    edi
0x6529A2: call    ActivateRef
0x6529A7: test    ebx, ebx
0x6529A9: jz      short loc_6529B2
0x6529AB: mov     ecx, ebx
0x6529AD: call    RunScripts
0x6529B2: mov     eax, [esi+44h]
0x6529B5: test    eax, eax
0x6529B7: jz      short loc_6529C2
0x6529B9: push    eax
0x6529BA: call    FormHeapFree
0x6529BF: add     esp, 4
0x6529C2: mov     dword ptr [esi+44h], 0
0x6529C9: mov     dword ptr [esi+2Ch], 0
0x6529D0: mov     esi, [esi+34h]
0x6529D3: test    esi, esi
0x6529D5: jz      loc_6522BC
0x6529DB: mov     edx, [esi]
0x6529DD: mov     eax, [edx+2Ch]
0x6529E0: mov     ecx, esi
0x6529E2: call    eax
0x6529E4: test    al, al
0x6529E6: jz      loc_6522BC
0x6529EC: pop     edi
0x6529ED: pop     esi
0x6529EE: pop     ebp
0x6529EF: xor     al, al
0x6529F1: pop     ebx
0x6529F2: add     esp, 10h
0x6529F5: retn    8
