0x9011D0: push    ebp
0x9011D1: mov     ebp, esp
0x9011D3: and     esp, 0FFFFFFF0h
0x9011D6: sub     esp, 74h
0x9011D9: push    ebx
0x9011DA: push    esi
0x9011DB: mov     esi, ds:0BA9DE4h
0x9011E1: push    edi
0x9011E2: mov     edi, large fs:2Ch
0x9011E9: mov     eax, [edi+esi*4]
0x9011EC: mov     edx, [eax+1A8h]
0x9011F2: mov     ebx, ecx
0x9011F4: mov     ecx, [eax+1A4h]
0x9011FA: cmp     ecx, edx
0x9011FC: mov     [esp+80h+var_5C], ebx
0x901200: jnb     short loc_901231
0x901202: mov     ebx, eax
0x901204: mov     ecx, [ebx+1A4h]
0x90120A: mov     dword ptr [ecx], offset aLtheightfield; "LtHeightField"
0x901210: mov     dword ptr [ecx+0Ch], offset aBta
0x901217: rdtsc
0x901219: mov     [esp+80h+var_58], eax
0x90121D: mov     edx, [esp+80h+var_58]
0x901221: mov     [ecx+4], edx
0x901224: add     ecx, 10h
0x901227: mov     [ebx+1A4h], ecx
0x90122D: mov     ebx, [esp+80h+var_5C]
0x901231: mov     eax, [ebp+arg_0]
0x901234: mov     ecx, [eax]
0x901236: mov     eax, [eax+8]
0x901239: mov     [esp+80h+var_64], ecx
0x90123D: mov     ecx, [ebp+arg_4]
0x901240: mov     edx, [ecx]
0x901242: mov     ecx, [ecx+8]
0x901245: push    eax
0x901246: push    ecx
0x901247: lea     ecx, [esp+88h+var_40]
0x90124B: mov     [esp+88h+var_50], edx
0x90124F: call    sub_8B1FF0
0x901254: mov     eax, [edi+esi*4]
0x901257: mov     edx, [ebx+10h]
0x90125A: mov     [esp+80h+var_6C], eax
0x90125E: mov     eax, [eax+19Ch]
0x901264: test    eax, eax
0x901266: mov     [esp+80h+var_60], edx
0x90126A: mov     ecx, eax
0x90126C: jnz     short loc_901274
0x90126E: mov     ecx, ds:0BA7D9Ch
0x901274: lea     eax, [edx+1]
0x901277: mov     edx, [ecx+20h]
0x90127A: shl     eax, 4
0x90127D: and     eax, 0FFFFFFF0h
0x901280: lea     esi, [edx+eax]
0x901283: cmp     esi, [ecx+2Ch]
0x901286: mov     [esp+80h+var_54], eax
0x90128A: ja      short loc_901297
0x90128C: mov     [ecx+20h], esi
0x90128F: mov     esi, edx
0x901291: mov     [esp+80h+var_68], esi
0x901295: jmp     short loc_9012A3
0x901297: mov     edx, [ecx]
0x901299: push    eax
0x90129A: call    dword ptr [edx+0Ch]
0x90129D: mov     [esp+80h+var_68], eax
0x9012A1: mov     esi, eax
0x9012A3: mov     eax, ds:0BA9DE4h
0x9012A8: mov     eax, [edi+eax*4]
0x9012AB: mov     ecx, [eax+1A4h]
0x9012B1: cmp     ecx, [eax+1A8h]
0x9012B7: mov     ebx, [ebx+0Ch]
0x9012BA: jnb     short loc_9012E2
0x9012BC: mov     edi, [esp+80h+var_6C]
0x9012C0: mov     ecx, [edi+1A4h]
0x9012C6: mov     dword ptr [ecx], offset aStgetspheres; "StgetSpheres"
0x9012CC: rdtsc
0x9012CE: mov     [esp+80h+var_58], eax
0x9012D2: mov     edx, [esp+80h+var_58]
0x9012D6: mov     [ecx+4], edx
0x9012D9: add     ecx, 0Ch
0x9012DC: mov     [edi+1A4h], ecx
0x9012E2: mov     ecx, [esp+80h+var_64]
0x9012E6: mov     eax, [ecx]
0x9012E8: mov     edi, [esp+80h+var_60]
0x9012EC: push    esi
0x9012ED: call    dword ptr [eax+20h]
0x9012F0: movaps  xmm1, [esp+80h+var_40]
0x9012F5: movaps  xmm2, [esp+80h+anonymous_0]
0x9012FA: movaps  xmm3, [esp+80h+anonymous_1]
0x9012FF: movaps  xmm4, [esp+80h+anonymous_2]
0x901304: movaps  xmm0, xmmword ptr [eax]
0x901307: fld     dword ptr [eax+0Ch]
0x90130A: movaps  xmm5, xmm0
0x90130D: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x901311: movaps  xmm6, xmm3
0x901314: mulps   xmm6, xmm5
0x901317: movaps  xmm5, xmm0
0x90131A: shufps  xmm5, xmm0, 55h ; 'U'
0x90131E: movaps  xmm7, xmm2
0x901321: mulps   xmm7, xmm5
0x901324: movaps  xmm5, xmm0
0x901327: shufps  xmm5, xmm0, 0
0x90132B: movaps  xmm0, xmm1
0x90132E: mulps   xmm0, xmm5
0x901331: addps   xmm6, xmm4
0x901334: addps   xmm0, xmm7
0x901337: addps   xmm0, xmm6
0x90133A: movaps  xmmword ptr [esi], xmm0
0x90133D: fstp    dword ptr [esi+0Ch]
0x901340: add     esi, 10h
0x901343: add     eax, 10h
0x901346: dec     edi
0x901347: test    edi, edi
0x901349: jg      short loc_901304
0x90134B: mov     esi, [esp+80h+var_6C]
0x90134F: mov     ecx, [esi+19Ch]
0x901355: test    ecx, ecx
0x901357: jnz     short loc_90135F
0x901359: mov     ecx, ds:0BA7D9Ch
0x90135F: mov     eax, [ecx+20h]
0x901362: mov     edi, [esp+80h+var_54]
0x901366: lea     edx, [eax+edi]
0x901369: cmp     edx, [ecx+2Ch]
0x90136C: ja      short loc_901379
0x90136E: mov     edi, eax
0x901370: mov     [ecx+20h], edx
0x901373: mov     [esp+80h+var_64], edi
0x901377: jmp     short loc_901385
0x901379: mov     edx, [ecx]
0x90137B: push    edi
0x90137C: call    dword ptr [edx+0Ch]
0x90137F: mov     [esp+80h+var_64], eax
0x901383: mov     edi, eax
0x901385: mov     ecx, ds:0BA9DE4h
0x90138B: mov     eax, large fs:2Ch
0x901391: mov     eax, [eax+ecx*4]
0x901394: mov     edx, [eax+1A4h]
0x90139A: cmp     edx, [eax+1A8h]
0x9013A0: jnb     short loc_9013C4
0x9013A2: mov     ecx, [esi+1A4h]
0x9013A8: mov     dword ptr [ecx], offset aStcollide_0; "Stcollide"
0x9013AE: rdtsc
0x9013B0: mov     [esp+80h+var_54], eax
0x9013B4: mov     eax, [esp+80h+var_54]
0x9013B8: mov     [ecx+4], eax
0x9013BB: add     ecx, 0Ch
0x9013BE: mov     [esi+1A4h], ecx
0x9013C4: mov     esi, [ebp+arg_8]
0x9013C7: mov     eax, [esi+8]
0x9013CA: mov     ecx, [esp+80h+var_68]
0x9013CE: mov     edx, [esp+80h+var_60]
0x9013D2: mov     [esp+80h+var_4C], ecx
0x9013D6: mov     ecx, [esp+80h+var_50]
0x9013DA: mov     [esp+80h+var_44], eax
0x9013DE: push    edi
0x9013DF: lea     eax, [esp+84h+var_4C]
0x9013E3: mov     [esp+84h+var_48], edx
0x9013E7: mov     edx, [ecx]
0x9013E9: push    eax
0x9013EA: call    dword ptr [edx+1Ch]
0x9013ED: mov     ecx, large fs:2Ch
0x9013F4: mov     edx, ds:0BA9DE4h
0x9013FA: mov     eax, [ecx+edx*4]
0x9013FD: mov     ecx, [eax+1A4h]
0x901403: cmp     ecx, [eax+1A8h]
0x901409: jnb     short loc_901435
0x90140B: mov     edx, [esp+80h+var_6C]
0x90140F: mov     ecx, [edx+1A4h]
0x901415: mov     dword ptr [ecx], offset aStexamine_0; "Stexamine"
0x90141B: rdtsc
0x90141D: mov     [esp+80h+var_50], eax
0x901421: mov     eax, [esp+80h+var_50]
0x901425: mov     edx, [esp+80h+var_6C]
0x901429: mov     [ecx+4], eax
0x90142C: add     ecx, 0Ch
0x90142F: mov     [edx+1A4h], ecx
0x901435: mov     eax, [esi+8]
0x901438: mov     [esp+80h+var_50], eax
0x90143C: mov     eax, [esp+80h+var_60]
0x901440: dec     eax
0x901441: js      loc_90158F
0x901447: mov     ecx, [esp+80h+var_68]
0x90144B: sub     ecx, [esp+80h+var_64]
0x90144F: inc     eax
0x901450: mov     [esp+80h+var_60], ecx
0x901454: mov     [esp+80h+var_58], eax
0x901458: jmp     short loc_901460
0x90145A: align 10h
0x901460: fld     dword ptr [edi+0Ch]
0x901463: fcomp   [esp+80h+var_50]
0x901467: fnstsw  ax
0x901469: test    ah, 41h
0x90146C: jnz     short loc_901494
0x90146E: xor     eax, eax
0x901470: mov     ax, [ebx]
0x901473: cmp     ax, 0FFFFh
0x901477: jz      loc_90157A
0x90147D: mov     ecx, [esp+80h+var_5C]
0x901481: mov     ecx, [ecx+8]
0x901484: mov     edx, [ecx]
0x901486: push    eax
0x901487: call    dword ptr [edx+10h]
0x90148A: mov     word ptr [ebx], 0FFFFh
0x90148F: jmp     loc_901576
0x901494: fld     dword ptr [ecx+edi+0Ch]
0x901498: movaps  xmm1, xmmword ptr [edi]
0x90149B: mov     edx, [ebp+arg_C]
0x90149E: fchs
0x9014A0: mov     esi, [edx]
0x9014A2: fstp    [esp+80h+var_54]
0x9014A6: movss   xmm0, [esp+80h+var_54]
0x9014AC: movaps  xmm2, xmm0
0x9014AF: shufps  xmm2, xmm0, 0
0x9014B3: movaps  xmm0, xmmword ptr [ecx+edi]
0x9014B7: mov     ecx, [ebp+arg_4]
0x9014BA: mov     eax, [ecx+8]
0x9014BD: movaps  xmm3, xmmword ptr [eax+20h]
0x9014C1: mulps   xmm2, xmm1
0x9014C4: movaps  xmm1, xmmword ptr [eax+30h]
0x9014C8: addps   xmm0, xmm2
0x9014CB: movaps  xmm2, xmm0
0x9014CE: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9014D2: mulps   xmm3, xmm2
0x9014D5: movaps  xmm2, xmmword ptr [eax+10h]
0x9014D9: addps   xmm3, xmm1
0x9014DC: movaps  xmm1, xmm0
0x9014DF: shufps  xmm1, xmm0, 55h ; 'U'
0x9014E3: mulps   xmm2, xmm1
0x9014E6: movaps  xmm1, xmm0
0x9014E9: shufps  xmm1, xmm0, 0
0x9014ED: movaps  xmm0, xmmword ptr [eax]
0x9014F0: mulps   xmm0, xmm1
0x9014F3: addps   xmm0, xmm2
0x9014F6: addps   xmm0, xmm3
0x9014F9: movaps  xmmword ptr [esi], xmm0
0x9014FC: movaps  xmm0, xmmword ptr [edi]
0x9014FF: mov     eax, [ecx+8]
0x901502: movaps  xmm2, xmmword ptr [eax+20h]
0x901506: movaps  xmm3, xmmword ptr [eax+10h]
0x90150A: movaps  xmm1, xmm0
0x90150D: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x901511: mulps   xmm2, xmm1
0x901514: movaps  xmm1, xmm0
0x901517: shufps  xmm1, xmm0, 55h ; 'U'
0x90151B: mulps   xmm3, xmm1
0x90151E: movaps  xmm1, xmm0
0x901521: shufps  xmm1, xmm0, 0
0x901525: movaps  xmm0, xmmword ptr [eax]
0x901528: mulps   xmm0, xmm1
0x90152B: addps   xmm0, xmm3
0x90152E: addps   xmm0, xmm2
0x901531: movaps  xmmword ptr [esi+10h], xmm0
0x901535: mov     eax, [edi+0Ch]
0x901538: mov     [esi+1Ch], eax
0x90153B: cmp     word ptr [ebx], 0FFFFh
0x901540: jnz     short loc_90156C
0x901542: mov     eax, [ebp+arg_8]
0x901545: mov     ecx, [esp+80h+var_5C]
0x901549: mov     ecx, [ecx+8]
0x90154C: mov     edx, [ecx]
0x90154E: push    esi
0x90154F: push    eax
0x901550: mov     eax, [ebp+arg_4]
0x901553: push    eax
0x901554: mov     eax, [ebp+arg_0]
0x901557: push    eax
0x901558: call    dword ptr [edx+8]
0x90155B: cmp     ax, 0FFFFh
0x90155F: mov     [ebx], ax
0x901562: jz      short loc_90156F
0x901564: mov     eax, [ebp+arg_C]
0x901567: add     dword ptr [eax], 30h ; '0'
0x90156A: jmp     short loc_90156F
0x90156C: add     dword ptr [edx], 30h ; '0'
0x90156F: mov     cx, [ebx]
0x901572: mov     [esi+20h], cx
0x901576: mov     ecx, [esp+80h+var_60]
0x90157A: mov     eax, [esp+80h+var_58]
0x90157E: add     edi, 10h
0x901581: add     ebx, 2
0x901584: dec     eax
0x901585: mov     [esp+80h+var_58], eax
0x901589: jnz     loc_901460
0x90158F: mov     esi, [esp+80h+var_6C]
0x901593: mov     ecx, [esi+19Ch]
0x901599: test    ecx, ecx
0x90159B: jnz     short loc_9015A3
0x90159D: mov     ecx, ds:0BA7D9Ch
0x9015A3: mov     eax, [esp+80h+var_64]
0x9015A7: cmp     eax, [ecx+28h]
0x9015AA: mov     [ecx+20h], eax
0x9015AD: jnz     short loc_9015B5
0x9015AF: mov     edx, [ecx]
0x9015B1: push    eax
0x9015B2: call    dword ptr [edx+10h]
0x9015B5: mov     ecx, [esi+19Ch]
0x9015BB: test    ecx, ecx
0x9015BD: jnz     short loc_9015C5
0x9015BF: mov     ecx, ds:0BA7D9Ch
0x9015C5: mov     eax, [esp+80h+var_68]
0x9015C9: cmp     eax, [ecx+28h]
0x9015CC: mov     [ecx+20h], eax
0x9015CF: jnz     short loc_9015D7
0x9015D1: mov     edx, [ecx]
0x9015D3: push    eax
0x9015D4: call    dword ptr [edx+10h]
0x9015D7: mov     ecx, ds:0BA9DE4h
0x9015DD: mov     eax, large fs:2Ch
0x9015E3: mov     eax, [eax+ecx*4]
0x9015E6: mov     edx, [eax+1A4h]
0x9015EC: cmp     edx, [eax+1A8h]
0x9015F2: jnb     short loc_901616
0x9015F4: mov     ecx, [esi+1A4h]
0x9015FA: mov     dword ptr [ecx], offset aLt_0; "lt"
0x901600: rdtsc
0x901602: mov     [esp+80h+var_50], eax
0x901606: mov     eax, [esp+80h+var_50]
0x90160A: mov     [ecx+4], eax
0x90160D: add     ecx, 0Ch
0x901610: mov     [esi+1A4h], ecx
0x901616: pop     edi
0x901617: pop     esi
0x901618: pop     ebx
0x901619: mov     esp, ebp
0x90161B: pop     ebp
0x90161C: retn    10h
