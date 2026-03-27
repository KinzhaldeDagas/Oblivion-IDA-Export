0x89AD80: push    ecx
0x89AD81: push    ebx
0x89AD82: push    ebp
0x89AD83: push    esi
0x89AD84: mov     esi, ecx
0x89AD86: mov     ecx, [esi+5Ch]
0x89AD89: xor     ebx, ebx
0x89AD8B: mov     dword ptr [esi], offset off_A96D6C
0x89AD91: cmp     [ecx+4], bx
0x89AD95: push    edi
0x89AD96: jz      short loc_89ADA8
0x89AD98: dec     word ptr [ecx+6]
0x89AD9C: cmp     [ecx+6], bx
0x89ADA0: jnz     short loc_89ADA8
0x89ADA2: mov     eax, [ecx]
0x89ADA4: push    1
0x89ADA6: call    dword ptr [eax]
0x89ADA8: mov     edi, [esi+0A0h]
0x89ADAE: cmp     edi, ebx
0x89ADB0: mov     [esi+5Ch], ebx
0x89ADB3: jz      short loc_89ADD2
0x89ADB5: push    edi; lpCriticalSection
0x89ADB6: call    dword ptr ds:0A28068h
0x89ADBC: mov     ecx, ds:0BA7D98h
0x89ADC2: mov     edx, [ecx]
0x89ADC4: push    12h
0x89ADC6: push    18h
0x89ADC8: push    edi
0x89ADC9: call    dword ptr [edx+14h]
0x89ADCC: mov     [esi+0A0h], ebx
0x89ADD2: mov     ecx, [esi+60h]
0x89ADD5: cmp     ecx, ebx
0x89ADD7: jz      short loc_89ADF2
0x89ADD9: cmp     [ecx+4], bx
0x89ADDD: jz      short loc_89ADEF
0x89ADDF: dec     word ptr [ecx+6]
0x89ADE3: cmp     [ecx+6], bx
0x89ADE7: jnz     short loc_89ADEF
0x89ADE9: mov     eax, [ecx]
0x89ADEB: push    1
0x89ADED: call    dword ptr [eax]
0x89ADEF: mov     [esi+60h], ebx
0x89ADF2: cmp     [esi+0BCh], ebx
0x89ADF8: jle     short loc_89AE18
0x89ADFA: lea     ebx, [ebx+0]
0x89AE00: mov     ecx, [esi+0B8h]
0x89AE06: mov     edx, [ecx]
0x89AE08: push    edx
0x89AE09: mov     ecx, esi
0x89AE0B: call    sub_899B30
0x89AE10: cmp     [esi+0BCh], ebx
0x89AE16: jg      short loc_89AE00
0x89AE18: cmp     [esi+3Ch], ebx
0x89AE1B: jle     short loc_89AE41
0x89AE1D: lea     ecx, [ecx+0]
0x89AE20: mov     eax, [esi+38h]
0x89AE23: mov     eax, [eax]
0x89AE25: cmp     [eax+38h], ebx
0x89AE28: jz      short loc_89AE41
0x89AE2A: mov     ecx, [eax+34h]
0x89AE2D: mov     edx, [ecx]
0x89AE2F: push    edx
0x89AE30: lea     eax, [esp+18h+var_1]
0x89AE34: push    eax
0x89AE35: mov     ecx, esi
0x89AE37: call    sub_8996C0
0x89AE3C: cmp     [esi+3Ch], ebx
0x89AE3F: jg      short loc_89AE20
0x89AE41: cmp     [esi+48h], ebx
0x89AE44: jle     short loc_89AE62
0x89AE46: mov     ecx, [esi+44h]
0x89AE49: mov     edx, [ecx]
0x89AE4B: mov     eax, [edx+34h]
0x89AE4E: mov     ecx, [eax]
0x89AE50: push    ecx
0x89AE51: lea     edx, [esp+18h+var_1]
0x89AE55: push    edx
0x89AE56: mov     ecx, esi
0x89AE58: call    sub_8996C0
0x89AE5D: cmp     [esi+48h], ebx
0x89AE60: jg      short loc_89AE46
0x89AE62: cmp     [esi+0A4h], bl
0x89AE68: jnz     short loc_89AE95
0x89AE6A: mov     eax, [esi+3Ch]
0x89AE6D: mov     ecx, [esi+38h]
0x89AE70: mov     edx, [ecx+eax*4-4]
0x89AE74: push    edx
0x89AE75: push    esi
0x89AE76: call    sub_8CB610
0x89AE7B: mov     eax, [esi+3Ch]
0x89AE7E: mov     ecx, [esi+38h]
0x89AE81: mov     ecx, [ecx+eax*4-4]
0x89AE85: add     esp, 8
0x89AE88: cmp     ecx, ebx
0x89AE8A: jz      short loc_89AE92
0x89AE8C: mov     edx, [ecx]
0x89AE8E: push    1
0x89AE90: call    dword ptr [edx]
0x89AE92: dec     dword ptr [esi+3Ch]
0x89AE95: mov     eax, [esi+34h]
0x89AE98: push    eax
0x89AE99: lea     ecx, [esp+18h+var_1]
0x89AE9D: push    ecx
0x89AE9E: mov     ecx, esi
0x89AEA0: call    sub_8996C0
0x89AEA5: mov     edx, [esi+30h]
0x89AEA8: mov     [esi+34h], ebx
0x89AEAB: cmp     [edx+38h], ebx
0x89AEAE: jle     short loc_89AECD
0x89AEB0: mov     eax, [esi+30h]
0x89AEB3: mov     ecx, [eax+34h]
0x89AEB6: mov     edx, [ecx]
0x89AEB8: push    edx
0x89AEB9: lea     eax, [esp+18h+var_1]
0x89AEBD: push    eax
0x89AEBE: mov     ecx, esi
0x89AEC0: call    sub_8996C0
0x89AEC5: mov     ecx, [esi+30h]
0x89AEC8: cmp     [ecx+38h], ebx
0x89AECB: jg      short loc_89AEB0
0x89AECD: mov     edx, [esi+30h]
0x89AED0: push    edx
0x89AED1: push    esi
0x89AED2: call    sub_8CB610
0x89AED7: mov     ecx, [esi+30h]
0x89AEDA: add     esp, 8
0x89AEDD: cmp     ecx, ebx
0x89AEDF: jz      short loc_89AEE7
0x89AEE1: mov     eax, [ecx]
0x89AEE3: push    1
0x89AEE5: call    dword ptr [eax]
0x89AEE7: push    esi
0x89AEE8: mov     [esi+30h], ebx
0x89AEEB: call    sub_8DCA40
0x89AEF0: mov     ecx, [esi+64h]
0x89AEF3: add     esp, 4
0x89AEF6: cmp     [ecx+4], bx
0x89AEFA: jz      short loc_89AF0C
0x89AEFC: dec     word ptr [ecx+6]
0x89AF00: cmp     [ecx+6], bx
0x89AF04: jnz     short loc_89AF0C
0x89AF06: mov     edx, [ecx]
0x89AF08: push    1
0x89AF0A: call    dword ptr [edx]
0x89AF0C: mov     ecx, [esi+7Ch]
0x89AF0F: mov     [esi+64h], ebx
0x89AF12: cmp     [ecx+4], bx
0x89AF16: jz      short loc_89AF28
0x89AF18: dec     word ptr [ecx+6]
0x89AF1C: cmp     [ecx+6], bx
0x89AF20: jnz     short loc_89AF28
0x89AF22: mov     eax, [ecx]
0x89AF24: push    1
0x89AF26: call    dword ptr [eax]
0x89AF28: mov     edi, [esi+68h]
0x89AF2B: cmp     edi, ebx
0x89AF2D: mov     [esi+7Ch], ebx
0x89AF30: jz      short loc_89AF4C
0x89AF32: mov     ecx, edi
0x89AF34: call    sub_8D8350
0x89AF39: mov     ecx, ds:0BA7D98h
0x89AF3F: mov     edx, [ecx]
0x89AF41: push    24h ; '$'
0x89AF43: push    104h
0x89AF48: push    edi
0x89AF49: call    dword ptr [edx+14h]
0x89AF4C: mov     ecx, [esi+154h]
0x89AF52: cmp     ecx, ebx
0x89AF54: jz      short loc_89AF6C
0x89AF56: cmp     [ecx+4], bx
0x89AF5A: jz      short loc_89AF6C
0x89AF5C: dec     word ptr [ecx+6]
0x89AF60: cmp     [ecx+6], bx
0x89AF64: jnz     short loc_89AF6C
0x89AF66: mov     eax, [ecx]
0x89AF68: push    1
0x89AF6A: call    dword ptr [eax]
0x89AF6C: mov     ecx, [esi+6Ch]
0x89AF6F: cmp     ecx, ebx
0x89AF71: jz      short loc_89AF79
0x89AF73: mov     edx, [ecx]
0x89AF75: push    1
0x89AF77: call    dword ptr [edx]
0x89AF79: mov     ecx, [esi+70h]
0x89AF7C: cmp     ecx, ebx
0x89AF7E: jz      short loc_89AF86
0x89AF80: mov     eax, [ecx]
0x89AF82: push    1
0x89AF84: call    dword ptr [eax]
0x89AF86: mov     ecx, [esi+78h]
0x89AF89: cmp     [ecx+4], bx
0x89AF8D: jz      short loc_89AF9F
0x89AF8F: dec     word ptr [ecx+6]
0x89AF93: cmp     [ecx+6], bx
0x89AF97: jnz     short loc_89AF9F
0x89AF99: mov     edx, [ecx]
0x89AF9B: push    1
0x89AF9D: call    dword ptr [edx]
0x89AF9F: mov     edx, [esi+74h]
0x89AFA2: mov     ecx, ds:0BA7D98h
0x89AFA8: mov     edx, [edx+20h]
0x89AFAB: mov     eax, [ecx]
0x89AFAD: push    1Ch
0x89AFAF: push    8
0x89AFB1: push    edx
0x89AFB2: call    dword ptr [eax+14h]
0x89AFB5: mov     ecx, ds:0BA7D98h
0x89AFBB: mov     edx, [esi+74h]
0x89AFBE: mov     eax, [ecx]
0x89AFC0: push    1Ch
0x89AFC2: push    2Ch ; ','
0x89AFC4: push    edx
0x89AFC5: call    dword ptr [eax+14h]
0x89AFC8: mov     ecx, [esi+8]
0x89AFCB: cmp     [ecx+4], bx
0x89AFCF: jz      short loc_89AFE1
0x89AFD1: dec     word ptr [ecx+6]
0x89AFD5: cmp     [ecx+6], bx
0x89AFD9: jnz     short loc_89AFE1
0x89AFDB: mov     eax, [ecx]
0x89AFDD: push    1
0x89AFDF: call    dword ptr [eax]
0x89AFE1: mov     edi, [esi+80h]
0x89AFE7: cmp     edi, ebx
0x89AFE9: jz      short loc_89B002
0x89AFEB: mov     ecx, edi
0x89AFED: call    sub_8D87E0
0x89AFF2: mov     ecx, ds:0BA7D98h
0x89AFF8: mov     edx, [ecx]
0x89AFFA: push    2Ch ; ','
0x89AFFC: push    28h ; '('
0x89AFFE: push    edi
0x89AFFF: call    dword ptr [edx+14h]
0x89B002: mov     eax, [esi+150h]
0x89B008: test    eax, eax
0x89B00A: mov     edi, ds:0BA9DE4h
0x89B010: mov     ebp, large fs:2Ch
0x89B017: js      short loc_89B044
0x89B019: mov     ecx, [ebp+edi*4+0]
0x89B01D: mov     ecx, [ecx+19Ch]
0x89B023: cmp     ecx, ebx
0x89B025: jnz     short loc_89B02D
0x89B027: mov     ecx, ds:0BA7D9Ch
0x89B02D: mov     edx, [esi+148h]
0x89B033: and     eax, 3FFFFFFFh
0x89B038: push    14h
0x89B03A: shl     eax, 2
0x89B03D: push    eax
0x89B03E: push    edx
0x89B03F: call    sub_8A75D0
0x89B044: mov     eax, [esi+144h]
0x89B04A: test    eax, eax
0x89B04C: js      short loc_89B079
0x89B04E: mov     ecx, [ebp+edi*4+0]
0x89B052: mov     ecx, [ecx+19Ch]
0x89B058: cmp     ecx, ebx
0x89B05A: jnz     short loc_89B062
0x89B05C: mov     ecx, ds:0BA7D9Ch
0x89B062: mov     edx, [esi+13Ch]
0x89B068: and     eax, 3FFFFFFFh
0x89B06D: push    14h
0x89B06F: shl     eax, 2
0x89B072: push    eax
0x89B073: push    edx
0x89B074: call    sub_8A75D0
0x89B079: mov     eax, [esi+138h]
0x89B07F: test    eax, eax
0x89B081: js      short loc_89B0AE
0x89B083: mov     ecx, [ebp+edi*4+0]
0x89B087: mov     ecx, [ecx+19Ch]
0x89B08D: cmp     ecx, ebx
0x89B08F: jnz     short loc_89B097
0x89B091: mov     ecx, ds:0BA7D9Ch
0x89B097: mov     edx, [esi+130h]
0x89B09D: and     eax, 3FFFFFFFh
0x89B0A2: push    14h
0x89B0A4: shl     eax, 2
0x89B0A7: push    eax
0x89B0A8: push    edx
0x89B0A9: call    sub_8A75D0
0x89B0AE: mov     eax, [esi+12Ch]
0x89B0B4: test    eax, eax
0x89B0B6: js      short loc_89B0E3
0x89B0B8: mov     ecx, [ebp+edi*4+0]
0x89B0BC: mov     ecx, [ecx+19Ch]
0x89B0C2: cmp     ecx, ebx
0x89B0C4: jnz     short loc_89B0CC
0x89B0C6: mov     ecx, ds:0BA7D9Ch
0x89B0CC: mov     edx, [esi+124h]
0x89B0D2: and     eax, 3FFFFFFFh
0x89B0D7: push    14h
0x89B0D9: shl     eax, 2
0x89B0DC: push    eax
0x89B0DD: push    edx
0x89B0DE: call    sub_8A75D0
0x89B0E3: mov     eax, [esi+120h]
0x89B0E9: test    eax, eax
0x89B0EB: js      short loc_89B118
0x89B0ED: mov     ecx, [ebp+edi*4+0]
0x89B0F1: mov     ecx, [ecx+19Ch]
0x89B0F7: cmp     ecx, ebx
0x89B0F9: jnz     short loc_89B101
0x89B0FB: mov     ecx, ds:0BA7D9Ch
0x89B101: mov     edx, [esi+118h]
0x89B107: and     eax, 3FFFFFFFh
0x89B10C: push    14h
0x89B10E: shl     eax, 2
0x89B111: push    eax
0x89B112: push    edx
0x89B113: call    sub_8A75D0
0x89B118: mov     eax, [esi+114h]
0x89B11E: test    eax, eax
0x89B120: js      short loc_89B14D
0x89B122: mov     ecx, [ebp+edi*4+0]
0x89B126: mov     ecx, [ecx+19Ch]
0x89B12C: cmp     ecx, ebx
0x89B12E: jnz     short loc_89B136
0x89B130: mov     ecx, ds:0BA7D9Ch
0x89B136: mov     edx, [esi+10Ch]
0x89B13C: and     eax, 3FFFFFFFh
0x89B141: push    14h
0x89B143: shl     eax, 2
0x89B146: push    eax
0x89B147: push    edx
0x89B148: call    sub_8A75D0
0x89B14D: mov     eax, [esi+108h]
0x89B153: test    eax, eax
0x89B155: js      short loc_89B182
0x89B157: mov     ecx, [ebp+edi*4+0]
0x89B15B: mov     ecx, [ecx+19Ch]
0x89B161: cmp     ecx, ebx
0x89B163: jnz     short loc_89B16B
0x89B165: mov     ecx, ds:0BA7D9Ch
0x89B16B: mov     edx, [esi+100h]
0x89B171: and     eax, 3FFFFFFFh
0x89B176: push    14h
0x89B178: shl     eax, 2
0x89B17B: push    eax
0x89B17C: push    edx
0x89B17D: call    sub_8A75D0
0x89B182: mov     eax, [esi+0FCh]
0x89B188: test    eax, eax
0x89B18A: js      short loc_89B1B7
0x89B18C: mov     ecx, [ebp+edi*4+0]
0x89B190: mov     ecx, [ecx+19Ch]
0x89B196: cmp     ecx, ebx
0x89B198: jnz     short loc_89B1A0
0x89B19A: mov     ecx, ds:0BA7D9Ch
0x89B1A0: mov     edx, [esi+0F4h]
0x89B1A6: and     eax, 3FFFFFFFh
0x89B1AB: push    14h
0x89B1AD: shl     eax, 2
0x89B1B0: push    eax
0x89B1B1: push    edx
0x89B1B2: call    sub_8A75D0
0x89B1B7: mov     eax, [esi+0F0h]
0x89B1BD: test    eax, eax
0x89B1BF: js      short loc_89B1EC
0x89B1C1: mov     ecx, [ebp+edi*4+0]
0x89B1C5: mov     ecx, [ecx+19Ch]
0x89B1CB: cmp     ecx, ebx
0x89B1CD: jnz     short loc_89B1D5
0x89B1CF: mov     ecx, ds:0BA7D9Ch
0x89B1D5: mov     edx, [esi+0E8h]
0x89B1DB: and     eax, 3FFFFFFFh
0x89B1E0: push    14h
0x89B1E2: shl     eax, 2
0x89B1E5: push    eax
0x89B1E6: push    edx
0x89B1E7: call    sub_8A75D0
0x89B1EC: mov     eax, [esi+0E4h]
0x89B1F2: test    eax, eax
0x89B1F4: js      short loc_89B221
0x89B1F6: mov     ecx, [ebp+edi*4+0]
0x89B1FA: mov     ecx, [ecx+19Ch]
0x89B200: cmp     ecx, ebx
0x89B202: jnz     short loc_89B20A
0x89B204: mov     ecx, ds:0BA7D9Ch
0x89B20A: mov     edx, [esi+0DCh]
0x89B210: and     eax, 3FFFFFFFh
0x89B215: push    14h
0x89B217: shl     eax, 2
0x89B21A: push    eax
0x89B21B: push    edx
0x89B21C: call    sub_8A75D0
0x89B221: mov     eax, [esi+0D8h]
0x89B227: test    eax, eax
0x89B229: js      short loc_89B256
0x89B22B: mov     ecx, [ebp+edi*4+0]
0x89B22F: mov     ecx, [ecx+19Ch]
0x89B235: cmp     ecx, ebx
0x89B237: jnz     short loc_89B23F
0x89B239: mov     ecx, ds:0BA7D9Ch
0x89B23F: mov     edx, [esi+0D0h]
0x89B245: and     eax, 3FFFFFFFh
0x89B24A: push    14h
0x89B24C: shl     eax, 2
0x89B24F: push    eax
0x89B250: push    edx
0x89B251: call    sub_8A75D0
0x89B256: mov     eax, [esi+0CCh]
0x89B25C: test    eax, eax
0x89B25E: js      short loc_89B28B
0x89B260: mov     ecx, [ebp+edi*4+0]
0x89B264: mov     ecx, [ecx+19Ch]
0x89B26A: cmp     ecx, ebx
0x89B26C: jnz     short loc_89B274
0x89B26E: mov     ecx, ds:0BA7D9Ch
0x89B274: mov     edx, [esi+0C4h]
0x89B27A: and     eax, 3FFFFFFFh
0x89B27F: push    14h
0x89B281: shl     eax, 2
0x89B284: push    eax
0x89B285: push    edx
0x89B286: call    sub_8A75D0
0x89B28B: mov     eax, [esi+0C0h]
0x89B291: test    eax, eax
0x89B293: js      short loc_89B2C0
0x89B295: mov     ecx, [ebp+edi*4+0]
0x89B299: mov     ecx, [ecx+19Ch]
0x89B29F: cmp     ecx, ebx
0x89B2A1: jnz     short loc_89B2A9
0x89B2A3: mov     ecx, ds:0BA7D9Ch
0x89B2A9: mov     edx, [esi+0B8h]
0x89B2AF: and     eax, 3FFFFFFFh
0x89B2B4: push    14h
0x89B2B6: shl     eax, 2
0x89B2B9: push    eax
0x89B2BA: push    edx
0x89B2BB: call    sub_8A75D0
0x89B2C0: mov     eax, [esi+58h]
0x89B2C3: test    eax, eax
0x89B2C5: js      short loc_89B2EF
0x89B2C7: mov     ecx, [ebp+edi*4+0]
0x89B2CB: mov     ecx, [ecx+19Ch]
0x89B2D1: cmp     ecx, ebx
0x89B2D3: jnz     short loc_89B2DB
0x89B2D5: mov     ecx, ds:0BA7D9Ch
0x89B2DB: mov     edx, [esi+50h]
0x89B2DE: and     eax, 3FFFFFFFh
0x89B2E3: push    14h
0x89B2E5: shl     eax, 2
0x89B2E8: push    eax
0x89B2E9: push    edx
0x89B2EA: call    sub_8A75D0
0x89B2EF: mov     eax, [esi+4Ch]
0x89B2F2: test    eax, eax
0x89B2F4: js      short loc_89B31E
0x89B2F6: mov     ecx, [ebp+edi*4+0]
0x89B2FA: mov     ecx, [ecx+19Ch]
0x89B300: cmp     ecx, ebx
0x89B302: jnz     short loc_89B30A
0x89B304: mov     ecx, ds:0BA7D9Ch
0x89B30A: mov     edx, [esi+44h]
0x89B30D: and     eax, 3FFFFFFFh
0x89B312: push    14h
0x89B314: shl     eax, 2
0x89B317: push    eax
0x89B318: push    edx
0x89B319: call    sub_8A75D0
0x89B31E: mov     eax, [esi+40h]
0x89B321: test    eax, eax
0x89B323: js      short loc_89B34D
0x89B325: mov     ecx, [ebp+edi*4+0]
0x89B329: mov     ecx, [ecx+19Ch]
0x89B32F: cmp     ecx, ebx
0x89B331: jnz     short loc_89B339
0x89B333: mov     ecx, ds:0BA7D9Ch
0x89B339: mov     edx, [esi+38h]
0x89B33C: and     eax, 3FFFFFFFh
0x89B341: push    14h
0x89B343: shl     eax, 2
0x89B346: push    eax
0x89B347: push    edx
0x89B348: call    sub_8A75D0
0x89B34D: pop     edi
0x89B34E: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x89B354: pop     esi
0x89B355: pop     ebp
0x89B356: pop     ebx
0x89B357: pop     ecx
0x89B358: retn
