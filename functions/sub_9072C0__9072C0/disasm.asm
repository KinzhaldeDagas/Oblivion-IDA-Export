0x9072C0: push    ebp
0x9072C1: mov     ebp, esp
0x9072C3: and     esp, 0FFFFFFF0h
0x9072C6: sub     esp, 494h
0x9072CC: mov     eax, ds:0B30AACh
0x9072D1: push    ebx
0x9072D2: mov     ebx, [ebp+arg_8]
0x9072D5: push    esi
0x9072D6: push    edi
0x9072D7: mov     edi, [ebp+arg_4]
0x9072DA: mov     [esp+4A0h+var_4], eax
0x9072E1: lea     eax, [esp+4A0h+var_460]
0x9072E5: push    eax
0x9072E6: mov     esi, ecx
0x9072E8: mov     ecx, [ebp+arg_0]
0x9072EB: push    ebx
0x9072EC: push    edi
0x9072ED: push    ecx
0x9072EE: mov     [esp+4B0h+var_47C], esi
0x9072F2: call    sub_9067E0
0x9072F7: movaps  xmm0, [esp+4B0h+var_460]
0x9072FC: movaps  xmmword ptr [esi+20h], xmm0
0x907300: movaps  xmm0, [esp+4B0h+var_450]
0x907305: add     esp, 10h
0x907308: lea     edx, [esp+4A0h+var_434]
0x90730C: movaps  xmmword ptr [esi+30h], xmm0
0x907310: mov     edi, [edi]
0x907312: mov     [esp+4A0h+var_440], edx
0x907316: lea     ecx, [esp+4A0h+var_440]
0x90731A: push    ecx
0x90731B: lea     edx, [esp+4A4h+var_460]
0x90731F: mov     [esp+4A4h+var_43C], 0
0x907327: mov     [esp+4A4h+var_438], 80000080h
0x90732F: mov     eax, [edi]
0x907331: push    edx
0x907332: mov     ecx, edi
0x907334: call    dword ptr [eax+24h]
0x907337: mov     edx, [esp+4A0h+var_43C]
0x90733B: cmp     edx, 1
0x90733E: mov     edi, [edi+0Ch]
0x907341: mov     byte ptr [esp+4A0h+var_480], 0
0x907346: jle     short loc_907362
0x907348: mov     eax, [esp+4A0h+var_480]
0x90734C: mov     ecx, [esp+4A0h+var_440]
0x907350: push    eax
0x907351: dec     edx
0x907352: push    edx
0x907353: push    0
0x907355: push    ecx
0x907356: call    sub_8F6580
0x90735B: mov     edx, [esp+4B0h+var_43C]
0x90735F: add     esp, 10h
0x907362: mov     eax, [ebp+arg_4]
0x907365: mov     [esp+4A0h+var_220], eax
0x90736C: mov     eax, [eax+8]
0x90736F: mov     [esp+4A0h+var_224], eax
0x907376: mov     al, ds:0BA81CDh
0x90737B: test    al, al
0x90737D: mov     [esp+4A0h+var_230], edi
0x907384: jz      loc_907669
0x90738A: mov     esi, [esp+4A0h+var_47C]
0x90738E: mov     ecx, [esi+8]
0x907391: mov     eax, [esi+10h]
0x907394: mov     edi, [esi+0Ch]
0x907397: add     esi, 0Ch
0x90739A: lea     eax, [eax+eax*2]
0x90739D: mov     [esp+4A0h+var_474], ecx
0x9073A1: lea     ecx, [edi+eax*4]
0x9073A4: mov     [esp+4A0h+var_494], ecx
0x9073A8: mov     ecx, [esp+4A0h+var_440]
0x9073AC: lea     eax, [ecx+edx*4]
0x9073AF: mov     [esp+4A0h+var_490], eax
0x9073B3: cmp     edi, [esp+4A0h+var_494]
0x9073B7: mov     ebx, ecx
0x9073B9: jz      loc_907483
0x9073BF: nop
0x9073C0: cmp     ebx, [esp+4A0h+var_490]
0x9073C4: jz      short loc_9073D4
0x9073C6: mov     eax, [edi]
0x9073C8: cmp     eax, [ebx]
0x9073CA: jnz     short loc_9073D4
0x9073CC: add     ebx, 4
0x9073CF: jmp     loc_907474
0x9073D4: cmp     ecx, [esp+4A0h+var_490]
0x9073D8: mov     ebx, ecx
0x9073DA: mov     [esp+4A0h+var_48C], ebx
0x9073DE: jz      short loc_9073F9
0x9073E0: mov     eax, [edi]
0x9073E2: cmp     eax, [ebx]
0x9073E4: jz      loc_907522
0x9073EA: mov     eax, [esp+4A0h+var_490]
0x9073EE: add     ebx, 4
0x9073F1: cmp     ebx, eax
0x9073F3: jnz     short loc_9073E0
0x9073F5: mov     [esp+4A0h+var_48C], ebx
0x9073F9: mov     ecx, [edi+8]
0x9073FC: mov     edx, [ecx]
0x9073FE: call    dword ptr [edx+18h]
0x907401: mov     eax, [esi+4]
0x907404: mov     edx, [esi]
0x907406: dec     eax
0x907407: mov     [esi+4], eax
0x90740A: mov     ecx, edi
0x90740C: sub     ecx, edx
0x90740E: mov     eax, 2AAAAAABh
0x907413: imul    ecx
0x907415: mov     ecx, [esi+4]
0x907418: sar     edx, 1
0x90741A: mov     eax, edx
0x90741C: shr     eax, 1Fh
0x90741F: add     eax, edx
0x907421: cmp     eax, ecx
0x907423: jge     short loc_90745E
0x907425: lea     ecx, [eax+eax*2]
0x907428: shl     ecx, 2
0x90742B: mov     [esp+4A0h+var_488], ecx
0x90742F: nop
0x907430: mov     edx, [esi]
0x907432: add     ecx, edx
0x907434: lea     edx, [ecx+0Ch]
0x907437: mov     ebx, [edx]
0x907439: mov     [ecx], ebx
0x90743B: mov     ebx, [edx+4]
0x90743E: mov     [ecx+4], ebx
0x907441: mov     edx, [edx+8]
0x907444: mov     [ecx+8], edx
0x907447: mov     ecx, [esp+4A0h+var_488]
0x90744B: mov     edx, [esi+4]
0x90744E: inc     eax
0x90744F: add     ecx, 0Ch
0x907452: cmp     eax, edx
0x907454: mov     [esp+4A0h+var_488], ecx
0x907458: jl      short loc_907430
0x90745A: mov     ebx, [esp+4A0h+var_48C]
0x90745E: mov     eax, [esp+4A0h+var_494]
0x907462: mov     edx, [esp+4A0h+var_43C]
0x907466: mov     ecx, [esp+4A0h+var_440]
0x90746A: sub     edi, 0Ch
0x90746D: sub     eax, 0Ch
0x907470: mov     [esp+4A0h+var_494], eax
0x907474: mov     eax, [esp+4A0h+var_494]
0x907478: add     edi, 0Ch
0x90747B: cmp     edi, eax
0x90747D: jnz     loc_9073C0
0x907483: mov     eax, [esi+4]
0x907486: cmp     edx, eax
0x907488: jz      loc_907AD7
0x90748E: mov     edi, [esi]
0x907490: lea     ebx, [eax+eax*2]
0x907493: lea     ebx, [edi+ebx*4]
0x907496: lea     edx, [ecx+edx*4]
0x907499: cmp     ecx, edx
0x90749B: mov     [esp+4A0h+var_488], ebx
0x90749F: mov     ebx, ecx
0x9074A1: mov     [esp+4A0h+var_494], ebx
0x9074A5: mov     [esp+4A0h+var_490], edx
0x9074A9: jz      loc_907AD7
0x9074AF: nop
0x9074B0: cmp     edi, [esp+4A0h+var_488]
0x9074B4: jz      short loc_9074C0
0x9074B6: mov     edx, [edi]
0x9074B8: cmp     edx, [ebx]
0x9074BA: jz      loc_90764E
0x9074C0: mov     edi, ebx
0x9074C2: sub     edi, ecx
0x9074C4: lea     ebx, [eax+1]
0x9074C7: sar     edi, 2
0x9074CA: sub     eax, edi
0x9074CC: mov     [esp+4A0h+var_47C], eax
0x9074D0: mov     eax, [esi+8]
0x9074D3: and     eax, 3FFFFFFFh
0x9074D8: cmp     eax, ebx
0x9074DA: mov     [esp+4A0h+var_478], ebx
0x9074DE: jge     short loc_9074F4
0x9074E0: add     eax, eax
0x9074E2: cmp     ebx, eax
0x9074E4: jl      short loc_9074E8
0x9074E6: mov     eax, ebx
0x9074E8: push    0Ch
0x9074EA: push    eax
0x9074EB: push    esi
0x9074EC: call    sub_8A6E40
0x9074F1: add     esp, 0Ch
0x9074F4: mov     ecx, [esi]
0x9074F6: lea     eax, [edi+edi*2]
0x9074F9: shl     eax, 2
0x9074FC: lea     edi, [eax+ecx]
0x9074FF: mov     ecx, [esp+4A0h+var_47C]
0x907503: dec     ecx
0x907504: lea     edx, [edi+0Ch]
0x907507: mov     [esp+4A0h+var_480], edx
0x90750B: js      short loc_907558
0x90750D: lea     ebx, [ecx+ecx*2]
0x907510: lea     edx, [edx+ebx*4]
0x907513: sub     edi, [esp+4A0h+var_480]
0x907517: inc     ecx
0x907518: mov     [esp+4A0h+var_47C], edi
0x90751C: mov     [esp+4A0h+var_488], ecx
0x907520: jmp     short loc_907532
0x907522: mov     [esp+4A0h+var_48C], ebx
0x907526: add     ebx, 4
0x907529: jmp     loc_907474
0x90752E: mov     edi, [esp+4A0h+var_47C]
0x907532: add     edi, edx
0x907534: mov     ebx, [edi]
0x907536: mov     ecx, edx
0x907538: mov     [ecx], ebx
0x90753A: mov     ebx, [edi+4]
0x90753D: mov     [ecx+4], ebx
0x907540: mov     edi, [edi+8]
0x907543: mov     [ecx+8], edi
0x907546: mov     ecx, [esp+4A0h+var_488]
0x90754A: sub     edx, 0Ch
0x90754D: dec     ecx
0x90754E: mov     [esp+4A0h+var_488], ecx
0x907552: jnz     short loc_90752E
0x907554: mov     ebx, [esp+4A0h+var_478]
0x907558: mov     edx, [esp+4A0h+var_494]
0x90755C: mov     edi, [esi]
0x90755E: mov     ecx, [esp+4A0h+var_230]
0x907565: mov     [esi+4], ebx
0x907568: mov     ebx, [edx]
0x90756A: lea     edx, [esp+4A0h+var_210]
0x907571: push    edx
0x907572: add     edi, eax
0x907574: mov     eax, [ecx]
0x907576: push    ebx
0x907577: call    dword ptr [eax+28h]
0x90757A: mov     [esp+4A0h+var_228], ebx
0x907581: mov     ebx, [esp+4A0h+var_494]
0x907585: mov     [esp+4A0h+var_22C], eax
0x90758C: mov     ebx, [ebx]
0x90758E: mov     eax, [ebp+arg_8]
0x907591: mov     ecx, [eax+4]
0x907594: mov     edx, [ecx]
0x907596: push    ebx
0x907597: mov     ebx, [esp+4A4h+var_230]
0x90759E: push    ebx
0x90759F: lea     ebx, [esp+4A8h+var_22C]
0x9075A6: push    ebx
0x9075A7: mov     ebx, [ebp+arg_0]
0x9075AA: push    ebx
0x9075AB: push    eax
0x9075AC: lea     eax, [esp+4B4h+var_484+3]
0x9075B0: push    eax
0x9075B1: call    dword ptr [edx]
0x9075B3: cmp     byte ptr [eax], 0
0x9075B6: jz      short loc_907627
0x9075B8: mov     ecx, [ebp+arg_8]
0x9075BB: mov     edx, [ecx]
0x9075BD: mov     eax, ebx
0x9075BF: mov     ecx, [eax]
0x9075C1: mov     [esp+4A0h+var_48C], edx
0x9075C5: mov     edx, [ecx]
0x9075C7: call    dword ptr [edx+8]
0x9075CA: mov     ecx, [esp+4A0h+var_22C]
0x9075D1: mov     ebx, eax
0x9075D3: mov     eax, [ecx]
0x9075D5: call    dword ptr [eax+8]
0x9075D8: mov     ecx, [ebp+arg_8]
0x9075DB: mov     dl, [ecx+0Ch]
0x9075DE: test    dl, dl
0x9075E0: mov     ecx, [esp+4A0h+var_48C]
0x9075E4: jz      short loc_9075EE
0x9075E6: add     ecx, 590h
0x9075EC: jmp     short loc_9075F4
0x9075EE: add     ecx, 190h
0x9075F4: shl     ebx, 5
0x9075F7: add     ebx, ecx
0x9075F9: movzx   eax, byte ptr [ebx+eax]
0x9075FD: mov     ecx, [esp+4A0h+var_474]
0x907601: lea     edx, [eax+eax*4]
0x907604: mov     eax, [esp+4A0h+var_48C]
0x907608: mov     eax, [eax+edx*4+990h]
0x90760F: mov     edx, [ebp+arg_8]
0x907612: push    ecx
0x907613: push    edx
0x907614: mov     edx, [ebp+arg_0]
0x907617: lea     ecx, [esp+4A8h+var_22C]
0x90761E: push    ecx
0x90761F: push    edx
0x907620: call    eax
0x907622: add     esp, 10h
0x907625: jmp     short loc_90762C
0x907627: call    sub_8E0970
0x90762C: mov     ebx, [esp+4A0h+var_494]
0x907630: mov     [edi+8], eax
0x907633: mov     eax, [esp+4A0h+var_494]
0x907637: mov     ecx, [eax]
0x907639: mov     [edi], ecx
0x90763B: mov     eax, [esi+4]
0x90763E: mov     ecx, [esi]
0x907640: lea     edx, [eax+eax*2]
0x907643: lea     edx, [ecx+edx*4]
0x907646: mov     ecx, [esp+4A0h+var_440]
0x90764A: mov     [esp+4A0h+var_488], edx
0x90764E: mov     edx, [esp+4A0h+var_490]
0x907652: add     ebx, 4
0x907655: add     edi, 0Ch
0x907658: cmp     ebx, edx
0x90765A: mov     [esp+4A0h+var_494], ebx
0x90765E: jnz     loc_9074B0
0x907664: jmp     loc_907AD7
0x907669: cmp     edx, 1
0x90766C: mov     byte ptr [esp+4A0h+var_480], 0
0x907671: jle     short loc_90768D
0x907673: mov     eax, [esp+4A0h+var_480]
0x907677: mov     ecx, [esp+4A0h+var_440]
0x90767B: push    eax
0x90767C: dec     edx
0x90767D: push    edx
0x90767E: push    0
0x907680: push    ecx
0x907681: call    sub_8F6580
0x907686: mov     edx, [esp+4B0h+var_43C]
0x90768A: add     esp, 10h
0x90768D: mov     eax, [esi+8]
0x907690: mov     edi, [esi+0Ch]
0x907693: mov     esi, [esi+10h]
0x907696: mov     [esp+4A0h+var_480], eax
0x90769A: lea     ecx, [esi+esi*2]
0x90769D: lea     eax, [edi+ecx*4]
0x9076A0: mov     [esp+4A0h+var_474], eax
0x9076A4: mov     eax, [esp+4A0h+var_440]
0x9076A8: lea     ecx, [eax+edx*4]
0x9076AB: mov     [esp+4A0h+var_494], eax
0x9076AF: xor     eax, eax
0x9076B1: mov     [esp+4A0h+var_470], eax
0x9076B5: mov     [esp+4A0h+var_46C], eax
0x9076B9: mov     eax, large fs:2Ch
0x9076BF: mov     [esp+4A0h+var_478], ecx
0x9076C3: mov     ecx, ds:0BA9DE4h
0x9076C9: mov     eax, [eax+ecx*4]
0x9076CC: mov     [esp+4A0h+var_488], eax
0x9076D0: mov     eax, [eax+19Ch]
0x9076D6: test    eax, eax
0x9076D8: mov     esi, edx
0x9076DA: mov     [esp+4A0h+var_468], 80000000h
0x9076E2: jnz     short loc_9076E9
0x9076E4: mov     eax, ds:0BA7D9Ch
0x9076E9: mov     ecx, [eax+20h]
0x9076EC: lea     edx, [edx+edx*2]
0x9076EF: lea     edx, ds:10h[edx*4]
0x9076F6: and     edx, 0FFFFFFF0h
0x9076F9: mov     [esp+4A0h+var_48C], ecx
0x9076FD: add     ecx, edx
0x9076FF: cmp     ecx, [eax+2Ch]
0x907702: ja      short loc_90770D
0x907704: mov     [eax+20h], ecx
0x907707: mov     eax, [esp+4A0h+var_48C]
0x90770B: jmp     short loc_90771D
0x90770D: mov     ecx, [eax]
0x90770F: mov     [esp+4A0h+var_48C], ecx
0x907713: mov     ecx, eax
0x907715: mov     eax, [esp+4A0h+var_48C]
0x907719: push    edx
0x90771A: call    dword ptr [eax+0Ch]
0x90771D: or      esi, 80000000h
0x907723: mov     ecx, esi
0x907725: mov     [esp+4A0h+var_470], eax
0x907729: mov     [esp+4A0h+var_468], ecx
0x90772D: mov     [esp+4A0h+var_464], eax
0x907731: mov     eax, [esp+4A0h+var_43C]
0x907735: and     ecx, 3FFFFFFFh
0x90773B: cmp     ecx, eax
0x90773D: mov     esi, eax
0x90773F: jge     short loc_907759
0x907741: add     ecx, ecx
0x907743: cmp     eax, ecx
0x907745: jge     short loc_907749
0x907747: mov     eax, ecx
0x907749: push    0Ch
0x90774B: push    eax
0x90774C: lea     edx, [esp+4A8h+var_470]
0x907750: push    edx
0x907751: call    sub_8A6E40
0x907756: add     esp, 0Ch
0x907759: mov     eax, [esp+4A0h+var_470]
0x90775D: mov     [esp+4A0h+var_490], eax
0x907761: mov     eax, [esp+4A0h+var_474]
0x907765: cmp     edi, eax
0x907767: mov     [esp+4A0h+var_46C], esi
0x90776B: jz      loc_9078DD
0x907771: mov     ecx, [esp+4A0h+var_494]
0x907775: cmp     ecx, [esp+4A0h+var_478]
0x907779: jz      loc_9078C0
0x90777F: mov     esi, [ecx]
0x907781: mov     eax, [edi]
0x907783: cmp     esi, eax
0x907785: jnz     short loc_9077B5
0x907787: mov     eax, [esp+4A0h+var_490]
0x90778B: mov     edx, edi
0x90778D: mov     esi, [edx]
0x90778F: mov     [eax], esi
0x907791: mov     esi, [edx+4]
0x907794: mov     [eax+4], esi
0x907797: mov     edx, [edx+8]
0x90779A: mov     esi, eax
0x90779C: add     esi, 0Ch
0x90779F: add     edi, 0Ch
0x9077A2: add     ecx, 4
0x9077A5: mov     [eax+8], edx
0x9077A8: mov     [esp+4A0h+var_490], esi
0x9077AC: mov     [esp+4A0h+var_494], ecx
0x9077B0: jmp     loc_9078B2
0x9077B5: jnb     loc_9078A1
0x9077BB: mov     ecx, [esp+4A0h+var_230]
0x9077C2: mov     eax, [ecx]
0x9077C4: lea     edx, [esp+4A0h+var_210]
0x9077CB: push    edx
0x9077CC: push    esi
0x9077CD: call    dword ptr [eax+28h]
0x9077D0: mov     edx, [esp+4A0h+var_494]
0x9077D4: mov     ecx, [ebx+4]
0x9077D7: mov     [esp+4A0h+var_22C], eax
0x9077DE: mov     [esp+4A0h+var_228], esi
0x9077E5: mov     edx, [edx]
0x9077E7: mov     eax, [ecx]
0x9077E9: push    edx
0x9077EA: mov     edx, [esp+4A4h+var_230]
0x9077F1: push    edx
0x9077F2: lea     edx, [esp+4A8h+var_22C]
0x9077F9: push    edx
0x9077FA: mov     edx, [ebp+arg_0]
0x9077FD: push    edx
0x9077FE: push    ebx
0x9077FF: lea     edx, [esp+4B4h+var_484+3]
0x907803: push    edx
0x907804: call    dword ptr [eax]
0x907806: cmp     byte ptr [eax], 0
0x907809: jz      short loc_907879
0x90780B: mov     ecx, [ebp+arg_0]
0x90780E: mov     ecx, [ecx]
0x907810: mov     eax, [ebx]
0x907812: mov     edx, [ecx]
0x907814: mov     [esp+4A0h+var_48C], eax
0x907818: call    dword ptr [edx+8]
0x90781B: mov     ecx, [esp+4A0h+var_22C]
0x907822: mov     esi, eax
0x907824: mov     eax, [ecx]
0x907826: call    dword ptr [eax+8]
0x907829: mov     cl, [ebx+0Ch]
0x90782C: test    cl, cl
0x90782E: mov     ecx, [esp+4A0h+var_48C]
0x907832: jz      short loc_90783C
0x907834: add     ecx, 590h
0x90783A: jmp     short loc_907842
0x90783C: add     ecx, 190h
0x907842: mov     edx, [esp+4A0h+var_48C]
0x907846: shl     esi, 5
0x907849: add     esi, ecx
0x90784B: movzx   eax, byte ptr [esi+eax]
0x90784F: lea     ecx, [eax+eax*4]
0x907852: mov     eax, [edx+ecx*4+990h]
0x907859: mov     ecx, [esp+4A0h+var_480]
0x90785D: push    ecx
0x90785E: mov     ecx, [ebp+arg_0]
0x907861: push    ebx
0x907862: lea     edx, [esp+4A8h+var_22C]
0x907869: push    edx
0x90786A: push    ecx
0x90786B: call    eax
0x90786D: mov     edx, [esp+4B0h+var_490]
0x907871: add     esp, 10h
0x907874: mov     [edx+8], eax
0x907877: jmp     short loc_907885
0x907879: call    sub_8E0970
0x90787E: mov     ecx, [esp+4A0h+var_490]
0x907882: mov     [ecx+8], eax
0x907885: mov     eax, [esp+4A0h+var_494]
0x907889: mov     ecx, [esp+4A0h+var_490]
0x90788D: mov     edx, [eax]
0x90788F: mov     [ecx], edx
0x907891: add     ecx, 0Ch
0x907894: add     eax, 4
0x907897: mov     [esp+4A0h+var_490], ecx
0x90789B: mov     [esp+4A0h+var_494], eax
0x90789F: jmp     short loc_9078B2
0x9078A1: mov     eax, [edi+8]
0x9078A4: test    eax, eax
0x9078A6: jz      short loc_9078AF
0x9078A8: mov     ecx, eax
0x9078AA: mov     eax, [ecx]
0x9078AC: call    dword ptr [eax+18h]
0x9078AF: add     edi, 0Ch
0x9078B2: mov     eax, [esp+4A0h+var_474]
0x9078B6: cmp     edi, eax
0x9078B8: jnz     loc_907771
0x9078BE: jmp     short loc_9078DD
0x9078C0: cmp     edi, eax
0x9078C2: jz      short loc_9078DD
0x9078C4: mov     eax, [edi+8]
0x9078C7: test    eax, eax
0x9078C9: jz      short loc_9078D2
0x9078CB: mov     ecx, eax
0x9078CD: mov     edx, [ecx]
0x9078CF: call    dword ptr [edx+18h]
0x9078D2: mov     eax, [esp+4A0h+var_474]
0x9078D6: add     edi, 0Ch
0x9078D9: cmp     edi, eax
0x9078DB: jnz     short loc_9078C4
0x9078DD: mov     eax, [esp+4A0h+var_478]
0x9078E1: cmp     [esp+4A0h+var_494], eax
0x9078E5: jz      loc_9079D4
0x9078EB: jmp     short loc_9078F0
0x9078ED: align 10h
0x9078F0: mov     edi, [esp+4A0h+var_494]
0x9078F4: mov     esi, [edi]
0x9078F6: mov     ecx, [esp+4A0h+var_230]
0x9078FD: mov     edx, [ecx]
0x9078FF: lea     eax, [esp+4A0h+var_210]
0x907906: push    eax
0x907907: push    esi
0x907908: call    dword ptr [edx+28h]
0x90790B: mov     ecx, [ebx+4]
0x90790E: mov     [esp+4A0h+var_22C], eax
0x907915: mov     [esp+4A0h+var_228], esi
0x90791C: mov     eax, [edi]
0x90791E: mov     edx, [ecx]
0x907920: push    eax
0x907921: mov     eax, [esp+4A4h+var_230]
0x907928: push    eax
0x907929: lea     eax, [esp+4A8h+var_22C]
0x907930: push    eax
0x907931: mov     eax, [ebp+arg_0]
0x907934: push    eax
0x907935: push    ebx
0x907936: lea     eax, [esp+4B4h+var_484+3]
0x90793A: push    eax
0x90793B: call    dword ptr [edx]
0x90793D: cmp     byte ptr [eax], 0
0x907940: jz      short loc_9079A2
0x907942: mov     ecx, [ebp+arg_0]
0x907945: mov     ecx, [ecx]
0x907947: mov     edx, [ecx]
0x907949: mov     edi, [ebx]
0x90794B: call    dword ptr [edx+8]
0x90794E: mov     ecx, [esp+4A0h+var_22C]
0x907955: mov     esi, eax
0x907957: mov     eax, [ecx]
0x907959: call    dword ptr [eax+8]
0x90795C: mov     cl, [ebx+0Ch]
0x90795F: test    cl, cl
0x907961: lea     ecx, [edi+590h]
0x907967: jnz     short loc_90796F
0x907969: lea     ecx, [edi+190h]
0x90796F: mov     edx, [esp+4A0h+var_480]
0x907973: shl     esi, 5
0x907976: add     esi, ecx
0x907978: movzx   eax, byte ptr [esi+eax]
0x90797C: push    edx
0x90797D: lea     ecx, [eax+eax*4]
0x907980: mov     edi, [edi+ecx*4+990h]
0x907987: mov     ecx, [ebp+arg_0]
0x90798A: push    ebx
0x90798B: lea     eax, [esp+4A8h+var_22C]
0x907992: push    eax
0x907993: push    ecx
0x907994: call    edi
0x907996: mov     edx, [esp+4B0h+var_490]
0x90799A: add     esp, 10h
0x90799D: mov     [edx+8], eax
0x9079A0: jmp     short loc_9079AE
0x9079A2: call    sub_8E0970
0x9079A7: mov     ecx, [esp+4A0h+var_490]
0x9079AB: mov     [ecx+8], eax
0x9079AE: mov     eax, [esp+4A0h+var_494]
0x9079B2: mov     ecx, [esp+4A0h+var_490]
0x9079B6: mov     edx, [eax]
0x9079B8: mov     [ecx], edx
0x9079BA: add     ecx, 0Ch
0x9079BD: mov     [esp+4A0h+var_490], ecx
0x9079C1: mov     ecx, [esp+4A0h+var_478]
0x9079C5: add     eax, 4
0x9079C8: cmp     eax, ecx
0x9079CA: mov     [esp+4A0h+var_494], eax
0x9079CE: jnz     loc_9078F0
0x9079D4: mov     esi, [esp+4A0h+var_47C]
0x9079D8: mov     ecx, [esi+14h]
0x9079DB: mov     edx, [esp+4A0h+var_46C]
0x9079DF: mov     eax, ecx
0x9079E1: and     eax, 3FFFFFFFh
0x9079E6: cmp     eax, edx
0x9079E8: jge     short loc_907A4E
0x9079EA: test    ecx, ecx
0x9079EC: js      short loc_907A14
0x9079EE: mov     ecx, [esp+4A0h+var_488]
0x9079F2: mov     ecx, [ecx+19Ch]
0x9079F8: test    ecx, ecx
0x9079FA: jnz     short loc_907A02
0x9079FC: mov     ecx, ds:0BA7D9Ch
0x907A02: lea     edx, [eax+eax*2]
0x907A05: mov     eax, [esi+0Ch]
0x907A08: push    14h
0x907A0A: shl     edx, 2
0x907A0D: push    edx
0x907A0E: push    eax
0x907A0F: call    sub_8A75D0
0x907A14: mov     ecx, [esp+4A0h+var_488]
0x907A18: mov     ecx, [ecx+19Ch]
0x907A1E: test    ecx, ecx
0x907A20: jnz     short loc_907A28
0x907A22: mov     ecx, ds:0BA7D9Ch
0x907A28: mov     eax, [esp+4A0h+var_46C]
0x907A2C: lea     edx, [eax+eax*2]
0x907A2F: push    14h
0x907A31: shl     edx, 2
0x907A34: push    edx
0x907A35: call    sub_8A7560
0x907A3A: mov     edx, [esp+4A0h+var_46C]
0x907A3E: mov     [esi+0Ch], eax
0x907A41: mov     eax, [esi+14h]
0x907A44: and     eax, 40000000h
0x907A49: or      eax, edx
0x907A4B: mov     [esi+14h], eax
0x907A4E: test    edx, edx
0x907A50: mov     [esi+10h], edx
0x907A53: mov     esi, [esi+0Ch]
0x907A56: jle     short loc_907A7D
0x907A58: mov     eax, [esp+4A0h+var_470]
0x907A5C: mov     ecx, esi
0x907A5E: mov     edi, edi
0x907A60: mov     esi, eax
0x907A62: mov     ebx, [esi]
0x907A64: mov     edi, ecx
0x907A66: mov     [edi], ebx
0x907A68: mov     ebx, [esi+4]
0x907A6B: mov     [edi+4], ebx
0x907A6E: mov     esi, [esi+8]
0x907A71: add     eax, 0Ch
0x907A74: add     ecx, 0Ch
0x907A77: dec     edx
0x907A78: mov     [edi+8], esi
0x907A7B: jnz     short loc_907A60
0x907A7D: mov     esi, [esp+4A0h+var_488]
0x907A81: mov     ecx, [esi+19Ch]
0x907A87: test    ecx, ecx
0x907A89: mov     eax, [esp+4A0h+var_464]
0x907A8D: jnz     short loc_907A95
0x907A8F: mov     ecx, ds:0BA7D9Ch
0x907A95: cmp     eax, [ecx+28h]
0x907A98: mov     [ecx+20h], eax
0x907A9B: jnz     short loc_907AA3
0x907A9D: mov     edx, [ecx]
0x907A9F: push    eax
0x907AA0: call    dword ptr [edx+10h]
0x907AA3: mov     eax, [esp+4A0h+var_468]
0x907AA7: test    eax, eax
0x907AA9: js      short loc_907AD3
0x907AAB: mov     ecx, [esi+19Ch]
0x907AB1: test    ecx, ecx
0x907AB3: jnz     short loc_907ABB
0x907AB5: mov     ecx, ds:0BA7D9Ch
0x907ABB: mov     edx, [esp+4A0h+var_470]
0x907ABF: and     eax, 3FFFFFFFh
0x907AC4: lea     eax, [eax+eax*2]
0x907AC7: push    14h
0x907AC9: shl     eax, 2
0x907ACC: push    eax
0x907ACD: push    edx
0x907ACE: call    sub_8A75D0
0x907AD3: mov     ecx, [esp+4A0h+var_440]
0x907AD7: mov     eax, [esp+4A0h+var_438]
0x907ADB: test    eax, eax
0x907ADD: js      short loc_907B12
0x907ADF: mov     edx, large fs:2Ch
0x907AE6: mov     esi, ds:0BA9DE4h
0x907AEC: mov     edx, [edx+esi*4]
0x907AEF: mov     edx, [edx+19Ch]
0x907AF5: test    edx, edx
0x907AF7: jnz     short loc_907AFF
0x907AF9: mov     edx, ds:0BA7D9Ch
0x907AFF: and     eax, 3FFFFFFFh
0x907B04: push    14h
0x907B06: shl     eax, 2
0x907B09: push    eax
0x907B0A: push    ecx
0x907B0B: mov     ecx, edx
0x907B0D: call    sub_8A75D0
0x907B12: mov     ecx, [esp+4A0h+var_4]
0x907B19: call    @__security_check_cookie@4; __security_check_cookie(x)
0x907B1E: pop     edi
0x907B1F: pop     esi
0x907B20: pop     ebx
0x907B21: mov     esp, ebp
0x907B23: pop     ebp
0x907B24: retn    0Ch
