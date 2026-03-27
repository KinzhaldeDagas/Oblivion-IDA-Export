0x81F330: push    0FFFFFFFFh
0x81F332: push    offset SEH_81F330
0x81F337: mov     eax, large fs:0
0x81F33D: push    eax
0x81F33E: sub     esp, 0Ch
0x81F341: push    ebx
0x81F342: push    ebp
0x81F343: push    esi
0x81F344: push    edi
0x81F345: mov     eax, ds:0B30AACh
0x81F34A: xor     eax, esp
0x81F34C: push    eax
0x81F34D: lea     eax, [esp+2Ch+var_C]
0x81F351: mov     large fs:0, eax
0x81F357: xor     esi, esi
0x81F359: mov     [esp+2Ch+var_14], esi
0x81F35D: xor     edi, edi
0x81F35F: mov     [esp+2Ch+var_4], esi
0x81F363: mov     [esp+2Ch+var_18], edi
0x81F367: mov     eax, ds:0B456C0h
0x81F36C: test    eax, eax
0x81F36E: mov     ebx, 1
0x81F373: mov     byte ptr [esp+2Ch+var_4], bl
0x81F377: jz      short loc_81F386
0x81F379: mov     esi, eax
0x81F37B: test    esi, esi
0x81F37D: mov     [esp+2Ch+var_14], esi
0x81F381: jz      short loc_81F386
0x81F383: add     [esi+60h], ebx
0x81F386: mov     eax, [esi+18h]
0x81F389: cmp     eax, 2
0x81F38C: jnb     loc_81F459
0x81F392: lea     eax, [esp+2Ch+var_10]
0x81F396: push    eax
0x81F397: call    sub_772630
0x81F39C: add     esp, 4
0x81F39F: mov     eax, [eax]
0x81F3A1: test    eax, eax
0x81F3A3: jz      short loc_81F3AE
0x81F3A5: mov     edi, eax
0x81F3A7: add     [edi+5Ch], ebx
0x81F3AA: mov     [esp+2Ch+var_18], edi
0x81F3AE: mov     eax, [esp+2Ch+var_10]
0x81F3B2: test    eax, eax
0x81F3B4: mov     byte ptr [esp+2Ch+var_4], 1
0x81F3B9: jz      short loc_81F3CE
0x81F3BB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81F3BF: mov     ecx, eax
0x81F3C1: add     eax, 5Ch ; '\'
0x81F3C4: cmp     dword ptr [eax], 0
0x81F3C7: jnz     short loc_81F3CE
0x81F3C9: call    sub_772560
0x81F3CE: push    2
0x81F3D0: push    ebx
0x81F3D1: push    0
0x81F3D3: push    edi
0x81F3D4: call    sub_801110
0x81F3D9: mov     ecx, [esi+14h]
0x81F3DC: add     esp, 10h
0x81F3DF: push    edi; a3
0x81F3E0: push    ecx; a2
0x81F3E1: mov     ecx, esi; this
0x81F3E3: call    sub_760010
0x81F3E8: lea     edx, [esp+2Ch+var_10]
0x81F3EC: push    edx
0x81F3ED: call    sub_772630
0x81F3F2: add     esp, 4
0x81F3F5: mov     ebp, eax
0x81F3F7: cmp     edi, [ebp+0]
0x81F3FA: mov     byte ptr [esp+2Ch+var_4], 3
0x81F3FF: jz      short loc_81F420
0x81F401: test    edi, edi
0x81F403: jz      short loc_81F412
0x81F405: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x81F409: jnz     short loc_81F412
0x81F40B: mov     ecx, edi
0x81F40D: call    sub_772560
0x81F412: mov     edi, [ebp+0]
0x81F415: test    edi, edi
0x81F417: mov     [esp+2Ch+var_18], edi
0x81F41B: jz      short loc_81F420
0x81F41D: add     [edi+5Ch], ebx
0x81F420: mov     eax, [esp+2Ch+var_10]
0x81F424: test    eax, eax
0x81F426: mov     byte ptr [esp+2Ch+var_4], 1
0x81F42B: jz      short loc_81F440
0x81F42D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81F431: mov     ecx, eax
0x81F433: add     eax, 5Ch ; '\'
0x81F436: cmp     dword ptr [eax], 0
0x81F439: jnz     short loc_81F440
0x81F43B: call    sub_772560
0x81F440: push    2
0x81F442: push    ebx
0x81F443: push    ebx
0x81F444: push    edi
0x81F445: call    sub_801110
0x81F44A: mov     eax, [esi+14h]
0x81F44D: add     esp, 10h
0x81F450: push    edi; a3
0x81F451: push    eax; a2
0x81F452: mov     ecx, esi; this
0x81F454: call    sub_760010
0x81F459: mov     eax, ds:0B452F4h
0x81F45E: mov     ebp, [esi+58h]
0x81F461: cmp     ebp, eax
0x81F463: mov     ebx, eax
0x81F465: jz      short loc_81F499
0x81F467: test    ebp, ebp
0x81F469: jz      short loc_81F488
0x81F46B: lea     ecx, [ebp+4]
0x81F46E: push    ecx; lpAddend
0x81F46F: call    dword ptr ds:0A2807Ch
0x81F475: test    eax, eax
0x81F477: jnz     short loc_81F488
0x81F479: test    ebp, ebp
0x81F47B: jz      short loc_81F488
0x81F47D: mov     edx, [ebp+0]
0x81F480: mov     eax, [edx]
0x81F482: push    1
0x81F484: mov     ecx, ebp
0x81F486: call    eax
0x81F488: test    ebx, ebx
0x81F48A: mov     [esi+58h], ebx
0x81F48D: jz      short loc_81F499
0x81F48F: add     ebx, 4
0x81F492: push    ebx; lpAddend
0x81F493: call    dword ptr ds:0A28078h
0x81F499: mov     eax, ds:0B45128h
0x81F49E: mov     ebp, [esi+44h]
0x81F4A1: cmp     ebp, eax
0x81F4A3: mov     ebx, eax
0x81F4A5: jz      short loc_81F4D9
0x81F4A7: test    ebp, ebp
0x81F4A9: jz      short loc_81F4C8
0x81F4AB: lea     ecx, [ebp+4]
0x81F4AE: push    ecx; lpAddend
0x81F4AF: call    dword ptr ds:0A2807Ch
0x81F4B5: test    eax, eax
0x81F4B7: jnz     short loc_81F4C8
0x81F4B9: test    ebp, ebp
0x81F4BB: jz      short loc_81F4C8
0x81F4BD: mov     edx, [ebp+0]
0x81F4C0: mov     eax, [edx]
0x81F4C2: push    1
0x81F4C4: mov     ecx, ebp
0x81F4C6: call    eax
0x81F4C8: test    ebx, ebx
0x81F4CA: mov     [esi+44h], ebx
0x81F4CD: jz      short loc_81F4D9
0x81F4CF: add     ebx, 4
0x81F4D2: push    ebx; lpAddend
0x81F4D3: call    dword ptr ds:0A28078h
0x81F4D9: cmp     dword ptr [esi+30h], 0
0x81F4DD: jnz     short loc_81F4E7
0x81F4DF: call    sub_772DF0
0x81F4E4: mov     [esi+30h], eax
0x81F4E7: mov     ecx, [esi+30h]
0x81F4EA: push    0
0x81F4EC: push    0
0x81F4EE: push    1Bh
0x81F4F0: call    sub_772CD0
0x81F4F5: cmp     dword ptr [esi+30h], 0
0x81F4F9: jnz     short loc_81F503
0x81F4FB: call    sub_772DF0
0x81F500: mov     [esi+30h], eax
0x81F503: mov     ecx, [esi+30h]
0x81F506: push    0
0x81F508: push    0
0x81F50A: push    0Fh
0x81F50C: call    sub_772CD0
0x81F511: cmp     dword ptr [esi+30h], 0
0x81F515: jnz     short loc_81F51F
0x81F517: call    sub_772DF0
0x81F51C: mov     [esi+30h], eax
0x81F51F: mov     ecx, [esi+30h]
0x81F522: push    0
0x81F524: push    1
0x81F526: push    7
0x81F528: call    sub_772CD0
0x81F52D: cmp     dword ptr [esi+30h], 0
0x81F531: jnz     short loc_81F53B
0x81F533: call    sub_772DF0
0x81F538: mov     [esi+30h], eax
0x81F53B: mov     ecx, [esi+30h]
0x81F53E: push    0
0x81F540: push    4
0x81F542: push    17h
0x81F544: call    sub_772CD0
0x81F549: cmp     dword ptr [esi+30h], 0
0x81F54D: jnz     short loc_81F557
0x81F54F: call    sub_772DF0
0x81F554: mov     [esi+30h], eax
0x81F557: mov     ecx, [esi+30h]
0x81F55A: push    0
0x81F55C: push    1
0x81F55E: push    0Eh
0x81F560: call    sub_772CD0
0x81F565: cmp     dword ptr [esi+30h], 0
0x81F569: jnz     short loc_81F573
0x81F56B: call    sub_772DF0
0x81F570: mov     [esi+30h], eax
0x81F573: mov     ecx, [esi+30h]
0x81F576: push    0
0x81F578: push    0
0x81F57A: push    34h ; '4'
0x81F57C: call    sub_772CD0
0x81F581: or      ebx, 0FFFFFFFFh
0x81F584: cmp     esi, ds:0B45B58h
0x81F58A: mov     dword ptr ds:0B43C40h, 82h ; '‚'
0x81F594: mov     dword ptr ds:0B442D0h, 3Ch ; '<'
0x81F59E: mov     dword ptr ds:0B435B0h, 80h ; '€'
0x81F5A8: mov     dword ptr ds:0B44960h, 0Ch
0x81F5B2: jz      short loc_81F5D2
0x81F5B4: add     [esi+60h], ebx
0x81F5B7: jnz     short loc_81F5C0
0x81F5B9: mov     ecx, esi
0x81F5BB: call    sub_7604D0
0x81F5C0: mov     esi, ds:0B45B58h
0x81F5C6: test    esi, esi
0x81F5C8: mov     [esp+2Ch+var_14], esi
0x81F5CC: jz      short loc_81F5D2
0x81F5CE: add     dword ptr [esi+60h], 1
0x81F5D2: mov     eax, [esi+18h]
0x81F5D5: cmp     eax, 2
0x81F5D8: jnb     loc_81F6C2
0x81F5DE: lea     ecx, [esp+2Ch+var_10]
0x81F5E2: push    ecx
0x81F5E3: call    sub_772630
0x81F5E8: add     esp, 4
0x81F5EB: mov     ebp, eax
0x81F5ED: cmp     edi, [ebp+0]
0x81F5F0: mov     byte ptr [esp+2Ch+var_4], 4
0x81F5F5: jz      short loc_81F616
0x81F5F7: test    edi, edi
0x81F5F9: jz      short loc_81F607
0x81F5FB: add     [edi+5Ch], ebx
0x81F5FE: jnz     short loc_81F607
0x81F600: mov     ecx, edi
0x81F602: call    sub_772560
0x81F607: mov     edi, [ebp+0]
0x81F60A: test    edi, edi
0x81F60C: mov     [esp+2Ch+var_18], edi
0x81F610: jz      short loc_81F616
0x81F612: add     dword ptr [edi+5Ch], 1
0x81F616: mov     eax, [esp+2Ch+var_10]
0x81F61A: test    eax, eax
0x81F61C: mov     byte ptr [esp+2Ch+var_4], 1
0x81F621: jz      short loc_81F635
0x81F623: add     [eax+5Ch], ebx
0x81F626: mov     ecx, eax
0x81F628: add     eax, 5Ch ; '\'
0x81F62B: cmp     dword ptr [eax], 0
0x81F62E: jnz     short loc_81F635
0x81F630: call    sub_772560
0x81F635: push    2
0x81F637: push    1
0x81F639: push    0
0x81F63B: push    edi
0x81F63C: call    sub_801110
0x81F641: mov     edx, [esi+14h]
0x81F644: add     esp, 10h
0x81F647: push    edi; a3
0x81F648: push    edx; a2
0x81F649: mov     ecx, esi; this
0x81F64B: call    sub_760010
0x81F650: lea     eax, [esp+2Ch+var_10]
0x81F654: push    eax
0x81F655: call    sub_772630
0x81F65A: add     esp, 4
0x81F65D: mov     ebp, eax
0x81F65F: cmp     edi, [ebp+0]
0x81F662: mov     byte ptr [esp+2Ch+var_4], 5
0x81F667: jz      short loc_81F688
0x81F669: test    edi, edi
0x81F66B: jz      short loc_81F679
0x81F66D: add     [edi+5Ch], ebx
0x81F670: jnz     short loc_81F679
0x81F672: mov     ecx, edi
0x81F674: call    sub_772560
0x81F679: mov     edi, [ebp+0]
0x81F67C: test    edi, edi
0x81F67E: mov     [esp+2Ch+var_18], edi
0x81F682: jz      short loc_81F688
0x81F684: add     dword ptr [edi+5Ch], 1
0x81F688: mov     eax, [esp+2Ch+var_10]
0x81F68C: test    eax, eax
0x81F68E: mov     byte ptr [esp+2Ch+var_4], 1
0x81F693: jz      short loc_81F6A7
0x81F695: add     [eax+5Ch], ebx
0x81F698: mov     ecx, eax
0x81F69A: add     eax, 5Ch ; '\'
0x81F69D: cmp     dword ptr [eax], 0
0x81F6A0: jnz     short loc_81F6A7
0x81F6A2: call    sub_772560
0x81F6A7: push    2
0x81F6A9: push    1
0x81F6AB: push    1
0x81F6AD: push    edi
0x81F6AE: call    sub_801110
0x81F6B3: mov     ecx, [esi+14h]
0x81F6B6: add     esp, 10h
0x81F6B9: push    edi; a3
0x81F6BA: push    ecx; a2
0x81F6BB: mov     ecx, esi; this
0x81F6BD: call    sub_760010
0x81F6C2: mov     eax, ds:0B452F8h
0x81F6C7: mov     ebp, [esi+58h]
0x81F6CA: cmp     ebp, eax
0x81F6CC: mov     ebx, eax
0x81F6CE: jz      short loc_81F702
0x81F6D0: test    ebp, ebp
0x81F6D2: jz      short loc_81F6F1
0x81F6D4: lea     edx, [ebp+4]
0x81F6D7: push    edx; lpAddend
0x81F6D8: call    dword ptr ds:0A2807Ch
0x81F6DE: test    eax, eax
0x81F6E0: jnz     short loc_81F6F1
0x81F6E2: test    ebp, ebp
0x81F6E4: jz      short loc_81F6F1
0x81F6E6: mov     eax, [ebp+0]
0x81F6E9: mov     edx, [eax]
0x81F6EB: push    1
0x81F6ED: mov     ecx, ebp
0x81F6EF: call    edx
0x81F6F1: test    ebx, ebx
0x81F6F3: mov     [esi+58h], ebx
0x81F6F6: jz      short loc_81F702
0x81F6F8: add     ebx, 4
0x81F6FB: push    ebx; lpAddend
0x81F6FC: call    dword ptr ds:0A28078h
0x81F702: mov     eax, ds:0B4512Ch
0x81F707: mov     ebp, [esi+44h]
0x81F70A: cmp     ebp, eax
0x81F70C: mov     ebx, eax
0x81F70E: jz      short loc_81F742
0x81F710: test    ebp, ebp
0x81F712: jz      short loc_81F731
0x81F714: lea     eax, [ebp+4]
0x81F717: push    eax; lpAddend
0x81F718: call    dword ptr ds:0A2807Ch
0x81F71E: test    eax, eax
0x81F720: jnz     short loc_81F731
0x81F722: test    ebp, ebp
0x81F724: jz      short loc_81F731
0x81F726: mov     edx, [ebp+0]
0x81F729: mov     eax, [edx]
0x81F72B: push    1
0x81F72D: mov     ecx, ebp
0x81F72F: call    eax
0x81F731: test    ebx, ebx
0x81F733: mov     [esi+44h], ebx
0x81F736: jz      short loc_81F742
0x81F738: add     ebx, 4
0x81F73B: push    ebx; lpAddend
0x81F73C: call    dword ptr ds:0A28078h
0x81F742: cmp     dword ptr [esi+30h], 0
0x81F746: jnz     short loc_81F750
0x81F748: call    sub_772DF0
0x81F74D: mov     [esi+30h], eax
0x81F750: mov     ecx, [esi+30h]
0x81F753: push    0
0x81F755: push    1
0x81F757: push    1Bh
0x81F759: call    sub_772CD0
0x81F75E: cmp     dword ptr [esi+30h], 0
0x81F762: jnz     short loc_81F76C
0x81F764: call    sub_772DF0
0x81F769: mov     [esi+30h], eax
0x81F76C: mov     ecx, [esi+30h]
0x81F76F: push    0
0x81F771: push    5
0x81F773: push    13h
0x81F775: call    sub_772CD0
0x81F77A: cmp     dword ptr [esi+30h], 0
0x81F77E: jnz     short loc_81F788
0x81F780: call    sub_772DF0
0x81F785: mov     [esi+30h], eax
0x81F788: mov     ecx, [esi+30h]
0x81F78B: push    0
0x81F78D: push    6
0x81F78F: push    14h
0x81F791: call    sub_772CD0
0x81F796: cmp     dword ptr [esi+30h], 0
0x81F79A: jnz     short loc_81F7A4
0x81F79C: call    sub_772DF0
0x81F7A1: mov     [esi+30h], eax
0x81F7A4: mov     ecx, [esi+30h]
0x81F7A7: push    0
0x81F7A9: push    1
0x81F7AB: push    0Fh
0x81F7AD: call    sub_772CD0
0x81F7B2: cmp     dword ptr [esi+30h], 0
0x81F7B6: jnz     short loc_81F7C0
0x81F7B8: call    sub_772DF0
0x81F7BD: mov     [esi+30h], eax
0x81F7C0: mov     ecx, [esi+30h]
0x81F7C3: push    0
0x81F7C5: push    5
0x81F7C7: push    19h
0x81F7C9: call    sub_772CD0
0x81F7CE: cmp     dword ptr [esi+30h], 0
0x81F7D2: jnz     short loc_81F7DC
0x81F7D4: call    sub_772DF0
0x81F7D9: mov     [esi+30h], eax
0x81F7DC: mov     ecx, [esi+30h]
0x81F7DF: push    0
0x81F7E1: push    0
0x81F7E3: push    18h
0x81F7E5: call    sub_772CD0
0x81F7EA: cmp     dword ptr [esi+30h], 0
0x81F7EE: jnz     short loc_81F7F8
0x81F7F0: call    sub_772DF0
0x81F7F5: mov     [esi+30h], eax
0x81F7F8: mov     ecx, [esi+30h]
0x81F7FB: push    0
0x81F7FD: push    1
0x81F7FF: push    7
0x81F801: call    sub_772CD0
0x81F806: cmp     dword ptr [esi+30h], 0
0x81F80A: jnz     short loc_81F814
0x81F80C: call    sub_772DF0
0x81F811: mov     [esi+30h], eax
0x81F814: mov     ecx, [esi+30h]
0x81F817: push    0
0x81F819: push    4
0x81F81B: push    17h
0x81F81D: call    sub_772CD0
0x81F822: cmp     dword ptr [esi+30h], 0
0x81F826: jnz     short loc_81F830
0x81F828: call    sub_772DF0
0x81F82D: mov     [esi+30h], eax
0x81F830: mov     ecx, [esi+30h]
0x81F833: push    0
0x81F835: push    0
0x81F837: push    0Eh
0x81F839: call    sub_772CD0
0x81F83E: cmp     dword ptr [esi+30h], 0
0x81F842: jnz     short loc_81F84C
0x81F844: call    sub_772DF0
0x81F849: mov     [esi+30h], eax
0x81F84C: mov     ecx, [esi+30h]
0x81F84F: push    0
0x81F851: push    0
0x81F853: push    34h ; '4'
0x81F855: call    sub_772CD0
0x81F85A: or      ebx, 0FFFFFFFFh
0x81F85D: cmp     esi, ds:0B45B54h
0x81F863: mov     dword ptr ds:0B440D8h, 82h ; '‚'
0x81F86D: mov     dword ptr ds:0B44768h, 3Ch ; '<'
0x81F877: mov     dword ptr ds:0B43A48h, 80h ; '€'
0x81F881: mov     dword ptr ds:0B44DF8h, 0Ch
0x81F88B: jz      short loc_81F8AB
0x81F88D: add     [esi+60h], ebx
0x81F890: jnz     short loc_81F899
0x81F892: mov     ecx, esi
0x81F894: call    sub_7604D0
0x81F899: mov     esi, ds:0B45B54h
0x81F89F: test    esi, esi
0x81F8A1: mov     [esp+2Ch+var_14], esi
0x81F8A5: jz      short loc_81F8AB
0x81F8A7: add     dword ptr [esi+60h], 1
0x81F8AB: cmp     dword ptr [esi+18h], 2
0x81F8AF: jnb     loc_81F999
0x81F8B5: lea     ecx, [esp+2Ch+var_10]
0x81F8B9: push    ecx
0x81F8BA: call    sub_772630
0x81F8BF: add     esp, 4
0x81F8C2: mov     ebp, eax
0x81F8C4: cmp     edi, [ebp+0]
0x81F8C7: mov     byte ptr [esp+2Ch+var_4], 6
0x81F8CC: jz      short loc_81F8ED
0x81F8CE: test    edi, edi
0x81F8D0: jz      short loc_81F8DE
0x81F8D2: add     [edi+5Ch], ebx
0x81F8D5: jnz     short loc_81F8DE
0x81F8D7: mov     ecx, edi
0x81F8D9: call    sub_772560
0x81F8DE: mov     edi, [ebp+0]
0x81F8E1: test    edi, edi
0x81F8E3: mov     [esp+2Ch+var_18], edi
0x81F8E7: jz      short loc_81F8ED
0x81F8E9: add     dword ptr [edi+5Ch], 1
0x81F8ED: mov     eax, [esp+2Ch+var_10]
0x81F8F1: test    eax, eax
0x81F8F3: mov     byte ptr [esp+2Ch+var_4], 1
0x81F8F8: jz      short loc_81F90C
0x81F8FA: add     [eax+5Ch], ebx
0x81F8FD: mov     ecx, eax
0x81F8FF: add     eax, 5Ch ; '\'
0x81F902: cmp     dword ptr [eax], 0
0x81F905: jnz     short loc_81F90C
0x81F907: call    sub_772560
0x81F90C: push    2
0x81F90E: push    1
0x81F910: push    0
0x81F912: push    edi
0x81F913: call    sub_801110
0x81F918: mov     edx, [esi+14h]
0x81F91B: add     esp, 10h
0x81F91E: push    edi; a3
0x81F91F: push    edx; a2
0x81F920: mov     ecx, esi; this
0x81F922: call    sub_760010
0x81F927: lea     eax, [esp+2Ch+var_10]
0x81F92B: push    eax
0x81F92C: call    sub_772630
0x81F931: add     esp, 4
0x81F934: mov     ebp, eax
0x81F936: cmp     edi, [ebp+0]
0x81F939: mov     byte ptr [esp+2Ch+var_4], 7
0x81F93E: jz      short loc_81F95F
0x81F940: test    edi, edi
0x81F942: jz      short loc_81F950
0x81F944: add     [edi+5Ch], ebx
0x81F947: jnz     short loc_81F950
0x81F949: mov     ecx, edi
0x81F94B: call    sub_772560
0x81F950: mov     edi, [ebp+0]
0x81F953: test    edi, edi
0x81F955: mov     [esp+2Ch+var_18], edi
0x81F959: jz      short loc_81F95F
0x81F95B: add     dword ptr [edi+5Ch], 1
0x81F95F: mov     eax, [esp+2Ch+var_10]
0x81F963: test    eax, eax
0x81F965: mov     byte ptr [esp+2Ch+var_4], 1
0x81F96A: jz      short loc_81F97E
0x81F96C: add     [eax+5Ch], ebx
0x81F96F: mov     ecx, eax
0x81F971: add     eax, 5Ch ; '\'
0x81F974: cmp     dword ptr [eax], 0
0x81F977: jnz     short loc_81F97E
0x81F979: call    sub_772560
0x81F97E: push    2
0x81F980: push    1
0x81F982: push    1
0x81F984: push    edi
0x81F985: call    sub_801110
0x81F98A: mov     ecx, [esi+14h]
0x81F98D: add     esp, 10h
0x81F990: push    edi; a3
0x81F991: push    ecx; a2
0x81F992: mov     ecx, esi; this
0x81F994: call    sub_760010
0x81F999: mov     eax, ds:0B452FCh
0x81F99E: mov     ebp, [esi+58h]
0x81F9A1: cmp     ebp, eax
0x81F9A3: mov     ebx, eax
0x81F9A5: jz      short loc_81F9D9
0x81F9A7: test    ebp, ebp
0x81F9A9: jz      short loc_81F9C8
0x81F9AB: lea     edx, [ebp+4]
0x81F9AE: push    edx; lpAddend
0x81F9AF: call    dword ptr ds:0A2807Ch
0x81F9B5: test    eax, eax
0x81F9B7: jnz     short loc_81F9C8
0x81F9B9: test    ebp, ebp
0x81F9BB: jz      short loc_81F9C8
0x81F9BD: mov     eax, [ebp+0]
0x81F9C0: mov     edx, [eax]
0x81F9C2: push    1
0x81F9C4: mov     ecx, ebp
0x81F9C6: call    edx
0x81F9C8: test    ebx, ebx
0x81F9CA: mov     [esi+58h], ebx
0x81F9CD: jz      short loc_81F9D9
0x81F9CF: add     ebx, 4
0x81F9D2: push    ebx; lpAddend
0x81F9D3: call    dword ptr ds:0A28078h
0x81F9D9: mov     eax, ds:0B45130h
0x81F9DE: mov     ebp, [esi+44h]
0x81F9E1: cmp     ebp, eax
0x81F9E3: mov     ebx, eax
0x81F9E5: jz      short loc_81FA19
0x81F9E7: test    ebp, ebp
0x81F9E9: jz      short loc_81FA08
0x81F9EB: lea     eax, [ebp+4]
0x81F9EE: push    eax; lpAddend
0x81F9EF: call    dword ptr ds:0A2807Ch
0x81F9F5: test    eax, eax
0x81F9F7: jnz     short loc_81FA08
0x81F9F9: test    ebp, ebp
0x81F9FB: jz      short loc_81FA08
0x81F9FD: mov     edx, [ebp+0]
0x81FA00: mov     eax, [edx]
0x81FA02: push    1
0x81FA04: mov     ecx, ebp
0x81FA06: call    eax
0x81FA08: test    ebx, ebx
0x81FA0A: mov     [esi+44h], ebx
0x81FA0D: jz      short loc_81FA19
0x81FA0F: add     ebx, 4
0x81FA12: push    ebx; lpAddend
0x81FA13: call    dword ptr ds:0A28078h
0x81FA19: cmp     dword ptr [esi+30h], 0
0x81FA1D: jnz     short loc_81FA27
0x81FA1F: call    sub_772DF0
0x81FA24: mov     [esi+30h], eax
0x81FA27: mov     ecx, [esi+30h]
0x81FA2A: push    0
0x81FA2C: push    1
0x81FA2E: push    1Bh
0x81FA30: call    sub_772CD0
0x81FA35: cmp     dword ptr [esi+30h], 0
0x81FA39: jnz     short loc_81FA43
0x81FA3B: call    sub_772DF0
0x81FA40: mov     [esi+30h], eax
0x81FA43: mov     ecx, [esi+30h]
0x81FA46: push    0
0x81FA48: push    5
0x81FA4A: push    13h
0x81FA4C: call    sub_772CD0
0x81FA51: cmp     dword ptr [esi+30h], 0
0x81FA55: jnz     short loc_81FA5F
0x81FA57: call    sub_772DF0
0x81FA5C: mov     [esi+30h], eax
0x81FA5F: mov     ecx, [esi+30h]
0x81FA62: push    0
0x81FA64: push    2
0x81FA66: push    14h
0x81FA68: call    sub_772CD0
0x81FA6D: cmp     dword ptr [esi+30h], 0
0x81FA71: jnz     short loc_81FA7B
0x81FA73: call    sub_772DF0
0x81FA78: mov     [esi+30h], eax
0x81FA7B: mov     ecx, [esi+30h]
0x81FA7E: push    0
0x81FA80: push    1
0x81FA82: push    0Fh
0x81FA84: call    sub_772CD0
0x81FA89: cmp     dword ptr [esi+30h], 0
0x81FA8D: jnz     short loc_81FA97
0x81FA8F: call    sub_772DF0
0x81FA94: mov     [esi+30h], eax
0x81FA97: mov     ecx, [esi+30h]
0x81FA9A: push    0
0x81FA9C: push    5
0x81FA9E: push    19h
0x81FAA0: call    sub_772CD0
0x81FAA5: cmp     dword ptr [esi+30h], 0
0x81FAA9: jnz     short loc_81FAB3
0x81FAAB: call    sub_772DF0
0x81FAB0: mov     [esi+30h], eax
0x81FAB3: mov     ecx, [esi+30h]
0x81FAB6: push    0
0x81FAB8: push    0
0x81FABA: push    18h
0x81FABC: call    sub_772CD0
0x81FAC1: cmp     dword ptr [esi+30h], 0
0x81FAC5: jnz     short loc_81FACF
0x81FAC7: call    sub_772DF0
0x81FACC: mov     [esi+30h], eax
0x81FACF: mov     ecx, [esi+30h]
0x81FAD2: push    0
0x81FAD4: push    1
0x81FAD6: push    7
0x81FAD8: call    sub_772CD0
0x81FADD: cmp     dword ptr [esi+30h], 0
0x81FAE1: jnz     short loc_81FAEB
0x81FAE3: call    sub_772DF0
0x81FAE8: mov     [esi+30h], eax
0x81FAEB: mov     ecx, [esi+30h]
0x81FAEE: push    0
0x81FAF0: push    4
0x81FAF2: push    17h
0x81FAF4: call    sub_772CD0
0x81FAF9: cmp     dword ptr [esi+30h], 0
0x81FAFD: jnz     short loc_81FB07
0x81FAFF: call    sub_772DF0
0x81FB04: mov     [esi+30h], eax
0x81FB07: mov     ecx, [esi+30h]
0x81FB0A: push    0
0x81FB0C: push    0
0x81FB0E: push    0Eh
0x81FB10: call    sub_772CD0
0x81FB15: cmp     dword ptr [esi+30h], 0
0x81FB19: jnz     short loc_81FB23
0x81FB1B: call    sub_772DF0
0x81FB20: mov     [esi+30h], eax
0x81FB23: mov     ecx, [esi+30h]
0x81FB26: push    0
0x81FB28: push    0
0x81FB2A: push    34h ; '4'
0x81FB2C: call    sub_772CD0
0x81FB31: or      ebx, 0FFFFFFFFh
0x81FB34: cmp     esi, ds:0B45B60h
0x81FB3A: mov     dword ptr ds:0B440D4h, 2
0x81FB44: mov     dword ptr ds:0B44764h, 30h ; '0'
0x81FB4E: jz      short loc_81FB6E
0x81FB50: add     [esi+60h], ebx
0x81FB53: jnz     short loc_81FB5C
0x81FB55: mov     ecx, esi
0x81FB57: call    sub_7604D0
0x81FB5C: mov     esi, ds:0B45B60h
0x81FB62: test    esi, esi
0x81FB64: mov     [esp+2Ch+var_14], esi
0x81FB68: jz      short loc_81FB6E
0x81FB6A: add     dword ptr [esi+60h], 1
0x81FB6E: mov     eax, [esi+18h]
0x81FB71: cmp     eax, 2
0x81FB74: jnb     loc_81FC5E
0x81FB7A: lea     ecx, [esp+2Ch+var_10]
0x81FB7E: push    ecx
0x81FB7F: call    sub_772630
0x81FB84: add     esp, 4
0x81FB87: mov     ebp, eax
0x81FB89: cmp     edi, [ebp+0]
0x81FB8C: mov     byte ptr [esp+2Ch+var_4], 8
0x81FB91: jz      short loc_81FBB2
0x81FB93: test    edi, edi
0x81FB95: jz      short loc_81FBA3
0x81FB97: add     [edi+5Ch], ebx
0x81FB9A: jnz     short loc_81FBA3
0x81FB9C: mov     ecx, edi
0x81FB9E: call    sub_772560
0x81FBA3: mov     edi, [ebp+0]
0x81FBA6: test    edi, edi
0x81FBA8: mov     [esp+2Ch+var_18], edi
0x81FBAC: jz      short loc_81FBB2
0x81FBAE: add     dword ptr [edi+5Ch], 1
0x81FBB2: mov     eax, [esp+2Ch+var_10]
0x81FBB6: test    eax, eax
0x81FBB8: mov     byte ptr [esp+2Ch+var_4], 1
0x81FBBD: jz      short loc_81FBD1
0x81FBBF: add     [eax+5Ch], ebx
0x81FBC2: mov     ecx, eax
0x81FBC4: add     eax, 5Ch ; '\'
0x81FBC7: cmp     dword ptr [eax], 0
0x81FBCA: jnz     short loc_81FBD1
0x81FBCC: call    sub_772560
0x81FBD1: push    2
0x81FBD3: push    1
0x81FBD5: push    0
0x81FBD7: push    edi
0x81FBD8: call    sub_801110
0x81FBDD: mov     edx, [esi+14h]
0x81FBE0: add     esp, 10h
0x81FBE3: push    edi; a3
0x81FBE4: push    edx; a2
0x81FBE5: mov     ecx, esi; this
0x81FBE7: call    sub_760010
0x81FBEC: lea     eax, [esp+2Ch+var_10]
0x81FBF0: push    eax
0x81FBF1: call    sub_772630
0x81FBF6: add     esp, 4
0x81FBF9: mov     ebp, eax
0x81FBFB: cmp     edi, [ebp+0]
0x81FBFE: mov     byte ptr [esp+2Ch+var_4], 9
0x81FC03: jz      short loc_81FC24
0x81FC05: test    edi, edi
0x81FC07: jz      short loc_81FC15
0x81FC09: add     [edi+5Ch], ebx
0x81FC0C: jnz     short loc_81FC15
0x81FC0E: mov     ecx, edi
0x81FC10: call    sub_772560
0x81FC15: mov     edi, [ebp+0]
0x81FC18: test    edi, edi
0x81FC1A: mov     [esp+2Ch+var_18], edi
0x81FC1E: jz      short loc_81FC24
0x81FC20: add     dword ptr [edi+5Ch], 1
0x81FC24: mov     eax, [esp+2Ch+var_10]
0x81FC28: test    eax, eax
0x81FC2A: mov     byte ptr [esp+2Ch+var_4], 1
0x81FC2F: jz      short loc_81FC43
0x81FC31: add     [eax+5Ch], ebx
0x81FC34: mov     ecx, eax
0x81FC36: add     eax, 5Ch ; '\'
0x81FC39: cmp     dword ptr [eax], 0
0x81FC3C: jnz     short loc_81FC43
0x81FC3E: call    sub_772560
0x81FC43: push    2
0x81FC45: push    1
0x81FC47: push    1
0x81FC49: push    edi
0x81FC4A: call    sub_801110
0x81FC4F: mov     ecx, [esi+14h]
0x81FC52: add     esp, 10h
0x81FC55: push    edi; a3
0x81FC56: push    ecx; a2
0x81FC57: mov     ecx, esi; this
0x81FC59: call    sub_760010
0x81FC5E: mov     eax, ds:0B452FCh
0x81FC63: mov     ebp, [esi+58h]
0x81FC66: cmp     ebp, eax
0x81FC68: mov     ebx, eax
0x81FC6A: jz      short loc_81FC9E
0x81FC6C: test    ebp, ebp
0x81FC6E: jz      short loc_81FC8D
0x81FC70: lea     edx, [ebp+4]
0x81FC73: push    edx; lpAddend
0x81FC74: call    dword ptr ds:0A2807Ch
0x81FC7A: test    eax, eax
0x81FC7C: jnz     short loc_81FC8D
0x81FC7E: test    ebp, ebp
0x81FC80: jz      short loc_81FC8D
0x81FC82: mov     eax, [ebp+0]
0x81FC85: mov     edx, [eax]
0x81FC87: push    1
0x81FC89: mov     ecx, ebp
0x81FC8B: call    edx
0x81FC8D: test    ebx, ebx
0x81FC8F: mov     [esi+58h], ebx
0x81FC92: jz      short loc_81FC9E
0x81FC94: add     ebx, 4
0x81FC97: push    ebx; lpAddend
0x81FC98: call    dword ptr ds:0A28078h
0x81FC9E: mov     eax, ds:0B45134h
0x81FCA3: mov     ebp, [esi+44h]
0x81FCA6: cmp     ebp, eax
0x81FCA8: mov     ebx, eax
0x81FCAA: jz      short loc_81FCDE
0x81FCAC: test    ebp, ebp
0x81FCAE: jz      short loc_81FCCD
0x81FCB0: lea     eax, [ebp+4]
0x81FCB3: push    eax; lpAddend
0x81FCB4: call    dword ptr ds:0A2807Ch
0x81FCBA: test    eax, eax
0x81FCBC: jnz     short loc_81FCCD
0x81FCBE: test    ebp, ebp
0x81FCC0: jz      short loc_81FCCD
0x81FCC2: mov     edx, [ebp+0]
0x81FCC5: mov     eax, [edx]
0x81FCC7: push    1
0x81FCC9: mov     ecx, ebp
0x81FCCB: call    eax
0x81FCCD: test    ebx, ebx
0x81FCCF: mov     [esi+44h], ebx
0x81FCD2: jz      short loc_81FCDE
0x81FCD4: add     ebx, 4
0x81FCD7: push    ebx; lpAddend
0x81FCD8: call    dword ptr ds:0A28078h
0x81FCDE: cmp     dword ptr [esi+30h], 0
0x81FCE2: jnz     short loc_81FCEC
0x81FCE4: call    sub_772DF0
0x81FCE9: mov     [esi+30h], eax
0x81FCEC: mov     ecx, [esi+30h]
0x81FCEF: push    0
0x81FCF1: push    1
0x81FCF3: push    1Bh
0x81FCF5: call    sub_772CD0
0x81FCFA: cmp     dword ptr [esi+30h], 0
0x81FCFE: jnz     short loc_81FD08
0x81FD00: call    sub_772DF0
0x81FD05: mov     [esi+30h], eax
0x81FD08: mov     ecx, [esi+30h]
0x81FD0B: push    0
0x81FD0D: push    5
0x81FD0F: push    13h
0x81FD11: call    sub_772CD0
0x81FD16: cmp     dword ptr [esi+30h], 0
0x81FD1A: jnz     short loc_81FD24
0x81FD1C: call    sub_772DF0
0x81FD21: mov     [esi+30h], eax
0x81FD24: mov     ecx, [esi+30h]
0x81FD27: push    0
0x81FD29: mov     ebp, 2
0x81FD2E: push    ebp
0x81FD2F: push    14h
0x81FD31: call    sub_772CD0
0x81FD36: cmp     dword ptr [esi+30h], 0
0x81FD3A: jnz     short loc_81FD44
0x81FD3C: call    sub_772DF0
0x81FD41: mov     [esi+30h], eax
0x81FD44: mov     ecx, [esi+30h]
0x81FD47: push    0
0x81FD49: push    1
0x81FD4B: push    0Fh
0x81FD4D: call    sub_772CD0
0x81FD52: cmp     dword ptr [esi+30h], 0
0x81FD56: jnz     short loc_81FD60
0x81FD58: call    sub_772DF0
0x81FD5D: mov     [esi+30h], eax
0x81FD60: mov     ecx, [esi+30h]
0x81FD63: push    0
0x81FD65: push    5
0x81FD67: push    19h
0x81FD69: call    sub_772CD0
0x81FD6E: cmp     dword ptr [esi+30h], 0
0x81FD72: jnz     short loc_81FD7C
0x81FD74: call    sub_772DF0
0x81FD79: mov     [esi+30h], eax
0x81FD7C: mov     ecx, [esi+30h]
0x81FD7F: push    0
0x81FD81: push    0
0x81FD83: push    18h
0x81FD85: call    sub_772CD0
0x81FD8A: cmp     dword ptr [esi+30h], 0
0x81FD8E: jnz     short loc_81FD98
0x81FD90: call    sub_772DF0
0x81FD95: mov     [esi+30h], eax
0x81FD98: mov     ecx, [esi+30h]
0x81FD9B: push    0
0x81FD9D: push    1
0x81FD9F: push    7
0x81FDA1: call    sub_772CD0
0x81FDA6: cmp     dword ptr [esi+30h], 0
0x81FDAA: jnz     short loc_81FDB4
0x81FDAC: call    sub_772DF0
0x81FDB1: mov     [esi+30h], eax
0x81FDB4: mov     ecx, [esi+30h]
0x81FDB7: push    0
0x81FDB9: push    4
0x81FDBB: push    17h
0x81FDBD: call    sub_772CD0
0x81FDC2: cmp     dword ptr [esi+30h], 0
0x81FDC6: jnz     short loc_81FDD0
0x81FDC8: call    sub_772DF0
0x81FDCD: mov     [esi+30h], eax
0x81FDD0: mov     ecx, [esi+30h]
0x81FDD3: push    0
0x81FDD5: push    0
0x81FDD7: push    0Eh
0x81FDD9: call    sub_772CD0
0x81FDDE: cmp     dword ptr [esi+30h], 0
0x81FDE2: jnz     short loc_81FDEC
0x81FDE4: call    sub_772DF0
0x81FDE9: mov     [esi+30h], eax
0x81FDEC: mov     ecx, [esi+30h]
0x81FDEF: push    0
0x81FDF1: push    0
0x81FDF3: push    34h ; '4'
0x81FDF5: call    sub_772CD0
0x81FDFA: or      ebx, 0FFFFFFFFh
0x81FDFD: cmp     esi, ds:0B45B40h
0x81FE03: mov     ds:0B440E0h, ebp
0x81FE09: mov     dword ptr ds:0B44770h, 30h ; '0'
0x81FE13: jz      short loc_81FE33
0x81FE15: add     [esi+60h], ebx
0x81FE18: jnz     short loc_81FE21
0x81FE1A: mov     ecx, esi
0x81FE1C: call    sub_7604D0
0x81FE21: mov     esi, ds:0B45B40h
0x81FE27: test    esi, esi
0x81FE29: mov     [esp+2Ch+var_14], esi
0x81FE2D: jz      short loc_81FE33
0x81FE2F: add     dword ptr [esi+60h], 1
0x81FE33: cmp     [esi+18h], ebp
0x81FE36: jnb     loc_81FF20
0x81FE3C: lea     ecx, [esp+2Ch+var_10]
0x81FE40: push    ecx
0x81FE41: call    sub_772630
0x81FE46: add     esp, 4
0x81FE49: mov     ebp, eax
0x81FE4B: cmp     edi, [ebp+0]
0x81FE4E: mov     byte ptr [esp+2Ch+var_4], 0Ah
0x81FE53: jz      short loc_81FE74
0x81FE55: test    edi, edi
0x81FE57: jz      short loc_81FE65
0x81FE59: add     [edi+5Ch], ebx
0x81FE5C: jnz     short loc_81FE65
0x81FE5E: mov     ecx, edi
0x81FE60: call    sub_772560
0x81FE65: mov     edi, [ebp+0]
0x81FE68: test    edi, edi
0x81FE6A: mov     [esp+2Ch+var_18], edi
0x81FE6E: jz      short loc_81FE74
0x81FE70: add     dword ptr [edi+5Ch], 1
0x81FE74: mov     eax, [esp+2Ch+var_10]
0x81FE78: test    eax, eax
0x81FE7A: mov     byte ptr [esp+2Ch+var_4], 1
0x81FE7F: jz      short loc_81FE93
0x81FE81: add     [eax+5Ch], ebx
0x81FE84: mov     ecx, eax
0x81FE86: add     eax, 5Ch ; '\'
0x81FE89: cmp     dword ptr [eax], 0
0x81FE8C: jnz     short loc_81FE93
0x81FE8E: call    sub_772560
0x81FE93: push    2
0x81FE95: push    1
0x81FE97: push    0
0x81FE99: push    edi
0x81FE9A: call    sub_801110
0x81FE9F: mov     edx, [esi+14h]
0x81FEA2: add     esp, 10h
0x81FEA5: push    edi; a3
0x81FEA6: push    edx; a2
0x81FEA7: mov     ecx, esi; this
0x81FEA9: call    sub_760010
0x81FEAE: lea     eax, [esp+2Ch+var_10]
0x81FEB2: push    eax
0x81FEB3: call    sub_772630
0x81FEB8: add     esp, 4
0x81FEBB: mov     ebp, eax
0x81FEBD: cmp     edi, [ebp+0]
0x81FEC0: mov     byte ptr [esp+2Ch+var_4], 0Bh
0x81FEC5: jz      short loc_81FEE6
0x81FEC7: test    edi, edi
0x81FEC9: jz      short loc_81FED7
0x81FECB: add     [edi+5Ch], ebx
0x81FECE: jnz     short loc_81FED7
0x81FED0: mov     ecx, edi
0x81FED2: call    sub_772560
0x81FED7: mov     edi, [ebp+0]
0x81FEDA: test    edi, edi
0x81FEDC: mov     [esp+2Ch+var_18], edi
0x81FEE0: jz      short loc_81FEE6
0x81FEE2: add     dword ptr [edi+5Ch], 1
0x81FEE6: mov     eax, [esp+2Ch+var_10]
0x81FEEA: test    eax, eax
0x81FEEC: mov     byte ptr [esp+2Ch+var_4], 1
0x81FEF1: jz      short loc_81FF05
0x81FEF3: add     [eax+5Ch], ebx
0x81FEF6: mov     ecx, eax
0x81FEF8: add     eax, 5Ch ; '\'
0x81FEFB: cmp     dword ptr [eax], 0
0x81FEFE: jnz     short loc_81FF05
0x81FF00: call    sub_772560
0x81FF05: push    2
0x81FF07: push    1
0x81FF09: push    1
0x81FF0B: push    edi
0x81FF0C: call    sub_801110
0x81FF11: mov     ecx, [esi+14h]
0x81FF14: add     esp, 10h
0x81FF17: push    edi; a3
0x81FF18: push    ecx; a2
0x81FF19: mov     ecx, esi; this
0x81FF1B: call    sub_760010
0x81FF20: mov     eax, ds:0B45300h
0x81FF25: mov     ebp, [esi+58h]
0x81FF28: cmp     ebp, eax
0x81FF2A: mov     ebx, eax
0x81FF2C: jz      short loc_81FF60
0x81FF2E: test    ebp, ebp
0x81FF30: jz      short loc_81FF4F
0x81FF32: lea     edx, [ebp+4]
0x81FF35: push    edx; lpAddend
0x81FF36: call    dword ptr ds:0A2807Ch
0x81FF3C: test    eax, eax
0x81FF3E: jnz     short loc_81FF4F
0x81FF40: test    ebp, ebp
0x81FF42: jz      short loc_81FF4F
0x81FF44: mov     eax, [ebp+0]
0x81FF47: mov     edx, [eax]
0x81FF49: push    1
0x81FF4B: mov     ecx, ebp
0x81FF4D: call    edx
0x81FF4F: test    ebx, ebx
0x81FF51: mov     [esi+58h], ebx
0x81FF54: jz      short loc_81FF60
0x81FF56: add     ebx, 4
0x81FF59: push    ebx; lpAddend
0x81FF5A: call    dword ptr ds:0A28078h
0x81FF60: mov     eax, ds:0B45138h
0x81FF65: mov     ebp, [esi+44h]
0x81FF68: cmp     ebp, eax
0x81FF6A: mov     ebx, eax
0x81FF6C: jz      short loc_81FFA0
0x81FF6E: test    ebp, ebp
0x81FF70: jz      short loc_81FF8F
0x81FF72: lea     eax, [ebp+4]
0x81FF75: push    eax; lpAddend
0x81FF76: call    dword ptr ds:0A2807Ch
0x81FF7C: test    eax, eax
0x81FF7E: jnz     short loc_81FF8F
0x81FF80: test    ebp, ebp
0x81FF82: jz      short loc_81FF8F
0x81FF84: mov     edx, [ebp+0]
0x81FF87: mov     eax, [edx]
0x81FF89: push    1
0x81FF8B: mov     ecx, ebp
0x81FF8D: call    eax
0x81FF8F: test    ebx, ebx
0x81FF91: mov     [esi+44h], ebx
0x81FF94: jz      short loc_81FFA0
0x81FF96: add     ebx, 4
0x81FF99: push    ebx; lpAddend
0x81FF9A: call    dword ptr ds:0A28078h
0x81FFA0: cmp     dword ptr [esi+30h], 0
0x81FFA4: jnz     short loc_81FFAE
0x81FFA6: call    sub_772DF0
0x81FFAB: mov     [esi+30h], eax
0x81FFAE: mov     ecx, [esi+30h]
0x81FFB1: push    0
0x81FFB3: push    1
0x81FFB5: push    1Bh
0x81FFB7: call    sub_772CD0
0x81FFBC: cmp     dword ptr [esi+30h], 0
0x81FFC0: jnz     short loc_81FFCA
0x81FFC2: call    sub_772DF0
0x81FFC7: mov     [esi+30h], eax
0x81FFCA: mov     ecx, [esi+30h]
0x81FFCD: push    0
0x81FFCF: push    5
0x81FFD1: push    13h
0x81FFD3: call    sub_772CD0
0x81FFD8: cmp     dword ptr [esi+30h], 0
0x81FFDC: jnz     short loc_81FFE6
0x81FFDE: call    sub_772DF0
0x81FFE3: mov     [esi+30h], eax
0x81FFE6: mov     ecx, [esi+30h]
0x81FFE9: push    0
0x81FFEB: push    2
0x81FFED: push    14h
0x81FFEF: call    sub_772CD0
0x81FFF4: cmp     dword ptr [esi+30h], 0
0x81FFF8: jnz     short loc_820002
0x81FFFA: call    sub_772DF0
0x81FFFF: mov     [esi+30h], eax
0x820002: mov     ecx, [esi+30h]
0x820005: push    0
0x820007: push    1
0x820009: push    0Fh
0x82000B: call    sub_772CD0
0x820010: cmp     dword ptr [esi+30h], 0
0x820014: jnz     short loc_82001E
0x820016: call    sub_772DF0
0x82001B: mov     [esi+30h], eax
0x82001E: mov     ecx, [esi+30h]
0x820021: push    0
0x820023: push    5
0x820025: push    19h
0x820027: call    sub_772CD0
0x82002C: cmp     dword ptr [esi+30h], 0
0x820030: jnz     short loc_82003A
0x820032: call    sub_772DF0
0x820037: mov     [esi+30h], eax
0x82003A: mov     ecx, [esi+30h]
0x82003D: push    0
0x82003F: push    0
0x820041: push    18h
0x820043: call    sub_772CD0
0x820048: cmp     dword ptr [esi+30h], 0
0x82004C: jnz     short loc_820056
0x82004E: call    sub_772DF0
0x820053: mov     [esi+30h], eax
0x820056: mov     ecx, [esi+30h]
0x820059: push    0
0x82005B: push    1
0x82005D: push    7
0x82005F: call    sub_772CD0
0x820064: cmp     dword ptr [esi+30h], 0
0x820068: jnz     short loc_820072
0x82006A: call    sub_772DF0
0x82006F: mov     [esi+30h], eax
0x820072: mov     ecx, [esi+30h]
0x820075: push    0
0x820077: push    4
0x820079: push    17h
0x82007B: call    sub_772CD0
0x820080: cmp     dword ptr [esi+30h], 0
0x820084: jnz     short loc_82008E
0x820086: call    sub_772DF0
0x82008B: mov     [esi+30h], eax
0x82008E: mov     ecx, [esi+30h]
0x820091: push    0
0x820093: push    0
0x820095: push    0Eh
0x820097: call    sub_772CD0
0x82009C: cmp     dword ptr [esi+30h], 0
0x8200A0: jnz     short loc_8200AA
0x8200A2: call    sub_772DF0
0x8200A7: mov     [esi+30h], eax
0x8200AA: mov     ecx, [esi+30h]
0x8200AD: push    0
0x8200AF: push    0
0x8200B1: push    34h ; '4'
0x8200B3: call    sub_772CD0
0x8200B8: or      ebx, 0FFFFFFFFh
0x8200BB: cmp     esi, ds:0B45B64h
0x8200C1: mov     dword ptr ds:0B440C0h, 802h
0x8200CB: mov     dword ptr ds:0B44750h, 8
0x8200D5: jz      short loc_8200F5
0x8200D7: add     [esi+60h], ebx
0x8200DA: jnz     short loc_8200E3
0x8200DC: mov     ecx, esi
0x8200DE: call    sub_7604D0
0x8200E3: mov     esi, ds:0B45B64h
0x8200E9: test    esi, esi
0x8200EB: mov     [esp+2Ch+var_14], esi
0x8200EF: jz      short loc_8200F5
0x8200F1: add     dword ptr [esi+60h], 1
0x8200F5: cmp     dword ptr [esi+18h], 2
0x8200F9: jnb     loc_8201E3
0x8200FF: lea     ecx, [esp+2Ch+var_10]
0x820103: push    ecx
0x820104: call    sub_772630
0x820109: add     esp, 4
0x82010C: mov     ebp, eax
0x82010E: cmp     edi, [ebp+0]
0x820111: mov     byte ptr [esp+2Ch+var_4], 0Ch
0x820116: jz      short loc_820137
0x820118: test    edi, edi
0x82011A: jz      short loc_820128
0x82011C: add     [edi+5Ch], ebx
0x82011F: jnz     short loc_820128
0x820121: mov     ecx, edi
0x820123: call    sub_772560
0x820128: mov     edi, [ebp+0]
0x82012B: test    edi, edi
0x82012D: mov     [esp+2Ch+var_18], edi
0x820131: jz      short loc_820137
0x820133: add     dword ptr [edi+5Ch], 1
0x820137: mov     eax, [esp+2Ch+var_10]
0x82013B: test    eax, eax
0x82013D: mov     byte ptr [esp+2Ch+var_4], 1
0x820142: jz      short loc_820156
0x820144: add     [eax+5Ch], ebx
0x820147: mov     ecx, eax
0x820149: add     eax, 5Ch ; '\'
0x82014C: cmp     dword ptr [eax], 0
0x82014F: jnz     short loc_820156
0x820151: call    sub_772560
0x820156: push    2
0x820158: push    1
0x82015A: push    0
0x82015C: push    edi
0x82015D: call    sub_801110
0x820162: mov     edx, [esi+14h]
0x820165: add     esp, 10h
0x820168: push    edi; a3
0x820169: push    edx; a2
0x82016A: mov     ecx, esi; this
0x82016C: call    sub_760010
0x820171: lea     eax, [esp+2Ch+var_10]
0x820175: push    eax
0x820176: call    sub_772630
0x82017B: add     esp, 4
0x82017E: mov     ebp, eax
0x820180: cmp     edi, [ebp+0]
0x820183: mov     byte ptr [esp+2Ch+var_4], 0Dh
0x820188: jz      short loc_8201A9
0x82018A: test    edi, edi
0x82018C: jz      short loc_82019A
0x82018E: add     [edi+5Ch], ebx
0x820191: jnz     short loc_82019A
0x820193: mov     ecx, edi
0x820195: call    sub_772560
0x82019A: mov     edi, [ebp+0]
0x82019D: test    edi, edi
0x82019F: mov     [esp+2Ch+var_18], edi
0x8201A3: jz      short loc_8201A9
0x8201A5: add     dword ptr [edi+5Ch], 1
0x8201A9: mov     eax, [esp+2Ch+var_10]
0x8201AD: test    eax, eax
0x8201AF: mov     byte ptr [esp+2Ch+var_4], 1
0x8201B4: jz      short loc_8201C8
0x8201B6: add     [eax+5Ch], ebx
0x8201B9: mov     ecx, eax
0x8201BB: add     eax, 5Ch ; '\'
0x8201BE: cmp     dword ptr [eax], 0
0x8201C1: jnz     short loc_8201C8
0x8201C3: call    sub_772560
0x8201C8: push    2
0x8201CA: push    1
0x8201CC: push    1
0x8201CE: push    edi
0x8201CF: call    sub_801110
0x8201D4: mov     ecx, [esi+14h]
0x8201D7: add     esp, 10h
0x8201DA: push    edi; a3
0x8201DB: push    ecx; a2
0x8201DC: mov     ecx, esi; this
0x8201DE: call    sub_760010
0x8201E3: mov     eax, ds:0B45304h
0x8201E8: mov     ebp, [esi+58h]
0x8201EB: cmp     ebp, eax
0x8201ED: mov     ebx, eax
0x8201EF: jz      short loc_820223
0x8201F1: test    ebp, ebp
0x8201F3: jz      short loc_820212
0x8201F5: lea     edx, [ebp+4]
0x8201F8: push    edx; lpAddend
0x8201F9: call    dword ptr ds:0A2807Ch
0x8201FF: test    eax, eax
0x820201: jnz     short loc_820212
0x820203: test    ebp, ebp
0x820205: jz      short loc_820212
0x820207: mov     eax, [ebp+0]
0x82020A: mov     edx, [eax]
0x82020C: push    1
0x82020E: mov     ecx, ebp
0x820210: call    edx
0x820212: test    ebx, ebx
0x820214: mov     [esi+58h], ebx
0x820217: jz      short loc_820223
0x820219: add     ebx, 4
0x82021C: push    ebx; lpAddend
0x82021D: call    dword ptr ds:0A28078h
0x820223: mov     eax, ds:0B4513Ch
0x820228: mov     ebp, [esi+44h]
0x82022B: cmp     ebp, eax
0x82022D: mov     ebx, eax
0x82022F: jz      short loc_820263
0x820231: test    ebp, ebp
0x820233: jz      short loc_820252
0x820235: lea     eax, [ebp+4]
0x820238: push    eax; lpAddend
0x820239: call    dword ptr ds:0A2807Ch
0x82023F: test    eax, eax
0x820241: jnz     short loc_820252
0x820243: test    ebp, ebp
0x820245: jz      short loc_820252
0x820247: mov     edx, [ebp+0]
0x82024A: mov     eax, [edx]
0x82024C: push    1
0x82024E: mov     ecx, ebp
0x820250: call    eax
0x820252: test    ebx, ebx
0x820254: mov     [esi+44h], ebx
0x820257: jz      short loc_820263
0x820259: add     ebx, 4
0x82025C: push    ebx; lpAddend
0x82025D: call    dword ptr ds:0A28078h
0x820263: cmp     dword ptr [esi+30h], 0
0x820267: jnz     short loc_820271
0x820269: call    sub_772DF0
0x82026E: mov     [esi+30h], eax
0x820271: mov     ecx, [esi+30h]
0x820274: push    0
0x820276: push    1
0x820278: push    1Bh
0x82027A: call    sub_772CD0
0x82027F: cmp     dword ptr [esi+30h], 0
0x820283: jnz     short loc_82028D
0x820285: call    sub_772DF0
0x82028A: mov     [esi+30h], eax
0x82028D: mov     ecx, [esi+30h]
0x820290: push    0
0x820292: push    5
0x820294: push    13h
0x820296: call    sub_772CD0
0x82029B: cmp     dword ptr [esi+30h], 0
0x82029F: jnz     short loc_8202A9
0x8202A1: call    sub_772DF0
0x8202A6: mov     [esi+30h], eax
0x8202A9: mov     ecx, [esi+30h]
0x8202AC: push    0
0x8202AE: push    2
0x8202B0: push    14h
0x8202B2: call    sub_772CD0
0x8202B7: cmp     dword ptr [esi+30h], 0
0x8202BB: jnz     short loc_8202C5
0x8202BD: call    sub_772DF0
0x8202C2: mov     [esi+30h], eax
0x8202C5: mov     ecx, [esi+30h]
0x8202C8: push    0
0x8202CA: push    1
0x8202CC: push    0Fh
0x8202CE: call    sub_772CD0
0x8202D3: cmp     dword ptr [esi+30h], 0
0x8202D7: jnz     short loc_8202E1
0x8202D9: call    sub_772DF0
0x8202DE: mov     [esi+30h], eax
0x8202E1: mov     ecx, [esi+30h]
0x8202E4: push    0
0x8202E6: push    5
0x8202E8: push    19h
0x8202EA: call    sub_772CD0
0x8202EF: cmp     dword ptr [esi+30h], 0
0x8202F3: jnz     short loc_8202FD
0x8202F5: call    sub_772DF0
0x8202FA: mov     [esi+30h], eax
0x8202FD: mov     ecx, [esi+30h]
0x820300: push    0
0x820302: push    0
0x820304: push    18h
0x820306: call    sub_772CD0
0x82030B: cmp     dword ptr [esi+30h], 0
0x82030F: jnz     short loc_820319
0x820311: call    sub_772DF0
0x820316: mov     [esi+30h], eax
0x820319: mov     ecx, [esi+30h]
0x82031C: push    0
0x82031E: push    1
0x820320: push    7
0x820322: call    sub_772CD0
0x820327: cmp     dword ptr [esi+30h], 0
0x82032B: jnz     short loc_820335
0x82032D: call    sub_772DF0
0x820332: mov     [esi+30h], eax
0x820335: mov     ecx, [esi+30h]
0x820338: push    0
0x82033A: push    4
0x82033C: push    17h
0x82033E: call    sub_772CD0
0x820343: cmp     dword ptr [esi+30h], 0
0x820347: jnz     short loc_820351
0x820349: call    sub_772DF0
0x82034E: mov     [esi+30h], eax
0x820351: mov     ecx, [esi+30h]
0x820354: push    0
0x820356: push    0
0x820358: push    0Eh
0x82035A: call    sub_772CD0
0x82035F: cmp     dword ptr [esi+30h], 0
0x820363: jnz     short loc_82036D
0x820365: call    sub_772DF0
0x82036A: mov     [esi+30h], eax
0x82036D: mov     ecx, [esi+30h]
0x820370: push    0
0x820372: push    0
0x820374: push    34h ; '4'
0x820376: call    sub_772CD0
0x82037B: or      ebx, 0FFFFFFFFh
0x82037E: test    edi, edi
0x820380: mov     dword ptr ds:0B440E4h, 802h
0x82038A: mov     dword ptr ds:0B44774h, 38h ; '8'
0x820394: mov     byte ptr [esp+2Ch+var_4], 0
0x820399: jz      short loc_8203A7
0x82039B: add     [edi+5Ch], ebx
0x82039E: jnz     short loc_8203A7
0x8203A0: mov     ecx, edi
0x8203A2: call    sub_772560
0x8203A7: add     [esi+60h], ebx
0x8203AA: mov     [esp+2Ch+var_4], ebx
0x8203AE: jnz     short loc_8203B7
0x8203B0: mov     ecx, esi
0x8203B2: call    sub_7604D0
0x8203B7: mov     ecx, dword ptr [esp+2Ch+var_C]
0x8203BB: mov     large fs:0, ecx
0x8203C2: pop     ecx
0x8203C3: pop     edi
0x8203C4: pop     esi
0x8203C5: pop     ebp
0x8203C6: pop     ebx
0x8203C7: add     esp, 18h
0x8203CA: retn
