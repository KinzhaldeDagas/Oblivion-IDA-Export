0x657340: sub     esp, 20h
0x657343: push    ebx
0x657344: push    esi
0x657345: push    edi
0x657346: mov     edi, ecx
0x657348: mov     eax, [edi]
0x65734A: mov     edx, [eax+18Ch]
0x657350: lea     ecx, [esp+2Ch+var_20]
0x657354: push    ecx
0x657355: mov     ecx, edi
0x657357: call    edx
0x657359: mov     esi, [eax]
0x65735B: mov     eax, [esp+2Ch+var_20]
0x65735F: test    eax, eax
0x657361: jz      short loc_657381
0x657363: mov     ebx, eax
0x657365: add     eax, 4
0x657368: push    eax; lpAddend
0x657369: call    dword ptr ds:0A2807Ch
0x65736F: test    eax, eax
0x657371: jnz     short loc_657381
0x657373: test    ebx, ebx
0x657375: jz      short loc_657381
0x657377: mov     eax, [ebx]
0x657379: mov     edx, [eax]
0x65737B: push    1
0x65737D: mov     ecx, ebx
0x65737F: call    edx
0x657381: test    esi, esi
0x657383: jz      loc_65759A
0x657389: mov     ebx, [esp+2Ch+Dst]
0x65738D: mov     eax, [ebx]
0x65738F: mov     edx, [eax+198h]
0x657395: push    0
0x657397: mov     ecx, ebx
0x657399: call    edx
0x65739B: test    al, al
0x65739D: jnz     loc_65759A
0x6573A3: mov     ecx, ds:0B33B00h
0x6573A9: push    4; Size
0x6573AB: lea     eax, [esp+30h+Dst]
0x6573AF: push    eax; Dst
0x6573B0: call    SaveLoad_LoadData
0x6573B5: mov     ecx, [esp+2Ch+Dst]
0x6573B9: push    4; Size
0x6573BB: lea     edx, [esi+2A0h]
0x6573C1: mov     [esi+1ECh], ecx
0x6573C7: mov     ecx, ds:0B33B00h
0x6573CD: push    edx; Dst
0x6573CE: call    SaveLoad_LoadData
0x6573D3: mov     ecx, ds:0B33B00h
0x6573D9: push    4; Size
0x6573DB: lea     eax, [esp+30h+var_1C]
0x6573DF: push    eax; Dst
0x6573E0: call    SaveLoad_LoadData
0x6573E5: mov     eax, [esp+2Ch+var_1C]
0x6573E9: mov     dword ptr [esi+1F4h], 0
0x6573F3: or      [esi+1F4h], eax
0x6573F9: test    eax, 800h
0x6573FE: jz      loc_657488
0x657404: mov     ecx, ds:0B33B00h
0x65740A: cmp     byte ptr [ecx+7Ch], 23h ; '#'
0x65740E: jb      short loc_657488
0x657410: push    0Ch; Size
0x657412: lea     edx, [esp+30h+a2]
0x657416: push    edx; Dst
0x657417: call    SaveLoad_LoadData
0x65741C: mov     eax, [edi]
0x65741E: mov     edx, [eax+36Ch]
0x657424: mov     ecx, edi
0x657426: call    edx
0x657428: test    eax, eax
0x65742A: jz      short loc_65747C
0x65742C: mov     eax, [edi]
0x65742E: mov     edx, [eax+380h]
0x657434: mov     ecx, edi
0x657436: call    edx
0x657438: test    eax, eax
0x65743A: jz      short loc_65747C
0x65743C: mov     eax, [ebx]
0x65743E: mov     edx, [eax+190h]
0x657444: mov     ecx, ebx
0x657446: call    edx
0x657448: test    al, al
0x65744A: jz      short loc_65745C
0x65744C: mov     eax, [ebx]
0x65744E: mov     edx, [eax+380h]
0x657454: mov     ecx, ebx
0x657456: call    edx
0x657458: test    eax, eax
0x65745A: jnz     short loc_65747C
0x65745C: mov     eax, [edi]
0x65745E: mov     edx, [eax+380h]
0x657464: mov     ecx, edi
0x657466: call    edx
0x657468: mov     ecx, [eax]
0x65746A: mov     [esp+2Ch+a2], ecx
0x65746E: mov     edx, [eax+4]
0x657471: mov     [esp+2Ch+var_14], edx
0x657475: mov     eax, [eax+8]
0x657478: mov     [esp+2Ch+var_10], eax
0x65747C: lea     ecx, [esp+2Ch+a2]
0x657480: push    ecx; a2
0x657481: mov     ecx, esi; this
0x657483: call    sub_452A10
0x657488: mov     edx, [edi]
0x65748A: mov     eax, [edx+36Ch]
0x657490: mov     ecx, edi
0x657492: call    eax
0x657494: test    eax, eax
0x657496: jnz     short loc_6574A0
0x657498: push    eax
0x657499: mov     ecx, ebx
0x65749B: call    sub_65AC20
0x6574A0: push    10h; Size
0x6574A2: lea     ecx, [esi+2E0h]
0x6574A8: push    ecx; Dst
0x6574A9: mov     ecx, ds:0B33B00h
0x6574AF: call    SaveLoad_LoadData
0x6574B4: mov     ecx, ds:0B33B00h
0x6574BA: push    10h; Size
0x6574BC: lea     edx, [esi+2F0h]
0x6574C2: push    edx; Dst
0x6574C3: call    SaveLoad_LoadData
0x6574C8: mov     ecx, ds:0B33B00h
0x6574CE: push    0Ch; Size
0x6574D0: lea     eax, [esp+30h+var_C]
0x6574D4: push    eax; Dst
0x6574D5: call    SaveLoad_LoadData
0x6574DA: lea     ecx, [esp+2Ch+var_C]
0x6574DE: push    ecx
0x6574DF: mov     ecx, esi
0x6574E1: call    sub_64B3A0
0x6574E6: mov     edx, [ebx]
0x6574E8: mov     eax, [edx+190h]
0x6574EE: mov     ecx, ebx
0x6574F0: call    eax
0x6574F2: test    al, al
0x6574F4: jz      short loc_657518
0x6574F6: push    4; Size
0x6574F8: lea     ecx, [esi+31Ch]
0x6574FE: push    ecx; Dst
0x6574FF: mov     ecx, ds:0B33B00h
0x657505: call    SaveLoad_LoadData
0x65750A: mov     ecx, ds:0B33B00h
0x657510: lea     edx, [esi+320h]
0x657516: jmp     short loc_65752A
0x657518: mov     ecx, ds:0B33B00h
0x65751E: cmp     byte ptr [ecx+7Ch], 20h ; ' '
0x657522: jb      short loc_657546
0x657524: lea     edx, [esi+328h]
0x65752A: push    4; Size
0x65752C: push    edx; Dst
0x65752D: call    SaveLoad_LoadData
0x657532: mov     ecx, ds:0B33B00h
0x657538: push    4; Size
0x65753A: lea     eax, [esi+324h]
0x657540: push    eax; Dst
0x657541: call    SaveLoad_LoadData
0x657546: cmp     [esp+2Ch+Dst], 2
0x65754B: jnz     short loc_65756C
0x65754D: mov     eax, [esi+1F4h]
0x657553: mov     ecx, eax
0x657555: shr     ecx, 8
0x657558: test    cl, 1
0x65755B: jnz     short loc_657564
0x65755D: shr     eax, 9
0x657560: test    al, 1
0x657562: jz      short loc_65756C
0x657564: fldz
0x657566: fstp    dword ptr [esi+320h]
0x65756C: mov     ecx, ds:0B33B00h
0x657572: cmp     byte ptr [ecx+7Ch], 77h ; 'w'
0x657576: jb      short loc_65759A
0x657578: push    4; Size
0x65757A: lea     edx, [esi+32Ch]
0x657580: push    edx; Dst
0x657581: call    SaveLoad_LoadData
0x657586: mov     ecx, ds:0B33B00h
0x65758C: push    4; Size
0x65758E: add     esi, 330h
0x657594: push    esi; Dst
0x657595: call    SaveLoad_LoadData
0x65759A: pop     edi
0x65759B: pop     esi
0x65759C: pop     ebx
0x65759D: add     esp, 20h
0x6575A0: retn    4
