0x883260: push    0FFFFFFFFh
0x883262: push    offset SEH_883260
0x883267: mov     eax, large fs:0
0x88326D: push    eax
0x88326E: sub     esp, 10h
0x883271: push    ebx
0x883272: push    ebp
0x883273: push    esi
0x883274: push    edi
0x883275: mov     eax, ds:0B30AACh
0x88327A: xor     eax, esp
0x88327C: push    eax
0x88327D: lea     eax, [esp+30h+var_C]
0x883281: mov     large fs:0, eax
0x883287: mov     [esp+30h+var_18], ecx
0x88328B: xor     esi, esi
0x88328D: mov     [esp+30h+var_14], esi
0x883291: xor     edi, edi
0x883293: mov     [esp+30h+var_4], esi
0x883297: mov     [esp+30h+var_1C], edi
0x88329B: mov     eax, ds:0B47790h
0x8832A0: test    eax, eax
0x8832A2: mov     ebx, 1
0x8832A7: mov     byte ptr [esp+30h+var_4], bl
0x8832AB: jz      short loc_8832BA
0x8832AD: mov     esi, eax
0x8832AF: test    esi, esi
0x8832B1: mov     [esp+30h+var_14], esi
0x8832B5: jz      short loc_8832BA
0x8832B7: add     [esi+60h], ebx
0x8832BA: mov     eax, [esi+18h]
0x8832BD: cmp     eax, ebx
0x8832BF: jnb     short loc_883317
0x8832C1: lea     eax, [esp+30h+var_10]
0x8832C5: push    eax
0x8832C6: call    sub_772630
0x8832CB: add     esp, 4
0x8832CE: mov     eax, [eax]
0x8832D0: test    eax, eax
0x8832D2: jz      short loc_8832DD
0x8832D4: mov     edi, eax
0x8832D6: add     [edi+5Ch], ebx
0x8832D9: mov     [esp+30h+var_1C], edi
0x8832DD: mov     eax, [esp+30h+var_10]
0x8832E1: test    eax, eax
0x8832E3: mov     byte ptr [esp+30h+var_4], 1
0x8832E8: jz      short loc_8832FD
0x8832EA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8832EE: mov     ecx, eax
0x8832F0: add     eax, 5Ch ; '\'
0x8832F3: cmp     dword ptr [eax], 0
0x8832F6: jnz     short loc_8832FD
0x8832F8: call    sub_772560
0x8832FD: push    2
0x8832FF: push    ebx
0x883300: push    0
0x883302: push    edi
0x883303: call    sub_801110
0x883308: mov     ecx, [esi+14h]
0x88330B: add     esp, 10h
0x88330E: push    edi; a3
0x88330F: push    ecx; a2
0x883310: mov     ecx, esi; this
0x883312: call    sub_760010
0x883317: mov     edx, [esp+30h+var_18]
0x88331B: mov     ebx, [edx+9Ch]
0x883321: mov     ebp, [esi+58h]
0x883324: cmp     ebp, ebx
0x883326: jz      short loc_88335A
0x883328: test    ebp, ebp
0x88332A: jz      short loc_883349
0x88332C: lea     eax, [ebp+4]
0x88332F: push    eax; lpAddend
0x883330: call    dword ptr ds:0A2807Ch
0x883336: test    eax, eax
0x883338: jnz     short loc_883349
0x88333A: test    ebp, ebp
0x88333C: jz      short loc_883349
0x88333E: mov     edx, [ebp+0]
0x883341: mov     eax, [edx]
0x883343: push    1
0x883345: mov     ecx, ebp
0x883347: call    eax
0x883349: test    ebx, ebx
0x88334B: mov     [esi+58h], ebx
0x88334E: jz      short loc_88335A
0x883350: add     ebx, 4
0x883353: push    ebx; lpAddend
0x883354: call    dword ptr ds:0A28078h
0x88335A: mov     ecx, [esp+30h+var_18]
0x88335E: mov     ebx, [ecx+10Ch]
0x883364: mov     ebp, [esi+44h]
0x883367: cmp     ebp, ebx
0x883369: jz      short loc_88339D
0x88336B: test    ebp, ebp
0x88336D: jz      short loc_88338C
0x88336F: lea     edx, [ebp+4]
0x883372: push    edx; lpAddend
0x883373: call    dword ptr ds:0A2807Ch
0x883379: test    eax, eax
0x88337B: jnz     short loc_88338C
0x88337D: test    ebp, ebp
0x88337F: jz      short loc_88338C
0x883381: mov     eax, [ebp+0]
0x883384: mov     edx, [eax]
0x883386: push    1
0x883388: mov     ecx, ebp
0x88338A: call    edx
0x88338C: test    ebx, ebx
0x88338E: mov     [esi+44h], ebx
0x883391: jz      short loc_88339D
0x883393: add     ebx, 4
0x883396: push    ebx; lpAddend
0x883397: call    dword ptr ds:0A28078h
0x88339D: cmp     dword ptr [esi+30h], 0
0x8833A1: jnz     short loc_8833AB
0x8833A3: call    sub_772DF0
0x8833A8: mov     [esi+30h], eax
0x8833AB: mov     ecx, [esi+30h]
0x8833AE: push    0
0x8833B0: push    0
0x8833B2: push    1Bh
0x8833B4: call    sub_772CD0
0x8833B9: cmp     dword ptr [esi+30h], 0
0x8833BD: jnz     short loc_8833C7
0x8833BF: call    sub_772DF0
0x8833C4: mov     [esi+30h], eax
0x8833C7: mov     ecx, [esi+30h]
0x8833CA: push    0
0x8833CC: push    0
0x8833CE: push    0Fh
0x8833D0: call    sub_772CD0
0x8833D5: cmp     dword ptr [esi+30h], 0
0x8833D9: jnz     short loc_8833E3
0x8833DB: call    sub_772DF0
0x8833E0: mov     [esi+30h], eax
0x8833E3: mov     ecx, [esi+30h]
0x8833E6: push    0
0x8833E8: push    1
0x8833EA: push    7
0x8833EC: call    sub_772CD0
0x8833F1: cmp     dword ptr [esi+30h], 0
0x8833F5: jnz     short loc_8833FF
0x8833F7: call    sub_772DF0
0x8833FC: mov     [esi+30h], eax
0x8833FF: mov     ecx, [esi+30h]
0x883402: push    0
0x883404: push    4
0x883406: push    17h
0x883408: call    sub_772CD0
0x88340D: cmp     dword ptr [esi+30h], 0
0x883411: jnz     short loc_88341B
0x883413: call    sub_772DF0
0x883418: mov     [esi+30h], eax
0x88341B: mov     ecx, [esi+30h]
0x88341E: push    0
0x883420: push    1
0x883422: push    0Eh
0x883424: call    sub_772CD0
0x883429: cmp     dword ptr [esi+30h], 0
0x88342D: jnz     short loc_883437
0x88342F: call    sub_772DF0
0x883434: mov     [esi+30h], eax
0x883437: mov     ecx, [esi+30h]
0x88343A: push    0
0x88343C: push    0
0x88343E: push    34h ; '4'
0x883440: call    sub_772CD0
0x883445: mov     eax, ds:0B43B60h
0x88344A: mov     ecx, ds:0B441F0h
0x883450: mov     edx, ds:0B434D0h
0x883456: mov     ds:0B43B80h, eax
0x88345B: mov     eax, ds:0B44880h
0x883460: or      ebx, 0FFFFFFFFh
0x883463: cmp     esi, ds:0B47794h
0x883469: mov     ds:0B44210h, ecx
0x88346F: mov     ds:0B434F0h, edx
0x883475: mov     ds:0B448A0h, eax
0x88347A: jz      short loc_88349A
0x88347C: add     [esi+60h], ebx
0x88347F: jnz     short loc_883488
0x883481: mov     ecx, esi
0x883483: call    sub_7604D0
0x883488: mov     esi, ds:0B47794h
0x88348E: test    esi, esi
0x883490: mov     [esp+30h+var_14], esi
0x883494: jz      short loc_88349A
0x883496: add     dword ptr [esi+60h], 1
0x88349A: mov     eax, [esi+18h]
0x88349D: cmp     eax, 2
0x8834A0: jnb     loc_88358A
0x8834A6: lea     ecx, [esp+30h+var_10]
0x8834AA: push    ecx
0x8834AB: call    sub_772630
0x8834B0: add     esp, 4
0x8834B3: mov     ebp, eax
0x8834B5: cmp     edi, [ebp+0]
0x8834B8: mov     byte ptr [esp+30h+var_4], 3
0x8834BD: jz      short loc_8834DE
0x8834BF: test    edi, edi
0x8834C1: jz      short loc_8834CF
0x8834C3: add     [edi+5Ch], ebx
0x8834C6: jnz     short loc_8834CF
0x8834C8: mov     ecx, edi
0x8834CA: call    sub_772560
0x8834CF: mov     edi, [ebp+0]
0x8834D2: test    edi, edi
0x8834D4: mov     [esp+30h+var_1C], edi
0x8834D8: jz      short loc_8834DE
0x8834DA: add     dword ptr [edi+5Ch], 1
0x8834DE: mov     eax, [esp+30h+var_10]
0x8834E2: test    eax, eax
0x8834E4: mov     byte ptr [esp+30h+var_4], 1
0x8834E9: jz      short loc_8834FD
0x8834EB: add     [eax+5Ch], ebx
0x8834EE: mov     ecx, eax
0x8834F0: add     eax, 5Ch ; '\'
0x8834F3: cmp     dword ptr [eax], 0
0x8834F6: jnz     short loc_8834FD
0x8834F8: call    sub_772560
0x8834FD: push    2
0x8834FF: push    1
0x883501: push    0
0x883503: push    edi
0x883504: call    sub_801110
0x883509: mov     edx, [esi+14h]
0x88350C: add     esp, 10h
0x88350F: push    edi; a3
0x883510: push    edx; a2
0x883511: mov     ecx, esi; this
0x883513: call    sub_760010
0x883518: lea     eax, [esp+30h+var_10]
0x88351C: push    eax
0x88351D: call    sub_772630
0x883522: add     esp, 4
0x883525: mov     ebp, eax
0x883527: cmp     edi, [ebp+0]
0x88352A: mov     byte ptr [esp+30h+var_4], 4
0x88352F: jz      short loc_883550
0x883531: test    edi, edi
0x883533: jz      short loc_883541
0x883535: add     [edi+5Ch], ebx
0x883538: jnz     short loc_883541
0x88353A: mov     ecx, edi
0x88353C: call    sub_772560
0x883541: mov     edi, [ebp+0]
0x883544: test    edi, edi
0x883546: mov     [esp+30h+var_1C], edi
0x88354A: jz      short loc_883550
0x88354C: add     dword ptr [edi+5Ch], 1
0x883550: mov     eax, [esp+30h+var_10]
0x883554: test    eax, eax
0x883556: mov     byte ptr [esp+30h+var_4], 1
0x88355B: jz      short loc_88356F
0x88355D: add     [eax+5Ch], ebx
0x883560: mov     ecx, eax
0x883562: add     eax, 5Ch ; '\'
0x883565: cmp     dword ptr [eax], 0
0x883568: jnz     short loc_88356F
0x88356A: call    sub_772560
0x88356F: push    2
0x883571: push    1
0x883573: push    0
0x883575: push    edi
0x883576: call    sub_801110
0x88357B: mov     ecx, [esi+14h]
0x88357E: add     esp, 10h
0x883581: push    edi; a3
0x883582: push    ecx; a2
0x883583: mov     ecx, esi; this
0x883585: call    sub_760010
0x88358A: mov     edx, [esp+30h+var_18]
0x88358E: mov     ebx, [edx+0A0h]
0x883594: mov     ebp, [esi+58h]
0x883597: cmp     ebp, ebx
0x883599: jz      short loc_8835CD
0x88359B: test    ebp, ebp
0x88359D: jz      short loc_8835BC
0x88359F: lea     eax, [ebp+4]
0x8835A2: push    eax; lpAddend
0x8835A3: call    dword ptr ds:0A2807Ch
0x8835A9: test    eax, eax
0x8835AB: jnz     short loc_8835BC
0x8835AD: test    ebp, ebp
0x8835AF: jz      short loc_8835BC
0x8835B1: mov     edx, [ebp+0]
0x8835B4: mov     eax, [edx]
0x8835B6: push    1
0x8835B8: mov     ecx, ebp
0x8835BA: call    eax
0x8835BC: test    ebx, ebx
0x8835BE: mov     [esi+58h], ebx
0x8835C1: jz      short loc_8835CD
0x8835C3: add     ebx, 4
0x8835C6: push    ebx; lpAddend
0x8835C7: call    dword ptr ds:0A28078h
0x8835CD: mov     ecx, [esp+30h+var_18]
0x8835D1: mov     ebx, [ecx+110h]
0x8835D7: mov     ebp, [esi+44h]
0x8835DA: cmp     ebp, ebx
0x8835DC: jz      short loc_883610
0x8835DE: test    ebp, ebp
0x8835E0: jz      short loc_8835FF
0x8835E2: lea     edx, [ebp+4]
0x8835E5: push    edx; lpAddend
0x8835E6: call    dword ptr ds:0A2807Ch
0x8835EC: test    eax, eax
0x8835EE: jnz     short loc_8835FF
0x8835F0: test    ebp, ebp
0x8835F2: jz      short loc_8835FF
0x8835F4: mov     eax, [ebp+0]
0x8835F7: mov     edx, [eax]
0x8835F9: push    1
0x8835FB: mov     ecx, ebp
0x8835FD: call    edx
0x8835FF: test    ebx, ebx
0x883601: mov     [esi+44h], ebx
0x883604: jz      short loc_883610
0x883606: add     ebx, 4
0x883609: push    ebx; lpAddend
0x88360A: call    dword ptr ds:0A28078h
0x883610: cmp     dword ptr [esi+30h], 0
0x883614: jnz     short loc_88361E
0x883616: call    sub_772DF0
0x88361B: mov     [esi+30h], eax
0x88361E: mov     ecx, [esi+30h]
0x883621: push    0
0x883623: push    0
0x883625: push    1Bh
0x883627: call    sub_772CD0
0x88362C: cmp     dword ptr [esi+30h], 0
0x883630: jnz     short loc_88363A
0x883632: call    sub_772DF0
0x883637: mov     [esi+30h], eax
0x88363A: mov     ecx, [esi+30h]
0x88363D: push    0
0x88363F: push    0
0x883641: push    0Fh
0x883643: call    sub_772CD0
0x883648: cmp     dword ptr [esi+30h], 0
0x88364C: jnz     short loc_883656
0x88364E: call    sub_772DF0
0x883653: mov     [esi+30h], eax
0x883656: mov     ecx, [esi+30h]
0x883659: push    0
0x88365B: push    1
0x88365D: push    7
0x88365F: call    sub_772CD0
0x883664: cmp     dword ptr [esi+30h], 0
0x883668: jnz     short loc_883672
0x88366A: call    sub_772DF0
0x88366F: mov     [esi+30h], eax
0x883672: mov     ecx, [esi+30h]
0x883675: push    0
0x883677: push    4
0x883679: push    17h
0x88367B: call    sub_772CD0
0x883680: cmp     dword ptr [esi+30h], 0
0x883684: jnz     short loc_88368E
0x883686: call    sub_772DF0
0x88368B: mov     [esi+30h], eax
0x88368E: mov     ecx, [esi+30h]
0x883691: push    0
0x883693: push    1
0x883695: push    0Eh
0x883697: call    sub_772CD0
0x88369C: cmp     dword ptr [esi+30h], 0
0x8836A0: jnz     short loc_8836AA
0x8836A2: call    sub_772DF0
0x8836A7: mov     [esi+30h], eax
0x8836AA: mov     ecx, [esi+30h]
0x8836AD: push    0
0x8836AF: push    0
0x8836B1: push    34h ; '4'
0x8836B3: call    sub_772CD0
0x8836B8: mov     eax, ds:0B43B84h
0x8836BD: mov     ecx, ds:0B44214h
0x8836C3: mov     edx, ds:0B434F4h
0x8836C9: mov     ds:0B43BDCh, eax
0x8836CE: mov     eax, ds:0B448A4h
0x8836D3: or      ebx, 0FFFFFFFFh
0x8836D6: cmp     esi, ds:0B47798h
0x8836DC: mov     ds:0B4426Ch, ecx
0x8836E2: mov     ds:0B4354Ch, edx
0x8836E8: mov     ds:0B448FCh, eax
0x8836ED: jz      short loc_88370D
0x8836EF: add     [esi+60h], ebx
0x8836F2: jnz     short loc_8836FB
0x8836F4: mov     ecx, esi
0x8836F6: call    sub_7604D0
0x8836FB: mov     esi, ds:0B47798h
0x883701: test    esi, esi
0x883703: mov     [esp+30h+var_14], esi
0x883707: jz      short loc_88370D
0x883709: add     dword ptr [esi+60h], 1
0x88370D: mov     eax, [esi+18h]
0x883710: cmp     eax, 2
0x883713: jnb     loc_8837FD
0x883719: lea     ecx, [esp+30h+var_10]
0x88371D: push    ecx
0x88371E: call    sub_772630
0x883723: add     esp, 4
0x883726: mov     ebp, eax
0x883728: cmp     edi, [ebp+0]
0x88372B: mov     byte ptr [esp+30h+var_4], 5
0x883730: jz      short loc_883751
0x883732: test    edi, edi
0x883734: jz      short loc_883742
0x883736: add     [edi+5Ch], ebx
0x883739: jnz     short loc_883742
0x88373B: mov     ecx, edi
0x88373D: call    sub_772560
0x883742: mov     edi, [ebp+0]
0x883745: test    edi, edi
0x883747: mov     [esp+30h+var_1C], edi
0x88374B: jz      short loc_883751
0x88374D: add     dword ptr [edi+5Ch], 1
0x883751: mov     eax, [esp+30h+var_10]
0x883755: test    eax, eax
0x883757: mov     byte ptr [esp+30h+var_4], 1
0x88375C: jz      short loc_883770
0x88375E: add     [eax+5Ch], ebx
0x883761: mov     ecx, eax
0x883763: add     eax, 5Ch ; '\'
0x883766: cmp     dword ptr [eax], 0
0x883769: jnz     short loc_883770
0x88376B: call    sub_772560
0x883770: push    2
0x883772: push    1
0x883774: push    0
0x883776: push    edi
0x883777: call    sub_801110
0x88377C: mov     edx, [esi+14h]
0x88377F: add     esp, 10h
0x883782: push    edi; a3
0x883783: push    edx; a2
0x883784: mov     ecx, esi; this
0x883786: call    sub_760010
0x88378B: lea     eax, [esp+30h+var_10]
0x88378F: push    eax
0x883790: call    sub_772630
0x883795: add     esp, 4
0x883798: mov     ebp, eax
0x88379A: cmp     edi, [ebp+0]
0x88379D: mov     byte ptr [esp+30h+var_4], 6
0x8837A2: jz      short loc_8837C3
0x8837A4: test    edi, edi
0x8837A6: jz      short loc_8837B4
0x8837A8: add     [edi+5Ch], ebx
0x8837AB: jnz     short loc_8837B4
0x8837AD: mov     ecx, edi
0x8837AF: call    sub_772560
0x8837B4: mov     edi, [ebp+0]
0x8837B7: test    edi, edi
0x8837B9: mov     [esp+30h+var_1C], edi
0x8837BD: jz      short loc_8837C3
0x8837BF: add     dword ptr [edi+5Ch], 1
0x8837C3: mov     eax, [esp+30h+var_10]
0x8837C7: test    eax, eax
0x8837C9: mov     byte ptr [esp+30h+var_4], 1
0x8837CE: jz      short loc_8837E2
0x8837D0: add     [eax+5Ch], ebx
0x8837D3: mov     ecx, eax
0x8837D5: add     eax, 5Ch ; '\'
0x8837D8: cmp     dword ptr [eax], 0
0x8837DB: jnz     short loc_8837E2
0x8837DD: call    sub_772560
0x8837E2: push    2
0x8837E4: push    1
0x8837E6: push    0
0x8837E8: push    edi
0x8837E9: call    sub_801110
0x8837EE: mov     ecx, [esi+14h]
0x8837F1: add     esp, 10h
0x8837F4: push    edi; a3
0x8837F5: push    ecx; a2
0x8837F6: mov     ecx, esi; this
0x8837F8: call    sub_760010
0x8837FD: mov     edx, [esp+30h+var_18]
0x883801: mov     ebx, [edx+0A4h]
0x883807: mov     ebp, [esi+58h]
0x88380A: cmp     ebp, ebx
0x88380C: jz      short loc_883840
0x88380E: test    ebp, ebp
0x883810: jz      short loc_88382F
0x883812: lea     eax, [ebp+4]
0x883815: push    eax; lpAddend
0x883816: call    dword ptr ds:0A2807Ch
0x88381C: test    eax, eax
0x88381E: jnz     short loc_88382F
0x883820: test    ebp, ebp
0x883822: jz      short loc_88382F
0x883824: mov     edx, [ebp+0]
0x883827: mov     eax, [edx]
0x883829: push    1
0x88382B: mov     ecx, ebp
0x88382D: call    eax
0x88382F: test    ebx, ebx
0x883831: mov     [esi+58h], ebx
0x883834: jz      short loc_883840
0x883836: add     ebx, 4
0x883839: push    ebx; lpAddend
0x88383A: call    dword ptr ds:0A28078h
0x883840: mov     ecx, [esp+30h+var_18]
0x883844: mov     ebx, [ecx+114h]
0x88384A: mov     ebp, [esi+44h]
0x88384D: cmp     ebp, ebx
0x88384F: jz      short loc_883883
0x883851: test    ebp, ebp
0x883853: jz      short loc_883872
0x883855: lea     edx, [ebp+4]
0x883858: push    edx; lpAddend
0x883859: call    dword ptr ds:0A2807Ch
0x88385F: test    eax, eax
0x883861: jnz     short loc_883872
0x883863: test    ebp, ebp
0x883865: jz      short loc_883872
0x883867: mov     eax, [ebp+0]
0x88386A: mov     edx, [eax]
0x88386C: push    1
0x88386E: mov     ecx, ebp
0x883870: call    edx
0x883872: test    ebx, ebx
0x883874: mov     [esi+44h], ebx
0x883877: jz      short loc_883883
0x883879: add     ebx, 4
0x88387C: push    ebx; lpAddend
0x88387D: call    dword ptr ds:0A28078h
0x883883: cmp     dword ptr [esi+30h], 0
0x883887: jnz     short loc_883891
0x883889: call    sub_772DF0
0x88388E: mov     [esi+30h], eax
0x883891: mov     ecx, [esi+30h]
0x883894: push    0
0x883896: push    0
0x883898: push    1Bh
0x88389A: call    sub_772CD0
0x88389F: cmp     dword ptr [esi+30h], 0
0x8838A3: jnz     short loc_8838AD
0x8838A5: call    sub_772DF0
0x8838AA: mov     [esi+30h], eax
0x8838AD: mov     ecx, [esi+30h]
0x8838B0: push    0
0x8838B2: push    0
0x8838B4: push    0Fh
0x8838B6: call    sub_772CD0
0x8838BB: cmp     dword ptr [esi+30h], 0
0x8838BF: jnz     short loc_8838C9
0x8838C1: call    sub_772DF0
0x8838C6: mov     [esi+30h], eax
0x8838C9: mov     ecx, [esi+30h]
0x8838CC: push    0
0x8838CE: push    1
0x8838D0: push    7
0x8838D2: call    sub_772CD0
0x8838D7: cmp     dword ptr [esi+30h], 0
0x8838DB: jnz     short loc_8838E5
0x8838DD: call    sub_772DF0
0x8838E2: mov     [esi+30h], eax
0x8838E5: mov     ecx, [esi+30h]
0x8838E8: push    0
0x8838EA: push    4
0x8838EC: push    17h
0x8838EE: call    sub_772CD0
0x8838F3: cmp     dword ptr [esi+30h], 0
0x8838F7: jnz     short loc_883901
0x8838F9: call    sub_772DF0
0x8838FE: mov     [esi+30h], eax
0x883901: mov     ecx, [esi+30h]
0x883904: push    0
0x883906: push    1
0x883908: push    0Eh
0x88390A: call    sub_772CD0
0x88390F: cmp     dword ptr [esi+30h], 0
0x883913: jnz     short loc_88391D
0x883915: call    sub_772DF0
0x88391A: mov     [esi+30h], eax
0x88391D: mov     ecx, [esi+30h]
0x883920: push    0
0x883922: push    0
0x883924: push    34h ; '4'
0x883926: call    sub_772CD0
0x88392B: mov     eax, ds:0B43BF0h
0x883930: mov     ecx, ds:0B44280h
0x883936: mov     edx, ds:0B43560h
0x88393C: mov     ds:0B43BE0h, eax
0x883941: mov     eax, ds:0B44910h
0x883946: or      ebx, 0FFFFFFFFh
0x883949: cmp     esi, ds:0B4779Ch
0x88394F: mov     ds:0B44270h, ecx
0x883955: mov     ds:0B43550h, edx
0x88395B: mov     ds:0B44900h, eax
0x883960: jz      short loc_883980
0x883962: add     [esi+60h], ebx
0x883965: jnz     short loc_88396E
0x883967: mov     ecx, esi
0x883969: call    sub_7604D0
0x88396E: mov     esi, ds:0B4779Ch
0x883974: test    esi, esi
0x883976: mov     [esp+30h+var_14], esi
0x88397A: jz      short loc_883980
0x88397C: add     dword ptr [esi+60h], 1
0x883980: mov     eax, [esi+18h]
0x883983: cmp     eax, 4
0x883986: jnb     loc_883B7E
0x88398C: lea     ecx, [esp+30h+var_10]
0x883990: push    ecx
0x883991: call    sub_772630
0x883996: add     esp, 4
0x883999: mov     ebp, eax
0x88399B: cmp     edi, [ebp+0]
0x88399E: mov     byte ptr [esp+30h+var_4], 7
0x8839A3: jz      short loc_8839C4
0x8839A5: test    edi, edi
0x8839A7: jz      short loc_8839B5
0x8839A9: add     [edi+5Ch], ebx
0x8839AC: jnz     short loc_8839B5
0x8839AE: mov     ecx, edi
0x8839B0: call    sub_772560
0x8839B5: mov     edi, [ebp+0]
0x8839B8: test    edi, edi
0x8839BA: mov     [esp+30h+var_1C], edi
0x8839BE: jz      short loc_8839C4
0x8839C0: add     dword ptr [edi+5Ch], 1
0x8839C4: mov     eax, [esp+30h+var_10]
0x8839C8: test    eax, eax
0x8839CA: mov     byte ptr [esp+30h+var_4], 1
0x8839CF: jz      short loc_8839E3
0x8839D1: add     [eax+5Ch], ebx
0x8839D4: mov     ecx, eax
0x8839D6: add     eax, 5Ch ; '\'
0x8839D9: cmp     dword ptr [eax], 0
0x8839DC: jnz     short loc_8839E3
0x8839DE: call    sub_772560
0x8839E3: push    2
0x8839E5: push    1
0x8839E7: push    0
0x8839E9: push    edi
0x8839EA: call    sub_801110
0x8839EF: mov     edx, [esi+14h]
0x8839F2: add     esp, 10h
0x8839F5: push    edi; a3
0x8839F6: push    edx; a2
0x8839F7: mov     ecx, esi; this
0x8839F9: call    sub_760010
0x8839FE: lea     eax, [esp+30h+var_10]
0x883A02: push    eax
0x883A03: call    sub_772630
0x883A08: add     esp, 4
0x883A0B: mov     ebp, eax
0x883A0D: cmp     edi, [ebp+0]
0x883A10: mov     byte ptr [esp+30h+var_4], 8
0x883A15: jz      short loc_883A36
0x883A17: test    edi, edi
0x883A19: jz      short loc_883A27
0x883A1B: add     [edi+5Ch], ebx
0x883A1E: jnz     short loc_883A27
0x883A20: mov     ecx, edi
0x883A22: call    sub_772560
0x883A27: mov     edi, [ebp+0]
0x883A2A: test    edi, edi
0x883A2C: mov     [esp+30h+var_1C], edi
0x883A30: jz      short loc_883A36
0x883A32: add     dword ptr [edi+5Ch], 1
0x883A36: mov     eax, [esp+30h+var_10]
0x883A3A: test    eax, eax
0x883A3C: mov     byte ptr [esp+30h+var_4], 1
0x883A41: jz      short loc_883A55
0x883A43: add     [eax+5Ch], ebx
0x883A46: mov     ecx, eax
0x883A48: add     eax, 5Ch ; '\'
0x883A4B: cmp     dword ptr [eax], 0
0x883A4E: jnz     short loc_883A55
0x883A50: call    sub_772560
0x883A55: push    2
0x883A57: push    3
0x883A59: push    1
0x883A5B: push    edi
0x883A5C: call    sub_801110
0x883A61: mov     ecx, ds:0B43110h
0x883A67: add     esp, 10h
0x883A6A: push    ecx; a2
0x883A6B: mov     ecx, edi; this
0x883A6D: call    sub_76C910
0x883A72: mov     edx, [esi+14h]
0x883A75: push    edi; a3
0x883A76: push    edx; a2
0x883A77: mov     ecx, esi; this
0x883A79: call    sub_760010
0x883A7E: lea     eax, [esp+30h+var_10]
0x883A82: push    eax
0x883A83: call    sub_772630
0x883A88: add     esp, 4
0x883A8B: mov     ebp, eax
0x883A8D: cmp     edi, [ebp+0]
0x883A90: mov     byte ptr [esp+30h+var_4], 9
0x883A95: jz      short loc_883AB6
0x883A97: test    edi, edi
0x883A99: jz      short loc_883AA7
0x883A9B: add     [edi+5Ch], ebx
0x883A9E: jnz     short loc_883AA7
0x883AA0: mov     ecx, edi
0x883AA2: call    sub_772560
0x883AA7: mov     edi, [ebp+0]
0x883AAA: test    edi, edi
0x883AAC: mov     [esp+30h+var_1C], edi
0x883AB0: jz      short loc_883AB6
0x883AB2: add     dword ptr [edi+5Ch], 1
0x883AB6: mov     eax, [esp+30h+var_10]
0x883ABA: test    eax, eax
0x883ABC: mov     byte ptr [esp+30h+var_4], 1
0x883AC1: jz      short loc_883AD5
0x883AC3: add     [eax+5Ch], ebx
0x883AC6: mov     ecx, eax
0x883AC8: add     eax, 5Ch ; '\'
0x883ACB: cmp     dword ptr [eax], 0
0x883ACE: jnz     short loc_883AD5
0x883AD0: call    sub_772560
0x883AD5: push    2
0x883AD7: push    3
0x883AD9: push    2
0x883ADB: push    edi
0x883ADC: call    sub_801110
0x883AE1: mov     ecx, ds:0B430D4h
0x883AE7: add     esp, 10h
0x883AEA: push    ecx; a2
0x883AEB: mov     ecx, edi; this
0x883AED: call    sub_76C910
0x883AF2: mov     edx, [esi+14h]
0x883AF5: push    edi; a3
0x883AF6: push    edx; a2
0x883AF7: mov     ecx, esi; this
0x883AF9: call    sub_760010
0x883AFE: lea     eax, [esp+30h+var_10]
0x883B02: push    eax
0x883B03: call    sub_772630
0x883B08: add     esp, 4
0x883B0B: mov     ebp, eax
0x883B0D: cmp     edi, [ebp+0]
0x883B10: mov     byte ptr [esp+30h+var_4], 0Ah
0x883B15: jz      short loc_883B36
0x883B17: test    edi, edi
0x883B19: jz      short loc_883B27
0x883B1B: add     [edi+5Ch], ebx
0x883B1E: jnz     short loc_883B27
0x883B20: mov     ecx, edi
0x883B22: call    sub_772560
0x883B27: mov     edi, [ebp+0]
0x883B2A: test    edi, edi
0x883B2C: mov     [esp+30h+var_1C], edi
0x883B30: jz      short loc_883B36
0x883B32: add     dword ptr [edi+5Ch], 1
0x883B36: mov     eax, [esp+30h+var_10]
0x883B3A: test    eax, eax
0x883B3C: mov     byte ptr [esp+30h+var_4], 1
0x883B41: jz      short loc_883B55
0x883B43: add     [eax+5Ch], ebx
0x883B46: mov     ecx, eax
0x883B48: add     eax, 5Ch ; '\'
0x883B4B: cmp     dword ptr [eax], 0
0x883B4E: jnz     short loc_883B55
0x883B50: call    sub_772560
0x883B55: push    2
0x883B57: push    1
0x883B59: push    3
0x883B5B: push    edi
0x883B5C: call    sub_801110
0x883B61: mov     ecx, ds:0B430ECh
0x883B67: add     esp, 10h
0x883B6A: push    ecx; a2
0x883B6B: mov     ecx, edi; this
0x883B6D: call    sub_76C910
0x883B72: mov     edx, [esi+14h]
0x883B75: push    edi; a3
0x883B76: push    edx; a2
0x883B77: mov     ecx, esi; this
0x883B79: call    sub_760010
0x883B7E: mov     eax, [esp+30h+var_18]
0x883B82: mov     ebx, [eax+0A8h]
0x883B88: mov     ebp, [esi+58h]
0x883B8B: cmp     ebp, ebx
0x883B8D: jz      short loc_883BC1
0x883B8F: test    ebp, ebp
0x883B91: jz      short loc_883BB0
0x883B93: lea     ecx, [ebp+4]
0x883B96: push    ecx; lpAddend
0x883B97: call    dword ptr ds:0A2807Ch
0x883B9D: test    eax, eax
0x883B9F: jnz     short loc_883BB0
0x883BA1: test    ebp, ebp
0x883BA3: jz      short loc_883BB0
0x883BA5: mov     edx, [ebp+0]
0x883BA8: mov     eax, [edx]
0x883BAA: push    1
0x883BAC: mov     ecx, ebp
0x883BAE: call    eax
0x883BB0: test    ebx, ebx
0x883BB2: mov     [esi+58h], ebx
0x883BB5: jz      short loc_883BC1
0x883BB7: add     ebx, 4
0x883BBA: push    ebx; lpAddend
0x883BBB: call    dword ptr ds:0A28078h
0x883BC1: mov     ecx, [esp+30h+var_18]
0x883BC5: mov     ebx, [ecx+118h]
0x883BCB: mov     ebp, [esi+44h]
0x883BCE: cmp     ebp, ebx
0x883BD0: jz      short loc_883C04
0x883BD2: test    ebp, ebp
0x883BD4: jz      short loc_883BF3
0x883BD6: lea     edx, [ebp+4]
0x883BD9: push    edx; lpAddend
0x883BDA: call    dword ptr ds:0A2807Ch
0x883BE0: test    eax, eax
0x883BE2: jnz     short loc_883BF3
0x883BE4: test    ebp, ebp
0x883BE6: jz      short loc_883BF3
0x883BE8: mov     eax, [ebp+0]
0x883BEB: mov     edx, [eax]
0x883BED: push    1
0x883BEF: mov     ecx, ebp
0x883BF1: call    edx
0x883BF3: test    ebx, ebx
0x883BF5: mov     [esi+44h], ebx
0x883BF8: jz      short loc_883C04
0x883BFA: add     ebx, 4
0x883BFD: push    ebx; lpAddend
0x883BFE: call    dword ptr ds:0A28078h
0x883C04: cmp     dword ptr [esi+30h], 0
0x883C08: jnz     short loc_883C12
0x883C0A: call    sub_772DF0
0x883C0F: mov     [esi+30h], eax
0x883C12: mov     ecx, [esi+30h]
0x883C15: push    0
0x883C17: push    0
0x883C19: push    1Bh
0x883C1B: call    sub_772CD0
0x883C20: cmp     dword ptr [esi+30h], 0
0x883C24: jnz     short loc_883C2E
0x883C26: call    sub_772DF0
0x883C2B: mov     [esi+30h], eax
0x883C2E: mov     ecx, [esi+30h]
0x883C31: push    0
0x883C33: push    0
0x883C35: push    0Fh
0x883C37: call    sub_772CD0
0x883C3C: cmp     dword ptr [esi+30h], 0
0x883C40: jnz     short loc_883C4A
0x883C42: call    sub_772DF0
0x883C47: mov     [esi+30h], eax
0x883C4A: mov     ecx, [esi+30h]
0x883C4D: push    0
0x883C4F: mov     ebp, 1
0x883C54: push    ebp
0x883C55: push    7
0x883C57: call    sub_772CD0
0x883C5C: cmp     dword ptr [esi+30h], 0
0x883C60: jnz     short loc_883C6A
0x883C62: call    sub_772DF0
0x883C67: mov     [esi+30h], eax
0x883C6A: mov     ecx, [esi+30h]
0x883C6D: push    0
0x883C6F: push    4
0x883C71: push    17h
0x883C73: call    sub_772CD0
0x883C78: cmp     dword ptr [esi+30h], 0
0x883C7C: jnz     short loc_883C86
0x883C7E: call    sub_772DF0
0x883C83: mov     [esi+30h], eax
0x883C86: mov     ecx, [esi+30h]
0x883C89: push    0
0x883C8B: push    ebp
0x883C8C: push    0Eh
0x883C8E: call    sub_772CD0
0x883C93: cmp     dword ptr [esi+30h], 0
0x883C97: jnz     short loc_883CA1
0x883C99: call    sub_772DF0
0x883C9E: mov     [esi+30h], eax
0x883CA1: mov     ecx, [esi+30h]
0x883CA4: push    0
0x883CA6: push    0
0x883CA8: push    34h ; '4'
0x883CAA: call    sub_772CD0
0x883CAF: cmp     esi, ds:0B477A0h
0x883CB5: mov     eax, ds:0B43BE4h
0x883CBA: mov     ecx, ds:0B44274h
0x883CC0: mov     edx, ds:0B43554h
0x883CC6: mov     ds:0B43BECh, eax
0x883CCB: mov     eax, ds:0B44904h
0x883CD0: mov     ds:0B4427Ch, ecx
0x883CD6: mov     ds:0B4355Ch, edx
0x883CDC: mov     ds:0B4490Ch, eax
0x883CE1: jz      short loc_883D01
0x883CE3: add     dword ptr [esi+60h], 0FFFFFFFFh
0x883CE7: jnz     short loc_883CF0
0x883CE9: mov     ecx, esi
0x883CEB: call    sub_7604D0
0x883CF0: mov     esi, ds:0B477A0h
0x883CF6: test    esi, esi
0x883CF8: mov     [esp+30h+var_14], esi
0x883CFC: jz      short loc_883D01
0x883CFE: add     [esi+60h], ebp
0x883D01: cmp     [esi+18h], ebp
0x883D04: jnb     short loc_883D76
0x883D06: lea     ecx, [esp+30h+var_10]
0x883D0A: push    ecx
0x883D0B: call    sub_772630
0x883D10: add     esp, 4
0x883D13: mov     ebx, eax
0x883D15: cmp     edi, [ebx]
0x883D17: mov     byte ptr [esp+30h+var_4], 0Bh
0x883D1C: jz      short loc_883D3C
0x883D1E: test    edi, edi
0x883D20: jz      short loc_883D2F
0x883D22: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x883D26: jnz     short loc_883D2F
0x883D28: mov     ecx, edi
0x883D2A: call    sub_772560
0x883D2F: mov     edi, [ebx]
0x883D31: test    edi, edi
0x883D33: mov     [esp+30h+var_1C], edi
0x883D37: jz      short loc_883D3C
0x883D39: add     [edi+5Ch], ebp
0x883D3C: mov     eax, [esp+30h+var_10]
0x883D40: test    eax, eax
0x883D42: mov     byte ptr [esp+30h+var_4], 1
0x883D47: jz      short loc_883D5C
0x883D49: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x883D4D: mov     ecx, eax
0x883D4F: add     eax, 5Ch ; '\'
0x883D52: cmp     dword ptr [eax], 0
0x883D55: jnz     short loc_883D5C
0x883D57: call    sub_772560
0x883D5C: push    2
0x883D5E: push    ebp
0x883D5F: push    0
0x883D61: push    edi
0x883D62: call    sub_801110
0x883D67: mov     edx, [esi+14h]
0x883D6A: add     esp, 10h
0x883D6D: push    edi; a3
0x883D6E: push    edx; a2
0x883D6F: mov     ecx, esi; this
0x883D71: call    sub_760010
0x883D76: mov     eax, [esp+30h+var_18]
0x883D7A: mov     ebx, [eax+0ACh]
0x883D80: mov     ebp, [esi+58h]
0x883D83: cmp     ebp, ebx
0x883D85: jz      short loc_883DB9
0x883D87: test    ebp, ebp
0x883D89: jz      short loc_883DA8
0x883D8B: lea     ecx, [ebp+4]
0x883D8E: push    ecx; lpAddend
0x883D8F: call    dword ptr ds:0A2807Ch
0x883D95: test    eax, eax
0x883D97: jnz     short loc_883DA8
0x883D99: test    ebp, ebp
0x883D9B: jz      short loc_883DA8
0x883D9D: mov     edx, [ebp+0]
0x883DA0: mov     eax, [edx]
0x883DA2: push    1
0x883DA4: mov     ecx, ebp
0x883DA6: call    eax
0x883DA8: test    ebx, ebx
0x883DAA: mov     [esi+58h], ebx
0x883DAD: jz      short loc_883DB9
0x883DAF: add     ebx, 4
0x883DB2: push    ebx; lpAddend
0x883DB3: call    dword ptr ds:0A28078h
0x883DB9: mov     ecx, [esp+30h+var_18]
0x883DBD: mov     ebx, [ecx+11Ch]
0x883DC3: mov     ebp, [esi+44h]
0x883DC6: cmp     ebp, ebx
0x883DC8: jz      short loc_883DFC
0x883DCA: test    ebp, ebp
0x883DCC: jz      short loc_883DEB
0x883DCE: lea     edx, [ebp+4]
0x883DD1: push    edx; lpAddend
0x883DD2: call    dword ptr ds:0A2807Ch
0x883DD8: test    eax, eax
0x883DDA: jnz     short loc_883DEB
0x883DDC: test    ebp, ebp
0x883DDE: jz      short loc_883DEB
0x883DE0: mov     eax, [ebp+0]
0x883DE3: mov     edx, [eax]
0x883DE5: push    1
0x883DE7: mov     ecx, ebp
0x883DE9: call    edx
0x883DEB: test    ebx, ebx
0x883DED: mov     [esi+44h], ebx
0x883DF0: jz      short loc_883DFC
0x883DF2: add     ebx, 4
0x883DF5: push    ebx; lpAddend
0x883DF6: call    dword ptr ds:0A28078h
0x883DFC: cmp     dword ptr [esi+30h], 0
0x883E00: jnz     short loc_883E0A
0x883E02: call    sub_772DF0
0x883E07: mov     [esi+30h], eax
0x883E0A: mov     ecx, [esi+30h]
0x883E0D: push    0
0x883E0F: push    1
0x883E11: push    1Bh
0x883E13: call    sub_772CD0
0x883E18: cmp     dword ptr [esi+30h], 0
0x883E1C: jnz     short loc_883E26
0x883E1E: call    sub_772DF0
0x883E23: mov     [esi+30h], eax
0x883E26: mov     ecx, [esi+30h]
0x883E29: push    0
0x883E2B: push    2
0x883E2D: push    13h
0x883E2F: call    sub_772CD0
0x883E34: cmp     dword ptr [esi+30h], 0
0x883E38: jnz     short loc_883E42
0x883E3A: call    sub_772DF0
0x883E3F: mov     [esi+30h], eax
0x883E42: mov     ecx, [esi+30h]
0x883E45: push    0
0x883E47: push    2
0x883E49: push    14h
0x883E4B: call    sub_772CD0
0x883E50: cmp     dword ptr [esi+30h], 0
0x883E54: jnz     short loc_883E5E
0x883E56: call    sub_772DF0
0x883E5B: mov     [esi+30h], eax
0x883E5E: mov     ecx, [esi+30h]
0x883E61: push    0
0x883E63: push    0
0x883E65: push    0Fh
0x883E67: call    sub_772CD0
0x883E6C: cmp     dword ptr [esi+30h], 0
0x883E70: jnz     short loc_883E7A
0x883E72: call    sub_772DF0
0x883E77: mov     [esi+30h], eax
0x883E7A: mov     ecx, [esi+30h]
0x883E7D: push    0
0x883E7F: push    1
0x883E81: push    7
0x883E83: call    sub_772CD0
0x883E88: cmp     dword ptr [esi+30h], 0
0x883E8C: jnz     short loc_883E96
0x883E8E: call    sub_772DF0
0x883E93: mov     [esi+30h], eax
0x883E96: mov     ecx, [esi+30h]
0x883E99: push    0
0x883E9B: push    3
0x883E9D: push    17h
0x883E9F: call    sub_772CD0
0x883EA4: cmp     dword ptr [esi+30h], 0
0x883EA8: jnz     short loc_883EB2
0x883EAA: call    sub_772DF0
0x883EAF: mov     [esi+30h], eax
0x883EB2: mov     ecx, [esi+30h]
0x883EB5: push    0
0x883EB7: push    0
0x883EB9: push    0Eh
0x883EBB: call    sub_772CD0
0x883EC0: cmp     dword ptr [esi+30h], 0
0x883EC4: jnz     short loc_883ECE
0x883EC6: call    sub_772DF0
0x883ECB: mov     [esi+30h], eax
0x883ECE: mov     ecx, [esi+30h]
0x883ED1: push    0
0x883ED3: push    0
0x883ED5: push    34h ; '4'
0x883ED7: call    sub_772CD0
0x883EDC: mov     eax, ds:0B43EA8h
0x883EE1: mov     ecx, ds:0B44538h
0x883EE7: mov     edx, ds:0B43818h
0x883EED: mov     ds:0B43EB8h, eax
0x883EF2: mov     eax, ds:0B44BC8h
0x883EF7: or      ebx, 0FFFFFFFFh
0x883EFA: cmp     esi, ds:0B477A4h
0x883F00: mov     ds:0B44548h, ecx
0x883F06: mov     ds:0B43828h, edx
0x883F0C: mov     ds:0B44BD8h, eax
0x883F11: jz      short loc_883F31
0x883F13: add     [esi+60h], ebx
0x883F16: jnz     short loc_883F1F
0x883F18: mov     ecx, esi
0x883F1A: call    sub_7604D0
0x883F1F: mov     esi, ds:0B477A4h
0x883F25: test    esi, esi
0x883F27: mov     [esp+30h+var_14], esi
0x883F2B: jz      short loc_883F31
0x883F2D: add     dword ptr [esi+60h], 1
0x883F31: cmp     dword ptr [esi+18h], 4
0x883F35: jnb     loc_88412D
0x883F3B: lea     ecx, [esp+30h+var_10]
0x883F3F: push    ecx
0x883F40: call    sub_772630
0x883F45: add     esp, 4
0x883F48: mov     ebp, eax
0x883F4A: cmp     edi, [ebp+0]
0x883F4D: mov     byte ptr [esp+30h+var_4], 0Ch
0x883F52: jz      short loc_883F73
0x883F54: test    edi, edi
0x883F56: jz      short loc_883F64
0x883F58: add     [edi+5Ch], ebx
0x883F5B: jnz     short loc_883F64
0x883F5D: mov     ecx, edi
0x883F5F: call    sub_772560
0x883F64: mov     edi, [ebp+0]
0x883F67: test    edi, edi
0x883F69: mov     [esp+30h+var_1C], edi
0x883F6D: jz      short loc_883F73
0x883F6F: add     dword ptr [edi+5Ch], 1
0x883F73: mov     eax, [esp+30h+var_10]
0x883F77: test    eax, eax
0x883F79: mov     byte ptr [esp+30h+var_4], 1
0x883F7E: jz      short loc_883F92
0x883F80: add     [eax+5Ch], ebx
0x883F83: mov     ecx, eax
0x883F85: add     eax, 5Ch ; '\'
0x883F88: cmp     dword ptr [eax], 0
0x883F8B: jnz     short loc_883F92
0x883F8D: call    sub_772560
0x883F92: push    2
0x883F94: push    1
0x883F96: push    0
0x883F98: push    edi
0x883F99: call    sub_801110
0x883F9E: mov     edx, [esi+14h]
0x883FA1: add     esp, 10h
0x883FA4: push    edi; a3
0x883FA5: push    edx; a2
0x883FA6: mov     ecx, esi; this
0x883FA8: call    sub_760010
0x883FAD: lea     eax, [esp+30h+var_10]
0x883FB1: push    eax
0x883FB2: call    sub_772630
0x883FB7: add     esp, 4
0x883FBA: mov     ebp, eax
0x883FBC: cmp     edi, [ebp+0]
0x883FBF: mov     byte ptr [esp+30h+var_4], 0Dh
0x883FC4: jz      short loc_883FE5
0x883FC6: test    edi, edi
0x883FC8: jz      short loc_883FD6
0x883FCA: add     [edi+5Ch], ebx
0x883FCD: jnz     short loc_883FD6
0x883FCF: mov     ecx, edi
0x883FD1: call    sub_772560
0x883FD6: mov     edi, [ebp+0]
0x883FD9: test    edi, edi
0x883FDB: mov     [esp+30h+var_1C], edi
0x883FDF: jz      short loc_883FE5
0x883FE1: add     dword ptr [edi+5Ch], 1
0x883FE5: mov     eax, [esp+30h+var_10]
0x883FE9: test    eax, eax
0x883FEB: mov     byte ptr [esp+30h+var_4], 1
0x883FF0: jz      short loc_884004
0x883FF2: add     [eax+5Ch], ebx
0x883FF5: mov     ecx, eax
0x883FF7: add     eax, 5Ch ; '\'
0x883FFA: cmp     dword ptr [eax], 0
0x883FFD: jnz     short loc_884004
0x883FFF: call    sub_772560
0x884004: push    2
0x884006: push    3
0x884008: push    1
0x88400A: push    edi
0x88400B: call    sub_801110
0x884010: mov     ecx, ds:0B43110h
0x884016: add     esp, 10h
0x884019: push    ecx; a2
0x88401A: mov     ecx, edi; this
0x88401C: call    sub_76C910
0x884021: mov     edx, [esi+14h]
0x884024: push    edi; a3
0x884025: push    edx; a2
0x884026: mov     ecx, esi; this
0x884028: call    sub_760010
0x88402D: lea     eax, [esp+30h+var_10]
0x884031: push    eax
0x884032: call    sub_772630
0x884037: add     esp, 4
0x88403A: mov     ebp, eax
0x88403C: cmp     edi, [ebp+0]
0x88403F: mov     byte ptr [esp+30h+var_4], 0Eh
0x884044: jz      short loc_884065
0x884046: test    edi, edi
0x884048: jz      short loc_884056
0x88404A: add     [edi+5Ch], ebx
0x88404D: jnz     short loc_884056
0x88404F: mov     ecx, edi
0x884051: call    sub_772560
0x884056: mov     edi, [ebp+0]
0x884059: test    edi, edi
0x88405B: mov     [esp+30h+var_1C], edi
0x88405F: jz      short loc_884065
0x884061: add     dword ptr [edi+5Ch], 1
0x884065: mov     eax, [esp+30h+var_10]
0x884069: test    eax, eax
0x88406B: mov     byte ptr [esp+30h+var_4], 1
0x884070: jz      short loc_884084
0x884072: add     [eax+5Ch], ebx
0x884075: mov     ecx, eax
0x884077: add     eax, 5Ch ; '\'
0x88407A: cmp     dword ptr [eax], 0
0x88407D: jnz     short loc_884084
0x88407F: call    sub_772560
0x884084: push    2
0x884086: push    3
0x884088: push    2
0x88408A: push    edi
0x88408B: call    sub_801110
0x884090: mov     ecx, ds:0B430D4h
0x884096: add     esp, 10h
0x884099: push    ecx; a2
0x88409A: mov     ecx, edi; this
0x88409C: call    sub_76C910
0x8840A1: mov     edx, [esi+14h]
0x8840A4: push    edi; a3
0x8840A5: push    edx; a2
0x8840A6: mov     ecx, esi; this
0x8840A8: call    sub_760010
0x8840AD: lea     eax, [esp+30h+var_10]
0x8840B1: push    eax
0x8840B2: call    sub_772630
0x8840B7: add     esp, 4
0x8840BA: mov     ebp, eax
0x8840BC: cmp     edi, [ebp+0]
0x8840BF: mov     byte ptr [esp+30h+var_4], 0Fh
0x8840C4: jz      short loc_8840E5
0x8840C6: test    edi, edi
0x8840C8: jz      short loc_8840D6
0x8840CA: add     [edi+5Ch], ebx
0x8840CD: jnz     short loc_8840D6
0x8840CF: mov     ecx, edi
0x8840D1: call    sub_772560
0x8840D6: mov     edi, [ebp+0]
0x8840D9: test    edi, edi
0x8840DB: mov     [esp+30h+var_1C], edi
0x8840DF: jz      short loc_8840E5
0x8840E1: add     dword ptr [edi+5Ch], 1
0x8840E5: mov     eax, [esp+30h+var_10]
0x8840E9: test    eax, eax
0x8840EB: mov     byte ptr [esp+30h+var_4], 1
0x8840F0: jz      short loc_884104
0x8840F2: add     [eax+5Ch], ebx
0x8840F5: mov     ecx, eax
0x8840F7: add     eax, 5Ch ; '\'
0x8840FA: cmp     dword ptr [eax], 0
0x8840FD: jnz     short loc_884104
0x8840FF: call    sub_772560
0x884104: push    2
0x884106: push    1
0x884108: push    3
0x88410A: push    edi
0x88410B: call    sub_801110
0x884110: mov     ecx, ds:0B430ECh
0x884116: add     esp, 10h
0x884119: push    ecx; a2
0x88411A: mov     ecx, edi; this
0x88411C: call    sub_76C910
0x884121: mov     edx, [esi+14h]
0x884124: push    edi; a3
0x884125: push    edx; a2
0x884126: mov     ecx, esi; this
0x884128: call    sub_760010
0x88412D: mov     eax, [esp+30h+var_18]
0x884131: mov     ebx, [eax+0B0h]
0x884137: mov     ebp, [esi+58h]
0x88413A: cmp     ebp, ebx
0x88413C: jz      short loc_884170
0x88413E: test    ebp, ebp
0x884140: jz      short loc_88415F
0x884142: lea     ecx, [ebp+4]
0x884145: push    ecx; lpAddend
0x884146: call    dword ptr ds:0A2807Ch
0x88414C: test    eax, eax
0x88414E: jnz     short loc_88415F
0x884150: test    ebp, ebp
0x884152: jz      short loc_88415F
0x884154: mov     edx, [ebp+0]
0x884157: mov     eax, [edx]
0x884159: push    1
0x88415B: mov     ecx, ebp
0x88415D: call    eax
0x88415F: test    ebx, ebx
0x884161: mov     [esi+58h], ebx
0x884164: jz      short loc_884170
0x884166: add     ebx, 4
0x884169: push    ebx; lpAddend
0x88416A: call    dword ptr ds:0A28078h
0x884170: mov     ecx, [esp+30h+var_18]
0x884174: mov     ebx, [ecx+120h]
0x88417A: mov     ebp, [esi+44h]
0x88417D: cmp     ebp, ebx
0x88417F: jz      short loc_8841B3
0x884181: test    ebp, ebp
0x884183: jz      short loc_8841A2
0x884185: lea     edx, [ebp+4]
0x884188: push    edx; lpAddend
0x884189: call    dword ptr ds:0A2807Ch
0x88418F: test    eax, eax
0x884191: jnz     short loc_8841A2
0x884193: test    ebp, ebp
0x884195: jz      short loc_8841A2
0x884197: mov     eax, [ebp+0]
0x88419A: mov     edx, [eax]
0x88419C: push    1
0x88419E: mov     ecx, ebp
0x8841A0: call    edx
0x8841A2: test    ebx, ebx
0x8841A4: mov     [esi+44h], ebx
0x8841A7: jz      short loc_8841B3
0x8841A9: add     ebx, 4
0x8841AC: push    ebx; lpAddend
0x8841AD: call    dword ptr ds:0A28078h
0x8841B3: cmp     dword ptr [esi+30h], 0
0x8841B7: jnz     short loc_8841C1
0x8841B9: call    sub_772DF0
0x8841BE: mov     [esi+30h], eax
0x8841C1: mov     ecx, [esi+30h]
0x8841C4: push    0
0x8841C6: mov     ebp, 1
0x8841CB: push    ebp
0x8841CC: push    1Bh
0x8841CE: call    sub_772CD0
0x8841D3: cmp     dword ptr [esi+30h], 0
0x8841D7: jnz     short loc_8841E1
0x8841D9: call    sub_772DF0
0x8841DE: mov     [esi+30h], eax
0x8841E1: mov     ecx, [esi+30h]
0x8841E4: push    0
0x8841E6: push    2
0x8841E8: push    13h
0x8841EA: call    sub_772CD0
0x8841EF: cmp     dword ptr [esi+30h], 0
0x8841F3: jnz     short loc_8841FD
0x8841F5: call    sub_772DF0
0x8841FA: mov     [esi+30h], eax
0x8841FD: mov     ecx, [esi+30h]
0x884200: push    0
0x884202: push    2
0x884204: push    14h
0x884206: call    sub_772CD0
0x88420B: cmp     dword ptr [esi+30h], 0
0x88420F: jnz     short loc_884219
0x884211: call    sub_772DF0
0x884216: mov     [esi+30h], eax
0x884219: mov     ecx, [esi+30h]
0x88421C: push    0
0x88421E: push    0
0x884220: push    0Fh
0x884222: call    sub_772CD0
0x884227: cmp     dword ptr [esi+30h], 0
0x88422B: jnz     short loc_884235
0x88422D: call    sub_772DF0
0x884232: mov     [esi+30h], eax
0x884235: mov     ecx, [esi+30h]
0x884238: push    0
0x88423A: push    ebp
0x88423B: push    7
0x88423D: call    sub_772CD0
0x884242: cmp     dword ptr [esi+30h], 0
0x884246: jnz     short loc_884250
0x884248: call    sub_772DF0
0x88424D: mov     [esi+30h], eax
0x884250: mov     ecx, [esi+30h]
0x884253: push    0
0x884255: push    3
0x884257: push    17h
0x884259: call    sub_772CD0
0x88425E: cmp     dword ptr [esi+30h], 0
0x884262: jnz     short loc_88426C
0x884264: call    sub_772DF0
0x884269: mov     [esi+30h], eax
0x88426C: mov     ecx, [esi+30h]
0x88426F: push    0
0x884271: push    0
0x884273: push    0Eh
0x884275: call    sub_772CD0
0x88427A: cmp     dword ptr [esi+30h], 0
0x88427E: jnz     short loc_884288
0x884280: call    sub_772DF0
0x884285: mov     [esi+30h], eax
0x884288: mov     ecx, [esi+30h]
0x88428B: push    0
0x88428D: push    0
0x88428F: push    34h ; '4'
0x884291: call    sub_772CD0
0x884296: cmp     esi, ds:0B477ACh
0x88429C: mov     eax, ds:0B43EACh
0x8842A1: mov     ecx, ds:0B4453Ch
0x8842A7: mov     edx, ds:0B4381Ch
0x8842AD: mov     ds:0B43EBCh, eax
0x8842B2: mov     eax, ds:0B44BCCh
0x8842B7: mov     ds:0B4454Ch, ecx
0x8842BD: mov     ds:0B4382Ch, edx
0x8842C3: mov     ds:0B44BDCh, eax
0x8842C8: jz      short loc_8842E8
0x8842CA: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8842CE: jnz     short loc_8842D7
0x8842D0: mov     ecx, esi
0x8842D2: call    sub_7604D0
0x8842D7: mov     esi, ds:0B477ACh
0x8842DD: test    esi, esi
0x8842DF: mov     [esp+30h+var_14], esi
0x8842E3: jz      short loc_8842E8
0x8842E5: add     [esi+60h], ebp
0x8842E8: cmp     [esi+18h], ebp
0x8842EB: jnb     short loc_88435D
0x8842ED: lea     ecx, [esp+30h+var_10]
0x8842F1: push    ecx
0x8842F2: call    sub_772630
0x8842F7: add     esp, 4
0x8842FA: mov     ebx, eax
0x8842FC: cmp     edi, [ebx]
0x8842FE: mov     byte ptr [esp+30h+var_4], 10h
0x884303: jz      short loc_884323
0x884305: test    edi, edi
0x884307: jz      short loc_884316
0x884309: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x88430D: jnz     short loc_884316
0x88430F: mov     ecx, edi
0x884311: call    sub_772560
0x884316: mov     edi, [ebx]
0x884318: test    edi, edi
0x88431A: mov     [esp+30h+var_1C], edi
0x88431E: jz      short loc_884323
0x884320: add     [edi+5Ch], ebp
0x884323: mov     eax, [esp+30h+var_10]
0x884327: test    eax, eax
0x884329: mov     byte ptr [esp+30h+var_4], 1
0x88432E: jz      short loc_884343
0x884330: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x884334: mov     ecx, eax
0x884336: add     eax, 5Ch ; '\'
0x884339: cmp     dword ptr [eax], 0
0x88433C: jnz     short loc_884343
0x88433E: call    sub_772560
0x884343: push    2
0x884345: push    ebp
0x884346: push    0
0x884348: push    edi
0x884349: call    sub_801110
0x88434E: mov     edx, [esi+14h]
0x884351: add     esp, 10h
0x884354: push    edi; a3
0x884355: push    edx; a2
0x884356: mov     ecx, esi; this
0x884358: call    sub_760010
0x88435D: mov     eax, [esp+30h+var_18]
0x884361: mov     ebx, [eax+0B8h]
0x884367: mov     ebp, [esi+58h]
0x88436A: cmp     ebp, ebx
0x88436C: jz      short loc_8843A0
0x88436E: test    ebp, ebp
0x884370: jz      short loc_88438F
0x884372: lea     ecx, [ebp+4]
0x884375: push    ecx; lpAddend
0x884376: call    dword ptr ds:0A2807Ch
0x88437C: test    eax, eax
0x88437E: jnz     short loc_88438F
0x884380: test    ebp, ebp
0x884382: jz      short loc_88438F
0x884384: mov     edx, [ebp+0]
0x884387: mov     eax, [edx]
0x884389: push    1
0x88438B: mov     ecx, ebp
0x88438D: call    eax
0x88438F: test    ebx, ebx
0x884391: mov     [esi+58h], ebx
0x884394: jz      short loc_8843A0
0x884396: add     ebx, 4
0x884399: push    ebx; lpAddend
0x88439A: call    dword ptr ds:0A28078h
0x8843A0: mov     ecx, [esp+30h+var_18]
0x8843A4: mov     ebx, [ecx+128h]
0x8843AA: mov     ebp, [esi+44h]
0x8843AD: cmp     ebp, ebx
0x8843AF: jz      short loc_8843E3
0x8843B1: test    ebp, ebp
0x8843B3: jz      short loc_8843D2
0x8843B5: lea     edx, [ebp+4]
0x8843B8: push    edx; lpAddend
0x8843B9: call    dword ptr ds:0A2807Ch
0x8843BF: test    eax, eax
0x8843C1: jnz     short loc_8843D2
0x8843C3: test    ebp, ebp
0x8843C5: jz      short loc_8843D2
0x8843C7: mov     eax, [ebp+0]
0x8843CA: mov     edx, [eax]
0x8843CC: push    1
0x8843CE: mov     ecx, ebp
0x8843D0: call    edx
0x8843D2: test    ebx, ebx
0x8843D4: mov     [esi+44h], ebx
0x8843D7: jz      short loc_8843E3
0x8843D9: add     ebx, 4
0x8843DC: push    ebx; lpAddend
0x8843DD: call    dword ptr ds:0A28078h
0x8843E3: cmp     dword ptr [esi+30h], 0
0x8843E7: jnz     short loc_8843F1
0x8843E9: call    sub_772DF0
0x8843EE: mov     [esi+30h], eax
0x8843F1: mov     ecx, [esi+30h]
0x8843F4: push    0
0x8843F6: push    1
0x8843F8: push    1Bh
0x8843FA: call    sub_772CD0
0x8843FF: cmp     dword ptr [esi+30h], 0
0x884403: jnz     short loc_88440D
0x884405: call    sub_772DF0
0x88440A: mov     [esi+30h], eax
0x88440D: mov     ecx, [esi+30h]
0x884410: push    0
0x884412: push    2
0x884414: push    13h
0x884416: call    sub_772CD0
0x88441B: cmp     dword ptr [esi+30h], 0
0x88441F: jnz     short loc_884429
0x884421: call    sub_772DF0
0x884426: mov     [esi+30h], eax
0x884429: mov     ecx, [esi+30h]
0x88442C: push    0
0x88442E: push    2
0x884430: push    14h
0x884432: call    sub_772CD0
0x884437: cmp     dword ptr [esi+30h], 0
0x88443B: jnz     short loc_884445
0x88443D: call    sub_772DF0
0x884442: mov     [esi+30h], eax
0x884445: mov     ecx, [esi+30h]
0x884448: push    0
0x88444A: push    0
0x88444C: push    0Fh
0x88444E: call    sub_772CD0
0x884453: cmp     dword ptr [esi+30h], 0
0x884457: jnz     short loc_884461
0x884459: call    sub_772DF0
0x88445E: mov     [esi+30h], eax
0x884461: mov     ecx, [esi+30h]
0x884464: push    0
0x884466: push    1
0x884468: push    7
0x88446A: call    sub_772CD0
0x88446F: cmp     dword ptr [esi+30h], 0
0x884473: jnz     short loc_88447D
0x884475: call    sub_772DF0
0x88447A: mov     [esi+30h], eax
0x88447D: mov     ecx, [esi+30h]
0x884480: push    0
0x884482: push    3
0x884484: push    17h
0x884486: call    sub_772CD0
0x88448B: cmp     dword ptr [esi+30h], 0
0x88448F: jnz     short loc_884499
0x884491: call    sub_772DF0
0x884496: mov     [esi+30h], eax
0x884499: mov     ecx, [esi+30h]
0x88449C: push    0
0x88449E: push    0
0x8844A0: push    0Eh
0x8844A2: call    sub_772CD0
0x8844A7: cmp     dword ptr [esi+30h], 0
0x8844AB: jnz     short loc_8844B5
0x8844AD: call    sub_772DF0
0x8844B2: mov     [esi+30h], eax
0x8844B5: mov     ecx, [esi+30h]
0x8844B8: push    0
0x8844BA: push    0
0x8844BC: push    34h ; '4'
0x8844BE: call    sub_772CD0
0x8844C3: mov     eax, ds:0B43F5Ch
0x8844C8: mov     ecx, ds:0B445ECh
0x8844CE: mov     edx, ds:0B438CCh
0x8844D4: mov     ds:0B43F6Ch, eax
0x8844D9: mov     eax, ds:0B44C7Ch
0x8844DE: or      ebx, 0FFFFFFFFh
0x8844E1: cmp     esi, ds:0B477B0h
0x8844E7: mov     ds:0B445FCh, ecx
0x8844ED: mov     ds:0B438DCh, edx
0x8844F3: mov     ds:0B44C8Ch, eax
0x8844F8: jz      short loc_884518
0x8844FA: add     [esi+60h], ebx
0x8844FD: jnz     short loc_884506
0x8844FF: mov     ecx, esi
0x884501: call    sub_7604D0
0x884506: mov     esi, ds:0B477B0h
0x88450C: test    esi, esi
0x88450E: mov     [esp+30h+var_14], esi
0x884512: jz      short loc_884518
0x884514: add     dword ptr [esi+60h], 1
0x884518: cmp     dword ptr [esi+18h], 4
0x88451C: jnb     loc_884714
0x884522: lea     ecx, [esp+30h+var_10]
0x884526: push    ecx
0x884527: call    sub_772630
0x88452C: add     esp, 4
0x88452F: mov     ebp, eax
0x884531: cmp     edi, [ebp+0]
0x884534: mov     byte ptr [esp+30h+var_4], 11h
0x884539: jz      short loc_88455A
0x88453B: test    edi, edi
0x88453D: jz      short loc_88454B
0x88453F: add     [edi+5Ch], ebx
0x884542: jnz     short loc_88454B
0x884544: mov     ecx, edi
0x884546: call    sub_772560
0x88454B: mov     edi, [ebp+0]
0x88454E: test    edi, edi
0x884550: mov     [esp+30h+var_1C], edi
0x884554: jz      short loc_88455A
0x884556: add     dword ptr [edi+5Ch], 1
0x88455A: mov     eax, [esp+30h+var_10]
0x88455E: test    eax, eax
0x884560: mov     byte ptr [esp+30h+var_4], 1
0x884565: jz      short loc_884579
0x884567: add     [eax+5Ch], ebx
0x88456A: mov     ecx, eax
0x88456C: add     eax, 5Ch ; '\'
0x88456F: cmp     dword ptr [eax], 0
0x884572: jnz     short loc_884579
0x884574: call    sub_772560
0x884579: push    2
0x88457B: push    1
0x88457D: push    0
0x88457F: push    edi
0x884580: call    sub_801110
0x884585: mov     edx, [esi+14h]
0x884588: add     esp, 10h
0x88458B: push    edi; a3
0x88458C: push    edx; a2
0x88458D: mov     ecx, esi; this
0x88458F: call    sub_760010
0x884594: lea     eax, [esp+30h+var_10]
0x884598: push    eax
0x884599: call    sub_772630
0x88459E: add     esp, 4
0x8845A1: mov     ebp, eax
0x8845A3: cmp     edi, [ebp+0]
0x8845A6: mov     byte ptr [esp+30h+var_4], 12h
0x8845AB: jz      short loc_8845CC
0x8845AD: test    edi, edi
0x8845AF: jz      short loc_8845BD
0x8845B1: add     [edi+5Ch], ebx
0x8845B4: jnz     short loc_8845BD
0x8845B6: mov     ecx, edi
0x8845B8: call    sub_772560
0x8845BD: mov     edi, [ebp+0]
0x8845C0: test    edi, edi
0x8845C2: mov     [esp+30h+var_1C], edi
0x8845C6: jz      short loc_8845CC
0x8845C8: add     dword ptr [edi+5Ch], 1
0x8845CC: mov     eax, [esp+30h+var_10]
0x8845D0: test    eax, eax
0x8845D2: mov     byte ptr [esp+30h+var_4], 1
0x8845D7: jz      short loc_8845EB
0x8845D9: add     [eax+5Ch], ebx
0x8845DC: mov     ecx, eax
0x8845DE: add     eax, 5Ch ; '\'
0x8845E1: cmp     dword ptr [eax], 0
0x8845E4: jnz     short loc_8845EB
0x8845E6: call    sub_772560
0x8845EB: push    2
0x8845ED: push    3
0x8845EF: push    1
0x8845F1: push    edi
0x8845F2: call    sub_801110
0x8845F7: mov     ecx, ds:0B43110h
0x8845FD: add     esp, 10h
0x884600: push    ecx; a2
0x884601: mov     ecx, edi; this
0x884603: call    sub_76C910
0x884608: mov     edx, [esi+14h]
0x88460B: push    edi; a3
0x88460C: push    edx; a2
0x88460D: mov     ecx, esi; this
0x88460F: call    sub_760010
0x884614: lea     eax, [esp+30h+var_10]
0x884618: push    eax
0x884619: call    sub_772630
0x88461E: add     esp, 4
0x884621: mov     ebp, eax
0x884623: cmp     edi, [ebp+0]
0x884626: mov     byte ptr [esp+30h+var_4], 13h
0x88462B: jz      short loc_88464C
0x88462D: test    edi, edi
0x88462F: jz      short loc_88463D
0x884631: add     [edi+5Ch], ebx
0x884634: jnz     short loc_88463D
0x884636: mov     ecx, edi
0x884638: call    sub_772560
0x88463D: mov     edi, [ebp+0]
0x884640: test    edi, edi
0x884642: mov     [esp+30h+var_1C], edi
0x884646: jz      short loc_88464C
0x884648: add     dword ptr [edi+5Ch], 1
0x88464C: mov     eax, [esp+30h+var_10]
0x884650: test    eax, eax
0x884652: mov     byte ptr [esp+30h+var_4], 1
0x884657: jz      short loc_88466B
0x884659: add     [eax+5Ch], ebx
0x88465C: mov     ecx, eax
0x88465E: add     eax, 5Ch ; '\'
0x884661: cmp     dword ptr [eax], 0
0x884664: jnz     short loc_88466B
0x884666: call    sub_772560
0x88466B: push    2
0x88466D: push    3
0x88466F: push    2
0x884671: push    edi
0x884672: call    sub_801110
0x884677: mov     ecx, ds:0B430D4h
0x88467D: add     esp, 10h
0x884680: push    ecx; a2
0x884681: mov     ecx, edi; this
0x884683: call    sub_76C910
0x884688: mov     edx, [esi+14h]
0x88468B: push    edi; a3
0x88468C: push    edx; a2
0x88468D: mov     ecx, esi; this
0x88468F: call    sub_760010
0x884694: lea     eax, [esp+30h+var_10]
0x884698: push    eax
0x884699: call    sub_772630
0x88469E: add     esp, 4
0x8846A1: mov     ebp, eax
0x8846A3: cmp     edi, [ebp+0]
0x8846A6: mov     byte ptr [esp+30h+var_4], 14h
0x8846AB: jz      short loc_8846CC
0x8846AD: test    edi, edi
0x8846AF: jz      short loc_8846BD
0x8846B1: add     [edi+5Ch], ebx
0x8846B4: jnz     short loc_8846BD
0x8846B6: mov     ecx, edi
0x8846B8: call    sub_772560
0x8846BD: mov     edi, [ebp+0]
0x8846C0: test    edi, edi
0x8846C2: mov     [esp+30h+var_1C], edi
0x8846C6: jz      short loc_8846CC
0x8846C8: add     dword ptr [edi+5Ch], 1
0x8846CC: mov     eax, [esp+30h+var_10]
0x8846D0: test    eax, eax
0x8846D2: mov     byte ptr [esp+30h+var_4], 1
0x8846D7: jz      short loc_8846EB
0x8846D9: add     [eax+5Ch], ebx
0x8846DC: mov     ecx, eax
0x8846DE: add     eax, 5Ch ; '\'
0x8846E1: cmp     dword ptr [eax], 0
0x8846E4: jnz     short loc_8846EB
0x8846E6: call    sub_772560
0x8846EB: push    2
0x8846ED: push    1
0x8846EF: push    3
0x8846F1: push    edi
0x8846F2: call    sub_801110
0x8846F7: mov     ecx, ds:0B430ECh
0x8846FD: add     esp, 10h
0x884700: push    ecx; a2
0x884701: mov     ecx, edi; this
0x884703: call    sub_76C910
0x884708: mov     edx, [esi+14h]
0x88470B: push    edi; a3
0x88470C: push    edx; a2
0x88470D: mov     ecx, esi; this
0x88470F: call    sub_760010
0x884714: mov     eax, [esp+30h+var_18]
0x884718: mov     ebx, [eax+0BCh]
0x88471E: mov     ebp, [esi+58h]
0x884721: cmp     ebp, ebx
0x884723: jz      short loc_884757
0x884725: test    ebp, ebp
0x884727: jz      short loc_884746
0x884729: lea     ecx, [ebp+4]
0x88472C: push    ecx; lpAddend
0x88472D: call    dword ptr ds:0A2807Ch
0x884733: test    eax, eax
0x884735: jnz     short loc_884746
0x884737: test    ebp, ebp
0x884739: jz      short loc_884746
0x88473B: mov     edx, [ebp+0]
0x88473E: mov     eax, [edx]
0x884740: push    1
0x884742: mov     ecx, ebp
0x884744: call    eax
0x884746: test    ebx, ebx
0x884748: mov     [esi+58h], ebx
0x88474B: jz      short loc_884757
0x88474D: add     ebx, 4
0x884750: push    ebx; lpAddend
0x884751: call    dword ptr ds:0A28078h
0x884757: mov     ecx, [esp+30h+var_18]
0x88475B: mov     ebx, [ecx+12Ch]
0x884761: mov     ebp, [esi+44h]
0x884764: cmp     ebp, ebx
0x884766: jz      short loc_88479A
0x884768: test    ebp, ebp
0x88476A: jz      short loc_884789
0x88476C: lea     edx, [ebp+4]
0x88476F: push    edx; lpAddend
0x884770: call    dword ptr ds:0A2807Ch
0x884776: test    eax, eax
0x884778: jnz     short loc_884789
0x88477A: test    ebp, ebp
0x88477C: jz      short loc_884789
0x88477E: mov     eax, [ebp+0]
0x884781: mov     edx, [eax]
0x884783: push    1
0x884785: mov     ecx, ebp
0x884787: call    edx
0x884789: test    ebx, ebx
0x88478B: mov     [esi+44h], ebx
0x88478E: jz      short loc_88479A
0x884790: add     ebx, 4
0x884793: push    ebx; lpAddend
0x884794: call    dword ptr ds:0A28078h
0x88479A: cmp     dword ptr [esi+30h], 0
0x88479E: jnz     short loc_8847A8
0x8847A0: call    sub_772DF0
0x8847A5: mov     [esi+30h], eax
0x8847A8: mov     ecx, [esi+30h]
0x8847AB: push    0
0x8847AD: mov     ebp, 1
0x8847B2: push    ebp
0x8847B3: push    1Bh
0x8847B5: call    sub_772CD0
0x8847BA: cmp     dword ptr [esi+30h], 0
0x8847BE: jnz     short loc_8847C8
0x8847C0: call    sub_772DF0
0x8847C5: mov     [esi+30h], eax
0x8847C8: mov     ecx, [esi+30h]
0x8847CB: push    0
0x8847CD: push    2
0x8847CF: push    13h
0x8847D1: call    sub_772CD0
0x8847D6: cmp     dword ptr [esi+30h], 0
0x8847DA: jnz     short loc_8847E4
0x8847DC: call    sub_772DF0
0x8847E1: mov     [esi+30h], eax
0x8847E4: mov     ecx, [esi+30h]
0x8847E7: push    0
0x8847E9: push    2
0x8847EB: push    14h
0x8847ED: call    sub_772CD0
0x8847F2: cmp     dword ptr [esi+30h], 0
0x8847F6: jnz     short loc_884800
0x8847F8: call    sub_772DF0
0x8847FD: mov     [esi+30h], eax
0x884800: mov     ecx, [esi+30h]
0x884803: push    0
0x884805: push    0
0x884807: push    0Fh
0x884809: call    sub_772CD0
0x88480E: cmp     dword ptr [esi+30h], 0
0x884812: jnz     short loc_88481C
0x884814: call    sub_772DF0
0x884819: mov     [esi+30h], eax
0x88481C: mov     ecx, [esi+30h]
0x88481F: push    0
0x884821: push    ebp
0x884822: push    7
0x884824: call    sub_772CD0
0x884829: cmp     dword ptr [esi+30h], 0
0x88482D: jnz     short loc_884837
0x88482F: call    sub_772DF0
0x884834: mov     [esi+30h], eax
0x884837: mov     ecx, [esi+30h]
0x88483A: push    0
0x88483C: push    3
0x88483E: push    17h
0x884840: call    sub_772CD0
0x884845: cmp     dword ptr [esi+30h], 0
0x884849: jnz     short loc_884853
0x88484B: call    sub_772DF0
0x884850: mov     [esi+30h], eax
0x884853: mov     ecx, [esi+30h]
0x884856: push    0
0x884858: push    0
0x88485A: push    0Eh
0x88485C: call    sub_772CD0
0x884861: cmp     dword ptr [esi+30h], 0
0x884865: jnz     short loc_88486F
0x884867: call    sub_772DF0
0x88486C: mov     [esi+30h], eax
0x88486F: mov     ecx, [esi+30h]
0x884872: push    0
0x884874: push    0
0x884876: push    34h ; '4'
0x884878: call    sub_772CD0
0x88487D: cmp     esi, ds:0B477A8h
0x884883: mov     eax, ds:0B43F60h
0x884888: mov     ecx, ds:0B445F0h
0x88488E: mov     edx, ds:0B438D0h
0x884894: mov     ds:0B43F70h, eax
0x884899: mov     eax, ds:0B44C80h
0x88489E: mov     ds:0B44600h, ecx
0x8848A4: mov     ds:0B438E0h, edx
0x8848AA: mov     ds:0B44C90h, eax
0x8848AF: jz      short loc_8848CF
0x8848B1: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8848B5: jnz     short loc_8848BE
0x8848B7: mov     ecx, esi
0x8848B9: call    sub_7604D0
0x8848BE: mov     esi, ds:0B477A8h
0x8848C4: test    esi, esi
0x8848C6: mov     [esp+30h+var_14], esi
0x8848CA: jz      short loc_8848CF
0x8848CC: add     [esi+60h], ebp
0x8848CF: cmp     [esi+18h], ebp
0x8848D2: jnb     short loc_884944
0x8848D4: lea     ecx, [esp+30h+var_10]
0x8848D8: push    ecx
0x8848D9: call    sub_772630
0x8848DE: add     esp, 4
0x8848E1: mov     ebx, eax
0x8848E3: cmp     edi, [ebx]
0x8848E5: mov     byte ptr [esp+30h+var_4], 15h
0x8848EA: jz      short loc_88490A
0x8848EC: test    edi, edi
0x8848EE: jz      short loc_8848FD
0x8848F0: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x8848F4: jnz     short loc_8848FD
0x8848F6: mov     ecx, edi
0x8848F8: call    sub_772560
0x8848FD: mov     edi, [ebx]
0x8848FF: test    edi, edi
0x884901: mov     [esp+30h+var_1C], edi
0x884905: jz      short loc_88490A
0x884907: add     [edi+5Ch], ebp
0x88490A: mov     eax, [esp+30h+var_10]
0x88490E: test    eax, eax
0x884910: mov     byte ptr [esp+30h+var_4], 1
0x884915: jz      short loc_88492A
0x884917: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x88491B: mov     ecx, eax
0x88491D: add     eax, 5Ch ; '\'
0x884920: cmp     dword ptr [eax], 0
0x884923: jnz     short loc_88492A
0x884925: call    sub_772560
0x88492A: push    2
0x88492C: push    ebp
0x88492D: push    0
0x88492F: push    edi
0x884930: call    sub_801110
0x884935: mov     edx, [esi+14h]
0x884938: add     esp, 10h
0x88493B: push    edi; a3
0x88493C: push    edx; a2
0x88493D: mov     ecx, esi; this
0x88493F: call    sub_760010
0x884944: mov     eax, [esp+30h+var_18]
0x884948: mov     ebx, [eax+0B4h]
0x88494E: mov     ebp, [esi+58h]
0x884951: cmp     ebp, ebx
0x884953: jz      short loc_884987
0x884955: test    ebp, ebp
0x884957: jz      short loc_884976
0x884959: lea     ecx, [ebp+4]
0x88495C: push    ecx; lpAddend
0x88495D: call    dword ptr ds:0A2807Ch
0x884963: test    eax, eax
0x884965: jnz     short loc_884976
0x884967: test    ebp, ebp
0x884969: jz      short loc_884976
0x88496B: mov     edx, [ebp+0]
0x88496E: mov     eax, [edx]
0x884970: push    1
0x884972: mov     ecx, ebp
0x884974: call    eax
0x884976: test    ebx, ebx
0x884978: mov     [esi+58h], ebx
0x88497B: jz      short loc_884987
0x88497D: add     ebx, 4
0x884980: push    ebx; lpAddend
0x884981: call    dword ptr ds:0A28078h
0x884987: mov     ecx, [esp+30h+var_18]
0x88498B: mov     ebx, [ecx+124h]
0x884991: mov     ebp, [esi+44h]
0x884994: cmp     ebp, ebx
0x884996: jz      short loc_8849CA
0x884998: test    ebp, ebp
0x88499A: jz      short loc_8849B9
0x88499C: lea     edx, [ebp+4]
0x88499F: push    edx; lpAddend
0x8849A0: call    dword ptr ds:0A2807Ch
0x8849A6: test    eax, eax
0x8849A8: jnz     short loc_8849B9
0x8849AA: test    ebp, ebp
0x8849AC: jz      short loc_8849B9
0x8849AE: mov     eax, [ebp+0]
0x8849B1: mov     edx, [eax]
0x8849B3: push    1
0x8849B5: mov     ecx, ebp
0x8849B7: call    edx
0x8849B9: test    ebx, ebx
0x8849BB: mov     [esi+44h], ebx
0x8849BE: jz      short loc_8849CA
0x8849C0: add     ebx, 4
0x8849C3: push    ebx; lpAddend
0x8849C4: call    dword ptr ds:0A28078h
0x8849CA: cmp     dword ptr [esi+30h], 0
0x8849CE: jnz     short loc_8849D8
0x8849D0: call    sub_772DF0
0x8849D5: mov     [esi+30h], eax
0x8849D8: mov     ecx, [esi+30h]
0x8849DB: push    0
0x8849DD: mov     ebp, 1
0x8849E2: push    ebp
0x8849E3: push    1Bh
0x8849E5: call    sub_772CD0
0x8849EA: cmp     dword ptr [esi+30h], 0
0x8849EE: jnz     short loc_8849F8
0x8849F0: call    sub_772DF0
0x8849F5: mov     [esi+30h], eax
0x8849F8: mov     ecx, [esi+30h]
0x8849FB: push    0
0x8849FD: push    9
0x8849FF: push    13h
0x884A01: call    sub_772CD0
0x884A06: cmp     dword ptr [esi+30h], 0
0x884A0A: jnz     short loc_884A14
0x884A0C: call    sub_772DF0
0x884A11: mov     [esi+30h], eax
0x884A14: mov     ecx, [esi+30h]
0x884A17: push    0
0x884A19: push    ebp
0x884A1A: push    14h
0x884A1C: call    sub_772CD0
0x884A21: cmp     dword ptr [esi+30h], 0
0x884A25: jnz     short loc_884A2F
0x884A27: call    sub_772DF0
0x884A2C: mov     [esi+30h], eax
0x884A2F: mov     ecx, [esi+30h]
0x884A32: push    0
0x884A34: push    0
0x884A36: push    0Fh
0x884A38: call    sub_772CD0
0x884A3D: cmp     dword ptr [esi+30h], 0
0x884A41: jnz     short loc_884A4B
0x884A43: call    sub_772DF0
0x884A48: mov     [esi+30h], eax
0x884A4B: mov     ecx, [esi+30h]
0x884A4E: push    0
0x884A50: push    ebp
0x884A51: push    7
0x884A53: call    sub_772CD0
0x884A58: cmp     dword ptr [esi+30h], 0
0x884A5C: jnz     short loc_884A66
0x884A5E: call    sub_772DF0
0x884A63: mov     [esi+30h], eax
0x884A66: mov     ecx, [esi+30h]
0x884A69: push    0
0x884A6B: push    3
0x884A6D: push    17h
0x884A6F: call    sub_772CD0
0x884A74: cmp     dword ptr [esi+30h], 0
0x884A78: jnz     short loc_884A82
0x884A7A: call    sub_772DF0
0x884A7F: mov     [esi+30h], eax
0x884A82: mov     ecx, [esi+30h]
0x884A85: push    0
0x884A87: push    0
0x884A89: push    0Eh
0x884A8B: call    sub_772CD0
0x884A90: cmp     dword ptr [esi+30h], 0
0x884A94: jnz     short loc_884A9E
0x884A96: call    sub_772DF0
0x884A9B: mov     [esi+30h], eax
0x884A9E: mov     ecx, [esi+30h]
0x884AA1: push    0
0x884AA3: push    0
0x884AA5: push    34h ; '4'
0x884AA7: call    sub_772CD0
0x884AAC: cmp     esi, ds:0B477B4h
0x884AB2: mov     eax, ds:0B43F30h
0x884AB7: mov     ecx, ds:0B445C0h
0x884ABD: mov     edx, ds:0B438A0h
0x884AC3: mov     ds:0B43F4Ch, eax
0x884AC8: mov     eax, ds:0B44C50h
0x884ACD: mov     ds:0B445DCh, ecx
0x884AD3: mov     ds:0B438BCh, edx
0x884AD9: mov     ds:0B44C6Ch, eax
0x884ADE: jz      short loc_884AFE
0x884AE0: add     dword ptr [esi+60h], 0FFFFFFFFh
0x884AE4: jnz     short loc_884AED
0x884AE6: mov     ecx, esi
0x884AE8: call    sub_7604D0
0x884AED: mov     esi, ds:0B477B4h
0x884AF3: test    esi, esi
0x884AF5: mov     [esp+30h+var_14], esi
0x884AF9: jz      short loc_884AFE
0x884AFB: add     [esi+60h], ebp
0x884AFE: cmp     [esi+18h], ebp
0x884B01: jnb     short loc_884B73
0x884B03: lea     ecx, [esp+30h+var_10]
0x884B07: push    ecx
0x884B08: call    sub_772630
0x884B0D: add     esp, 4
0x884B10: mov     ebx, eax
0x884B12: cmp     edi, [ebx]
0x884B14: mov     byte ptr [esp+30h+var_4], 16h
0x884B19: jz      short loc_884B39
0x884B1B: test    edi, edi
0x884B1D: jz      short loc_884B2C
0x884B1F: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x884B23: jnz     short loc_884B2C
0x884B25: mov     ecx, edi
0x884B27: call    sub_772560
0x884B2C: mov     edi, [ebx]
0x884B2E: test    edi, edi
0x884B30: mov     [esp+30h+var_1C], edi
0x884B34: jz      short loc_884B39
0x884B36: add     [edi+5Ch], ebp
0x884B39: mov     eax, [esp+30h+var_10]
0x884B3D: test    eax, eax
0x884B3F: mov     byte ptr [esp+30h+var_4], 1
0x884B44: jz      short loc_884B59
0x884B46: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x884B4A: mov     ecx, eax
0x884B4C: add     eax, 5Ch ; '\'
0x884B4F: cmp     dword ptr [eax], 0
0x884B52: jnz     short loc_884B59
0x884B54: call    sub_772560
0x884B59: push    2
0x884B5B: push    ebp
0x884B5C: push    0
0x884B5E: push    edi
0x884B5F: call    sub_801110
0x884B64: mov     edx, [esi+14h]
0x884B67: add     esp, 10h
0x884B6A: push    edi; a3
0x884B6B: push    edx; a2
0x884B6C: mov     ecx, esi; this
0x884B6E: call    sub_760010
0x884B73: mov     eax, [esp+30h+var_18]
0x884B77: mov     ebx, [eax+0C0h]
0x884B7D: mov     ebp, [esi+58h]
0x884B80: cmp     ebp, ebx
0x884B82: jz      short loc_884BB6
0x884B84: test    ebp, ebp
0x884B86: jz      short loc_884BA5
0x884B88: lea     ecx, [ebp+4]
0x884B8B: push    ecx; lpAddend
0x884B8C: call    dword ptr ds:0A2807Ch
0x884B92: test    eax, eax
0x884B94: jnz     short loc_884BA5
0x884B96: test    ebp, ebp
0x884B98: jz      short loc_884BA5
0x884B9A: mov     edx, [ebp+0]
0x884B9D: mov     eax, [edx]
0x884B9F: push    1
0x884BA1: mov     ecx, ebp
0x884BA3: call    eax
0x884BA5: test    ebx, ebx
0x884BA7: mov     [esi+58h], ebx
0x884BAA: jz      short loc_884BB6
0x884BAC: add     ebx, 4
0x884BAF: push    ebx; lpAddend
0x884BB0: call    dword ptr ds:0A28078h
0x884BB6: mov     ecx, [esp+30h+var_18]
0x884BBA: mov     ebx, [ecx+130h]
0x884BC0: mov     ebp, [esi+44h]
0x884BC3: cmp     ebp, ebx
0x884BC5: jz      short loc_884BF9
0x884BC7: test    ebp, ebp
0x884BC9: jz      short loc_884BE8
0x884BCB: lea     edx, [ebp+4]
0x884BCE: push    edx; lpAddend
0x884BCF: call    dword ptr ds:0A2807Ch
0x884BD5: test    eax, eax
0x884BD7: jnz     short loc_884BE8
0x884BD9: test    ebp, ebp
0x884BDB: jz      short loc_884BE8
0x884BDD: mov     eax, [ebp+0]
0x884BE0: mov     edx, [eax]
0x884BE2: push    1
0x884BE4: mov     ecx, ebp
0x884BE6: call    edx
0x884BE8: test    ebx, ebx
0x884BEA: mov     [esi+44h], ebx
0x884BED: jz      short loc_884BF9
0x884BEF: add     ebx, 4
0x884BF2: push    ebx; lpAddend
0x884BF3: call    dword ptr ds:0A28078h
0x884BF9: cmp     dword ptr [esi+30h], 0
0x884BFD: jnz     short loc_884C07
0x884BFF: call    sub_772DF0
0x884C04: mov     [esi+30h], eax
0x884C07: mov     ecx, [esi+30h]
0x884C0A: push    0
0x884C0C: push    1
0x884C0E: push    1Bh
0x884C10: call    sub_772CD0
0x884C15: cmp     dword ptr [esi+30h], 0
0x884C19: jnz     short loc_884C23
0x884C1B: call    sub_772DF0
0x884C20: mov     [esi+30h], eax
0x884C23: mov     ecx, [esi+30h]
0x884C26: push    0
0x884C28: push    5
0x884C2A: push    13h
0x884C2C: call    sub_772CD0
0x884C31: cmp     dword ptr [esi+30h], 0
0x884C35: jnz     short loc_884C3F
0x884C37: call    sub_772DF0
0x884C3C: mov     [esi+30h], eax
0x884C3F: mov     ecx, [esi+30h]
0x884C42: push    0
0x884C44: push    6
0x884C46: push    14h
0x884C48: call    sub_772CD0
0x884C4D: cmp     dword ptr [esi+30h], 0
0x884C51: jnz     short loc_884C5B
0x884C53: call    sub_772DF0
0x884C58: mov     [esi+30h], eax
0x884C5B: mov     ecx, [esi+30h]
0x884C5E: push    0
0x884C60: push    0
0x884C62: push    0Fh
0x884C64: call    sub_772CD0
0x884C69: cmp     dword ptr [esi+30h], 0
0x884C6D: jnz     short loc_884C77
0x884C6F: call    sub_772DF0
0x884C74: mov     [esi+30h], eax
0x884C77: mov     ecx, [esi+30h]
0x884C7A: push    0
0x884C7C: push    1
0x884C7E: push    7
0x884C80: call    sub_772CD0
0x884C85: cmp     dword ptr [esi+30h], 0
0x884C89: jnz     short loc_884C93
0x884C8B: call    sub_772DF0
0x884C90: mov     [esi+30h], eax
0x884C93: mov     ecx, [esi+30h]
0x884C96: push    0
0x884C98: push    3
0x884C9A: push    17h
0x884C9C: call    sub_772CD0
0x884CA1: cmp     dword ptr [esi+30h], 0
0x884CA5: jnz     short loc_884CAF
0x884CA7: call    sub_772DF0
0x884CAC: mov     [esi+30h], eax
0x884CAF: mov     ecx, [esi+30h]
0x884CB2: push    0
0x884CB4: push    0
0x884CB6: push    0Eh
0x884CB8: call    sub_772CD0
0x884CBD: cmp     dword ptr [esi+30h], 0
0x884CC1: jnz     short loc_884CCB
0x884CC3: call    sub_772DF0
0x884CC8: mov     [esi+30h], eax
0x884CCB: mov     ecx, [esi+30h]
0x884CCE: push    0
0x884CD0: push    0
0x884CD2: push    34h ; '4'
0x884CD4: call    sub_772CD0
0x884CD9: mov     eax, ds:0B44160h
0x884CDE: mov     ecx, ds:0B447F0h
0x884CE4: mov     edx, ds:0B43AD0h
0x884CEA: mov     ds:0B44170h, eax
0x884CEF: mov     eax, ds:0B44E80h
0x884CF4: or      ebx, 0FFFFFFFFh
0x884CF7: test    edi, edi
0x884CF9: mov     ds:0B44800h, ecx
0x884CFF: mov     ds:0B43AE0h, edx
0x884D05: mov     ds:0B44E90h, eax
0x884D0A: mov     byte ptr [esp+30h+var_4], 0
0x884D0F: jz      short loc_884D1D
0x884D11: add     [edi+5Ch], ebx
0x884D14: jnz     short loc_884D1D
0x884D16: mov     ecx, edi
0x884D18: call    sub_772560
0x884D1D: add     [esi+60h], ebx
0x884D20: mov     [esp+30h+var_4], ebx
0x884D24: jnz     short loc_884D2D
0x884D26: mov     ecx, esi
0x884D28: call    sub_7604D0
0x884D2D: mov     ecx, dword ptr [esp+30h+var_C]
0x884D31: mov     large fs:0, ecx
0x884D38: pop     ecx
0x884D39: pop     edi
0x884D3A: pop     esi
0x884D3B: pop     ebp
0x884D3C: pop     ebx
0x884D3D: add     esp, 1Ch
0x884D40: retn
