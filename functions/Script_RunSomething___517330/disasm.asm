0x517330: push    0FFFFFFFFh
0x517332: push    offset Script_RunSomething??_SEH
0x517337: mov     eax, large fs:0
0x51733D: push    eax
0x51733E: sub     esp, 74Ch
0x517344: mov     eax, ds:0B30AACh
0x517349: xor     eax, esp
0x51734B: mov     [esp+758h+var_10], eax
0x517352: push    ebx
0x517353: push    ebp
0x517354: push    esi
0x517355: push    edi
0x517356: mov     eax, ds:0B30AACh
0x51735B: xor     eax, esp
0x51735D: push    eax
0x51735E: lea     eax, [esp+76Ch+var_C]
0x517365: mov     large fs:0, eax
0x51736B: mov     ebp, [esp+76Ch+arg_4]
0x517372: mov     edi, [esp+76Ch+a5]
0x517379: mov     esi, ecx
0x51737B: mov     dword ptr [esp+76Ch+var_740], ebp
0x51737F: call    GetInterfaceSingleton0x50
0x517384: xor     ebx, ebx
0x517386: cmp     al, bl
0x517388: mov     byte ptr [esp+76Ch+var_758+3], al
0x51738C: mov     dword ptr [esp+76Ch+PerformanceCount], ebx
0x517390: mov     dword ptr [esp+76Ch+PerformanceCount+4], ebx
0x517394: jz      short loc_5173B9
0x517396: mov     eax, ds:0B36210h
0x51739B: or      eax, ds:0B36214h
0x5173A1: jnz     short loc_5173AE
0x5173A3: push    offset stru_B36208.eventList; lpFrequency
0x5173A8: call    dword ptr ds:0A2815Ch
0x5173AE: lea     ecx, [esp+76Ch+PerformanceCount]
0x5173B2: push    ecx; lpPerformanceCount
0x5173B3: call    dword ptr ds:0A28158h
0x5173B9: cmp     edi, ebx
0x5173BB: mov     [esi+0A1h], bl
0x5173C1: jz      loc_51760E
0x5173C7: mov     edx, [edi+8]
0x5173CA: shr     edx, 3
0x5173CD: test    dl, 1
0x5173D0: jz      loc_51760E
0x5173D6: cmp     [esi+14h], ebx
0x5173D9: jz      short loc_517410
0x5173DB: mov     eax, [edi]
0x5173DD: mov     edx, [eax+0D4h]
0x5173E3: mov     ebx, [esi+14h]
0x5173E6: mov     ecx, edi
0x5173E8: call    edx
0x5173EA: push    eax
0x5173EB: mov     eax, [ebx]
0x5173ED: mov     edx, [eax+0D4h]
0x5173F3: mov     ecx, ebx
0x5173F5: call    edx
0x5173F7: push    eax; ArgList
0x5173F8: push    offset aNestedCallToSc; "Nested call to ScriptRunner::Run.  Scri"...
0x5173FD: call    PrintError
0x517402: mov     al, [esi+0A1h]
0x517408: add     esp, 0Ch
0x51740B: jmp     loc_517610
0x517410: lea     ecx, [esp+76Ch+var_720]
0x517414: mov     [esi+14h], edi
0x517417: call    sub_4F32E0
0x51741C: cmp     ebp, ebx
0x51741E: mov     eax, [esp+76Ch+arg_C]
0x517425: mov     [esp+76Ch+var_4], ebx
0x51742C: mov     [esp+76Ch+var_738], ebx
0x517430: mov     [esi+24h], ebx
0x517433: mov     [esi+20h], ebx
0x517436: mov     dword ptr [esp+76Ch+ArgList], 0FFFFh
0x51743E: mov     [esp+76Ch+a7], ebx
0x517442: mov     [esi], eax
0x517444: jz      short loc_517458
0x517446: mov     edx, [ebp+0]
0x517449: mov     eax, [edx+170h]
0x51744F: mov     ecx, ebp
0x517451: call    eax
0x517453: mov     [esi+4], eax
0x517456: jmp     short loc_51745B
0x517458: mov     [esi+4], ebx
0x51745B: mov     eax, [esp+76Ch+arg_8]
0x517462: cmp     eax, ebx
0x517464: jnz     short loc_517471
0x517466: mov     ecx, edi
0x517468: call    Script_CreateEventList
0x51746D: mov     [esp+76Ch+var_738], eax
0x517471: mov     [esi+8], eax
0x517474: cmp     [edi+29h], bl
0x517477: jz      short loc_5174BF
0x517479: mov     ecx, eax
0x51747B: cmp     [ecx+10h], ebx
0x51747E: jnz     short loc_517490
0x517480: push    8; Size
0x517482: call    FormHeapAlloc
0x517487: mov     edx, [esi+8]
0x51748A: add     esp, 4
0x51748D: mov     [edx+10h], eax
0x517490: mov     eax, [esi+8]
0x517493: fld     [esp+76Ch+arg_1C]
0x51749A: mov     ecx, [eax+10h]
0x51749D: mov     dl, [esp+76Ch+arg_14]
0x5174A4: mov     [ecx], dl
0x5174A6: mov     eax, [esi+8]
0x5174A9: mov     ecx, [eax+10h]
0x5174AC: mov     dl, [esp+76Ch+arg_18]
0x5174B3: mov     [ecx+1], dl
0x5174B6: mov     eax, [esi+8]
0x5174B9: mov     ecx, [eax+10h]
0x5174BC: fstp    dword ptr [ecx+4]
0x5174BF: xor     ebp, ebp
0x5174C1: cmp     [edi+20h], ebx
0x5174C4: mov     dword ptr [esp+76Ch+a9+4], ebx
0x5174C8: mov     dword ptr [esp+76Ch+a9], ebp
0x5174CC: mov     byte ptr [esp+76Ch+var_758+2], bl
0x5174D0: mov     [esp+76Ch+a11], ebx
0x5174D4: jbe     loc_51757B
0x5174DA: add     [esp+76Ch+a11], 1
0x5174DF: cmp     ebp, ebx
0x5174E1: setnz   dl
0x5174E4: lea     eax, [esp+76Ch+a9+4]
0x5174E8: lea     ecx, [esp+76Ch+a8]
0x5174EC: mov     [esi+10h], ebx
0x5174EF: mov     [esp+76Ch+a8], ebx
0x5174F3: push    edx; a10
0x5174F4: push    eax; a9
0x5174F5: push    ecx; a8
0x5174F6: lea     edx, [esp+778h+a7]
0x5174FA: push    edx; a7
0x5174FB: lea     eax, [esp+77Ch+ArgList]
0x5174FF: push    eax; a6
0x517500: push    edi; a5
0x517501: mov     ecx, esi; this
0x517503: call    sub_516830
0x517508: test    al, al
0x51750A: jz      short loc_517571
0x51750C: cmp     ebp, ebx
0x51750E: jz      short loc_517519
0x517510: sub     ebp, 1
0x517513: mov     dword ptr [esp+76Ch+a9], ebp
0x517517: jmp     short loc_51755A
0x517519: mov     ecx, dword ptr [esp+76Ch+ArgList]
0x51751D: cmp     ecx, 1Eh
0x517520: jz      short loc_51757B
0x517522: mov     eax, dword ptr [esp+76Ch+a9+4]
0x517526: cmp     eax, ebx
0x517528: jnz     short loc_517532
0x51752A: mov     eax, dword ptr [esp+76Ch+var_740]
0x51752E: mov     dword ptr [esp+76Ch+a9+4], eax
0x517532: mov     edx, [esp+76Ch+a11]
0x517536: push    ebx; a13
0x517537: push    ebx; a12
0x517538: push    edx; a11
0x517539: lea     edx, [esp+778h+a9]
0x51753D: push    edx; a10
0x51753E: mov     edx, [esp+77Ch+a7]
0x517542: push    edx; a9
0x517543: lea     edx, [esp+780h+a8]
0x517547: push    edx; a8
0x517548: push    eax; a4
0x517549: push    ecx; ArgList
0x51754A: push    edi; a5
0x51754B: mov     ecx, esi; a1
0x51754D: call    CommandInfo_Execute?
0x517552: test    al, al
0x517554: jz      short loc_517576
0x517556: mov     ebp, dword ptr [esp+76Ch+a9]
0x51755A: mov     eax, [esp+76Ch+a7]
0x51755E: add     eax, [esp+76Ch+a8]
0x517562: cmp     eax, [edi+20h]
0x517565: mov     [esp+76Ch+a7], eax
0x517569: jb      loc_5174DA
0x51756F: jmp     short loc_51757B
0x517571: mov     [edi+20h], ebx
0x517574: jmp     short loc_51757B
0x517576: mov     byte ptr [esp+16h], 1
0x51757B: cmp     [esp+780h], bl
0x517582: jnz     short loc_517592
0x517584: cmp     [esp+16h], bl
0x517588: jnz     short loc_517592
0x51758A: mov     ecx, [esi+8]
0x51758D: call    sub_4FA0E0
0x517592: mov     ebp, [esp+76Ch+var_738]
0x517596: cmp     ebp, ebx
0x517598: jz      short loc_5175AA
0x51759A: mov     ecx, ebp
0x51759C: call    ScriptEventList_destr??
0x5175A1: push    ebp
0x5175A2: call    FormHeapFree
0x5175A7: add     esp, 4
0x5175AA: cmp     byte ptr [esp+76Ch+var_758+3], bl
0x5175AE: mov     [esi+14h], ebx
0x5175B1: jz      short loc_5175F0
0x5175B3: lea     eax, [esp+76Ch+var_728]
0x5175B7: push    eax; lpPerformanceCount
0x5175B8: call    dword ptr ds:0A28158h
0x5175BE: mov     ecx, dword ptr [esp+76Ch+var_728]
0x5175C2: sub     ecx, dword ptr [esp+76Ch+PerformanceCount]
0x5175C6: mov     edx, dword ptr [esp+76Ch+var_728+4]
0x5175CA: sbb     edx, dword ptr [esp+76Ch+PerformanceCount+4]
0x5175CE: mov     dword ptr [esp+76Ch+var_740], ecx
0x5175D2: mov     dword ptr [esp+76Ch+var_740+4], edx
0x5175D6: fild    [esp+76Ch+var_740]
0x5175DA: fild    qword ptr ds:0B36210h
0x5175E0: fdivp   st(1), st
0x5175E2: fstp    dword ptr [esp+76Ch+var_740]
0x5175E6: fld     dword ptr [edi+34h]
0x5175E9: fadd    dword ptr [esp+76Ch+var_740]
0x5175ED: fstp    dword ptr [edi+34h]
0x5175F0: mov     bl, [esi+0A1h]
0x5175F6: lea     ecx, [esp+76Ch+var_720]; void *
0x5175FA: mov     [esp+76Ch+var_4], 0FFFFFFFFh
0x517605: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x51760A: mov     al, bl
0x51760C: jmp     short loc_517610
0x51760E: xor     al, al
0x517610: mov     ecx, [esp+76Ch+var_C]
0x517617: mov     large fs:0, ecx
0x51761E: pop     ecx
0x51761F: pop     edi
0x517620: pop     esi
0x517621: pop     ebp
0x517622: pop     ebx
0x517623: mov     ecx, [esp+758h+var_10]
0x51762A: xor     ecx, esp
0x51762C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x517631: add     esp, 758h
0x517637: retn    20h ; ' '
