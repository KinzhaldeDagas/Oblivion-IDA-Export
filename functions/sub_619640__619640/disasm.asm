0x619640: push    ecx
0x619641: push    esi
0x619642: mov     esi, ecx
0x619644: cmp     dword ptr [esi+70h], 5
0x619648: jnz     loc_61980A
0x61964E: cmp     byte ptr [esi+4Ah], 0
0x619652: push    edi
0x619653: jnz     loc_61970E
0x619659: mov     ecx, [esi+3Ch]
0x61965C: call    Actor_IsBlocking
0x619661: test    al, al
0x619663: jz      short loc_61966F
0x619665: mov     ecx, [esi+3Ch]
0x619668: push    0; float
0x61966A: call    sub_5F4AE0
0x61966F: mov     ecx, [esi+0C8h]
0x619675: test    ecx, ecx
0x619677: mov     byte ptr [esi+4Ah], 1
0x61967B: mov     byte ptr [esi+4Eh], 0
0x61967F: jz      short loc_6196A7
0x619681: mov     edi, [esi+3Ch]
0x619684: push    2; int
0x619686: call    sub_520200
0x61968B: mov     edx, [edi]
0x61968D: push    eax; int
0x61968E: mov     eax, [esi+0C8h]
0x619694: push    edi; int
0x619695: push    eax; int
0x619696: mov     eax, [edx+164h]
0x61969C: mov     ecx, edi
0x61969E: call    eax
0x6196A0: mov     ecx, eax; this
0x6196A2: call    sub_477DB0
0x6196A7: push    ebp
0x6196A8: mov     ebp, [esi+3Ch]
0x6196AB: mov     edi, [ebp+0]
0x6196AE: push    1
0x6196B0: push    5
0x6196B2: mov     ecx, esi
0x6196B4: add     edi, 308h
0x6196BA: call    sub_6135F0
0x6196BF: mov     edx, [edi]
0x6196C1: push    eax
0x6196C2: mov     ecx, ebp
0x6196C4: call    edx
0x6196C6: cmp     byte ptr ds:0B3B908h, 0
0x6196CD: pop     ebp
0x6196CE: jz      loc_619809
0x6196D4: mov     ecx, esi
0x6196D6: call    sub_6135F0
0x6196DB: test    eax, eax
0x6196DD: jz      loc_619809
0x6196E3: mov     edi, [esi+3Ch]
0x6196E6: mov     ecx, esi
0x6196E8: call    sub_6135F0
0x6196ED: mov     ecx, eax; this
0x6196EF: call    TESObjectREFR_GetName
0x6196F4: push    eax
0x6196F5: mov     ecx, edi; this
0x6196F7: call    TESObjectREFR_GetName
0x6196FC: push    eax
0x6196FD: push    offset a_20sWantsToYie; "%.20s wants to yield to %.20s!"
0x619702: call    Interface_ConsolePrint
0x619707: add     esp, 0Ch
0x61970A: pop     edi
0x61970B: pop     esi
0x61970C: pop     ecx
0x61970D: retn
0x61970E: cmp     dword ptr [esi+0C8h], 0
0x619715: jz      short loc_619733
0x619717: mov     ecx, [esi+3Ch]
0x61971A: mov     eax, [ecx]
0x61971C: mov     edx, [eax+164h]
0x619722: call    edx
0x619724: mov     ecx, eax
0x619726: call    sub_472EA0
0x61972B: test    al, al
0x61972D: jz      loc_619809
0x619733: mov     ecx, esi
0x619735: mov     byte ptr [esi+4Ah], 0
0x619739: call    sub_6135F0
0x61973E: test    eax, eax
0x619740: jz      short loc_619759
0x619742: mov     ecx, esi
0x619744: call    sub_6135F0
0x619749: mov     ecx, [esi+3Ch]
0x61974C: mov     edx, [eax]
0x61974E: mov     edx, [edx+36Ch]
0x619754: push    ecx
0x619755: mov     ecx, eax
0x619757: call    edx
0x619759: mov     ecx, [esi+3Ch]
0x61975C: call    Actor_IsBlocking
0x619761: test    al, al
0x619763: jz      short loc_61976F
0x619765: mov     ecx, [esi+3Ch]
0x619768: push    0; float
0x61976A: call    sub_5F4AE0
0x61976F: mov     ecx, esi
0x619771: call    sub_6160B0
0x619776: push    0; Seed
0x619778: call    GetRandomLargeInteger?
0x61977D: cdq
0x61977E: mov     ecx, 0Ah
0x619783: idiv    ecx
0x619785: mov     edi, 6
0x61978A: add     esp, 4
0x61978D: mov     [esp+0Ch+var_4], edx
0x619791: fild    [esp+0Ch+var_4]
0x619795: fdiv    qword ptr ds:0A3F3E8h
0x61979B: fmul    dword ptr ds:0B36D70h
0x6197A1: fadd    dword ptr ds:0B36D68h
0x6197A7: fstp    [esp+0Ch+var_4]
0x6197AB: fld     dword ptr [esi+44h]
0x6197AE: fstp    dword ptr [esi+0D4h]
0x6197B4: fld     [esp+0Ch+var_4]
0x6197B8: fstp    dword ptr [esi+0D8h]
0x6197BE: fld     dword ptr ds:0A30634h
0x6197C4: fstp    dword ptr [esi+0DCh]
0x6197CA: cmp     [esi+70h], edi
0x6197CD: jz      short loc_6197FF
0x6197CF: cmp     byte ptr ds:0B3B908h, 0
0x6197D6: jz      short loc_6197F3
0x6197D8: mov     ecx, [esi+3Ch]; this
0x6197DB: push    offset a___justKindaSt; "...just kinda stand around"
0x6197E0: call    TESObjectREFR_GetName
0x6197E5: push    eax
0x6197E6: push    offset a_20sIsGoingToS; "%.20s is going to %s!"
0x6197EB: call    Interface_ConsolePrint
0x6197F0: add     esp, 0Ch
0x6197F3: fld     dword ptr ds:0A30634h
0x6197F9: fstp    dword ptr [esi+188h]
0x6197FF: mov     [esi+70h], edi
0x619802: mov     byte ptr [esi+17Dh], 1
0x619809: pop     edi
0x61980A: pop     esi
0x61980B: pop     ecx
0x61980C: retn
