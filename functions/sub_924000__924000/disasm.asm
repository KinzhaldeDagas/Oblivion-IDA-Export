0x924000: push    ebp
0x924001: mov     ebp, esp
0x924003: and     esp, 0FFFFFFF0h
0x924006: sub     esp, 444h
0x92400C: mov     ecx, ds:0BA9DE4h
0x924012: push    ebx
0x924013: push    esi
0x924014: push    edi
0x924015: mov     edi, large fs:2Ch
0x92401C: mov     eax, [edi+ecx*4]
0x92401F: mov     edx, [eax+1A4h]
0x924025: cmp     edx, [eax+1A8h]
0x92402B: jnb     short loc_924058
0x92402D: mov     esi, eax
0x92402F: mov     ecx, [esi+1A4h]
0x924035: mov     dword ptr [ecx], offset aLtsolver; "Ltsolver"
0x92403B: mov     dword ptr [ecx+0Ch], offset aMemory; "memory"
0x924042: rdtsc
0x924044: mov     [esp+450h+var_430], eax
0x924048: mov     eax, [esp+450h+var_430]
0x92404C: mov     [ecx+4], eax
0x92404F: add     ecx, 10h
0x924052: mov     [esi+1A4h], ecx
0x924058: mov     eax, ds:0BA9DE4h
0x92405D: mov     edx, [ebp+arg_C]
0x924060: mov     eax, [edi+eax*4]
0x924063: mov     ebx, [edx+18h]
0x924066: xor     ecx, ecx
0x924068: mov     [esp+450h+var_43C], eax
0x92406C: mov     eax, [eax+19Ch]
0x924072: lea     ebx, ds:8[ebx*4]
0x924079: mov     [esp+450h+var_424], ecx
0x92407D: mov     [esp+450h+var_418], ecx
0x924081: cmp     eax, ecx
0x924083: mov     ecx, ds:0BA7D9Ch
0x924089: mov     [esp+450h+var_434], ebx
0x92408D: mov     edx, eax
0x92408F: jnz     short loc_924093
0x924091: mov     edx, ecx
0x924093: mov     esi, [edx+2Ch]
0x924096: sub     esi, [edx+20h]
0x924099: sub     esi, 10h
0x92409C: test    eax, eax
0x92409E: jz      short loc_9240A2
0x9240A0: mov     ecx, eax
0x9240A2: mov     edx, [ecx+20h]
0x9240A5: lea     eax, [esi+10h]
0x9240A8: and     eax, 0FFFFFFF0h
0x9240AB: lea     edi, [edx+eax]
0x9240AE: cmp     edi, [ecx+2Ch]
0x9240B1: ja      short loc_9240BC
0x9240B3: mov     [ecx+20h], edi
0x9240B6: mov     [esp+450h+var_428], edx
0x9240BA: jmp     short loc_9240C6
0x9240BC: mov     edx, [ecx]
0x9240BE: push    eax
0x9240BF: call    dword ptr [edx+0Ch]
0x9240C2: mov     [esp+450h+var_428], eax
0x9240C6: mov     eax, [esp+450h+var_428]
0x9240CA: lea     edi, [eax+esi]
0x9240CD: lea     ecx, [ecx+0]
0x9240D0: mov     ecx, [ebp+arg_C]
0x9240D3: mov     edx, [ecx+14h]
0x9240D6: mov     [esp+450h+var_42C], eax
0x9240DA: lea     eax, [eax+edx+90h]
0x9240E1: mov     edx, [ecx+0Ch]
0x9240E4: mov     [esp+450h+var_440], eax
0x9240E8: add     eax, edx
0x9240EA: mov     [esp+450h+var_438], eax
0x9240EE: mov     edi, edi
0x9240F0: mov     ecx, [ebp+arg_C]
0x9240F3: mov     ecx, [ecx+10h]
0x9240F6: mov     [esp+450h+var_414], eax
0x9240FA: add     eax, ebx
0x9240FC: mov     [esp+450h+var_430], eax
0x924100: lea     eax, [eax+ecx+4]
0x924104: cmp     eax, edi
0x924106: jbe     loc_924228
0x92410C: mov     edx, [esp+450h+var_440]
0x924110: cmp     edx, edi
0x924112: jnb     loc_9241DC
0x924118: cmp     [esp+450h+var_438], edi
0x92411C: jb      short loc_924192
0x92411E: mov     eax, [ebp+arg_C]
0x924121: mov     esi, [eax+8]
0x924124: shl     esi, 1
0x924126: mov     ebx, edx
0x924128: mov     edx, [eax+0Ch]
0x92412B: mov     eax, [esp+450h+var_43C]
0x92412F: sub     esi, edi
0x924131: add     esi, ebx
0x924133: add     esi, edx
0x924135: mov     edx, [esp+450h+var_434]
0x924139: add     ecx, esi
0x92413B: lea     ebx, [ecx+edx+4]
0x92413F: mov     ecx, [eax+19Ch]
0x924145: test    ecx, ecx
0x924147: jnz     short loc_92414F
0x924149: mov     ecx, ds:0BA7D9Ch
0x92414F: mov     eax, [ecx+20h]
0x924152: lea     edx, [ebx+10h]
0x924155: and     edx, 0FFFFFFF0h
0x924158: mov     [esp+450h+var_430], eax
0x92415C: add     eax, edx
0x92415E: cmp     eax, [ecx+2Ch]
0x924161: ja      short loc_92416C
0x924163: mov     [ecx+20h], eax
0x924166: mov     eax, [esp+450h+var_430]
0x92416A: jmp     short loc_924172
0x92416C: mov     eax, [ecx]
0x92416E: push    edx
0x92416F: call    dword ptr [eax+0Ch]
0x924172: mov     ecx, [ebp+arg_C]
0x924175: sub     edi, [ecx+8]
0x924178: mov     [esp+450h+var_438], edi
0x92417C: lea     edi, [eax+ebx]
0x92417F: mov     ebx, [esp+450h+var_434]
0x924183: mov     [esp+450h+var_424], eax
0x924187: mov     [esp+450h+var_418], eax
0x92418B: add     eax, esi
0x92418D: jmp     loc_9240F0
0x924192: mov     edx, [esp+450h+var_43C]
0x924196: lea     edi, [ecx+ebx+4]
0x92419A: mov     ecx, [edx+19Ch]
0x9241A0: test    ecx, ecx
0x9241A2: jnz     short loc_9241AA
0x9241A4: mov     ecx, ds:0BA7D9Ch
0x9241AA: mov     edx, [ecx+20h]
0x9241AD: lea     eax, [edi+10h]
0x9241B0: and     eax, 0FFFFFFF0h
0x9241B3: lea     esi, [edx+eax]
0x9241B6: cmp     esi, [ecx+2Ch]
0x9241B9: ja      short loc_9241CB
0x9241BB: mov     eax, edx
0x9241BD: mov     [ecx+20h], esi
0x9241C0: mov     [esp+450h+var_424], eax
0x9241C4: add     edi, eax
0x9241C6: jmp     loc_9240F0
0x9241CB: mov     edx, [ecx]
0x9241CD: push    eax
0x9241CE: call    dword ptr [edx+0Ch]
0x9241D1: mov     [esp+450h+var_424], eax
0x9241D5: add     edi, eax
0x9241D7: jmp     loc_9240F0
0x9241DC: sub     eax, [esp+450h+var_428]
0x9241E0: mov     edi, eax
0x9241E2: mov     eax, [esp+450h+var_43C]
0x9241E6: mov     ecx, [eax+19Ch]
0x9241EC: test    ecx, ecx
0x9241EE: jnz     short loc_9241F6
0x9241F0: mov     ecx, ds:0BA7D9Ch
0x9241F6: mov     edx, [ecx+20h]
0x9241F9: lea     eax, [edi+10h]
0x9241FC: and     eax, 0FFFFFFF0h
0x9241FF: lea     esi, [edx+eax]
0x924202: cmp     esi, [ecx+2Ch]
0x924205: ja      short loc_924217
0x924207: mov     eax, edx
0x924209: mov     [ecx+20h], esi
0x92420C: mov     [esp+450h+var_424], eax
0x924210: add     edi, eax
0x924212: jmp     loc_9240D0
0x924217: mov     edx, [ecx]
0x924219: push    eax
0x92421A: call    dword ptr [edx+0Ch]
0x92421D: mov     [esp+450h+var_424], eax
0x924221: add     edi, eax
0x924223: jmp     loc_9240D0
0x924228: mov     ecx, ds:0BA9DE4h
0x92422E: mov     eax, large fs:2Ch
0x924234: mov     eax, [eax+ecx*4]
0x924237: mov     edx, [eax+1A4h]
0x92423D: cmp     edx, [eax+1A8h]
0x924243: jnb     short loc_92426B
0x924245: mov     esi, [esp+450h+var_43C]
0x924249: mov     ecx, [esi+1A4h]
0x92424F: mov     dword ptr [ecx], offset aStmakeAccum; "Stmake accum"
0x924255: rdtsc
0x924257: mov     [esp+450h+var_434], eax
0x92425B: mov     eax, [esp+450h+var_434]
0x92425F: mov     [ecx+4], eax
0x924262: add     ecx, 0Ch
0x924265: mov     [esi+1A4h], ecx
0x92426B: mov     eax, [esp+450h+var_42C]
0x92426F: mov     edi, [ebp+arg_10]
0x924272: mov     ecx, [ebp+arg_14]
0x924275: xorps   xmm0, xmm0
0x924278: mov     byte ptr [eax], 1
0x92427B: movaps  xmmword ptr [eax+30h], xmm0
0x92427F: movaps  xmmword ptr [eax+10h], xmm0
0x924283: movaps  xmmword ptr [eax+20h], xmm0
0x924287: movaps  xmmword ptr [eax+40h], xmm0
0x92428B: movaps  xmmword ptr [eax+50h], xmm0
0x92428F: movaps  xmmword ptr [eax+60h], xmm0
0x924293: lea     ebx, [edi+ecx*4]
0x924296: movaps  xmmword ptr [eax+70h], xmm0
0x92429A: add     eax, 80h ; '€'
0x92429F: cmp     edi, ebx
0x9242A1: mov     esi, edi
0x9242A3: mov     [esp+450h+var_434], ebx
0x9242A7: jnb     short loc_9242D4
0x9242A9: lea     esp, [esp+0]
0x9242B0: mov     edx, [esi]
0x9242B2: mov     ecx, [edx+50h]
0x9242B5: mov     edx, eax
0x9242B7: sub     edx, [esp+450h+var_42C]
0x9242BB: cmp     [ecx+8], edx
0x9242BE: jz      short loc_9242C3
0x9242C0: mov     [ecx+8], edx
0x9242C3: mov     edx, [ecx]
0x9242C5: push    eax
0x9242C6: mov     eax, [ebp+arg_0]
0x9242C9: push    eax
0x9242CA: call    dword ptr [edx+14h]
0x9242CD: add     esi, 4
0x9242D0: cmp     esi, ebx
0x9242D2: jb      short loc_9242B0
0x9242D4: mov     ecx, [ebp+arg_C]
0x9242D7: mov     byte ptr [eax], 2
0x9242DA: mov     edx, [ecx+18h]
0x9242DD: xor     eax, eax
0x9242DF: test    edx, edx
0x9242E1: jle     short loc_9242FF
0x9242E3: mov     edx, [esp+450h+var_414]
0x9242E7: jmp     short loc_9242F0
0x9242E9: align 10h
0x9242F0: mov     dword ptr [edx+eax*4], 0
0x9242F7: mov     esi, [ecx+18h]
0x9242FA: inc     eax
0x9242FB: cmp     eax, esi
0x9242FD: jl      short loc_9242F0
0x9242FF: mov     ecx, large fs:2Ch
0x924306: mov     edx, ds:0BA9DE4h
0x92430C: mov     eax, [ecx+edx*4]
0x92430F: mov     ecx, [eax+1A4h]
0x924315: cmp     ecx, [eax+1A8h]
0x92431B: jnb     short loc_924343
0x92431D: mov     esi, [esp+450h+var_43C]
0x924321: mov     ecx, [esi+1A4h]
0x924327: mov     dword ptr [ecx], offset aStmakeJac; "Stmake jac"
0x92432D: rdtsc
0x92432F: mov     [esp+450h+var_444], eax
0x924333: mov     edx, [esp+450h+var_444]
0x924337: mov     [ecx+4], edx
0x92433A: add     ecx, 0Ch
0x92433D: mov     [esi+1A4h], ecx
0x924343: cmp     edi, ebx
0x924345: mov     eax, [esp+450h+var_438]
0x924349: mov     ecx, [esp+450h+var_440]
0x92434D: mov     edx, [esp+450h+var_430]
0x924351: mov     esi, [ebp+arg_8]
0x924354: mov     [esp+450h+var_438], eax
0x924358: lea     eax, [esp+450h+var_404]
0x92435C: mov     [esp+450h+var_410], eax
0x924360: mov     eax, 80000100h
0x924365: mov     [esp+450h+var_420], ecx
0x924369: mov     [esp+450h+var_41C], edx
0x92436D: mov     [esp+450h+var_440], edi
0x924371: mov     [esp+450h+var_40C], 0
0x924379: mov     [esp+450h+var_408], eax
0x92437D: jnb     loc_924476
0x924383: mov     ecx, [esp+450h+var_440]
0x924387: mov     ecx, [ecx]
0x924389: mov     ebx, [ecx+6Ch]
0x92438C: mov     edi, [ecx+68h]
0x92438F: imul    ebx, 1Ch
0x924392: mov     edx, edi
0x924394: add     ebx, edx
0x924396: cmp     edi, ebx
0x924398: mov     [esp+450h+var_444], ebx
0x92439C: jnb     loc_92445F
0x9243A2: cmp     byte ptr [edi+10h], 3
0x9243A6: jb      short loc_9243D5
0x9243A8: mov     ecx, [esp+450h+var_40C]
0x9243AC: and     eax, 3FFFFFFFh
0x9243B1: cmp     ecx, eax
0x9243B3: jnz     short loc_9243C4
0x9243B5: lea     edx, [esp+450h+var_410]
0x9243B9: push    4
0x9243BB: push    edx
0x9243BC: call    sub_8A6EE0
0x9243C1: add     esp, 8
0x9243C4: mov     eax, [esp+450h+var_410]
0x9243C8: mov     ecx, [esp+450h+var_40C]
0x9243CC: mov     [eax+ecx*4], edi
0x9243CF: inc     [esp+450h+var_40C]
0x9243D3: jmp     short loc_924450
0x9243D5: mov     eax, [edi]
0x9243D7: prefetchnta byte ptr [eax]
0x9243DA: prefetchnta byte ptr [eax+0A00h]
0x9243E1: prefetchnta byte ptr [eax+1400h]
0x9243E8: mov     edx, [edi+4]
0x9243EB: mov     ecx, [edi+8]
0x9243EE: mov     ecx, [ecx+50h]
0x9243F1: add     eax, 1400h
0x9243F6: mov     eax, [edx+50h]
0x9243F9: mov     ebx, [eax+8]
0x9243FC: mov     edx, [esp+450h+var_42C]
0x924400: add     ebx, edx
0x924402: mov     [esi+14h], ebx
0x924405: mov     ebx, [ecx+8]
0x924408: add     eax, 10h
0x92440B: add     ebx, edx
0x92440D: add     ecx, 10h
0x924410: mov     [esi+1Ch], eax
0x924413: mov     [esi+20h], ecx
0x924416: mov     ecx, [esp+450h+var_420]
0x92441A: mov     [esi+18h], ebx
0x92441D: mov     edx, [edi]
0x92441F: mov     [esi+24h], edx
0x924422: mov     eax, [edi+18h]
0x924425: mov     [esi+28h], eax
0x924428: cmp     ecx, [esp+450h+var_438]
0x92442C: jb      short loc_92443E
0x92442E: mov     edx, [esp+450h+var_418]
0x924432: mov     [esp+450h+var_420], edx
0x924436: mov     [esp+450h+var_438], 0FFFFFFFFh
0x92443E: mov     ecx, [edi+0Ch]
0x924441: mov     eax, [ecx]
0x924443: lea     edx, [esp+450h+var_420]
0x924447: push    edx
0x924448: push    esi
0x924449: call    dword ptr [eax+1Ch]
0x92444C: mov     ebx, [esp+450h+var_444]
0x924450: mov     eax, [esp+450h+var_408]
0x924454: add     edi, 1Ch
0x924457: cmp     edi, ebx
0x924459: jb      loc_9243A2
0x92445F: mov     ecx, [esp+450h+var_440]
0x924463: mov     edx, [esp+450h+var_434]
0x924467: add     ecx, 4
0x92446A: cmp     ecx, edx
0x92446C: mov     [esp+450h+var_440], ecx
0x924470: jb      loc_924383
0x924476: mov     ecx, [esp+450h+var_40C]
0x92447A: xor     eax, eax
0x92447C: test    ecx, ecx
0x92447E: mov     [esp+450h+var_440], eax
0x924482: jle     loc_924505
0x924488: mov     edi, [esp+450h+var_42C]
0x92448C: lea     esp, [esp+0]
0x924490: mov     ecx, [esp+450h+var_410]
0x924494: mov     eax, [ecx+eax*4]
0x924497: mov     edx, [eax+4]
0x92449A: mov     ecx, [edx+50h]
0x92449D: mov     ebx, [ecx+8]
0x9244A0: mov     edx, [eax+8]
0x9244A3: mov     edx, [edx+50h]
0x9244A6: add     ebx, edi
0x9244A8: mov     [esi+14h], ebx
0x9244AB: mov     ebx, [edx+8]
0x9244AE: add     ecx, 10h
0x9244B1: add     edx, 10h
0x9244B4: add     ebx, edi
0x9244B6: mov     [esi+1Ch], ecx
0x9244B9: mov     [esi+20h], edx
0x9244BC: mov     [esi+18h], ebx
0x9244BF: mov     ecx, [eax]
0x9244C1: mov     [esi+24h], ecx
0x9244C4: mov     edx, [eax+18h]
0x9244C7: mov     ecx, [esp+450h+var_438]
0x9244CB: mov     [esi+28h], edx
0x9244CE: cmp     [esp+450h+var_420], ecx
0x9244D2: jb      short loc_9244E4
0x9244D4: mov     edx, [esp+450h+var_418]
0x9244D8: mov     [esp+450h+var_420], edx
0x9244DC: mov     [esp+450h+var_438], 0FFFFFFFFh
0x9244E4: mov     eax, [eax+0Ch]
0x9244E7: mov     edx, [eax]
0x9244E9: lea     ecx, [esp+450h+var_420]
0x9244ED: push    ecx
0x9244EE: push    esi
0x9244EF: mov     ecx, eax
0x9244F1: call    dword ptr [edx+1Ch]
0x9244F4: mov     eax, [esp+450h+var_440]
0x9244F8: mov     ecx, [esp+450h+var_40C]
0x9244FC: inc     eax
0x9244FD: cmp     eax, ecx
0x9244FF: mov     [esp+450h+var_440], eax
0x924503: jl      short loc_924490
0x924505: mov     edx, [esp+450h+var_41C]
0x924509: mov     edi, [esp+450h+var_43C]
0x92450D: mov     dword ptr [edx], 400h
0x924513: mov     eax, [esp+450h+var_408]
0x924517: test    eax, eax
0x924519: js      short loc_924540
0x92451B: mov     ecx, [edi+19Ch]
0x924521: test    ecx, ecx
0x924523: jnz     short loc_92452B
0x924525: mov     ecx, ds:0BA7D9Ch
0x92452B: and     eax, 3FFFFFFFh
0x924530: push    14h
0x924532: shl     eax, 2
0x924535: push    eax
0x924536: mov     eax, [esp+458h+var_410]
0x92453A: push    eax
0x92453B: call    sub_8A75D0
0x924540: mov     ebx, large fs:2Ch
0x924547: mov     esi, ds:0BA9DE4h
0x92454D: mov     eax, [ebx+esi*4]
0x924550: mov     ecx, [eax+1A4h]
0x924556: cmp     ecx, [eax+1A8h]
0x92455C: jnb     short loc_924580
0x92455E: mov     ecx, [edi+1A4h]
0x924564: mov     dword ptr [ecx], offset aStsolve; "Stsolve"
0x92456A: rdtsc
0x92456C: mov     [esp+450h+var_444], eax
0x924570: mov     edx, [esp+450h+var_444]
0x924574: mov     [ecx+4], edx
0x924577: add     ecx, 0Ch
0x92457A: mov     [edi+1A4h], ecx
0x924580: mov     eax, [esp+450h+var_414]
0x924584: mov     ecx, [esp+450h+var_42C]
0x924588: mov     edx, [esp+450h+var_430]
0x92458C: mov     edi, [ebp+arg_4]
0x92458F: push    eax
0x924590: push    ecx
0x924591: push    edx
0x924592: push    edi
0x924593: call    sub_921A40
0x924598: mov     [esp+460h+var_430], eax
0x92459C: mov     eax, [ebx+esi*4]
0x92459F: mov     ecx, [eax+1A4h]
0x9245A5: mov     edx, [eax+1A8h]
0x9245AB: add     esp, 10h
0x9245AE: cmp     ecx, edx
0x9245B0: jnb     short loc_9245D2
0x9245B2: mov     edx, [ebp+arg_C]
0x9245B5: mov     ecx, eax
0x9245B7: mov     eax, [ecx+1A4h]
0x9245BD: mov     dword ptr [eax], offset aMinumjacobians; "MiNumJacobians"
0x9245C3: fild    dword ptr [edx+18h]
0x9245C6: add     eax, 8
0x9245C9: fstp    dword ptr [eax-4]
0x9245CC: mov     [ecx+1A4h], eax
0x9245D2: mov     eax, [ebx+esi*4]
0x9245D5: mov     ecx, [eax+1A4h]
0x9245DB: cmp     ecx, [eax+1A8h]
0x9245E1: jnb     short loc_924609
0x9245E3: mov     esi, [esp+450h+var_43C]
0x9245E7: mov     ecx, [esi+1A4h]
0x9245ED: mov     dword ptr [ecx], offset aStintegrate_0; "Stintegrate"
0x9245F3: rdtsc
0x9245F5: mov     [esp+450h+var_444], eax
0x9245F9: mov     edx, [esp+450h+var_444]
0x9245FD: mov     [ecx+4], edx
0x924600: add     ecx, 0Ch
0x924603: mov     [esi+1A4h], ecx
0x924609: cmp     [esp+450h+var_430], 1
0x92460E: jnz     short loc_924649
0x924610: mov     eax, [edi+100h]
0x924616: mov     esi, [ebp+arg_10]
0x924619: mov     [esp+450h+var_444], eax
0x92461D: cmp     esi, [esp+450h+var_434]
0x924621: jnb     short loc_924649
0x924623: mov     edi, [esp+450h+var_444]
0x924627: mov     ecx, [esi]
0x924629: mov     ecx, [ecx+50h]
0x92462C: mov     eax, [ecx+8]
0x92462F: add     eax, [esp+450h+var_42C]
0x924633: mov     edx, [ecx]
0x924635: push    eax
0x924636: mov     eax, [ebp+arg_0]
0x924639: push    edi
0x92463A: push    eax
0x92463B: call    dword ptr [edx+18h]
0x92463E: mov     eax, [esp+450h+var_434]
0x924642: add     esi, 4
0x924645: cmp     esi, eax
0x924647: jb      short loc_924627
0x924649: mov     ecx, ds:0BA9DE4h
0x92464F: mov     eax, [ebx+ecx*4]
0x924652: mov     edx, [eax+1A4h]
0x924658: cmp     edx, [eax+1A8h]
0x92465E: mov     esi, [esp+450h+var_43C]
0x924662: jnb     short loc_924686
0x924664: mov     ecx, [esi+1A4h]
0x92466A: mov     dword ptr [ecx], offset aLt_0; "lt"
0x924670: rdtsc
0x924672: mov     [esp+450h+var_444], eax
0x924676: mov     eax, [esp+450h+var_444]
0x92467A: mov     [ecx+4], eax
0x92467D: add     ecx, 0Ch
0x924680: mov     [esi+1A4h], ecx
0x924686: mov     eax, [esp+450h+var_424]
0x92468A: test    eax, eax
0x92468C: jz      short loc_9246AC
0x92468E: mov     ecx, [esi+19Ch]
0x924694: test    ecx, ecx
0x924696: jnz     short loc_92469E
0x924698: mov     ecx, ds:0BA7D9Ch
0x92469E: cmp     eax, [ecx+28h]
0x9246A1: mov     [ecx+20h], eax
0x9246A4: jnz     short loc_9246AC
0x9246A6: mov     edx, [ecx]
0x9246A8: push    eax
0x9246A9: call    dword ptr [edx+10h]
0x9246AC: mov     ecx, [esi+19Ch]
0x9246B2: test    ecx, ecx
0x9246B4: jnz     short loc_9246BC
0x9246B6: mov     ecx, ds:0BA7D9Ch
0x9246BC: mov     eax, [esp+450h+var_428]
0x9246C0: cmp     eax, [ecx+28h]
0x9246C3: mov     [ecx+20h], eax
0x9246C6: jnz     short loc_9246CE
0x9246C8: mov     edx, [ecx]
0x9246CA: push    eax
0x9246CB: call    dword ptr [edx+10h]
0x9246CE: pop     edi
0x9246CF: pop     esi
0x9246D0: pop     ebx
0x9246D1: mov     esp, ebp
0x9246D3: pop     ebp
0x9246D4: retn
