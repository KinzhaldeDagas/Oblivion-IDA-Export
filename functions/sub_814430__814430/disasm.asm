0x814430: push    0FFFFFFFFh
0x814432: push    offset SEH_814430
0x814437: mov     eax, large fs:0
0x81443D: push    eax
0x81443E: sub     esp, 0Ch
0x814441: push    ebx
0x814442: push    ebp
0x814443: push    esi
0x814444: push    edi
0x814445: mov     eax, ds:0B30AACh
0x81444A: xor     eax, esp
0x81444C: push    eax
0x81444D: lea     eax, [esp+2Ch+var_C]
0x814451: mov     large fs:0, eax
0x814457: xor     esi, esi
0x814459: mov     [esp+2Ch+var_14], esi
0x81445D: xor     ebx, ebx
0x81445F: mov     [esp+2Ch+var_4], esi
0x814463: mov     [esp+2Ch+var_18], ebx
0x814467: mov     eax, ds:0B455ACh
0x81446C: test    eax, eax
0x81446E: mov     edi, 1
0x814473: mov     byte ptr [esp+2Ch+var_4], 1
0x814478: jz      short loc_814487
0x81447A: mov     esi, eax
0x81447C: test    esi, esi
0x81447E: mov     [esp+2Ch+var_14], esi
0x814482: jz      short loc_814487
0x814484: add     [esi+60h], edi
0x814487: mov     eax, [esi+18h]
0x81448A: cmp     eax, edi
0x81448C: jnb     short loc_8144E4
0x81448E: lea     eax, [esp+2Ch+var_10]
0x814492: push    eax
0x814493: call    sub_772630
0x814498: add     esp, 4
0x81449B: mov     eax, [eax]
0x81449D: test    eax, eax
0x81449F: jz      short loc_8144AA
0x8144A1: mov     ebx, eax
0x8144A3: add     [ebx+5Ch], edi
0x8144A6: mov     [esp+2Ch+var_18], ebx
0x8144AA: mov     eax, [esp+2Ch+var_10]
0x8144AE: test    eax, eax
0x8144B0: mov     byte ptr [esp+2Ch+var_4], 1
0x8144B5: jz      short loc_8144CA
0x8144B7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x8144BB: mov     ecx, eax
0x8144BD: add     eax, 5Ch ; '\'
0x8144C0: cmp     dword ptr [eax], 0
0x8144C3: jnz     short loc_8144CA
0x8144C5: call    sub_772560
0x8144CA: push    2
0x8144CC: push    edi
0x8144CD: push    0
0x8144CF: push    ebx
0x8144D0: call    sub_801110
0x8144D5: mov     ecx, [esi+14h]
0x8144D8: add     esp, 10h
0x8144DB: push    ebx; a3
0x8144DC: push    ecx; a2
0x8144DD: mov     ecx, esi; this
0x8144DF: call    sub_760010
0x8144E4: mov     eax, ds:0B45290h
0x8144E9: mov     edi, [esi+58h]
0x8144EC: cmp     edi, eax
0x8144EE: mov     ebp, eax
0x8144F0: jz      short loc_814523
0x8144F2: test    edi, edi
0x8144F4: jz      short loc_814512
0x8144F6: lea     edx, [edi+4]
0x8144F9: push    edx; lpAddend
0x8144FA: call    dword ptr ds:0A2807Ch
0x814500: test    eax, eax
0x814502: jnz     short loc_814512
0x814504: test    edi, edi
0x814506: jz      short loc_814512
0x814508: mov     eax, [edi]
0x81450A: mov     edx, [eax]
0x81450C: push    1
0x81450E: mov     ecx, edi
0x814510: call    edx
0x814512: test    ebp, ebp
0x814514: mov     [esi+58h], ebp
0x814517: jz      short loc_814523
0x814519: add     ebp, 4
0x81451C: push    ebp; lpAddend
0x81451D: call    dword ptr ds:0A28078h
0x814523: mov     eax, ds:0B45088h
0x814528: mov     edi, [esi+44h]
0x81452B: cmp     edi, eax
0x81452D: mov     ebp, eax
0x81452F: jz      short loc_814562
0x814531: test    edi, edi
0x814533: jz      short loc_814551
0x814535: lea     eax, [edi+4]
0x814538: push    eax; lpAddend
0x814539: call    dword ptr ds:0A2807Ch
0x81453F: test    eax, eax
0x814541: jnz     short loc_814551
0x814543: test    edi, edi
0x814545: jz      short loc_814551
0x814547: mov     edx, [edi]
0x814549: mov     eax, [edx]
0x81454B: push    1
0x81454D: mov     ecx, edi
0x81454F: call    eax
0x814551: test    ebp, ebp
0x814553: mov     [esi+44h], ebp
0x814556: jz      short loc_814562
0x814558: add     ebp, 4
0x81455B: push    ebp; lpAddend
0x81455C: call    dword ptr ds:0A28078h
0x814562: cmp     dword ptr [esi+30h], 0
0x814566: jnz     short loc_814570
0x814568: call    sub_772DF0
0x81456D: mov     [esi+30h], eax
0x814570: mov     ecx, [esi+30h]
0x814573: push    0
0x814575: push    0
0x814577: push    1Bh
0x814579: call    sub_772CD0
0x81457E: cmp     dword ptr [esi+30h], 0
0x814582: jnz     short loc_81458C
0x814584: call    sub_772DF0
0x814589: mov     [esi+30h], eax
0x81458C: mov     ecx, [esi+30h]
0x81458F: push    0
0x814591: mov     ebp, 1
0x814596: push    ebp
0x814597: push    7
0x814599: call    sub_772CD0
0x81459E: cmp     dword ptr [esi+30h], 0
0x8145A2: jnz     short loc_8145AC
0x8145A4: call    sub_772DF0
0x8145A9: mov     [esi+30h], eax
0x8145AC: mov     ecx, [esi+30h]
0x8145AF: push    0
0x8145B1: push    2
0x8145B3: push    17h
0x8145B5: call    sub_772CD0
0x8145BA: cmp     dword ptr [esi+30h], 0
0x8145BE: jnz     short loc_8145C8
0x8145C0: call    sub_772DF0
0x8145C5: mov     [esi+30h], eax
0x8145C8: mov     ecx, [esi+30h]
0x8145CB: push    0
0x8145CD: push    0
0x8145CF: push    0Eh
0x8145D1: call    sub_772CD0
0x8145D6: cmp     dword ptr [esi+30h], 0
0x8145DA: jnz     short loc_8145E4
0x8145DC: call    sub_772DF0
0x8145E1: mov     [esi+30h], eax
0x8145E4: mov     ecx, [esi+30h]
0x8145E7: push    0
0x8145E9: push    ebp
0x8145EA: push    16h
0x8145EC: call    sub_772CD0
0x8145F1: cmp     dword ptr [esi+30h], 0
0x8145F5: jnz     short loc_8145FF
0x8145F7: call    sub_772DF0
0x8145FC: mov     [esi+30h], eax
0x8145FF: mov     ecx, [esi+30h]
0x814602: push    0
0x814604: push    0
0x814606: push    34h ; '4'
0x814608: call    sub_772CD0
0x81460D: cmp     esi, ds:0B455E0h
0x814613: mov     dword ptr ds:0B43B2Ch, 4000Ah
0x81461D: mov     dword ptr ds:0B441BCh, 4
0x814627: jz      short loc_814647
0x814629: add     dword ptr [esi+60h], 0FFFFFFFFh
0x81462D: jnz     short loc_814636
0x81462F: mov     ecx, esi
0x814631: call    sub_7604D0
0x814636: mov     esi, ds:0B455E0h
0x81463C: test    esi, esi
0x81463E: mov     [esp+2Ch+var_14], esi
0x814642: jz      short loc_814647
0x814644: add     [esi+60h], ebp
0x814647: cmp     [esi+18h], ebp
0x81464A: jnb     short loc_8146BC
0x81464C: lea     ecx, [esp+2Ch+var_10]
0x814650: push    ecx
0x814651: call    sub_772630
0x814656: add     esp, 4
0x814659: mov     edi, eax
0x81465B: cmp     ebx, [edi]
0x81465D: mov     byte ptr [esp+2Ch+var_4], 3
0x814662: jz      short loc_814682
0x814664: test    ebx, ebx
0x814666: jz      short loc_814675
0x814668: add     dword ptr [ebx+5Ch], 0FFFFFFFFh
0x81466C: jnz     short loc_814675
0x81466E: mov     ecx, ebx
0x814670: call    sub_772560
0x814675: mov     ebx, [edi]
0x814677: test    ebx, ebx
0x814679: mov     [esp+2Ch+var_18], ebx
0x81467D: jz      short loc_814682
0x81467F: add     [ebx+5Ch], ebp
0x814682: mov     eax, [esp+2Ch+var_10]
0x814686: test    eax, eax
0x814688: mov     byte ptr [esp+2Ch+var_4], 1
0x81468D: jz      short loc_8146A2
0x81468F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x814693: mov     ecx, eax
0x814695: add     eax, 5Ch ; '\'
0x814698: cmp     dword ptr [eax], 0
0x81469B: jnz     short loc_8146A2
0x81469D: call    sub_772560
0x8146A2: push    2
0x8146A4: push    ebp
0x8146A5: push    0
0x8146A7: push    ebx
0x8146A8: call    sub_801110
0x8146AD: mov     edx, [esi+14h]
0x8146B0: add     esp, 10h
0x8146B3: push    ebx; a3
0x8146B4: push    edx; a2
0x8146B5: mov     ecx, esi; this
0x8146B7: call    sub_760010
0x8146BC: mov     eax, ds:0B45290h
0x8146C1: mov     edi, [esi+58h]
0x8146C4: cmp     edi, eax
0x8146C6: mov     ebp, eax
0x8146C8: jz      short loc_8146FB
0x8146CA: test    edi, edi
0x8146CC: jz      short loc_8146EA
0x8146CE: lea     eax, [edi+4]
0x8146D1: push    eax; lpAddend
0x8146D2: call    dword ptr ds:0A2807Ch
0x8146D8: test    eax, eax
0x8146DA: jnz     short loc_8146EA
0x8146DC: test    edi, edi
0x8146DE: jz      short loc_8146EA
0x8146E0: mov     edx, [edi]
0x8146E2: mov     eax, [edx]
0x8146E4: push    1
0x8146E6: mov     ecx, edi
0x8146E8: call    eax
0x8146EA: test    ebp, ebp
0x8146EC: mov     [esi+58h], ebp
0x8146EF: jz      short loc_8146FB
0x8146F1: add     ebp, 4
0x8146F4: push    ebp; lpAddend
0x8146F5: call    dword ptr ds:0A28078h
0x8146FB: mov     eax, ds:0B45088h
0x814700: mov     edi, [esi+44h]
0x814703: cmp     edi, eax
0x814705: mov     ebp, eax
0x814707: jz      short loc_81473A
0x814709: test    edi, edi
0x81470B: jz      short loc_814729
0x81470D: lea     ecx, [edi+4]
0x814710: push    ecx; lpAddend
0x814711: call    dword ptr ds:0A2807Ch
0x814717: test    eax, eax
0x814719: jnz     short loc_814729
0x81471B: test    edi, edi
0x81471D: jz      short loc_814729
0x81471F: mov     edx, [edi]
0x814721: mov     eax, [edx]
0x814723: push    1
0x814725: mov     ecx, edi
0x814727: call    eax
0x814729: test    ebp, ebp
0x81472B: mov     [esi+44h], ebp
0x81472E: jz      short loc_81473A
0x814730: add     ebp, 4
0x814733: push    ebp; lpAddend
0x814734: call    dword ptr ds:0A28078h
0x81473A: cmp     dword ptr [esi+30h], 0
0x81473E: jnz     short loc_814748
0x814740: call    sub_772DF0
0x814745: mov     [esi+30h], eax
0x814748: mov     ecx, [esi+30h]
0x81474B: push    0
0x81474D: push    0
0x81474F: push    1Bh
0x814751: call    sub_772CD0
0x814756: cmp     dword ptr [esi+30h], 0
0x81475A: jnz     short loc_814764
0x81475C: call    sub_772DF0
0x814761: mov     [esi+30h], eax
0x814764: mov     ecx, [esi+30h]
0x814767: push    0
0x814769: push    0
0x81476B: push    0Fh
0x81476D: call    sub_772CD0
0x814772: cmp     dword ptr [esi+30h], 0
0x814776: jnz     short loc_814780
0x814778: call    sub_772DF0
0x81477D: mov     [esi+30h], eax
0x814780: mov     ecx, [esi+30h]
0x814783: push    0
0x814785: mov     edi, 1
0x81478A: push    edi
0x81478B: push    7
0x81478D: call    sub_772CD0
0x814792: cmp     dword ptr [esi+30h], 0
0x814796: jnz     short loc_8147A0
0x814798: call    sub_772DF0
0x81479D: mov     [esi+30h], eax
0x8147A0: mov     ecx, [esi+30h]
0x8147A3: push    0
0x8147A5: push    4
0x8147A7: push    17h
0x8147A9: call    sub_772CD0
0x8147AE: cmp     dword ptr [esi+30h], 0
0x8147B2: jnz     short loc_8147BC
0x8147B4: call    sub_772DF0
0x8147B9: mov     [esi+30h], eax
0x8147BC: mov     ecx, [esi+30h]
0x8147BF: push    0
0x8147C1: push    edi
0x8147C2: push    0Eh
0x8147C4: call    sub_772CD0
0x8147C9: cmp     dword ptr [esi+30h], 0
0x8147CD: jnz     short loc_8147D7
0x8147CF: call    sub_772DF0
0x8147D4: mov     [esi+30h], eax
0x8147D7: mov     ecx, [esi+30h]
0x8147DA: push    0
0x8147DC: push    0
0x8147DE: push    34h ; '4'
0x8147E0: call    sub_772CD0
0x8147E5: or      ebp, 0FFFFFFFFh
0x8147E8: cmp     esi, ds:0B455E4h
0x8147EE: mov     dword ptr ds:0B43B60h, 2
0x8147F8: mov     dword ptr ds:0B441F0h, 4
0x814802: jz      short loc_814821
0x814804: add     [esi+60h], ebp
0x814807: jnz     short loc_814810
0x814809: mov     ecx, esi
0x81480B: call    sub_7604D0
0x814810: mov     esi, ds:0B455E4h
0x814816: test    esi, esi
0x814818: mov     [esp+2Ch+var_14], esi
0x81481C: jz      short loc_814821
0x81481E: add     [esi+60h], edi
0x814821: cmp     [esi+18h], edi
0x814824: jnb     loc_81490A
0x81482A: lea     ecx, [esp+2Ch+var_10]
0x81482E: push    ecx
0x81482F: call    sub_772630
0x814834: add     esp, 4
0x814837: mov     edi, eax
0x814839: cmp     ebx, [edi]
0x81483B: mov     byte ptr [esp+2Ch+var_4], 4
0x814840: jz      short loc_814860
0x814842: test    ebx, ebx
0x814844: jz      short loc_814852
0x814846: add     [ebx+5Ch], ebp
0x814849: jnz     short loc_814852
0x81484B: mov     ecx, ebx
0x81484D: call    sub_772560
0x814852: mov     ebx, [edi]
0x814854: test    ebx, ebx
0x814856: mov     [esp+2Ch+var_18], ebx
0x81485A: jz      short loc_814860
0x81485C: add     dword ptr [ebx+5Ch], 1
0x814860: mov     eax, [esp+2Ch+var_10]
0x814864: test    eax, eax
0x814866: mov     byte ptr [esp+2Ch+var_4], 1
0x81486B: jz      short loc_81487F
0x81486D: add     [eax+5Ch], ebp
0x814870: mov     ecx, eax
0x814872: add     eax, 5Ch ; '\'
0x814875: cmp     dword ptr [eax], 0
0x814878: jnz     short loc_81487F
0x81487A: call    sub_772560
0x81487F: push    2
0x814881: push    1
0x814883: push    0
0x814885: push    ebx
0x814886: call    sub_801110
0x81488B: mov     edx, [esi+14h]
0x81488E: add     esp, 10h
0x814891: push    ebx; a3
0x814892: push    edx; a2
0x814893: mov     ecx, esi; this
0x814895: call    sub_760010
0x81489A: lea     eax, [esp+2Ch+var_10]
0x81489E: push    eax
0x81489F: call    sub_772630
0x8148A4: add     esp, 4
0x8148A7: mov     edi, eax
0x8148A9: cmp     ebx, [edi]
0x8148AB: mov     byte ptr [esp+2Ch+var_4], 5
0x8148B0: jz      short loc_8148D0
0x8148B2: test    ebx, ebx
0x8148B4: jz      short loc_8148C2
0x8148B6: add     [ebx+5Ch], ebp
0x8148B9: jnz     short loc_8148C2
0x8148BB: mov     ecx, ebx
0x8148BD: call    sub_772560
0x8148C2: mov     ebx, [edi]
0x8148C4: test    ebx, ebx
0x8148C6: mov     [esp+2Ch+var_18], ebx
0x8148CA: jz      short loc_8148D0
0x8148CC: add     dword ptr [ebx+5Ch], 1
0x8148D0: mov     eax, [esp+2Ch+var_10]
0x8148D4: test    eax, eax
0x8148D6: mov     byte ptr [esp+2Ch+var_4], 1
0x8148DB: jz      short loc_8148EF
0x8148DD: add     [eax+5Ch], ebp
0x8148E0: mov     ecx, eax
0x8148E2: add     eax, 5Ch ; '\'
0x8148E5: cmp     dword ptr [eax], 0
0x8148E8: jnz     short loc_8148EF
0x8148EA: call    sub_772560
0x8148EF: push    2
0x8148F1: push    1
0x8148F3: push    1
0x8148F5: push    ebx
0x8148F6: call    sub_801110
0x8148FB: mov     ecx, [esi+14h]
0x8148FE: add     esp, 10h
0x814901: push    ebx; a3
0x814902: push    ecx; a2
0x814903: mov     ecx, esi; this
0x814905: call    sub_760010
0x81490A: mov     eax, ds:0B452F0h
0x81490F: mov     edi, [esi+58h]
0x814912: cmp     edi, eax
0x814914: mov     ebp, eax
0x814916: jz      short loc_814949
0x814918: test    edi, edi
0x81491A: jz      short loc_814938
0x81491C: lea     edx, [edi+4]
0x81491F: push    edx; lpAddend
0x814920: call    dword ptr ds:0A2807Ch
0x814926: test    eax, eax
0x814928: jnz     short loc_814938
0x81492A: test    edi, edi
0x81492C: jz      short loc_814938
0x81492E: mov     eax, [edi]
0x814930: mov     edx, [eax]
0x814932: push    1
0x814934: mov     ecx, edi
0x814936: call    edx
0x814938: test    ebp, ebp
0x81493A: mov     [esi+58h], ebp
0x81493D: jz      short loc_814949
0x81493F: add     ebp, 4
0x814942: push    ebp; lpAddend
0x814943: call    dword ptr ds:0A28078h
0x814949: mov     eax, ds:0B45118h
0x81494E: mov     edi, [esi+44h]
0x814951: cmp     edi, eax
0x814953: mov     ebp, eax
0x814955: jz      short loc_814988
0x814957: test    edi, edi
0x814959: jz      short loc_814977
0x81495B: lea     eax, [edi+4]
0x81495E: push    eax; lpAddend
0x81495F: call    dword ptr ds:0A2807Ch
0x814965: test    eax, eax
0x814967: jnz     short loc_814977
0x814969: test    edi, edi
0x81496B: jz      short loc_814977
0x81496D: mov     edx, [edi]
0x81496F: mov     eax, [edx]
0x814971: push    1
0x814973: mov     ecx, edi
0x814975: call    eax
0x814977: test    ebp, ebp
0x814979: mov     [esi+44h], ebp
0x81497C: jz      short loc_814988
0x81497E: add     ebp, 4
0x814981: push    ebp; lpAddend
0x814982: call    dword ptr ds:0A28078h
0x814988: cmp     dword ptr [esi+30h], 0
0x81498C: jnz     short loc_814996
0x81498E: call    sub_772DF0
0x814993: mov     [esi+30h], eax
0x814996: mov     ecx, [esi+30h]
0x814999: push    0
0x81499B: push    0
0x81499D: push    1Bh
0x81499F: call    sub_772CD0
0x8149A4: cmp     dword ptr [esi+30h], 0
0x8149A8: jnz     short loc_8149B2
0x8149AA: call    sub_772DF0
0x8149AF: mov     [esi+30h], eax
0x8149B2: mov     ecx, [esi+30h]
0x8149B5: push    0
0x8149B7: push    0
0x8149B9: push    0Fh
0x8149BB: call    sub_772CD0
0x8149C0: cmp     dword ptr [esi+30h], 0
0x8149C4: jnz     short loc_8149CE
0x8149C6: call    sub_772DF0
0x8149CB: mov     [esi+30h], eax
0x8149CE: mov     ecx, [esi+30h]
0x8149D1: push    0
0x8149D3: mov     ebp, 1
0x8149D8: push    ebp
0x8149D9: push    7
0x8149DB: call    sub_772CD0
0x8149E0: cmp     dword ptr [esi+30h], 0
0x8149E4: jnz     short loc_8149EE
0x8149E6: call    sub_772DF0
0x8149EB: mov     [esi+30h], eax
0x8149EE: mov     ecx, [esi+30h]
0x8149F1: push    0
0x8149F3: push    4
0x8149F5: push    17h
0x8149F7: call    sub_772CD0
0x8149FC: cmp     dword ptr [esi+30h], 0
0x814A00: jnz     short loc_814A0A
0x814A02: call    sub_772DF0
0x814A07: mov     [esi+30h], eax
0x814A0A: mov     ecx, [esi+30h]
0x814A0D: push    0
0x814A0F: push    ebp
0x814A10: push    0Eh
0x814A12: call    sub_772CD0
0x814A17: cmp     dword ptr [esi+30h], 0
0x814A1B: jnz     short loc_814A25
0x814A1D: call    sub_772DF0
0x814A22: mov     [esi+30h], eax
0x814A25: mov     ecx, [esi+30h]
0x814A28: push    0
0x814A2A: push    0
0x814A2C: push    34h ; '4'
0x814A2E: call    sub_772CD0
0x814A33: cmp     esi, ds:0B455E8h
0x814A39: mov     dword ptr ds:0B43B64h, 2
0x814A43: mov     dword ptr ds:0B441F4h, 84h ; '„'
0x814A4D: mov     dword ptr ds:0B44884h, 4
0x814A57: jz      short loc_814A77
0x814A59: add     dword ptr [esi+60h], 0FFFFFFFFh
0x814A5D: jnz     short loc_814A66
0x814A5F: mov     ecx, esi
0x814A61: call    sub_7604D0
0x814A66: mov     esi, ds:0B455E8h
0x814A6C: test    esi, esi
0x814A6E: mov     [esp+2Ch+var_14], esi
0x814A72: jz      short loc_814A77
0x814A74: add     [esi+60h], ebp
0x814A77: cmp     [esi+18h], ebp
0x814A7A: jnb     short loc_814AEC
0x814A7C: lea     ecx, [esp+2Ch+var_10]
0x814A80: push    ecx
0x814A81: call    sub_772630
0x814A86: add     esp, 4
0x814A89: mov     edi, eax
0x814A8B: cmp     ebx, [edi]
0x814A8D: mov     byte ptr [esp+2Ch+var_4], 6
0x814A92: jz      short loc_814AB2
0x814A94: test    ebx, ebx
0x814A96: jz      short loc_814AA5
0x814A98: add     dword ptr [ebx+5Ch], 0FFFFFFFFh
0x814A9C: jnz     short loc_814AA5
0x814A9E: mov     ecx, ebx
0x814AA0: call    sub_772560
0x814AA5: mov     ebx, [edi]
0x814AA7: test    ebx, ebx
0x814AA9: mov     [esp+2Ch+var_18], ebx
0x814AAD: jz      short loc_814AB2
0x814AAF: add     [ebx+5Ch], ebp
0x814AB2: mov     eax, [esp+2Ch+var_10]
0x814AB6: test    eax, eax
0x814AB8: mov     byte ptr [esp+2Ch+var_4], 1
0x814ABD: jz      short loc_814AD2
0x814ABF: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x814AC3: mov     ecx, eax
0x814AC5: add     eax, 5Ch ; '\'
0x814AC8: cmp     dword ptr [eax], 0
0x814ACB: jnz     short loc_814AD2
0x814ACD: call    sub_772560
0x814AD2: push    2
0x814AD4: push    ebp
0x814AD5: push    0
0x814AD7: push    ebx
0x814AD8: call    sub_801110
0x814ADD: mov     edx, [esi+14h]
0x814AE0: add     esp, 10h
0x814AE3: push    ebx; a3
0x814AE4: push    edx; a2
0x814AE5: mov     ecx, esi; this
0x814AE7: call    sub_760010
0x814AEC: mov     eax, ds:0B45290h
0x814AF1: mov     edi, [esi+58h]
0x814AF4: cmp     edi, eax
0x814AF6: mov     ebp, eax
0x814AF8: jz      short loc_814B2B
0x814AFA: test    edi, edi
0x814AFC: jz      short loc_814B1A
0x814AFE: lea     eax, [edi+4]
0x814B01: push    eax; lpAddend
0x814B02: call    dword ptr ds:0A2807Ch
0x814B08: test    eax, eax
0x814B0A: jnz     short loc_814B1A
0x814B0C: test    edi, edi
0x814B0E: jz      short loc_814B1A
0x814B10: mov     edx, [edi]
0x814B12: mov     eax, [edx]
0x814B14: push    1
0x814B16: mov     ecx, edi
0x814B18: call    eax
0x814B1A: test    ebp, ebp
0x814B1C: mov     [esi+58h], ebp
0x814B1F: jz      short loc_814B2B
0x814B21: add     ebp, 4
0x814B24: push    ebp; lpAddend
0x814B25: call    dword ptr ds:0A28078h
0x814B2B: mov     eax, ds:0B45088h
0x814B30: mov     edi, [esi+44h]
0x814B33: cmp     edi, eax
0x814B35: mov     ebp, eax
0x814B37: jz      short loc_814B6A
0x814B39: test    edi, edi
0x814B3B: jz      short loc_814B59
0x814B3D: lea     ecx, [edi+4]
0x814B40: push    ecx; lpAddend
0x814B41: call    dword ptr ds:0A2807Ch
0x814B47: test    eax, eax
0x814B49: jnz     short loc_814B59
0x814B4B: test    edi, edi
0x814B4D: jz      short loc_814B59
0x814B4F: mov     edx, [edi]
0x814B51: mov     eax, [edx]
0x814B53: push    1
0x814B55: mov     ecx, edi
0x814B57: call    eax
0x814B59: test    ebp, ebp
0x814B5B: mov     [esi+44h], ebp
0x814B5E: jz      short loc_814B6A
0x814B60: add     ebp, 4
0x814B63: push    ebp; lpAddend
0x814B64: call    dword ptr ds:0A28078h
0x814B6A: cmp     dword ptr [esi+30h], 0
0x814B6E: jnz     short loc_814B78
0x814B70: call    sub_772DF0
0x814B75: mov     [esi+30h], eax
0x814B78: mov     ecx, [esi+30h]
0x814B7B: push    0
0x814B7D: push    0
0x814B7F: push    1Bh
0x814B81: call    sub_772CD0
0x814B86: cmp     dword ptr [esi+30h], 0
0x814B8A: jnz     short loc_814B94
0x814B8C: call    sub_772DF0
0x814B91: mov     [esi+30h], eax
0x814B94: mov     ecx, [esi+30h]
0x814B97: push    0
0x814B99: push    1
0x814B9B: push    0Fh
0x814B9D: call    sub_772CD0
0x814BA2: cmp     dword ptr [esi+30h], 0
0x814BA6: jnz     short loc_814BB0
0x814BA8: call    sub_772DF0
0x814BAD: mov     [esi+30h], eax
0x814BB0: mov     ecx, [esi+30h]
0x814BB3: push    0
0x814BB5: push    1
0x814BB7: push    7
0x814BB9: call    sub_772CD0
0x814BBE: cmp     dword ptr [esi+30h], 0
0x814BC2: jnz     short loc_814BCC
0x814BC4: call    sub_772DF0
0x814BC9: mov     [esi+30h], eax
0x814BCC: mov     ecx, [esi+30h]
0x814BCF: push    0
0x814BD1: push    4
0x814BD3: push    17h
0x814BD5: call    sub_772CD0
0x814BDA: cmp     dword ptr [esi+30h], 0
0x814BDE: jnz     short loc_814BE8
0x814BE0: call    sub_772DF0
0x814BE5: mov     [esi+30h], eax
0x814BE8: mov     ecx, [esi+30h]
0x814BEB: push    0
0x814BED: push    1
0x814BEF: push    0Eh
0x814BF1: call    sub_772CD0
0x814BF6: cmp     dword ptr [esi+30h], 0
0x814BFA: jnz     short loc_814C04
0x814BFC: call    sub_772DF0
0x814C01: mov     [esi+30h], eax
0x814C04: mov     ecx, [esi+30h]
0x814C07: push    0
0x814C09: push    0
0x814C0B: push    34h ; '4'
0x814C0D: call    sub_772CD0
0x814C12: mov     edi, 2
0x814C17: or      ebp, 0FFFFFFFFh
0x814C1A: cmp     esi, ds:0B455ECh
0x814C20: mov     ds:0B43B68h, edi
0x814C26: mov     dword ptr ds:0B441F8h, 4
0x814C30: jz      short loc_814C50
0x814C32: add     [esi+60h], ebp
0x814C35: jnz     short loc_814C3E
0x814C37: mov     ecx, esi
0x814C39: call    sub_7604D0
0x814C3E: mov     esi, ds:0B455ECh
0x814C44: test    esi, esi
0x814C46: mov     [esp+2Ch+var_14], esi
0x814C4A: jz      short loc_814C50
0x814C4C: add     dword ptr [esi+60h], 1
0x814C50: cmp     [esi+18h], edi
0x814C53: jnb     loc_814D39
0x814C59: lea     ecx, [esp+2Ch+var_10]
0x814C5D: push    ecx
0x814C5E: call    sub_772630
0x814C63: add     esp, 4
0x814C66: mov     edi, eax
0x814C68: cmp     ebx, [edi]
0x814C6A: mov     byte ptr [esp+2Ch+var_4], 7
0x814C6F: jz      short loc_814C8F
0x814C71: test    ebx, ebx
0x814C73: jz      short loc_814C81
0x814C75: add     [ebx+5Ch], ebp
0x814C78: jnz     short loc_814C81
0x814C7A: mov     ecx, ebx
0x814C7C: call    sub_772560
0x814C81: mov     ebx, [edi]
0x814C83: test    ebx, ebx
0x814C85: mov     [esp+2Ch+var_18], ebx
0x814C89: jz      short loc_814C8F
0x814C8B: add     dword ptr [ebx+5Ch], 1
0x814C8F: mov     eax, [esp+2Ch+var_10]
0x814C93: test    eax, eax
0x814C95: mov     byte ptr [esp+2Ch+var_4], 1
0x814C9A: jz      short loc_814CAE
0x814C9C: add     [eax+5Ch], ebp
0x814C9F: mov     ecx, eax
0x814CA1: add     eax, 5Ch ; '\'
0x814CA4: cmp     dword ptr [eax], 0
0x814CA7: jnz     short loc_814CAE
0x814CA9: call    sub_772560
0x814CAE: push    2
0x814CB0: push    1
0x814CB2: push    0
0x814CB4: push    ebx
0x814CB5: call    sub_801110
0x814CBA: mov     edx, [esi+14h]
0x814CBD: add     esp, 10h
0x814CC0: push    ebx; a3
0x814CC1: push    edx; a2
0x814CC2: mov     ecx, esi; this
0x814CC4: call    sub_760010
0x814CC9: lea     eax, [esp+2Ch+var_10]
0x814CCD: push    eax
0x814CCE: call    sub_772630
0x814CD3: add     esp, 4
0x814CD6: mov     edi, eax
0x814CD8: cmp     ebx, [edi]
0x814CDA: mov     byte ptr [esp+2Ch+var_4], 8
0x814CDF: jz      short loc_814CFF
0x814CE1: test    ebx, ebx
0x814CE3: jz      short loc_814CF1
0x814CE5: add     [ebx+5Ch], ebp
0x814CE8: jnz     short loc_814CF1
0x814CEA: mov     ecx, ebx
0x814CEC: call    sub_772560
0x814CF1: mov     ebx, [edi]
0x814CF3: test    ebx, ebx
0x814CF5: mov     [esp+2Ch+var_18], ebx
0x814CF9: jz      short loc_814CFF
0x814CFB: add     dword ptr [ebx+5Ch], 1
0x814CFF: mov     eax, [esp+2Ch+var_10]
0x814D03: test    eax, eax
0x814D05: mov     byte ptr [esp+2Ch+var_4], 1
0x814D0A: jz      short loc_814D1E
0x814D0C: add     [eax+5Ch], ebp
0x814D0F: mov     ecx, eax
0x814D11: add     eax, 5Ch ; '\'
0x814D14: cmp     dword ptr [eax], 0
0x814D17: jnz     short loc_814D1E
0x814D19: call    sub_772560
0x814D1E: push    2
0x814D20: push    1
0x814D22: push    1
0x814D24: push    ebx
0x814D25: call    sub_801110
0x814D2A: mov     ecx, [esi+14h]
0x814D2D: add     esp, 10h
0x814D30: push    ebx; a3
0x814D31: push    ecx; a2
0x814D32: mov     ecx, esi; this
0x814D34: call    sub_760010
0x814D39: mov     eax, ds:0B452F0h
0x814D3E: mov     edi, [esi+58h]
0x814D41: cmp     edi, eax
0x814D43: mov     ebp, eax
0x814D45: jz      short loc_814D78
0x814D47: test    edi, edi
0x814D49: jz      short loc_814D67
0x814D4B: lea     edx, [edi+4]
0x814D4E: push    edx; lpAddend
0x814D4F: call    dword ptr ds:0A2807Ch
0x814D55: test    eax, eax
0x814D57: jnz     short loc_814D67
0x814D59: test    edi, edi
0x814D5B: jz      short loc_814D67
0x814D5D: mov     eax, [edi]
0x814D5F: mov     edx, [eax]
0x814D61: push    1
0x814D63: mov     ecx, edi
0x814D65: call    edx
0x814D67: test    ebp, ebp
0x814D69: mov     [esi+58h], ebp
0x814D6C: jz      short loc_814D78
0x814D6E: add     ebp, 4
0x814D71: push    ebp; lpAddend
0x814D72: call    dword ptr ds:0A28078h
0x814D78: mov     eax, ds:0B45118h
0x814D7D: mov     edi, [esi+44h]
0x814D80: cmp     edi, eax
0x814D82: mov     ebp, eax
0x814D84: jz      short loc_814DB7
0x814D86: test    edi, edi
0x814D88: jz      short loc_814DA6
0x814D8A: lea     eax, [edi+4]
0x814D8D: push    eax; lpAddend
0x814D8E: call    dword ptr ds:0A2807Ch
0x814D94: test    eax, eax
0x814D96: jnz     short loc_814DA6
0x814D98: test    edi, edi
0x814D9A: jz      short loc_814DA6
0x814D9C: mov     edx, [edi]
0x814D9E: mov     eax, [edx]
0x814DA0: push    1
0x814DA2: mov     ecx, edi
0x814DA4: call    eax
0x814DA6: test    ebp, ebp
0x814DA8: mov     [esi+44h], ebp
0x814DAB: jz      short loc_814DB7
0x814DAD: add     ebp, 4
0x814DB0: push    ebp; lpAddend
0x814DB1: call    dword ptr ds:0A28078h
0x814DB7: cmp     dword ptr [esi+30h], 0
0x814DBB: jnz     short loc_814DC5
0x814DBD: call    sub_772DF0
0x814DC2: mov     [esi+30h], eax
0x814DC5: mov     ecx, [esi+30h]
0x814DC8: push    0
0x814DCA: push    0
0x814DCC: push    1Bh
0x814DCE: call    sub_772CD0
0x814DD3: cmp     dword ptr [esi+30h], 0
0x814DD7: jnz     short loc_814DE1
0x814DD9: call    sub_772DF0
0x814DDE: mov     [esi+30h], eax
0x814DE1: mov     ecx, [esi+30h]
0x814DE4: push    0
0x814DE6: mov     ebp, 1
0x814DEB: push    ebp
0x814DEC: push    0Fh
0x814DEE: call    sub_772CD0
0x814DF3: cmp     dword ptr [esi+30h], 0
0x814DF7: jnz     short loc_814E01
0x814DF9: call    sub_772DF0
0x814DFE: mov     [esi+30h], eax
0x814E01: mov     ecx, [esi+30h]
0x814E04: push    0
0x814E06: push    ebp
0x814E07: push    7
0x814E09: call    sub_772CD0
0x814E0E: cmp     dword ptr [esi+30h], 0
0x814E12: jnz     short loc_814E1C
0x814E14: call    sub_772DF0
0x814E19: mov     [esi+30h], eax
0x814E1C: mov     ecx, [esi+30h]
0x814E1F: push    0
0x814E21: push    4
0x814E23: push    17h
0x814E25: call    sub_772CD0
0x814E2A: cmp     dword ptr [esi+30h], 0
0x814E2E: jnz     short loc_814E38
0x814E30: call    sub_772DF0
0x814E35: mov     [esi+30h], eax
0x814E38: mov     ecx, [esi+30h]
0x814E3B: push    0
0x814E3D: push    ebp
0x814E3E: push    0Eh
0x814E40: call    sub_772CD0
0x814E45: cmp     dword ptr [esi+30h], 0
0x814E49: jnz     short loc_814E53
0x814E4B: call    sub_772DF0
0x814E50: mov     [esi+30h], eax
0x814E53: mov     ecx, [esi+30h]
0x814E56: push    0
0x814E58: push    0
0x814E5A: push    34h ; '4'
0x814E5C: call    sub_772CD0
0x814E61: cmp     esi, ds:0B455F0h
0x814E67: mov     dword ptr ds:0B43B6Ch, 2
0x814E71: mov     dword ptr ds:0B441FCh, 84h ; '„'
0x814E7B: mov     dword ptr ds:0B4488Ch, 4
0x814E85: jz      short loc_814EA5
0x814E87: add     dword ptr [esi+60h], 0FFFFFFFFh
0x814E8B: jnz     short loc_814E94
0x814E8D: mov     ecx, esi
0x814E8F: call    sub_7604D0
0x814E94: mov     esi, ds:0B455F0h
0x814E9A: test    esi, esi
0x814E9C: mov     [esp+2Ch+var_14], esi
0x814EA0: jz      short loc_814EA5
0x814EA2: add     [esi+60h], ebp
0x814EA5: cmp     [esi+18h], ebp
0x814EA8: jnb     short loc_814F1A
0x814EAA: lea     ecx, [esp+2Ch+var_10]
0x814EAE: push    ecx
0x814EAF: call    sub_772630
0x814EB4: add     esp, 4
0x814EB7: mov     edi, eax
0x814EB9: cmp     ebx, [edi]
0x814EBB: mov     byte ptr [esp+2Ch+var_4], 9
0x814EC0: jz      short loc_814EE0
0x814EC2: test    ebx, ebx
0x814EC4: jz      short loc_814ED3
0x814EC6: add     dword ptr [ebx+5Ch], 0FFFFFFFFh
0x814ECA: jnz     short loc_814ED3
0x814ECC: mov     ecx, ebx
0x814ECE: call    sub_772560
0x814ED3: mov     ebx, [edi]
0x814ED5: test    ebx, ebx
0x814ED7: mov     [esp+2Ch+var_18], ebx
0x814EDB: jz      short loc_814EE0
0x814EDD: add     [ebx+5Ch], ebp
0x814EE0: mov     eax, [esp+2Ch+var_10]
0x814EE4: test    eax, eax
0x814EE6: mov     byte ptr [esp+2Ch+var_4], 1
0x814EEB: jz      short loc_814F00
0x814EED: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x814EF1: mov     ecx, eax
0x814EF3: add     eax, 5Ch ; '\'
0x814EF6: cmp     dword ptr [eax], 0
0x814EF9: jnz     short loc_814F00
0x814EFB: call    sub_772560
0x814F00: push    2
0x814F02: push    ebp
0x814F03: push    0
0x814F05: push    ebx
0x814F06: call    sub_801110
0x814F0B: mov     edx, [esi+14h]
0x814F0E: add     esp, 10h
0x814F11: push    ebx; a3
0x814F12: push    edx; a2
0x814F13: mov     ecx, esi; this
0x814F15: call    sub_760010
0x814F1A: mov     eax, ds:0B4530Ch
0x814F1F: mov     edi, [esi+58h]
0x814F22: cmp     edi, eax
0x814F24: mov     ebp, eax
0x814F26: jz      short loc_814F59
0x814F28: test    edi, edi
0x814F2A: jz      short loc_814F48
0x814F2C: lea     eax, [edi+4]
0x814F2F: push    eax; lpAddend
0x814F30: call    dword ptr ds:0A2807Ch
0x814F36: test    eax, eax
0x814F38: jnz     short loc_814F48
0x814F3A: test    edi, edi
0x814F3C: jz      short loc_814F48
0x814F3E: mov     edx, [edi]
0x814F40: mov     eax, [edx]
0x814F42: push    1
0x814F44: mov     ecx, edi
0x814F46: call    eax
0x814F48: test    ebp, ebp
0x814F4A: mov     [esi+58h], ebp
0x814F4D: jz      short loc_814F59
0x814F4F: add     ebp, 4
0x814F52: push    ebp; lpAddend
0x814F53: call    dword ptr ds:0A28078h
0x814F59: mov     eax, ds:0B45088h
0x814F5E: mov     edi, [esi+44h]
0x814F61: cmp     edi, eax
0x814F63: mov     ebp, eax
0x814F65: jz      short loc_814F98
0x814F67: test    edi, edi
0x814F69: jz      short loc_814F87
0x814F6B: lea     ecx, [edi+4]
0x814F6E: push    ecx; lpAddend
0x814F6F: call    dword ptr ds:0A2807Ch
0x814F75: test    eax, eax
0x814F77: jnz     short loc_814F87
0x814F79: test    edi, edi
0x814F7B: jz      short loc_814F87
0x814F7D: mov     edx, [edi]
0x814F7F: mov     eax, [edx]
0x814F81: push    1
0x814F83: mov     ecx, edi
0x814F85: call    eax
0x814F87: test    ebp, ebp
0x814F89: mov     [esi+44h], ebp
0x814F8C: jz      short loc_814F98
0x814F8E: add     ebp, 4
0x814F91: push    ebp; lpAddend
0x814F92: call    dword ptr ds:0A28078h
0x814F98: cmp     dword ptr [esi+30h], 0
0x814F9C: jnz     short loc_814FA6
0x814F9E: call    sub_772DF0
0x814FA3: mov     [esi+30h], eax
0x814FA6: mov     ecx, [esi+30h]
0x814FA9: push    0
0x814FAB: push    0
0x814FAD: push    1Bh
0x814FAF: call    sub_772CD0
0x814FB4: cmp     dword ptr [esi+30h], 0
0x814FB8: jnz     short loc_814FC2
0x814FBA: call    sub_772DF0
0x814FBF: mov     [esi+30h], eax
0x814FC2: mov     ecx, [esi+30h]
0x814FC5: push    0
0x814FC7: push    0
0x814FC9: push    0Fh
0x814FCB: call    sub_772CD0
0x814FD0: cmp     dword ptr [esi+30h], 0
0x814FD4: jnz     short loc_814FDE
0x814FD6: call    sub_772DF0
0x814FDB: mov     [esi+30h], eax
0x814FDE: mov     ecx, [esi+30h]
0x814FE1: push    0
0x814FE3: mov     edi, 1
0x814FE8: push    edi
0x814FE9: push    7
0x814FEB: call    sub_772CD0
0x814FF0: cmp     dword ptr [esi+30h], 0
0x814FF4: jnz     short loc_814FFE
0x814FF6: call    sub_772DF0
0x814FFB: mov     [esi+30h], eax
0x814FFE: mov     ecx, [esi+30h]
0x815001: push    0
0x815003: push    4
0x815005: push    17h
0x815007: call    sub_772CD0
0x81500C: cmp     dword ptr [esi+30h], 0
0x815010: jnz     short loc_81501A
0x815012: call    sub_772DF0
0x815017: mov     [esi+30h], eax
0x81501A: mov     ecx, [esi+30h]
0x81501D: push    0
0x81501F: push    edi
0x815020: push    0Eh
0x815022: call    sub_772CD0
0x815027: cmp     dword ptr [esi+30h], 0
0x81502B: jnz     short loc_815035
0x81502D: call    sub_772DF0
0x815032: mov     [esi+30h], eax
0x815035: mov     ecx, [esi+30h]
0x815038: push    0
0x81503A: push    0
0x81503C: push    34h ; '4'
0x81503E: call    sub_772CD0
0x815043: or      ebp, 0FFFFFFFFh
0x815046: cmp     esi, ds:0B455F4h
0x81504C: mov     dword ptr ds:0B43B70h, 40008h
0x815056: mov     dword ptr ds:0B44200h, 4
0x815060: jz      short loc_81507F
0x815062: add     [esi+60h], ebp
0x815065: jnz     short loc_81506E
0x815067: mov     ecx, esi
0x815069: call    sub_7604D0
0x81506E: mov     esi, ds:0B455F4h
0x815074: test    esi, esi
0x815076: mov     [esp+2Ch+var_14], esi
0x81507A: jz      short loc_81507F
0x81507C: add     [esi+60h], edi
0x81507F: cmp     [esi+18h], edi
0x815082: jnb     loc_815168
0x815088: lea     ecx, [esp+2Ch+var_10]
0x81508C: push    ecx
0x81508D: call    sub_772630
0x815092: add     esp, 4
0x815095: mov     edi, eax
0x815097: cmp     ebx, [edi]
0x815099: mov     byte ptr [esp+2Ch+var_4], 0Ah
0x81509E: jz      short loc_8150BE
0x8150A0: test    ebx, ebx
0x8150A2: jz      short loc_8150B0
0x8150A4: add     [ebx+5Ch], ebp
0x8150A7: jnz     short loc_8150B0
0x8150A9: mov     ecx, ebx
0x8150AB: call    sub_772560
0x8150B0: mov     ebx, [edi]
0x8150B2: test    ebx, ebx
0x8150B4: mov     [esp+2Ch+var_18], ebx
0x8150B8: jz      short loc_8150BE
0x8150BA: add     dword ptr [ebx+5Ch], 1
0x8150BE: mov     eax, [esp+2Ch+var_10]
0x8150C2: test    eax, eax
0x8150C4: mov     byte ptr [esp+2Ch+var_4], 1
0x8150C9: jz      short loc_8150DD
0x8150CB: add     [eax+5Ch], ebp
0x8150CE: mov     ecx, eax
0x8150D0: add     eax, 5Ch ; '\'
0x8150D3: cmp     dword ptr [eax], 0
0x8150D6: jnz     short loc_8150DD
0x8150D8: call    sub_772560
0x8150DD: push    2
0x8150DF: push    1
0x8150E1: push    0
0x8150E3: push    ebx
0x8150E4: call    sub_801110
0x8150E9: mov     edx, [esi+14h]
0x8150EC: add     esp, 10h
0x8150EF: push    ebx; a3
0x8150F0: push    edx; a2
0x8150F1: mov     ecx, esi; this
0x8150F3: call    sub_760010
0x8150F8: lea     eax, [esp+2Ch+var_10]
0x8150FC: push    eax
0x8150FD: call    sub_772630
0x815102: add     esp, 4
0x815105: mov     edi, eax
0x815107: cmp     ebx, [edi]
0x815109: mov     byte ptr [esp+2Ch+var_4], 0Bh
0x81510E: jz      short loc_81512E
0x815110: test    ebx, ebx
0x815112: jz      short loc_815120
0x815114: add     [ebx+5Ch], ebp
0x815117: jnz     short loc_815120
0x815119: mov     ecx, ebx
0x81511B: call    sub_772560
0x815120: mov     ebx, [edi]
0x815122: test    ebx, ebx
0x815124: mov     [esp+2Ch+var_18], ebx
0x815128: jz      short loc_81512E
0x81512A: add     dword ptr [ebx+5Ch], 1
0x81512E: mov     eax, [esp+2Ch+var_10]
0x815132: test    eax, eax
0x815134: mov     byte ptr [esp+2Ch+var_4], 1
0x815139: jz      short loc_81514D
0x81513B: add     [eax+5Ch], ebp
0x81513E: mov     ecx, eax
0x815140: add     eax, 5Ch ; '\'
0x815143: cmp     dword ptr [eax], 0
0x815146: jnz     short loc_81514D
0x815148: call    sub_772560
0x81514D: push    2
0x81514F: push    1
0x815151: push    1
0x815153: push    ebx
0x815154: call    sub_801110
0x815159: mov     ecx, [esi+14h]
0x81515C: add     esp, 10h
0x81515F: push    ebx; a3
0x815160: push    ecx; a2
0x815161: mov     ecx, esi; this
0x815163: call    sub_760010
0x815168: mov     eax, ds:0B4535Ch
0x81516D: mov     edi, [esi+58h]
0x815170: cmp     edi, eax
0x815172: mov     ebp, eax
0x815174: jz      short loc_8151A7
0x815176: test    edi, edi
0x815178: jz      short loc_815196
0x81517A: lea     edx, [edi+4]
0x81517D: push    edx; lpAddend
0x81517E: call    dword ptr ds:0A2807Ch
0x815184: test    eax, eax
0x815186: jnz     short loc_815196
0x815188: test    edi, edi
0x81518A: jz      short loc_815196
0x81518C: mov     eax, [edi]
0x81518E: mov     edx, [eax]
0x815190: push    1
0x815192: mov     ecx, edi
0x815194: call    edx
0x815196: test    ebp, ebp
0x815198: mov     [esi+58h], ebp
0x81519B: jz      short loc_8151A7
0x81519D: add     ebp, 4
0x8151A0: push    ebp; lpAddend
0x8151A1: call    dword ptr ds:0A28078h
0x8151A7: mov     eax, ds:0B45118h
0x8151AC: mov     edi, [esi+44h]
0x8151AF: cmp     edi, eax
0x8151B1: mov     ebp, eax
0x8151B3: jz      short loc_8151E6
0x8151B5: test    edi, edi
0x8151B7: jz      short loc_8151D5
0x8151B9: lea     eax, [edi+4]
0x8151BC: push    eax; lpAddend
0x8151BD: call    dword ptr ds:0A2807Ch
0x8151C3: test    eax, eax
0x8151C5: jnz     short loc_8151D5
0x8151C7: test    edi, edi
0x8151C9: jz      short loc_8151D5
0x8151CB: mov     edx, [edi]
0x8151CD: mov     eax, [edx]
0x8151CF: push    1
0x8151D1: mov     ecx, edi
0x8151D3: call    eax
0x8151D5: test    ebp, ebp
0x8151D7: mov     [esi+44h], ebp
0x8151DA: jz      short loc_8151E6
0x8151DC: add     ebp, 4
0x8151DF: push    ebp; lpAddend
0x8151E0: call    dword ptr ds:0A28078h
0x8151E6: cmp     dword ptr [esi+30h], 0
0x8151EA: jnz     short loc_8151F4
0x8151EC: call    sub_772DF0
0x8151F1: mov     [esi+30h], eax
0x8151F4: mov     ecx, [esi+30h]
0x8151F7: push    0
0x8151F9: push    0
0x8151FB: push    1Bh
0x8151FD: call    sub_772CD0
0x815202: cmp     dword ptr [esi+30h], 0
0x815206: jnz     short loc_815210
0x815208: call    sub_772DF0
0x81520D: mov     [esi+30h], eax
0x815210: mov     ecx, [esi+30h]
0x815213: push    0
0x815215: push    0
0x815217: push    0Fh
0x815219: call    sub_772CD0
0x81521E: cmp     dword ptr [esi+30h], 0
0x815222: jnz     short loc_81522C
0x815224: call    sub_772DF0
0x815229: mov     [esi+30h], eax
0x81522C: mov     ecx, [esi+30h]
0x81522F: push    0
0x815231: mov     ebp, 1
0x815236: push    ebp
0x815237: push    7
0x815239: call    sub_772CD0
0x81523E: cmp     dword ptr [esi+30h], 0
0x815242: jnz     short loc_81524C
0x815244: call    sub_772DF0
0x815249: mov     [esi+30h], eax
0x81524C: mov     ecx, [esi+30h]
0x81524F: push    0
0x815251: push    4
0x815253: push    17h
0x815255: call    sub_772CD0
0x81525A: cmp     dword ptr [esi+30h], 0
0x81525E: jnz     short loc_815268
0x815260: call    sub_772DF0
0x815265: mov     [esi+30h], eax
0x815268: mov     ecx, [esi+30h]
0x81526B: push    0
0x81526D: push    ebp
0x81526E: push    0Eh
0x815270: call    sub_772CD0
0x815275: cmp     dword ptr [esi+30h], 0
0x815279: jnz     short loc_815283
0x81527B: call    sub_772DF0
0x815280: mov     [esi+30h], eax
0x815283: mov     ecx, [esi+30h]
0x815286: push    0
0x815288: push    0
0x81528A: push    34h ; '4'
0x81528C: call    sub_772CD0
0x815291: cmp     esi, ds:0B455F8h
0x815297: mov     dword ptr ds:0B43B74h, 40008h
0x8152A1: mov     dword ptr ds:0B44204h, 84h ; '„'
0x8152AB: mov     dword ptr ds:0B44894h, 4
0x8152B5: jz      short loc_8152D5
0x8152B7: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8152BB: jnz     short loc_8152C4
0x8152BD: mov     ecx, esi
0x8152BF: call    sub_7604D0
0x8152C4: mov     esi, ds:0B455F8h
0x8152CA: test    esi, esi
0x8152CC: mov     [esp+2Ch+var_14], esi
0x8152D0: jz      short loc_8152D5
0x8152D2: add     [esi+60h], ebp
0x8152D5: cmp     [esi+18h], ebp
0x8152D8: jnb     short loc_81534A
0x8152DA: lea     ecx, [esp+2Ch+var_10]
0x8152DE: push    ecx
0x8152DF: call    sub_772630
0x8152E4: add     esp, 4
0x8152E7: mov     edi, eax
0x8152E9: cmp     ebx, [edi]
0x8152EB: mov     byte ptr [esp+2Ch+var_4], 0Ch
0x8152F0: jz      short loc_815310
0x8152F2: test    ebx, ebx
0x8152F4: jz      short loc_815303
0x8152F6: add     dword ptr [ebx+5Ch], 0FFFFFFFFh
0x8152FA: jnz     short loc_815303
0x8152FC: mov     ecx, ebx
0x8152FE: call    sub_772560
0x815303: mov     ebx, [edi]
0x815305: test    ebx, ebx
0x815307: mov     [esp+2Ch+var_18], ebx
0x81530B: jz      short loc_815310
0x81530D: add     [ebx+5Ch], ebp
0x815310: mov     eax, [esp+2Ch+var_10]
0x815314: test    eax, eax
0x815316: mov     byte ptr [esp+2Ch+var_4], 1
0x81531B: jz      short loc_815330
0x81531D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x815321: mov     ecx, eax
0x815323: add     eax, 5Ch ; '\'
0x815326: cmp     dword ptr [eax], 0
0x815329: jnz     short loc_815330
0x81532B: call    sub_772560
0x815330: push    2
0x815332: push    ebp
0x815333: push    0
0x815335: push    ebx
0x815336: call    sub_801110
0x81533B: mov     edx, [esi+14h]
0x81533E: add     esp, 10h
0x815341: push    ebx; a3
0x815342: push    edx; a2
0x815343: mov     ecx, esi; this
0x815345: call    sub_760010
0x81534A: mov     eax, ds:0B4530Ch
0x81534F: mov     edi, [esi+58h]
0x815352: cmp     edi, eax
0x815354: mov     ebp, eax
0x815356: jz      short loc_815389
0x815358: test    edi, edi
0x81535A: jz      short loc_815378
0x81535C: lea     eax, [edi+4]
0x81535F: push    eax; lpAddend
0x815360: call    dword ptr ds:0A2807Ch
0x815366: test    eax, eax
0x815368: jnz     short loc_815378
0x81536A: test    edi, edi
0x81536C: jz      short loc_815378
0x81536E: mov     edx, [edi]
0x815370: mov     eax, [edx]
0x815372: push    1
0x815374: mov     ecx, edi
0x815376: call    eax
0x815378: test    ebp, ebp
0x81537A: mov     [esi+58h], ebp
0x81537D: jz      short loc_815389
0x81537F: add     ebp, 4
0x815382: push    ebp; lpAddend
0x815383: call    dword ptr ds:0A28078h
0x815389: mov     eax, ds:0B45088h
0x81538E: mov     edi, [esi+44h]
0x815391: cmp     edi, eax
0x815393: mov     ebp, eax
0x815395: jz      short loc_8153C8
0x815397: test    edi, edi
0x815399: jz      short loc_8153B7
0x81539B: lea     ecx, [edi+4]
0x81539E: push    ecx; lpAddend
0x81539F: call    dword ptr ds:0A2807Ch
0x8153A5: test    eax, eax
0x8153A7: jnz     short loc_8153B7
0x8153A9: test    edi, edi
0x8153AB: jz      short loc_8153B7
0x8153AD: mov     edx, [edi]
0x8153AF: mov     eax, [edx]
0x8153B1: push    1
0x8153B3: mov     ecx, edi
0x8153B5: call    eax
0x8153B7: test    ebp, ebp
0x8153B9: mov     [esi+44h], ebp
0x8153BC: jz      short loc_8153C8
0x8153BE: add     ebp, 4
0x8153C1: push    ebp; lpAddend
0x8153C2: call    dword ptr ds:0A28078h
0x8153C8: cmp     dword ptr [esi+30h], 0
0x8153CC: jnz     short loc_8153D6
0x8153CE: call    sub_772DF0
0x8153D3: mov     [esi+30h], eax
0x8153D6: mov     ecx, [esi+30h]
0x8153D9: push    0
0x8153DB: push    0
0x8153DD: push    1Bh
0x8153DF: call    sub_772CD0
0x8153E4: cmp     dword ptr [esi+30h], 0
0x8153E8: jnz     short loc_8153F2
0x8153EA: call    sub_772DF0
0x8153EF: mov     [esi+30h], eax
0x8153F2: mov     ecx, [esi+30h]
0x8153F5: push    0
0x8153F7: push    1
0x8153F9: push    0Fh
0x8153FB: call    sub_772CD0
0x815400: cmp     dword ptr [esi+30h], 0
0x815404: jnz     short loc_81540E
0x815406: call    sub_772DF0
0x81540B: mov     [esi+30h], eax
0x81540E: mov     ecx, [esi+30h]
0x815411: push    0
0x815413: push    1
0x815415: push    7
0x815417: call    sub_772CD0
0x81541C: cmp     dword ptr [esi+30h], 0
0x815420: jnz     short loc_81542A
0x815422: call    sub_772DF0
0x815427: mov     [esi+30h], eax
0x81542A: mov     ecx, [esi+30h]
0x81542D: push    0
0x81542F: push    4
0x815431: push    17h
0x815433: call    sub_772CD0
0x815438: cmp     dword ptr [esi+30h], 0
0x81543C: jnz     short loc_815446
0x81543E: call    sub_772DF0
0x815443: mov     [esi+30h], eax
0x815446: mov     ecx, [esi+30h]
0x815449: push    0
0x81544B: push    1
0x81544D: push    0Eh
0x81544F: call    sub_772CD0
0x815454: cmp     dword ptr [esi+30h], 0
0x815458: jnz     short loc_815462
0x81545A: call    sub_772DF0
0x81545F: mov     [esi+30h], eax
0x815462: mov     ecx, [esi+30h]
0x815465: push    0
0x815467: push    0
0x815469: push    34h ; '4'
0x81546B: call    sub_772CD0
0x815470: or      ebp, 0FFFFFFFFh
0x815473: cmp     esi, ds:0B455FCh
0x815479: mov     dword ptr ds:0B43B78h, 40008h
0x815483: mov     dword ptr ds:0B44208h, 4
0x81548D: jz      short loc_8154AD
0x81548F: add     [esi+60h], ebp
0x815492: jnz     short loc_81549B
0x815494: mov     ecx, esi
0x815496: call    sub_7604D0
0x81549B: mov     esi, ds:0B455FCh
0x8154A1: test    esi, esi
0x8154A3: mov     [esp+2Ch+var_14], esi
0x8154A7: jz      short loc_8154AD
0x8154A9: add     dword ptr [esi+60h], 1
0x8154AD: cmp     dword ptr [esi+18h], 2
0x8154B1: jnb     loc_815597
0x8154B7: lea     ecx, [esp+2Ch+var_10]
0x8154BB: push    ecx
0x8154BC: call    sub_772630
0x8154C1: add     esp, 4
0x8154C4: mov     edi, eax
0x8154C6: cmp     ebx, [edi]
0x8154C8: mov     byte ptr [esp+2Ch+var_4], 0Dh
0x8154CD: jz      short loc_8154ED
0x8154CF: test    ebx, ebx
0x8154D1: jz      short loc_8154DF
0x8154D3: add     [ebx+5Ch], ebp
0x8154D6: jnz     short loc_8154DF
0x8154D8: mov     ecx, ebx
0x8154DA: call    sub_772560
0x8154DF: mov     ebx, [edi]
0x8154E1: test    ebx, ebx
0x8154E3: mov     [esp+2Ch+var_18], ebx
0x8154E7: jz      short loc_8154ED
0x8154E9: add     dword ptr [ebx+5Ch], 1
0x8154ED: mov     eax, [esp+2Ch+var_10]
0x8154F1: test    eax, eax
0x8154F3: mov     byte ptr [esp+2Ch+var_4], 1
0x8154F8: jz      short loc_81550C
0x8154FA: add     [eax+5Ch], ebp
0x8154FD: mov     ecx, eax
0x8154FF: add     eax, 5Ch ; '\'
0x815502: cmp     dword ptr [eax], 0
0x815505: jnz     short loc_81550C
0x815507: call    sub_772560
0x81550C: push    2
0x81550E: push    1
0x815510: push    0
0x815512: push    ebx
0x815513: call    sub_801110
0x815518: mov     edx, [esi+14h]
0x81551B: add     esp, 10h
0x81551E: push    ebx; a3
0x81551F: push    edx; a2
0x815520: mov     ecx, esi; this
0x815522: call    sub_760010
0x815527: lea     eax, [esp+2Ch+var_10]
0x81552B: push    eax
0x81552C: call    sub_772630
0x815531: add     esp, 4
0x815534: mov     edi, eax
0x815536: cmp     ebx, [edi]
0x815538: mov     byte ptr [esp+2Ch+var_4], 0Eh
0x81553D: jz      short loc_81555D
0x81553F: test    ebx, ebx
0x815541: jz      short loc_81554F
0x815543: add     [ebx+5Ch], ebp
0x815546: jnz     short loc_81554F
0x815548: mov     ecx, ebx
0x81554A: call    sub_772560
0x81554F: mov     ebx, [edi]
0x815551: test    ebx, ebx
0x815553: mov     [esp+2Ch+var_18], ebx
0x815557: jz      short loc_81555D
0x815559: add     dword ptr [ebx+5Ch], 1
0x81555D: mov     eax, [esp+2Ch+var_10]
0x815561: test    eax, eax
0x815563: mov     byte ptr [esp+2Ch+var_4], 1
0x815568: jz      short loc_81557C
0x81556A: add     [eax+5Ch], ebp
0x81556D: mov     ecx, eax
0x81556F: add     eax, 5Ch ; '\'
0x815572: cmp     dword ptr [eax], 0
0x815575: jnz     short loc_81557C
0x815577: call    sub_772560
0x81557C: push    2
0x81557E: push    1
0x815580: push    1
0x815582: push    ebx
0x815583: call    sub_801110
0x815588: mov     ecx, [esi+14h]
0x81558B: add     esp, 10h
0x81558E: push    ebx; a3
0x81558F: push    ecx; a2
0x815590: mov     ecx, esi; this
0x815592: call    sub_760010
0x815597: mov     eax, ds:0B4535Ch
0x81559C: mov     edi, [esi+58h]
0x81559F: cmp     edi, eax
0x8155A1: mov     ebp, eax
0x8155A3: jz      short loc_8155D6
0x8155A5: test    edi, edi
0x8155A7: jz      short loc_8155C5
0x8155A9: lea     edx, [edi+4]
0x8155AC: push    edx; lpAddend
0x8155AD: call    dword ptr ds:0A2807Ch
0x8155B3: test    eax, eax
0x8155B5: jnz     short loc_8155C5
0x8155B7: test    edi, edi
0x8155B9: jz      short loc_8155C5
0x8155BB: mov     eax, [edi]
0x8155BD: mov     edx, [eax]
0x8155BF: push    1
0x8155C1: mov     ecx, edi
0x8155C3: call    edx
0x8155C5: test    ebp, ebp
0x8155C7: mov     [esi+58h], ebp
0x8155CA: jz      short loc_8155D6
0x8155CC: add     ebp, 4
0x8155CF: push    ebp; lpAddend
0x8155D0: call    dword ptr ds:0A28078h
0x8155D6: mov     eax, ds:0B45118h
0x8155DB: mov     edi, [esi+44h]
0x8155DE: cmp     edi, eax
0x8155E0: mov     ebp, eax
0x8155E2: jz      short loc_815615
0x8155E4: test    edi, edi
0x8155E6: jz      short loc_815604
0x8155E8: lea     eax, [edi+4]
0x8155EB: push    eax; lpAddend
0x8155EC: call    dword ptr ds:0A2807Ch
0x8155F2: test    eax, eax
0x8155F4: jnz     short loc_815604
0x8155F6: test    edi, edi
0x8155F8: jz      short loc_815604
0x8155FA: mov     edx, [edi]
0x8155FC: mov     eax, [edx]
0x8155FE: push    1
0x815600: mov     ecx, edi
0x815602: call    eax
0x815604: test    ebp, ebp
0x815606: mov     [esi+44h], ebp
0x815609: jz      short loc_815615
0x81560B: add     ebp, 4
0x81560E: push    ebp; lpAddend
0x81560F: call    dword ptr ds:0A28078h
0x815615: cmp     dword ptr [esi+30h], 0
0x815619: jnz     short loc_815623
0x81561B: call    sub_772DF0
0x815620: mov     [esi+30h], eax
0x815623: mov     ecx, [esi+30h]
0x815626: push    0
0x815628: push    0
0x81562A: push    1Bh
0x81562C: call    sub_772CD0
0x815631: cmp     dword ptr [esi+30h], 0
0x815635: jnz     short loc_81563F
0x815637: call    sub_772DF0
0x81563C: mov     [esi+30h], eax
0x81563F: mov     ecx, [esi+30h]
0x815642: push    0
0x815644: mov     ebp, 1
0x815649: push    ebp
0x81564A: push    0Fh
0x81564C: call    sub_772CD0
0x815651: cmp     dword ptr [esi+30h], 0
0x815655: jnz     short loc_81565F
0x815657: call    sub_772DF0
0x81565C: mov     [esi+30h], eax
0x81565F: mov     ecx, [esi+30h]
0x815662: push    0
0x815664: push    ebp
0x815665: push    7
0x815667: call    sub_772CD0
0x81566C: cmp     dword ptr [esi+30h], 0
0x815670: jnz     short loc_81567A
0x815672: call    sub_772DF0
0x815677: mov     [esi+30h], eax
0x81567A: mov     ecx, [esi+30h]
0x81567D: push    0
0x81567F: push    4
0x815681: push    17h
0x815683: call    sub_772CD0
0x815688: cmp     dword ptr [esi+30h], 0
0x81568C: jnz     short loc_815696
0x81568E: call    sub_772DF0
0x815693: mov     [esi+30h], eax
0x815696: mov     ecx, [esi+30h]
0x815699: push    0
0x81569B: push    ebp
0x81569C: push    0Eh
0x81569E: call    sub_772CD0
0x8156A3: cmp     dword ptr [esi+30h], 0
0x8156A7: jnz     short loc_8156B1
0x8156A9: call    sub_772DF0
0x8156AE: mov     [esi+30h], eax
0x8156B1: mov     ecx, [esi+30h]
0x8156B4: push    0
0x8156B6: push    0
0x8156B8: push    34h ; '4'
0x8156BA: call    sub_772CD0
0x8156BF: cmp     esi, ds:0B45C18h
0x8156C5: mov     dword ptr ds:0B43B7Ch, 40008h
0x8156CF: mov     dword ptr ds:0B4420Ch, 84h ; '„'
0x8156D9: mov     dword ptr ds:0B4489Ch, 4
0x8156E3: jz      short loc_815703
0x8156E5: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8156E9: jnz     short loc_8156F2
0x8156EB: mov     ecx, esi
0x8156ED: call    sub_7604D0
0x8156F2: mov     esi, ds:0B45C18h
0x8156F8: test    esi, esi
0x8156FA: mov     [esp+2Ch+var_14], esi
0x8156FE: jz      short loc_815703
0x815700: add     [esi+60h], ebp
0x815703: cmp     [esi+18h], ebp
0x815706: jnb     short loc_815778
0x815708: lea     ecx, [esp+2Ch+var_10]
0x81570C: push    ecx
0x81570D: call    sub_772630
0x815712: add     esp, 4
0x815715: mov     edi, eax
0x815717: cmp     ebx, [edi]
0x815719: mov     byte ptr [esp+2Ch+var_4], 0Fh
0x81571E: jz      short loc_81573E
0x815720: test    ebx, ebx
0x815722: jz      short loc_815731
0x815724: add     dword ptr [ebx+5Ch], 0FFFFFFFFh
0x815728: jnz     short loc_815731
0x81572A: mov     ecx, ebx
0x81572C: call    sub_772560
0x815731: mov     ebx, [edi]
0x815733: test    ebx, ebx
0x815735: mov     [esp+2Ch+var_18], ebx
0x815739: jz      short loc_81573E
0x81573B: add     [ebx+5Ch], ebp
0x81573E: mov     eax, [esp+2Ch+var_10]
0x815742: test    eax, eax
0x815744: mov     byte ptr [esp+2Ch+var_4], 1
0x815749: jz      short loc_81575E
0x81574B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81574F: mov     ecx, eax
0x815751: add     eax, 5Ch ; '\'
0x815754: cmp     dword ptr [eax], 0
0x815757: jnz     short loc_81575E
0x815759: call    sub_772560
0x81575E: push    2
0x815760: push    ebp
0x815761: push    0
0x815763: push    ebx
0x815764: call    sub_801110
0x815769: mov     edx, [esi+14h]
0x81576C: add     esp, 10h
0x81576F: push    ebx; a3
0x815770: push    edx; a2
0x815771: mov     ecx, esi; this
0x815773: call    sub_760010
0x815778: mov     eax, ds:0B452F0h
0x81577D: mov     edi, [esi+58h]
0x815780: cmp     edi, eax
0x815782: mov     ebp, eax
0x815784: jz      short loc_8157B7
0x815786: test    edi, edi
0x815788: jz      short loc_8157A6
0x81578A: lea     eax, [edi+4]
0x81578D: push    eax; lpAddend
0x81578E: call    dword ptr ds:0A2807Ch
0x815794: test    eax, eax
0x815796: jnz     short loc_8157A6
0x815798: test    edi, edi
0x81579A: jz      short loc_8157A6
0x81579C: mov     edx, [edi]
0x81579E: mov     eax, [edx]
0x8157A0: push    1
0x8157A2: mov     ecx, edi
0x8157A4: call    eax
0x8157A6: test    ebp, ebp
0x8157A8: mov     [esi+58h], ebp
0x8157AB: jz      short loc_8157B7
0x8157AD: add     ebp, 4
0x8157B0: push    ebp; lpAddend
0x8157B1: call    dword ptr ds:0A28078h
0x8157B7: mov     eax, ds:0B4511Ch
0x8157BC: mov     edi, [esi+44h]
0x8157BF: cmp     edi, eax
0x8157C1: mov     ebp, eax
0x8157C3: jz      short loc_8157F6
0x8157C5: test    edi, edi
0x8157C7: jz      short loc_8157E5
0x8157C9: lea     ecx, [edi+4]
0x8157CC: push    ecx; lpAddend
0x8157CD: call    dword ptr ds:0A2807Ch
0x8157D3: test    eax, eax
0x8157D5: jnz     short loc_8157E5
0x8157D7: test    edi, edi
0x8157D9: jz      short loc_8157E5
0x8157DB: mov     edx, [edi]
0x8157DD: mov     eax, [edx]
0x8157DF: push    1
0x8157E1: mov     ecx, edi
0x8157E3: call    eax
0x8157E5: test    ebp, ebp
0x8157E7: mov     [esi+44h], ebp
0x8157EA: jz      short loc_8157F6
0x8157EC: add     ebp, 4
0x8157EF: push    ebp; lpAddend
0x8157F0: call    dword ptr ds:0A28078h
0x8157F6: cmp     dword ptr [esi+30h], 0
0x8157FA: jnz     short loc_815804
0x8157FC: call    sub_772DF0
0x815801: mov     [esi+30h], eax
0x815804: mov     ecx, [esi+30h]
0x815807: push    0
0x815809: push    0
0x81580B: push    1Bh
0x81580D: call    sub_772CD0
0x815812: cmp     dword ptr [esi+30h], 0
0x815816: jnz     short loc_815820
0x815818: call    sub_772DF0
0x81581D: mov     [esi+30h], eax
0x815820: mov     ecx, [esi+30h]
0x815823: push    0
0x815825: mov     ebp, 1
0x81582A: push    ebp
0x81582B: push    0Fh
0x81582D: call    sub_772CD0
0x815832: cmp     dword ptr [esi+30h], 0
0x815836: jnz     short loc_815840
0x815838: call    sub_772DF0
0x81583D: mov     [esi+30h], eax
0x815840: mov     ecx, [esi+30h]
0x815843: push    0
0x815845: push    ebp
0x815846: push    7
0x815848: call    sub_772CD0
0x81584D: cmp     dword ptr [esi+30h], 0
0x815851: jnz     short loc_81585B
0x815853: call    sub_772DF0
0x815858: mov     [esi+30h], eax
0x81585B: mov     ecx, [esi+30h]
0x81585E: push    0
0x815860: push    4
0x815862: push    17h
0x815864: call    sub_772CD0
0x815869: cmp     dword ptr [esi+30h], 0
0x81586D: jnz     short loc_815877
0x81586F: call    sub_772DF0
0x815874: mov     [esi+30h], eax
0x815877: mov     ecx, [esi+30h]
0x81587A: push    0
0x81587C: push    0
0x81587E: push    0Eh
0x815880: call    sub_772CD0
0x815885: cmp     dword ptr [esi+30h], 0
0x815889: jnz     short loc_815893
0x81588B: call    sub_772DF0
0x815890: mov     [esi+30h], eax
0x815893: mov     ecx, [esi+30h]
0x815896: push    0
0x815898: push    0
0x81589A: push    34h ; '4'
0x81589C: call    sub_772CD0
0x8158A1: cmp     esi, ds:0B45C1Ch
0x8158A7: mov     dword ptr ds:0B44198h, 2
0x8158B1: mov     dword ptr ds:0B44828h, 84h ; '„'
0x8158BB: mov     dword ptr ds:0B44EB8h, 4
0x8158C5: jz      short loc_8158E5
0x8158C7: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8158CB: jnz     short loc_8158D4
0x8158CD: mov     ecx, esi
0x8158CF: call    sub_7604D0
0x8158D4: mov     esi, ds:0B45C1Ch
0x8158DA: test    esi, esi
0x8158DC: mov     [esp+2Ch+var_14], esi
0x8158E0: jz      short loc_8158E5
0x8158E2: add     [esi+60h], ebp
0x8158E5: cmp     [esi+18h], ebp
0x8158E8: jnb     short loc_81595A
0x8158EA: lea     ecx, [esp+2Ch+var_10]
0x8158EE: push    ecx
0x8158EF: call    sub_772630
0x8158F4: add     esp, 4
0x8158F7: mov     edi, eax
0x8158F9: cmp     ebx, [edi]
0x8158FB: mov     byte ptr [esp+2Ch+var_4], 10h
0x815900: jz      short loc_815920
0x815902: test    ebx, ebx
0x815904: jz      short loc_815913
0x815906: add     dword ptr [ebx+5Ch], 0FFFFFFFFh
0x81590A: jnz     short loc_815913
0x81590C: mov     ecx, ebx
0x81590E: call    sub_772560
0x815913: mov     ebx, [edi]
0x815915: test    ebx, ebx
0x815917: mov     [esp+2Ch+var_18], ebx
0x81591B: jz      short loc_815920
0x81591D: add     [ebx+5Ch], ebp
0x815920: mov     eax, [esp+2Ch+var_10]
0x815924: test    eax, eax
0x815926: mov     byte ptr [esp+2Ch+var_4], 1
0x81592B: jz      short loc_815940
0x81592D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x815931: mov     ecx, eax
0x815933: add     eax, 5Ch ; '\'
0x815936: cmp     dword ptr [eax], 0
0x815939: jnz     short loc_815940
0x81593B: call    sub_772560
0x815940: push    2
0x815942: push    ebp
0x815943: push    0
0x815945: push    ebx
0x815946: call    sub_801110
0x81594B: mov     edx, [esi+14h]
0x81594E: add     esp, 10h
0x815951: push    ebx; a3
0x815952: push    edx; a2
0x815953: mov     ecx, esi; this
0x815955: call    sub_760010
0x81595A: mov     eax, ds:0B4535Ch
0x81595F: mov     edi, [esi+58h]
0x815962: cmp     edi, eax
0x815964: mov     ebp, eax
0x815966: jz      short loc_815999
0x815968: test    edi, edi
0x81596A: jz      short loc_815988
0x81596C: lea     eax, [edi+4]
0x81596F: push    eax; lpAddend
0x815970: call    dword ptr ds:0A2807Ch
0x815976: test    eax, eax
0x815978: jnz     short loc_815988
0x81597A: test    edi, edi
0x81597C: jz      short loc_815988
0x81597E: mov     edx, [edi]
0x815980: mov     eax, [edx]
0x815982: push    1
0x815984: mov     ecx, edi
0x815986: call    eax
0x815988: test    ebp, ebp
0x81598A: mov     [esi+58h], ebp
0x81598D: jz      short loc_815999
0x81598F: add     ebp, 4
0x815992: push    ebp; lpAddend
0x815993: call    dword ptr ds:0A28078h
0x815999: mov     eax, ds:0B4511Ch
0x81599E: mov     edi, [esi+44h]
0x8159A1: cmp     edi, eax
0x8159A3: mov     ebp, eax
0x8159A5: jz      short loc_8159D8
0x8159A7: test    edi, edi
0x8159A9: jz      short loc_8159C7
0x8159AB: lea     ecx, [edi+4]
0x8159AE: push    ecx; lpAddend
0x8159AF: call    dword ptr ds:0A2807Ch
0x8159B5: test    eax, eax
0x8159B7: jnz     short loc_8159C7
0x8159B9: test    edi, edi
0x8159BB: jz      short loc_8159C7
0x8159BD: mov     edx, [edi]
0x8159BF: mov     eax, [edx]
0x8159C1: push    1
0x8159C3: mov     ecx, edi
0x8159C5: call    eax
0x8159C7: test    ebp, ebp
0x8159C9: mov     [esi+44h], ebp
0x8159CC: jz      short loc_8159D8
0x8159CE: add     ebp, 4
0x8159D1: push    ebp; lpAddend
0x8159D2: call    dword ptr ds:0A28078h
0x8159D8: cmp     dword ptr [esi+30h], 0
0x8159DC: jnz     short loc_8159E6
0x8159DE: call    sub_772DF0
0x8159E3: mov     [esi+30h], eax
0x8159E6: mov     ecx, [esi+30h]
0x8159E9: push    0
0x8159EB: push    0
0x8159ED: push    1Bh
0x8159EF: call    sub_772CD0
0x8159F4: cmp     dword ptr [esi+30h], 0
0x8159F8: jnz     short loc_815A02
0x8159FA: call    sub_772DF0
0x8159FF: mov     [esi+30h], eax
0x815A02: mov     ecx, [esi+30h]
0x815A05: push    0
0x815A07: push    1
0x815A09: push    0Fh
0x815A0B: call    sub_772CD0
0x815A10: cmp     dword ptr [esi+30h], 0
0x815A14: jnz     short loc_815A1E
0x815A16: call    sub_772DF0
0x815A1B: mov     [esi+30h], eax
0x815A1E: mov     ecx, [esi+30h]
0x815A21: push    0
0x815A23: push    1
0x815A25: push    7
0x815A27: call    sub_772CD0
0x815A2C: cmp     dword ptr [esi+30h], 0
0x815A30: jnz     short loc_815A3A
0x815A32: call    sub_772DF0
0x815A37: mov     [esi+30h], eax
0x815A3A: mov     ecx, [esi+30h]
0x815A3D: push    0
0x815A3F: push    4
0x815A41: push    17h
0x815A43: call    sub_772CD0
0x815A48: cmp     dword ptr [esi+30h], 0
0x815A4C: jnz     short loc_815A56
0x815A4E: call    sub_772DF0
0x815A53: mov     [esi+30h], eax
0x815A56: mov     ecx, [esi+30h]
0x815A59: push    0
0x815A5B: push    0
0x815A5D: push    0Eh
0x815A5F: call    sub_772CD0
0x815A64: cmp     dword ptr [esi+30h], 0
0x815A68: jnz     short loc_815A72
0x815A6A: call    sub_772DF0
0x815A6F: mov     [esi+30h], eax
0x815A72: mov     ecx, [esi+30h]
0x815A75: push    0
0x815A77: push    0
0x815A79: push    34h ; '4'
0x815A7B: call    sub_772CD0
0x815A80: cmp     esi, ds:0B455C8h
0x815A86: mov     dword ptr ds:0B4419Ch, 40008h
0x815A90: mov     dword ptr ds:0B4482Ch, 84h ; '„'
0x815A9A: mov     dword ptr ds:0B44EBCh, 4
0x815AA4: jz      short loc_815AC5
0x815AA6: add     dword ptr [esi+60h], 0FFFFFFFFh
0x815AAA: jnz     short loc_815AB3
0x815AAC: mov     ecx, esi
0x815AAE: call    sub_7604D0
0x815AB3: mov     esi, ds:0B455C8h
0x815AB9: test    esi, esi
0x815ABB: mov     [esp+2Ch+var_14], esi
0x815ABF: jz      short loc_815AC5
0x815AC1: add     dword ptr [esi+60h], 1
0x815AC5: mov     eax, ds:0B452F0h
0x815ACA: mov     edi, [esi+58h]
0x815ACD: cmp     edi, eax
0x815ACF: mov     ebp, eax
0x815AD1: jz      short loc_815B04
0x815AD3: test    edi, edi
0x815AD5: jz      short loc_815AF3
0x815AD7: lea     ecx, [edi+4]
0x815ADA: push    ecx; lpAddend
0x815ADB: call    dword ptr ds:0A2807Ch
0x815AE1: test    eax, eax
0x815AE3: jnz     short loc_815AF3
0x815AE5: test    edi, edi
0x815AE7: jz      short loc_815AF3
0x815AE9: mov     edx, [edi]
0x815AEB: mov     eax, [edx]
0x815AED: push    1
0x815AEF: mov     ecx, edi
0x815AF1: call    eax
0x815AF3: test    ebp, ebp
0x815AF5: mov     [esi+58h], ebp
0x815AF8: jz      short loc_815B04
0x815AFA: add     ebp, 4
0x815AFD: push    ebp; lpAddend
0x815AFE: call    dword ptr ds:0A28078h
0x815B04: mov     eax, ds:0B45120h
0x815B09: mov     edi, [esi+44h]
0x815B0C: cmp     edi, eax
0x815B0E: mov     ebp, eax
0x815B10: jz      short loc_815B43
0x815B12: test    edi, edi
0x815B14: jz      short loc_815B32
0x815B16: lea     ecx, [edi+4]
0x815B19: push    ecx; lpAddend
0x815B1A: call    dword ptr ds:0A2807Ch
0x815B20: test    eax, eax
0x815B22: jnz     short loc_815B32
0x815B24: test    edi, edi
0x815B26: jz      short loc_815B32
0x815B28: mov     edx, [edi]
0x815B2A: mov     eax, [edx]
0x815B2C: push    1
0x815B2E: mov     ecx, edi
0x815B30: call    eax
0x815B32: test    ebp, ebp
0x815B34: mov     [esi+44h], ebp
0x815B37: jz      short loc_815B43
0x815B39: add     ebp, 4
0x815B3C: push    ebp; lpAddend
0x815B3D: call    dword ptr ds:0A28078h
0x815B43: cmp     dword ptr [esi+30h], 0
0x815B47: jnz     short loc_815B51
0x815B49: call    sub_772DF0
0x815B4E: mov     [esi+30h], eax
0x815B51: mov     ecx, [esi+30h]
0x815B54: push    0
0x815B56: push    0
0x815B58: push    1Bh
0x815B5A: call    sub_772CD0
0x815B5F: cmp     dword ptr [esi+30h], 0
0x815B63: jnz     short loc_815B6D
0x815B65: call    sub_772DF0
0x815B6A: mov     [esi+30h], eax
0x815B6D: mov     ecx, [esi+30h]
0x815B70: push    0
0x815B72: push    1
0x815B74: push    0Fh
0x815B76: call    sub_772CD0
0x815B7B: cmp     dword ptr [esi+30h], 0
0x815B7F: jnz     short loc_815B89
0x815B81: call    sub_772DF0
0x815B86: mov     [esi+30h], eax
0x815B89: mov     ecx, [esi+30h]
0x815B8C: push    0
0x815B8E: push    1
0x815B90: push    7
0x815B92: call    sub_772CD0
0x815B97: cmp     dword ptr [esi+30h], 0
0x815B9B: jnz     short loc_815BA5
0x815B9D: call    sub_772DF0
0x815BA2: mov     [esi+30h], eax
0x815BA5: mov     ecx, [esi+30h]
0x815BA8: push    0
0x815BAA: push    4
0x815BAC: push    17h
0x815BAE: call    sub_772CD0
0x815BB3: cmp     dword ptr [esi+30h], 0
0x815BB7: jnz     short loc_815BC1
0x815BB9: call    sub_772DF0
0x815BBE: mov     [esi+30h], eax
0x815BC1: mov     ecx, [esi+30h]
0x815BC4: push    0
0x815BC6: push    0
0x815BC8: push    0Eh
0x815BCA: call    sub_772CD0
0x815BCF: cmp     dword ptr [esi+30h], 0
0x815BD3: jnz     short loc_815BDD
0x815BD5: call    sub_772DF0
0x815BDA: mov     [esi+30h], eax
0x815BDD: mov     ecx, [esi+30h]
0x815BE0: push    0
0x815BE2: push    0
0x815BE4: push    34h ; '4'
0x815BE6: call    sub_772CD0
0x815BEB: cmp     esi, ds:0B455CCh
0x815BF1: mov     dword ptr ds:0B43B48h, 2
0x815BFB: mov     dword ptr ds:0B441D8h, 84h ; '„'
0x815C05: mov     dword ptr ds:0B44868h, 4
0x815C0F: jz      short loc_815C30
0x815C11: add     dword ptr [esi+60h], 0FFFFFFFFh
0x815C15: jnz     short loc_815C1E
0x815C17: mov     ecx, esi
0x815C19: call    sub_7604D0
0x815C1E: mov     esi, ds:0B455CCh
0x815C24: test    esi, esi
0x815C26: mov     [esp+2Ch+var_14], esi
0x815C2A: jz      short loc_815C30
0x815C2C: add     dword ptr [esi+60h], 1
0x815C30: mov     eax, ds:0B4535Ch
0x815C35: mov     edi, [esi+58h]
0x815C38: cmp     edi, eax
0x815C3A: mov     ebp, eax
0x815C3C: jz      short loc_815C6F
0x815C3E: test    edi, edi
0x815C40: jz      short loc_815C5E
0x815C42: lea     ecx, [edi+4]
0x815C45: push    ecx; lpAddend
0x815C46: call    dword ptr ds:0A2807Ch
0x815C4C: test    eax, eax
0x815C4E: jnz     short loc_815C5E
0x815C50: test    edi, edi
0x815C52: jz      short loc_815C5E
0x815C54: mov     edx, [edi]
0x815C56: mov     eax, [edx]
0x815C58: push    1
0x815C5A: mov     ecx, edi
0x815C5C: call    eax
0x815C5E: test    ebp, ebp
0x815C60: mov     [esi+58h], ebp
0x815C63: jz      short loc_815C6F
0x815C65: add     ebp, 4
0x815C68: push    ebp; lpAddend
0x815C69: call    dword ptr ds:0A28078h
0x815C6F: mov     eax, ds:0B45120h
0x815C74: mov     edi, [esi+44h]
0x815C77: cmp     edi, eax
0x815C79: mov     ebp, eax
0x815C7B: jz      short loc_815CAE
0x815C7D: test    edi, edi
0x815C7F: jz      short loc_815C9D
0x815C81: lea     ecx, [edi+4]
0x815C84: push    ecx; lpAddend
0x815C85: call    dword ptr ds:0A2807Ch
0x815C8B: test    eax, eax
0x815C8D: jnz     short loc_815C9D
0x815C8F: test    edi, edi
0x815C91: jz      short loc_815C9D
0x815C93: mov     edx, [edi]
0x815C95: mov     eax, [edx]
0x815C97: push    1
0x815C99: mov     ecx, edi
0x815C9B: call    eax
0x815C9D: test    ebp, ebp
0x815C9F: mov     [esi+44h], ebp
0x815CA2: jz      short loc_815CAE
0x815CA4: add     ebp, 4
0x815CA7: push    ebp; lpAddend
0x815CA8: call    dword ptr ds:0A28078h
0x815CAE: cmp     dword ptr [esi+30h], 0
0x815CB2: jnz     short loc_815CBC
0x815CB4: call    sub_772DF0
0x815CB9: mov     [esi+30h], eax
0x815CBC: mov     ecx, [esi+30h]
0x815CBF: push    0
0x815CC1: push    0
0x815CC3: push    1Bh
0x815CC5: call    sub_772CD0
0x815CCA: cmp     dword ptr [esi+30h], 0
0x815CCE: jnz     short loc_815CD8
0x815CD0: call    sub_772DF0
0x815CD5: mov     [esi+30h], eax
0x815CD8: mov     ecx, [esi+30h]
0x815CDB: push    0
0x815CDD: push    1
0x815CDF: push    0Fh
0x815CE1: call    sub_772CD0
0x815CE6: cmp     dword ptr [esi+30h], 0
0x815CEA: jnz     short loc_815CF4
0x815CEC: call    sub_772DF0
0x815CF1: mov     [esi+30h], eax
0x815CF4: mov     ecx, [esi+30h]
0x815CF7: push    0
0x815CF9: push    1
0x815CFB: push    7
0x815CFD: call    sub_772CD0
0x815D02: cmp     dword ptr [esi+30h], 0
0x815D06: jnz     short loc_815D10
0x815D08: call    sub_772DF0
0x815D0D: mov     [esi+30h], eax
0x815D10: mov     ecx, [esi+30h]
0x815D13: push    0
0x815D15: push    4
0x815D17: push    17h
0x815D19: call    sub_772CD0
0x815D1E: cmp     dword ptr [esi+30h], 0
0x815D22: jnz     short loc_815D2C
0x815D24: call    sub_772DF0
0x815D29: mov     [esi+30h], eax
0x815D2C: mov     ecx, [esi+30h]
0x815D2F: push    0
0x815D31: push    0
0x815D33: push    0Eh
0x815D35: call    sub_772CD0
0x815D3A: cmp     dword ptr [esi+30h], 0
0x815D3E: jnz     short loc_815D48
0x815D40: call    sub_772DF0
0x815D45: mov     [esi+30h], eax
0x815D48: mov     ecx, [esi+30h]
0x815D4B: push    0
0x815D4D: push    0
0x815D4F: push    34h ; '4'
0x815D51: call    sub_772CD0
0x815D56: or      edi, 0FFFFFFFFh
0x815D59: test    ebx, ebx
0x815D5B: mov     dword ptr ds:0B43B4Ch, 40008h
0x815D65: mov     dword ptr ds:0B441DCh, 84h ; '„'
0x815D6F: mov     dword ptr ds:0B4486Ch, 4
0x815D79: mov     byte ptr [esp+2Ch+var_4], 0
0x815D7E: jz      short loc_815D8C
0x815D80: add     [ebx+5Ch], edi
0x815D83: jnz     short loc_815D8C
0x815D85: mov     ecx, ebx
0x815D87: call    sub_772560
0x815D8C: add     [esi+60h], edi
0x815D8F: mov     [esp+2Ch+var_4], edi
0x815D93: jnz     short loc_815D9C
0x815D95: mov     ecx, esi
0x815D97: call    sub_7604D0
0x815D9C: mov     ecx, dword ptr [esp+2Ch+var_C]
0x815DA0: mov     large fs:0, ecx
0x815DA7: pop     ecx
0x815DA8: pop     edi
0x815DA9: pop     esi
0x815DAA: pop     ebp
0x815DAB: pop     ebx
0x815DAC: add     esp, 18h
0x815DAF: retn
