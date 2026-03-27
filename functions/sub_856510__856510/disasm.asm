0x856510: push    0FFFFFFFFh
0x856512: push    offset SEH_856510
0x856517: mov     eax, large fs:0
0x85651D: push    eax
0x85651E: push    esi
0x85651F: mov     eax, ds:0B30AACh
0x856524: xor     eax, esp
0x856526: push    eax
0x856527: lea     eax, [esp+14h+var_C]
0x85652B: mov     large fs:0, eax
0x856531: mov     esi, ecx
0x856533: cmp     [esp+14h+arg_1C], 0
0x856538: jnz     loc_85699D
0x85653E: cmp     [esp+14h+arg_20], 0
0x856543: jnz     loc_856820
0x856549: cmp     [esp+14h+arg_24], 0
0x85654E: jnz     loc_856765
0x856554: cmp     [esp+14h+arg_30], 0
0x856559: jnz     loc_8566BC
0x85655F: cmp     [esp+14h+arg_2C], 0
0x856564: jnz     loc_856613
0x85656A: cmp     [esp+14h+arg_34], 0
0x85656F: jnz     short loc_8565C2
0x856571: cmp     byte ptr [esp+14h+arg_14], 1
0x856576: jnz     loc_856D1D
0x85657C: push    10h; Size
0x85657E: call    FormHeapAlloc
0x856583: add     esp, 4
0x856586: mov     [esp+14h+arg_14], eax
0x85658A: test    eax, eax
0x85658C: mov     [esp+14h+var_4], 0
0x856594: jz      loc_856800
0x85659A: mov     ecx, [esp+14h+arg_C]
0x85659E: mov     edx, [esp+14h+arg_8]
0x8565A2: push    ecx
0x8565A3: mov     ecx, [esp+18h+arg_4]
0x8565A7: push    edx
0x8565A8: mov     edx, [esp+1Ch+arg_0]
0x8565AC: push    ecx
0x8565AD: push    3
0x8565AF: push    1
0x8565B1: push    60h ; '`'
0x8565B3: push    edx
0x8565B4: push    eax
0x8565B5: call    sub_7E2370
0x8565BA: add     esp, 20h
0x8565BD: jmp     loc_856802
0x8565C2: cmp     byte ptr [esp+14h+arg_14], 1
0x8565C7: jnz     loc_856D1D
0x8565CD: push    10h; Size
0x8565CF: call    FormHeapAlloc
0x8565D4: add     esp, 4
0x8565D7: mov     [esp+14h+arg_14], eax
0x8565DB: test    eax, eax
0x8565DD: mov     [esp+14h+var_4], 1
0x8565E5: jz      loc_856800
0x8565EB: mov     ecx, [esp+14h+arg_C]
0x8565EF: mov     edx, [esp+14h+arg_8]
0x8565F3: push    ecx
0x8565F4: mov     ecx, [esp+18h+arg_4]
0x8565F8: push    edx
0x8565F9: mov     edx, [esp+1Ch+arg_0]
0x8565FD: push    ecx
0x8565FE: push    3
0x856600: push    1
0x856602: push    6Ah ; 'j'
0x856604: push    edx
0x856605: push    eax
0x856606: call    sub_7E2370
0x85660B: add     esp, 20h
0x85660E: jmp     loc_856802
0x856613: cmp     [esp+14h+arg_34], 0
0x856618: jnz     short loc_85666B
0x85661A: cmp     byte ptr [esp+14h+arg_14], 1
0x85661F: jnz     loc_856D1D
0x856625: push    10h; Size
0x856627: call    FormHeapAlloc
0x85662C: add     esp, 4
0x85662F: mov     [esp+14h+arg_14], eax
0x856633: test    eax, eax
0x856635: mov     [esp+14h+var_4], 2
0x85663D: jz      loc_856800
0x856643: mov     ecx, [esp+14h+arg_C]
0x856647: mov     edx, [esp+14h+arg_8]
0x85664B: push    ecx
0x85664C: mov     ecx, [esp+18h+arg_4]
0x856650: push    edx
0x856651: mov     edx, [esp+1Ch+arg_0]
0x856655: push    ecx
0x856656: push    3
0x856658: push    1
0x85665A: push    6Bh ; 'k'
0x85665C: push    edx
0x85665D: push    eax
0x85665E: call    sub_7E2370
0x856663: add     esp, 20h
0x856666: jmp     loc_856802
0x85666B: cmp     byte ptr [esp+14h+arg_14], 1
0x856670: jnz     loc_856D1D
0x856676: push    10h; Size
0x856678: call    FormHeapAlloc
0x85667D: add     esp, 4
0x856680: mov     [esp+14h+arg_14], eax
0x856684: test    eax, eax
0x856686: mov     [esp+14h+var_4], 3
0x85668E: jz      loc_856800
0x856694: mov     ecx, [esp+14h+arg_C]
0x856698: mov     edx, [esp+14h+arg_8]
0x85669C: push    ecx
0x85669D: mov     ecx, [esp+18h+arg_4]
0x8566A1: push    edx
0x8566A2: mov     edx, [esp+1Ch+arg_0]
0x8566A6: push    ecx
0x8566A7: push    3
0x8566A9: push    1
0x8566AB: push    75h ; 'u'
0x8566AD: push    edx
0x8566AE: push    eax
0x8566AF: call    sub_7E2370
0x8566B4: add     esp, 20h
0x8566B7: jmp     loc_856802
0x8566BC: cmp     [esp+14h+arg_2C], 0
0x8566C1: jnz     short loc_856714
0x8566C3: cmp     byte ptr [esp+14h+arg_14], 1
0x8566C8: jnz     loc_856D1D
0x8566CE: push    10h; Size
0x8566D0: call    FormHeapAlloc
0x8566D5: add     esp, 4
0x8566D8: mov     [esp+14h+arg_14], eax
0x8566DC: test    eax, eax
0x8566DE: mov     [esp+14h+var_4], 4
0x8566E6: jz      loc_856800
0x8566EC: mov     ecx, [esp+14h+arg_C]
0x8566F0: mov     edx, [esp+14h+arg_8]
0x8566F4: push    ecx
0x8566F5: mov     ecx, [esp+18h+arg_4]
0x8566F9: push    edx
0x8566FA: mov     edx, [esp+1Ch+arg_0]
0x8566FE: push    ecx
0x8566FF: push    3
0x856701: push    1
0x856703: push    62h ; 'b'
0x856705: push    edx
0x856706: push    eax
0x856707: call    sub_7E2370
0x85670C: add     esp, 20h
0x85670F: jmp     loc_856802
0x856714: cmp     byte ptr [esp+14h+arg_14], 1
0x856719: jnz     loc_856D1D
0x85671F: push    10h; Size
0x856721: call    FormHeapAlloc
0x856726: add     esp, 4
0x856729: mov     [esp+14h+arg_14], eax
0x85672D: test    eax, eax
0x85672F: mov     [esp+14h+var_4], 5
0x856737: jz      loc_856800
0x85673D: mov     ecx, [esp+14h+arg_C]
0x856741: mov     edx, [esp+14h+arg_8]
0x856745: push    ecx
0x856746: mov     ecx, [esp+18h+arg_4]
0x85674A: push    edx
0x85674B: mov     edx, [esp+1Ch+arg_0]
0x85674F: push    ecx
0x856750: push    3
0x856752: push    1
0x856754: push    6Dh ; 'm'
0x856756: push    edx
0x856757: push    eax
0x856758: call    sub_7E2370
0x85675D: add     esp, 20h
0x856760: jmp     loc_856802
0x856765: cmp     [esp+14h+arg_2C], 0
0x85676A: jnz     short loc_8567B6
0x85676C: cmp     byte ptr [esp+14h+arg_14], 1
0x856771: jnz     loc_856D1D
0x856777: push    10h; Size
0x856779: call    FormHeapAlloc
0x85677E: add     esp, 4
0x856781: mov     [esp+14h+arg_14], eax
0x856785: test    eax, eax
0x856787: mov     [esp+14h+var_4], 6
0x85678F: jz      short loc_856800
0x856791: mov     ecx, [esp+14h+arg_C]
0x856795: mov     edx, [esp+14h+arg_8]
0x856799: push    ecx
0x85679A: mov     ecx, [esp+18h+arg_4]
0x85679E: push    edx
0x85679F: mov     edx, [esp+1Ch+arg_0]
0x8567A3: push    ecx
0x8567A4: push    3
0x8567A6: push    1
0x8567A8: push    64h ; 'd'
0x8567AA: push    edx
0x8567AB: push    eax
0x8567AC: call    sub_7E2370
0x8567B1: add     esp, 20h
0x8567B4: jmp     short loc_856802
0x8567B6: cmp     byte ptr [esp+14h+arg_14], 1
0x8567BB: jnz     loc_856D1D
0x8567C1: push    10h; Size
0x8567C3: call    FormHeapAlloc
0x8567C8: add     esp, 4
0x8567CB: mov     [esp+14h+arg_14], eax
0x8567CF: test    eax, eax
0x8567D1: mov     [esp+14h+var_4], 7
0x8567D9: jz      short loc_856800
0x8567DB: mov     ecx, [esp+14h+arg_C]
0x8567DF: mov     edx, [esp+14h+arg_8]
0x8567E3: push    ecx
0x8567E4: mov     ecx, [esp+18h+arg_4]
0x8567E8: push    edx
0x8567E9: mov     edx, [esp+1Ch+arg_0]
0x8567ED: push    ecx
0x8567EE: push    3
0x8567F0: push    1
0x8567F2: push    6Fh ; 'o'
0x8567F4: push    edx
0x8567F5: push    eax
0x8567F6: call    sub_7E2370
0x8567FB: add     esp, 20h
0x8567FE: jmp     short loc_856802
0x856800: xor     eax, eax
0x856802: mov     [esp+14h+arg_14], eax
0x856806: lea     eax, [esp+14h+arg_14]
0x85680A: push    eax
0x85680B: lea     ecx, [esi+28h]
0x85680E: mov     [esp+18h+var_4], 0FFFFFFFFh
0x856816: call    sub_5B1E20
0x85681B: jmp     loc_856D3C
0x856820: cmp     [esp+14h+arg_24], 0
0x856825: jnz     loc_856984
0x85682B: cmp     [esp+14h+arg_30], 0
0x856830: jnz     loc_8568DB
0x856836: cmp     [esp+14h+arg_2C], 0
0x85683B: jnz     short loc_85688A
0x85683D: cmp     byte ptr [esp+14h+arg_14], 1
0x856842: jnz     loc_856D1D
0x856848: push    10h; Size
0x85684A: call    FormHeapAlloc
0x85684F: add     esp, 4
0x856852: mov     [esp+14h+arg_14], eax
0x856856: test    eax, eax
0x856858: mov     [esp+14h+var_4], 8
0x856860: jz      short loc_856800
0x856862: mov     ecx, [esp+14h+arg_C]
0x856866: mov     edx, [esp+14h+arg_8]
0x85686A: push    ecx
0x85686B: mov     ecx, [esp+18h+arg_4]
0x85686F: push    edx
0x856870: mov     edx, [esp+1Ch+arg_0]
0x856874: push    ecx
0x856875: push    3
0x856877: push    1
0x856879: push    61h ; 'a'
0x85687B: push    edx
0x85687C: push    eax
0x85687D: call    sub_7E2370
0x856882: add     esp, 20h
0x856885: jmp     loc_856802
0x85688A: cmp     byte ptr [esp+14h+arg_14], 1
0x85688F: jnz     loc_856D1D
0x856895: push    10h; Size
0x856897: call    FormHeapAlloc
0x85689C: add     esp, 4
0x85689F: mov     [esp+14h+arg_14], eax
0x8568A3: test    eax, eax
0x8568A5: mov     [esp+14h+var_4], 9
0x8568AD: jz      loc_856800
0x8568B3: mov     ecx, [esp+14h+arg_C]
0x8568B7: mov     edx, [esp+14h+arg_8]
0x8568BB: push    ecx
0x8568BC: mov     ecx, [esp+18h+arg_4]
0x8568C0: push    edx
0x8568C1: mov     edx, [esp+1Ch+arg_0]
0x8568C5: push    ecx
0x8568C6: push    3
0x8568C8: push    1
0x8568CA: push    6Ch ; 'l'
0x8568CC: push    edx
0x8568CD: push    eax
0x8568CE: call    sub_7E2370
0x8568D3: add     esp, 20h
0x8568D6: jmp     loc_856802
0x8568DB: cmp     [esp+14h+arg_2C], 0
0x8568E0: jnz     short loc_856933
0x8568E2: cmp     byte ptr [esp+14h+arg_14], 1
0x8568E7: jnz     loc_856D1D
0x8568ED: push    10h; Size
0x8568EF: call    FormHeapAlloc
0x8568F4: add     esp, 4
0x8568F7: mov     [esp+14h+arg_14], eax
0x8568FB: test    eax, eax
0x8568FD: mov     [esp+14h+var_4], 0Ah
0x856905: jz      loc_856800
0x85690B: mov     ecx, [esp+14h+arg_C]
0x85690F: mov     edx, [esp+14h+arg_8]
0x856913: push    ecx
0x856914: mov     ecx, [esp+18h+arg_4]
0x856918: push    edx
0x856919: mov     edx, [esp+1Ch+arg_0]
0x85691D: push    ecx
0x85691E: push    3
0x856920: push    1
0x856922: push    63h ; 'c'
0x856924: push    edx
0x856925: push    eax
0x856926: call    sub_7E2370
0x85692B: add     esp, 20h
0x85692E: jmp     loc_856802
0x856933: cmp     byte ptr [esp+14h+arg_14], 1
0x856938: jnz     loc_856D1D
0x85693E: push    10h; Size
0x856940: call    FormHeapAlloc
0x856945: add     esp, 4
0x856948: mov     [esp+14h+arg_14], eax
0x85694C: test    eax, eax
0x85694E: mov     [esp+14h+var_4], 0Bh
0x856956: jz      loc_856800
0x85695C: mov     ecx, [esp+14h+arg_C]
0x856960: mov     edx, [esp+14h+arg_8]
0x856964: push    ecx
0x856965: mov     ecx, [esp+18h+arg_4]
0x856969: push    edx
0x85696A: mov     edx, [esp+1Ch+arg_0]
0x85696E: push    ecx
0x85696F: push    3
0x856971: push    1
0x856973: push    6Eh ; 'n'
0x856975: push    edx
0x856976: push    eax
0x856977: call    sub_7E2370
0x85697C: add     esp, 20h
0x85697F: jmp     loc_856802
0x856984: mov     eax, ds:0B42E8Ch
0x856989: test    eax, eax
0x85698B: jz      loc_856D3C
0x856991: push    0
0x856993: push    offset aShaderError_23; "SHADER ERROR : no shader to handle BSSM"...
0x856998: jmp     loc_856D37
0x85699D: cmp     [esp+14h+arg_20], 0
0x8569A2: jnz     loc_856BB9
0x8569A8: cmp     [esp+14h+arg_24], 0
0x8569AD: jnz     loc_856B10
0x8569B3: cmp     [esp+14h+arg_30], 0
0x8569B8: jnz     loc_856A67
0x8569BE: cmp     [esp+14h+arg_2C], 0
0x8569C3: jnz     short loc_856A16
0x8569C5: cmp     byte ptr [esp+14h+arg_14], 1
0x8569CA: jnz     loc_856D1D
0x8569D0: push    10h; Size
0x8569D2: call    FormHeapAlloc
0x8569D7: add     esp, 4
0x8569DA: mov     [esp+14h+arg_14], eax
0x8569DE: test    eax, eax
0x8569E0: mov     [esp+14h+var_4], 0Ch
0x8569E8: jz      loc_856800
0x8569EE: mov     ecx, [esp+14h+arg_C]
0x8569F2: mov     edx, [esp+14h+arg_8]
0x8569F6: push    ecx
0x8569F7: mov     ecx, [esp+18h+arg_4]
0x8569FB: push    edx
0x8569FC: mov     edx, [esp+1Ch+arg_0]
0x856A00: push    ecx
0x856A01: push    3
0x856A03: push    1
0x856A05: push    65h ; 'e'
0x856A07: push    edx
0x856A08: push    eax
0x856A09: call    sub_7E2370
0x856A0E: add     esp, 20h
0x856A11: jmp     loc_856802
0x856A16: cmp     byte ptr [esp+14h+arg_14], 1
0x856A1B: jnz     loc_856D1D
0x856A21: push    10h; Size
0x856A23: call    FormHeapAlloc
0x856A28: add     esp, 4
0x856A2B: mov     [esp+14h+arg_14], eax
0x856A2F: test    eax, eax
0x856A31: mov     [esp+14h+var_4], 0Dh
0x856A39: jz      loc_856800
0x856A3F: mov     ecx, [esp+14h+arg_C]
0x856A43: mov     edx, [esp+14h+arg_8]
0x856A47: push    ecx
0x856A48: mov     ecx, [esp+18h+arg_4]
0x856A4C: push    edx
0x856A4D: mov     edx, [esp+1Ch+arg_0]
0x856A51: push    ecx
0x856A52: push    3
0x856A54: push    1
0x856A56: push    70h ; 'p'
0x856A58: push    edx
0x856A59: push    eax
0x856A5A: call    sub_7E2370
0x856A5F: add     esp, 20h
0x856A62: jmp     loc_856802
0x856A67: cmp     [esp+14h+arg_2C], 0
0x856A6C: jnz     short loc_856ABF
0x856A6E: cmp     byte ptr [esp+14h+arg_14], 1
0x856A73: jnz     loc_856D1D
0x856A79: push    10h; Size
0x856A7B: call    FormHeapAlloc
0x856A80: add     esp, 4
0x856A83: mov     [esp+14h+arg_14], eax
0x856A87: test    eax, eax
0x856A89: mov     [esp+14h+var_4], 0Eh
0x856A91: jz      loc_856800
0x856A97: mov     ecx, [esp+14h+arg_C]
0x856A9B: mov     edx, [esp+14h+arg_8]
0x856A9F: push    ecx
0x856AA0: mov     ecx, [esp+18h+arg_4]
0x856AA4: push    edx
0x856AA5: mov     edx, [esp+1Ch+arg_0]
0x856AA9: push    ecx
0x856AAA: push    3
0x856AAC: push    1
0x856AAE: push    66h ; 'f'
0x856AB0: push    edx
0x856AB1: push    eax
0x856AB2: call    sub_7E2370
0x856AB7: add     esp, 20h
0x856ABA: jmp     loc_856802
0x856ABF: cmp     byte ptr [esp+14h+arg_14], 1
0x856AC4: jnz     loc_856D1D
0x856ACA: push    10h; Size
0x856ACC: call    FormHeapAlloc
0x856AD1: add     esp, 4
0x856AD4: mov     [esp+14h+arg_14], eax
0x856AD8: test    eax, eax
0x856ADA: mov     [esp+14h+var_4], 0Fh
0x856AE2: jz      loc_856800
0x856AE8: mov     ecx, [esp+14h+arg_C]
0x856AEC: mov     edx, [esp+14h+arg_8]
0x856AF0: push    ecx
0x856AF1: mov     ecx, [esp+18h+arg_4]
0x856AF5: push    edx
0x856AF6: mov     edx, [esp+1Ch+arg_0]
0x856AFA: push    ecx
0x856AFB: push    3
0x856AFD: push    1
0x856AFF: push    71h ; 'q'
0x856B01: push    edx
0x856B02: push    eax
0x856B03: call    sub_7E2370
0x856B08: add     esp, 20h
0x856B0B: jmp     loc_856802
0x856B10: cmp     [esp+14h+arg_2C], 0
0x856B15: jnz     short loc_856B68
0x856B17: cmp     byte ptr [esp+14h+arg_14], 1
0x856B1C: jnz     loc_856D1D
0x856B22: push    10h; Size
0x856B24: call    FormHeapAlloc
0x856B29: add     esp, 4
0x856B2C: mov     [esp+14h+arg_14], eax
0x856B30: test    eax, eax
0x856B32: mov     [esp+14h+var_4], 10h
0x856B3A: jz      loc_856800
0x856B40: mov     ecx, [esp+14h+arg_C]
0x856B44: mov     edx, [esp+14h+arg_8]
0x856B48: push    ecx
0x856B49: mov     ecx, [esp+18h+arg_4]
0x856B4D: push    edx
0x856B4E: mov     edx, [esp+1Ch+arg_0]
0x856B52: push    ecx
0x856B53: push    3
0x856B55: push    1
0x856B57: push    69h ; 'i'
0x856B59: push    edx
0x856B5A: push    eax
0x856B5B: call    sub_7E2370
0x856B60: add     esp, 20h
0x856B63: jmp     loc_856802
0x856B68: cmp     byte ptr [esp+14h+arg_14], 1
0x856B6D: jnz     loc_856D1D
0x856B73: push    10h; Size
0x856B75: call    FormHeapAlloc
0x856B7A: add     esp, 4
0x856B7D: mov     [esp+14h+arg_14], eax
0x856B81: test    eax, eax
0x856B83: mov     [esp+14h+var_4], 11h
0x856B8B: jz      loc_856800
0x856B91: mov     ecx, [esp+14h+arg_C]
0x856B95: mov     edx, [esp+14h+arg_8]
0x856B99: push    ecx
0x856B9A: mov     ecx, [esp+18h+arg_4]
0x856B9E: push    edx
0x856B9F: mov     edx, [esp+1Ch+arg_0]
0x856BA3: push    ecx
0x856BA4: push    3
0x856BA6: push    1
0x856BA8: push    74h ; 't'
0x856BAA: push    edx
0x856BAB: push    eax
0x856BAC: call    sub_7E2370
0x856BB1: add     esp, 20h
0x856BB4: jmp     loc_856802
0x856BB9: cmp     [esp+14h+arg_24], 0
0x856BBE: jnz     loc_856D27
0x856BC4: cmp     [esp+14h+arg_30], 0
0x856BC9: jnz     loc_856C78
0x856BCF: cmp     [esp+14h+arg_2C], 0
0x856BD4: jnz     short loc_856C27
0x856BD6: cmp     byte ptr [esp+14h+arg_14], 1
0x856BDB: jnz     loc_856D1D
0x856BE1: push    10h; Size
0x856BE3: call    FormHeapAlloc
0x856BE8: add     esp, 4
0x856BEB: mov     [esp+14h+arg_14], eax
0x856BEF: test    eax, eax
0x856BF1: mov     [esp+14h+var_4], 12h
0x856BF9: jz      loc_856800
0x856BFF: mov     ecx, [esp+14h+arg_C]
0x856C03: mov     edx, [esp+14h+arg_8]
0x856C07: push    ecx
0x856C08: mov     ecx, [esp+18h+arg_4]
0x856C0C: push    edx
0x856C0D: mov     edx, [esp+1Ch+arg_0]
0x856C11: push    ecx
0x856C12: push    3
0x856C14: push    1
0x856C16: push    67h ; 'g'
0x856C18: push    edx
0x856C19: push    eax
0x856C1A: call    sub_7E2370
0x856C1F: add     esp, 20h
0x856C22: jmp     loc_856802
0x856C27: cmp     byte ptr [esp+14h+arg_14], 1
0x856C2C: jnz     loc_856D1D
0x856C32: push    10h; Size
0x856C34: call    FormHeapAlloc
0x856C39: add     esp, 4
0x856C3C: mov     [esp+14h+arg_14], eax
0x856C40: test    eax, eax
0x856C42: mov     [esp+14h+var_4], 13h
0x856C4A: jz      loc_856800
0x856C50: mov     ecx, [esp+14h+arg_C]
0x856C54: mov     edx, [esp+14h+arg_8]
0x856C58: push    ecx
0x856C59: mov     ecx, [esp+18h+arg_4]
0x856C5D: push    edx
0x856C5E: mov     edx, [esp+1Ch+arg_0]
0x856C62: push    ecx
0x856C63: push    3
0x856C65: push    1
0x856C67: push    72h ; 'r'
0x856C69: push    edx
0x856C6A: push    eax
0x856C6B: call    sub_7E2370
0x856C70: add     esp, 20h
0x856C73: jmp     loc_856802
0x856C78: cmp     [esp+14h+arg_2C], 0
0x856C7D: jnz     short loc_856CD0
0x856C7F: cmp     byte ptr [esp+14h+arg_14], 1
0x856C84: jnz     loc_856D1D
0x856C8A: push    10h; Size
0x856C8C: call    FormHeapAlloc
0x856C91: add     esp, 4
0x856C94: mov     [esp+14h+arg_14], eax
0x856C98: test    eax, eax
0x856C9A: mov     [esp+14h+var_4], 14h
0x856CA2: jz      loc_856800
0x856CA8: mov     ecx, [esp+14h+arg_C]
0x856CAC: mov     edx, [esp+14h+arg_8]
0x856CB0: push    ecx
0x856CB1: mov     ecx, [esp+18h+arg_4]
0x856CB5: push    edx
0x856CB6: mov     edx, [esp+1Ch+arg_0]
0x856CBA: push    ecx
0x856CBB: push    3
0x856CBD: push    1
0x856CBF: push    68h ; 'h'
0x856CC1: push    edx
0x856CC2: push    eax
0x856CC3: call    sub_7E2370
0x856CC8: add     esp, 20h
0x856CCB: jmp     loc_856802
0x856CD0: cmp     byte ptr [esp+14h+arg_14], 1
0x856CD5: jnz     short loc_856D1D
0x856CD7: push    10h; Size
0x856CD9: call    FormHeapAlloc
0x856CDE: add     esp, 4
0x856CE1: mov     [esp+14h+arg_14], eax
0x856CE5: test    eax, eax
0x856CE7: mov     [esp+14h+var_4], 15h
0x856CEF: jz      loc_856800
0x856CF5: mov     ecx, [esp+14h+arg_C]
0x856CF9: mov     edx, [esp+14h+arg_8]
0x856CFD: push    ecx
0x856CFE: mov     ecx, [esp+18h+arg_4]
0x856D02: push    edx
0x856D03: mov     edx, [esp+1Ch+arg_0]
0x856D07: push    ecx
0x856D08: push    3
0x856D0A: push    1
0x856D0C: push    73h ; 's'
0x856D0E: push    edx
0x856D0F: push    eax
0x856D10: call    sub_7E2370
0x856D15: add     esp, 20h
0x856D18: jmp     loc_856802
0x856D1D: mov     eax, [esp+14h+arg_10]
0x856D21: add     word ptr [eax], 1
0x856D25: jmp     short loc_856D3C
0x856D27: mov     eax, ds:0B42E8Ch
0x856D2C: test    eax, eax
0x856D2E: jz      short loc_856D3C
0x856D30: push    0; _DWORD
0x856D32: push    offset aShaderError_24; "SHADER ERROR : no shader to handle BSSM"...
0x856D37: call    eax ; dword_B42E8C
0x856D39: add     esp, 8
0x856D3C: mov     ecx, [esp+14h+arg_18]
0x856D40: mov     byte ptr [ecx], 0
0x856D43: mov     ecx, [esp+14h+var_C]
0x856D47: mov     large fs:0, ecx
0x856D4E: pop     ecx
0x856D4F: pop     esi
0x856D50: add     esp, 0Ch
0x856D53: retn    38h ; '8'
