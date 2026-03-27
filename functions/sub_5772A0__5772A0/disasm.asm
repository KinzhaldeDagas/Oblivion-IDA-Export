0x5772A0: push    0FFFFFFFFh
0x5772A2: push    offset SEH_5772A0
0x5772A7: mov     eax, large fs:0
0x5772AD: push    eax
0x5772AE: sub     esp, 10h
0x5772B1: push    ebx
0x5772B2: push    ebp
0x5772B3: push    esi
0x5772B4: push    edi
0x5772B5: mov     eax, ds:0B30AACh
0x5772BA: xor     eax, esp
0x5772BC: push    eax
0x5772BD: lea     eax, [esp+30h+var_C]
0x5772C1: mov     large fs:0, eax
0x5772C7: mov     esi, ecx
0x5772C9: mov     edi, [esp+30h+arg_0]
0x5772CD: mov     ecx, [esi+10h]
0x5772D0: mov     eax, [edi+24h]
0x5772D3: add     eax, ecx
0x5772D5: xor     ebp, ebp
0x5772D7: cmp     eax, [esi+28h]
0x5772DA: jle     loc_577556
0x5772E0: cmp     byte ptr [edi+4], 20h ; ' '
0x5772E4: jz      loc_5774FF
0x5772EA: mov     eax, [esi+8]
0x5772ED: cmp     eax, ebp
0x5772EF: jz      short loc_577301
0x5772F1: mov     ecx, [eax+8]
0x5772F4: cmp     byte ptr [ecx+4], 20h ; ' '
0x5772F8: jz      short loc_577337
0x5772FA: mov     eax, [eax+4]
0x5772FD: cmp     eax, ebp
0x5772FF: jnz     short loc_5772F1
0x577301: push    34h ; '4'; Size
0x577303: call    FormHeapAlloc
0x577308: add     esp, 4
0x57730B: mov     [esp+30h+arg_4], eax
0x57730F: cmp     eax, ebp
0x577311: mov     [esp+30h+var_4], 1
0x577319: jz      loc_5773FD
0x57731F: mov     ecx, [esi+28h]
0x577322: mov     edx, [esi+30h]
0x577325: push    ecx
0x577326: push    ebp
0x577327: push    edi
0x577328: push    edx
0x577329: mov     ecx, eax
0x57732B: call    sub_577710
0x577330: mov     ebx, eax
0x577332: jmp     loc_5773FF
0x577337: push    34h ; '4'; Size
0x577339: call    FormHeapAlloc
0x57733E: add     esp, 4
0x577341: mov     [esp+30h+arg_4], eax
0x577345: cmp     eax, ebp
0x577347: mov     [esp+30h+var_4], ebp
0x57734B: jz      short loc_577360
0x57734D: mov     edx, [esi+28h]
0x577350: mov     ecx, [esi+30h]
0x577353: push    edx
0x577354: push    ebp
0x577355: push    edi
0x577356: push    ecx
0x577357: mov     ecx, eax
0x577359: call    sub_577710
0x57735E: mov     ebp, eax
0x577360: mov     edx, [edi]
0x577362: mov     eax, ds:0B12E08h[edx*4]
0x577369: mov     ecx, esi
0x57736B: mov     [esp+30h+var_4], 0FFFFFFFFh
0x577373: mov     [ebp+18h], eax
0x577376: call    sub_5889B0
0x57737B: xor     ebx, ebx
0x57737D: cmp     [esi+0Ch], ebx
0x577380: mov     edi, eax
0x577382: jz      short loc_5773C4
0x577384: cmp     byte ptr [edi+4], 20h ; ' '
0x577388: jz      short loc_5773C4
0x57738A: push    1
0x57738C: push    edi
0x57738D: mov     ecx, ebp
0x57738F: call    sub_5772A0
0x577394: mov     eax, [esi+8]
0x577397: mov     ecx, [eax+4]
0x57739A: cmp     ecx, ebx
0x57739C: mov     [esi+8], ecx
0x57739F: jz      short loc_5773A5
0x5773A1: mov     [ecx], ebx
0x5773A3: jmp     short loc_5773A8
0x5773A5: mov     [esi+4], ebx
0x5773A8: mov     edx, [esi]
0x5773AA: mov     edi, [eax+8]
0x5773AD: push    eax
0x5773AE: mov     eax, [edx+8]
0x5773B1: mov     ecx, esi
0x5773B3: call    eax
0x5773B5: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x5773B9: mov     ecx, [edi+24h]
0x5773BC: sub     [esi+10h], ecx
0x5773BF: cmp     [esi+0Ch], ebx
0x5773C2: jnz     short loc_577384
0x5773C4: cmp     edi, ebx
0x5773C6: jz      short loc_5773E5
0x5773C8: mov     edx, [edi+1Ch]
0x5773CB: push    edx
0x5773CC: call    FormHeapFree
0x5773D1: push    edi
0x5773D2: mov     [edi+1Ch], ebx
0x5773D5: mov     [edi+22h], bx
0x5773D9: mov     [edi+20h], bx
0x5773DD: call    FormHeapFree
0x5773E2: add     esp, 8
0x5773E5: mov     eax, ebp
0x5773E7: mov     ecx, dword ptr [esp+30h+var_C]
0x5773EB: mov     large fs:0, ecx
0x5773F2: pop     ecx
0x5773F3: pop     edi
0x5773F4: pop     esi
0x5773F5: pop     ebp
0x5773F6: pop     ebx
0x5773F7: add     esp, 1Ch
0x5773FA: retn    8
0x5773FD: xor     ebx, ebx
0x5773FF: mov     eax, [edi]
0x577401: mov     ecx, ds:0B12E08h[eax*4]
0x577408: or      ebp, 0FFFFFFFFh
0x57740B: push    38h ; '8'; Size
0x57740D: mov     [esp+34h+var_4], ebp
0x577411: mov     [ebx+18h], ecx
0x577414: call    FormHeapAlloc
0x577419: add     esp, 4
0x57741C: mov     [esp+30h+arg_4], eax
0x577420: test    eax, eax
0x577422: mov     [esp+30h+var_4], 2
0x57742A: jz      short loc_577483
0x57742C: fld     dword ptr ds:0A68A90h
0x577432: push    1
0x577434: fstp    [esp+34h+var_1C]
0x577438: mov     ecx, [esp+34h+var_1C]
0x57743C: fld     dword ptr ds:0A68A8Ch
0x577442: sub     esp, 10h
0x577445: mov     edx, esp
0x577447: fstp    [esp+44h+var_18]
0x57744B: fld     dword ptr ds:0A68A88h
0x577451: mov     [edx], ecx
0x577453: mov     ecx, [esp+44h+var_18]
0x577457: fstp    [esp+44h+var_14]
0x57745B: fld1
0x57745D: mov     [edx+4], ecx
0x577460: mov     ecx, [esp+44h+var_14]
0x577464: fstp    [esp+44h+var_10]
0x577468: mov     [edx+8], ecx
0x57746B: mov     ecx, [esp+44h+var_10]
0x57746F: push    2Dh ; '-'
0x577471: mov     [edx+0Ch], ecx
0x577474: push    0
0x577476: mov     ecx, eax
0x577478: call    sub_576F30
0x57747D: mov     [esp+30h+arg_4], eax
0x577481: jmp     short loc_57748B
0x577483: mov     [esp+30h+arg_4], 0
0x57748B: mov     [esp+30h+var_4], ebp
0x57748F: xor     ebp, ebp
0x577491: cmp     [esi+0Ch], ebp
0x577494: jz      short loc_5774E7
0x577496: mov     edx, [esp+30h+arg_4]
0x57749A: mov     eax, [edx+24h]
0x57749D: sub     eax, ebp
0x57749F: add     eax, [esi+10h]
0x5774A2: cmp     eax, [esi+28h]
0x5774A5: jle     short loc_5774E7
0x5774A7: mov     eax, [esi+8]
0x5774AA: mov     ecx, [eax+4]
0x5774AD: test    ecx, ecx
0x5774AF: mov     [esi+8], ecx
0x5774B2: jz      short loc_5774BC
0x5774B4: mov     dword ptr [ecx], 0
0x5774BA: jmp     short loc_5774C3
0x5774BC: mov     dword ptr [esi+4], 0
0x5774C3: mov     edx, [esi]
0x5774C5: mov     edi, [eax+8]
0x5774C8: push    eax
0x5774C9: mov     eax, [edx+8]
0x5774CC: mov     ecx, esi
0x5774CE: call    eax
0x5774D0: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x5774D4: push    1
0x5774D6: push    edi
0x5774D7: mov     ecx, ebx
0x5774D9: call    sub_5772A0
0x5774DE: add     ebp, [edi+24h]
0x5774E1: cmp     dword ptr [esi+0Ch], 0
0x5774E5: jnz     short loc_577496
0x5774E7: mov     ecx, [esp+30h+arg_4]
0x5774EB: sub     [esi+10h], ebp
0x5774EE: push    0
0x5774F0: push    ecx
0x5774F1: mov     ecx, esi
0x5774F3: call    sub_5772A0
0x5774F8: mov     eax, ebx
0x5774FA: jmp     loc_5773E7
0x5774FF: push    ebp
0x577500: mov     ecx, edi
0x577502: call    sub_577120
0x577507: push    34h ; '4'; Size
0x577509: call    FormHeapAlloc
0x57750E: add     esp, 4
0x577511: mov     [esp+30h+arg_4], eax
0x577515: cmp     eax, ebp
0x577517: mov     [esp+30h+var_4], 3
0x57751F: jz      short loc_577543
0x577521: mov     edx, [esi+28h]
0x577524: mov     ecx, [esi+30h]
0x577527: push    edx
0x577528: push    ebp
0x577529: push    edi
0x57752A: push    ecx
0x57752B: mov     ecx, eax
0x57752D: call    sub_577710
0x577532: mov     edx, [edi]
0x577534: mov     ecx, ds:0B12E08h[edx*4]
0x57753B: mov     [eax+18h], ecx
0x57753E: jmp     loc_5773E7
0x577543: mov     edx, [edi]
0x577545: mov     ecx, ds:0B12E08h[edx*4]
0x57754C: xor     eax, eax
0x57754E: mov     [eax+18h], ecx
0x577551: jmp     loc_5773E7
0x577556: cmp     [edi+1Ch], ebp
0x577559: jz      short loc_577567
0x57755B: mov     edx, [edi+1Ch]
0x57755E: cmp     byte ptr [edx], 0
0x577561: jnz     loc_5775F6
0x577567: mov     eax, [esi+0Ch]
0x57756A: xor     dl, dl
0x57756C: cmp     eax, ebp
0x57756E: jnz     short loc_57757C
0x577570: mov     ebx, [edi]
0x577572: mov     ebx, ds:0B12E08h[ebx*4]
0x577579: mov     [esi+18h], ebx
0x57757C: cmp     byte ptr [esp+30h+arg_4], 0
0x577581: jz      short loc_5775CC
0x577583: cmp     eax, ebp
0x577585: jz      short loc_577599
0x577587: mov     eax, [esi+4]
0x57758A: mov     eax, [eax+8]
0x57758D: cmp     eax, ebp
0x57758F: jz      short loc_577599
0x577591: mov     ecx, [edi]
0x577593: cmp     ecx, [eax]
0x577595: jz      short loc_577599
0x577597: mov     dl, 1
0x577599: mov     eax, [edi+30h]
0x57759C: mov     [edi+34h], eax
0x57759F: mov     eax, [esi+4]
0x5775A2: cmp     eax, ebp
0x5775A4: mov     ecx, [edi+24h]
0x5775A7: mov     [esi+10h], ecx
0x5775AA: jz      short loc_5775F0
0x5775AC: lea     esp, [esp+0]
0x5775B0: lea     ecx, [eax+8]
0x5775B3: mov     ecx, [ecx]
0x5775B5: mov     ebx, [ecx+30h]
0x5775B8: add     ebx, [esi+10h]
0x5775BB: mov     eax, [eax]
0x5775BD: mov     [ecx+34h], ebx
0x5775C0: mov     ecx, [ecx+24h]
0x5775C3: add     [esi+10h], ecx
0x5775C6: cmp     eax, ebp
0x5775C8: jnz     short loc_5775B0
0x5775CA: jmp     short loc_5775F0
0x5775CC: cmp     eax, ebp
0x5775CE: jz      short loc_5775E2
0x5775D0: mov     eax, [esi+8]
0x5775D3: mov     eax, [eax+8]
0x5775D6: cmp     eax, ebp
0x5775D8: jz      short loc_5775E2
0x5775DA: mov     ebx, [edi]
0x5775DC: cmp     ebx, [eax]
0x5775DE: jz      short loc_5775E2
0x5775E0: mov     dl, 1
0x5775E2: mov     eax, [edi+30h]
0x5775E5: add     eax, ecx
0x5775E7: mov     [edi+34h], eax
0x5775EA: mov     ecx, [edi+24h]
0x5775ED: add     [esi+10h], ecx
0x5775F0: test    dl, dl
0x5775F2: jz      short loc_577644
0x5775F4: jmp     short loc_577635
0x5775F6: cmp     byte ptr [esp+30h+arg_4], 0
0x5775FB: jz      short loc_57762C
0x5775FD: mov     [edi+34h], ebp
0x577600: mov     eax, [esi+4]
0x577603: cmp     eax, ebp
0x577605: mov     edx, [edi+24h]
0x577608: mov     [esi+10h], edx
0x57760B: jz      short loc_577635
0x57760D: lea     ecx, [ecx+0]
0x577610: lea     ecx, [eax+8]
0x577613: mov     ecx, [ecx]
0x577615: mov     edx, [ecx+30h]
0x577618: add     edx, [esi+10h]
0x57761B: mov     eax, [eax]
0x57761D: mov     [ecx+34h], edx
0x577620: mov     ecx, [ecx+24h]
0x577623: add     [esi+10h], ecx
0x577626: cmp     eax, ebp
0x577628: jnz     short loc_577610
0x57762A: jmp     short loc_577635
0x57762C: mov     [edi+34h], ecx
0x57762F: mov     edx, [edi+24h]
0x577632: add     [esi+10h], edx
0x577635: mov     ecx, [edi+28h]
0x577638: mov     eax, [esi+18h]
0x57763B: cmp     eax, ecx
0x57763D: jg      short loc_577641
0x57763F: mov     eax, ecx
0x577641: mov     [esi+18h], eax
0x577644: mov     edi, [edi+2Ch]
0x577647: mov     eax, [esi+1Ch]
0x57764A: cmp     eax, edi
0x57764C: jg      short loc_577650
0x57764E: mov     eax, edi
0x577650: cmp     byte ptr [esp+30h+arg_4], 0
0x577655: mov     [esi+1Ch], eax
0x577658: jz      short loc_577668
0x57765A: lea     eax, [esp+30h+arg_0]
0x57765E: push    eax
0x57765F: mov     ecx, esi
0x577661: call    sub_6AA320
0x577666: jmp     short loc_577674
0x577668: lea     ecx, [esp+30h+arg_0]
0x57766C: push    ecx
0x57766D: mov     ecx, esi
0x57766F: call    sub_5B1E20
0x577674: mov     ecx, [esi+30h]
0x577677: mov     eax, [ecx+10h]
0x57767A: mov     esi, [esi+10h]
0x57767D: cmp     eax, esi
0x57767F: jg      short loc_577683
0x577681: mov     eax, esi
0x577683: mov     [ecx+10h], eax
0x577686: xor     eax, eax
0x577688: jmp     loc_5773E7
