0x852470: push    0FFFFFFFFh
0x852472: push    offset SEH_852470
0x852477: mov     eax, large fs:0
0x85247D: push    eax
0x85247E: push    esi
0x85247F: mov     eax, ds:0B30AACh
0x852484: xor     eax, esp
0x852486: push    eax
0x852487: lea     eax, [esp+14h+var_C]
0x85248B: mov     large fs:0, eax
0x852491: mov     esi, ecx
0x852493: cmp     [esp+14h+arg_14], 0
0x852498: jnz     loc_852D44
0x85249E: cmp     [esp+14h+arg_18], 0
0x8524A3: jz      loc_8528C4
0x8524A9: cmp     [esp+14h+arg_1C], 0
0x8524AE: jz      loc_8526D3
0x8524B4: cmp     [esp+14h+arg_20], 0
0x8524B9: jz      loc_85259E
0x8524BF: cmp     [esp+14h+arg_24], 0
0x8524C4: jz      short loc_852532
0x8524C6: cmp     [esp+14h+arg_28], 0
0x8524CB: jnz     short loc_852514
0x8524CD: cmp     byte ptr [esp+14h+arg_C], 1
0x8524D2: jnz     loc_853559
0x8524D8: push    10h; Size
0x8524DA: call    FormHeapAlloc
0x8524DF: add     esp, 4
0x8524E2: mov     [esp+14h+arg_C], eax
0x8524E6: test    eax, eax
0x8524E8: mov     [esp+14h+var_4], 0
0x8524F0: jz      loc_85353C
0x8524F6: mov     ecx, [esp+14h+arg_4]
0x8524FA: mov     edx, [esp+14h+arg_0]
0x8524FE: push    ecx
0x8524FF: push    1
0x852501: push    1
0x852503: push    3Dh ; '='
0x852505: push    edx
0x852506: push    eax
0x852507: call    sub_7E2370
0x85250C: add     esp, 18h
0x85250F: jmp     loc_85353E
0x852514: mov     eax, ds:0B42E8Ch
0x852519: test    eax, eax
0x85251B: jz      loc_853561
0x852521: push    0; _DWORD
0x852523: push    offset aShaderErrorNoS; "SHADER ERROR : no shader to handle AMBD"...
0x852528: call    eax ; dword_B42E8C
0x85252A: add     esp, 8
0x85252D: jmp     loc_853561
0x852532: cmp     [esp+14h+arg_28], 0
0x852537: jnz     short loc_852580
0x852539: cmp     byte ptr [esp+14h+arg_C], 1
0x85253E: jnz     loc_853559
0x852544: push    10h; Size
0x852546: call    FormHeapAlloc
0x85254B: add     esp, 4
0x85254E: mov     [esp+14h+arg_C], eax
0x852552: test    eax, eax
0x852554: mov     [esp+14h+var_4], 1
0x85255C: jz      loc_85353C
0x852562: mov     ecx, [esp+14h+arg_4]
0x852566: mov     edx, [esp+14h+arg_0]
0x85256A: push    ecx
0x85256B: push    1
0x85256D: push    1
0x85256F: push    23h ; '#'
0x852571: push    edx
0x852572: push    eax
0x852573: call    sub_7E2370
0x852578: add     esp, 18h
0x85257B: jmp     loc_85353E
0x852580: mov     eax, ds:0B42E8Ch
0x852585: test    eax, eax
0x852587: jz      loc_853561
0x85258D: push    0; _DWORD
0x85258F: push    offset aShaderErrorN_0; "SHADER ERROR : no shader to handle AMBD"...
0x852594: call    eax ; dword_B42E8C
0x852596: add     esp, 8
0x852599: jmp     loc_853561
0x85259E: cmp     [esp+14h+arg_24], 0
0x8525A3: jz      loc_85263E
0x8525A9: cmp     [esp+14h+arg_28], 0
0x8525AE: jnz     short loc_8525F7
0x8525B0: cmp     byte ptr [esp+14h+arg_C], 1
0x8525B5: jnz     loc_853559
0x8525BB: push    10h; Size
0x8525BD: call    FormHeapAlloc
0x8525C2: add     esp, 4
0x8525C5: mov     [esp+14h+arg_C], eax
0x8525C9: test    eax, eax
0x8525CB: mov     [esp+14h+var_4], 2
0x8525D3: jz      loc_85353C
0x8525D9: mov     ecx, [esp+14h+arg_4]
0x8525DD: mov     edx, [esp+14h+arg_0]
0x8525E1: push    ecx
0x8525E2: push    1
0x8525E4: push    1
0x8525E6: push    3Bh ; ';'
0x8525E8: push    edx
0x8525E9: push    eax
0x8525EA: call    sub_7E2370
0x8525EF: add     esp, 18h
0x8525F2: jmp     loc_85353E
0x8525F7: cmp     byte ptr [esp+14h+arg_C], 1
0x8525FC: jnz     loc_853559
0x852602: push    10h; Size
0x852604: call    FormHeapAlloc
0x852609: add     esp, 4
0x85260C: mov     [esp+14h+arg_C], eax
0x852610: test    eax, eax
0x852612: mov     [esp+14h+var_4], 3
0x85261A: jz      loc_85353C
0x852620: mov     ecx, [esp+14h+arg_4]
0x852624: mov     edx, [esp+14h+arg_0]
0x852628: push    ecx
0x852629: push    1
0x85262B: push    1
0x85262D: push    3Ch ; '<'
0x85262F: push    edx
0x852630: push    eax
0x852631: call    sub_7E2370
0x852636: add     esp, 18h
0x852639: jmp     loc_85353E
0x85263E: cmp     [esp+14h+arg_28], 0
0x852643: jnz     short loc_85268C
0x852645: cmp     byte ptr [esp+14h+arg_C], 1
0x85264A: jnz     loc_853559
0x852650: push    10h; Size
0x852652: call    FormHeapAlloc
0x852657: add     esp, 4
0x85265A: mov     [esp+14h+arg_C], eax
0x85265E: test    eax, eax
0x852660: mov     [esp+14h+var_4], 4
0x852668: jz      loc_85353C
0x85266E: mov     ecx, [esp+14h+arg_4]
0x852672: mov     edx, [esp+14h+arg_0]
0x852676: push    ecx
0x852677: push    1
0x852679: push    1
0x85267B: push    20h ; ' '
0x85267D: push    edx
0x85267E: push    eax
0x85267F: call    sub_7E2370
0x852684: add     esp, 18h
0x852687: jmp     loc_85353E
0x85268C: cmp     byte ptr [esp+14h+arg_C], 1
0x852691: jnz     loc_853559
0x852697: push    10h; Size
0x852699: call    FormHeapAlloc
0x85269E: add     esp, 4
0x8526A1: mov     [esp+14h+arg_C], eax
0x8526A5: test    eax, eax
0x8526A7: mov     [esp+14h+var_4], 5
0x8526AF: jz      loc_85353C
0x8526B5: mov     ecx, [esp+14h+arg_4]
0x8526B9: mov     edx, [esp+14h+arg_0]
0x8526BD: push    ecx
0x8526BE: push    1
0x8526C0: push    1
0x8526C2: push    21h ; '!'
0x8526C4: push    edx
0x8526C5: push    eax
0x8526C6: call    sub_7E2370
0x8526CB: add     esp, 18h
0x8526CE: jmp     loc_85353E
0x8526D3: cmp     [esp+14h+arg_20], 0
0x8526D8: jz      loc_85278F
0x8526DE: cmp     [esp+14h+arg_24], 0
0x8526E3: jz      short loc_852723
0x8526E5: cmp     [esp+14h+arg_28], 0
0x8526EA: mov     eax, ds:0B42E8Ch
0x8526EF: jnz     short loc_85270A
0x8526F1: test    eax, eax
0x8526F3: jz      loc_853561
0x8526F9: push    0; _DWORD
0x8526FB: push    offset aShaderErrorN_1; "SHADER ERROR : no shader to handle AMBD"...
0x852700: call    eax ; dword_B42E8C
0x852702: add     esp, 8
0x852705: jmp     loc_853561
0x85270A: test    eax, eax
0x85270C: jz      loc_853561
0x852712: push    0; _DWORD
0x852714: push    offset aShaderErrorN_2; "SHADER ERROR : no shader to handle AMBD"...
0x852719: call    eax ; dword_B42E8C
0x85271B: add     esp, 8
0x85271E: jmp     loc_853561
0x852723: cmp     [esp+14h+arg_28], 0
0x852728: jnz     short loc_852771
0x85272A: cmp     byte ptr [esp+14h+arg_C], 1
0x85272F: jnz     loc_853559
0x852735: push    10h; Size
0x852737: call    FormHeapAlloc
0x85273C: add     esp, 4
0x85273F: mov     [esp+14h+arg_C], eax
0x852743: test    eax, eax
0x852745: mov     [esp+14h+var_4], 6
0x85274D: jz      loc_85353C
0x852753: mov     ecx, [esp+14h+arg_4]
0x852757: mov     edx, [esp+14h+arg_0]
0x85275B: push    ecx
0x85275C: push    1
0x85275E: push    1
0x852760: push    22h ; '"'
0x852762: push    edx
0x852763: push    eax
0x852764: call    sub_7E2370
0x852769: add     esp, 18h
0x85276C: jmp     loc_85353E
0x852771: mov     eax, ds:0B42E8Ch
0x852776: test    eax, eax
0x852778: jz      loc_853561
0x85277E: push    0; _DWORD
0x852780: push    offset aShaderErrorN_3; "SHADER ERROR : no shader to handle AMBD"...
0x852785: call    eax ; dword_B42E8C
0x852787: add     esp, 8
0x85278A: jmp     loc_853561
0x85278F: cmp     [esp+14h+arg_24], 0
0x852794: jz      loc_85282F
0x85279A: cmp     [esp+14h+arg_28], 0
0x85279F: jnz     short loc_8527E8
0x8527A1: cmp     byte ptr [esp+14h+arg_C], 1
0x8527A6: jnz     loc_853559
0x8527AC: push    10h; Size
0x8527AE: call    FormHeapAlloc
0x8527B3: add     esp, 4
0x8527B6: mov     [esp+14h+arg_C], eax
0x8527BA: test    eax, eax
0x8527BC: mov     [esp+14h+var_4], 7
0x8527C4: jz      loc_85353C
0x8527CA: mov     ecx, [esp+14h+arg_4]
0x8527CE: mov     edx, [esp+14h+arg_0]
0x8527D2: push    ecx
0x8527D3: push    1
0x8527D5: push    1
0x8527D7: push    38h ; '8'
0x8527D9: push    edx
0x8527DA: push    eax
0x8527DB: call    sub_7E2370
0x8527E0: add     esp, 18h
0x8527E3: jmp     loc_85353E
0x8527E8: cmp     byte ptr [esp+14h+arg_C], 1
0x8527ED: jnz     loc_853559
0x8527F3: push    10h; Size
0x8527F5: call    FormHeapAlloc
0x8527FA: add     esp, 4
0x8527FD: mov     [esp+14h+arg_C], eax
0x852801: test    eax, eax
0x852803: mov     [esp+14h+var_4], 8
0x85280B: jz      loc_85353C
0x852811: mov     ecx, [esp+14h+arg_4]
0x852815: mov     edx, [esp+14h+arg_0]
0x852819: push    ecx
0x85281A: push    1
0x85281C: push    1
0x85281E: push    39h ; '9'
0x852820: push    edx
0x852821: push    eax
0x852822: call    sub_7E2370
0x852827: add     esp, 18h
0x85282A: jmp     loc_85353E
0x85282F: cmp     [esp+14h+arg_28], 0
0x852834: jnz     short loc_85287D
0x852836: cmp     byte ptr [esp+14h+arg_C], 1
0x85283B: jnz     loc_853559
0x852841: push    10h; Size
0x852843: call    FormHeapAlloc
0x852848: add     esp, 4
0x85284B: mov     [esp+14h+arg_C], eax
0x85284F: test    eax, eax
0x852851: mov     [esp+14h+var_4], 9
0x852859: jz      loc_85353C
0x85285F: mov     ecx, [esp+14h+arg_4]
0x852863: mov     edx, [esp+14h+arg_0]
0x852867: push    ecx
0x852868: push    1
0x85286A: push    1
0x85286C: push    1Eh
0x85286E: push    edx
0x85286F: push    eax
0x852870: call    sub_7E2370
0x852875: add     esp, 18h
0x852878: jmp     loc_85353E
0x85287D: cmp     byte ptr [esp+14h+arg_C], 1
0x852882: jnz     loc_853559
0x852888: push    10h; Size
0x85288A: call    FormHeapAlloc
0x85288F: add     esp, 4
0x852892: mov     [esp+14h+arg_C], eax
0x852896: test    eax, eax
0x852898: mov     [esp+14h+var_4], 0Ah
0x8528A0: jz      loc_85353C
0x8528A6: mov     ecx, [esp+14h+arg_4]
0x8528AA: mov     edx, [esp+14h+arg_0]
0x8528AE: push    ecx
0x8528AF: push    1
0x8528B1: push    1
0x8528B3: push    1Fh
0x8528B5: push    edx
0x8528B6: push    eax
0x8528B7: call    sub_7E2370
0x8528BC: add     esp, 18h
0x8528BF: jmp     loc_85353E
0x8528C4: cmp     [esp+14h+arg_1C], 0
0x8528C9: jz      loc_852A89
0x8528CF: cmp     [esp+14h+arg_20], 0
0x8528D4: jz      short loc_852954
0x8528D6: cmp     [esp+14h+arg_24], 0
0x8528DB: mov     eax, ds:0B42E8Ch
0x8528E0: jz      short loc_85291B
0x8528E2: cmp     [esp+14h+arg_28], 0
0x8528E7: jnz     short loc_852902
0x8528E9: test    eax, eax
0x8528EB: jz      loc_853561
0x8528F1: push    0; _DWORD
0x8528F3: push    offset aShaderErrorN_4; "SHADER ERROR : no shader to handle AMBD"...
0x8528F8: call    eax ; dword_B42E8C
0x8528FA: add     esp, 8
0x8528FD: jmp     loc_853561
0x852902: test    eax, eax
0x852904: jz      loc_853561
0x85290A: push    0; _DWORD
0x85290C: push    offset aShaderErrorN_5; "SHADER ERROR : no shader to handle AMBD"...
0x852911: call    eax ; dword_B42E8C
0x852913: add     esp, 8
0x852916: jmp     loc_853561
0x85291B: cmp     [esp+14h+arg_28], 0
0x852920: jnz     short loc_85293B
0x852922: test    eax, eax
0x852924: jz      loc_853561
0x85292A: push    0; _DWORD
0x85292C: push    offset aShaderErrorN_6; "SHADER ERROR : no shader to handle AMBD"...
0x852931: call    eax ; dword_B42E8C
0x852933: add     esp, 8
0x852936: jmp     loc_853561
0x85293B: test    eax, eax
0x85293D: jz      loc_853561
0x852943: push    0; _DWORD
0x852945: push    offset aShaderErrorN_7; "SHADER ERROR : no shader to handle AMBD"...
0x85294A: call    eax ; dword_B42E8C
0x85294C: add     esp, 8
0x85294F: jmp     loc_853561
0x852954: cmp     [esp+14h+arg_24], 0
0x852959: jz      loc_8529F4
0x85295F: cmp     [esp+14h+arg_28], 0
0x852964: jnz     short loc_8529AD
0x852966: cmp     byte ptr [esp+14h+arg_C], 1
0x85296B: jnz     loc_853559
0x852971: push    10h; Size
0x852973: call    FormHeapAlloc
0x852978: add     esp, 4
0x85297B: mov     [esp+14h+arg_C], eax
0x85297F: test    eax, eax
0x852981: mov     [esp+14h+var_4], 0Bh
0x852989: jz      loc_85353C
0x85298F: mov     ecx, [esp+14h+arg_4]
0x852993: mov     edx, [esp+14h+arg_0]
0x852997: push    ecx
0x852998: push    1
0x85299A: push    1
0x85299C: push    36h ; '6'
0x85299E: push    edx
0x85299F: push    eax
0x8529A0: call    sub_7E2370
0x8529A5: add     esp, 18h
0x8529A8: jmp     loc_85353E
0x8529AD: cmp     byte ptr [esp+14h+arg_C], 1
0x8529B2: jnz     loc_853559
0x8529B8: push    10h; Size
0x8529BA: call    FormHeapAlloc
0x8529BF: add     esp, 4
0x8529C2: mov     [esp+14h+arg_C], eax
0x8529C6: test    eax, eax
0x8529C8: mov     [esp+14h+var_4], 0Ch
0x8529D0: jz      loc_85353C
0x8529D6: mov     ecx, [esp+14h+arg_4]
0x8529DA: mov     edx, [esp+14h+arg_0]
0x8529DE: push    ecx
0x8529DF: push    1
0x8529E1: push    1
0x8529E3: push    37h ; '7'
0x8529E5: push    edx
0x8529E6: push    eax
0x8529E7: call    sub_7E2370
0x8529EC: add     esp, 18h
0x8529EF: jmp     loc_85353E
0x8529F4: cmp     [esp+14h+arg_28], 0
0x8529F9: jnz     short loc_852A42
0x8529FB: cmp     byte ptr [esp+14h+arg_C], 1
0x852A00: jnz     loc_853559
0x852A06: push    10h; Size
0x852A08: call    FormHeapAlloc
0x852A0D: add     esp, 4
0x852A10: mov     [esp+14h+arg_C], eax
0x852A14: test    eax, eax
0x852A16: mov     [esp+14h+var_4], 0Dh
0x852A1E: jz      loc_85353C
0x852A24: mov     ecx, [esp+14h+arg_4]
0x852A28: mov     edx, [esp+14h+arg_0]
0x852A2C: push    ecx
0x852A2D: push    1
0x852A2F: push    1
0x852A31: push    1Bh
0x852A33: push    edx
0x852A34: push    eax
0x852A35: call    sub_7E2370
0x852A3A: add     esp, 18h
0x852A3D: jmp     loc_85353E
0x852A42: cmp     byte ptr [esp+14h+arg_C], 1
0x852A47: jnz     loc_853559
0x852A4D: push    10h; Size
0x852A4F: call    FormHeapAlloc
0x852A54: add     esp, 4
0x852A57: mov     [esp+14h+arg_C], eax
0x852A5B: test    eax, eax
0x852A5D: mov     [esp+14h+var_4], 0Eh
0x852A65: jz      loc_85353C
0x852A6B: mov     ecx, [esp+14h+arg_4]
0x852A6F: mov     edx, [esp+14h+arg_0]
0x852A73: push    ecx
0x852A74: push    1
0x852A76: push    1
0x852A78: push    1Ch
0x852A7A: push    edx
0x852A7B: push    eax
0x852A7C: call    sub_7E2370
0x852A81: add     esp, 18h
0x852A84: jmp     loc_85353E
0x852A89: cmp     [esp+14h+arg_20], 0
0x852A8E: jz      loc_852B73
0x852A94: cmp     [esp+14h+arg_24], 0
0x852A99: jz      short loc_852B07
0x852A9B: cmp     [esp+14h+arg_28], 0
0x852AA0: jnz     short loc_852AE9
0x852AA2: cmp     byte ptr [esp+14h+arg_C], 1
0x852AA7: jnz     loc_853559
0x852AAD: push    10h; Size
0x852AAF: call    FormHeapAlloc
0x852AB4: add     esp, 4
0x852AB7: mov     [esp+14h+arg_C], eax
0x852ABB: test    eax, eax
0x852ABD: mov     [esp+14h+var_4], 0Fh
0x852AC5: jz      loc_85353C
0x852ACB: mov     ecx, [esp+14h+arg_4]
0x852ACF: mov     edx, [esp+14h+arg_0]
0x852AD3: push    ecx
0x852AD4: push    1
0x852AD6: push    1
0x852AD8: push    3Ah ; ':'
0x852ADA: push    edx
0x852ADB: push    eax
0x852ADC: call    sub_7E2370
0x852AE1: add     esp, 18h
0x852AE4: jmp     loc_85353E
0x852AE9: mov     eax, ds:0B42E8Ch
0x852AEE: test    eax, eax
0x852AF0: jz      loc_853561
0x852AF6: push    0; _DWORD
0x852AF8: push    offset aShaderErrorN_8; "SHADER ERROR : no shader to handle AMBD"...
0x852AFD: call    eax ; dword_B42E8C
0x852AFF: add     esp, 8
0x852B02: jmp     loc_853561
0x852B07: cmp     [esp+14h+arg_28], 0
0x852B0C: jnz     short loc_852B55
0x852B0E: cmp     byte ptr [esp+14h+arg_C], 1
0x852B13: jnz     loc_853559
0x852B19: push    10h; Size
0x852B1B: call    FormHeapAlloc
0x852B20: add     esp, 4
0x852B23: mov     [esp+14h+arg_C], eax
0x852B27: test    eax, eax
0x852B29: mov     [esp+14h+var_4], 10h
0x852B31: jz      loc_85353C
0x852B37: mov     ecx, [esp+14h+arg_4]
0x852B3B: mov     edx, [esp+14h+arg_0]
0x852B3F: push    ecx
0x852B40: push    1
0x852B42: push    1
0x852B44: push    1Dh
0x852B46: push    edx
0x852B47: push    eax
0x852B48: call    sub_7E2370
0x852B4D: add     esp, 18h
0x852B50: jmp     loc_85353E
0x852B55: mov     eax, ds:0B42E8Ch
0x852B5A: test    eax, eax
0x852B5C: jz      loc_853561
0x852B62: push    0; _DWORD
0x852B64: push    offset aShaderErrorN_9; "SHADER ERROR : no shader to handle AMBD"...
0x852B69: call    eax ; dword_B42E8C
0x852B6B: add     esp, 8
0x852B6E: jmp     loc_853561
0x852B73: cmp     [esp+14h+arg_24], 0
0x852B78: jz      loc_852C61
0x852B7E: cmp     [esp+14h+arg_28], 0
0x852B83: jnz     short loc_852BCC
0x852B85: cmp     byte ptr [esp+14h+arg_C], 1
0x852B8A: jnz     loc_853559
0x852B90: push    10h; Size
0x852B92: call    FormHeapAlloc
0x852B97: add     esp, 4
0x852B9A: mov     [esp+14h+arg_C], eax
0x852B9E: test    eax, eax
0x852BA0: mov     [esp+14h+var_4], 11h
0x852BA8: jz      loc_85353C
0x852BAE: mov     ecx, [esp+14h+arg_4]
0x852BB2: mov     edx, [esp+14h+arg_0]
0x852BB6: push    ecx
0x852BB7: push    1
0x852BB9: push    1
0x852BBB: push    34h ; '4'
0x852BBD: push    edx
0x852BBE: push    eax
0x852BBF: call    sub_7E2370
0x852BC4: add     esp, 18h
0x852BC7: jmp     loc_85353E
0x852BCC: cmp     [esp+14h+arg_2C], 0
0x852BD1: jnz     short loc_852C1A
0x852BD3: cmp     byte ptr [esp+14h+arg_C], 1
0x852BD8: jnz     loc_853559
0x852BDE: push    10h; Size
0x852BE0: call    FormHeapAlloc
0x852BE5: add     esp, 4
0x852BE8: mov     [esp+14h+arg_C], eax
0x852BEC: test    eax, eax
0x852BEE: mov     [esp+14h+var_4], 12h
0x852BF6: jz      loc_85353C
0x852BFC: mov     ecx, [esp+14h+arg_4]
0x852C00: mov     edx, [esp+14h+arg_0]
0x852C04: push    ecx
0x852C05: push    1
0x852C07: push    1
0x852C09: push    35h ; '5'
0x852C0B: push    edx
0x852C0C: push    eax
0x852C0D: call    sub_7E2370
0x852C12: add     esp, 18h
0x852C15: jmp     loc_85353E
0x852C1A: cmp     byte ptr [esp+14h+arg_C], 1
0x852C1F: jnz     loc_853559
0x852C25: push    10h; Size
0x852C27: call    FormHeapAlloc
0x852C2C: add     esp, 4
0x852C2F: mov     [esp+14h+arg_C], eax
0x852C33: test    eax, eax
0x852C35: mov     [esp+14h+var_4], 13h
0x852C3D: jz      loc_85353C
0x852C43: mov     ecx, [esp+14h+arg_4]
0x852C47: mov     edx, [esp+14h+arg_0]
0x852C4B: push    ecx
0x852C4C: push    1
0x852C4E: push    1
0x852C50: push    30h ; '0'
0x852C52: push    edx
0x852C53: push    eax
0x852C54: call    sub_7E2370
0x852C59: add     esp, 18h
0x852C5C: jmp     loc_85353E
0x852C61: cmp     [esp+14h+arg_28], 0
0x852C66: jnz     short loc_852CAF
0x852C68: cmp     byte ptr [esp+14h+arg_C], 1
0x852C6D: jnz     loc_853559
0x852C73: push    10h; Size
0x852C75: call    FormHeapAlloc
0x852C7A: add     esp, 4
0x852C7D: mov     [esp+14h+arg_C], eax
0x852C81: test    eax, eax
0x852C83: mov     [esp+14h+var_4], 14h
0x852C8B: jz      loc_85353C
0x852C91: mov     ecx, [esp+14h+arg_4]
0x852C95: mov     edx, [esp+14h+arg_0]
0x852C99: push    ecx
0x852C9A: push    1
0x852C9C: push    1
0x852C9E: push    19h
0x852CA0: push    edx
0x852CA1: push    eax
0x852CA2: call    sub_7E2370
0x852CA7: add     esp, 18h
0x852CAA: jmp     loc_85353E
0x852CAF: cmp     [esp+14h+arg_2C], 0
0x852CB4: jnz     short loc_852CFD
0x852CB6: cmp     byte ptr [esp+14h+arg_C], 1
0x852CBB: jnz     loc_853559
0x852CC1: push    10h; Size
0x852CC3: call    FormHeapAlloc
0x852CC8: add     esp, 4
0x852CCB: mov     [esp+14h+arg_C], eax
0x852CCF: test    eax, eax
0x852CD1: mov     [esp+14h+var_4], 15h
0x852CD9: jz      loc_85353C
0x852CDF: mov     ecx, [esp+14h+arg_4]
0x852CE3: mov     edx, [esp+14h+arg_0]
0x852CE7: push    ecx
0x852CE8: push    1
0x852CEA: push    1
0x852CEC: push    1Ah
0x852CEE: push    edx
0x852CEF: push    eax
0x852CF0: call    sub_7E2370
0x852CF5: add     esp, 18h
0x852CF8: jmp     loc_85353E
0x852CFD: cmp     byte ptr [esp+14h+arg_C], 1
0x852D02: jnz     loc_853559
0x852D08: push    10h; Size
0x852D0A: call    FormHeapAlloc
0x852D0F: add     esp, 4
0x852D12: mov     [esp+14h+arg_C], eax
0x852D16: test    eax, eax
0x852D18: mov     [esp+14h+var_4], 16h
0x852D20: jz      loc_85353C
0x852D26: mov     ecx, [esp+14h+arg_4]
0x852D2A: mov     edx, [esp+14h+arg_0]
0x852D2E: push    ecx
0x852D2F: push    1
0x852D31: push    1
0x852D33: push    2Fh ; '/'
0x852D35: push    edx
0x852D36: push    eax
0x852D37: call    sub_7E2370
0x852D3C: add     esp, 18h
0x852D3F: jmp     loc_85353E
0x852D44: cmp     [esp+14h+arg_18], 0
0x852D49: jz      loc_85316A
0x852D4F: cmp     [esp+14h+arg_1C], 0
0x852D54: jz      loc_852F79
0x852D5A: cmp     [esp+14h+arg_20], 0
0x852D5F: jz      loc_852E44
0x852D65: cmp     [esp+14h+arg_24], 0
0x852D6A: jz      short loc_852DD8
0x852D6C: cmp     [esp+14h+arg_28], 0
0x852D71: jnz     short loc_852DBA
0x852D73: cmp     byte ptr [esp+14h+arg_C], 1
0x852D78: jnz     loc_853559
0x852D7E: push    10h; Size
0x852D80: call    FormHeapAlloc
0x852D85: add     esp, 4
0x852D88: mov     [esp+14h+arg_C], eax
0x852D8C: test    eax, eax
0x852D8E: mov     [esp+14h+var_4], 17h
0x852D96: jz      loc_85353C
0x852D9C: mov     ecx, [esp+14h+arg_4]
0x852DA0: mov     edx, [esp+14h+arg_0]
0x852DA4: push    ecx
0x852DA5: push    1
0x852DA7: push    1
0x852DA9: push    47h ; 'G'
0x852DAB: push    edx
0x852DAC: push    eax
0x852DAD: call    sub_7E2370
0x852DB2: add     esp, 18h
0x852DB5: jmp     loc_85353E
0x852DBA: mov     eax, ds:0B42E8Ch
0x852DBF: test    eax, eax
0x852DC1: jz      loc_853561
0x852DC7: push    0; _DWORD
0x852DC9: push    offset aShaderError_10; "SHADER ERROR : no shader to handle AMBD"...
0x852DCE: call    eax ; dword_B42E8C
0x852DD0: add     esp, 8
0x852DD3: jmp     loc_853561
0x852DD8: cmp     [esp+14h+arg_28], 0
0x852DDD: jnz     short loc_852E26
0x852DDF: cmp     byte ptr [esp+14h+arg_C], 1
0x852DE4: jnz     loc_853559
0x852DEA: push    10h; Size
0x852DEC: call    FormHeapAlloc
0x852DF1: add     esp, 4
0x852DF4: mov     [esp+14h+arg_C], eax
0x852DF8: test    eax, eax
0x852DFA: mov     [esp+14h+var_4], 18h
0x852E02: jz      loc_85353C
0x852E08: mov     ecx, [esp+14h+arg_4]
0x852E0C: mov     edx, [esp+14h+arg_0]
0x852E10: push    ecx
0x852E11: push    1
0x852E13: push    1
0x852E15: push    2Eh ; '.'
0x852E17: push    edx
0x852E18: push    eax
0x852E19: call    sub_7E2370
0x852E1E: add     esp, 18h
0x852E21: jmp     loc_85353E
0x852E26: mov     eax, ds:0B42E8Ch
0x852E2B: test    eax, eax
0x852E2D: jz      loc_853561
0x852E33: push    0; _DWORD
0x852E35: push    offset aShaderError_11; "SHADER ERROR : no shader to handle AMBD"...
0x852E3A: call    eax ; dword_B42E8C
0x852E3C: add     esp, 8
0x852E3F: jmp     loc_853561
0x852E44: cmp     [esp+14h+arg_24], 0
0x852E49: jz      loc_852EE4
0x852E4F: cmp     [esp+14h+arg_28], 0
0x852E54: jnz     short loc_852E9D
0x852E56: cmp     byte ptr [esp+14h+arg_C], 1
0x852E5B: jnz     loc_853559
0x852E61: push    10h; Size
0x852E63: call    FormHeapAlloc
0x852E68: add     esp, 4
0x852E6B: mov     [esp+14h+arg_C], eax
0x852E6F: test    eax, eax
0x852E71: mov     [esp+14h+var_4], 19h
0x852E79: jz      loc_85353C
0x852E7F: mov     ecx, [esp+14h+arg_4]
0x852E83: mov     edx, [esp+14h+arg_0]
0x852E87: push    ecx
0x852E88: push    1
0x852E8A: push    1
0x852E8C: push    45h ; 'E'
0x852E8E: push    edx
0x852E8F: push    eax
0x852E90: call    sub_7E2370
0x852E95: add     esp, 18h
0x852E98: jmp     loc_85353E
0x852E9D: cmp     byte ptr [esp+14h+arg_C], 1
0x852EA2: jnz     loc_853559
0x852EA8: push    10h; Size
0x852EAA: call    FormHeapAlloc
0x852EAF: add     esp, 4
0x852EB2: mov     [esp+14h+arg_C], eax
0x852EB6: test    eax, eax
0x852EB8: mov     [esp+14h+var_4], 1Ah
0x852EC0: jz      loc_85353C
0x852EC6: mov     ecx, [esp+14h+arg_4]
0x852ECA: mov     edx, [esp+14h+arg_0]
0x852ECE: push    ecx
0x852ECF: push    1
0x852ED1: push    1
0x852ED3: push    46h ; 'F'
0x852ED5: push    edx
0x852ED6: push    eax
0x852ED7: call    sub_7E2370
0x852EDC: add     esp, 18h
0x852EDF: jmp     loc_85353E
0x852EE4: cmp     [esp+14h+arg_28], 0
0x852EE9: jnz     short loc_852F32
0x852EEB: cmp     byte ptr [esp+14h+arg_C], 1
0x852EF0: jnz     loc_853559
0x852EF6: push    10h; Size
0x852EF8: call    FormHeapAlloc
0x852EFD: add     esp, 4
0x852F00: mov     [esp+14h+arg_C], eax
0x852F04: test    eax, eax
0x852F06: mov     [esp+14h+var_4], 1Bh
0x852F0E: jz      loc_85353C
0x852F14: mov     ecx, [esp+14h+arg_4]
0x852F18: mov     edx, [esp+14h+arg_0]
0x852F1C: push    ecx
0x852F1D: push    1
0x852F1F: push    1
0x852F21: push    2Bh ; '+'
0x852F23: push    edx
0x852F24: push    eax
0x852F25: call    sub_7E2370
0x852F2A: add     esp, 18h
0x852F2D: jmp     loc_85353E
0x852F32: cmp     byte ptr [esp+14h+arg_C], 1
0x852F37: jnz     loc_853559
0x852F3D: push    10h; Size
0x852F3F: call    FormHeapAlloc
0x852F44: add     esp, 4
0x852F47: mov     [esp+14h+arg_C], eax
0x852F4B: test    eax, eax
0x852F4D: mov     [esp+14h+var_4], 1Ch
0x852F55: jz      loc_85353C
0x852F5B: mov     ecx, [esp+14h+arg_4]
0x852F5F: mov     edx, [esp+14h+arg_0]
0x852F63: push    ecx
0x852F64: push    1
0x852F66: push    1
0x852F68: push    2Ch ; ','
0x852F6A: push    edx
0x852F6B: push    eax
0x852F6C: call    sub_7E2370
0x852F71: add     esp, 18h
0x852F74: jmp     loc_85353E
0x852F79: cmp     [esp+14h+arg_20], 0
0x852F7E: jz      loc_853035
0x852F84: cmp     [esp+14h+arg_24], 0
0x852F89: jz      short loc_852FC9
0x852F8B: cmp     [esp+14h+arg_28], 0
0x852F90: mov     eax, ds:0B42E8Ch
0x852F95: jnz     short loc_852FB0
0x852F97: test    eax, eax
0x852F99: jz      loc_853561
0x852F9F: push    0; _DWORD
0x852FA1: push    offset aShaderError_12; "SHADER ERROR : no shader to handle AMBD"...
0x852FA6: call    eax ; dword_B42E8C
0x852FA8: add     esp, 8
0x852FAB: jmp     loc_853561
0x852FB0: test    eax, eax
0x852FB2: jz      loc_853561
0x852FB8: push    0; _DWORD
0x852FBA: push    offset aShaderError_13; "SHADER ERROR : no shader to handle AMBD"...
0x852FBF: call    eax ; dword_B42E8C
0x852FC1: add     esp, 8
0x852FC4: jmp     loc_853561
0x852FC9: cmp     [esp+14h+arg_28], 0
0x852FCE: jnz     short loc_853017
0x852FD0: cmp     byte ptr [esp+14h+arg_C], 1
0x852FD5: jnz     loc_853559
0x852FDB: push    10h; Size
0x852FDD: call    FormHeapAlloc
0x852FE2: add     esp, 4
0x852FE5: mov     [esp+14h+arg_C], eax
0x852FE9: test    eax, eax
0x852FEB: mov     [esp+14h+var_4], 1Dh
0x852FF3: jz      loc_85353C
0x852FF9: mov     ecx, [esp+14h+arg_4]
0x852FFD: mov     edx, [esp+14h+arg_0]
0x853001: push    ecx
0x853002: push    1
0x853004: push    1
0x853006: push    2Dh ; '-'
0x853008: push    edx
0x853009: push    eax
0x85300A: call    sub_7E2370
0x85300F: add     esp, 18h
0x853012: jmp     loc_85353E
0x853017: mov     eax, ds:0B42E8Ch
0x85301C: test    eax, eax
0x85301E: jz      loc_853561
0x853024: push    0; _DWORD
0x853026: push    offset aShaderError_14; "SHADER ERROR : no shader to handle AMBD"...
0x85302B: call    eax ; dword_B42E8C
0x85302D: add     esp, 8
0x853030: jmp     loc_853561
0x853035: cmp     [esp+14h+arg_24], 0
0x85303A: jz      loc_8530D5
0x853040: cmp     [esp+14h+arg_28], 0
0x853045: jnz     short loc_85308E
0x853047: cmp     byte ptr [esp+14h+arg_C], 1
0x85304C: jnz     loc_853559
0x853052: push    10h; Size
0x853054: call    FormHeapAlloc
0x853059: add     esp, 4
0x85305C: mov     [esp+14h+arg_C], eax
0x853060: test    eax, eax
0x853062: mov     [esp+14h+var_4], 1Eh
0x85306A: jz      loc_85353C
0x853070: mov     ecx, [esp+14h+arg_4]
0x853074: mov     edx, [esp+14h+arg_0]
0x853078: push    ecx
0x853079: push    1
0x85307B: push    1
0x85307D: push    42h ; 'B'
0x85307F: push    edx
0x853080: push    eax
0x853081: call    sub_7E2370
0x853086: add     esp, 18h
0x853089: jmp     loc_85353E
0x85308E: cmp     byte ptr [esp+14h+arg_C], 1
0x853093: jnz     loc_853559
0x853099: push    10h; Size
0x85309B: call    FormHeapAlloc
0x8530A0: add     esp, 4
0x8530A3: mov     [esp+14h+arg_C], eax
0x8530A7: test    eax, eax
0x8530A9: mov     [esp+14h+var_4], 1Fh
0x8530B1: jz      loc_85353C
0x8530B7: mov     ecx, [esp+14h+arg_4]
0x8530BB: mov     edx, [esp+14h+arg_0]
0x8530BF: push    ecx
0x8530C0: push    1
0x8530C2: push    1
0x8530C4: push    43h ; 'C'
0x8530C6: push    edx
0x8530C7: push    eax
0x8530C8: call    sub_7E2370
0x8530CD: add     esp, 18h
0x8530D0: jmp     loc_85353E
0x8530D5: cmp     [esp+14h+arg_28], 0
0x8530DA: jnz     short loc_853123
0x8530DC: cmp     byte ptr [esp+14h+arg_C], 1
0x8530E1: jnz     loc_853559
0x8530E7: push    10h; Size
0x8530E9: call    FormHeapAlloc
0x8530EE: add     esp, 4
0x8530F1: mov     [esp+14h+arg_C], eax
0x8530F5: test    eax, eax
0x8530F7: mov     [esp+14h+var_4], 20h ; ' '
0x8530FF: jz      loc_85353C
0x853105: mov     ecx, [esp+14h+arg_4]
0x853109: mov     edx, [esp+14h+arg_0]
0x85310D: push    ecx
0x85310E: push    1
0x853110: push    1
0x853112: push    29h ; ')'
0x853114: push    edx
0x853115: push    eax
0x853116: call    sub_7E2370
0x85311B: add     esp, 18h
0x85311E: jmp     loc_85353E
0x853123: cmp     byte ptr [esp+14h+arg_C], 1
0x853128: jnz     loc_853559
0x85312E: push    10h; Size
0x853130: call    FormHeapAlloc
0x853135: add     esp, 4
0x853138: mov     [esp+14h+arg_C], eax
0x85313C: test    eax, eax
0x85313E: mov     [esp+14h+var_4], 21h ; '!'
0x853146: jz      loc_85353C
0x85314C: mov     ecx, [esp+14h+arg_4]
0x853150: mov     edx, [esp+14h+arg_0]
0x853154: push    ecx
0x853155: push    1
0x853157: push    1
0x853159: push    2Ah ; '*'
0x85315B: push    edx
0x85315C: push    eax
0x85315D: call    sub_7E2370
0x853162: add     esp, 18h
0x853165: jmp     loc_85353E
0x85316A: cmp     [esp+14h+arg_1C], 0
0x85316F: jz      loc_85332F
0x853175: cmp     [esp+14h+arg_20], 0
0x85317A: jz      short loc_8531FA
0x85317C: cmp     [esp+14h+arg_24], 0
0x853181: mov     eax, ds:0B42E8Ch
0x853186: jz      short loc_8531C1
0x853188: cmp     [esp+14h+arg_28], 0
0x85318D: jnz     short loc_8531A8
0x85318F: test    eax, eax
0x853191: jz      loc_853561
0x853197: push    0; _DWORD
0x853199: push    offset aShaderError_15; "SHADER ERROR : no shader to handle AMBD"...
0x85319E: call    eax ; dword_B42E8C
0x8531A0: add     esp, 8
0x8531A3: jmp     loc_853561
0x8531A8: test    eax, eax
0x8531AA: jz      loc_853561
0x8531B0: push    0; _DWORD
0x8531B2: push    offset aShaderError_16; "SHADER ERROR : no shader to handle AMBD"...
0x8531B7: call    eax ; dword_B42E8C
0x8531B9: add     esp, 8
0x8531BC: jmp     loc_853561
0x8531C1: cmp     [esp+14h+arg_28], 0
0x8531C6: jnz     short loc_8531E1
0x8531C8: test    eax, eax
0x8531CA: jz      loc_853561
0x8531D0: push    0; _DWORD
0x8531D2: push    offset aShaderError_17; "SHADER ERROR : no shader to handle AMBD"...
0x8531D7: call    eax ; dword_B42E8C
0x8531D9: add     esp, 8
0x8531DC: jmp     loc_853561
0x8531E1: test    eax, eax
0x8531E3: jz      loc_853561
0x8531E9: push    0; _DWORD
0x8531EB: push    offset aShaderError_18; "SHADER ERROR : no shader to handle AMBD"...
0x8531F0: call    eax ; dword_B42E8C
0x8531F2: add     esp, 8
0x8531F5: jmp     loc_853561
0x8531FA: cmp     [esp+14h+arg_24], 0
0x8531FF: jz      loc_85329A
0x853205: cmp     [esp+14h+arg_28], 0
0x85320A: jnz     short loc_853253
0x85320C: cmp     byte ptr [esp+14h+arg_C], 1
0x853211: jnz     loc_853559
0x853217: push    10h; Size
0x853219: call    FormHeapAlloc
0x85321E: add     esp, 4
0x853221: mov     [esp+14h+arg_C], eax
0x853225: test    eax, eax
0x853227: mov     [esp+14h+var_4], 22h ; '"'
0x85322F: jz      loc_85353C
0x853235: mov     ecx, [esp+14h+arg_4]
0x853239: mov     edx, [esp+14h+arg_0]
0x85323D: push    ecx
0x85323E: push    1
0x853240: push    1
0x853242: push    40h ; '@'
0x853244: push    edx
0x853245: push    eax
0x853246: call    sub_7E2370
0x85324B: add     esp, 18h
0x85324E: jmp     loc_85353E
0x853253: cmp     byte ptr [esp+14h+arg_C], 1
0x853258: jnz     loc_853559
0x85325E: push    10h; Size
0x853260: call    FormHeapAlloc
0x853265: add     esp, 4
0x853268: mov     [esp+14h+arg_C], eax
0x85326C: test    eax, eax
0x85326E: mov     [esp+14h+var_4], 23h ; '#'
0x853276: jz      loc_85353C
0x85327C: mov     ecx, [esp+14h+arg_4]
0x853280: mov     edx, [esp+14h+arg_0]
0x853284: push    ecx
0x853285: push    1
0x853287: push    1
0x853289: push    41h ; 'A'
0x85328B: push    edx
0x85328C: push    eax
0x85328D: call    sub_7E2370
0x853292: add     esp, 18h
0x853295: jmp     loc_85353E
0x85329A: cmp     [esp+14h+arg_28], 0
0x85329F: jnz     short loc_8532E8
0x8532A1: cmp     byte ptr [esp+14h+arg_C], 1
0x8532A6: jnz     loc_853559
0x8532AC: push    10h; Size
0x8532AE: call    FormHeapAlloc
0x8532B3: add     esp, 4
0x8532B6: mov     [esp+14h+arg_C], eax
0x8532BA: test    eax, eax
0x8532BC: mov     [esp+14h+var_4], 24h ; '$'
0x8532C4: jz      loc_85353C
0x8532CA: mov     ecx, [esp+14h+arg_4]
0x8532CE: mov     edx, [esp+14h+arg_0]
0x8532D2: push    ecx
0x8532D3: push    1
0x8532D5: push    1
0x8532D7: push    26h ; '&'
0x8532D9: push    edx
0x8532DA: push    eax
0x8532DB: call    sub_7E2370
0x8532E0: add     esp, 18h
0x8532E3: jmp     loc_85353E
0x8532E8: cmp     byte ptr [esp+14h+arg_C], 1
0x8532ED: jnz     loc_853559
0x8532F3: push    10h; Size
0x8532F5: call    FormHeapAlloc
0x8532FA: add     esp, 4
0x8532FD: mov     [esp+14h+arg_C], eax
0x853301: test    eax, eax
0x853303: mov     [esp+14h+var_4], 25h ; '%'
0x85330B: jz      loc_85353C
0x853311: mov     ecx, [esp+14h+arg_4]
0x853315: mov     edx, [esp+14h+arg_0]
0x853319: push    ecx
0x85331A: push    1
0x85331C: push    1
0x85331E: push    27h ; '''
0x853320: push    edx
0x853321: push    eax
0x853322: call    sub_7E2370
0x853327: add     esp, 18h
0x85332A: jmp     loc_85353E
0x85332F: cmp     [esp+14h+arg_20], 0
0x853334: jz      loc_853419
0x85333A: cmp     [esp+14h+arg_24], 0
0x85333F: jz      short loc_8533AD
0x853341: cmp     [esp+14h+arg_28], 0
0x853346: jnz     short loc_85338F
0x853348: cmp     byte ptr [esp+14h+arg_C], 1
0x85334D: jnz     loc_853559
0x853353: push    10h; Size
0x853355: call    FormHeapAlloc
0x85335A: add     esp, 4
0x85335D: mov     [esp+14h+arg_C], eax
0x853361: test    eax, eax
0x853363: mov     [esp+14h+var_4], 26h ; '&'
0x85336B: jz      loc_85353C
0x853371: mov     ecx, [esp+14h+arg_4]
0x853375: mov     edx, [esp+14h+arg_0]
0x853379: push    ecx
0x85337A: push    1
0x85337C: push    1
0x85337E: push    44h ; 'D'
0x853380: push    edx
0x853381: push    eax
0x853382: call    sub_7E2370
0x853387: add     esp, 18h
0x85338A: jmp     loc_85353E
0x85338F: mov     eax, ds:0B42E8Ch
0x853394: test    eax, eax
0x853396: jz      loc_853561
0x85339C: push    0; _DWORD
0x85339E: push    offset aShaderError_19; "SHADER ERROR : no shader to handle AMBD"...
0x8533A3: call    eax ; dword_B42E8C
0x8533A5: add     esp, 8
0x8533A8: jmp     loc_853561
0x8533AD: cmp     [esp+14h+arg_28], 0
0x8533B2: jnz     short loc_8533FB
0x8533B4: cmp     byte ptr [esp+14h+arg_C], 1
0x8533B9: jnz     loc_853559
0x8533BF: push    10h; Size
0x8533C1: call    FormHeapAlloc
0x8533C6: add     esp, 4
0x8533C9: mov     [esp+14h+arg_C], eax
0x8533CD: test    eax, eax
0x8533CF: mov     [esp+14h+var_4], 27h ; '''
0x8533D7: jz      loc_85353C
0x8533DD: mov     ecx, [esp+14h+arg_4]
0x8533E1: mov     edx, [esp+14h+arg_0]
0x8533E5: push    ecx
0x8533E6: push    1
0x8533E8: push    1
0x8533EA: push    28h ; '('
0x8533EC: push    edx
0x8533ED: push    eax
0x8533EE: call    sub_7E2370
0x8533F3: add     esp, 18h
0x8533F6: jmp     loc_85353E
0x8533FB: mov     eax, ds:0B42E8Ch
0x853400: test    eax, eax
0x853402: jz      loc_853561
0x853408: push    0; _DWORD
0x85340A: push    offset aShaderError_20; "SHADER ERROR : no shader to handle AMBD"...
0x85340F: call    eax ; dword_B42E8C
0x853411: add     esp, 8
0x853414: jmp     loc_853561
0x853419: cmp     [esp+14h+arg_24], 0
0x85341E: jz      loc_8534B9
0x853424: cmp     [esp+14h+arg_28], 0
0x853429: jnz     short loc_853472
0x85342B: cmp     byte ptr [esp+14h+arg_C], 1
0x853430: jnz     loc_853559
0x853436: push    10h; Size
0x853438: call    FormHeapAlloc
0x85343D: add     esp, 4
0x853440: mov     [esp+14h+arg_C], eax
0x853444: test    eax, eax
0x853446: mov     [esp+14h+var_4], 28h ; '('
0x85344E: jz      loc_85353C
0x853454: mov     ecx, [esp+14h+arg_4]
0x853458: mov     edx, [esp+14h+arg_0]
0x85345C: push    ecx
0x85345D: push    1
0x85345F: push    1
0x853461: push    3Eh ; '>'
0x853463: push    edx
0x853464: push    eax
0x853465: call    sub_7E2370
0x85346A: add     esp, 18h
0x85346D: jmp     loc_85353E
0x853472: cmp     byte ptr [esp+14h+arg_C], 1
0x853477: jnz     loc_853559
0x85347D: push    10h; Size
0x85347F: call    FormHeapAlloc
0x853484: add     esp, 4
0x853487: mov     [esp+14h+arg_C], eax
0x85348B: test    eax, eax
0x85348D: mov     [esp+14h+var_4], 29h ; ')'
0x853495: jz      loc_85353C
0x85349B: mov     ecx, [esp+14h+arg_4]
0x85349F: mov     edx, [esp+14h+arg_0]
0x8534A3: push    ecx
0x8534A4: push    1
0x8534A6: push    1
0x8534A8: push    3Fh ; '?'
0x8534AA: push    edx
0x8534AB: push    eax
0x8534AC: call    sub_7E2370
0x8534B1: add     esp, 18h
0x8534B4: jmp     loc_85353E
0x8534B9: cmp     [esp+14h+arg_28], 0
0x8534BE: jnz     short loc_853500
0x8534C0: cmp     byte ptr [esp+14h+arg_C], 1
0x8534C5: jnz     loc_853559
0x8534CB: push    10h; Size
0x8534CD: call    FormHeapAlloc
0x8534D2: add     esp, 4
0x8534D5: mov     [esp+14h+arg_C], eax
0x8534D9: test    eax, eax
0x8534DB: mov     [esp+14h+var_4], 2Ah ; '*'
0x8534E3: jz      short loc_85353C
0x8534E5: mov     ecx, [esp+14h+arg_4]
0x8534E9: mov     edx, [esp+14h+arg_0]
0x8534ED: push    ecx
0x8534EE: push    1
0x8534F0: push    1
0x8534F2: push    24h ; '$'
0x8534F4: push    edx
0x8534F5: push    eax
0x8534F6: call    sub_7E2370
0x8534FB: add     esp, 18h
0x8534FE: jmp     short loc_85353E
0x853500: cmp     byte ptr [esp+14h+arg_C], 1
0x853505: jnz     short loc_853559
0x853507: push    10h; Size
0x853509: call    FormHeapAlloc
0x85350E: add     esp, 4
0x853511: mov     [esp+14h+arg_C], eax
0x853515: test    eax, eax
0x853517: mov     [esp+14h+var_4], 2Bh ; '+'
0x85351F: jz      short loc_85353C
0x853521: mov     ecx, [esp+14h+arg_4]
0x853525: mov     edx, [esp+14h+arg_0]
0x853529: push    ecx
0x85352A: push    1
0x85352C: push    1
0x85352E: push    25h ; '%'
0x853530: push    edx
0x853531: push    eax
0x853532: call    sub_7E2370
0x853537: add     esp, 18h
0x85353A: jmp     short loc_85353E
0x85353C: xor     eax, eax
0x85353E: mov     [esp+14h+arg_C], eax
0x853542: lea     eax, [esp+14h+arg_C]
0x853546: push    eax
0x853547: lea     ecx, [esi+28h]
0x85354A: mov     [esp+18h+var_4], 0FFFFFFFFh
0x853552: call    sub_5B1E20
0x853557: jmp     short loc_853561
0x853559: mov     eax, [esp+14h+arg_8]
0x85355D: add     word ptr [eax], 1
0x853561: mov     ecx, [esp+14h+arg_10]
0x853565: mov     byte ptr [ecx], 0
0x853568: mov     ecx, [esp+14h+var_C]
0x85356C: mov     large fs:0, ecx
0x853573: pop     ecx
0x853574: pop     esi
0x853575: add     esp, 0Ch
0x853578: retn    30h ; '0'
