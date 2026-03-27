0x5273A0: push    0FFFFFFFFh
0x5273A2: push    offset SEH_5273A0
0x5273A7: mov     eax, large fs:0
0x5273AD: push    eax
0x5273AE: sub     esp, 0CCh
0x5273B4: push    esi
0x5273B5: push    edi
0x5273B6: mov     eax, ds:0B30AACh
0x5273BB: xor     eax, esp
0x5273BD: push    eax
0x5273BE: lea     eax, [esp+0E4h+var_C]
0x5273C5: mov     large fs:0, eax
0x5273CB: mov     esi, ecx
0x5273CD: push    offset sub_43ACE0; a5
0x5273D2: push    offset sub_43EB30; a4
0x5273D7: push    4; size
0x5273D9: push    18h; a2
0x5273DB: lea     eax, [esp+0F4h+a1]
0x5273DF: push    eax; a1
0x5273E0: call    ArrayConstructor
0x5273E5: push    offset sub_43ACE0; a5
0x5273EA: push    offset sub_43EB30; a4
0x5273EF: push    4; size
0x5273F1: push    18h; a2
0x5273F3: lea     ecx, [esp+0F4h+var_6C]
0x5273FA: push    ecx; a1
0x5273FB: mov     [esp+0F8h+var_4], 0
0x527406: call    ArrayConstructor
0x52740B: lea     edx, [esp+0E4h+var_6C]
0x52740F: push    edx
0x527410: mov     byte ptr [esp+0E8h+var_4], 1
0x527418: call    sub_552880
0x52741D: fld     dword ptr ds:0B362D4h
0x527423: mov     eax, [esi+0E8h]
0x527429: add     esp, 4
0x52742C: lea     ecx, [esp+0E4h+a1]
0x527430: push    ecx; int
0x527431: add     eax, 29Ch
0x527436: push    eax; int
0x527437: push    ecx
0x527438: fstp    [esp+0F0h+var_F0]; float
0x52743B: call    sub_553B70
0x527440: push    0
0x527442: lea     edx, [esp+0F4h+a1]
0x527446: push    0
0x527448: push    edx
0x527449: call    BSFaceGen_GetAge
0x52744E: fstp    [esp+0FCh+var_D0]
0x527452: push    1
0x527454: lea     eax, [esp+100h+a1]
0x527458: push    0
0x52745A: push    eax
0x52745B: call    BSFaceGen_GetAge
0x527460: fstp    [esp+108h+var_D8]
0x527464: fld     qword ptr ds:0A492F0h
0x52746A: add     esp, 24h
0x52746D: cmp     [esp+0E4h+arg_0], 0
0x527475: jz      short loc_52747D
0x527477: fld     [esp+0E4h+var_D0]
0x52747B: jmp     short loc_5274A7
0x52747D: push    0; Seed
0x52747F: fstp    st
0x527481: call    GetRandomLargeInteger?
0x527486: mov     [esp+0E8h+var_D4], eax
0x52748A: fild    [esp+0E8h+var_D4]
0x52748E: add     esp, 4
0x527491: fdiv    qword ptr ds:0A3D5A8h
0x527497: fmul    qword ptr ds:0A3F3D0h
0x52749D: fld     qword ptr ds:0A492F0h
0x5274A3: fadd    st(1), st
0x5274A5: fxch    st(1)
0x5274A7: fstp    [esp+0E4h+var_D4]
0x5274AB: fld     [esp+0E4h+var_D0]
0x5274AF: fld     [esp+0E4h+var_D4]
0x5274B3: fld     st
0x5274B5: fsubp   st(2), st
0x5274B7: fxch    st(1)
0x5274B9: fsubr   [esp+0E4h+var_D8]
0x5274BD: fstp    [esp+0E4h+var_D0]
0x5274C1: fcom    st(1)
0x5274C3: fnstsw  ax
0x5274C5: fld     dword ptr ds:0A468FCh
0x5274CB: test    ah, 41h
0x5274CE: fld     dword ptr ds:0A47800h
0x5274D4: jnz     short loc_5274DF
0x5274D6: fcom    st(2)
0x5274D8: fnstsw  ax
0x5274DA: test    ah, 41h
0x5274DD: jnz     short loc_527525
0x5274DF: fxch    st(2)
0x5274E1: fcom    st(3)
0x5274E3: fnstsw  ax
0x5274E5: test    ah, 41h
0x5274E8: jz      short loc_5274F4
0x5274EA: fstp    st
0x5274EC: fst     [esp+0E4h+var_D4]
0x5274F0: fld     [esp+0E4h+var_D4]
0x5274F4: fxch    st(1)
0x5274F6: fxch    st(2)
0x5274F8: fxch    st(1)
0x5274FA: fld     [esp+0E4h+var_D0]
0x5274FE: fcom    st(4)
0x527500: fnstsw  ax
0x527502: test    ah, 41h
0x527505: jnz     short loc_527510
0x527507: fcom    st(2)
0x527509: fnstsw  ax
0x52750B: test    ah, 5
0x52750E: jp      short loc_527533
0x527510: fstp    st(2)
0x527512: fxch    st(1)
0x527514: fcomp   st(3)
0x527516: fnstsw  ax
0x527518: fstp    st(2)
0x52751A: test    ah, 41h
0x52751D: jz      short loc_52753F
0x52751F: fstp    [esp+0E4h+var_D0]
0x527523: jmp     short loc_527541
0x527525: fstp    st(2)
0x527527: fxch    st(1)
0x527529: fst     [esp+0E4h+var_D4]
0x52752D: fld     [esp+0E4h+var_D4]
0x527531: jmp     short loc_5274FA
0x527533: fstp    st(4)
0x527535: fstp    st(3)
0x527537: fstp    st(1)
0x527539: fstp    [esp+0E4h+var_D0]
0x52753D: jmp     short loc_527541
0x52753F: fstp    st
0x527541: push    ecx
0x527542: fstp    [esp+0E8h+var_E8]; float
0x527545: push    0; int
0x527547: lea     ecx, [esp+0ECh+a1]
0x52754B: push    0; int
0x52754D: push    ecx; int
0x52754E: call    sub_555A00
0x527553: fld     [esp+0F4h+var_D0]
0x527557: add     esp, 0Ch
0x52755A: fstp    [esp+0E8h+var_E8]; float
0x52755D: push    1; int
0x52755F: lea     edx, [esp+0ECh+a1]
0x527563: push    0; int
0x527565: push    edx; int
0x527566: call    sub_555A00
0x52756B: add     esp, 10h
0x52756E: mov     ecx, esi
0x527570: call    TESActorBase_IsFemale
0x527575: test    eax, eax
0x527577: jnz     short loc_527581
0x527579: fld     dword ptr ds:0A53954h
0x52757F: jmp     short loc_527587
0x527581: fld     dword ptr ds:0A379B4h
0x527587: push    0
0x527589: fstp    [esp+0E8h+var_D8]
0x52758D: lea     eax, [esp+0E8h+a1]
0x527591: push    1
0x527593: push    eax
0x527594: call    BSFaceGen_GetAge
0x527599: fsub    [esp+0F0h+var_D8]
0x52759D: add     esp, 0Ch
0x5275A0: mov     ecx, esi
0x5275A2: fstp    [esp+0E4h+var_D0]
0x5275A6: call    TESActorBase_IsFemale
0x5275AB: test    eax, eax
0x5275AD: jnz     short loc_5275B7
0x5275AF: fld     dword ptr ds:0A53954h
0x5275B5: jmp     short loc_5275BD
0x5275B7: fld     dword ptr ds:0A379B4h
0x5275BD: push    1
0x5275BF: fstp    [esp+0E8h+var_D8]
0x5275C3: lea     ecx, [esp+0E8h+a1]
0x5275C7: push    1
0x5275C9: push    ecx
0x5275CA: call    BSFaceGen_GetAge
0x5275CF: fsub    [esp+0F0h+var_D8]
0x5275D3: add     esp, 0Ch
0x5275D6: cmp     byte ptr [esp+0E4h+arg_4], 0
0x5275DE: fstp    [esp+0E4h+var_D8]
0x5275E2: jz      short loc_5275FA
0x5275E4: fld     [esp+0E4h+var_D0]
0x5275E8: fstp    [esp+0E4h+var_D4]
0x5275EC: fld     [esp+0E4h+var_D8]
0x5275F0: fstp    [esp+0E4h+var_D0]
0x5275F4: fld     [esp+0E4h+var_D4]
0x5275F8: jmp     short loc_527638
0x5275FA: push    0; Seed
0x5275FC: call    GetRandomLargeInteger?
0x527601: mov     [esp+0E8h+var_D4], eax
0x527605: fild    [esp+0E8h+var_D4]
0x527609: add     esp, 4
0x52760C: fdiv    qword ptr ds:0A3D5A8h
0x527612: fmul    qword ptr ds:0A3C800h
0x527618: fsub    qword ptr ds:0A3D0C0h
0x52761E: fstp    [esp+0E4h+var_D4]
0x527622: fld     [esp+0E4h+var_D0]
0x527626: fld     [esp+0E4h+var_D4]
0x52762A: fld     st
0x52762C: fsubp   st(2), st
0x52762E: fxch    st(1)
0x527630: fsubr   [esp+0E4h+var_D8]
0x527634: fstp    [esp+0E4h+var_D0]
0x527638: fld     dword ptr ds:0A53954h
0x52763E: fcom    st(1)
0x527640: fnstsw  ax
0x527642: fld     dword ptr ds:0A379B4h
0x527648: test    ah, 5
0x52764B: jp      short loc_527656
0x52764D: fcom    st(2)
0x52764F: fnstsw  ax
0x527651: test    ah, 41h
0x527654: jnz     short loc_527667
0x527656: fxch    st(2)
0x527658: fcomp   st(1)
0x52765A: fnstsw  ax
0x52765C: test    ah, 41h
0x52765F: jz      short loc_527671
0x527661: fst     [esp+0E4h+var_D4]
0x527665: jmp     short loc_527671
0x527667: fstp    st(2)
0x527669: fxch    st(1)
0x52766B: fst     [esp+0E4h+var_D4]
0x52766F: fxch    st(1)
0x527671: fld     [esp+0E4h+var_D0]
0x527675: fcom    st(1)
0x527677: fnstsw  ax
0x527679: test    ah, 41h
0x52767C: jnz     short loc_527687
0x52767E: fcom    st(2)
0x527680: fnstsw  ax
0x527682: test    ah, 5
0x527685: jp      short loc_52769A
0x527687: fstp    st(2)
0x527689: fcom    st(1)
0x52768B: fnstsw  ax
0x52768D: fstp    st(1)
0x52768F: test    ah, 5
0x527692: jnp     short loc_5276A4
0x527694: fstp    [esp+0E4h+var_D0]
0x527698: jmp     short loc_5276A6
0x52769A: fstp    st
0x52769C: fstp    st
0x52769E: fstp    [esp+0E4h+var_D0]
0x5276A2: jmp     short loc_5276A6
0x5276A4: fstp    st
0x5276A6: mov     ecx, esi
0x5276A8: call    TESActorBase_IsFemale
0x5276AD: test    eax, eax
0x5276AF: jnz     short loc_5276B9
0x5276B1: fld     dword ptr ds:0A53954h
0x5276B7: jmp     short loc_5276BF
0x5276B9: fld     dword ptr ds:0A379B4h
0x5276BF: fstp    [esp+0E4h+var_D8]
0x5276C3: mov     ecx, esi
0x5276C5: fld     [esp+0E4h+var_D8]
0x5276C9: fadd    [esp+0E4h+var_D4]
0x5276CD: fstp    [esp+0E4h+var_D4]
0x5276D1: call    TESActorBase_IsFemale
0x5276D6: test    eax, eax
0x5276D8: jnz     short loc_5276E2
0x5276DA: fld     dword ptr ds:0A53954h
0x5276E0: jmp     short loc_5276E8
0x5276E2: fld     dword ptr ds:0A379B4h
0x5276E8: fstp    [esp+0E4h+var_D8]
0x5276EC: push    ecx
0x5276ED: fld     [esp+0E8h+var_D8]
0x5276F1: lea     edx, [esp+0E8h+a1]
0x5276F5: fadd    [esp+0E8h+var_D0]
0x5276F9: fstp    [esp+0E8h+var_D0]
0x5276FD: fld     [esp+0E8h+var_D4]
0x527701: fstp    [esp+0E8h+var_E8]; float
0x527704: push    0; int
0x527706: push    1; int
0x527708: push    edx; int
0x527709: call    sub_555A00
0x52770E: fld     [esp+0F4h+var_D0]
0x527712: add     esp, 0Ch
0x527715: fstp    [esp+0E8h+var_E8]; float
0x527718: push    1; int
0x52771A: lea     eax, [esp+0ECh+a1]
0x52771E: push    1; int
0x527720: push    eax; int
0x527721: call    sub_555A00
0x527726: add     esp, 10h
0x527729: cmp     [esp+0E4h+arg_8], 0
0x527731: jnz     short loc_527759
0x527733: push    0; Seed
0x527735: call    GetRandomLargeInteger?
0x52773A: mov     [esp+0E8h+var_D8], eax
0x52773E: fild    [esp+0E8h+var_D8]
0x527742: add     esp, 4
0x527745: fdiv    qword ptr ds:0A3D5A8h
0x52774B: fstp    [esp+0E4h+var_D8]
0x52774F: fld     [esp+0E4h+var_D8]
0x527753: fstp    dword ptr [esi+1CCh]
0x527759: mov     eax, [esi+0E8h]
0x52775F: lea     ecx, [esp+0E4h+var_6C]
0x527763: push    ecx
0x527764: lea     edx, [esp+0E8h+a1]
0x527768: push    edx
0x527769: add     eax, 29Ch
0x52776E: push    eax
0x52776F: call    sub_552C10
0x527774: mov     eax, [esi]
0x527776: mov     edx, [eax+128h]
0x52777C: add     esp, 0Ch
0x52777F: push    45h ; 'E'
0x527781: mov     ecx, esi
0x527783: call    edx
0x527785: test    eax, eax
0x527787: lea     eax, [esi+168h]
0x52778D: jnz     short loc_527795
0x52778F: lea     eax, [esi+108h]
0x527795: push    eax
0x527796: lea     eax, [esp+0E8h+var_6C]
0x52779A: push    eax
0x52779B: call    sub_551990
0x5277A0: add     esp, 8
0x5277A3: test    al, al
0x5277A5: jz      short loc_527803
0x5277A7: mov     edx, [esi]
0x5277A9: mov     eax, [edx+128h]
0x5277AF: push    45h ; 'E'
0x5277B1: mov     ecx, esi
0x5277B3: call    eax
0x5277B5: test    eax, eax
0x5277B7: lea     eax, [esi+168h]
0x5277BD: jnz     short loc_5277C5
0x5277BF: lea     eax, [esi+108h]
0x5277C5: push    eax
0x5277C6: lea     ecx, [esp+0E8h+var_6C]
0x5277CA: push    ecx
0x5277CB: call    sub_5528F0
0x5277D0: mov     edi, [esi+1DCh]
0x5277D6: add     esp, 8
0x5277D9: test    edi, edi
0x5277DB: jz      short loc_527803
0x5277DD: lea     edx, [edi+4]
0x5277E0: push    edx; lpAddend
0x5277E1: call    dword ptr ds:0A2807Ch
0x5277E7: test    eax, eax
0x5277E9: jnz     short loc_5277F9
0x5277EB: test    edi, edi
0x5277ED: jz      short loc_5277F9
0x5277EF: mov     eax, [edi]
0x5277F1: mov     edx, [eax]
0x5277F3: push    1
0x5277F5: mov     ecx, edi
0x5277F7: call    edx
0x5277F9: mov     dword ptr [esi+1DCh], 0
0x527803: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x527808: push    4; int
0x52780A: push    18h; unsigned int
0x52780C: lea     eax, [esp+0F0h+var_6C]
0x527813: push    eax; void *
0x527814: mov     byte ptr [esp+0F4h+var_4], 0
0x52781C: call    $LN21
0x527821: push    offset sub_43ACE0; void (__thiscall *)(void *)
0x527826: push    4; int
0x527828: push    18h; unsigned int
0x52782A: lea     ecx, [esp+0F0h+a1]
0x52782E: push    ecx; void *
0x52782F: mov     [esp+0F4h+var_4], 0FFFFFFFFh
0x52783A: call    $LN21
0x52783F: mov     ecx, dword ptr [esp+0E4h+var_C]
0x527846: mov     large fs:0, ecx
0x52784D: pop     ecx
0x52784E: pop     edi
0x52784F: pop     esi
0x527850: add     esp, 0D8h
0x527856: retn    0Ch
