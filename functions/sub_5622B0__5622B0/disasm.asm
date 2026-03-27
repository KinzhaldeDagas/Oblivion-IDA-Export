0x5622B0: push    0FFFFFFFFh
0x5622B2: push    offset SEH_5622B0
0x5622B7: mov     eax, large fs:0
0x5622BD: push    eax
0x5622BE: sub     esp, 1D8h
0x5622C4: push    ebx
0x5622C5: push    ebp
0x5622C6: push    esi
0x5622C7: push    edi
0x5622C8: mov     eax, ds:0B30AACh
0x5622CD: xor     eax, esp
0x5622CF: push    eax
0x5622D0: lea     eax, [esp+1F8h+var_C]
0x5622D7: mov     large fs:0, eax
0x5622DD: mov     esi, ecx
0x5622DF: mov     [esp+1F8h+var_190], esi
0x5622E3: lea     ecx, [esp+1F8h+Src]
0x5622EA: call    sub_7879A0
0x5622EF: xor     ebx, ebx
0x5622F1: lea     ecx, [esp+1F8h+var_154]
0x5622F8: mov     [esp+1F8h+var_4], ebx
0x5622FF: call    sub_786FA0
0x562304: mov     [esp+1F8h+var_1C4], ebx
0x562308: mov     ecx, [esi+0Ch]
0x56230B: cmp     ecx, ebx
0x56230D: mov     byte ptr [esp+1F8h+var_4], 2
0x562315: mov     [esp+1F8h+var_1D9], bl
0x562319: jz      loc_562DCD
0x56231F: call    sub_78A740
0x562324: test    eax, eax
0x562326: jz      loc_562DCD
0x56232C: cmp     dword ptr [esi+8], 2
0x562330: jz      loc_562DCD
0x562336: mov     eax, [esi+18h]
0x562339: cmp     eax, ebx
0x56233B: jz      short loc_56235D
0x56233D: mov     ecx, [eax-4]
0x562340: lea     edi, [eax-4]
0x562343: push    offset sub_7016A0; void (__thiscall *)(void *)
0x562348: push    ecx; int
0x562349: push    4; unsigned int
0x56234B: push    eax; void *
0x56234C: call    $LN21
0x562351: push    edi
0x562352: call    FormHeapFree
0x562357: add     esp, 4
0x56235A: mov     [esi+18h], ebx
0x56235D: mov     eax, [esi+28h]
0x562360: cmp     eax, ebx
0x562362: jz      short loc_562384
0x562364: mov     edx, [eax-4]
0x562367: lea     edi, [eax-4]
0x56236A: push    offset sub_7016A0; void (__thiscall *)(void *)
0x56236F: push    edx; int
0x562370: push    4; unsigned int
0x562372: push    eax; void *
0x562373: call    $LN21
0x562378: push    edi
0x562379: call    FormHeapFree
0x56237E: add     esp, 4
0x562381: mov     [esi+28h], ebx
0x562384: mov     ecx, [esi+0Ch]
0x562387: cmp     ecx, ebx
0x562389: jz      short loc_56239C
0x56238B: call    sub_787200
0x562390: movzx   eax, ax
0x562393: cmp     ax, bx
0x562396: mov     [esp+1F8h+var_1B0], eax
0x56239A: ja      short loc_5623B2
0x56239C: lea     ecx, [esp+1F8h+var_1C4]; this
0x5623A0: mov     byte ptr [esp+1F8h+var_4], 1
0x5623A8: call    sub_7016A0
0x5623AD: jmp     loc_562DCD
0x5623B2: mov     ecx, [esi+0Ch]
0x5623B5: lea     eax, [esp+1F8h+var_154]
0x5623BC: push    eax
0x5623BD: call    sub_78A890
0x5623C2: mov     eax, [esp+1F8h+var_150]
0x5623C9: cmp     ax, bx
0x5623CC: jbe     short loc_56239C
0x5623CE: mov     ecx, [esp+1F8h+var_14C]
0x5623D5: movzx   edx, ax
0x5623D8: mov     ebp, 1
0x5623DD: mov     [esp+1F8h+var_1E4], ecx
0x5623E1: mov     [esp+1F8h+var_1D8], edx
0x5623E5: cmp     bp, word ptr [esp+1F8h+var_150]
0x5623ED: jnb     short loc_56244E
0x5623EF: mov     eax, [esp+1F8h+var_1E4]
0x5623F3: mov     ecx, [eax]
0x5623F5: mov     eax, [esp+1F8h+var_14C]
0x5623FC: mov     [esp+1F8h+var_1E0], ecx
0x562400: mov     ecx, [esp+1F8h+var_150]
0x562407: movzx   edx, bp
0x56240A: sub     ecx, ebp
0x56240C: lea     edi, [eax+edx*4]
0x56240F: movzx   ebx, cx
0x562412: mov     ecx, [edi]
0x562414: mov     eax, [esp+1F8h+var_1E0]
0x562418: mov     dl, [eax]
0x56241A: cmp     dl, [ecx]
0x56241C: jnz     short loc_562438
0x56241E: test    dl, dl
0x562420: jz      short loc_562434
0x562422: mov     dl, [eax+1]
0x562425: cmp     dl, [ecx+1]
0x562428: jnz     short loc_562438
0x56242A: add     eax, 2
0x56242D: add     ecx, 2
0x562430: test    dl, dl
0x562432: jnz     short loc_562418
0x562434: xor     eax, eax
0x562436: jmp     short loc_56243D
0x562438: sbb     eax, eax
0x56243A: sbb     eax, 0FFFFFFFFh
0x56243D: test    eax, eax
0x56243F: jz      short loc_562446
0x562441: mov     [esp+1F8h+var_1D9], 1
0x562446: add     edi, 4
0x562449: sub     ebx, 1
0x56244C: jnz     short loc_562412
0x56244E: add     [esp+1F8h+var_1E4], 4
0x562453: add     ebp, 1
0x562456: sub     [esp+1F8h+var_1D8], 1
0x56245B: jnz     short loc_5623E5
0x56245D: movzx   edi, word ptr [esp+1F8h+var_1B0]
0x562462: xor     ecx, ecx
0x562464: xor     ebx, ebx
0x562466: mov     eax, edi
0x562468: mov     edx, 4
0x56246D: mul     edx
0x56246F: seto    cl
0x562472: neg     ecx
0x562474: or      ecx, eax
0x562476: xor     eax, eax
0x562478: add     ecx, 4
0x56247B: setb    al
0x56247E: neg     eax
0x562480: or      eax, ecx
0x562482: push    eax; Size
0x562483: call    FormHeapAlloc
0x562488: add     esp, 4
0x56248B: mov     [esp+1F8h+var_1CC], eax
0x56248F: cmp     eax, ebx
0x562491: mov     byte ptr [esp+1F8h+var_4], 3
0x562499: jz      short loc_5624B5
0x56249B: push    offset sub_7016A0; a5
0x5624A0: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x5624A5: push    edi; size
0x5624A6: lea     ebp, [eax+4]
0x5624A9: push    4; a2
0x5624AB: push    ebp; a1
0x5624AC: mov     [eax], edi
0x5624AE: call    ArrayConstructor
0x5624B3: jmp     short loc_5624B7
0x5624B5: xor     ebp, ebp
0x5624B7: xor     ecx, ecx
0x5624B9: mov     eax, edi
0x5624BB: mov     edx, 4
0x5624C0: mul     edx
0x5624C2: seto    cl
0x5624C5: mov     byte ptr [esp+1F8h+var_4], 2
0x5624CD: mov     [esi+18h], ebp
0x5624D0: neg     ecx
0x5624D2: or      ecx, eax
0x5624D4: xor     eax, eax
0x5624D6: add     ecx, 4
0x5624D9: setb    al
0x5624DC: neg     eax
0x5624DE: or      eax, ecx
0x5624E0: push    eax; Size
0x5624E1: call    FormHeapAlloc
0x5624E6: add     esp, 4
0x5624E9: mov     [esp+1F8h+var_1CC], eax
0x5624ED: cmp     eax, ebx
0x5624EF: mov     byte ptr [esp+1F8h+var_4], 4
0x5624F7: jz      short loc_562513
0x5624F9: push    offset sub_7016A0; a5
0x5624FE: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x562503: push    edi; size
0x562504: lea     ebp, [eax+4]
0x562507: push    4; a2
0x562509: push    ebp; a1
0x56250A: mov     [eax], edi
0x56250C: call    ArrayConstructor
0x562511: jmp     short loc_562515
0x562513: xor     ebp, ebp
0x562515: xor     ecx, ecx
0x562517: mov     eax, edi
0x562519: mov     edx, 4
0x56251E: mul     edx
0x562520: seto    cl
0x562523: mov     byte ptr [esp+1F8h+var_4], 2
0x56252B: mov     [esi+28h], ebp
0x56252E: neg     ecx
0x562530: or      ecx, eax
0x562532: xor     eax, eax
0x562534: add     ecx, 4
0x562537: setb    al
0x56253A: neg     eax
0x56253C: or      eax, ecx
0x56253E: push    eax; Size
0x56253F: call    FormHeapAlloc
0x562544: add     esp, 4
0x562547: mov     [esp+1F8h+var_1CC], eax
0x56254B: cmp     eax, ebx
0x56254D: mov     byte ptr [esp+1F8h+var_4], 5
0x562555: jz      short loc_562571
0x562557: push    offset sub_7016A0; a5
0x56255C: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x562561: push    edi; size
0x562562: lea     ebp, [eax+4]
0x562565: push    4; a2
0x562567: push    ebp; a1
0x562568: mov     [eax], edi
0x56256A: call    ArrayConstructor
0x56256F: jmp     short loc_562573
0x562571: xor     ebp, ebp
0x562573: cmp     word ptr [esp+1F8h+var_1B0], bx
0x562578: mov     byte ptr [esp+1F8h+var_4], 2
0x562580: mov     [esi+30h], ebp
0x562583: jbe     loc_56262E
0x562589: xor     ebx, ebx
0x56258B: mov     [esp+1F8h+var_1D8], edi
0x56258F: nop
0x562590: mov     ebp, [esi+18h]
0x562593: mov     edi, [ebp+ebx+0]
0x562597: add     ebp, ebx
0x562599: test    edi, edi
0x56259B: jz      short loc_5625C0
0x56259D: lea     ecx, [edi+4]
0x5625A0: push    ecx; lpAddend
0x5625A1: call    dword ptr ds:0A2807Ch
0x5625A7: test    eax, eax
0x5625A9: jnz     short loc_5625B9
0x5625AB: test    edi, edi
0x5625AD: jz      short loc_5625B9
0x5625AF: mov     edx, [edi]
0x5625B1: mov     eax, [edx]
0x5625B3: push    1
0x5625B5: mov     ecx, edi
0x5625B7: call    eax
0x5625B9: mov     dword ptr [ebp+0], 0
0x5625C0: mov     ebp, [esi+28h]
0x5625C3: mov     edi, [ebp+ebx+0]
0x5625C7: add     ebp, ebx
0x5625C9: test    edi, edi
0x5625CB: jz      short loc_5625F0
0x5625CD: lea     ecx, [edi+4]
0x5625D0: push    ecx; lpAddend
0x5625D1: call    dword ptr ds:0A2807Ch
0x5625D7: test    eax, eax
0x5625D9: jnz     short loc_5625E9
0x5625DB: test    edi, edi
0x5625DD: jz      short loc_5625E9
0x5625DF: mov     edx, [edi]
0x5625E1: mov     eax, [edx]
0x5625E3: push    1
0x5625E5: mov     ecx, edi
0x5625E7: call    eax
0x5625E9: mov     dword ptr [ebp+0], 0
0x5625F0: mov     ebp, [esi+30h]
0x5625F3: mov     edi, [ebp+ebx+0]
0x5625F7: add     ebp, ebx
0x5625F9: test    edi, edi
0x5625FB: jz      short loc_562620
0x5625FD: lea     ecx, [edi+4]
0x562600: push    ecx; lpAddend
0x562601: call    dword ptr ds:0A2807Ch
0x562607: test    eax, eax
0x562609: jnz     short loc_562619
0x56260B: test    edi, edi
0x56260D: jz      short loc_562619
0x56260F: mov     edx, [edi]
0x562611: mov     eax, [edx]
0x562613: push    1
0x562615: mov     ecx, edi
0x562617: call    eax
0x562619: mov     dword ptr [ebp+0], 0
0x562620: add     ebx, 4
0x562623: sub     [esp+1F8h+var_1D8], 1
0x562628: jnz     loc_562590
0x56262E: push    20h ; ' '; Size
0x562630: call    FormHeapAlloc
0x562635: add     esp, 4
0x562638: mov     [esp+1F8h+var_1CC], eax
0x56263C: test    eax, eax
0x56263E: mov     byte ptr [esp+1F8h+var_4], 6
0x562646: jz      short loc_562653
0x562648: mov     ecx, eax
0x56264A: call    sub_7F1810
0x56264F: mov     ebp, eax
0x562651: jmp     short loc_562655
0x562653: xor     ebp, ebp
0x562655: mov     edi, [esi+20h]
0x562658: cmp     edi, ebp
0x56265A: mov     byte ptr [esp+1F8h+var_4], 2
0x562662: jz      short loc_562695
0x562664: test    edi, edi
0x562666: jz      short loc_562684
0x562668: lea     ecx, [edi+4]
0x56266B: push    ecx; lpAddend
0x56266C: call    dword ptr ds:0A2807Ch
0x562672: test    eax, eax
0x562674: jnz     short loc_562684
0x562676: test    edi, edi
0x562678: jz      short loc_562684
0x56267A: mov     edx, [edi]
0x56267C: mov     eax, [edx]
0x56267E: push    1
0x562680: mov     ecx, edi
0x562682: call    eax
0x562684: test    ebp, ebp
0x562686: mov     [esi+20h], ebp
0x562689: jz      short loc_562695
0x56268B: add     ebp, 4
0x56268E: push    ebp; lpAddend
0x56268F: call    dword ptr ds:0A28078h
0x562695: fld     dword ptr [esi+44h]
0x562698: mov     eax, [esi+20h]
0x56269B: fstp    [esp+1F8h+var_1E0]
0x56269F: fld     [esp+1F8h+var_1E0]
0x5626A3: fstp    dword ptr [eax+0Ch]
0x5626A6: mov     eax, [esi+0Ch]
0x5626A9: test    eax, eax
0x5626AB: jz      short loc_56271B
0x5626AD: mov     eax, [eax+10h]
0x5626B0: test    eax, eax
0x5626B2: jz      short loc_56271B
0x5626B4: fld     dword ptr [eax+3Ch]
0x5626B7: mov     eax, [esi+20h]
0x5626BA: mov     edi, [esp+1F8h+arg_0]
0x5626C1: fstp    [esp+1F8h+var_1E0]
0x5626C5: test    edi, edi
0x5626C7: fld     [esp+1F8h+var_1E0]
0x5626CB: fstp    dword ptr [eax+10h]
0x5626CE: mov     ecx, [esi+0Ch]
0x5626D1: mov     eax, [ecx+10h]
0x5626D4: fld     dword ptr [eax+40h]
0x5626D7: mov     eax, [esi+20h]
0x5626DA: fstp    [esp+1F8h+var_1E0]
0x5626DE: fld     [esp+1F8h+var_1E0]
0x5626E2: fstp    dword ptr [eax+14h]
0x5626E5: jz      short loc_56271B
0x5626E7: mov     edx, [edi]
0x5626E9: mov     eax, [edx+164h]
0x5626EF: mov     ebx, [esi+20h]
0x5626F2: mov     ecx, edi
0x5626F4: call    eax
0x5626F6: fstp    [esp+1F8h+var_1E0]
0x5626FA: mov     edx, [edi]
0x5626FC: fld     [esp+1F8h+var_1E0]
0x562700: mov     eax, [edx+16Ch]
0x562706: fstp    dword ptr [ebx+18h]
0x562709: mov     ebx, [esi+20h]
0x56270C: mov     ecx, edi
0x56270E: call    eax
0x562710: fstp    [esp+1F8h+var_1E0]
0x562714: fld     [esp+1F8h+var_1E0]
0x562718: fstp    dword ptr [ebx+1Ch]
0x56271B: xor     ebx, ebx
0x56271D: cmp     word ptr [esp+1F8h+var_1B0], bx
0x562722: mov     [esp+1F8h+var_1A8], ebx
0x562726: jbe     loc_562D9D
0x56272C: xor     edi, edi
0x56272E: mov     [esp+1F8h+var_1D8], edi
0x562732: push    ebx; int
0x562733: push    0FFFFFFFFh; rsize_t
0x562735: push    0FFFFFFFFh; MaxCount
0x562737: push    4; int
0x562739: lea     ecx, [esp+208h+Src]
0x562740: push    ecx; Src
0x562741: mov     ecx, [esi+0Ch]
0x562744: call    sub_78C6F0
0x562749: mov     eax, [esp+1F8h+var_B4]
0x562750: test    ax, ax
0x562753: lea     edx, ds:0[eax*4]
0x56275A: movzx   ebp, ax
0x56275D: movzx   ecx, dx
0x562760: mov     [esp+1F8h+var_1CC], ebp
0x562764: mov     [esp+1F8h+var_19C], ecx
0x562768: jbe     loc_562D84
0x56276E: mov     edx, [esp+1F8h+var_A8]
0x562775: mov     eax, [esp+1F8h+var_98]
0x56277C: movzx   esi, cx
0x56277F: mov     [esp+1F8h+var_1BC], edx
0x562783: mov     [esp+1F8h+var_1C8], eax
0x562787: xor     ecx, ecx
0x562789: mov     eax, esi
0x56278B: mov     edx, 0Ch
0x562790: mul     edx
0x562792: seto    cl
0x562795: neg     ecx
0x562797: or      ecx, eax
0x562799: push    ecx; Size
0x56279A: call    FormHeapAlloc
0x56279F: mov     edi, eax
0x5627A1: xor     ecx, ecx
0x5627A3: mov     eax, esi
0x5627A5: mov     edx, 0Ch
0x5627AA: mul     edx
0x5627AC: seto    cl
0x5627AF: mov     [esp+1FCh+var_18C], edi
0x5627B3: neg     ecx
0x5627B5: or      ecx, eax
0x5627B7: push    ecx; Size
0x5627B8: call    FormHeapAlloc
0x5627BD: mov     ebx, eax
0x5627BF: xor     ecx, ecx
0x5627C1: mov     eax, esi
0x5627C3: mov     edx, 8
0x5627C8: mul     edx
0x5627CA: seto    cl
0x5627CD: mov     [esp+200h+var_158], ebx
0x5627D4: neg     ecx
0x5627D6: or      ecx, eax
0x5627D8: push    ecx; Size
0x5627D9: call    FormHeapAlloc
0x5627DE: mov     [esp+204h+var_188], eax
0x5627E2: xor     ecx, ecx
0x5627E4: mov     eax, esi
0x5627E6: mov     edx, 10h
0x5627EB: mul     edx
0x5627ED: seto    cl
0x5627F0: neg     ecx
0x5627F2: or      ecx, eax
0x5627F4: push    ecx; Size
0x5627F5: call    FormHeapAlloc
0x5627FA: mov     [esp+208h+var_1E0], eax
0x5627FE: movzx   eax, bp
0x562801: mov     [esp+208h+var_1D0], eax
0x562805: lea     eax, [eax+eax*2]
0x562808: xor     ecx, ecx
0x56280A: add     eax, eax
0x56280C: mov     edx, 2
0x562811: mul     edx
0x562813: seto    cl
0x562816: neg     ecx
0x562818: or      ecx, eax
0x56281A: push    ecx; Size
0x56281B: call    FormHeapAlloc
0x562820: add     esp, 14h
0x562823: test    bp, bp
0x562826: mov     [esp+1F8h+var_184], eax
0x56282A: jbe     loc_562B76
0x562830: mov     ebp, [esp+1F8h+var_1BC]
0x562834: mov     esi, [esp+1F8h+var_1C8]
0x562838: mov     eax, [esp+1F8h+var_1D0]
0x56283C: xor     ecx, ecx
0x56283E: mov     [esp+1F8h+var_198], ecx
0x562842: mov     [esp+1F8h+var_1A4], ecx
0x562846: mov     [esp+1F8h+var_194], ecx
0x56284A: mov     [esp+1F8h+var_1E4], ecx
0x56284E: sub     ebp, esi
0x562850: mov     [esp+1F8h+var_1BC], eax
0x562854: mov     edx, [esi+ebp]
0x562857: movzx   ecx, cx
0x56285A: lea     eax, [ecx+ecx*2+9]
0x56285E: add     eax, eax
0x562860: add     eax, eax
0x562862: mov     [eax+edi], edx
0x562865: mov     edx, [esi+ebp+4]
0x562869: mov     [eax+edi+4], edx
0x56286D: mov     edx, [esi+ebp+8]
0x562871: mov     [eax+edi+8], edx
0x562875: mov     edx, [esi+ebp]
0x562878: mov     [esp+1F8h+var_1D0], eax
0x56287C: mov     ebx, [esp+1F8h+var_158]
0x562883: lea     eax, [ecx+ecx*2+6]
0x562887: add     eax, eax
0x562889: add     eax, eax
0x56288B: mov     [eax+edi], edx
0x56288E: mov     edx, [esi+ebp+4]
0x562892: mov     [eax+edi+4], edx
0x562896: mov     edx, [esi+ebp+8]
0x56289A: mov     [eax+edi+8], edx
0x56289E: mov     edx, [esi+ebp]
0x5628A1: mov     [esp+1F8h+var_1C8], eax
0x5628A5: lea     eax, [ecx+ecx*2]
0x5628A8: add     eax, eax
0x5628AA: add     eax, eax
0x5628AC: mov     [eax+edi+0Ch], edx
0x5628B0: mov     edx, [esi+ebp+4]
0x5628B4: mov     [eax+edi+10h], edx
0x5628B8: mov     edx, [esi+ebp+8]
0x5628BC: mov     [eax+edi+14h], edx
0x5628C0: mov     edx, [esi+ebp]
0x5628C3: mov     [eax+edi], edx
0x5628C6: mov     edx, [esi+ebp+4]
0x5628CA: mov     [eax+edi+4], edx
0x5628CE: mov     edx, [esi+ebp+8]
0x5628D2: mov     [eax+edi+8], edx
0x5628D6: mov     edi, [esi]
0x5628D8: mov     edx, [esp+1F8h+var_1D0]
0x5628DC: mov     [edx+ebx], edi
0x5628DF: mov     edi, [esi+4]
0x5628E2: mov     [edx+ebx+4], edi
0x5628E6: mov     edi, [esi+8]
0x5628E9: mov     [edx+ebx+8], edi
0x5628ED: mov     edi, [esi]
0x5628EF: mov     edx, [esp+1F8h+var_1C8]
0x5628F3: mov     [edx+ebx], edi
0x5628F6: mov     edi, [esi+4]
0x5628F9: mov     [edx+ebx+4], edi
0x5628FD: mov     edi, [esi+8]
0x562900: mov     [edx+ebx+8], edi
0x562904: mov     edx, [esi]
0x562906: mov     [eax+ebx+0Ch], edx
0x56290A: mov     edx, [esi+4]
0x56290D: mov     [eax+ebx+10h], edx
0x562911: mov     edx, [esi+8]
0x562914: mov     [eax+ebx+14h], edx
0x562918: mov     edx, [esi]
0x56291A: mov     [eax+ebx], edx
0x56291D: mov     edx, [esi+4]
0x562920: mov     [eax+ebx+4], edx
0x562924: mov     edx, [esi+8]
0x562927: mov     [eax+ebx+8], edx
0x56292B: mov     eax, [esp+1F8h+var_9C]
0x562932: mov     edx, [esp+1F8h+var_1E4]
0x562936: movzx   eax, byte ptr [edx+eax+1]
0x56293B: mov     [esp+1F8h+var_1D0], eax
0x56293F: fild    [esp+1F8h+var_1D0]
0x562943: fdiv    qword ptr ds:0A3DDD8h
0x562949: fstp    [esp+1F8h+var_1A0]
0x56294D: fld1
0x56294F: fcomp   [esp+1F8h+var_1A0]
0x562953: fnstsw  ax
0x562955: test    ah, 41h
0x562958: jp      short loc_562964
0x56295A: fld     dword ptr ds:0A65520h
0x562960: fstp    [esp+1F8h+var_1A0]
0x562964: mov     eax, [esp+1F8h+var_A4]
0x56296B: mov     eax, [edx+eax]
0x56296E: mov     edx, [esp+1F8h+var_188]
0x562972: mov     edi, ecx
0x562974: shl     edi, 4
0x562977: add     edi, [esp+1F8h+var_1E0]
0x56297B: mov     [esp+1F8h+var_1B8], eax
0x56297F: lea     ecx, [edx+ecx*8]
0x562982: add     eax, 1Ch
0x562985: mov     [esp+1F8h+var_1C8], 2
0x56298D: mov     [esp+1F8h+var_1B4], ecx
0x562991: mov     [esp+1F8h+var_1AC], eax
0x562995: mov     [esp+1F8h+var_1D0], 4
0x56299D: cmp     [esp+1F8h+var_1D9], 0
0x5629A2: jz      short loc_5629DE
0x5629A4: mov     edx, [esp+1F8h+var_1B8]
0x5629A8: fld     dword ptr [edx]
0x5629AA: mov     eax, [esp+1F8h+var_1AC]
0x5629AE: fstp    [esp+1F8h+var_1C0]
0x5629B2: fld     dword ptr [eax]
0x5629B4: fstp    [esp+1F8h+var_1D4]
0x5629B8: fld     [esp+1F8h+var_1C0]
0x5629BC: fstp    [esp+1F8h+var_160]
0x5629C3: mov     ecx, [esp+1F8h+var_160]
0x5629CA: fld     [esp+1F8h+var_1D4]
0x5629CE: fstp    [esp+1F8h+var_15C]
0x5629D5: mov     edx, [esp+1F8h+var_15C]
0x5629DC: jmp     short loc_562A0D
0x5629DE: mov     eax, [esp+1F8h+var_1B8]
0x5629E2: fld     dword ptr [eax]
0x5629E4: fstp    [esp+1F8h+var_1D4]
0x5629E8: fld     dword ptr [eax+4]
0x5629EB: fstp    [esp+1F8h+var_1C0]
0x5629EF: fld     [esp+1F8h+var_1D4]
0x5629F3: fstp    [esp+1F8h+var_17C]
0x5629F7: mov     ecx, [esp+1F8h+var_17C]
0x5629FB: fld     [esp+1F8h+var_1C0]
0x5629FF: fstp    [esp+1F8h+var_178]
0x562A06: mov     edx, [esp+1F8h+var_178]
0x562A0D: mov     eax, [esp+1F8h+var_1B4]
0x562A11: mov     [eax], ecx
0x562A13: mov     [eax+4], edx
0x562A16: mov     ecx, [esp+1F8h+var_AC]
0x562A1D: mov     eax, [esp+1F8h+var_198]
0x562A21: movzx   edx, byte ptr [eax+ecx]
0x562A25: mov     ecx, [esp+1F8h+var_1C8]
0x562A29: and     ecx, 80000003h
0x562A2F: jns     short loc_562A36
0x562A31: dec     ecx
0x562A32: or      ecx, 0FFFFFFFCh
0x562A35: inc     ecx
0x562A36: lea     edx, [ecx+edx*4]
0x562A39: mov     ecx, [esp+1F8h+var_8C]
0x562A40: mov     [esp+1F8h+var_1D4], edx
0x562A44: fild    [esp+1F8h+var_1D4]
0x562A48: mov     edx, [esp+1F8h+var_1E4]
0x562A4C: fadd    [esp+1F8h+var_1A0]
0x562A50: fstp    [esp+1F8h+var_180]
0x562A54: fld     dword ptr [edx+ecx]
0x562A57: mov     ecx, [esp+1F8h+var_88]
0x562A5E: movzx   edx, byte ptr [eax+ecx]
0x562A62: fstp    [esp+1F8h+var_1C0]
0x562A66: mov     eax, [esp+1F8h+var_190]
0x562A6A: mov     ecx, [eax+0Ch]
0x562A6D: add     edx, edx
0x562A6F: add     edx, edx
0x562A71: mov     [esp+1F8h+var_1D4], edx
0x562A75: fild    [esp+1F8h+var_1D4]
0x562A79: fstp    [esp+1F8h+var_1D4]
0x562A7D: call    sub_78A740
0x562A82: mov     ecx, [esp+1F8h+var_1D8]
0x562A86: fld     dword ptr [eax+ecx]
0x562A89: add     edi, 10h
0x562A8C: fstp    [esp+1F8h+var_174]
0x562A93: fld     [esp+1F8h+var_1C0]
0x562A97: fstp    [esp+1F8h+var_170]
0x562A9E: mov     edx, [esp+1F8h+var_170]
0x562AA5: fld     [esp+1F8h+var_1D4]
0x562AA9: mov     [edi-10h], edx
0x562AAC: fstp    [esp+1F8h+var_16C]
0x562AB3: mov     eax, [esp+1F8h+var_16C]
0x562ABA: fld     [esp+1F8h+var_180]
0x562ABE: mov     [edi-0Ch], eax
0x562AC1: fstp    [esp+1F8h+var_168]
0x562AC8: mov     ecx, [esp+1F8h+var_168]
0x562ACF: fld     [esp+1F8h+var_174]
0x562AD6: mov     eax, 8
0x562ADB: sub     [esp+1F8h+var_1AC], eax
0x562ADF: fstp    [esp+1F8h+var_164]
0x562AE6: add     [esp+1F8h+var_1B8], eax
0x562AEA: add     [esp+1F8h+var_1B4], eax
0x562AEE: mov     edx, [esp+1F8h+var_164]
0x562AF5: mov     [edi-8], ecx
0x562AF8: mov     eax, 1
0x562AFD: add     [esp+1F8h+var_1C8], eax
0x562B01: sub     [esp+1F8h+var_1D0], eax
0x562B05: mov     [edi-4], edx
0x562B08: jnz     loc_56299D
0x562B0E: mov     ecx, [esp+1F8h+var_194]
0x562B12: movzx   eax, word ptr [esp+1F8h+var_1A4]
0x562B17: mov     edx, [esp+1F8h+var_184]
0x562B1B: add     [esp+1F8h+var_1A4], 6
0x562B20: add     [esp+1F8h+var_1E4], 4
0x562B25: lea     edi, [ecx+3]
0x562B28: mov     [edx+eax*2], di
0x562B2C: lea     edi, [ecx+1]
0x562B2F: mov     [edx+eax*2+2], di
0x562B34: lea     edi, [ecx+2]
0x562B37: mov     [edx+eax*2+4], di
0x562B3C: lea     edi, [ecx+1]
0x562B3F: mov     [edx+eax*2+8], di
0x562B44: lea     edi, [ecx+3]
0x562B47: mov     [edx+eax*2+6], cx
0x562B4C: mov     [edx+eax*2+0Ah], di
0x562B51: mov     edi, [esp+1F8h+var_18C]
0x562B55: mov     eax, 1
0x562B5A: add     [esp+1F8h+var_198], eax
0x562B5E: add     ecx, 4
0x562B61: add     esi, 0Ch
0x562B64: sub     [esp+1F8h+var_1BC], eax
0x562B68: mov     [esp+1F8h+var_194], ecx
0x562B6C: jnz     loc_562854
0x562B72: mov     ebp, [esp+1F8h+var_1CC]
0x562B76: push    58h ; 'X'; Size
0x562B78: call    FormHeapAlloc
0x562B7D: add     esp, 4
0x562B80: mov     [esp+1F8h+var_1CC], eax
0x562B84: test    eax, eax
0x562B86: mov     byte ptr [esp+1F8h+var_4], 7
0x562B8E: jz      short loc_562BB9
0x562B90: mov     ecx, [esp+1F8h+var_184]
0x562B94: push    ecx
0x562B95: mov     ecx, [esp+1FCh+var_188]
0x562B99: lea     edx, [ebp+ebp+0]
0x562B9D: push    edx
0x562B9E: mov     edx, [esp+200h+var_19C]
0x562BA2: push    0
0x562BA4: push    1
0x562BA6: push    ecx
0x562BA7: push    0
0x562BA9: push    ebx
0x562BAA: push    edi
0x562BAB: push    edx
0x562BAC: mov     ecx, eax
0x562BAE: call    sub_71FB40
0x562BB3: mov     [esp+1F8h+var_1E4], eax
0x562BB7: jmp     short loc_562BC5
0x562BB9: mov     [esp+1F8h+var_1E4], 0
0x562BC1: mov     eax, [esp+1F8h+var_1E4]
0x562BC5: mov     esi, [esp+1F8h+var_190]
0x562BC9: mov     ebx, [esi+18h]
0x562BCC: mov     edi, [esp+1F8h+var_1D8]
0x562BD0: mov     ebp, [ebx+edi]
0x562BD3: add     ebx, edi
0x562BD5: cmp     ebp, eax
0x562BD7: mov     byte ptr [esp+1F8h+var_4], 2
0x562BDF: jz      short loc_562C16
0x562BE1: test    ebp, ebp
0x562BE3: jz      short loc_562C06
0x562BE5: lea     eax, [ebp+4]
0x562BE8: push    eax; lpAddend
0x562BE9: call    dword ptr ds:0A2807Ch
0x562BEF: test    eax, eax
0x562BF1: jnz     short loc_562C02
0x562BF3: test    ebp, ebp
0x562BF5: jz      short loc_562C02
0x562BF7: mov     edx, [ebp+0]
0x562BFA: mov     eax, [edx]
0x562BFC: push    1
0x562BFE: mov     ecx, ebp
0x562C00: call    eax
0x562C02: mov     eax, [esp+1F8h+var_1E4]
0x562C06: test    eax, eax
0x562C08: mov     [ebx], eax
0x562C0A: jz      short loc_562C16
0x562C0C: add     eax, 4
0x562C0F: push    eax; lpAddend
0x562C10: call    dword ptr ds:0A28078h
0x562C16: push    10h; Size
0x562C18: call    FormHeapAlloc
0x562C1D: add     esp, 4
0x562C20: mov     [esp+1F8h+var_1CC], eax
0x562C24: test    eax, eax
0x562C26: mov     byte ptr [esp+1F8h+var_4], 8
0x562C2E: jz      short loc_562C3B
0x562C30: mov     ecx, eax
0x562C32: call    sub_7F2360
0x562C37: mov     ebp, eax
0x562C39: jmp     short loc_562C3D
0x562C3B: xor     ebp, ebp
0x562C3D: mov     ebx, [esp+1F8h+var_1C4]
0x562C41: cmp     ebx, ebp
0x562C43: mov     byte ptr [esp+1F8h+var_4], 2
0x562C4B: jz      short loc_562C7D
0x562C4D: test    ebx, ebx
0x562C4F: jz      short loc_562C69
0x562C51: lea     ecx, [ebx+4]
0x562C54: push    ecx; lpAddend
0x562C55: call    dword ptr ds:0A2807Ch
0x562C5B: test    eax, eax
0x562C5D: jnz     short loc_562C69
0x562C5F: mov     edx, [ebx]
0x562C61: mov     eax, [edx]
0x562C63: push    1
0x562C65: mov     ecx, ebx
0x562C67: call    eax
0x562C69: test    ebp, ebp
0x562C6B: mov     ebx, ebp
0x562C6D: mov     [esp+1F8h+var_1C4], ebx
0x562C71: jz      short loc_562C7D
0x562C73: add     ebp, 4
0x562C76: push    ebp; lpAddend
0x562C77: call    dword ptr ds:0A28078h
0x562C7D: mov     ecx, [esp+1F8h+var_1E0]
0x562C81: mov     dx, word ptr [esp+1F8h+var_19C]
0x562C86: push    0B0h ; '°'; Size
0x562C8B: mov     [ebx+8], ecx
0x562C8E: mov     [ebx+0Ch], dx
0x562C92: call    FormHeapAlloc
0x562C97: add     esp, 4
0x562C9A: mov     [esp+1F8h+var_1CC], eax
0x562C9E: test    eax, eax
0x562CA0: mov     byte ptr [esp+1F8h+var_4], 9
0x562CA8: jz      short loc_562CC1
0x562CAA: mov     ecx, [esi+20h]
0x562CAD: push    ecx
0x562CAE: mov     ecx, [esp+1FCh+var_1A8]
0x562CB2: push    ebx
0x562CB3: push    ecx
0x562CB4: mov     ecx, eax; this
0x562CB6: call    ??0SpeedTreeLeafShaderProperty@@QAE@XZ; SpeedTreeLeafShaderProperty::SpeedTreeLeafShaderProperty(void)
0x562CBB: mov     [esp+1F8h+var_1E4], eax
0x562CBF: jmp     short loc_562CC9
0x562CC1: mov     [esp+1F8h+var_1E4], 0
0x562CC9: mov     ebx, [esi+28h]
0x562CCC: mov     ebp, [ebx+edi]
0x562CCF: add     ebx, edi
0x562CD1: cmp     ebp, [esp+1F8h+var_1E4]
0x562CD5: mov     byte ptr [esp+1F8h+var_4], 2
0x562CDD: jz      short loc_562D14
0x562CDF: test    ebp, ebp
0x562CE1: jz      short loc_562D00
0x562CE3: lea     edx, [ebp+4]
0x562CE6: push    edx; lpAddend
0x562CE7: call    dword ptr ds:0A2807Ch
0x562CED: test    eax, eax
0x562CEF: jnz     short loc_562D00
0x562CF1: test    ebp, ebp
0x562CF3: jz      short loc_562D00
0x562CF5: mov     eax, [ebp+0]
0x562CF8: mov     edx, [eax]
0x562CFA: push    1
0x562CFC: mov     ecx, ebp
0x562CFE: call    edx
0x562D00: mov     eax, [esp+1F8h+var_1E4]
0x562D04: test    eax, eax
0x562D06: mov     [ebx], eax
0x562D08: jz      short loc_562D14
0x562D0A: add     eax, 4
0x562D0D: push    eax; lpAddend
0x562D0E: call    dword ptr ds:0A28078h
0x562D14: mov     ecx, [esi+28h]
0x562D17: mov     ecx, [edi+ecx]
0x562D1A: mov     eax, [esi+38h]
0x562D1D: mov     edx, [ecx]
0x562D1F: push    eax
0x562D20: mov     eax, [edx+7Ch]
0x562D23: call    eax
0x562D25: mov     ecx, [esi+28h]
0x562D28: mov     ecx, [edi+ecx]
0x562D2B: mov     edx, [ecx]
0x562D2D: mov     eax, [edx+58h]
0x562D30: push    0
0x562D32: call    eax
0x562D34: mov     ecx, [esi+28h]
0x562D37: mov     ecx, [edi+ecx]
0x562D3A: mov     edx, [esi+18h]
0x562D3D: mov     eax, [ecx]
0x562D3F: mov     ebx, [edi+edx]
0x562D42: mov     edx, [eax+94h]
0x562D48: push    0
0x562D4A: call    edx
0x562D4C: push    eax
0x562D4D: mov     ecx, ebx
0x562D4F: call    sub_6C61E0
0x562D54: mov     eax, [esi+18h]
0x562D57: mov     eax, [edi+eax]
0x562D5A: mov     cx, [eax+2Eh]
0x562D5E: mov     ebx, [esp+1F8h+var_1A8]
0x562D62: and     cx, 0FFFh
0x562D67: or      cx, 4000h
0x562D6C: mov     [eax+2Eh], cx
0x562D70: mov     edx, [esi+18h]
0x562D73: mov     eax, [edi+edx]
0x562D76: mov     byte ptr [eax+30h], 11h
0x562D7A: mov     eax, [esi+18h]
0x562D7D: mov     eax, [edi+eax]
0x562D80: mov     byte ptr [eax+31h], 1Fh
0x562D84: add     ebx, 1
0x562D87: add     edi, 4
0x562D8A: cmp     bx, word ptr [esp+1F8h+var_1B0]
0x562D8F: mov     [esp+1F8h+var_1A8], ebx
0x562D93: mov     [esp+1F8h+var_1D8], edi
0x562D97: jb      loc_562732
0x562D9D: mov     ecx, [esi+0Ch]
0x562DA0: call    sub_787210
0x562DA5: mov     esi, [esp+1F8h+var_1C4]
0x562DA9: test    esi, esi
0x562DAB: mov     byte ptr [esp+1F8h+var_4], 1
0x562DB3: jz      short loc_562DCD
0x562DB5: lea     ecx, [esi+4]
0x562DB8: push    ecx; lpAddend
0x562DB9: call    dword ptr ds:0A2807Ch
0x562DBF: test    eax, eax
0x562DC1: jnz     short loc_562DCD
0x562DC3: mov     edx, [esi]
0x562DC5: mov     eax, [edx]
0x562DC7: push    1
0x562DC9: mov     ecx, esi
0x562DCB: call    eax
0x562DCD: lea     ecx, [esp+1F8h+var_154]
0x562DD4: mov     byte ptr [esp+1F8h+var_4], 0
0x562DDC: call    sub_786FC0
0x562DE1: lea     ecx, [esp+1F8h+Src]
0x562DE8: mov     [esp+1F8h+var_4], 0FFFFFFFFh
0x562DF3: call    sub_787B20
0x562DF8: mov     ecx, [esp+1F8h+var_C]
0x562DFF: mov     large fs:0, ecx
0x562E06: pop     ecx
0x562E07: pop     edi
0x562E08: pop     esi
0x562E09: pop     ebp
0x562E0A: pop     ebx
0x562E0B: add     esp, 1E4h
0x562E11: retn    4
