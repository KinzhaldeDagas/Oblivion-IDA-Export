0x846570: push    0FFFFFFFFh
0x846572: push    offset SEH_8479E0
0x846577: mov     eax, large fs:0
0x84657D: push    eax
0x84657E: sub     esp, 20h
0x846581: push    ebx
0x846582: push    ebp
0x846583: push    esi
0x846584: push    edi
0x846585: mov     eax, ds:0B30AACh
0x84658A: xor     eax, esp
0x84658C: push    eax
0x84658D: lea     eax, [esp+40h+var_C]
0x846591: mov     large fs:0, eax
0x846597: mov     [esp+40h+var_2C], ecx
0x84659B: mov     eax, ds:0B42EB8h
0x8465A0: movzx   eax, byte ptr [eax+9]
0x8465A4: mov     edi, ds:0B45B5Ch
0x8465AA: mov     ecx, [edi+24h]
0x8465AD: mov     esi, [esp+40h+arg_C]
0x8465B1: mov     edx, [esi]
0x8465B3: mov     ebp, [ecx]
0x8465B5: mov     [esp+40h+var_28], eax
0x8465B9: push    eax
0x8465BA: mov     eax, [edx+88h]
0x8465C0: mov     ecx, esi
0x8465C2: call    eax
0x8465C4: mov     ebx, [ebp+4]
0x8465C7: cmp     ebx, eax
0x8465C9: mov     [esp+40h+arg_C], eax
0x8465CD: jz      short loc_846604
0x8465CF: test    ebx, ebx
0x8465D1: jz      short loc_8465F3
0x8465D3: lea     ecx, [ebx+4]
0x8465D6: push    ecx; lpAddend
0x8465D7: call    dword ptr ds:0A2807Ch
0x8465DD: test    eax, eax
0x8465DF: jnz     short loc_8465EF
0x8465E1: test    ebx, ebx
0x8465E3: jz      short loc_8465EF
0x8465E5: mov     edx, [ebx]
0x8465E7: mov     eax, [edx]
0x8465E9: push    1
0x8465EB: mov     ecx, ebx
0x8465ED: call    eax
0x8465EF: mov     eax, [esp+40h+arg_C]
0x8465F3: test    eax, eax
0x8465F5: mov     [ebp+4], eax
0x8465F8: jz      short loc_846604
0x8465FA: add     eax, 4
0x8465FD: push    eax; lpAddend
0x8465FE: call    dword ptr ds:0A28078h
0x846604: mov     ebx, [esp+40h+var_2C]
0x846608: push    esi
0x846609: push    ebp
0x84660A: mov     ecx, ebx
0x84660C: call    sub_848FA0
0x846611: mov     ecx, [edi+24h]
0x846614: mov     edx, [esp+40h+var_28]
0x846618: mov     ebp, [ecx+4]
0x84661B: push    edx
0x84661C: push    esi
0x84661D: mov     ecx, ebx
0x84661F: call    sub_848FD0
0x846624: mov     ebx, [ebp+4]
0x846627: cmp     ebx, eax
0x846629: mov     [esp+40h+arg_C], eax
0x84662D: jz      short loc_846664
0x84662F: test    ebx, ebx
0x846631: jz      short loc_846653
0x846633: lea     eax, [ebx+4]
0x846636: push    eax; lpAddend
0x846637: call    dword ptr ds:0A2807Ch
0x84663D: test    eax, eax
0x84663F: jnz     short loc_84664F
0x846641: test    ebx, ebx
0x846643: jz      short loc_84664F
0x846645: mov     edx, [ebx]
0x846647: mov     eax, [edx]
0x846649: push    1
0x84664B: mov     ecx, ebx
0x84664D: call    eax
0x84664F: mov     eax, [esp+40h+arg_C]
0x846653: test    eax, eax
0x846655: mov     [ebp+4], eax
0x846658: jz      short loc_846664
0x84665A: add     eax, 4
0x84665D: push    eax; lpAddend
0x84665E: call    dword ptr ds:0A28078h
0x846664: mov     ecx, [esp+40h+var_2C]
0x846668: push    esi
0x846669: push    ebp
0x84666A: call    sub_848FA0
0x84666F: mov     ecx, [edi+24h]
0x846672: mov     esi, [ecx+8]
0x846675: mov     eax, ds:0B43108h
0x84667A: mov     ebx, [esi+4]
0x84667D: add     esi, 4
0x846680: cmp     ebx, eax
0x846682: mov     ebp, eax
0x846684: jz      short loc_8466B6
0x846686: test    ebx, ebx
0x846688: jz      short loc_8466A6
0x84668A: lea     edx, [ebx+4]
0x84668D: push    edx; lpAddend
0x84668E: call    dword ptr ds:0A2807Ch
0x846694: test    eax, eax
0x846696: jnz     short loc_8466A6
0x846698: test    ebx, ebx
0x84669A: jz      short loc_8466A6
0x84669C: mov     eax, [ebx]
0x84669E: mov     edx, [eax]
0x8466A0: push    1
0x8466A2: mov     ecx, ebx
0x8466A4: call    edx
0x8466A6: test    ebp, ebp
0x8466A8: mov     [esi], ebp
0x8466AA: jz      short loc_8466B6
0x8466AC: add     ebp, 4
0x8466AF: push    ebp; lpAddend
0x8466B0: call    dword ptr ds:0A28078h
0x8466B6: mov     eax, [edi+24h]
0x8466B9: mov     ebx, [eax+0Ch]
0x8466BC: mov     eax, ds:0B4310Ch
0x8466C1: mov     esi, [ebx+4]
0x8466C4: cmp     esi, eax
0x8466C6: mov     ebp, eax
0x8466C8: jz      short loc_8466FB
0x8466CA: test    esi, esi
0x8466CC: jz      short loc_8466EA
0x8466CE: lea     ecx, [esi+4]
0x8466D1: push    ecx; lpAddend
0x8466D2: call    dword ptr ds:0A2807Ch
0x8466D8: test    eax, eax
0x8466DA: jnz     short loc_8466EA
0x8466DC: test    esi, esi
0x8466DE: jz      short loc_8466EA
0x8466E0: mov     edx, [esi]
0x8466E2: mov     eax, [edx]
0x8466E4: push    1
0x8466E6: mov     ecx, esi
0x8466E8: call    eax
0x8466EA: test    ebp, ebp
0x8466EC: mov     [ebx+4], ebp
0x8466EF: jz      short loc_8466FB
0x8466F1: add     ebp, 4
0x8466F4: push    ebp; lpAddend
0x8466F5: call    dword ptr ds:0A28078h
0x8466FB: mov     esi, [esp+40h+var_28]
0x8466FF: fld1
0x846701: cmp     esi, 4
0x846704: fldz
0x846706: jnz     short loc_846710
0x846708: fxch    st(1)
0x84670A: fst     [esp+40h+var_20]
0x84670E: jmp     short loc_846732
0x846710: cmp     esi, 3
0x846713: fst     [esp+40h+var_20]
0x846717: jnz     short loc_846730
0x846719: fstp    st(1)
0x84671B: fld1
0x84671D: fst     [esp+40h+var_24]
0x846721: fxch    st(1)
0x846723: cmp     esi, 1
0x846726: fst     [esp+40h+var_28]
0x84672A: jnz     short loc_846745
0x84672C: fstp    st
0x84672E: jmp     short loc_846747
0x846730: fxch    st(1)
0x846732: cmp     esi, 2
0x846735: fxch    st(1)
0x846737: fst     [esp+40h+var_24]
0x84673B: jnz     short loc_846723
0x84673D: fxch    st(1)
0x84673F: fstp    [esp+40h+var_28]
0x846743: jmp     short loc_846747
0x846745: fstp    st(1)
0x846747: fstp    [esp+40h+arg_C]
0x84674B: sub     esp, 10h
0x84674E: fld     [esp+50h+arg_C]
0x846752: mov     eax, esp
0x846754: fstp    [esp+50h+var_1C]
0x846758: mov     ecx, [esp+50h+var_1C]
0x84675C: fld     [esp+50h+var_28]
0x846760: mov     [eax], ecx
0x846762: fstp    [esp+50h+var_18]
0x846766: mov     edx, [esp+50h+var_18]
0x84676A: fld     [esp+50h+var_24]
0x84676E: mov     [eax+4], edx
0x846771: fstp    [esp+50h+var_14]
0x846775: mov     ecx, [esp+50h+var_14]
0x846779: fld     [esp+50h+var_20]
0x84677D: mov     [eax+8], ecx
0x846780: fstp    [esp+50h+var_10]
0x846784: mov     edx, [esp+50h+var_10]
0x846788: push    2
0x84678A: mov     [eax+0Ch], edx
0x84678D: call    sub_7ECAE0
0x846792: add     esp, 14h
0x846795: cmp     esi, 8
0x846798: jnz     short loc_8467A4
0x84679A: fld1
0x84679C: fst     [esp+40h+var_28]
0x8467A0: fldz
0x8467A2: jmp     short loc_8467C6
0x8467A4: cmp     esi, 7
0x8467A7: fldz
0x8467A9: fst     [esp+40h+var_28]
0x8467AD: fld1
0x8467AF: jnz     short loc_8467C4
0x8467B1: fst     [esp+40h+var_24]
0x8467B5: fxch    st(1)
0x8467B7: cmp     esi, 5
0x8467BA: fst     [esp+40h+var_20]
0x8467BE: jnz     short loc_8467D7
0x8467C0: fstp    st
0x8467C2: jmp     short loc_8467D9
0x8467C4: fxch    st(1)
0x8467C6: cmp     esi, 6
0x8467C9: fst     [esp+40h+var_24]
0x8467CD: jnz     short loc_8467B7
0x8467CF: fxch    st(1)
0x8467D1: fstp    [esp+40h+var_20]
0x8467D5: jmp     short loc_8467D9
0x8467D7: fstp    st(1)
0x8467D9: fstp    [esp+40h+arg_C]
0x8467DD: sub     esp, 10h
0x8467E0: fld     [esp+50h+arg_C]
0x8467E4: mov     eax, esp
0x8467E6: fstp    [esp+50h+var_1C]
0x8467EA: mov     ecx, [esp+50h+var_1C]
0x8467EE: fld     [esp+50h+var_20]
0x8467F2: mov     [eax], ecx
0x8467F4: fstp    [esp+50h+var_18]
0x8467F8: mov     edx, [esp+50h+var_18]
0x8467FC: fld     [esp+50h+var_24]
0x846800: mov     [eax+4], edx
0x846803: fstp    [esp+50h+var_14]
0x846807: mov     ecx, [esp+50h+var_14]
0x84680B: fld     [esp+50h+var_28]
0x84680F: mov     [eax+8], ecx
0x846812: fstp    [esp+50h+var_10]
0x846816: mov     edx, [esp+50h+var_10]
0x84681A: push    3
0x84681C: mov     [eax+0Ch], edx
0x84681F: call    sub_7ECAE0
0x846824: add     esp, 14h
0x846827: cmp     byte ptr [esp+40h+arg_10], 0
0x84682C: jz      short loc_84686D
0x84682E: mov     ebx, 1
0x846833: add     [edi+60h], ebx
0x846836: mov     [esp+40h+arg_10], edi
0x84683A: mov     esi, [esp+40h+var_2C]
0x84683E: mov     ecx, [esi+38h]
0x846841: lea     eax, [esp+40h+arg_10]
0x846845: push    eax
0x846846: push    ecx
0x846847: lea     ecx, [esi+40h]
0x84684A: mov     [esp+48h+var_4], 0
0x846852: call    sub_76CE40
0x846857: or      eax, 0FFFFFFFFh
0x84685A: add     [edi+60h], eax
0x84685D: mov     [esp+40h+var_4], eax
0x846861: jnz     short loc_84686A
0x846863: mov     ecx, edi
0x846865: call    sub_7604D0
0x84686A: add     [esi+38h], ebx
0x84686D: mov     ecx, dword ptr [esp+40h+var_C]
0x846871: mov     large fs:0, ecx
0x846878: pop     ecx
0x846879: pop     edi
0x84687A: pop     esi
0x84687B: pop     ebp
0x84687C: pop     ebx
0x84687D: add     esp, 2Ch
0x846880: retn    14h
