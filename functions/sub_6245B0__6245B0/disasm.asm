0x6245B0: fld     dword ptr ds:0A30634h
0x6245B6: sub     esp, 0Ch
0x6245B9: push    esi
0x6245BA: mov     esi, ecx
0x6245BC: fstp    dword ptr [esi+184h]
0x6245C2: cmp     byte ptr ds:0B14B74h, 0
0x6245C9: jz      loc_6246C6
0x6245CF: mov     ecx, [esi+3Ch]
0x6245D2: test    ecx, ecx
0x6245D4: jz      loc_6246C6
0x6245DA: mov     eax, [ecx]
0x6245DC: mov     edx, [eax+154h]
0x6245E2: call    edx
0x6245E4: test    eax, eax
0x6245E6: jz      loc_6246C6
0x6245EC: mov     ecx, [esi+3Ch]
0x6245EF: mov     eax, [ecx]
0x6245F1: mov     edx, [eax+164h]
0x6245F7: call    edx
0x6245F9: test    eax, eax
0x6245FB: jz      loc_6246C6
0x624601: mov     eax, [esi+3Ch]
0x624604: cmp     dword ptr [eax+58h], 0
0x624608: jz      loc_6246C6
0x62460E: mov     ecx, esi
0x624610: call    sub_6135F0
0x624615: test    eax, eax
0x624617: mov     ecx, [esi+3Ch]
0x62461A: jz      loc_6246BA
0x624620: mov     ecx, [ecx+58h]
0x624623: mov     edx, [ecx]
0x624625: mov     eax, [edx+47Ch]
0x62462B: call    eax
0x62462D: test    eax, eax
0x62462F: jnz     loc_6246C6
0x624635: mov     ecx, [esi+3Ch]
0x624638: mov     edx, [ecx]
0x62463A: mov     eax, [edx+284h]
0x624640: push    4
0x624642: call    eax
0x624644: test    eax, eax
0x624646: jnz     loc_6246DC
0x62464C: mov     ecx, [esi+3Ch]
0x62464F: mov     edx, [ecx]
0x624651: mov     eax, [edx+26Ch]
0x624657: call    eax
0x624659: fmul    qword ptr ds:0A3C770h
0x62465F: push    0
0x624661: mov     ecx, esi
0x624663: fstp    [esp+14h+var_4]
0x624667: call    sub_6135F0
0x62466C: mov     ecx, [esi+3Ch]
0x62466F: push    eax
0x624670: call    TesObjectREF_GetDistance
0x624675: fstp    dword ptr [esp+10h+var_10+4]
0x624679: mov     ecx, [esi+3Ch]
0x62467C: fld     dword ptr [esp+10h+var_10+4]
0x624680: mov     edx, [ecx]
0x624682: fstp    [esp+10h+var_10+4]
0x624686: mov     eax, [edx+26Ch]
0x62468C: call    eax
0x62468E: fadd    [esp+10h+var_4]
0x624692: fcomp   [esp+10h+var_10+4]
0x624696: fnstsw  ax
0x624698: test    ah, 5
0x62469B: jp      short loc_6246DC
0x62469D: mov     ecx, esi
0x62469F: call    sub_6135F0
0x6246A4: push    eax
0x6246A5: mov     ecx, esi
0x6246A7: call    sub_6162D0
0x6246AC: mov     ecx, esi
0x6246AE: call    sub_6135F0
0x6246B3: test    eax, eax
0x6246B5: jnz     short loc_6246D2
0x6246B7: mov     ecx, [esi+3Ch]
0x6246BA: mov     edx, [ecx]
0x6246BC: mov     eax, [edx+340h]
0x6246C2: push    0
0x6246C4: call    eax
0x6246C6: mov     eax, 0Dh
0x6246CB: pop     esi
0x6246CC: add     esp, 0Ch
0x6246CF: retn    4
0x6246D2: mov     eax, [esi+70h]
0x6246D5: pop     esi
0x6246D6: add     esp, 0Ch
0x6246D9: retn    4
0x6246DC: cmp     byte ptr [esi+59h], 0
0x6246E0: push    edi
0x6246E1: mov     edi, 0Bh
0x6246E6: jnz     short loc_6246FF
0x6246E8: mov     ecx, esi
0x6246EA: call    sub_624480
0x6246EF: cmp     [esi+6Ch], edi
0x6246F2: mov     byte ptr [esi+59h], 1
0x6246F6: jnz     short loc_6246FF
0x6246F8: mov     ecx, esi
0x6246FA: call    sub_61C6E0
0x6246FF: mov     ecx, [esi+3Ch]
0x624702: mov     edx, [ecx]
0x624704: mov     eax, [edx+198h]
0x62470A: push    0
0x62470C: call    eax
0x62470E: test    al, al
0x624710: jz      short loc_62472E
0x624712: mov     ecx, [esi+3Ch]
0x624715: mov     edx, [ecx]
0x624717: mov     eax, [edx+340h]
0x62471D: push    0
0x62471F: call    eax
0x624721: pop     edi
0x624722: mov     eax, 0Dh
0x624727: pop     esi
0x624728: add     esp, 0Ch
0x62472B: retn    4
0x62472E: fld     [esp+10h+arg_4]
0x624732: push    ebx
0x624733: fadd    dword ptr [esi+44h]
0x624736: mov     ecx, esi
0x624738: fstp    dword ptr [esi+44h]
0x62473B: call    sub_6135F0
0x624740: mov     edx, [eax]
0x624742: mov     ecx, eax
0x624744: mov     eax, [edx+198h]
0x62474A: push    0
0x62474C: call    eax
0x62474E: test    al, al
0x624750: jnz     loc_624C24
0x624756: mov     ecx, esi
0x624758: call    sub_6135F0
0x62475D: mov     ecx, [eax+8]
0x624760: shr     ecx, 0Bh
0x624763: test    cl, 1
0x624766: jnz     loc_624C24
0x62476C: cmp     [esi+70h], edi
0x62476F: jnz     short loc_62477C
0x624771: pop     ebx
0x624772: mov     eax, edi
0x624774: pop     edi
0x624775: pop     esi
0x624776: add     esp, 0Ch
0x624779: retn    4
0x62477C: mov     ecx, [esi+3Ch]
0x62477F: mov     edx, [ecx]
0x624781: mov     eax, [edx+164h]
0x624787: call    eax
0x624789: test    eax, eax
0x62478B: jz      short loc_6247C3
0x62478D: mov     ecx, [esi+3Ch]
0x624790: mov     edx, [ecx]
0x624792: mov     eax, [edx+164h]
0x624798: push    3
0x62479A: call    eax
0x62479C: mov     ecx, eax
0x62479E: call    ActorAnimData_GetAnimGroupFromField8Value
0x6247A3: push    eax
0x6247A4: call    sub_51ACC0
0x6247A9: add     esp, 4
0x6247AC: test    al, al
0x6247AE: jz      short loc_6247C3
0x6247B0: mov     ecx, esi
0x6247B2: call    sub_61FC30
0x6247B7: mov     eax, [esi+70h]
0x6247BA: pop     ebx
0x6247BB: pop     edi
0x6247BC: pop     esi
0x6247BD: add     esp, 0Ch
0x6247C0: retn    4
0x6247C3: mov     ecx, [esi+3Ch]
0x6247C6: mov     edx, [ecx]
0x6247C8: mov     eax, [edx+164h]
0x6247CE: call    eax
0x6247D0: test    eax, eax
0x6247D2: jz      short loc_6247F6
0x6247D4: mov     ecx, [esi+3Ch]
0x6247D7: call    Actor_GetCurrentAction
0x6247DC: cmp     eax, 7
0x6247DF: jz      def_624B11; jumptable 00624B11 default case, cases 5,8,9,13
0x6247E5: mov     ecx, [esi+3Ch]
0x6247E8: call    Actor_GetCurrentAction
0x6247ED: cmp     eax, 8
0x6247F0: jz      def_624B11; jumptable 00624B11 default case, cases 5,8,9,13
0x6247F6: mov     ecx, [esi+3Ch]
0x6247F9: mov     edx, [ecx]
0x6247FB: mov     eax, [edx+19Ch]
0x624801: call    eax
0x624803: test    al, al
0x624805: jnz     def_624B11; jumptable 00624B11 default case, cases 5,8,9,13
0x62480B: mov     ecx, [esi+3Ch]
0x62480E: mov     edx, [ecx]
0x624810: mov     eax, [edx+1A0h]
0x624816: call    eax
0x624818: test    al, al
0x62481A: jnz     def_624B11; jumptable 00624B11 default case, cases 5,8,9,13
0x624820: mov     eax, [esi+70h]
0x624823: cmp     eax, 7
0x624826: jz      loc_624BFC
0x62482C: cmp     eax, 0Ch
0x62482F: jz      loc_624BFC
0x624835: cmp     dword ptr [esi+6Ch], 8
0x624839: jz      loc_624BFC
0x62483F: push    0
0x624841: mov     ecx, esi
0x624843: call    sub_624030
0x624848: cmp     byte ptr [esi+1BDh], 0
0x62484F: jnz     def_624B11; jumptable 00624B11 default case, cases 5,8,9,13
0x624855: mov     ecx, esi
0x624857: call    sub_612D30
0x62485C: mov     ecx, [esi+3Ch]
0x62485F: mov     edx, [ecx]
0x624861: mov     eax, [edx+19Ch]
0x624867: call    eax
0x624869: test    al, al
0x62486B: jz      short loc_6248A7
0x62486D: cmp     dword ptr [esi+70h], 0Dh
0x624871: jz      short loc_624886
0x624873: fld     dword ptr ds:0A30634h
0x624879: mov     dword ptr [esi+70h], 0Dh
0x624880: fstp    dword ptr [esi+188h]
0x624886: cmp     dword ptr [esi+6Ch], 0
0x62488A: jz      loc_624C3D
0x624890: push    0
0x624892: mov     ecx, esi
0x624894: call    sub_619920
0x624899: pop     ebx
0x62489A: pop     edi
0x62489B: mov     eax, 0Dh
0x6248A0: pop     esi
0x6248A1: add     esp, 0Ch
0x6248A4: retn    4
0x6248A7: mov     ecx, esi
0x6248A9: call    sub_61FC30
0x6248AE: mov     ecx, [esi+3Ch]
0x6248B1: mov     edx, [ecx]
0x6248B3: mov     eax, [edx+25Ch]
0x6248B9: call    eax
0x6248BB: test    al, al
0x6248BD: jz      short loc_6248D9
0x6248BF: mov     eax, [esi+6Ch]
0x6248C2: cmp     eax, 0Fh
0x6248C5: jz      short loc_6248D9
0x6248C7: cmp     eax, 0Ah
0x6248CA: jz      short loc_6248D9
0x6248CC: cmp     dword ptr [esi+70h], 0Dh
0x6248D0: jz      short loc_6248D9
0x6248D2: mov     ecx, esi
0x6248D4: call    sub_620E50
0x6248D9: mov     ecx, [esi+3Ch]
0x6248DC: call    sub_5E6FE0
0x6248E1: test    al, al
0x6248E3: jnz     loc_624C3D
0x6248E9: cmp     dword ptr [esi+6Ch], 9
0x6248ED: jnz     short loc_624904
0x6248EF: mov     ecx, esi
0x6248F1: call    sub_61D5D0
0x6248F6: pop     ebx
0x6248F7: pop     edi
0x6248F8: mov     eax, 0Dh
0x6248FD: pop     esi
0x6248FE: add     esp, 0Ch
0x624901: retn    4
0x624904: mov     ecx, [esi+3Ch]
0x624907: mov     edx, [ecx]
0x624909: mov     eax, [edx+380h]
0x62490F: call    eax
0x624911: test    eax, eax
0x624913: jz      short loc_62492A
0x624915: push    9
0x624917: mov     ecx, esi
0x624919: call    sub_619920
0x62491E: mov     eax, [esi+70h]
0x624921: pop     ebx
0x624922: pop     edi
0x624923: pop     esi
0x624924: add     esp, 0Ch
0x624927: retn    4
0x62492A: mov     eax, [esi+70h]
0x62492D: cmp     eax, 6
0x624930: jnz     short loc_624945
0x624932: mov     ecx, esi
0x624934: call    sub_615420
0x624939: mov     eax, [esi+70h]
0x62493C: pop     ebx
0x62493D: pop     edi
0x62493E: pop     esi
0x62493F: add     esp, 0Ch
0x624942: retn    4
0x624945: cmp     eax, 5
0x624948: jnz     short loc_62495D
0x62494A: mov     ecx, esi
0x62494C: call    sub_619640
0x624951: mov     eax, [esi+70h]
0x624954: pop     ebx
0x624955: pop     edi
0x624956: pop     esi
0x624957: add     esp, 0Ch
0x62495A: retn    4
0x62495D: xor     bl, bl
0x62495F: cmp     eax, 0Dh
0x624962: jnz     short loc_6249E3
0x624964: cmp     dword ptr [esi+6Ch], 7
0x624968: jz      short loc_6249E3
0x62496A: push    0
0x62496C: push    0
0x62496E: mov     ecx, esi
0x624970: call    sub_6239D0
0x624975: mov     edi, eax
0x624977: push    edi
0x624978: mov     ecx, esi
0x62497A: call    sub_612DE0
0x62497F: mov     ecx, esi
0x624981: call    sub_622180
0x624986: mov     ecx, esi
0x624988: mov     bl, 1
0x62498A: call    sub_614290
0x62498F: test    al, al
0x624991: jnz     short loc_6249E3
0x624993: push    edi
0x624994: call    sub_612690
0x624999: add     esp, 4
0x62499C: test    al, al
0x62499E: jz      short loc_6249B3
0x6249A0: mov     ecx, esi
0x6249A2: call    sub_61FE90
0x6249A7: mov     eax, [esi+70h]
0x6249AA: pop     ebx
0x6249AB: pop     edi
0x6249AC: pop     esi
0x6249AD: add     esp, 0Ch
0x6249B0: retn    4
0x6249B3: mov     ecx, [esi+3Ch]
0x6249B6: call    sub_5E0F50
0x6249BB: mov     edx, [eax]
0x6249BD: mov     ecx, eax
0x6249BF: mov     eax, [edx+16Ch]
0x6249C5: push    80h ; '€'
0x6249CA: call    eax
0x6249CC: test    al, al
0x6249CE: jz      short loc_6249D7
0x6249D0: mov     ecx, esi
0x6249D2: call    sub_61FEF0
0x6249D7: mov     eax, [esi+70h]
0x6249DA: pop     ebx
0x6249DB: pop     edi
0x6249DC: pop     esi
0x6249DD: add     esp, 0Ch
0x6249E0: retn    4
0x6249E3: mov     ecx, esi
0x6249E5: call    sub_6135F0
0x6249EA: mov     ecx, ds:0B333C4h
0x6249F0: cmp     eax, ecx
0x6249F2: jnz     short loc_624A4D
0x6249F4: cmp     byte ptr [esi+4Bh], 0
0x6249F8: jz      short loc_624A4D
0x6249FA: mov     edx, [ecx]
0x6249FC: mov     eax, [edx+350h]
0x624A02: call    eax
0x624A04: test    al, al
0x624A06: jz      short loc_624A31
0x624A08: cmp     byte ptr [esi+4Ch], 0
0x624A0C: jnz     short loc_624A31
0x624A0E: mov     ecx, [esi+3Ch]
0x624A11: mov     byte ptr [esi+4Ch], 1
0x624A15: mov     edx, [ecx]
0x624A17: mov     eax, ds:0B333C4h
0x624A1C: mov     edx, [edx+36Ch]
0x624A22: push    eax
0x624A23: call    edx
0x624A25: mov     eax, [esi+70h]
0x624A28: pop     ebx
0x624A29: pop     edi
0x624A2A: pop     esi
0x624A2B: add     esp, 0Ch
0x624A2E: retn    4
0x624A31: mov     ecx, ds:0B333C4h
0x624A37: mov     eax, [ecx]
0x624A39: mov     edx, [eax+350h]
0x624A3F: call    edx
0x624A41: test    al, al
0x624A43: jnz     short loc_624A4D
0x624A45: cmp     [esi+4Ch], al
0x624A48: jz      short loc_624A4D
0x624A4A: mov     [esi+4Ch], al
0x624A4D: cmp     dword ptr [esi+70h], 0Ah
0x624A51: mov     ecx, esi
0x624A53: jnz     short loc_624A66
0x624A55: call    sub_619420
0x624A5A: mov     eax, [esi+70h]
0x624A5D: pop     ebx
0x624A5E: pop     edi
0x624A5F: pop     esi
0x624A60: add     esp, 0Ch
0x624A63: retn    4
0x624A66: cmp     dword ptr [esi+6Ch], 0Dh
0x624A6A: jnz     short loc_624A7D
0x624A6C: call    sub_61DDC0
0x624A71: mov     eax, [esi+70h]
0x624A74: pop     ebx
0x624A75: pop     edi
0x624A76: pop     esi
0x624A77: add     esp, 0Ch
0x624A7A: retn    4
0x624A7D: call    sub_621270
0x624A82: test    bl, bl
0x624A84: jnz     short loc_624A8D
0x624A86: mov     ecx, esi
0x624A88: call    sub_622180
0x624A8D: mov     eax, [esi+1A8h]
0x624A93: cmp     eax, ds:0B372F0h
0x624A99: jge     short loc_624B05
0x624A9B: mov     eax, [esi+6Ch]
0x624A9E: cmp     eax, 0Bh
0x624AA1: jz      short loc_624B05
0x624AA3: cmp     eax, 0Ch
0x624AA6: jz      short loc_624B05
0x624AA8: cmp     eax, 0Fh
0x624AAB: jz      short loc_624B05
0x624AAD: cmp     eax, 0Ah
0x624AB0: jz      short loc_624B05
0x624AB2: push    0
0x624AB4: mov     ecx, esi
0x624AB6: call    sub_6150E0
0x624ABB: test    al, al
0x624ABD: jnz     short loc_624B05
0x624ABF: push    2
0x624AC1: push    4
0x624AC3: call    TESTopic__GEtTopic
0x624AC8: mov     ecx, [esi+3Ch]
0x624ACB: mov     edx, ds:0B333C4h
0x624AD1: add     esp, 8
0x624AD4: push    1
0x624AD6: mov     [ecx+0E4h], edx
0x624ADC: mov     edx, [esi+3Ch]
0x624ADF: mov     ecx, [edx+58h]
0x624AE2: mov     edi, [ecx]
0x624AE4: push    0
0x624AE6: push    0
0x624AE8: push    eax
0x624AE9: mov     eax, [edi+1A4h]
0x624AEF: push    edx
0x624AF0: call    eax
0x624AF2: mov     ecx, esi
0x624AF4: call    sub_620E50
0x624AF9: mov     eax, [esi+70h]
0x624AFC: pop     ebx
0x624AFD: pop     edi
0x624AFE: pop     esi
0x624AFF: add     esp, 0Ch
0x624B02: retn    4
0x624B05: mov     eax, [esi+6Ch]
0x624B08: cmp     eax, 10h; switch 17 cases
0x624B0B: ja      def_624B11; jumptable 00624B11 default case, cases 5,8,9,13
0x624B11: jmp     ds:jpt_624B11[eax*4]; switch jump
0x624B18: mov     ecx, esi; jumptable 00624B11 case 0
0x624B1A: call    sub_623C00
0x624B1F: mov     eax, [esi+70h]
0x624B22: pop     ebx
0x624B23: pop     edi
0x624B24: pop     esi
0x624B25: add     esp, 0Ch
0x624B28: retn    4
0x624B2B: mov     ecx, esi; jumptable 00624B11 case 10
0x624B2D: call    sub_622BD0
0x624B32: mov     eax, [esi+70h]
0x624B35: pop     ebx
0x624B36: pop     edi
0x624B37: pop     esi
0x624B38: add     esp, 0Ch
0x624B3B: retn    4
0x624B3E: mov     ecx, esi; jumptable 00624B11 case 11
0x624B40: call    sub_622E30
0x624B45: mov     eax, [esi+70h]
0x624B48: pop     ebx
0x624B49: pop     edi
0x624B4A: pop     esi
0x624B4B: add     esp, 0Ch
0x624B4E: retn    4
0x624B51: mov     ecx, esi; jumptable 00624B11 case 12
0x624B53: call    sub_6231E0
0x624B58: mov     eax, [esi+70h]
0x624B5B: pop     ebx
0x624B5C: pop     edi
0x624B5D: pop     esi
0x624B5E: add     esp, 0Ch
0x624B61: retn    4
0x624B64: mov     ecx, esi; jumptable 00624B11 case 15
0x624B66: call    sub_622D40
0x624B6B: mov     eax, [esi+70h]
0x624B6E: pop     ebx
0x624B6F: pop     edi
0x624B70: pop     esi
0x624B71: add     esp, 0Ch
0x624B74: retn    4
0x624B77: mov     ecx, esi; jumptable 00624B11 case 2
0x624B79: call    sub_6214B0
0x624B7E: mov     eax, [esi+70h]
0x624B81: pop     ebx
0x624B82: pop     edi
0x624B83: pop     esi
0x624B84: add     esp, 0Ch
0x624B87: retn    4
0x624B8A: mov     ecx, esi; jumptable 00624B11 case 1
0x624B8C: call    sub_621850
0x624B91: mov     eax, [esi+70h]
0x624B94: pop     ebx
0x624B95: pop     edi
0x624B96: pop     esi
0x624B97: add     esp, 0Ch
0x624B9A: retn    4
0x624B9D: mov     ecx, esi; jumptable 00624B11 case 3
0x624B9F: call    sub_6218D0
0x624BA4: mov     eax, [esi+70h]
0x624BA7: pop     ebx
0x624BA8: pop     edi
0x624BA9: pop     esi
0x624BAA: add     esp, 0Ch
0x624BAD: retn    4
0x624BB0: mov     ecx, esi; jumptable 00624B11 case 4
0x624BB2: call    sub_623480
0x624BB7: mov     eax, [esi+70h]
0x624BBA: pop     ebx
0x624BBB: pop     edi
0x624BBC: pop     esi
0x624BBD: add     esp, 0Ch
0x624BC0: retn    4
0x624BC3: mov     ecx, esi; jumptable 00624B11 cases 14,16
0x624BC5: call    sub_61CC00
0x624BCA: mov     eax, [esi+70h]
0x624BCD: pop     ebx
0x624BCE: pop     edi
0x624BCF: pop     esi
0x624BD0: add     esp, 0Ch
0x624BD3: retn    4
0x624BD6: mov     ecx, esi; jumptable 00624B11 case 6
0x624BD8: call    sub_61D410
0x624BDD: mov     eax, [esi+70h]
0x624BE0: pop     ebx
0x624BE1: pop     edi
0x624BE2: pop     esi
0x624BE3: add     esp, 0Ch
0x624BE6: retn    4
0x624BE9: mov     ecx, esi; jumptable 00624B11 case 7
0x624BEB: call    sub_623FA0
0x624BF0: mov     eax, [esi+70h]; jumptable 00624B11 default case, cases 5,8,9,13
0x624BF3: pop     ebx
0x624BF4: pop     edi
0x624BF5: pop     esi
0x624BF6: add     esp, 0Ch
0x624BF9: retn    4
0x624BFC: mov     edi, [esi+3Ch]
0x624BFF: mov     ecx, esi
0x624C01: call    sub_620E80
0x624C06: mov     edx, [edi]
0x624C08: mov     eax, [edx+334h]
0x624C0E: push    1
0x624C10: mov     ecx, edi
0x624C12: call    eax
0x624C14: test    al, al
0x624C16: jz      short loc_624C3D
0x624C18: mov     eax, [esi+70h]
0x624C1B: pop     ebx
0x624C1C: pop     edi
0x624C1D: pop     esi
0x624C1E: add     esp, 0Ch
0x624C21: retn    4
0x624C24: mov     ebx, [esi+3Ch]
0x624C27: mov     edi, [ebx]
0x624C29: mov     ecx, esi
0x624C2B: add     edi, 340h
0x624C31: call    sub_6135F0
0x624C36: mov     edx, [edi]
0x624C38: push    eax
0x624C39: mov     ecx, ebx
0x624C3B: call    edx
0x624C3D: pop     ebx
0x624C3E: pop     edi
0x624C3F: mov     eax, 0Dh
0x624C44: pop     esi
0x624C45: add     esp, 0Ch
0x624C48: retn    4
