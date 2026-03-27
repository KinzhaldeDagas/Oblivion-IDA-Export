0x8203D0: push    0FFFFFFFFh
0x8203D2: push    offset SEH_81EA70
0x8203D7: mov     eax, large fs:0
0x8203DD: push    eax
0x8203DE: sub     esp, 0Ch
0x8203E1: push    ebx
0x8203E2: push    ebp
0x8203E3: push    esi
0x8203E4: push    edi
0x8203E5: mov     eax, ds:0B30AACh
0x8203EA: xor     eax, esp
0x8203EC: push    eax
0x8203ED: lea     eax, [esp+2Ch+var_C]
0x8203F1: mov     large fs:0, eax
0x8203F7: xor     esi, esi
0x8203F9: mov     [esp+2Ch+var_14], esi
0x8203FD: xor     edi, edi
0x8203FF: mov     [esp+2Ch+var_4], esi
0x820403: mov     [esp+2Ch+var_18], edi
0x820407: mov     eax, ds:0B45BD0h
0x82040C: test    eax, eax
0x82040E: mov     ebx, 1
0x820413: mov     byte ptr [esp+2Ch+var_4], bl
0x820417: jz      short loc_820426
0x820419: mov     esi, eax
0x82041B: test    esi, esi
0x82041D: mov     [esp+2Ch+var_14], esi
0x820421: jz      short loc_820426
0x820423: add     [esi+60h], ebx
0x820426: mov     eax, [esi+18h]
0x820429: cmp     eax, 2
0x82042C: jnb     loc_8204F9
0x820432: lea     eax, [esp+2Ch+var_10]
0x820436: push    eax
0x820437: call    sub_772630
0x82043C: add     esp, 4
0x82043F: mov     eax, [eax]
0x820441: test    eax, eax
0x820443: jz      short loc_82044E
0x820445: mov     edi, eax
0x820447: add     [edi+5Ch], ebx
0x82044A: mov     [esp+2Ch+var_18], edi
0x82044E: mov     eax, [esp+2Ch+var_10]
0x820452: test    eax, eax
0x820454: mov     byte ptr [esp+2Ch+var_4], 1
0x820459: jz      short loc_82046E
0x82045B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x82045F: mov     ecx, eax
0x820461: add     eax, 5Ch ; '\'
0x820464: cmp     dword ptr [eax], 0
0x820467: jnz     short loc_82046E
0x820469: call    sub_772560
0x82046E: push    2
0x820470: push    ebx
0x820471: push    0
0x820473: push    edi
0x820474: call    sub_801110
0x820479: mov     ecx, [esi+14h]
0x82047C: add     esp, 10h
0x82047F: push    edi; a3
0x820480: push    ecx; a2
0x820481: mov     ecx, esi; this
0x820483: call    sub_760010
0x820488: lea     edx, [esp+2Ch+var_10]
0x82048C: push    edx
0x82048D: call    sub_772630
0x820492: add     esp, 4
0x820495: mov     ebp, eax
0x820497: cmp     edi, [ebp+0]
0x82049A: mov     byte ptr [esp+2Ch+var_4], 3
0x82049F: jz      short loc_8204C0
0x8204A1: test    edi, edi
0x8204A3: jz      short loc_8204B2
0x8204A5: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x8204A9: jnz     short loc_8204B2
0x8204AB: mov     ecx, edi
0x8204AD: call    sub_772560
0x8204B2: mov     edi, [ebp+0]
0x8204B5: test    edi, edi
0x8204B7: mov     [esp+2Ch+var_18], edi
0x8204BB: jz      short loc_8204C0
0x8204BD: add     [edi+5Ch], ebx
0x8204C0: mov     eax, [esp+2Ch+var_10]
0x8204C4: test    eax, eax
0x8204C6: mov     byte ptr [esp+2Ch+var_4], 1
0x8204CB: jz      short loc_8204E0
0x8204CD: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8204D1: mov     ecx, eax
0x8204D3: add     eax, 5Ch ; '\'
0x8204D6: cmp     dword ptr [eax], 0
0x8204D9: jnz     short loc_8204E0
0x8204DB: call    sub_772560
0x8204E0: push    2
0x8204E2: push    ebx
0x8204E3: push    ebx
0x8204E4: push    edi
0x8204E5: call    sub_801110
0x8204EA: mov     eax, [esi+14h]
0x8204ED: add     esp, 10h
0x8204F0: push    edi; a3
0x8204F1: push    eax; a2
0x8204F2: mov     ecx, esi; this
0x8204F4: call    sub_760010
0x8204F9: mov     eax, ds:0B45308h
0x8204FE: mov     ebp, [esi+58h]
0x820501: cmp     ebp, eax
0x820503: mov     ebx, eax
0x820505: jz      short loc_820539
0x820507: test    ebp, ebp
0x820509: jz      short loc_820528
0x82050B: lea     ecx, [ebp+4]
0x82050E: push    ecx; lpAddend
0x82050F: call    dword ptr ds:0A2807Ch
0x820515: test    eax, eax
0x820517: jnz     short loc_820528
0x820519: test    ebp, ebp
0x82051B: jz      short loc_820528
0x82051D: mov     edx, [ebp+0]
0x820520: mov     eax, [edx]
0x820522: push    1
0x820524: mov     ecx, ebp
0x820526: call    eax
0x820528: test    ebx, ebx
0x82052A: mov     [esi+58h], ebx
0x82052D: jz      short loc_820539
0x82052F: add     ebx, 4
0x820532: push    ebx; lpAddend
0x820533: call    dword ptr ds:0A28078h
0x820539: mov     eax, ds:0B45140h
0x82053E: mov     ebp, [esi+44h]
0x820541: cmp     ebp, eax
0x820543: mov     ebx, eax
0x820545: jz      short loc_820579
0x820547: test    ebp, ebp
0x820549: jz      short loc_820568
0x82054B: lea     ecx, [ebp+4]
0x82054E: push    ecx; lpAddend
0x82054F: call    dword ptr ds:0A2807Ch
0x820555: test    eax, eax
0x820557: jnz     short loc_820568
0x820559: test    ebp, ebp
0x82055B: jz      short loc_820568
0x82055D: mov     edx, [ebp+0]
0x820560: mov     eax, [edx]
0x820562: push    1
0x820564: mov     ecx, ebp
0x820566: call    eax
0x820568: test    ebx, ebx
0x82056A: mov     [esi+44h], ebx
0x82056D: jz      short loc_820579
0x82056F: add     ebx, 4
0x820572: push    ebx; lpAddend
0x820573: call    dword ptr ds:0A28078h
0x820579: xor     ebx, ebx
0x82057B: cmp     [esi+30h], ebx
0x82057E: jnz     short loc_820588
0x820580: call    sub_772DF0
0x820585: mov     [esi+30h], eax
0x820588: mov     ecx, [esi+30h]
0x82058B: push    ebx
0x82058C: push    1
0x82058E: push    1Bh
0x820590: call    sub_772CD0
0x820595: cmp     [esi+30h], ebx
0x820598: jnz     short loc_8205A2
0x82059A: call    sub_772DF0
0x82059F: mov     [esi+30h], eax
0x8205A2: mov     ecx, [esi+30h]
0x8205A5: push    ebx
0x8205A6: push    5
0x8205A8: push    13h
0x8205AA: call    sub_772CD0
0x8205AF: cmp     [esi+30h], ebx
0x8205B2: jnz     short loc_8205BC
0x8205B4: call    sub_772DF0
0x8205B9: mov     [esi+30h], eax
0x8205BC: mov     ecx, [esi+30h]
0x8205BF: push    ebx
0x8205C0: push    6
0x8205C2: push    14h
0x8205C4: call    sub_772CD0
0x8205C9: cmp     [esi+30h], ebx
0x8205CC: jnz     short loc_8205D6
0x8205CE: call    sub_772DF0
0x8205D3: mov     [esi+30h], eax
0x8205D6: mov     ecx, [esi+30h]
0x8205D9: push    ebx
0x8205DA: push    ebx
0x8205DB: push    0Fh
0x8205DD: call    sub_772CD0
0x8205E2: cmp     [esi+30h], ebx
0x8205E5: jnz     short loc_8205EF
0x8205E7: call    sub_772DF0
0x8205EC: mov     [esi+30h], eax
0x8205EF: mov     ecx, [esi+30h]
0x8205F2: push    ebx
0x8205F3: push    1
0x8205F5: push    7
0x8205F7: call    sub_772CD0
0x8205FC: cmp     [esi+30h], ebx
0x8205FF: jnz     short loc_820609
0x820601: call    sub_772DF0
0x820606: mov     [esi+30h], eax
0x820609: mov     ecx, [esi+30h]
0x82060C: push    ebx
0x82060D: push    3
0x82060F: push    17h
0x820611: call    sub_772CD0
0x820616: cmp     [esi+30h], ebx
0x820619: jnz     short loc_820623
0x82061B: call    sub_772DF0
0x820620: mov     [esi+30h], eax
0x820623: mov     ecx, [esi+30h]
0x820626: push    ebx
0x820627: push    ebx
0x820628: push    0Eh
0x82062A: call    sub_772CD0
0x82062F: cmp     [esi+30h], ebx
0x820632: jnz     short loc_82063C
0x820634: call    sub_772DF0
0x820639: mov     [esi+30h], eax
0x82063C: mov     ecx, [esi+30h]
0x82063F: push    ebx
0x820640: push    ebx
0x820641: push    34h ; '4'
0x820643: call    sub_772CD0
0x820648: cmp     esi, ds:0B45BD4h
0x82064E: mov     ds:0B44150h, ebx
0x820654: mov     ds:0B447E0h, ebx
0x82065A: jz      short loc_82067B
0x82065C: add     dword ptr [esi+60h], 0FFFFFFFFh
0x820660: jnz     short loc_820669
0x820662: mov     ecx, esi
0x820664: call    sub_7604D0
0x820669: mov     esi, ds:0B45BD4h
0x82066F: cmp     esi, ebx
0x820671: mov     [esp+2Ch+var_14], esi
0x820675: jz      short loc_82067B
0x820677: add     dword ptr [esi+60h], 1
0x82067B: cmp     dword ptr [esi+18h], 2
0x82067F: jnb     loc_82076A
0x820685: lea     ecx, [esp+2Ch+var_10]
0x820689: push    ecx
0x82068A: call    sub_772630
0x82068F: add     esp, 4
0x820692: mov     ebp, eax
0x820694: cmp     edi, [ebp+0]
0x820697: mov     byte ptr [esp+2Ch+var_4], 4
0x82069C: jz      short loc_8206BE
0x82069E: cmp     edi, ebx
0x8206A0: jz      short loc_8206AF
0x8206A2: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x8206A6: jnz     short loc_8206AF
0x8206A8: mov     ecx, edi
0x8206AA: call    sub_772560
0x8206AF: mov     edi, [ebp+0]
0x8206B2: cmp     edi, ebx
0x8206B4: mov     [esp+2Ch+var_18], edi
0x8206B8: jz      short loc_8206BE
0x8206BA: add     dword ptr [edi+5Ch], 1
0x8206BE: mov     eax, [esp+2Ch+var_10]
0x8206C2: cmp     eax, ebx
0x8206C4: mov     byte ptr [esp+2Ch+var_4], 1
0x8206C9: jz      short loc_8206DD
0x8206CB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8206CF: mov     ecx, eax
0x8206D1: add     eax, 5Ch ; '\'
0x8206D4: cmp     [eax], ebx
0x8206D6: jnz     short loc_8206DD
0x8206D8: call    sub_772560
0x8206DD: push    2
0x8206DF: push    1
0x8206E1: push    ebx
0x8206E2: push    edi
0x8206E3: call    sub_801110
0x8206E8: mov     edx, [esi+14h]
0x8206EB: add     esp, 10h
0x8206EE: push    edi; a3
0x8206EF: push    edx; a2
0x8206F0: mov     ecx, esi; this
0x8206F2: call    sub_760010
0x8206F7: lea     eax, [esp+2Ch+var_10]
0x8206FB: push    eax
0x8206FC: call    sub_772630
0x820701: add     esp, 4
0x820704: mov     ebp, eax
0x820706: cmp     edi, [ebp+0]
0x820709: mov     byte ptr [esp+2Ch+var_4], 5
0x82070E: jz      short loc_820730
0x820710: cmp     edi, ebx
0x820712: jz      short loc_820721
0x820714: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x820718: jnz     short loc_820721
0x82071A: mov     ecx, edi
0x82071C: call    sub_772560
0x820721: mov     edi, [ebp+0]
0x820724: cmp     edi, ebx
0x820726: mov     [esp+2Ch+var_18], edi
0x82072A: jz      short loc_820730
0x82072C: add     dword ptr [edi+5Ch], 1
0x820730: mov     eax, [esp+2Ch+var_10]
0x820734: cmp     eax, ebx
0x820736: mov     byte ptr [esp+2Ch+var_4], 1
0x82073B: jz      short loc_82074F
0x82073D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x820741: mov     ecx, eax
0x820743: add     eax, 5Ch ; '\'
0x820746: cmp     [eax], ebx
0x820748: jnz     short loc_82074F
0x82074A: call    sub_772560
0x82074F: push    2
0x820751: push    1
0x820753: push    1
0x820755: push    edi
0x820756: call    sub_801110
0x82075B: mov     ecx, [esi+14h]
0x82075E: add     esp, 10h
0x820761: push    edi; a3
0x820762: push    ecx; a2
0x820763: mov     ecx, esi; this
0x820765: call    sub_760010
0x82076A: mov     eax, ds:0B45360h
0x82076F: mov     ebp, [esi+58h]
0x820772: cmp     ebp, eax
0x820774: mov     ebx, eax
0x820776: jz      short loc_8207AA
0x820778: test    ebp, ebp
0x82077A: jz      short loc_820799
0x82077C: lea     edx, [ebp+4]
0x82077F: push    edx; lpAddend
0x820780: call    dword ptr ds:0A2807Ch
0x820786: test    eax, eax
0x820788: jnz     short loc_820799
0x82078A: test    ebp, ebp
0x82078C: jz      short loc_820799
0x82078E: mov     eax, [ebp+0]
0x820791: mov     edx, [eax]
0x820793: push    1
0x820795: mov     ecx, ebp
0x820797: call    edx
0x820799: test    ebx, ebx
0x82079B: mov     [esi+58h], ebx
0x82079E: jz      short loc_8207AA
0x8207A0: add     ebx, 4
0x8207A3: push    ebx; lpAddend
0x8207A4: call    dword ptr ds:0A28078h
0x8207AA: mov     eax, ds:0B45140h
0x8207AF: mov     ebp, [esi+44h]
0x8207B2: cmp     ebp, eax
0x8207B4: mov     ebx, eax
0x8207B6: jz      short loc_8207EA
0x8207B8: test    ebp, ebp
0x8207BA: jz      short loc_8207D9
0x8207BC: lea     eax, [ebp+4]
0x8207BF: push    eax; lpAddend
0x8207C0: call    dword ptr ds:0A2807Ch
0x8207C6: test    eax, eax
0x8207C8: jnz     short loc_8207D9
0x8207CA: test    ebp, ebp
0x8207CC: jz      short loc_8207D9
0x8207CE: mov     edx, [ebp+0]
0x8207D1: mov     eax, [edx]
0x8207D3: push    1
0x8207D5: mov     ecx, ebp
0x8207D7: call    eax
0x8207D9: test    ebx, ebx
0x8207DB: mov     [esi+44h], ebx
0x8207DE: jz      short loc_8207EA
0x8207E0: add     ebx, 4
0x8207E3: push    ebx; lpAddend
0x8207E4: call    dword ptr ds:0A28078h
0x8207EA: cmp     dword ptr [esi+30h], 0
0x8207EE: jnz     short loc_8207F8
0x8207F0: call    sub_772DF0
0x8207F5: mov     [esi+30h], eax
0x8207F8: mov     ecx, [esi+30h]
0x8207FB: xor     ebx, ebx
0x8207FD: push    ebx
0x8207FE: push    1
0x820800: push    1Bh
0x820802: call    sub_772CD0
0x820807: cmp     [esi+30h], ebx
0x82080A: jnz     short loc_820814
0x82080C: call    sub_772DF0
0x820811: mov     [esi+30h], eax
0x820814: mov     ecx, [esi+30h]
0x820817: push    ebx
0x820818: push    5
0x82081A: push    13h
0x82081C: call    sub_772CD0
0x820821: cmp     [esi+30h], ebx
0x820824: jnz     short loc_82082E
0x820826: call    sub_772DF0
0x82082B: mov     [esi+30h], eax
0x82082E: mov     ecx, [esi+30h]
0x820831: push    ebx
0x820832: push    6
0x820834: push    14h
0x820836: call    sub_772CD0
0x82083B: cmp     [esi+30h], ebx
0x82083E: jnz     short loc_820848
0x820840: call    sub_772DF0
0x820845: mov     [esi+30h], eax
0x820848: mov     ecx, [esi+30h]
0x82084B: push    ebx
0x82084C: push    ebx
0x82084D: push    0Fh
0x82084F: call    sub_772CD0
0x820854: cmp     [esi+30h], ebx
0x820857: jnz     short loc_820861
0x820859: call    sub_772DF0
0x82085E: mov     [esi+30h], eax
0x820861: mov     ecx, [esi+30h]
0x820864: push    ebx
0x820865: push    1
0x820867: push    7
0x820869: call    sub_772CD0
0x82086E: cmp     [esi+30h], ebx
0x820871: jnz     short loc_82087B
0x820873: call    sub_772DF0
0x820878: mov     [esi+30h], eax
0x82087B: mov     ecx, [esi+30h]
0x82087E: push    ebx
0x82087F: push    3
0x820881: push    17h
0x820883: call    sub_772CD0
0x820888: cmp     [esi+30h], ebx
0x82088B: jnz     short loc_820895
0x82088D: call    sub_772DF0
0x820892: mov     [esi+30h], eax
0x820895: mov     ecx, [esi+30h]
0x820898: push    ebx
0x820899: push    ebx
0x82089A: push    0Eh
0x82089C: call    sub_772CD0
0x8208A1: cmp     [esi+30h], ebx
0x8208A4: jnz     short loc_8208AE
0x8208A6: call    sub_772DF0
0x8208AB: mov     [esi+30h], eax
0x8208AE: mov     ecx, [esi+30h]
0x8208B1: push    ebx
0x8208B2: push    ebx
0x8208B3: push    34h ; '4'
0x8208B5: call    sub_772CD0
0x8208BA: cmp     edi, ebx
0x8208BC: mov     ds:0B44154h, ebx
0x8208C2: mov     ds:0B447E4h, ebx
0x8208C8: mov     byte ptr [esp+2Ch+var_4], 0
0x8208CD: jz      short loc_8208E0
0x8208CF: or      ebx, 0FFFFFFFFh
0x8208D2: add     [edi+5Ch], ebx
0x8208D5: jnz     short loc_8208E3
0x8208D7: mov     ecx, edi
0x8208D9: call    sub_772560
0x8208DE: jmp     short loc_8208E3
0x8208E0: or      ebx, 0FFFFFFFFh
0x8208E3: add     [esi+60h], ebx
0x8208E6: mov     [esp+2Ch+var_4], ebx
0x8208EA: jnz     short loc_8208F3
0x8208EC: mov     ecx, esi
0x8208EE: call    sub_7604D0
0x8208F3: mov     ecx, dword ptr [esp+2Ch+var_C]
0x8208F7: mov     large fs:0, ecx
0x8208FE: pop     ecx
0x8208FF: pop     edi
0x820900: pop     esi
0x820901: pop     ebp
0x820902: pop     ebx
0x820903: add     esp, 18h
0x820906: retn
