0x644390: push    0FFFFFFFFh
0x644392: push    offset SEH_66F420
0x644397: mov     eax, large fs:0
0x64439D: push    eax
0x64439E: sub     esp, 40h
0x6443A1: push    ebx
0x6443A2: push    ebp
0x6443A3: push    esi
0x6443A4: push    edi
0x6443A5: mov     eax, ds:0B30AACh
0x6443AA: xor     eax, esp
0x6443AC: push    eax
0x6443AD: lea     eax, [esp+60h+var_C]
0x6443B1: mov     large fs:0, eax
0x6443B7: mov     esi, ecx
0x6443B9: mov     eax, [esi]
0x6443BB: mov     edx, [eax+184h]
0x6443C1: call    edx
0x6443C3: cmp     dword ptr [esi+2Ch], 0
0x6443C7: mov     edi, [esp+60h+arg_0]
0x6443CB: mov     ebp, eax
0x6443CD: jnz     short loc_6443DC
0x6443CF: mov     eax, [esi]
0x6443D1: mov     edx, [eax+558h]
0x6443D7: push    edi
0x6443D8: mov     ecx, esi
0x6443DA: call    edx
0x6443DC: mov     ecx, edi
0x6443DE: mov     [esp+60h+var_4C], 0
0x6443E6: call    sub_5E6780
0x6443EB: mov     ebx, eax
0x6443ED: test    ebx, ebx
0x6443EF: mov     [esp+60h+arg_0], ebx
0x6443F3: jnz     loc_644489
0x6443F9: cmp     [esi+2Ch], eax
0x6443FC: jz      short loc_644421
0x6443FE: mov     ecx, [esi+2Ch]
0x644401: mov     eax, [ecx]
0x644403: mov     edx, [eax+190h]
0x644409: call    edx
0x64440B: test    al, al
0x64440D: jnz     short loc_64446B
0x64440F: mov     eax, [esi+2Ch]
0x644412: mov     eax, [eax+0Ch]
0x644415: push    eax
0x644416: mov     ecx, edi
0x644418: call    sub_4D88C0
0x64441D: test    al, al
0x64441F: jnz     short loc_64446B
0x644421: mov     edx, [esi]
0x644423: mov     eax, [edx+558h]
0x644429: push    edi
0x64442A: mov     ecx, esi
0x64442C: call    eax
0x64442E: cmp     dword ptr [esi+2Ch], 0
0x644432: jz      short loc_644457
0x644434: mov     ecx, [esi+2Ch]
0x644437: mov     edx, [ecx]
0x644439: mov     eax, [edx+190h]
0x64443F: call    eax
0x644441: test    al, al
0x644443: jnz     short loc_64446B
0x644445: mov     ecx, [esi+2Ch]
0x644448: mov     eax, [ecx+0Ch]
0x64444B: push    eax
0x64444C: mov     ecx, edi
0x64444E: call    sub_4D88C0
0x644453: test    al, al
0x644455: jnz     short loc_64446B
0x644457: mov     edx, [esi]
0x644459: mov     eax, [edx+188h]
0x64445F: push    1
0x644461: push    edi
0x644462: mov     ecx, esi
0x644464: call    eax
0x644466: jmp     loc_6448F1
0x64446B: mov     eax, [esi+44h]
0x64446E: test    eax, eax
0x644470: jz      short loc_644489
0x644472: cmp     [eax], edi
0x644474: jnz     short loc_644489
0x644476: mov     ecx, [eax+4]
0x644479: push    0
0x64447B: push    ecx
0x64447C: mov     ecx, edi
0x64447E: call    sub_4D8D70
0x644483: mov     [esp+60h+arg_0], eax
0x644487: mov     ebx, eax
0x644489: mov     edx, [esi+8]
0x64448C: mov     ecx, [edx+28h]
0x64448F: test    ecx, ecx
0x644491: jz      short loc_6444AB
0x644493: call    sub_452A60
0x644498: test    eax, eax
0x64449A: jz      short loc_6444AB
0x64449C: mov     eax, [esi+8]
0x64449F: mov     ecx, [eax+28h]
0x6444A2: call    sub_452A60
0x6444A7: mov     [esp+60h+var_4C], eax
0x6444AB: cmp     dword ptr [esi+2Ch], 0
0x6444AF: jz      short loc_6444D4
0x6444B1: mov     ecx, [esi+2Ch]
0x6444B4: mov     edx, [ecx]
0x6444B6: mov     eax, [edx+190h]
0x6444BC: call    eax
0x6444BE: test    al, al
0x6444C0: jnz     short loc_64450E
0x6444C2: mov     ecx, [esi+2Ch]
0x6444C5: mov     eax, [ecx+0Ch]
0x6444C8: push    eax
0x6444C9: mov     ecx, edi
0x6444CB: call    sub_4D88C0
0x6444D0: test    al, al
0x6444D2: jnz     short loc_64450E
0x6444D4: mov     eax, [esp+60h+var_4C]
0x6444D8: mov     edx, [esi]
0x6444DA: mov     edx, [edx+554h]
0x6444E0: push    eax
0x6444E1: push    edi
0x6444E2: mov     ecx, esi
0x6444E4: call    edx
0x6444E6: test    al, al
0x6444E8: jnz     short loc_64450E
0x6444EA: mov     eax, [esi]
0x6444EC: mov     edx, [eax+188h]
0x6444F2: push    1
0x6444F4: push    edi
0x6444F5: mov     ecx, esi
0x6444F7: call    edx
0x6444F9: test    ebx, ebx
0x6444FB: jz      loc_6448F1
0x644501: mov     ecx, ebx
0x644503: call    ContainerEntryExtraData_DestroyDataTable
0x644508: push    ebx
0x644509: jmp     loc_6448E9
0x64450E: push    3Ah ; ':'; a1
0x644510: call    TESForm_LookupByFormID
0x644515: add     esp, 4
0x644518: mov     ecx, offset TimeGlobals
0x64451D: mov     ebx, eax
0x64451F: call    TimeGlobals_GetGameHour
0x644524: fstp    [esp+60h+var_4C]
0x644528: fld     [esp+60h+var_4C]
0x64452C: mov     ecx, edi; this
0x64452E: fstp    qword ptr [esp+60h+var_44+4]
0x644532: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x644537: fcomp   qword ptr [esp+60h+var_44+4]
0x64453B: fnstsw  ax
0x64453D: test    ah, 41h
0x644540: jnz     short loc_644550
0x644542: fld     [esp+60h+var_4C]
0x644546: fadd    qword ptr ds:0A2F920h
0x64454C: fstp    [esp+60h+var_4C]
0x644550: fld     [esp+60h+var_4C]
0x644554: mov     ecx, edi; this
0x644556: fstp    qword ptr [esp+60h+var_44+4]
0x64455A: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x64455F: fsubr   qword ptr [esp+60h+var_44+4]
0x644563: push    ecx
0x644564: mov     ecx, [esi+8]
0x644567: fstp    [esp+64h+var_4C]
0x64456B: fld     dword ptr [ebx+24h]
0x64456E: fstp    [esp+64h+var_44+4]
0x644572: fld     [esp+64h+var_44+4]
0x644576: fdivr   qword ptr ds:0A2F938h
0x64457C: fmul    [esp+64h+var_4C]
0x644580: fstp    [esp+64h+var_4C]
0x644584: fld     dword ptr ds:0A30634h
0x64458A: fstp    [esp+64h+var_64]; float
0x64458D: push    0; char
0x64458F: push    edi; int
0x644590: call    sub_566DC0
0x644595: test    al, al
0x644597: jz      loc_64478C
0x64459D: cmp     dword ptr [esi+2Ch], 0
0x6445A1: jz      short loc_6445B4
0x6445A3: mov     ecx, [esi+2Ch]
0x6445A6: mov     eax, [ecx]
0x6445A8: mov     edx, [eax+190h]
0x6445AE: call    edx
0x6445B0: test    al, al
0x6445B2: jz      short loc_6445BF
0x6445B4: mov     eax, [esi+2Ch]
0x6445B7: test    eax, eax
0x6445B9: jnz     loc_64475B
0x6445BF: mov     eax, [esp+60h+arg_0]
0x6445C3: test    eax, eax
0x6445C5: jz      loc_644747
0x6445CB: mov     eax, [eax]
0x6445CD: xor     ebx, ebx
0x6445CF: test    eax, eax
0x6445D1: mov     [esp+60h+var_4C], ebx
0x6445D5: jz      short loc_6445DF
0x6445D7: mov     eax, [eax]
0x6445D9: mov     [esp+60h+var_4C], eax
0x6445DD: mov     ebx, eax
0x6445DF: test    ebx, ebx
0x6445E1: mov     [esp+60h+var_48], 0
0x6445E9: jz      short loc_644604
0x6445EB: mov     ecx, ebx
0x6445ED: call    ExtraDataList_GetReferencePointer
0x6445F2: test    eax, eax
0x6445F4: jz      short loc_644604
0x6445F6: mov     ecx, ebx
0x6445F8: call    ExtraDataList_GetReferencePointer
0x6445FD: mov     ecx, [eax+0Ch]
0x644600: mov     [esp+60h+var_48], ecx
0x644604: mov     ecx, [ebp+24h]
0x644607: call    sub_5697E0
0x64460C: mov     ebx, eax
0x64460E: test    ebx, ebx
0x644610: jnz     short loc_644619
0x644612: mov     ebx, [esi+30h]
0x644615: test    ebx, ebx
0x644617: jz      short loc_64465B
0x644619: mov     ecx, ebx; this
0x64461B: call    TESObjectREFR_GetContainer
0x644620: test    eax, eax
0x644622: jz      short loc_64465B
0x644624: mov     eax, [esp+60h+var_48]
0x644628: mov     edx, [esp+60h+arg_0]
0x64462C: mov     ecx, [ebp+28h]
0x64462F: mov     ebp, [edx+8]
0x644632: push    eax
0x644633: call    sub_452A60
0x644638: mov     ecx, [esp+64h+var_4C]
0x64463C: push    eax
0x64463D: push    ebx
0x64463E: push    ecx
0x64463F: push    ebp
0x644640: mov     ecx, edi
0x644642: call    sub_5FC6D0
0x644647: mov     eax, [esi]
0x644649: mov     edx, [eax+188h]
0x64464F: push    1
0x644651: push    edi
0x644652: mov     ecx, esi
0x644654: call    edx
0x644656: jmp     loc_6448D9
0x64465B: mov     edx, [esp+60h+arg_0]
0x64465F: mov     eax, [edx]
0x644661: test    eax, eax
0x644663: jz      short loc_64466B
0x644665: mov     eax, [eax]
0x644667: mov     [esp+60h+var_4C], eax
0x64466B: mov     ecx, [ebp+24h]
0x64466E: test    ecx, ecx
0x644670: mov     edx, [ebp+28h]
0x644673: mov     [esp+60h+var_48], 0
0x64467B: mov     [esp+60h+var_44+4], edx
0x64467F: jz      loc_644709
0x644685: call    sub_5697E0
0x64468A: mov     ebx, eax
0x64468C: test    ebx, ebx
0x64468E: jnz     short loc_644697
0x644690: mov     ebx, [esi+30h]
0x644693: test    ebx, ebx
0x644695: jz      short loc_644709
0x644697: mov     eax, [ebx]
0x644699: mov     edx, [eax+170h]
0x64469F: mov     ecx, ebx
0x6446A1: call    edx
0x6446A3: cmp     eax, ds:0B35EACh
0x6446A9: jz      short loc_6446BF
0x6446AB: mov     eax, [ebx]
0x6446AD: mov     edx, [eax+170h]
0x6446B3: mov     ecx, ebx
0x6446B5: call    edx
0x6446B7: cmp     eax, ds:0B35EB0h
0x6446BD: jnz     short loc_644709
0x6446BF: mov     eax, [ebx]
0x6446C1: mov     edx, [eax+174h]
0x6446C7: mov     ecx, ebx
0x6446C9: call    edx
0x6446CB: mov     ecx, [eax]
0x6446CD: mov     edx, [eax+4]
0x6446D0: mov     eax, [eax+8]
0x6446D3: push    0Ch; Size
0x6446D5: mov     [esp+64h+var_38], ecx
0x6446D9: mov     [esp+64h+var_34], edx
0x6446DD: mov     [esp+64h+var_30], eax
0x6446E1: call    FormHeapAlloc
0x6446E6: add     esp, 4
0x6446E9: test    eax, eax
0x6446EB: jz      short loc_644703
0x6446ED: fld     [esp+60h+var_38]
0x6446F1: fstp    dword ptr [eax]
0x6446F3: fld     [esp+60h+var_34]
0x6446F7: fstp    dword ptr [eax+4]
0x6446FA: fld     [esp+60h+var_30]
0x6446FE: fstp    dword ptr [eax+8]
0x644701: jmp     short loc_644705
0x644703: xor     eax, eax
0x644705: mov     [esp+60h+var_48], eax
0x644709: mov     ecx, [esp+60h+var_44+4]
0x64470D: call    sub_569E60
0x644712: test    eax, eax
0x644714: jnz     short loc_64471E
0x644716: mov     ecx, [ebp+28h]
0x644719: call    sub_452A60
0x64471E: mov     eax, [esp+60h+var_48]
0x644722: mov     edx, [esp+60h+arg_0]
0x644726: mov     ecx, [ebp+28h]
0x644729: mov     ebx, [edx+8]
0x64472C: mov     ebp, [edi]
0x64472E: push    0
0x644730: push    eax
0x644731: call    sub_452A60
0x644736: mov     ecx, [esp+68h+var_4C]
0x64473A: mov     edx, [ebp+2C8h]
0x644740: push    eax
0x644741: push    ecx
0x644742: push    ebx
0x644743: mov     ecx, edi
0x644745: call    edx
0x644747: mov     eax, [esi]
0x644749: mov     edx, [eax+188h]
0x64474F: push    1
0x644751: push    edi
0x644752: mov     ecx, esi
0x644754: call    edx
0x644756: jmp     loc_6448D9
0x64475B: fld     dword ptr ds:0A30634h
0x644761: push    ecx
0x644762: mov     ecx, [esi+8]
0x644765: fstp    [esp+64h+var_64]; float
0x644768: push    0; char
0x64476A: push    eax; int
0x64476B: call    sub_566DC0
0x644770: test    al, al
0x644772: jz      loc_6448D9
0x644778: mov     eax, [esi]
0x64477A: mov     edx, [eax+188h]
0x644780: push    1
0x644782: push    edi
0x644783: mov     ecx, esi
0x644785: call    edx
0x644787: jmp     loc_6448D9
0x64478C: mov     ecx, [esi+8]
0x64478F: push    2
0x644791: push    edi
0x644792: call    sub_5677B0
0x644797: call    Double_To_SInt32
0x64479C: fldz
0x64479E: cmp     dword ptr [esi+2Ch], 0
0x6447A2: fst     [esp+60h+var_48]
0x6447A6: fstp    [esp+60h+var_44]
0x6447AA: mov     [esp+60h+var_44+4], eax
0x6447AE: jz      loc_644897
0x6447B4: mov     ecx, [esi+2Ch]
0x6447B7: mov     eax, [ecx]
0x6447B9: mov     edx, [eax+190h]
0x6447BF: call    edx
0x6447C1: test    al, al
0x6447C3: jz      loc_644855
0x6447C9: push    edi
0x6447CA: lea     eax, [esp+64h+var_38]
0x6447CE: push    eax
0x6447CF: mov     ecx, ebp
0x6447D1: call    sub_566B30
0x6447D6: push    edi
0x6447D7: mov     ecx, ebp
0x6447D9: call    sub_566A40
0x6447DE: push    edi
0x6447DF: mov     ecx, ebp
0x6447E1: mov     ebx, eax
0x6447E3: call    sub_566940
0x6447E8: lea     ecx, [esp+60h+var_20]
0x6447EC: mov     ebp, eax
0x6447EE: call    sub_68A9F0
0x6447F3: push    ebp
0x6447F4: push    ebx
0x6447F5: lea     ecx, [esp+68h+var_38]
0x6447F9: push    ecx
0x6447FA: push    edi
0x6447FB: lea     ecx, [esp+70h+var_20]
0x6447FF: mov     [esp+70h+var_4], 0
0x644807: call    sub_68B030
0x64480C: push    edi
0x64480D: lea     ecx, [esp+64h+var_20]
0x644811: call    sub_68A760
0x644816: fstp    [esp+60h+var_48]
0x64481A: mov     eax, [esi+2Ch]
0x64481D: push    ebp
0x64481E: push    ebx
0x64481F: lea     edx, [esp+68h+var_38]
0x644823: push    edx
0x644824: push    eax
0x644825: lea     ecx, [esp+70h+var_20]
0x644829: mov     [esp+70h+var_44], eax
0x64482D: call    sub_68B030
0x644832: mov     eax, [esp+60h+var_44]
0x644836: push    eax
0x644837: lea     ecx, [esp+64h+var_20]
0x64483B: call    sub_68A760
0x644840: fstp    [esp+60h+var_44]
0x644844: lea     ecx, [esp+60h+var_20]
0x644848: mov     [esp+60h+var_4], 0FFFFFFFFh
0x644850: call    sub_68AA10
0x644855: cmp     dword ptr [esi+2Ch], 0
0x644859: jz      short loc_644897
0x64485B: mov     ecx, [esi+2Ch]
0x64485E: mov     edx, [ecx]
0x644860: mov     eax, [edx+190h]
0x644866: call    eax
0x644868: test    al, al
0x64486A: jz      short loc_644897
0x64486C: mov     ecx, [esi+2Ch]
0x64486F: push    0
0x644871: push    ecx
0x644872: mov     ecx, edi
0x644874: call    TesObjectREF_GetDistance
0x644879: fild    [esp+60h+var_44+4]
0x64487D: fcompp
0x64487F: fnstsw  ax
0x644881: test    ah, 41h
0x644884: jz      short loc_644897
0x644886: fld     [esp+60h+var_48]
0x64488A: fld     [esp+60h+var_44]
0x64488E: fcompp
0x644890: fnstsw  ax
0x644892: test    ah, 5
0x644895: jp      short loc_6448D9
0x644897: fild    [esp+60h+var_44+4]
0x64489B: mov     ecx, [esi+8]
0x64489E: mov     ebx, [esi]
0x6448A0: sub     esp, 8
0x6448A3: fstp    [esp+68h+var_64]
0x6448A7: fld     [esp+68h+var_4C]
0x6448AB: fstp    [esp+68h+var_68]
0x6448AE: push    edi
0x6448AF: call    sub_566940
0x6448B4: mov     ecx, [esi+8]
0x6448B7: push    eax
0x6448B8: push    edi
0x6448B9: call    sub_566A40
0x6448BE: mov     ecx, [esi+8]
0x6448C1: push    eax
0x6448C2: push    edi
0x6448C3: lea     edx, [esp+74h+var_2C]
0x6448C7: push    edx
0x6448C8: call    sub_566B30
0x6448CD: push    eax
0x6448CE: mov     eax, [ebx+418h]
0x6448D4: push    edi
0x6448D5: mov     ecx, esi
0x6448D7: call    eax
0x6448D9: mov     esi, [esp+60h+arg_0]
0x6448DD: test    esi, esi
0x6448DF: jz      short loc_6448F1
0x6448E1: mov     ecx, esi
0x6448E3: call    ContainerEntryExtraData_DestroyDataTable
0x6448E8: push    esi
0x6448E9: call    FormHeapFree
0x6448EE: add     esp, 4
0x6448F1: mov     ecx, dword ptr [esp+60h+var_C]
0x6448F5: mov     large fs:0, ecx
0x6448FC: pop     ecx
0x6448FD: pop     edi
0x6448FE: pop     esi
0x6448FF: pop     ebp
0x644900: pop     ebx
0x644901: add     esp, 4Ch
0x644904: retn    4
