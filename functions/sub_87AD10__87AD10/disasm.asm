0x87AD10: push    0FFFFFFFFh
0x87AD12: push    offset SEH_87AD10
0x87AD17: mov     eax, large fs:0
0x87AD1D: push    eax
0x87AD1E: sub     esp, 10h
0x87AD21: push    ebx
0x87AD22: push    ebp
0x87AD23: push    esi
0x87AD24: push    edi
0x87AD25: mov     eax, ds:0B30AACh
0x87AD2A: xor     eax, esp
0x87AD2C: push    eax
0x87AD2D: lea     eax, [esp+30h+var_C]
0x87AD31: mov     large fs:0, eax
0x87AD37: mov     [esp+30h+var_14], ecx
0x87AD3B: xor     esi, esi
0x87AD3D: xor     edi, edi
0x87AD3F: mov     [esp+30h+var_18], esi
0x87AD43: mov     [esp+30h+var_4], edi
0x87AD47: mov     [esp+30h+a3], edi
0x87AD4B: mov     eax, ds:0B47718h
0x87AD50: cmp     eax, edi
0x87AD52: mov     ebx, 1
0x87AD57: mov     byte ptr [esp+30h+var_4], bl
0x87AD5B: jz      short loc_87AD6A
0x87AD5D: mov     esi, eax
0x87AD5F: cmp     esi, edi
0x87AD61: mov     [esp+30h+var_18], esi
0x87AD65: jz      short loc_87AD6A
0x87AD67: add     [esi+60h], ebx
0x87AD6A: mov     eax, [esi+18h]
0x87AD6D: or      ebp, 0FFFFFFFFh
0x87AD70: cmp     eax, 7
0x87AD73: jnb     loc_87B06F
0x87AD79: lea     eax, [esp+30h+var_10]
0x87AD7D: push    eax
0x87AD7E: call    sub_772630
0x87AD83: add     esp, 4
0x87AD86: mov     eax, [eax]
0x87AD88: test    eax, eax
0x87AD8A: jz      short loc_87AD95
0x87AD8C: mov     edi, eax
0x87AD8E: add     [edi+5Ch], ebx
0x87AD91: mov     [esp+30h+a3], edi
0x87AD95: mov     eax, [esp+30h+var_10]
0x87AD99: test    eax, eax
0x87AD9B: mov     byte ptr [esp+30h+var_4], 1
0x87ADA0: jz      short loc_87ADB4
0x87ADA2: add     [eax+5Ch], ebp
0x87ADA5: mov     ecx, eax
0x87ADA7: add     eax, 5Ch ; '\'
0x87ADAA: cmp     dword ptr [eax], 0
0x87ADAD: jnz     short loc_87ADB4
0x87ADAF: call    sub_772560
0x87ADB4: push    2
0x87ADB6: push    1
0x87ADB8: push    0
0x87ADBA: push    edi
0x87ADBB: call    sub_801110
0x87ADC0: add     esp, 10h
0x87ADC3: push    edi; a3
0x87ADC4: push    0; a2
0x87ADC6: mov     ecx, esi; this
0x87ADC8: call    sub_760010
0x87ADCD: lea     ecx, [esp+30h+var_10]
0x87ADD1: push    ecx
0x87ADD2: call    sub_772630
0x87ADD7: add     esp, 4
0x87ADDA: mov     ebx, eax
0x87ADDC: cmp     edi, [ebx]
0x87ADDE: mov     byte ptr [esp+30h+var_4], 3
0x87ADE3: jz      short loc_87AE03
0x87ADE5: test    edi, edi
0x87ADE7: jz      short loc_87ADF5
0x87ADE9: add     [edi+5Ch], ebp
0x87ADEC: jnz     short loc_87ADF5
0x87ADEE: mov     ecx, edi
0x87ADF0: call    sub_772560
0x87ADF5: mov     edi, [ebx]
0x87ADF7: test    edi, edi
0x87ADF9: mov     [esp+30h+a3], edi
0x87ADFD: jz      short loc_87AE03
0x87ADFF: add     dword ptr [edi+5Ch], 1
0x87AE03: mov     eax, [esp+30h+var_10]
0x87AE07: test    eax, eax
0x87AE09: mov     byte ptr [esp+30h+var_4], 1
0x87AE0E: jz      short loc_87AE22
0x87AE10: add     [eax+5Ch], ebp
0x87AE13: mov     ecx, eax
0x87AE15: add     eax, 5Ch ; '\'
0x87AE18: cmp     dword ptr [eax], 0
0x87AE1B: jnz     short loc_87AE22
0x87AE1D: call    sub_772560
0x87AE22: push    2
0x87AE24: push    1
0x87AE26: push    1
0x87AE28: push    edi
0x87AE29: call    sub_801110
0x87AE2E: add     esp, 10h
0x87AE31: push    edi; a3
0x87AE32: push    1; a2
0x87AE34: mov     ecx, esi; this
0x87AE36: call    sub_760010
0x87AE3B: lea     edx, [esp+30h+var_10]
0x87AE3F: push    edx
0x87AE40: call    sub_772630
0x87AE45: add     esp, 4
0x87AE48: mov     ebx, eax
0x87AE4A: cmp     edi, [ebx]
0x87AE4C: mov     byte ptr [esp+30h+var_4], 4
0x87AE51: jz      short loc_87AE71
0x87AE53: test    edi, edi
0x87AE55: jz      short loc_87AE63
0x87AE57: add     [edi+5Ch], ebp
0x87AE5A: jnz     short loc_87AE63
0x87AE5C: mov     ecx, edi
0x87AE5E: call    sub_772560
0x87AE63: mov     edi, [ebx]
0x87AE65: test    edi, edi
0x87AE67: mov     [esp+30h+a3], edi
0x87AE6B: jz      short loc_87AE71
0x87AE6D: add     dword ptr [edi+5Ch], 1
0x87AE71: mov     eax, [esp+30h+var_10]
0x87AE75: test    eax, eax
0x87AE77: mov     byte ptr [esp+30h+var_4], 1
0x87AE7C: jz      short loc_87AE90
0x87AE7E: add     [eax+5Ch], ebp
0x87AE81: mov     ecx, eax
0x87AE83: add     eax, 5Ch ; '\'
0x87AE86: cmp     dword ptr [eax], 0
0x87AE89: jnz     short loc_87AE90
0x87AE8B: call    sub_772560
0x87AE90: push    2
0x87AE92: push    1
0x87AE94: push    2
0x87AE96: push    edi
0x87AE97: call    sub_801110
0x87AE9C: add     esp, 10h
0x87AE9F: push    edi; a3
0x87AEA0: push    2; a2
0x87AEA2: mov     ecx, esi; this
0x87AEA4: call    sub_760010
0x87AEA9: lea     eax, [esp+30h+var_10]
0x87AEAD: push    eax
0x87AEAE: call    sub_772630
0x87AEB3: add     esp, 4
0x87AEB6: mov     ebx, eax
0x87AEB8: cmp     edi, [ebx]
0x87AEBA: mov     byte ptr [esp+30h+var_4], 5
0x87AEBF: jz      short loc_87AEDF
0x87AEC1: test    edi, edi
0x87AEC3: jz      short loc_87AED1
0x87AEC5: add     [edi+5Ch], ebp
0x87AEC8: jnz     short loc_87AED1
0x87AECA: mov     ecx, edi
0x87AECC: call    sub_772560
0x87AED1: mov     edi, [ebx]
0x87AED3: test    edi, edi
0x87AED5: mov     [esp+30h+a3], edi
0x87AED9: jz      short loc_87AEDF
0x87AEDB: add     dword ptr [edi+5Ch], 1
0x87AEDF: mov     eax, [esp+30h+var_10]
0x87AEE3: test    eax, eax
0x87AEE5: mov     byte ptr [esp+30h+var_4], 1
0x87AEEA: jz      short loc_87AEFE
0x87AEEC: add     [eax+5Ch], ebp
0x87AEEF: mov     ecx, eax
0x87AEF1: add     eax, 5Ch ; '\'
0x87AEF4: cmp     dword ptr [eax], 0
0x87AEF7: jnz     short loc_87AEFE
0x87AEF9: call    sub_772560
0x87AEFE: push    2
0x87AF00: push    1
0x87AF02: push    3
0x87AF04: push    edi
0x87AF05: call    sub_801110
0x87AF0A: add     esp, 10h
0x87AF0D: push    edi; a3
0x87AF0E: push    3; a2
0x87AF10: mov     ecx, esi; this
0x87AF12: call    sub_760010
0x87AF17: lea     ecx, [esp+30h+var_10]
0x87AF1B: push    ecx
0x87AF1C: call    sub_772630
0x87AF21: add     esp, 4
0x87AF24: mov     ebx, eax
0x87AF26: cmp     edi, [ebx]
0x87AF28: mov     byte ptr [esp+30h+var_4], 6
0x87AF2D: jz      short loc_87AF4D
0x87AF2F: test    edi, edi
0x87AF31: jz      short loc_87AF3F
0x87AF33: add     [edi+5Ch], ebp
0x87AF36: jnz     short loc_87AF3F
0x87AF38: mov     ecx, edi
0x87AF3A: call    sub_772560
0x87AF3F: mov     edi, [ebx]
0x87AF41: test    edi, edi
0x87AF43: mov     [esp+30h+a3], edi
0x87AF47: jz      short loc_87AF4D
0x87AF49: add     dword ptr [edi+5Ch], 1
0x87AF4D: mov     eax, [esp+30h+var_10]
0x87AF51: test    eax, eax
0x87AF53: mov     byte ptr [esp+30h+var_4], 1
0x87AF58: jz      short loc_87AF6C
0x87AF5A: add     [eax+5Ch], ebp
0x87AF5D: mov     ecx, eax
0x87AF5F: add     eax, 5Ch ; '\'
0x87AF62: cmp     dword ptr [eax], 0
0x87AF65: jnz     short loc_87AF6C
0x87AF67: call    sub_772560
0x87AF6C: push    0
0x87AF6E: push    3
0x87AF70: push    4
0x87AF72: push    edi
0x87AF73: call    sub_801110
0x87AF78: mov     edx, ds:0B43110h
0x87AF7E: add     esp, 10h
0x87AF81: push    edx; a2
0x87AF82: mov     ecx, edi; this
0x87AF84: call    sub_76C910
0x87AF89: push    edi; a3
0x87AF8A: push    4; a2
0x87AF8C: mov     ecx, esi; this
0x87AF8E: call    sub_760010
0x87AF93: lea     eax, [esp+30h+var_10]
0x87AF97: push    eax
0x87AF98: call    sub_772630
0x87AF9D: add     esp, 4
0x87AFA0: mov     ebx, eax
0x87AFA2: cmp     edi, [ebx]
0x87AFA4: mov     byte ptr [esp+30h+var_4], 7
0x87AFA9: jz      short loc_87AFC9
0x87AFAB: test    edi, edi
0x87AFAD: jz      short loc_87AFBB
0x87AFAF: add     [edi+5Ch], ebp
0x87AFB2: jnz     short loc_87AFBB
0x87AFB4: mov     ecx, edi
0x87AFB6: call    sub_772560
0x87AFBB: mov     edi, [ebx]
0x87AFBD: test    edi, edi
0x87AFBF: mov     [esp+30h+a3], edi
0x87AFC3: jz      short loc_87AFC9
0x87AFC5: add     dword ptr [edi+5Ch], 1
0x87AFC9: mov     eax, [esp+30h+var_10]
0x87AFCD: test    eax, eax
0x87AFCF: mov     byte ptr [esp+30h+var_4], 1
0x87AFD4: jz      short loc_87AFE8
0x87AFD6: add     [eax+5Ch], ebp
0x87AFD9: mov     ecx, eax
0x87AFDB: add     eax, 5Ch ; '\'
0x87AFDE: cmp     dword ptr [eax], 0
0x87AFE1: jnz     short loc_87AFE8
0x87AFE3: call    sub_772560
0x87AFE8: push    2
0x87AFEA: push    1
0x87AFEC: push    5
0x87AFEE: push    edi
0x87AFEF: call    sub_801110
0x87AFF4: add     esp, 10h
0x87AFF7: push    edi; a3
0x87AFF8: push    5; a2
0x87AFFA: mov     ecx, esi; this
0x87AFFC: call    sub_760010
0x87B001: lea     ecx, [esp+30h+var_10]
0x87B005: push    ecx
0x87B006: call    sub_772630
0x87B00B: add     esp, 4
0x87B00E: mov     ebx, eax
0x87B010: cmp     edi, [ebx]
0x87B012: mov     byte ptr [esp+30h+var_4], 8
0x87B017: jz      short loc_87B037
0x87B019: test    edi, edi
0x87B01B: jz      short loc_87B029
0x87B01D: add     [edi+5Ch], ebp
0x87B020: jnz     short loc_87B029
0x87B022: mov     ecx, edi
0x87B024: call    sub_772560
0x87B029: mov     edi, [ebx]
0x87B02B: test    edi, edi
0x87B02D: mov     [esp+30h+a3], edi
0x87B031: jz      short loc_87B037
0x87B033: add     dword ptr [edi+5Ch], 1
0x87B037: mov     eax, [esp+30h+var_10]
0x87B03B: test    eax, eax
0x87B03D: mov     byte ptr [esp+30h+var_4], 1
0x87B042: jz      short loc_87B056
0x87B044: add     [eax+5Ch], ebp
0x87B047: mov     ecx, eax
0x87B049: add     eax, 5Ch ; '\'
0x87B04C: cmp     dword ptr [eax], 0
0x87B04F: jnz     short loc_87B056
0x87B051: call    sub_772560
0x87B056: push    0
0x87B058: push    3
0x87B05A: push    6
0x87B05C: push    edi
0x87B05D: call    sub_801110
0x87B062: add     esp, 10h
0x87B065: push    edi; a3
0x87B066: push    6; a2
0x87B068: mov     ecx, esi; this
0x87B06A: call    sub_760010
0x87B06F: mov     edx, [esp+30h+var_14]
0x87B073: mov     ebx, [edx+0BCh]
0x87B079: mov     ebp, [esi+58h]
0x87B07C: cmp     ebp, ebx
0x87B07E: jz      short loc_87B0B2
0x87B080: test    ebp, ebp
0x87B082: jz      short loc_87B0A1
0x87B084: lea     eax, [ebp+4]
0x87B087: push    eax; lpAddend
0x87B088: call    dword ptr ds:0A2807Ch
0x87B08E: test    eax, eax
0x87B090: jnz     short loc_87B0A1
0x87B092: test    ebp, ebp
0x87B094: jz      short loc_87B0A1
0x87B096: mov     edx, [ebp+0]
0x87B099: mov     eax, [edx]
0x87B09B: push    1
0x87B09D: mov     ecx, ebp
0x87B09F: call    eax
0x87B0A1: test    ebx, ebx
0x87B0A3: mov     [esi+58h], ebx
0x87B0A6: jz      short loc_87B0B2
0x87B0A8: add     ebx, 4
0x87B0AB: push    ebx; lpAddend
0x87B0AC: call    dword ptr ds:0A28078h
0x87B0B2: mov     ecx, [esp+30h+var_14]
0x87B0B6: mov     ebx, [ecx+0FCh]
0x87B0BC: mov     ebp, [esi+44h]
0x87B0BF: cmp     ebp, ebx
0x87B0C1: jz      short loc_87B0F5
0x87B0C3: test    ebp, ebp
0x87B0C5: jz      short loc_87B0E4
0x87B0C7: lea     edx, [ebp+4]
0x87B0CA: push    edx; lpAddend
0x87B0CB: call    dword ptr ds:0A2807Ch
0x87B0D1: test    eax, eax
0x87B0D3: jnz     short loc_87B0E4
0x87B0D5: test    ebp, ebp
0x87B0D7: jz      short loc_87B0E4
0x87B0D9: mov     eax, [ebp+0]
0x87B0DC: mov     edx, [eax]
0x87B0DE: push    1
0x87B0E0: mov     ecx, ebp
0x87B0E2: call    edx
0x87B0E4: test    ebx, ebx
0x87B0E6: mov     [esi+44h], ebx
0x87B0E9: jz      short loc_87B0F5
0x87B0EB: add     ebx, 4
0x87B0EE: push    ebx; lpAddend
0x87B0EF: call    dword ptr ds:0A28078h
0x87B0F5: cmp     dword ptr [esi+30h], 0
0x87B0F9: jnz     short loc_87B103
0x87B0FB: call    sub_772DF0
0x87B100: mov     [esi+30h], eax
0x87B103: mov     ecx, [esi+30h]
0x87B106: push    0
0x87B108: push    0Fh
0x87B10A: push    0A8h ; '¨'
0x87B10F: call    sub_772CD0
0x87B114: cmp     dword ptr [esi+30h], 0
0x87B118: jnz     short loc_87B122
0x87B11A: call    sub_772DF0
0x87B11F: mov     [esi+30h], eax
0x87B122: mov     ecx, [esi+30h]
0x87B125: push    0
0x87B127: push    0
0x87B129: push    1Bh
0x87B12B: call    sub_772CD0
0x87B130: cmp     dword ptr [esi+30h], 0
0x87B134: jnz     short loc_87B13E
0x87B136: call    sub_772DF0
0x87B13B: mov     [esi+30h], eax
0x87B13E: mov     ecx, [esi+30h]
0x87B141: push    0
0x87B143: push    0
0x87B145: push    0Fh
0x87B147: call    sub_772CD0
0x87B14C: cmp     dword ptr [esi+30h], 0
0x87B150: jnz     short loc_87B15A
0x87B152: call    sub_772DF0
0x87B157: mov     [esi+30h], eax
0x87B15A: mov     ecx, [esi+30h]
0x87B15D: push    0
0x87B15F: push    1
0x87B161: push    7
0x87B163: call    sub_772CD0
0x87B168: cmp     dword ptr [esi+30h], 0
0x87B16C: jnz     short loc_87B176
0x87B16E: call    sub_772DF0
0x87B173: mov     [esi+30h], eax
0x87B176: mov     ecx, [esi+30h]
0x87B179: push    0
0x87B17B: push    4
0x87B17D: push    17h
0x87B17F: call    sub_772CD0
0x87B184: cmp     dword ptr [esi+30h], 0
0x87B188: jnz     short loc_87B192
0x87B18A: call    sub_772DF0
0x87B18F: mov     [esi+30h], eax
0x87B192: mov     ecx, [esi+30h]
0x87B195: push    0
0x87B197: push    1
0x87B199: push    0Eh
0x87B19B: call    sub_772CD0
0x87B1A0: cmp     dword ptr [esi+30h], 0
0x87B1A4: jnz     short loc_87B1AE
0x87B1A6: call    sub_772DF0
0x87B1AB: mov     [esi+30h], eax
0x87B1AE: mov     ecx, [esi+30h]
0x87B1B1: push    0
0x87B1B3: push    0
0x87B1B5: push    34h ; '4'
0x87B1B7: call    sub_772CD0
0x87B1BC: or      ebx, 0FFFFFFFFh
0x87B1BF: cmp     esi, ds:0B4771Ch
0x87B1C5: mov     dword ptr ds:0B43C58h, 21082h
0x87B1CF: mov     dword ptr ds:0B442E8h, 1Ch
0x87B1D9: jz      short loc_87B1F9
0x87B1DB: add     [esi+60h], ebx
0x87B1DE: jnz     short loc_87B1E7
0x87B1E0: mov     ecx, esi
0x87B1E2: call    sub_7604D0
0x87B1E7: mov     esi, ds:0B4771Ch
0x87B1ED: test    esi, esi
0x87B1EF: mov     [esp+30h+var_18], esi
0x87B1F3: jz      short loc_87B1F9
0x87B1F5: add     dword ptr [esi+60h], 1
0x87B1F9: cmp     dword ptr [esi+18h], 7
0x87B1FD: jnb     loc_87B521
0x87B203: lea     eax, [esp+30h+var_10]
0x87B207: push    eax
0x87B208: call    sub_772630
0x87B20D: add     esp, 4
0x87B210: mov     ebp, eax
0x87B212: cmp     edi, [ebp+0]
0x87B215: mov     byte ptr [esp+30h+var_4], 9
0x87B21A: jz      short loc_87B23B
0x87B21C: test    edi, edi
0x87B21E: jz      short loc_87B22C
0x87B220: add     [edi+5Ch], ebx
0x87B223: jnz     short loc_87B22C
0x87B225: mov     ecx, edi
0x87B227: call    sub_772560
0x87B22C: mov     edi, [ebp+0]
0x87B22F: test    edi, edi
0x87B231: mov     [esp+30h+a3], edi
0x87B235: jz      short loc_87B23B
0x87B237: add     dword ptr [edi+5Ch], 1
0x87B23B: mov     eax, [esp+30h+var_10]
0x87B23F: test    eax, eax
0x87B241: mov     byte ptr [esp+30h+var_4], 1
0x87B246: jz      short loc_87B25A
0x87B248: add     [eax+5Ch], ebx
0x87B24B: mov     ecx, eax
0x87B24D: add     eax, 5Ch ; '\'
0x87B250: cmp     dword ptr [eax], 0
0x87B253: jnz     short loc_87B25A
0x87B255: call    sub_772560
0x87B25A: push    2
0x87B25C: push    1
0x87B25E: push    0
0x87B260: push    edi
0x87B261: call    sub_801110
0x87B266: add     esp, 10h
0x87B269: push    edi; a3
0x87B26A: push    0; a2
0x87B26C: mov     ecx, esi; this
0x87B26E: call    sub_760010
0x87B273: lea     ecx, [esp+30h+var_10]
0x87B277: push    ecx
0x87B278: call    sub_772630
0x87B27D: add     esp, 4
0x87B280: mov     ebp, eax
0x87B282: cmp     edi, [ebp+0]
0x87B285: mov     byte ptr [esp+30h+var_4], 0Ah
0x87B28A: jz      short loc_87B2AB
0x87B28C: test    edi, edi
0x87B28E: jz      short loc_87B29C
0x87B290: add     [edi+5Ch], ebx
0x87B293: jnz     short loc_87B29C
0x87B295: mov     ecx, edi
0x87B297: call    sub_772560
0x87B29C: mov     edi, [ebp+0]
0x87B29F: test    edi, edi
0x87B2A1: mov     [esp+30h+a3], edi
0x87B2A5: jz      short loc_87B2AB
0x87B2A7: add     dword ptr [edi+5Ch], 1
0x87B2AB: mov     eax, [esp+30h+var_10]
0x87B2AF: test    eax, eax
0x87B2B1: mov     byte ptr [esp+30h+var_4], 1
0x87B2B6: jz      short loc_87B2CA
0x87B2B8: add     [eax+5Ch], ebx
0x87B2BB: mov     ecx, eax
0x87B2BD: add     eax, 5Ch ; '\'
0x87B2C0: cmp     dword ptr [eax], 0
0x87B2C3: jnz     short loc_87B2CA
0x87B2C5: call    sub_772560
0x87B2CA: push    2
0x87B2CC: push    1
0x87B2CE: push    1
0x87B2D0: push    edi
0x87B2D1: call    sub_801110
0x87B2D6: add     esp, 10h
0x87B2D9: push    edi; a3
0x87B2DA: push    1; a2
0x87B2DC: mov     ecx, esi; this
0x87B2DE: call    sub_760010
0x87B2E3: lea     edx, [esp+30h+var_10]
0x87B2E7: push    edx
0x87B2E8: call    sub_772630
0x87B2ED: add     esp, 4
0x87B2F0: mov     ebp, eax
0x87B2F2: cmp     edi, [ebp+0]
0x87B2F5: mov     byte ptr [esp+30h+var_4], 0Bh
0x87B2FA: jz      short loc_87B31B
0x87B2FC: test    edi, edi
0x87B2FE: jz      short loc_87B30C
0x87B300: add     [edi+5Ch], ebx
0x87B303: jnz     short loc_87B30C
0x87B305: mov     ecx, edi
0x87B307: call    sub_772560
0x87B30C: mov     edi, [ebp+0]
0x87B30F: test    edi, edi
0x87B311: mov     [esp+30h+a3], edi
0x87B315: jz      short loc_87B31B
0x87B317: add     dword ptr [edi+5Ch], 1
0x87B31B: mov     eax, [esp+30h+var_10]
0x87B31F: test    eax, eax
0x87B321: mov     byte ptr [esp+30h+var_4], 1
0x87B326: jz      short loc_87B33A
0x87B328: add     [eax+5Ch], ebx
0x87B32B: mov     ecx, eax
0x87B32D: add     eax, 5Ch ; '\'
0x87B330: cmp     dword ptr [eax], 0
0x87B333: jnz     short loc_87B33A
0x87B335: call    sub_772560
0x87B33A: push    2
0x87B33C: push    1
0x87B33E: push    2
0x87B340: push    edi
0x87B341: call    sub_801110
0x87B346: add     esp, 10h
0x87B349: push    edi; a3
0x87B34A: push    2; a2
0x87B34C: mov     ecx, esi; this
0x87B34E: call    sub_760010
0x87B353: lea     eax, [esp+30h+var_10]
0x87B357: push    eax
0x87B358: call    sub_772630
0x87B35D: add     esp, 4
0x87B360: mov     ebp, eax
0x87B362: cmp     edi, [ebp+0]
0x87B365: mov     byte ptr [esp+30h+var_4], 0Ch
0x87B36A: jz      short loc_87B38B
0x87B36C: test    edi, edi
0x87B36E: jz      short loc_87B37C
0x87B370: add     [edi+5Ch], ebx
0x87B373: jnz     short loc_87B37C
0x87B375: mov     ecx, edi
0x87B377: call    sub_772560
0x87B37C: mov     edi, [ebp+0]
0x87B37F: test    edi, edi
0x87B381: mov     [esp+30h+a3], edi
0x87B385: jz      short loc_87B38B
0x87B387: add     dword ptr [edi+5Ch], 1
0x87B38B: mov     eax, [esp+30h+var_10]
0x87B38F: test    eax, eax
0x87B391: mov     byte ptr [esp+30h+var_4], 1
0x87B396: jz      short loc_87B3AA
0x87B398: add     [eax+5Ch], ebx
0x87B39B: mov     ecx, eax
0x87B39D: add     eax, 5Ch ; '\'
0x87B3A0: cmp     dword ptr [eax], 0
0x87B3A3: jnz     short loc_87B3AA
0x87B3A5: call    sub_772560
0x87B3AA: push    2
0x87B3AC: push    1
0x87B3AE: push    3
0x87B3B0: push    edi
0x87B3B1: call    sub_801110
0x87B3B6: add     esp, 10h
0x87B3B9: push    edi; a3
0x87B3BA: push    3; a2
0x87B3BC: mov     ecx, esi; this
0x87B3BE: call    sub_760010
0x87B3C3: lea     ecx, [esp+30h+var_10]
0x87B3C7: push    ecx
0x87B3C8: call    sub_772630
0x87B3CD: add     esp, 4
0x87B3D0: mov     ebp, eax
0x87B3D2: cmp     edi, [ebp+0]
0x87B3D5: mov     byte ptr [esp+30h+var_4], 0Dh
0x87B3DA: jz      short loc_87B3FB
0x87B3DC: test    edi, edi
0x87B3DE: jz      short loc_87B3EC
0x87B3E0: add     [edi+5Ch], ebx
0x87B3E3: jnz     short loc_87B3EC
0x87B3E5: mov     ecx, edi
0x87B3E7: call    sub_772560
0x87B3EC: mov     edi, [ebp+0]
0x87B3EF: test    edi, edi
0x87B3F1: mov     [esp+30h+a3], edi
0x87B3F5: jz      short loc_87B3FB
0x87B3F7: add     dword ptr [edi+5Ch], 1
0x87B3FB: mov     eax, [esp+30h+var_10]
0x87B3FF: test    eax, eax
0x87B401: mov     byte ptr [esp+30h+var_4], 1
0x87B406: jz      short loc_87B41A
0x87B408: add     [eax+5Ch], ebx
0x87B40B: mov     ecx, eax
0x87B40D: add     eax, 5Ch ; '\'
0x87B410: cmp     dword ptr [eax], 0
0x87B413: jnz     short loc_87B41A
0x87B415: call    sub_772560
0x87B41A: push    0
0x87B41C: push    3
0x87B41E: push    4
0x87B420: push    edi
0x87B421: call    sub_801110
0x87B426: mov     edx, ds:0B43110h
0x87B42C: add     esp, 10h
0x87B42F: push    edx; a2
0x87B430: mov     ecx, edi; this
0x87B432: call    sub_76C910
0x87B437: push    edi; a3
0x87B438: push    4; a2
0x87B43A: mov     ecx, esi; this
0x87B43C: call    sub_760010
0x87B441: lea     eax, [esp+30h+var_10]
0x87B445: push    eax
0x87B446: call    sub_772630
0x87B44B: add     esp, 4
0x87B44E: mov     ebp, eax
0x87B450: cmp     edi, [ebp+0]
0x87B453: mov     byte ptr [esp+30h+var_4], 0Eh
0x87B458: jz      short loc_87B479
0x87B45A: test    edi, edi
0x87B45C: jz      short loc_87B46A
0x87B45E: add     [edi+5Ch], ebx
0x87B461: jnz     short loc_87B46A
0x87B463: mov     ecx, edi
0x87B465: call    sub_772560
0x87B46A: mov     edi, [ebp+0]
0x87B46D: test    edi, edi
0x87B46F: mov     [esp+30h+a3], edi
0x87B473: jz      short loc_87B479
0x87B475: add     dword ptr [edi+5Ch], 1
0x87B479: mov     eax, [esp+30h+var_10]
0x87B47D: test    eax, eax
0x87B47F: mov     byte ptr [esp+30h+var_4], 1
0x87B484: jz      short loc_87B498
0x87B486: add     [eax+5Ch], ebx
0x87B489: mov     ecx, eax
0x87B48B: add     eax, 5Ch ; '\'
0x87B48E: cmp     dword ptr [eax], 0
0x87B491: jnz     short loc_87B498
0x87B493: call    sub_772560
0x87B498: push    2
0x87B49A: push    1
0x87B49C: push    5
0x87B49E: push    edi
0x87B49F: call    sub_801110
0x87B4A4: add     esp, 10h
0x87B4A7: push    edi; a3
0x87B4A8: push    5; a2
0x87B4AA: mov     ecx, esi; this
0x87B4AC: call    sub_760010
0x87B4B1: lea     ecx, [esp+30h+var_10]
0x87B4B5: push    ecx
0x87B4B6: call    sub_772630
0x87B4BB: add     esp, 4
0x87B4BE: mov     ebp, eax
0x87B4C0: cmp     edi, [ebp+0]
0x87B4C3: mov     byte ptr [esp+30h+var_4], 0Fh
0x87B4C8: jz      short loc_87B4E9
0x87B4CA: test    edi, edi
0x87B4CC: jz      short loc_87B4DA
0x87B4CE: add     [edi+5Ch], ebx
0x87B4D1: jnz     short loc_87B4DA
0x87B4D3: mov     ecx, edi
0x87B4D5: call    sub_772560
0x87B4DA: mov     edi, [ebp+0]
0x87B4DD: test    edi, edi
0x87B4DF: mov     [esp+30h+a3], edi
0x87B4E3: jz      short loc_87B4E9
0x87B4E5: add     dword ptr [edi+5Ch], 1
0x87B4E9: mov     eax, [esp+30h+var_10]
0x87B4ED: test    eax, eax
0x87B4EF: mov     byte ptr [esp+30h+var_4], 1
0x87B4F4: jz      short loc_87B508
0x87B4F6: add     [eax+5Ch], ebx
0x87B4F9: mov     ecx, eax
0x87B4FB: add     eax, 5Ch ; '\'
0x87B4FE: cmp     dword ptr [eax], 0
0x87B501: jnz     short loc_87B508
0x87B503: call    sub_772560
0x87B508: push    0
0x87B50A: push    3
0x87B50C: push    6
0x87B50E: push    edi
0x87B50F: call    sub_801110
0x87B514: add     esp, 10h
0x87B517: push    edi; a3
0x87B518: push    6; a2
0x87B51A: mov     ecx, esi; this
0x87B51C: call    sub_760010
0x87B521: mov     edx, [esp+30h+var_14]
0x87B525: mov     ebx, [edx+0C0h]
0x87B52B: mov     ebp, [esi+58h]
0x87B52E: cmp     ebp, ebx
0x87B530: jz      short loc_87B564
0x87B532: test    ebp, ebp
0x87B534: jz      short loc_87B553
0x87B536: lea     eax, [ebp+4]
0x87B539: push    eax; lpAddend
0x87B53A: call    dword ptr ds:0A2807Ch
0x87B540: test    eax, eax
0x87B542: jnz     short loc_87B553
0x87B544: test    ebp, ebp
0x87B546: jz      short loc_87B553
0x87B548: mov     edx, [ebp+0]
0x87B54B: mov     eax, [edx]
0x87B54D: push    1
0x87B54F: mov     ecx, ebp
0x87B551: call    eax
0x87B553: test    ebx, ebx
0x87B555: mov     [esi+58h], ebx
0x87B558: jz      short loc_87B564
0x87B55A: add     ebx, 4
0x87B55D: push    ebx; lpAddend
0x87B55E: call    dword ptr ds:0A28078h
0x87B564: mov     ecx, [esp+30h+var_14]
0x87B568: mov     ebx, [ecx+0FCh]
0x87B56E: mov     ebp, [esi+44h]
0x87B571: cmp     ebp, ebx
0x87B573: jz      short loc_87B5A7
0x87B575: test    ebp, ebp
0x87B577: jz      short loc_87B596
0x87B579: lea     edx, [ebp+4]
0x87B57C: push    edx; lpAddend
0x87B57D: call    dword ptr ds:0A2807Ch
0x87B583: test    eax, eax
0x87B585: jnz     short loc_87B596
0x87B587: test    ebp, ebp
0x87B589: jz      short loc_87B596
0x87B58B: mov     eax, [ebp+0]
0x87B58E: mov     edx, [eax]
0x87B590: push    1
0x87B592: mov     ecx, ebp
0x87B594: call    edx
0x87B596: test    ebx, ebx
0x87B598: mov     [esi+44h], ebx
0x87B59B: jz      short loc_87B5A7
0x87B59D: add     ebx, 4
0x87B5A0: push    ebx; lpAddend
0x87B5A1: call    dword ptr ds:0A28078h
0x87B5A7: cmp     dword ptr [esi+30h], 0
0x87B5AB: jnz     short loc_87B5B5
0x87B5AD: call    sub_772DF0
0x87B5B2: mov     [esi+30h], eax
0x87B5B5: mov     ecx, [esi+30h]
0x87B5B8: push    0
0x87B5BA: push    0Fh
0x87B5BC: push    0A8h ; '¨'
0x87B5C1: call    sub_772CD0
0x87B5C6: cmp     dword ptr [esi+30h], 0
0x87B5CA: jnz     short loc_87B5D4
0x87B5CC: call    sub_772DF0
0x87B5D1: mov     [esi+30h], eax
0x87B5D4: mov     ecx, [esi+30h]
0x87B5D7: push    0
0x87B5D9: push    0
0x87B5DB: push    1Bh
0x87B5DD: call    sub_772CD0
0x87B5E2: cmp     dword ptr [esi+30h], 0
0x87B5E6: jnz     short loc_87B5F0
0x87B5E8: call    sub_772DF0
0x87B5ED: mov     [esi+30h], eax
0x87B5F0: mov     ecx, [esi+30h]
0x87B5F3: push    0
0x87B5F5: push    0
0x87B5F7: push    0Fh
0x87B5F9: call    sub_772CD0
0x87B5FE: cmp     dword ptr [esi+30h], 0
0x87B602: jnz     short loc_87B60C
0x87B604: call    sub_772DF0
0x87B609: mov     [esi+30h], eax
0x87B60C: mov     ecx, [esi+30h]
0x87B60F: push    0
0x87B611: push    1
0x87B613: push    7
0x87B615: call    sub_772CD0
0x87B61A: cmp     dword ptr [esi+30h], 0
0x87B61E: jnz     short loc_87B628
0x87B620: call    sub_772DF0
0x87B625: mov     [esi+30h], eax
0x87B628: mov     ecx, [esi+30h]
0x87B62B: push    0
0x87B62D: push    4
0x87B62F: push    17h
0x87B631: call    sub_772CD0
0x87B636: cmp     dword ptr [esi+30h], 0
0x87B63A: jnz     short loc_87B644
0x87B63C: call    sub_772DF0
0x87B641: mov     [esi+30h], eax
0x87B644: mov     ecx, [esi+30h]
0x87B647: push    0
0x87B649: push    1
0x87B64B: push    0Eh
0x87B64D: call    sub_772CD0
0x87B652: cmp     dword ptr [esi+30h], 0
0x87B656: jnz     short loc_87B660
0x87B658: call    sub_772DF0
0x87B65D: mov     [esi+30h], eax
0x87B660: mov     ecx, [esi+30h]
0x87B663: push    0
0x87B665: push    0
0x87B667: push    34h ; '4'
0x87B669: call    sub_772CD0
0x87B66E: or      ebx, 0FFFFFFFFh
0x87B671: cmp     esi, ds:0B47720h
0x87B677: mov     dword ptr ds:0B43C6Ch, 61088h
0x87B681: mov     dword ptr ds:0B442FCh, 1Ch
0x87B68B: jz      short loc_87B6AB
0x87B68D: add     [esi+60h], ebx
0x87B690: jnz     short loc_87B699
0x87B692: mov     ecx, esi
0x87B694: call    sub_7604D0
0x87B699: mov     esi, ds:0B47720h
0x87B69F: test    esi, esi
0x87B6A1: mov     [esp+30h+var_18], esi
0x87B6A5: jz      short loc_87B6AB
0x87B6A7: add     dword ptr [esi+60h], 1
0x87B6AB: mov     eax, [esi+18h]
0x87B6AE: cmp     eax, 7
0x87B6B1: jnb     loc_87B9D5
0x87B6B7: lea     eax, [esp+30h+var_10]
0x87B6BB: push    eax
0x87B6BC: call    sub_772630
0x87B6C1: add     esp, 4
0x87B6C4: mov     ebp, eax
0x87B6C6: cmp     edi, [ebp+0]
0x87B6C9: mov     byte ptr [esp+30h+var_4], 10h
0x87B6CE: jz      short loc_87B6EF
0x87B6D0: test    edi, edi
0x87B6D2: jz      short loc_87B6E0
0x87B6D4: add     [edi+5Ch], ebx
0x87B6D7: jnz     short loc_87B6E0
0x87B6D9: mov     ecx, edi
0x87B6DB: call    sub_772560
0x87B6E0: mov     edi, [ebp+0]
0x87B6E3: test    edi, edi
0x87B6E5: mov     [esp+30h+a3], edi
0x87B6E9: jz      short loc_87B6EF
0x87B6EB: add     dword ptr [edi+5Ch], 1
0x87B6EF: mov     eax, [esp+30h+var_10]
0x87B6F3: test    eax, eax
0x87B6F5: mov     byte ptr [esp+30h+var_4], 1
0x87B6FA: jz      short loc_87B70E
0x87B6FC: add     [eax+5Ch], ebx
0x87B6FF: mov     ecx, eax
0x87B701: add     eax, 5Ch ; '\'
0x87B704: cmp     dword ptr [eax], 0
0x87B707: jnz     short loc_87B70E
0x87B709: call    sub_772560
0x87B70E: push    2
0x87B710: push    1
0x87B712: push    0
0x87B714: push    edi
0x87B715: call    sub_801110
0x87B71A: add     esp, 10h
0x87B71D: push    edi; a3
0x87B71E: push    0; a2
0x87B720: mov     ecx, esi; this
0x87B722: call    sub_760010
0x87B727: lea     ecx, [esp+30h+var_10]
0x87B72B: push    ecx
0x87B72C: call    sub_772630
0x87B731: add     esp, 4
0x87B734: mov     ebp, eax
0x87B736: cmp     edi, [ebp+0]
0x87B739: mov     byte ptr [esp+30h+var_4], 11h
0x87B73E: jz      short loc_87B75F
0x87B740: test    edi, edi
0x87B742: jz      short loc_87B750
0x87B744: add     [edi+5Ch], ebx
0x87B747: jnz     short loc_87B750
0x87B749: mov     ecx, edi
0x87B74B: call    sub_772560
0x87B750: mov     edi, [ebp+0]
0x87B753: test    edi, edi
0x87B755: mov     [esp+30h+a3], edi
0x87B759: jz      short loc_87B75F
0x87B75B: add     dword ptr [edi+5Ch], 1
0x87B75F: mov     eax, [esp+30h+var_10]
0x87B763: test    eax, eax
0x87B765: mov     byte ptr [esp+30h+var_4], 1
0x87B76A: jz      short loc_87B77E
0x87B76C: add     [eax+5Ch], ebx
0x87B76F: mov     ecx, eax
0x87B771: add     eax, 5Ch ; '\'
0x87B774: cmp     dword ptr [eax], 0
0x87B777: jnz     short loc_87B77E
0x87B779: call    sub_772560
0x87B77E: push    2
0x87B780: push    1
0x87B782: push    1
0x87B784: push    edi
0x87B785: call    sub_801110
0x87B78A: add     esp, 10h
0x87B78D: push    edi; a3
0x87B78E: push    1; a2
0x87B790: mov     ecx, esi; this
0x87B792: call    sub_760010
0x87B797: lea     edx, [esp+30h+var_10]
0x87B79B: push    edx
0x87B79C: call    sub_772630
0x87B7A1: add     esp, 4
0x87B7A4: mov     ebp, eax
0x87B7A6: cmp     edi, [ebp+0]
0x87B7A9: mov     byte ptr [esp+30h+var_4], 12h
0x87B7AE: jz      short loc_87B7CF
0x87B7B0: test    edi, edi
0x87B7B2: jz      short loc_87B7C0
0x87B7B4: add     [edi+5Ch], ebx
0x87B7B7: jnz     short loc_87B7C0
0x87B7B9: mov     ecx, edi
0x87B7BB: call    sub_772560
0x87B7C0: mov     edi, [ebp+0]
0x87B7C3: test    edi, edi
0x87B7C5: mov     [esp+30h+a3], edi
0x87B7C9: jz      short loc_87B7CF
0x87B7CB: add     dword ptr [edi+5Ch], 1
0x87B7CF: mov     eax, [esp+30h+var_10]
0x87B7D3: test    eax, eax
0x87B7D5: mov     byte ptr [esp+30h+var_4], 1
0x87B7DA: jz      short loc_87B7EE
0x87B7DC: add     [eax+5Ch], ebx
0x87B7DF: mov     ecx, eax
0x87B7E1: add     eax, 5Ch ; '\'
0x87B7E4: cmp     dword ptr [eax], 0
0x87B7E7: jnz     short loc_87B7EE
0x87B7E9: call    sub_772560
0x87B7EE: push    2
0x87B7F0: push    1
0x87B7F2: push    2
0x87B7F4: push    edi
0x87B7F5: call    sub_801110
0x87B7FA: add     esp, 10h
0x87B7FD: push    edi; a3
0x87B7FE: push    2; a2
0x87B800: mov     ecx, esi; this
0x87B802: call    sub_760010
0x87B807: lea     eax, [esp+30h+var_10]
0x87B80B: push    eax
0x87B80C: call    sub_772630
0x87B811: add     esp, 4
0x87B814: mov     ebp, eax
0x87B816: cmp     edi, [ebp+0]
0x87B819: mov     byte ptr [esp+30h+var_4], 13h
0x87B81E: jz      short loc_87B83F
0x87B820: test    edi, edi
0x87B822: jz      short loc_87B830
0x87B824: add     [edi+5Ch], ebx
0x87B827: jnz     short loc_87B830
0x87B829: mov     ecx, edi
0x87B82B: call    sub_772560
0x87B830: mov     edi, [ebp+0]
0x87B833: test    edi, edi
0x87B835: mov     [esp+30h+a3], edi
0x87B839: jz      short loc_87B83F
0x87B83B: add     dword ptr [edi+5Ch], 1
0x87B83F: mov     eax, [esp+30h+var_10]
0x87B843: test    eax, eax
0x87B845: mov     byte ptr [esp+30h+var_4], 1
0x87B84A: jz      short loc_87B85E
0x87B84C: add     [eax+5Ch], ebx
0x87B84F: mov     ecx, eax
0x87B851: add     eax, 5Ch ; '\'
0x87B854: cmp     dword ptr [eax], 0
0x87B857: jnz     short loc_87B85E
0x87B859: call    sub_772560
0x87B85E: push    2
0x87B860: push    1
0x87B862: push    3
0x87B864: push    edi
0x87B865: call    sub_801110
0x87B86A: add     esp, 10h
0x87B86D: push    edi; a3
0x87B86E: push    3; a2
0x87B870: mov     ecx, esi; this
0x87B872: call    sub_760010
0x87B877: lea     ecx, [esp+30h+var_10]
0x87B87B: push    ecx
0x87B87C: call    sub_772630
0x87B881: add     esp, 4
0x87B884: mov     ebp, eax
0x87B886: cmp     edi, [ebp+0]
0x87B889: mov     byte ptr [esp+30h+var_4], 14h
0x87B88E: jz      short loc_87B8AF
0x87B890: test    edi, edi
0x87B892: jz      short loc_87B8A0
0x87B894: add     [edi+5Ch], ebx
0x87B897: jnz     short loc_87B8A0
0x87B899: mov     ecx, edi
0x87B89B: call    sub_772560
0x87B8A0: mov     edi, [ebp+0]
0x87B8A3: test    edi, edi
0x87B8A5: mov     [esp+30h+a3], edi
0x87B8A9: jz      short loc_87B8AF
0x87B8AB: add     dword ptr [edi+5Ch], 1
0x87B8AF: mov     eax, [esp+30h+var_10]
0x87B8B3: test    eax, eax
0x87B8B5: mov     byte ptr [esp+30h+var_4], 1
0x87B8BA: jz      short loc_87B8CE
0x87B8BC: add     [eax+5Ch], ebx
0x87B8BF: mov     ecx, eax
0x87B8C1: add     eax, 5Ch ; '\'
0x87B8C4: cmp     dword ptr [eax], 0
0x87B8C7: jnz     short loc_87B8CE
0x87B8C9: call    sub_772560
0x87B8CE: push    0
0x87B8D0: push    3
0x87B8D2: push    4
0x87B8D4: push    edi
0x87B8D5: call    sub_801110
0x87B8DA: mov     edx, ds:0B43110h
0x87B8E0: add     esp, 10h
0x87B8E3: push    edx; a2
0x87B8E4: mov     ecx, edi; this
0x87B8E6: call    sub_76C910
0x87B8EB: push    edi; a3
0x87B8EC: push    4; a2
0x87B8EE: mov     ecx, esi; this
0x87B8F0: call    sub_760010
0x87B8F5: lea     eax, [esp+30h+var_10]
0x87B8F9: push    eax
0x87B8FA: call    sub_772630
0x87B8FF: add     esp, 4
0x87B902: mov     ebp, eax
0x87B904: cmp     edi, [ebp+0]
0x87B907: mov     byte ptr [esp+30h+var_4], 15h
0x87B90C: jz      short loc_87B92D
0x87B90E: test    edi, edi
0x87B910: jz      short loc_87B91E
0x87B912: add     [edi+5Ch], ebx
0x87B915: jnz     short loc_87B91E
0x87B917: mov     ecx, edi
0x87B919: call    sub_772560
0x87B91E: mov     edi, [ebp+0]
0x87B921: test    edi, edi
0x87B923: mov     [esp+30h+a3], edi
0x87B927: jz      short loc_87B92D
0x87B929: add     dword ptr [edi+5Ch], 1
0x87B92D: mov     eax, [esp+30h+var_10]
0x87B931: test    eax, eax
0x87B933: mov     byte ptr [esp+30h+var_4], 1
0x87B938: jz      short loc_87B94C
0x87B93A: add     [eax+5Ch], ebx
0x87B93D: mov     ecx, eax
0x87B93F: add     eax, 5Ch ; '\'
0x87B942: cmp     dword ptr [eax], 0
0x87B945: jnz     short loc_87B94C
0x87B947: call    sub_772560
0x87B94C: push    2
0x87B94E: push    1
0x87B950: push    5
0x87B952: push    edi
0x87B953: call    sub_801110
0x87B958: add     esp, 10h
0x87B95B: push    edi; a3
0x87B95C: push    5; a2
0x87B95E: mov     ecx, esi; this
0x87B960: call    sub_760010
0x87B965: lea     ecx, [esp+30h+var_10]
0x87B969: push    ecx
0x87B96A: call    sub_772630
0x87B96F: add     esp, 4
0x87B972: mov     ebp, eax
0x87B974: cmp     edi, [ebp+0]
0x87B977: mov     byte ptr [esp+30h+var_4], 16h
0x87B97C: jz      short loc_87B99D
0x87B97E: test    edi, edi
0x87B980: jz      short loc_87B98E
0x87B982: add     [edi+5Ch], ebx
0x87B985: jnz     short loc_87B98E
0x87B987: mov     ecx, edi
0x87B989: call    sub_772560
0x87B98E: mov     edi, [ebp+0]
0x87B991: test    edi, edi
0x87B993: mov     [esp+30h+a3], edi
0x87B997: jz      short loc_87B99D
0x87B999: add     dword ptr [edi+5Ch], 1
0x87B99D: mov     eax, [esp+30h+var_10]
0x87B9A1: test    eax, eax
0x87B9A3: mov     byte ptr [esp+30h+var_4], 1
0x87B9A8: jz      short loc_87B9BC
0x87B9AA: add     [eax+5Ch], ebx
0x87B9AD: mov     ecx, eax
0x87B9AF: add     eax, 5Ch ; '\'
0x87B9B2: cmp     dword ptr [eax], 0
0x87B9B5: jnz     short loc_87B9BC
0x87B9B7: call    sub_772560
0x87B9BC: push    0
0x87B9BE: push    3
0x87B9C0: push    6
0x87B9C2: push    edi
0x87B9C3: call    sub_801110
0x87B9C8: add     esp, 10h
0x87B9CB: push    edi; a3
0x87B9CC: push    6; a2
0x87B9CE: mov     ecx, esi; this
0x87B9D0: call    sub_760010
0x87B9D5: mov     edx, [esp+30h+var_14]
0x87B9D9: mov     ebx, [edx+0C4h]
0x87B9DF: mov     ebp, [esi+58h]
0x87B9E2: cmp     ebp, ebx
0x87B9E4: jz      short loc_87BA18
0x87B9E6: test    ebp, ebp
0x87B9E8: jz      short loc_87BA07
0x87B9EA: lea     eax, [ebp+4]
0x87B9ED: push    eax; lpAddend
0x87B9EE: call    dword ptr ds:0A2807Ch
0x87B9F4: test    eax, eax
0x87B9F6: jnz     short loc_87BA07
0x87B9F8: test    ebp, ebp
0x87B9FA: jz      short loc_87BA07
0x87B9FC: mov     edx, [ebp+0]
0x87B9FF: mov     eax, [edx]
0x87BA01: push    1
0x87BA03: mov     ecx, ebp
0x87BA05: call    eax
0x87BA07: test    ebx, ebx
0x87BA09: mov     [esi+58h], ebx
0x87BA0C: jz      short loc_87BA18
0x87BA0E: add     ebx, 4
0x87BA11: push    ebx; lpAddend
0x87BA12: call    dword ptr ds:0A28078h
0x87BA18: mov     ecx, [esp+30h+var_14]
0x87BA1C: mov     ebx, [ecx+100h]
0x87BA22: mov     ebp, [esi+44h]
0x87BA25: cmp     ebp, ebx
0x87BA27: jz      short loc_87BA5B
0x87BA29: test    ebp, ebp
0x87BA2B: jz      short loc_87BA4A
0x87BA2D: lea     edx, [ebp+4]
0x87BA30: push    edx; lpAddend
0x87BA31: call    dword ptr ds:0A2807Ch
0x87BA37: test    eax, eax
0x87BA39: jnz     short loc_87BA4A
0x87BA3B: test    ebp, ebp
0x87BA3D: jz      short loc_87BA4A
0x87BA3F: mov     eax, [ebp+0]
0x87BA42: mov     edx, [eax]
0x87BA44: push    1
0x87BA46: mov     ecx, ebp
0x87BA48: call    edx
0x87BA4A: test    ebx, ebx
0x87BA4C: mov     [esi+44h], ebx
0x87BA4F: jz      short loc_87BA5B
0x87BA51: add     ebx, 4
0x87BA54: push    ebx; lpAddend
0x87BA55: call    dword ptr ds:0A28078h
0x87BA5B: cmp     dword ptr [esi+30h], 0
0x87BA5F: jnz     short loc_87BA69
0x87BA61: call    sub_772DF0
0x87BA66: mov     [esi+30h], eax
0x87BA69: mov     ecx, [esi+30h]
0x87BA6C: push    0
0x87BA6E: push    0Fh
0x87BA70: push    0A8h ; '¨'
0x87BA75: call    sub_772CD0
0x87BA7A: cmp     dword ptr [esi+30h], 0
0x87BA7E: jnz     short loc_87BA88
0x87BA80: call    sub_772DF0
0x87BA85: mov     [esi+30h], eax
0x87BA88: mov     ecx, [esi+30h]
0x87BA8B: push    0
0x87BA8D: push    0
0x87BA8F: push    1Bh
0x87BA91: call    sub_772CD0
0x87BA96: cmp     dword ptr [esi+30h], 0
0x87BA9A: jnz     short loc_87BAA4
0x87BA9C: call    sub_772DF0
0x87BAA1: mov     [esi+30h], eax
0x87BAA4: mov     ecx, [esi+30h]
0x87BAA7: push    0
0x87BAA9: push    0
0x87BAAB: push    0Fh
0x87BAAD: call    sub_772CD0
0x87BAB2: cmp     dword ptr [esi+30h], 0
0x87BAB6: jnz     short loc_87BAC0
0x87BAB8: call    sub_772DF0
0x87BABD: mov     [esi+30h], eax
0x87BAC0: mov     ecx, [esi+30h]
0x87BAC3: push    0
0x87BAC5: push    1
0x87BAC7: push    7
0x87BAC9: call    sub_772CD0
0x87BACE: cmp     dword ptr [esi+30h], 0
0x87BAD2: jnz     short loc_87BADC
0x87BAD4: call    sub_772DF0
0x87BAD9: mov     [esi+30h], eax
0x87BADC: mov     ecx, [esi+30h]
0x87BADF: push    0
0x87BAE1: push    4
0x87BAE3: push    17h
0x87BAE5: call    sub_772CD0
0x87BAEA: cmp     dword ptr [esi+30h], 0
0x87BAEE: jnz     short loc_87BAF8
0x87BAF0: call    sub_772DF0
0x87BAF5: mov     [esi+30h], eax
0x87BAF8: mov     ecx, [esi+30h]
0x87BAFB: push    0
0x87BAFD: push    1
0x87BAFF: push    0Eh
0x87BB01: call    sub_772CD0
0x87BB06: cmp     dword ptr [esi+30h], 0
0x87BB0A: jnz     short loc_87BB14
0x87BB0C: call    sub_772DF0
0x87BB11: mov     [esi+30h], eax
0x87BB14: mov     ecx, [esi+30h]
0x87BB17: push    0
0x87BB19: push    0
0x87BB1B: push    34h ; '4'
0x87BB1D: call    sub_772CD0
0x87BB22: or      ebx, 0FFFFFFFFh
0x87BB25: cmp     esi, ds:0B47724h
0x87BB2B: mov     dword ptr ds:0B43C84h, 210F2h
0x87BB35: mov     dword ptr ds:0B44314h, 1Ch
0x87BB3F: jz      short loc_87BB5F
0x87BB41: add     [esi+60h], ebx
0x87BB44: jnz     short loc_87BB4D
0x87BB46: mov     ecx, esi
0x87BB48: call    sub_7604D0
0x87BB4D: mov     esi, ds:0B47724h
0x87BB53: test    esi, esi
0x87BB55: mov     [esp+30h+var_18], esi
0x87BB59: jz      short loc_87BB5F
0x87BB5B: add     dword ptr [esi+60h], 1
0x87BB5F: cmp     dword ptr [esi+18h], 7
0x87BB63: jnb     loc_87BE87
0x87BB69: lea     eax, [esp+30h+var_10]
0x87BB6D: push    eax
0x87BB6E: call    sub_772630
0x87BB73: add     esp, 4
0x87BB76: mov     ebp, eax
0x87BB78: cmp     edi, [ebp+0]
0x87BB7B: mov     byte ptr [esp+30h+var_4], 17h
0x87BB80: jz      short loc_87BBA1
0x87BB82: test    edi, edi
0x87BB84: jz      short loc_87BB92
0x87BB86: add     [edi+5Ch], ebx
0x87BB89: jnz     short loc_87BB92
0x87BB8B: mov     ecx, edi
0x87BB8D: call    sub_772560
0x87BB92: mov     edi, [ebp+0]
0x87BB95: test    edi, edi
0x87BB97: mov     [esp+30h+a3], edi
0x87BB9B: jz      short loc_87BBA1
0x87BB9D: add     dword ptr [edi+5Ch], 1
0x87BBA1: mov     eax, [esp+30h+var_10]
0x87BBA5: test    eax, eax
0x87BBA7: mov     byte ptr [esp+30h+var_4], 1
0x87BBAC: jz      short loc_87BBC0
0x87BBAE: add     [eax+5Ch], ebx
0x87BBB1: mov     ecx, eax
0x87BBB3: add     eax, 5Ch ; '\'
0x87BBB6: cmp     dword ptr [eax], 0
0x87BBB9: jnz     short loc_87BBC0
0x87BBBB: call    sub_772560
0x87BBC0: push    2
0x87BBC2: push    1
0x87BBC4: push    0
0x87BBC6: push    edi
0x87BBC7: call    sub_801110
0x87BBCC: add     esp, 10h
0x87BBCF: push    edi; a3
0x87BBD0: push    0; a2
0x87BBD2: mov     ecx, esi; this
0x87BBD4: call    sub_760010
0x87BBD9: lea     ecx, [esp+30h+var_10]
0x87BBDD: push    ecx
0x87BBDE: call    sub_772630
0x87BBE3: add     esp, 4
0x87BBE6: mov     ebp, eax
0x87BBE8: cmp     edi, [ebp+0]
0x87BBEB: mov     byte ptr [esp+30h+var_4], 18h
0x87BBF0: jz      short loc_87BC11
0x87BBF2: test    edi, edi
0x87BBF4: jz      short loc_87BC02
0x87BBF6: add     [edi+5Ch], ebx
0x87BBF9: jnz     short loc_87BC02
0x87BBFB: mov     ecx, edi
0x87BBFD: call    sub_772560
0x87BC02: mov     edi, [ebp+0]
0x87BC05: test    edi, edi
0x87BC07: mov     [esp+30h+a3], edi
0x87BC0B: jz      short loc_87BC11
0x87BC0D: add     dword ptr [edi+5Ch], 1
0x87BC11: mov     eax, [esp+30h+var_10]
0x87BC15: test    eax, eax
0x87BC17: mov     byte ptr [esp+30h+var_4], 1
0x87BC1C: jz      short loc_87BC30
0x87BC1E: add     [eax+5Ch], ebx
0x87BC21: mov     ecx, eax
0x87BC23: add     eax, 5Ch ; '\'
0x87BC26: cmp     dword ptr [eax], 0
0x87BC29: jnz     short loc_87BC30
0x87BC2B: call    sub_772560
0x87BC30: push    2
0x87BC32: push    1
0x87BC34: push    1
0x87BC36: push    edi
0x87BC37: call    sub_801110
0x87BC3C: add     esp, 10h
0x87BC3F: push    edi; a3
0x87BC40: push    1; a2
0x87BC42: mov     ecx, esi; this
0x87BC44: call    sub_760010
0x87BC49: lea     edx, [esp+30h+var_10]
0x87BC4D: push    edx
0x87BC4E: call    sub_772630
0x87BC53: add     esp, 4
0x87BC56: mov     ebp, eax
0x87BC58: cmp     edi, [ebp+0]
0x87BC5B: mov     byte ptr [esp+30h+var_4], 19h
0x87BC60: jz      short loc_87BC81
0x87BC62: test    edi, edi
0x87BC64: jz      short loc_87BC72
0x87BC66: add     [edi+5Ch], ebx
0x87BC69: jnz     short loc_87BC72
0x87BC6B: mov     ecx, edi
0x87BC6D: call    sub_772560
0x87BC72: mov     edi, [ebp+0]
0x87BC75: test    edi, edi
0x87BC77: mov     [esp+30h+a3], edi
0x87BC7B: jz      short loc_87BC81
0x87BC7D: add     dword ptr [edi+5Ch], 1
0x87BC81: mov     eax, [esp+30h+var_10]
0x87BC85: test    eax, eax
0x87BC87: mov     byte ptr [esp+30h+var_4], 1
0x87BC8C: jz      short loc_87BCA0
0x87BC8E: add     [eax+5Ch], ebx
0x87BC91: mov     ecx, eax
0x87BC93: add     eax, 5Ch ; '\'
0x87BC96: cmp     dword ptr [eax], 0
0x87BC99: jnz     short loc_87BCA0
0x87BC9B: call    sub_772560
0x87BCA0: push    2
0x87BCA2: push    1
0x87BCA4: push    2
0x87BCA6: push    edi
0x87BCA7: call    sub_801110
0x87BCAC: add     esp, 10h
0x87BCAF: push    edi; a3
0x87BCB0: push    2; a2
0x87BCB2: mov     ecx, esi; this
0x87BCB4: call    sub_760010
0x87BCB9: lea     eax, [esp+30h+var_10]
0x87BCBD: push    eax
0x87BCBE: call    sub_772630
0x87BCC3: add     esp, 4
0x87BCC6: mov     ebp, eax
0x87BCC8: cmp     edi, [ebp+0]
0x87BCCB: mov     byte ptr [esp+30h+var_4], 1Ah
0x87BCD0: jz      short loc_87BCF1
0x87BCD2: test    edi, edi
0x87BCD4: jz      short loc_87BCE2
0x87BCD6: add     [edi+5Ch], ebx
0x87BCD9: jnz     short loc_87BCE2
0x87BCDB: mov     ecx, edi
0x87BCDD: call    sub_772560
0x87BCE2: mov     edi, [ebp+0]
0x87BCE5: test    edi, edi
0x87BCE7: mov     [esp+30h+a3], edi
0x87BCEB: jz      short loc_87BCF1
0x87BCED: add     dword ptr [edi+5Ch], 1
0x87BCF1: mov     eax, [esp+30h+var_10]
0x87BCF5: test    eax, eax
0x87BCF7: mov     byte ptr [esp+30h+var_4], 1
0x87BCFC: jz      short loc_87BD10
0x87BCFE: add     [eax+5Ch], ebx
0x87BD01: mov     ecx, eax
0x87BD03: add     eax, 5Ch ; '\'
0x87BD06: cmp     dword ptr [eax], 0
0x87BD09: jnz     short loc_87BD10
0x87BD0B: call    sub_772560
0x87BD10: push    2
0x87BD12: push    1
0x87BD14: push    3
0x87BD16: push    edi
0x87BD17: call    sub_801110
0x87BD1C: add     esp, 10h
0x87BD1F: push    edi; a3
0x87BD20: push    3; a2
0x87BD22: mov     ecx, esi; this
0x87BD24: call    sub_760010
0x87BD29: lea     ecx, [esp+30h+var_10]
0x87BD2D: push    ecx
0x87BD2E: call    sub_772630
0x87BD33: add     esp, 4
0x87BD36: mov     ebp, eax
0x87BD38: cmp     edi, [ebp+0]
0x87BD3B: mov     byte ptr [esp+30h+var_4], 1Bh
0x87BD40: jz      short loc_87BD61
0x87BD42: test    edi, edi
0x87BD44: jz      short loc_87BD52
0x87BD46: add     [edi+5Ch], ebx
0x87BD49: jnz     short loc_87BD52
0x87BD4B: mov     ecx, edi
0x87BD4D: call    sub_772560
0x87BD52: mov     edi, [ebp+0]
0x87BD55: test    edi, edi
0x87BD57: mov     [esp+30h+a3], edi
0x87BD5B: jz      short loc_87BD61
0x87BD5D: add     dword ptr [edi+5Ch], 1
0x87BD61: mov     eax, [esp+30h+var_10]
0x87BD65: test    eax, eax
0x87BD67: mov     byte ptr [esp+30h+var_4], 1
0x87BD6C: jz      short loc_87BD80
0x87BD6E: add     [eax+5Ch], ebx
0x87BD71: mov     ecx, eax
0x87BD73: add     eax, 5Ch ; '\'
0x87BD76: cmp     dword ptr [eax], 0
0x87BD79: jnz     short loc_87BD80
0x87BD7B: call    sub_772560
0x87BD80: push    0
0x87BD82: push    3
0x87BD84: push    4
0x87BD86: push    edi
0x87BD87: call    sub_801110
0x87BD8C: mov     edx, ds:0B43110h
0x87BD92: add     esp, 10h
0x87BD95: push    edx; a2
0x87BD96: mov     ecx, edi; this
0x87BD98: call    sub_76C910
0x87BD9D: push    edi; a3
0x87BD9E: push    4; a2
0x87BDA0: mov     ecx, esi; this
0x87BDA2: call    sub_760010
0x87BDA7: lea     eax, [esp+30h+var_10]
0x87BDAB: push    eax
0x87BDAC: call    sub_772630
0x87BDB1: add     esp, 4
0x87BDB4: mov     ebp, eax
0x87BDB6: cmp     edi, [ebp+0]
0x87BDB9: mov     byte ptr [esp+30h+var_4], 1Ch
0x87BDBE: jz      short loc_87BDDF
0x87BDC0: test    edi, edi
0x87BDC2: jz      short loc_87BDD0
0x87BDC4: add     [edi+5Ch], ebx
0x87BDC7: jnz     short loc_87BDD0
0x87BDC9: mov     ecx, edi
0x87BDCB: call    sub_772560
0x87BDD0: mov     edi, [ebp+0]
0x87BDD3: test    edi, edi
0x87BDD5: mov     [esp+30h+a3], edi
0x87BDD9: jz      short loc_87BDDF
0x87BDDB: add     dword ptr [edi+5Ch], 1
0x87BDDF: mov     eax, [esp+30h+var_10]
0x87BDE3: test    eax, eax
0x87BDE5: mov     byte ptr [esp+30h+var_4], 1
0x87BDEA: jz      short loc_87BDFE
0x87BDEC: add     [eax+5Ch], ebx
0x87BDEF: mov     ecx, eax
0x87BDF1: add     eax, 5Ch ; '\'
0x87BDF4: cmp     dword ptr [eax], 0
0x87BDF7: jnz     short loc_87BDFE
0x87BDF9: call    sub_772560
0x87BDFE: push    2
0x87BE00: push    1
0x87BE02: push    5
0x87BE04: push    edi
0x87BE05: call    sub_801110
0x87BE0A: add     esp, 10h
0x87BE0D: push    edi; a3
0x87BE0E: push    5; a2
0x87BE10: mov     ecx, esi; this
0x87BE12: call    sub_760010
0x87BE17: lea     ecx, [esp+30h+var_10]
0x87BE1B: push    ecx
0x87BE1C: call    sub_772630
0x87BE21: add     esp, 4
0x87BE24: mov     ebp, eax
0x87BE26: cmp     edi, [ebp+0]
0x87BE29: mov     byte ptr [esp+30h+var_4], 1Dh
0x87BE2E: jz      short loc_87BE4F
0x87BE30: test    edi, edi
0x87BE32: jz      short loc_87BE40
0x87BE34: add     [edi+5Ch], ebx
0x87BE37: jnz     short loc_87BE40
0x87BE39: mov     ecx, edi
0x87BE3B: call    sub_772560
0x87BE40: mov     edi, [ebp+0]
0x87BE43: test    edi, edi
0x87BE45: mov     [esp+30h+a3], edi
0x87BE49: jz      short loc_87BE4F
0x87BE4B: add     dword ptr [edi+5Ch], 1
0x87BE4F: mov     eax, [esp+30h+var_10]
0x87BE53: test    eax, eax
0x87BE55: mov     byte ptr [esp+30h+var_4], 1
0x87BE5A: jz      short loc_87BE6E
0x87BE5C: add     [eax+5Ch], ebx
0x87BE5F: mov     ecx, eax
0x87BE61: add     eax, 5Ch ; '\'
0x87BE64: cmp     dword ptr [eax], 0
0x87BE67: jnz     short loc_87BE6E
0x87BE69: call    sub_772560
0x87BE6E: push    0
0x87BE70: push    3
0x87BE72: push    6
0x87BE74: push    edi
0x87BE75: call    sub_801110
0x87BE7A: add     esp, 10h
0x87BE7D: push    edi; a3
0x87BE7E: push    6; a2
0x87BE80: mov     ecx, esi; this
0x87BE82: call    sub_760010
0x87BE87: mov     edx, [esp+30h+var_14]
0x87BE8B: mov     ebx, [edx+0C8h]
0x87BE91: mov     ebp, [esi+58h]
0x87BE94: cmp     ebp, ebx
0x87BE96: jz      short loc_87BECA
0x87BE98: test    ebp, ebp
0x87BE9A: jz      short loc_87BEB9
0x87BE9C: lea     eax, [ebp+4]
0x87BE9F: push    eax; lpAddend
0x87BEA0: call    dword ptr ds:0A2807Ch
0x87BEA6: test    eax, eax
0x87BEA8: jnz     short loc_87BEB9
0x87BEAA: test    ebp, ebp
0x87BEAC: jz      short loc_87BEB9
0x87BEAE: mov     edx, [ebp+0]
0x87BEB1: mov     eax, [edx]
0x87BEB3: push    1
0x87BEB5: mov     ecx, ebp
0x87BEB7: call    eax
0x87BEB9: test    ebx, ebx
0x87BEBB: mov     [esi+58h], ebx
0x87BEBE: jz      short loc_87BECA
0x87BEC0: add     ebx, 4
0x87BEC3: push    ebx; lpAddend
0x87BEC4: call    dword ptr ds:0A28078h
0x87BECA: mov     ecx, [esp+30h+var_14]
0x87BECE: mov     ebx, [ecx+100h]
0x87BED4: mov     ebp, [esi+44h]
0x87BED7: cmp     ebp, ebx
0x87BED9: jz      short loc_87BF0D
0x87BEDB: test    ebp, ebp
0x87BEDD: jz      short loc_87BEFC
0x87BEDF: lea     edx, [ebp+4]
0x87BEE2: push    edx; lpAddend
0x87BEE3: call    dword ptr ds:0A2807Ch
0x87BEE9: test    eax, eax
0x87BEEB: jnz     short loc_87BEFC
0x87BEED: test    ebp, ebp
0x87BEEF: jz      short loc_87BEFC
0x87BEF1: mov     eax, [ebp+0]
0x87BEF4: mov     edx, [eax]
0x87BEF6: push    1
0x87BEF8: mov     ecx, ebp
0x87BEFA: call    edx
0x87BEFC: test    ebx, ebx
0x87BEFE: mov     [esi+44h], ebx
0x87BF01: jz      short loc_87BF0D
0x87BF03: add     ebx, 4
0x87BF06: push    ebx; lpAddend
0x87BF07: call    dword ptr ds:0A28078h
0x87BF0D: cmp     dword ptr [esi+30h], 0
0x87BF11: jnz     short loc_87BF1B
0x87BF13: call    sub_772DF0
0x87BF18: mov     [esi+30h], eax
0x87BF1B: mov     ecx, [esi+30h]
0x87BF1E: push    0
0x87BF20: push    0Fh
0x87BF22: push    0A8h ; '¨'
0x87BF27: call    sub_772CD0
0x87BF2C: cmp     dword ptr [esi+30h], 0
0x87BF30: jnz     short loc_87BF3A
0x87BF32: call    sub_772DF0
0x87BF37: mov     [esi+30h], eax
0x87BF3A: mov     ecx, [esi+30h]
0x87BF3D: push    0
0x87BF3F: push    0
0x87BF41: push    1Bh
0x87BF43: call    sub_772CD0
0x87BF48: cmp     dword ptr [esi+30h], 0
0x87BF4C: jnz     short loc_87BF56
0x87BF4E: call    sub_772DF0
0x87BF53: mov     [esi+30h], eax
0x87BF56: mov     ecx, [esi+30h]
0x87BF59: push    0
0x87BF5B: push    0
0x87BF5D: push    0Fh
0x87BF5F: call    sub_772CD0
0x87BF64: cmp     dword ptr [esi+30h], 0
0x87BF68: jnz     short loc_87BF72
0x87BF6A: call    sub_772DF0
0x87BF6F: mov     [esi+30h], eax
0x87BF72: mov     ecx, [esi+30h]
0x87BF75: push    0
0x87BF77: push    1
0x87BF79: push    7
0x87BF7B: call    sub_772CD0
0x87BF80: cmp     dword ptr [esi+30h], 0
0x87BF84: jnz     short loc_87BF8E
0x87BF86: call    sub_772DF0
0x87BF8B: mov     [esi+30h], eax
0x87BF8E: mov     ecx, [esi+30h]
0x87BF91: push    0
0x87BF93: push    4
0x87BF95: push    17h
0x87BF97: call    sub_772CD0
0x87BF9C: cmp     dword ptr [esi+30h], 0
0x87BFA0: jnz     short loc_87BFAA
0x87BFA2: call    sub_772DF0
0x87BFA7: mov     [esi+30h], eax
0x87BFAA: mov     ecx, [esi+30h]
0x87BFAD: push    0
0x87BFAF: push    1
0x87BFB1: push    0Eh
0x87BFB3: call    sub_772CD0
0x87BFB8: cmp     dword ptr [esi+30h], 0
0x87BFBC: jnz     short loc_87BFC6
0x87BFBE: call    sub_772DF0
0x87BFC3: mov     [esi+30h], eax
0x87BFC6: mov     ecx, [esi+30h]
0x87BFC9: push    0
0x87BFCB: push    0
0x87BFCD: push    34h ; '4'
0x87BFCF: call    sub_772CD0
0x87BFD4: or      ebx, 0FFFFFFFFh
0x87BFD7: cmp     esi, ds:0B47728h
0x87BFDD: mov     dword ptr ds:0B43C98h, 610F8h
0x87BFE7: mov     dword ptr ds:0B44328h, 1Ch
0x87BFF1: jz      short loc_87C011
0x87BFF3: add     [esi+60h], ebx
0x87BFF6: jnz     short loc_87BFFF
0x87BFF8: mov     ecx, esi
0x87BFFA: call    sub_7604D0
0x87BFFF: mov     esi, ds:0B47728h
0x87C005: test    esi, esi
0x87C007: mov     [esp+30h+var_18], esi
0x87C00B: jz      short loc_87C011
0x87C00D: add     dword ptr [esi+60h], 1
0x87C011: cmp     dword ptr [esi+18h], 7
0x87C015: jnb     loc_87C339
0x87C01B: lea     eax, [esp+30h+var_10]
0x87C01F: push    eax
0x87C020: call    sub_772630
0x87C025: add     esp, 4
0x87C028: mov     ebp, eax
0x87C02A: cmp     edi, [ebp+0]
0x87C02D: mov     byte ptr [esp+30h+var_4], 1Eh
0x87C032: jz      short loc_87C053
0x87C034: test    edi, edi
0x87C036: jz      short loc_87C044
0x87C038: add     [edi+5Ch], ebx
0x87C03B: jnz     short loc_87C044
0x87C03D: mov     ecx, edi
0x87C03F: call    sub_772560
0x87C044: mov     edi, [ebp+0]
0x87C047: test    edi, edi
0x87C049: mov     [esp+30h+a3], edi
0x87C04D: jz      short loc_87C053
0x87C04F: add     dword ptr [edi+5Ch], 1
0x87C053: mov     eax, [esp+30h+var_10]
0x87C057: test    eax, eax
0x87C059: mov     byte ptr [esp+30h+var_4], 1
0x87C05E: jz      short loc_87C072
0x87C060: add     [eax+5Ch], ebx
0x87C063: mov     ecx, eax
0x87C065: add     eax, 5Ch ; '\'
0x87C068: cmp     dword ptr [eax], 0
0x87C06B: jnz     short loc_87C072
0x87C06D: call    sub_772560
0x87C072: push    2
0x87C074: push    1
0x87C076: push    0
0x87C078: push    edi
0x87C079: call    sub_801110
0x87C07E: add     esp, 10h
0x87C081: push    edi; a3
0x87C082: push    0; a2
0x87C084: mov     ecx, esi; this
0x87C086: call    sub_760010
0x87C08B: lea     ecx, [esp+30h+var_10]
0x87C08F: push    ecx
0x87C090: call    sub_772630
0x87C095: add     esp, 4
0x87C098: mov     ebp, eax
0x87C09A: cmp     edi, [ebp+0]
0x87C09D: mov     byte ptr [esp+30h+var_4], 1Fh
0x87C0A2: jz      short loc_87C0C3
0x87C0A4: test    edi, edi
0x87C0A6: jz      short loc_87C0B4
0x87C0A8: add     [edi+5Ch], ebx
0x87C0AB: jnz     short loc_87C0B4
0x87C0AD: mov     ecx, edi
0x87C0AF: call    sub_772560
0x87C0B4: mov     edi, [ebp+0]
0x87C0B7: test    edi, edi
0x87C0B9: mov     [esp+30h+a3], edi
0x87C0BD: jz      short loc_87C0C3
0x87C0BF: add     dword ptr [edi+5Ch], 1
0x87C0C3: mov     eax, [esp+30h+var_10]
0x87C0C7: test    eax, eax
0x87C0C9: mov     byte ptr [esp+30h+var_4], 1
0x87C0CE: jz      short loc_87C0E2
0x87C0D0: add     [eax+5Ch], ebx
0x87C0D3: mov     ecx, eax
0x87C0D5: add     eax, 5Ch ; '\'
0x87C0D8: cmp     dword ptr [eax], 0
0x87C0DB: jnz     short loc_87C0E2
0x87C0DD: call    sub_772560
0x87C0E2: push    2
0x87C0E4: push    1
0x87C0E6: push    1
0x87C0E8: push    edi
0x87C0E9: call    sub_801110
0x87C0EE: add     esp, 10h
0x87C0F1: push    edi; a3
0x87C0F2: push    1; a2
0x87C0F4: mov     ecx, esi; this
0x87C0F6: call    sub_760010
0x87C0FB: lea     edx, [esp+30h+var_10]
0x87C0FF: push    edx
0x87C100: call    sub_772630
0x87C105: add     esp, 4
0x87C108: mov     ebp, eax
0x87C10A: cmp     edi, [ebp+0]
0x87C10D: mov     byte ptr [esp+30h+var_4], 20h ; ' '
0x87C112: jz      short loc_87C133
0x87C114: test    edi, edi
0x87C116: jz      short loc_87C124
0x87C118: add     [edi+5Ch], ebx
0x87C11B: jnz     short loc_87C124
0x87C11D: mov     ecx, edi
0x87C11F: call    sub_772560
0x87C124: mov     edi, [ebp+0]
0x87C127: test    edi, edi
0x87C129: mov     [esp+30h+a3], edi
0x87C12D: jz      short loc_87C133
0x87C12F: add     dword ptr [edi+5Ch], 1
0x87C133: mov     eax, [esp+30h+var_10]
0x87C137: test    eax, eax
0x87C139: mov     byte ptr [esp+30h+var_4], 1
0x87C13E: jz      short loc_87C152
0x87C140: add     [eax+5Ch], ebx
0x87C143: mov     ecx, eax
0x87C145: add     eax, 5Ch ; '\'
0x87C148: cmp     dword ptr [eax], 0
0x87C14B: jnz     short loc_87C152
0x87C14D: call    sub_772560
0x87C152: push    2
0x87C154: push    1
0x87C156: push    2
0x87C158: push    edi
0x87C159: call    sub_801110
0x87C15E: add     esp, 10h
0x87C161: push    edi; a3
0x87C162: push    2; a2
0x87C164: mov     ecx, esi; this
0x87C166: call    sub_760010
0x87C16B: lea     eax, [esp+30h+var_10]
0x87C16F: push    eax
0x87C170: call    sub_772630
0x87C175: add     esp, 4
0x87C178: mov     ebp, eax
0x87C17A: cmp     edi, [ebp+0]
0x87C17D: mov     byte ptr [esp+30h+var_4], 21h ; '!'
0x87C182: jz      short loc_87C1A3
0x87C184: test    edi, edi
0x87C186: jz      short loc_87C194
0x87C188: add     [edi+5Ch], ebx
0x87C18B: jnz     short loc_87C194
0x87C18D: mov     ecx, edi
0x87C18F: call    sub_772560
0x87C194: mov     edi, [ebp+0]
0x87C197: test    edi, edi
0x87C199: mov     [esp+30h+a3], edi
0x87C19D: jz      short loc_87C1A3
0x87C19F: add     dword ptr [edi+5Ch], 1
0x87C1A3: mov     eax, [esp+30h+var_10]
0x87C1A7: test    eax, eax
0x87C1A9: mov     byte ptr [esp+30h+var_4], 1
0x87C1AE: jz      short loc_87C1C2
0x87C1B0: add     [eax+5Ch], ebx
0x87C1B3: mov     ecx, eax
0x87C1B5: add     eax, 5Ch ; '\'
0x87C1B8: cmp     dword ptr [eax], 0
0x87C1BB: jnz     short loc_87C1C2
0x87C1BD: call    sub_772560
0x87C1C2: push    2
0x87C1C4: push    1
0x87C1C6: push    3
0x87C1C8: push    edi
0x87C1C9: call    sub_801110
0x87C1CE: add     esp, 10h
0x87C1D1: push    edi; a3
0x87C1D2: push    3; a2
0x87C1D4: mov     ecx, esi; this
0x87C1D6: call    sub_760010
0x87C1DB: lea     ecx, [esp+30h+var_10]
0x87C1DF: push    ecx
0x87C1E0: call    sub_772630
0x87C1E5: add     esp, 4
0x87C1E8: mov     ebp, eax
0x87C1EA: cmp     edi, [ebp+0]
0x87C1ED: mov     byte ptr [esp+30h+var_4], 22h ; '"'
0x87C1F2: jz      short loc_87C213
0x87C1F4: test    edi, edi
0x87C1F6: jz      short loc_87C204
0x87C1F8: add     [edi+5Ch], ebx
0x87C1FB: jnz     short loc_87C204
0x87C1FD: mov     ecx, edi
0x87C1FF: call    sub_772560
0x87C204: mov     edi, [ebp+0]
0x87C207: test    edi, edi
0x87C209: mov     [esp+30h+a3], edi
0x87C20D: jz      short loc_87C213
0x87C20F: add     dword ptr [edi+5Ch], 1
0x87C213: mov     eax, [esp+30h+var_10]
0x87C217: test    eax, eax
0x87C219: mov     byte ptr [esp+30h+var_4], 1
0x87C21E: jz      short loc_87C232
0x87C220: add     [eax+5Ch], ebx
0x87C223: mov     ecx, eax
0x87C225: add     eax, 5Ch ; '\'
0x87C228: cmp     dword ptr [eax], 0
0x87C22B: jnz     short loc_87C232
0x87C22D: call    sub_772560
0x87C232: push    0
0x87C234: push    3
0x87C236: push    4
0x87C238: push    edi
0x87C239: call    sub_801110
0x87C23E: mov     edx, ds:0B43110h
0x87C244: add     esp, 10h
0x87C247: push    edx; a2
0x87C248: mov     ecx, edi; this
0x87C24A: call    sub_76C910
0x87C24F: push    edi; a3
0x87C250: push    4; a2
0x87C252: mov     ecx, esi; this
0x87C254: call    sub_760010
0x87C259: lea     eax, [esp+30h+var_10]
0x87C25D: push    eax
0x87C25E: call    sub_772630
0x87C263: add     esp, 4
0x87C266: mov     ebp, eax
0x87C268: cmp     edi, [ebp+0]
0x87C26B: mov     byte ptr [esp+30h+var_4], 23h ; '#'
0x87C270: jz      short loc_87C291
0x87C272: test    edi, edi
0x87C274: jz      short loc_87C282
0x87C276: add     [edi+5Ch], ebx
0x87C279: jnz     short loc_87C282
0x87C27B: mov     ecx, edi
0x87C27D: call    sub_772560
0x87C282: mov     edi, [ebp+0]
0x87C285: test    edi, edi
0x87C287: mov     [esp+30h+a3], edi
0x87C28B: jz      short loc_87C291
0x87C28D: add     dword ptr [edi+5Ch], 1
0x87C291: mov     eax, [esp+30h+var_10]
0x87C295: test    eax, eax
0x87C297: mov     byte ptr [esp+30h+var_4], 1
0x87C29C: jz      short loc_87C2B0
0x87C29E: add     [eax+5Ch], ebx
0x87C2A1: mov     ecx, eax
0x87C2A3: add     eax, 5Ch ; '\'
0x87C2A6: cmp     dword ptr [eax], 0
0x87C2A9: jnz     short loc_87C2B0
0x87C2AB: call    sub_772560
0x87C2B0: push    2
0x87C2B2: push    1
0x87C2B4: push    5
0x87C2B6: push    edi
0x87C2B7: call    sub_801110
0x87C2BC: add     esp, 10h
0x87C2BF: push    edi; a3
0x87C2C0: push    5; a2
0x87C2C2: mov     ecx, esi; this
0x87C2C4: call    sub_760010
0x87C2C9: lea     ecx, [esp+30h+var_10]
0x87C2CD: push    ecx
0x87C2CE: call    sub_772630
0x87C2D3: add     esp, 4
0x87C2D6: mov     ebp, eax
0x87C2D8: cmp     edi, [ebp+0]
0x87C2DB: mov     byte ptr [esp+30h+var_4], 24h ; '$'
0x87C2E0: jz      short loc_87C301
0x87C2E2: test    edi, edi
0x87C2E4: jz      short loc_87C2F2
0x87C2E6: add     [edi+5Ch], ebx
0x87C2E9: jnz     short loc_87C2F2
0x87C2EB: mov     ecx, edi
0x87C2ED: call    sub_772560
0x87C2F2: mov     edi, [ebp+0]
0x87C2F5: test    edi, edi
0x87C2F7: mov     [esp+30h+a3], edi
0x87C2FB: jz      short loc_87C301
0x87C2FD: add     dword ptr [edi+5Ch], 1
0x87C301: mov     eax, [esp+30h+var_10]
0x87C305: test    eax, eax
0x87C307: mov     byte ptr [esp+30h+var_4], 1
0x87C30C: jz      short loc_87C320
0x87C30E: add     [eax+5Ch], ebx
0x87C311: mov     ecx, eax
0x87C313: add     eax, 5Ch ; '\'
0x87C316: cmp     dword ptr [eax], 0
0x87C319: jnz     short loc_87C320
0x87C31B: call    sub_772560
0x87C320: push    0
0x87C322: push    3
0x87C324: push    6
0x87C326: push    edi
0x87C327: call    sub_801110
0x87C32C: add     esp, 10h
0x87C32F: push    edi; a3
0x87C330: push    6; a2
0x87C332: mov     ecx, esi; this
0x87C334: call    sub_760010
0x87C339: mov     ebp, [esp+30h+var_14]
0x87C33D: mov     eax, [ebp+0CCh]
0x87C343: push    eax; a2
0x87C344: mov     ecx, esi; this
0x87C346: call    sub_7AECB0
0x87C34B: mov     eax, [ebp+104h]
0x87C351: push    eax; a2
0x87C352: mov     ecx, esi; this
0x87C354: call    sub_7AEC60
0x87C359: cmp     dword ptr [esi+30h], 0
0x87C35D: jnz     short loc_87C367
0x87C35F: call    sub_772DF0
0x87C364: mov     [esi+30h], eax
0x87C367: mov     ecx, [esi+30h]
0x87C36A: push    0
0x87C36C: push    0Fh
0x87C36E: push    0A8h ; '¨'
0x87C373: call    sub_772CD0
0x87C378: cmp     dword ptr [esi+30h], 0
0x87C37C: jnz     short loc_87C386
0x87C37E: call    sub_772DF0
0x87C383: mov     [esi+30h], eax
0x87C386: mov     ecx, [esi+30h]
0x87C389: push    0
0x87C38B: push    0
0x87C38D: push    1Bh
0x87C38F: call    sub_772CD0
0x87C394: cmp     dword ptr [esi+30h], 0
0x87C398: jnz     short loc_87C3A2
0x87C39A: call    sub_772DF0
0x87C39F: mov     [esi+30h], eax
0x87C3A2: mov     ecx, [esi+30h]
0x87C3A5: push    0
0x87C3A7: push    0
0x87C3A9: push    0Fh
0x87C3AB: call    sub_772CD0
0x87C3B0: cmp     dword ptr [esi+30h], 0
0x87C3B4: jnz     short loc_87C3BE
0x87C3B6: call    sub_772DF0
0x87C3BB: mov     [esi+30h], eax
0x87C3BE: mov     ecx, [esi+30h]
0x87C3C1: push    0
0x87C3C3: push    1
0x87C3C5: push    7
0x87C3C7: call    sub_772CD0
0x87C3CC: cmp     dword ptr [esi+30h], 0
0x87C3D0: jnz     short loc_87C3DA
0x87C3D2: call    sub_772DF0
0x87C3D7: mov     [esi+30h], eax
0x87C3DA: mov     ecx, [esi+30h]
0x87C3DD: push    0
0x87C3DF: push    4
0x87C3E1: push    17h
0x87C3E3: call    sub_772CD0
0x87C3E8: cmp     dword ptr [esi+30h], 0
0x87C3EC: jnz     short loc_87C3F6
0x87C3EE: call    sub_772DF0
0x87C3F3: mov     [esi+30h], eax
0x87C3F6: mov     ecx, [esi+30h]
0x87C3F9: push    0
0x87C3FB: push    1
0x87C3FD: push    0Eh
0x87C3FF: call    sub_772CD0
0x87C404: cmp     dword ptr [esi+30h], 0
0x87C408: jnz     short loc_87C412
0x87C40A: call    sub_772DF0
0x87C40F: mov     [esi+30h], eax
0x87C412: mov     ecx, [esi+30h]
0x87C415: push    0
0x87C417: push    0
0x87C419: push    34h ; '4'
0x87C41B: call    sub_772CD0
0x87C420: cmp     esi, ds:0B4772Ch
0x87C426: mov     ebx, 3Ch ; '<'
0x87C42B: mov     dword ptr ds:0B43CB0h, 23082h
0x87C435: mov     ds:0B44340h, ebx
0x87C43B: jz      short loc_87C45C
0x87C43D: add     dword ptr [esi+60h], 0FFFFFFFFh
0x87C441: jnz     short loc_87C44A
0x87C443: mov     ecx, esi
0x87C445: call    sub_7604D0
0x87C44A: mov     esi, ds:0B4772Ch
0x87C450: test    esi, esi
0x87C452: mov     [esp+30h+var_18], esi
0x87C456: jz      short loc_87C45C
0x87C458: add     dword ptr [esi+60h], 1
0x87C45C: cmp     dword ptr [esi+18h], 7
0x87C460: jnb     loc_87C6E3
0x87C466: lea     edx, [esp+30h+var_10]
0x87C46A: push    edx
0x87C46B: call    sub_772630
0x87C470: add     esp, 4
0x87C473: push    eax
0x87C474: lea     ecx, [esp+34h+a3]
0x87C478: mov     byte ptr [esp+34h+var_4], 25h ; '%'
0x87C47D: call    sub_75FAE0
0x87C482: mov     eax, [esp+30h+var_10]
0x87C486: test    eax, eax
0x87C488: mov     byte ptr [esp+30h+var_4], 1
0x87C48D: jz      short loc_87C4A2
0x87C48F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87C493: mov     ecx, eax
0x87C495: add     eax, 5Ch ; '\'
0x87C498: cmp     dword ptr [eax], 0
0x87C49B: jnz     short loc_87C4A2
0x87C49D: call    sub_772560
0x87C4A2: mov     edi, [esp+30h+a3]
0x87C4A6: push    2
0x87C4A8: push    1
0x87C4AA: push    0
0x87C4AC: push    edi
0x87C4AD: call    sub_801110
0x87C4B2: add     esp, 10h
0x87C4B5: push    edi; a3
0x87C4B6: push    0; a2
0x87C4B8: mov     ecx, esi; this
0x87C4BA: call    sub_760010
0x87C4BF: lea     eax, [esp+30h+var_10]
0x87C4C3: push    eax
0x87C4C4: call    sub_772630
0x87C4C9: add     esp, 4
0x87C4CC: push    eax
0x87C4CD: lea     ecx, [esp+34h+a3]
0x87C4D1: mov     byte ptr [esp+34h+var_4], 26h ; '&'
0x87C4D6: call    sub_75FAE0
0x87C4DB: mov     eax, [esp+30h+var_10]
0x87C4DF: test    eax, eax
0x87C4E1: mov     byte ptr [esp+30h+var_4], 1
0x87C4E6: jz      short loc_87C4FB
0x87C4E8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87C4EC: mov     ecx, eax
0x87C4EE: add     eax, 5Ch ; '\'
0x87C4F1: cmp     dword ptr [eax], 0
0x87C4F4: jnz     short loc_87C4FB
0x87C4F6: call    sub_772560
0x87C4FB: mov     edi, [esp+30h+a3]
0x87C4FF: push    2
0x87C501: push    1
0x87C503: push    1
0x87C505: push    edi
0x87C506: call    sub_801110
0x87C50B: add     esp, 10h
0x87C50E: push    edi; a3
0x87C50F: push    1; a2
0x87C511: mov     ecx, esi; this
0x87C513: call    sub_760010
0x87C518: lea     ecx, [esp+30h+var_10]
0x87C51C: push    ecx
0x87C51D: call    sub_772630
0x87C522: add     esp, 4
0x87C525: push    eax
0x87C526: lea     ecx, [esp+34h+a3]
0x87C52A: mov     byte ptr [esp+34h+var_4], 27h ; '''
0x87C52F: call    sub_75FAE0
0x87C534: mov     eax, [esp+30h+var_10]
0x87C538: test    eax, eax
0x87C53A: mov     byte ptr [esp+30h+var_4], 1
0x87C53F: jz      short loc_87C554
0x87C541: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87C545: mov     ecx, eax
0x87C547: add     eax, 5Ch ; '\'
0x87C54A: cmp     dword ptr [eax], 0
0x87C54D: jnz     short loc_87C554
0x87C54F: call    sub_772560
0x87C554: mov     edi, [esp+30h+a3]
0x87C558: push    2
0x87C55A: push    1
0x87C55C: push    2
0x87C55E: push    edi
0x87C55F: call    sub_801110
0x87C564: add     esp, 10h
0x87C567: push    edi; a3
0x87C568: push    2; a2
0x87C56A: mov     ecx, esi; this
0x87C56C: call    sub_760010
0x87C571: lea     edx, [esp+30h+var_10]
0x87C575: push    edx
0x87C576: call    sub_772630
0x87C57B: add     esp, 4
0x87C57E: push    eax
0x87C57F: lea     ecx, [esp+34h+a3]
0x87C583: mov     byte ptr [esp+34h+var_4], 28h ; '('
0x87C588: call    sub_75FAE0
0x87C58D: mov     eax, [esp+30h+var_10]
0x87C591: test    eax, eax
0x87C593: mov     byte ptr [esp+30h+var_4], 1
0x87C598: jz      short loc_87C5AD
0x87C59A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87C59E: mov     ecx, eax
0x87C5A0: add     eax, 5Ch ; '\'
0x87C5A3: cmp     dword ptr [eax], 0
0x87C5A6: jnz     short loc_87C5AD
0x87C5A8: call    sub_772560
0x87C5AD: mov     edi, [esp+30h+a3]
0x87C5B1: push    2
0x87C5B3: push    1
0x87C5B5: push    3
0x87C5B7: push    edi
0x87C5B8: call    sub_801110
0x87C5BD: add     esp, 10h
0x87C5C0: push    edi; a3
0x87C5C1: push    3; a2
0x87C5C3: mov     ecx, esi; this
0x87C5C5: call    sub_760010
0x87C5CA: lea     eax, [esp+30h+var_10]
0x87C5CE: push    eax
0x87C5CF: call    sub_772630
0x87C5D4: add     esp, 4
0x87C5D7: push    eax
0x87C5D8: lea     ecx, [esp+34h+a3]
0x87C5DC: mov     byte ptr [esp+34h+var_4], 29h ; ')'
0x87C5E1: call    sub_75FAE0
0x87C5E6: mov     eax, [esp+30h+var_10]
0x87C5EA: test    eax, eax
0x87C5EC: mov     byte ptr [esp+30h+var_4], 1
0x87C5F1: jz      short loc_87C606
0x87C5F3: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87C5F7: mov     ecx, eax
0x87C5F9: add     eax, 5Ch ; '\'
0x87C5FC: cmp     dword ptr [eax], 0
0x87C5FF: jnz     short loc_87C606
0x87C601: call    sub_772560
0x87C606: mov     edi, [esp+30h+a3]
0x87C60A: push    0
0x87C60C: push    3
0x87C60E: push    4
0x87C610: push    edi
0x87C611: call    sub_801110
0x87C616: mov     ecx, ds:0B43110h
0x87C61C: add     esp, 10h
0x87C61F: push    ecx; a2
0x87C620: mov     ecx, edi; this
0x87C622: call    sub_76C910
0x87C627: push    edi; a3
0x87C628: push    4; a2
0x87C62A: mov     ecx, esi; this
0x87C62C: call    sub_760010
0x87C631: lea     edx, [esp+30h+var_10]
0x87C635: push    edx
0x87C636: call    sub_772630
0x87C63B: add     esp, 4
0x87C63E: push    eax
0x87C63F: lea     ecx, [esp+34h+a3]
0x87C643: mov     byte ptr [esp+34h+var_4], 2Ah ; '*'
0x87C648: call    sub_75FAE0
0x87C64D: mov     eax, [esp+30h+var_10]
0x87C651: test    eax, eax
0x87C653: mov     byte ptr [esp+30h+var_4], 1
0x87C658: jz      short loc_87C66D
0x87C65A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87C65E: mov     ecx, eax
0x87C660: add     eax, 5Ch ; '\'
0x87C663: cmp     dword ptr [eax], 0
0x87C666: jnz     short loc_87C66D
0x87C668: call    sub_772560
0x87C66D: mov     edi, [esp+30h+a3]
0x87C671: push    2
0x87C673: push    1
0x87C675: push    5
0x87C677: push    edi
0x87C678: call    sub_801110
0x87C67D: add     esp, 10h
0x87C680: push    edi; a3
0x87C681: push    5; a2
0x87C683: mov     ecx, esi; this
0x87C685: call    sub_760010
0x87C68A: lea     eax, [esp+30h+var_10]
0x87C68E: push    eax
0x87C68F: call    sub_772630
0x87C694: add     esp, 4
0x87C697: push    eax
0x87C698: lea     ecx, [esp+34h+a3]
0x87C69C: mov     byte ptr [esp+34h+var_4], 2Bh ; '+'
0x87C6A1: call    sub_75FAE0
0x87C6A6: mov     eax, [esp+30h+var_10]
0x87C6AA: test    eax, eax
0x87C6AC: mov     byte ptr [esp+30h+var_4], 1
0x87C6B1: jz      short loc_87C6C6
0x87C6B3: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87C6B7: mov     ecx, eax
0x87C6B9: add     eax, 5Ch ; '\'
0x87C6BC: cmp     dword ptr [eax], 0
0x87C6BF: jnz     short loc_87C6C6
0x87C6C1: call    sub_772560
0x87C6C6: mov     edi, [esp+30h+a3]
0x87C6CA: push    0
0x87C6CC: push    3
0x87C6CE: push    6
0x87C6D0: push    edi
0x87C6D1: call    sub_801110
0x87C6D6: add     esp, 10h
0x87C6D9: push    edi; a3
0x87C6DA: push    6; a2
0x87C6DC: mov     ecx, esi; this
0x87C6DE: call    sub_760010
0x87C6E3: mov     eax, [ebp+0D0h]
0x87C6E9: push    eax; a2
0x87C6EA: mov     ecx, esi; this
0x87C6EC: call    sub_7AECB0
0x87C6F1: mov     eax, [ebp+104h]
0x87C6F7: push    eax; a2
0x87C6F8: mov     ecx, esi; this
0x87C6FA: call    sub_7AEC60
0x87C6FF: cmp     dword ptr [esi+30h], 0
0x87C703: jnz     short loc_87C70D
0x87C705: call    sub_772DF0
0x87C70A: mov     [esi+30h], eax
0x87C70D: mov     ecx, [esi+30h]
0x87C710: push    0
0x87C712: push    0Fh
0x87C714: push    0A8h ; '¨'
0x87C719: call    sub_772CD0
0x87C71E: cmp     dword ptr [esi+30h], 0
0x87C722: jnz     short loc_87C72C
0x87C724: call    sub_772DF0
0x87C729: mov     [esi+30h], eax
0x87C72C: mov     ecx, [esi+30h]
0x87C72F: push    0
0x87C731: push    0
0x87C733: push    1Bh
0x87C735: call    sub_772CD0
0x87C73A: cmp     dword ptr [esi+30h], 0
0x87C73E: jnz     short loc_87C748
0x87C740: call    sub_772DF0
0x87C745: mov     [esi+30h], eax
0x87C748: mov     ecx, [esi+30h]
0x87C74B: push    0
0x87C74D: push    0
0x87C74F: push    0Fh
0x87C751: call    sub_772CD0
0x87C756: cmp     dword ptr [esi+30h], 0
0x87C75A: jnz     short loc_87C764
0x87C75C: call    sub_772DF0
0x87C761: mov     [esi+30h], eax
0x87C764: mov     ecx, [esi+30h]
0x87C767: push    0
0x87C769: push    1
0x87C76B: push    7
0x87C76D: call    sub_772CD0
0x87C772: cmp     dword ptr [esi+30h], 0
0x87C776: jnz     short loc_87C780
0x87C778: call    sub_772DF0
0x87C77D: mov     [esi+30h], eax
0x87C780: mov     ecx, [esi+30h]
0x87C783: push    0
0x87C785: push    4
0x87C787: push    17h
0x87C789: call    sub_772CD0
0x87C78E: cmp     dword ptr [esi+30h], 0
0x87C792: jnz     short loc_87C79C
0x87C794: call    sub_772DF0
0x87C799: mov     [esi+30h], eax
0x87C79C: mov     ecx, [esi+30h]
0x87C79F: push    0
0x87C7A1: push    1
0x87C7A3: push    0Eh
0x87C7A5: call    sub_772CD0
0x87C7AA: cmp     dword ptr [esi+30h], 0
0x87C7AE: jnz     short loc_87C7B8
0x87C7B0: call    sub_772DF0
0x87C7B5: mov     [esi+30h], eax
0x87C7B8: mov     ecx, [esi+30h]
0x87C7BB: push    0
0x87C7BD: push    0
0x87C7BF: push    34h ; '4'
0x87C7C1: call    sub_772CD0
0x87C7C6: cmp     esi, ds:0B47730h
0x87C7CC: mov     dword ptr ds:0B43CC4h, 63088h
0x87C7D6: mov     ds:0B44354h, ebx
0x87C7DC: jz      short loc_87C7FD
0x87C7DE: add     dword ptr [esi+60h], 0FFFFFFFFh
0x87C7E2: jnz     short loc_87C7EB
0x87C7E4: mov     ecx, esi
0x87C7E6: call    sub_7604D0
0x87C7EB: mov     esi, ds:0B47730h
0x87C7F1: test    esi, esi
0x87C7F3: mov     [esp+30h+var_18], esi
0x87C7F7: jz      short loc_87C7FD
0x87C7F9: add     dword ptr [esi+60h], 1
0x87C7FD: cmp     dword ptr [esi+18h], 7
0x87C801: jnb     loc_87CA83
0x87C807: lea     ecx, [esp+30h+var_10]
0x87C80B: push    ecx
0x87C80C: call    sub_772630
0x87C811: add     esp, 4
0x87C814: push    eax
0x87C815: lea     ecx, [esp+34h+a3]
0x87C819: mov     byte ptr [esp+34h+var_4], 2Ch ; ','
0x87C81E: call    sub_75FAE0
0x87C823: mov     eax, [esp+30h+var_10]
0x87C827: test    eax, eax
0x87C829: mov     byte ptr [esp+30h+var_4], 1
0x87C82E: jz      short loc_87C843
0x87C830: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87C834: mov     ecx, eax
0x87C836: add     eax, 5Ch ; '\'
0x87C839: cmp     dword ptr [eax], 0
0x87C83C: jnz     short loc_87C843
0x87C83E: call    sub_772560
0x87C843: mov     edi, [esp+30h+a3]
0x87C847: push    2
0x87C849: push    1
0x87C84B: push    0
0x87C84D: push    edi
0x87C84E: call    sub_801110
0x87C853: add     esp, 10h
0x87C856: push    edi; a3
0x87C857: push    0; a2
0x87C859: mov     ecx, esi; this
0x87C85B: call    sub_760010
0x87C860: lea     edx, [esp+30h+var_10]
0x87C864: push    edx
0x87C865: call    sub_772630
0x87C86A: add     esp, 4
0x87C86D: push    eax
0x87C86E: lea     ecx, [esp+34h+a3]
0x87C872: mov     byte ptr [esp+34h+var_4], 2Dh ; '-'
0x87C877: call    sub_75FAE0
0x87C87C: mov     eax, [esp+30h+var_10]
0x87C880: test    eax, eax
0x87C882: mov     byte ptr [esp+30h+var_4], 1
0x87C887: jz      short loc_87C89C
0x87C889: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87C88D: mov     ecx, eax
0x87C88F: add     eax, 5Ch ; '\'
0x87C892: cmp     dword ptr [eax], 0
0x87C895: jnz     short loc_87C89C
0x87C897: call    sub_772560
0x87C89C: mov     edi, [esp+30h+a3]
0x87C8A0: push    2
0x87C8A2: push    1
0x87C8A4: push    1
0x87C8A6: push    edi
0x87C8A7: call    sub_801110
0x87C8AC: add     esp, 10h
0x87C8AF: push    edi; a3
0x87C8B0: push    1; a2
0x87C8B2: mov     ecx, esi; this
0x87C8B4: call    sub_760010
0x87C8B9: lea     eax, [esp+30h+var_10]
0x87C8BD: push    eax
0x87C8BE: call    sub_772630
0x87C8C3: add     esp, 4
0x87C8C6: push    eax
0x87C8C7: lea     ecx, [esp+34h+a3]
0x87C8CB: mov     byte ptr [esp+34h+var_4], 2Eh ; '.'
0x87C8D0: call    sub_75FAE0
0x87C8D5: mov     eax, [esp+30h+var_10]
0x87C8D9: test    eax, eax
0x87C8DB: mov     byte ptr [esp+30h+var_4], 1
0x87C8E0: jz      short loc_87C8F5
0x87C8E2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87C8E6: mov     ecx, eax
0x87C8E8: add     eax, 5Ch ; '\'
0x87C8EB: cmp     dword ptr [eax], 0
0x87C8EE: jnz     short loc_87C8F5
0x87C8F0: call    sub_772560
0x87C8F5: mov     edi, [esp+30h+a3]
0x87C8F9: push    2
0x87C8FB: push    1
0x87C8FD: push    2
0x87C8FF: push    edi
0x87C900: call    sub_801110
0x87C905: add     esp, 10h
0x87C908: push    edi; a3
0x87C909: push    2; a2
0x87C90B: mov     ecx, esi; this
0x87C90D: call    sub_760010
0x87C912: lea     ecx, [esp+30h+var_10]
0x87C916: push    ecx
0x87C917: call    sub_772630
0x87C91C: add     esp, 4
0x87C91F: push    eax
0x87C920: lea     ecx, [esp+34h+a3]
0x87C924: mov     byte ptr [esp+34h+var_4], 2Fh ; '/'
0x87C929: call    sub_75FAE0
0x87C92E: mov     eax, [esp+30h+var_10]
0x87C932: test    eax, eax
0x87C934: mov     byte ptr [esp+30h+var_4], 1
0x87C939: jz      short loc_87C94E
0x87C93B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87C93F: mov     ecx, eax
0x87C941: add     eax, 5Ch ; '\'
0x87C944: cmp     dword ptr [eax], 0
0x87C947: jnz     short loc_87C94E
0x87C949: call    sub_772560
0x87C94E: mov     edi, [esp+30h+a3]
0x87C952: push    2
0x87C954: push    1
0x87C956: push    3
0x87C958: push    edi
0x87C959: call    sub_801110
0x87C95E: add     esp, 10h
0x87C961: push    edi; a3
0x87C962: push    3; a2
0x87C964: mov     ecx, esi; this
0x87C966: call    sub_760010
0x87C96B: lea     edx, [esp+30h+var_10]
0x87C96F: push    edx
0x87C970: call    sub_772630
0x87C975: add     esp, 4
0x87C978: push    eax
0x87C979: lea     ecx, [esp+34h+a3]
0x87C97D: mov     byte ptr [esp+34h+var_4], 30h ; '0'
0x87C982: call    sub_75FAE0
0x87C987: mov     eax, [esp+30h+var_10]
0x87C98B: test    eax, eax
0x87C98D: mov     byte ptr [esp+30h+var_4], 1
0x87C992: jz      short loc_87C9A7
0x87C994: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87C998: mov     ecx, eax
0x87C99A: add     eax, 5Ch ; '\'
0x87C99D: cmp     dword ptr [eax], 0
0x87C9A0: jnz     short loc_87C9A7
0x87C9A2: call    sub_772560
0x87C9A7: mov     edi, [esp+30h+a3]
0x87C9AB: push    0
0x87C9AD: push    3
0x87C9AF: push    4
0x87C9B1: push    edi
0x87C9B2: call    sub_801110
0x87C9B7: mov     eax, ds:0B43110h
0x87C9BC: add     esp, 10h
0x87C9BF: push    eax; a2
0x87C9C0: mov     ecx, edi; this
0x87C9C2: call    sub_76C910
0x87C9C7: push    edi; a3
0x87C9C8: push    4; a2
0x87C9CA: mov     ecx, esi; this
0x87C9CC: call    sub_760010
0x87C9D1: lea     ecx, [esp+30h+var_10]
0x87C9D5: push    ecx
0x87C9D6: call    sub_772630
0x87C9DB: add     esp, 4
0x87C9DE: push    eax
0x87C9DF: lea     ecx, [esp+34h+a3]
0x87C9E3: mov     byte ptr [esp+34h+var_4], 31h ; '1'
0x87C9E8: call    sub_75FAE0
0x87C9ED: mov     eax, [esp+30h+var_10]
0x87C9F1: test    eax, eax
0x87C9F3: mov     byte ptr [esp+30h+var_4], 1
0x87C9F8: jz      short loc_87CA0D
0x87C9FA: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87C9FE: mov     ecx, eax
0x87CA00: add     eax, 5Ch ; '\'
0x87CA03: cmp     dword ptr [eax], 0
0x87CA06: jnz     short loc_87CA0D
0x87CA08: call    sub_772560
0x87CA0D: mov     edi, [esp+30h+a3]
0x87CA11: push    2
0x87CA13: push    1
0x87CA15: push    5
0x87CA17: push    edi
0x87CA18: call    sub_801110
0x87CA1D: add     esp, 10h
0x87CA20: push    edi; a3
0x87CA21: push    5; a2
0x87CA23: mov     ecx, esi; this
0x87CA25: call    sub_760010
0x87CA2A: lea     edx, [esp+30h+var_10]
0x87CA2E: push    edx
0x87CA2F: call    sub_772630
0x87CA34: add     esp, 4
0x87CA37: push    eax
0x87CA38: lea     ecx, [esp+34h+a3]
0x87CA3C: mov     byte ptr [esp+34h+var_4], 32h ; '2'
0x87CA41: call    sub_75FAE0
0x87CA46: mov     eax, [esp+30h+var_10]
0x87CA4A: test    eax, eax
0x87CA4C: mov     byte ptr [esp+30h+var_4], 1
0x87CA51: jz      short loc_87CA66
0x87CA53: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87CA57: mov     ecx, eax
0x87CA59: add     eax, 5Ch ; '\'
0x87CA5C: cmp     dword ptr [eax], 0
0x87CA5F: jnz     short loc_87CA66
0x87CA61: call    sub_772560
0x87CA66: mov     edi, [esp+30h+a3]
0x87CA6A: push    0
0x87CA6C: push    3
0x87CA6E: push    6
0x87CA70: push    edi
0x87CA71: call    sub_801110
0x87CA76: add     esp, 10h
0x87CA79: push    edi; a3
0x87CA7A: push    6; a2
0x87CA7C: mov     ecx, esi; this
0x87CA7E: call    sub_760010
0x87CA83: mov     eax, [ebp+0D4h]
0x87CA89: push    eax; a2
0x87CA8A: mov     ecx, esi; this
0x87CA8C: call    sub_7AECB0
0x87CA91: mov     eax, [ebp+108h]
0x87CA97: push    eax; a2
0x87CA98: mov     ecx, esi; this
0x87CA9A: call    sub_7AEC60
0x87CA9F: cmp     dword ptr [esi+30h], 0
0x87CAA3: jnz     short loc_87CAAD
0x87CAA5: call    sub_772DF0
0x87CAAA: mov     [esi+30h], eax
0x87CAAD: mov     ecx, [esi+30h]
0x87CAB0: push    0
0x87CAB2: push    0Fh
0x87CAB4: push    0A8h ; '¨'
0x87CAB9: call    sub_772CD0
0x87CABE: cmp     dword ptr [esi+30h], 0
0x87CAC2: jnz     short loc_87CACC
0x87CAC4: call    sub_772DF0
0x87CAC9: mov     [esi+30h], eax
0x87CACC: mov     ecx, [esi+30h]
0x87CACF: push    0
0x87CAD1: push    0
0x87CAD3: push    1Bh
0x87CAD5: call    sub_772CD0
0x87CADA: cmp     dword ptr [esi+30h], 0
0x87CADE: jnz     short loc_87CAE8
0x87CAE0: call    sub_772DF0
0x87CAE5: mov     [esi+30h], eax
0x87CAE8: mov     ecx, [esi+30h]
0x87CAEB: push    0
0x87CAED: push    0
0x87CAEF: push    0Fh
0x87CAF1: call    sub_772CD0
0x87CAF6: cmp     dword ptr [esi+30h], 0
0x87CAFA: jnz     short loc_87CB04
0x87CAFC: call    sub_772DF0
0x87CB01: mov     [esi+30h], eax
0x87CB04: mov     ecx, [esi+30h]
0x87CB07: push    0
0x87CB09: push    1
0x87CB0B: push    7
0x87CB0D: call    sub_772CD0
0x87CB12: cmp     dword ptr [esi+30h], 0
0x87CB16: jnz     short loc_87CB20
0x87CB18: call    sub_772DF0
0x87CB1D: mov     [esi+30h], eax
0x87CB20: mov     ecx, [esi+30h]
0x87CB23: push    0
0x87CB25: push    4
0x87CB27: push    17h
0x87CB29: call    sub_772CD0
0x87CB2E: cmp     dword ptr [esi+30h], 0
0x87CB32: jnz     short loc_87CB3C
0x87CB34: call    sub_772DF0
0x87CB39: mov     [esi+30h], eax
0x87CB3C: mov     ecx, [esi+30h]
0x87CB3F: push    0
0x87CB41: push    1
0x87CB43: push    0Eh
0x87CB45: call    sub_772CD0
0x87CB4A: cmp     dword ptr [esi+30h], 0
0x87CB4E: jnz     short loc_87CB58
0x87CB50: call    sub_772DF0
0x87CB55: mov     [esi+30h], eax
0x87CB58: mov     ecx, [esi+30h]
0x87CB5B: push    0
0x87CB5D: push    0
0x87CB5F: push    34h ; '4'
0x87CB61: call    sub_772CD0
0x87CB66: cmp     esi, ds:0B47734h
0x87CB6C: mov     dword ptr ds:0B43CDCh, 230F2h
0x87CB76: mov     ds:0B4436Ch, ebx
0x87CB7C: jz      short loc_87CB9D
0x87CB7E: add     dword ptr [esi+60h], 0FFFFFFFFh
0x87CB82: jnz     short loc_87CB8B
0x87CB84: mov     ecx, esi
0x87CB86: call    sub_7604D0
0x87CB8B: mov     esi, ds:0B47734h
0x87CB91: test    esi, esi
0x87CB93: mov     [esp+30h+var_18], esi
0x87CB97: jz      short loc_87CB9D
0x87CB99: add     dword ptr [esi+60h], 1
0x87CB9D: cmp     dword ptr [esi+18h], 7
0x87CBA1: jnb     loc_87CE24
0x87CBA7: lea     eax, [esp+30h+var_10]
0x87CBAB: push    eax
0x87CBAC: call    sub_772630
0x87CBB1: add     esp, 4
0x87CBB4: push    eax
0x87CBB5: lea     ecx, [esp+34h+a3]
0x87CBB9: mov     byte ptr [esp+34h+var_4], 33h ; '3'
0x87CBBE: call    sub_75FAE0
0x87CBC3: mov     eax, [esp+30h+var_10]
0x87CBC7: test    eax, eax
0x87CBC9: mov     byte ptr [esp+30h+var_4], 1
0x87CBCE: jz      short loc_87CBE3
0x87CBD0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87CBD4: mov     ecx, eax
0x87CBD6: add     eax, 5Ch ; '\'
0x87CBD9: cmp     dword ptr [eax], 0
0x87CBDC: jnz     short loc_87CBE3
0x87CBDE: call    sub_772560
0x87CBE3: mov     edi, [esp+30h+a3]
0x87CBE7: push    2
0x87CBE9: push    1
0x87CBEB: push    0
0x87CBED: push    edi
0x87CBEE: call    sub_801110
0x87CBF3: add     esp, 10h
0x87CBF6: push    edi; a3
0x87CBF7: push    0; a2
0x87CBF9: mov     ecx, esi; this
0x87CBFB: call    sub_760010
0x87CC00: lea     ecx, [esp+30h+var_10]
0x87CC04: push    ecx
0x87CC05: call    sub_772630
0x87CC0A: add     esp, 4
0x87CC0D: push    eax
0x87CC0E: lea     ecx, [esp+34h+a3]
0x87CC12: mov     byte ptr [esp+34h+var_4], 34h ; '4'
0x87CC17: call    sub_75FAE0
0x87CC1C: mov     eax, [esp+30h+var_10]
0x87CC20: test    eax, eax
0x87CC22: mov     byte ptr [esp+30h+var_4], 1
0x87CC27: jz      short loc_87CC3C
0x87CC29: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87CC2D: mov     ecx, eax
0x87CC2F: add     eax, 5Ch ; '\'
0x87CC32: cmp     dword ptr [eax], 0
0x87CC35: jnz     short loc_87CC3C
0x87CC37: call    sub_772560
0x87CC3C: mov     edi, [esp+30h+a3]
0x87CC40: push    2
0x87CC42: push    1
0x87CC44: push    1
0x87CC46: push    edi
0x87CC47: call    sub_801110
0x87CC4C: add     esp, 10h
0x87CC4F: push    edi; a3
0x87CC50: push    1; a2
0x87CC52: mov     ecx, esi; this
0x87CC54: call    sub_760010
0x87CC59: lea     edx, [esp+30h+var_10]
0x87CC5D: push    edx
0x87CC5E: call    sub_772630
0x87CC63: add     esp, 4
0x87CC66: push    eax
0x87CC67: lea     ecx, [esp+34h+a3]
0x87CC6B: mov     byte ptr [esp+34h+var_4], 35h ; '5'
0x87CC70: call    sub_75FAE0
0x87CC75: mov     eax, [esp+30h+var_10]
0x87CC79: test    eax, eax
0x87CC7B: mov     byte ptr [esp+30h+var_4], 1
0x87CC80: jz      short loc_87CC95
0x87CC82: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87CC86: mov     ecx, eax
0x87CC88: add     eax, 5Ch ; '\'
0x87CC8B: cmp     dword ptr [eax], 0
0x87CC8E: jnz     short loc_87CC95
0x87CC90: call    sub_772560
0x87CC95: mov     edi, [esp+30h+a3]
0x87CC99: push    2
0x87CC9B: push    1
0x87CC9D: push    2
0x87CC9F: push    edi
0x87CCA0: call    sub_801110
0x87CCA5: add     esp, 10h
0x87CCA8: push    edi; a3
0x87CCA9: push    2; a2
0x87CCAB: mov     ecx, esi; this
0x87CCAD: call    sub_760010
0x87CCB2: lea     eax, [esp+30h+var_10]
0x87CCB6: push    eax
0x87CCB7: call    sub_772630
0x87CCBC: add     esp, 4
0x87CCBF: push    eax
0x87CCC0: lea     ecx, [esp+34h+a3]
0x87CCC4: mov     byte ptr [esp+34h+var_4], 36h ; '6'
0x87CCC9: call    sub_75FAE0
0x87CCCE: mov     eax, [esp+30h+var_10]
0x87CCD2: test    eax, eax
0x87CCD4: mov     byte ptr [esp+30h+var_4], 1
0x87CCD9: jz      short loc_87CCEE
0x87CCDB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87CCDF: mov     ecx, eax
0x87CCE1: add     eax, 5Ch ; '\'
0x87CCE4: cmp     dword ptr [eax], 0
0x87CCE7: jnz     short loc_87CCEE
0x87CCE9: call    sub_772560
0x87CCEE: mov     edi, [esp+30h+a3]
0x87CCF2: push    2
0x87CCF4: push    1
0x87CCF6: push    3
0x87CCF8: push    edi
0x87CCF9: call    sub_801110
0x87CCFE: add     esp, 10h
0x87CD01: push    edi; a3
0x87CD02: push    3; a2
0x87CD04: mov     ecx, esi; this
0x87CD06: call    sub_760010
0x87CD0B: lea     ecx, [esp+30h+var_10]
0x87CD0F: push    ecx
0x87CD10: call    sub_772630
0x87CD15: add     esp, 4
0x87CD18: push    eax
0x87CD19: lea     ecx, [esp+34h+a3]
0x87CD1D: mov     byte ptr [esp+34h+var_4], 37h ; '7'
0x87CD22: call    sub_75FAE0
0x87CD27: mov     eax, [esp+30h+var_10]
0x87CD2B: test    eax, eax
0x87CD2D: mov     byte ptr [esp+30h+var_4], 1
0x87CD32: jz      short loc_87CD47
0x87CD34: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87CD38: mov     ecx, eax
0x87CD3A: add     eax, 5Ch ; '\'
0x87CD3D: cmp     dword ptr [eax], 0
0x87CD40: jnz     short loc_87CD47
0x87CD42: call    sub_772560
0x87CD47: mov     edi, [esp+30h+a3]
0x87CD4B: push    0
0x87CD4D: push    3
0x87CD4F: push    4
0x87CD51: push    edi
0x87CD52: call    sub_801110
0x87CD57: mov     edx, ds:0B43110h
0x87CD5D: add     esp, 10h
0x87CD60: push    edx; a2
0x87CD61: mov     ecx, edi; this
0x87CD63: call    sub_76C910
0x87CD68: push    edi; a3
0x87CD69: push    4; a2
0x87CD6B: mov     ecx, esi; this
0x87CD6D: call    sub_760010
0x87CD72: lea     eax, [esp+30h+var_10]
0x87CD76: push    eax
0x87CD77: call    sub_772630
0x87CD7C: add     esp, 4
0x87CD7F: push    eax
0x87CD80: lea     ecx, [esp+34h+a3]
0x87CD84: mov     byte ptr [esp+34h+var_4], 38h ; '8'
0x87CD89: call    sub_75FAE0
0x87CD8E: mov     eax, [esp+30h+var_10]
0x87CD92: test    eax, eax
0x87CD94: mov     byte ptr [esp+30h+var_4], 1
0x87CD99: jz      short loc_87CDAE
0x87CD9B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87CD9F: mov     ecx, eax
0x87CDA1: add     eax, 5Ch ; '\'
0x87CDA4: cmp     dword ptr [eax], 0
0x87CDA7: jnz     short loc_87CDAE
0x87CDA9: call    sub_772560
0x87CDAE: mov     edi, [esp+30h+a3]
0x87CDB2: push    2
0x87CDB4: push    1
0x87CDB6: push    5
0x87CDB8: push    edi
0x87CDB9: call    sub_801110
0x87CDBE: add     esp, 10h
0x87CDC1: push    edi; a3
0x87CDC2: push    5; a2
0x87CDC4: mov     ecx, esi; this
0x87CDC6: call    sub_760010
0x87CDCB: lea     ecx, [esp+30h+var_10]
0x87CDCF: push    ecx
0x87CDD0: call    sub_772630
0x87CDD5: add     esp, 4
0x87CDD8: push    eax
0x87CDD9: lea     ecx, [esp+34h+a3]
0x87CDDD: mov     byte ptr [esp+34h+var_4], 39h ; '9'
0x87CDE2: call    sub_75FAE0
0x87CDE7: mov     eax, [esp+30h+var_10]
0x87CDEB: test    eax, eax
0x87CDED: mov     byte ptr [esp+30h+var_4], 1
0x87CDF2: jz      short loc_87CE07
0x87CDF4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87CDF8: mov     ecx, eax
0x87CDFA: add     eax, 5Ch ; '\'
0x87CDFD: cmp     dword ptr [eax], 0
0x87CE00: jnz     short loc_87CE07
0x87CE02: call    sub_772560
0x87CE07: mov     edi, [esp+30h+a3]
0x87CE0B: push    0
0x87CE0D: push    3
0x87CE0F: push    6
0x87CE11: push    edi
0x87CE12: call    sub_801110
0x87CE17: add     esp, 10h
0x87CE1A: push    edi; a3
0x87CE1B: push    6; a2
0x87CE1D: mov     ecx, esi; this
0x87CE1F: call    sub_760010
0x87CE24: mov     eax, [ebp+0D8h]
0x87CE2A: push    eax; a2
0x87CE2B: mov     ecx, esi; this
0x87CE2D: call    sub_7AECB0
0x87CE32: mov     eax, [ebp+108h]
0x87CE38: push    eax; a2
0x87CE39: mov     ecx, esi; this
0x87CE3B: call    sub_7AEC60
0x87CE40: cmp     dword ptr [esi+30h], 0
0x87CE44: jnz     short loc_87CE4E
0x87CE46: call    sub_772DF0
0x87CE4B: mov     [esi+30h], eax
0x87CE4E: mov     ecx, [esi+30h]
0x87CE51: push    0
0x87CE53: push    0Fh
0x87CE55: push    0A8h ; '¨'
0x87CE5A: call    sub_772CD0
0x87CE5F: cmp     dword ptr [esi+30h], 0
0x87CE63: jnz     short loc_87CE6D
0x87CE65: call    sub_772DF0
0x87CE6A: mov     [esi+30h], eax
0x87CE6D: mov     ecx, [esi+30h]
0x87CE70: push    0
0x87CE72: push    0
0x87CE74: push    1Bh
0x87CE76: call    sub_772CD0
0x87CE7B: cmp     dword ptr [esi+30h], 0
0x87CE7F: jnz     short loc_87CE89
0x87CE81: call    sub_772DF0
0x87CE86: mov     [esi+30h], eax
0x87CE89: mov     ecx, [esi+30h]
0x87CE8C: push    0
0x87CE8E: push    0
0x87CE90: push    0Fh
0x87CE92: call    sub_772CD0
0x87CE97: cmp     dword ptr [esi+30h], 0
0x87CE9B: jnz     short loc_87CEA5
0x87CE9D: call    sub_772DF0
0x87CEA2: mov     [esi+30h], eax
0x87CEA5: mov     ecx, [esi+30h]
0x87CEA8: push    0
0x87CEAA: push    1
0x87CEAC: push    7
0x87CEAE: call    sub_772CD0
0x87CEB3: cmp     dword ptr [esi+30h], 0
0x87CEB7: jnz     short loc_87CEC1
0x87CEB9: call    sub_772DF0
0x87CEBE: mov     [esi+30h], eax
0x87CEC1: mov     ecx, [esi+30h]
0x87CEC4: push    0
0x87CEC6: push    4
0x87CEC8: push    17h
0x87CECA: call    sub_772CD0
0x87CECF: cmp     dword ptr [esi+30h], 0
0x87CED3: jnz     short loc_87CEDD
0x87CED5: call    sub_772DF0
0x87CEDA: mov     [esi+30h], eax
0x87CEDD: mov     ecx, [esi+30h]
0x87CEE0: push    0
0x87CEE2: push    1
0x87CEE4: push    0Eh
0x87CEE6: call    sub_772CD0
0x87CEEB: cmp     dword ptr [esi+30h], 0
0x87CEEF: jnz     short loc_87CEF9
0x87CEF1: call    sub_772DF0
0x87CEF6: mov     [esi+30h], eax
0x87CEF9: mov     ecx, [esi+30h]
0x87CEFC: push    0
0x87CEFE: push    0
0x87CF00: push    34h ; '4'
0x87CF02: call    sub_772CD0
0x87CF07: cmp     esi, ds:0B47738h
0x87CF0D: mov     dword ptr ds:0B43CF0h, 630F8h
0x87CF17: mov     ds:0B44380h, ebx
0x87CF1D: jz      short loc_87CF3E
0x87CF1F: add     dword ptr [esi+60h], 0FFFFFFFFh
0x87CF23: jnz     short loc_87CF2C
0x87CF25: mov     ecx, esi
0x87CF27: call    sub_7604D0
0x87CF2C: mov     esi, ds:0B47738h
0x87CF32: test    esi, esi
0x87CF34: mov     [esp+30h+var_18], esi
0x87CF38: jz      short loc_87CF3E
0x87CF3A: add     dword ptr [esi+60h], 1
0x87CF3E: mov     ebx, 8
0x87CF43: cmp     [esi+18h], ebx
0x87CF46: jnb     loc_87D222
0x87CF4C: lea     edx, [esp+30h+var_10]
0x87CF50: push    edx
0x87CF51: call    sub_772630
0x87CF56: add     esp, 4
0x87CF59: push    eax
0x87CF5A: lea     ecx, [esp+34h+a3]
0x87CF5E: mov     byte ptr [esp+34h+var_4], 3Ah ; ':'
0x87CF63: call    sub_75FAE0
0x87CF68: mov     eax, [esp+30h+var_10]
0x87CF6C: test    eax, eax
0x87CF6E: mov     byte ptr [esp+30h+var_4], 1
0x87CF73: jz      short loc_87CF88
0x87CF75: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87CF79: mov     ecx, eax
0x87CF7B: add     eax, 5Ch ; '\'
0x87CF7E: cmp     dword ptr [eax], 0
0x87CF81: jnz     short loc_87CF88
0x87CF83: call    sub_772560
0x87CF88: mov     edi, [esp+30h+a3]
0x87CF8C: push    2
0x87CF8E: push    1
0x87CF90: push    0
0x87CF92: push    edi
0x87CF93: call    sub_801110
0x87CF98: add     esp, 10h
0x87CF9B: push    edi; a3
0x87CF9C: push    0; a2
0x87CF9E: mov     ecx, esi; this
0x87CFA0: call    sub_760010
0x87CFA5: lea     eax, [esp+30h+var_10]
0x87CFA9: push    eax
0x87CFAA: call    sub_772630
0x87CFAF: add     esp, 4
0x87CFB2: push    eax
0x87CFB3: lea     ecx, [esp+34h+a3]
0x87CFB7: mov     byte ptr [esp+34h+var_4], 3Bh ; ';'
0x87CFBC: call    sub_75FAE0
0x87CFC1: mov     eax, [esp+30h+var_10]
0x87CFC5: test    eax, eax
0x87CFC7: mov     byte ptr [esp+30h+var_4], 1
0x87CFCC: jz      short loc_87CFE1
0x87CFCE: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87CFD2: mov     ecx, eax
0x87CFD4: add     eax, 5Ch ; '\'
0x87CFD7: cmp     dword ptr [eax], 0
0x87CFDA: jnz     short loc_87CFE1
0x87CFDC: call    sub_772560
0x87CFE1: mov     edi, [esp+30h+a3]
0x87CFE5: push    2
0x87CFE7: push    1
0x87CFE9: push    1
0x87CFEB: push    edi
0x87CFEC: call    sub_801110
0x87CFF1: add     esp, 10h
0x87CFF4: push    edi; a3
0x87CFF5: push    1; a2
0x87CFF7: mov     ecx, esi; this
0x87CFF9: call    sub_760010
0x87CFFE: lea     ecx, [esp+30h+var_10]
0x87D002: push    ecx
0x87D003: call    sub_772630
0x87D008: add     esp, 4
0x87D00B: push    eax
0x87D00C: lea     ecx, [esp+34h+a3]
0x87D010: mov     byte ptr [esp+34h+var_4], 3Ch ; '<'
0x87D015: call    sub_75FAE0
0x87D01A: mov     eax, [esp+30h+var_10]
0x87D01E: test    eax, eax
0x87D020: mov     byte ptr [esp+30h+var_4], 1
0x87D025: jz      short loc_87D03A
0x87D027: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D02B: mov     ecx, eax
0x87D02D: add     eax, 5Ch ; '\'
0x87D030: cmp     dword ptr [eax], 0
0x87D033: jnz     short loc_87D03A
0x87D035: call    sub_772560
0x87D03A: mov     edi, [esp+30h+a3]
0x87D03E: push    2
0x87D040: push    1
0x87D042: push    2
0x87D044: push    edi
0x87D045: call    sub_801110
0x87D04A: add     esp, 10h
0x87D04D: push    edi; a3
0x87D04E: push    2; a2
0x87D050: mov     ecx, esi; this
0x87D052: call    sub_760010
0x87D057: lea     edx, [esp+30h+var_10]
0x87D05B: push    edx
0x87D05C: call    sub_772630
0x87D061: add     esp, 4
0x87D064: push    eax
0x87D065: lea     ecx, [esp+34h+a3]
0x87D069: mov     byte ptr [esp+34h+var_4], 3Dh ; '='
0x87D06E: call    sub_75FAE0
0x87D073: mov     eax, [esp+30h+var_10]
0x87D077: test    eax, eax
0x87D079: mov     byte ptr [esp+30h+var_4], 1
0x87D07E: jz      short loc_87D093
0x87D080: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D084: mov     ecx, eax
0x87D086: add     eax, 5Ch ; '\'
0x87D089: cmp     dword ptr [eax], 0
0x87D08C: jnz     short loc_87D093
0x87D08E: call    sub_772560
0x87D093: mov     edi, [esp+30h+a3]
0x87D097: push    2
0x87D099: push    1
0x87D09B: push    3
0x87D09D: push    edi
0x87D09E: call    sub_801110
0x87D0A3: add     esp, 10h
0x87D0A6: push    edi; a3
0x87D0A7: push    3; a2
0x87D0A9: mov     ecx, esi; this
0x87D0AB: call    sub_760010
0x87D0B0: lea     eax, [esp+30h+var_10]
0x87D0B4: push    eax
0x87D0B5: call    sub_772630
0x87D0BA: add     esp, 4
0x87D0BD: push    eax
0x87D0BE: lea     ecx, [esp+34h+a3]
0x87D0C2: mov     byte ptr [esp+34h+var_4], 3Eh ; '>'
0x87D0C7: call    sub_75FAE0
0x87D0CC: mov     eax, [esp+30h+var_10]
0x87D0D0: test    eax, eax
0x87D0D2: mov     byte ptr [esp+30h+var_4], 1
0x87D0D7: jz      short loc_87D0EC
0x87D0D9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D0DD: mov     ecx, eax
0x87D0DF: add     eax, 5Ch ; '\'
0x87D0E2: cmp     dword ptr [eax], 0
0x87D0E5: jnz     short loc_87D0EC
0x87D0E7: call    sub_772560
0x87D0EC: mov     edi, [esp+30h+a3]
0x87D0F0: push    2
0x87D0F2: push    1
0x87D0F4: push    4
0x87D0F6: push    edi
0x87D0F7: call    sub_801110
0x87D0FC: add     esp, 10h
0x87D0FF: push    edi; a3
0x87D100: push    4; a2
0x87D102: mov     ecx, esi; this
0x87D104: call    sub_760010
0x87D109: lea     ecx, [esp+30h+var_10]
0x87D10D: push    ecx
0x87D10E: call    sub_772630
0x87D113: add     esp, 4
0x87D116: push    eax
0x87D117: lea     ecx, [esp+34h+a3]
0x87D11B: mov     byte ptr [esp+34h+var_4], 3Fh ; '?'
0x87D120: call    sub_75FAE0
0x87D125: mov     eax, [esp+30h+var_10]
0x87D129: test    eax, eax
0x87D12B: mov     byte ptr [esp+30h+var_4], 1
0x87D130: jz      short loc_87D145
0x87D132: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D136: mov     ecx, eax
0x87D138: add     eax, 5Ch ; '\'
0x87D13B: cmp     dword ptr [eax], 0
0x87D13E: jnz     short loc_87D145
0x87D140: call    sub_772560
0x87D145: mov     edi, [esp+30h+a3]
0x87D149: push    0
0x87D14B: push    3
0x87D14D: push    5
0x87D14F: push    edi
0x87D150: call    sub_801110
0x87D155: mov     edx, ds:0B43110h
0x87D15B: add     esp, 10h
0x87D15E: push    edx; a2
0x87D15F: mov     ecx, edi; this
0x87D161: call    sub_76C910
0x87D166: push    edi; a3
0x87D167: push    5; a2
0x87D169: mov     ecx, esi; this
0x87D16B: call    sub_760010
0x87D170: lea     eax, [esp+30h+var_10]
0x87D174: push    eax
0x87D175: call    sub_772630
0x87D17A: add     esp, 4
0x87D17D: push    eax
0x87D17E: lea     ecx, [esp+34h+a3]
0x87D182: mov     byte ptr [esp+34h+var_4], 40h ; '@'
0x87D187: call    sub_75FAE0
0x87D18C: mov     eax, [esp+30h+var_10]
0x87D190: test    eax, eax
0x87D192: mov     byte ptr [esp+30h+var_4], 1
0x87D197: jz      short loc_87D1AC
0x87D199: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D19D: mov     ecx, eax
0x87D19F: add     eax, 5Ch ; '\'
0x87D1A2: cmp     dword ptr [eax], 0
0x87D1A5: jnz     short loc_87D1AC
0x87D1A7: call    sub_772560
0x87D1AC: mov     edi, [esp+30h+a3]
0x87D1B0: push    2
0x87D1B2: push    1
0x87D1B4: push    6
0x87D1B6: push    edi
0x87D1B7: call    sub_801110
0x87D1BC: add     esp, 10h
0x87D1BF: push    edi; a3
0x87D1C0: push    6; a2
0x87D1C2: mov     ecx, esi; this
0x87D1C4: call    sub_760010
0x87D1C9: lea     ecx, [esp+30h+var_10]
0x87D1CD: push    ecx
0x87D1CE: call    sub_772630
0x87D1D3: add     esp, 4
0x87D1D6: push    eax
0x87D1D7: lea     ecx, [esp+34h+a3]
0x87D1DB: mov     byte ptr [esp+34h+var_4], 41h ; 'A'
0x87D1E0: call    sub_75FAE0
0x87D1E5: mov     eax, [esp+30h+var_10]
0x87D1E9: test    eax, eax
0x87D1EB: mov     byte ptr [esp+30h+var_4], 1
0x87D1F0: jz      short loc_87D205
0x87D1F2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D1F6: mov     ecx, eax
0x87D1F8: add     eax, 5Ch ; '\'
0x87D1FB: cmp     dword ptr [eax], 0
0x87D1FE: jnz     short loc_87D205
0x87D200: call    sub_772560
0x87D205: mov     edi, [esp+30h+a3]
0x87D209: push    0
0x87D20B: push    3
0x87D20D: push    7
0x87D20F: push    edi
0x87D210: call    sub_801110
0x87D215: add     esp, 10h
0x87D218: push    edi; a3
0x87D219: push    7; a2
0x87D21B: mov     ecx, esi; this
0x87D21D: call    sub_760010
0x87D222: mov     ebp, [esp+30h+var_14]
0x87D226: mov     eax, [ebp+9Ch]
0x87D22C: push    eax; a2
0x87D22D: mov     ecx, esi; this
0x87D22F: call    sub_7AECB0
0x87D234: mov     eax, [ebp+0ECh]
0x87D23A: push    eax; a2
0x87D23B: mov     ecx, esi; this
0x87D23D: call    sub_7AEC60
0x87D242: cmp     dword ptr [esi+30h], 0
0x87D246: jnz     short loc_87D250
0x87D248: call    sub_772DF0
0x87D24D: mov     [esi+30h], eax
0x87D250: mov     ecx, [esi+30h]
0x87D253: push    0
0x87D255: push    0Fh
0x87D257: push    0A8h ; '¨'
0x87D25C: call    sub_772CD0
0x87D261: cmp     dword ptr [esi+30h], 0
0x87D265: jnz     short loc_87D26F
0x87D267: call    sub_772DF0
0x87D26C: mov     [esi+30h], eax
0x87D26F: mov     ecx, [esi+30h]
0x87D272: push    0
0x87D274: push    0
0x87D276: push    1Bh
0x87D278: call    sub_772CD0
0x87D27D: cmp     dword ptr [esi+30h], 0
0x87D281: jnz     short loc_87D28B
0x87D283: call    sub_772DF0
0x87D288: mov     [esi+30h], eax
0x87D28B: mov     ecx, [esi+30h]
0x87D28E: push    0
0x87D290: push    0
0x87D292: push    0Fh
0x87D294: call    sub_772CD0
0x87D299: cmp     dword ptr [esi+30h], 0
0x87D29D: jnz     short loc_87D2A7
0x87D29F: call    sub_772DF0
0x87D2A4: mov     [esi+30h], eax
0x87D2A7: mov     ecx, [esi+30h]
0x87D2AA: push    0
0x87D2AC: push    1
0x87D2AE: push    7
0x87D2B0: call    sub_772CD0
0x87D2B5: cmp     dword ptr [esi+30h], 0
0x87D2B9: jnz     short loc_87D2C3
0x87D2BB: call    sub_772DF0
0x87D2C0: mov     [esi+30h], eax
0x87D2C3: mov     ecx, [esi+30h]
0x87D2C6: push    0
0x87D2C8: push    4
0x87D2CA: push    17h
0x87D2CC: call    sub_772CD0
0x87D2D1: cmp     dword ptr [esi+30h], 0
0x87D2D5: jnz     short loc_87D2DF
0x87D2D7: call    sub_772DF0
0x87D2DC: mov     [esi+30h], eax
0x87D2DF: mov     ecx, [esi+30h]
0x87D2E2: push    0
0x87D2E4: push    1
0x87D2E6: push    0Eh
0x87D2E8: call    sub_772CD0
0x87D2ED: cmp     dword ptr [esi+30h], 0
0x87D2F1: jnz     short loc_87D2FB
0x87D2F3: call    sub_772DF0
0x87D2F8: mov     [esi+30h], eax
0x87D2FB: mov     ecx, [esi+30h]
0x87D2FE: push    0
0x87D300: push    0
0x87D302: push    34h ; '4'
0x87D304: call    sub_772CD0
0x87D309: cmp     esi, ds:0B4773Ch
0x87D30F: mov     ebp, 10Ch
0x87D314: mov     dword ptr ds:0B43D04h, 38082h
0x87D31E: mov     ds:0B44394h, ebp
0x87D324: jz      short loc_87D345
0x87D326: add     dword ptr [esi+60h], 0FFFFFFFFh
0x87D32A: jnz     short loc_87D333
0x87D32C: mov     ecx, esi
0x87D32E: call    sub_7604D0
0x87D333: mov     esi, ds:0B4773Ch
0x87D339: test    esi, esi
0x87D33B: mov     [esp+30h+var_18], esi
0x87D33F: jz      short loc_87D345
0x87D341: add     dword ptr [esi+60h], 1
0x87D345: cmp     [esi+18h], ebx
0x87D348: jnb     loc_87D624
0x87D34E: lea     edx, [esp+30h+var_10]
0x87D352: push    edx
0x87D353: call    sub_772630
0x87D358: add     esp, 4
0x87D35B: push    eax
0x87D35C: lea     ecx, [esp+34h+a3]
0x87D360: mov     byte ptr [esp+34h+var_4], 42h ; 'B'
0x87D365: call    sub_75FAE0
0x87D36A: mov     eax, [esp+30h+var_10]
0x87D36E: test    eax, eax
0x87D370: mov     byte ptr [esp+30h+var_4], 1
0x87D375: jz      short loc_87D38A
0x87D377: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D37B: mov     ecx, eax
0x87D37D: add     eax, 5Ch ; '\'
0x87D380: cmp     dword ptr [eax], 0
0x87D383: jnz     short loc_87D38A
0x87D385: call    sub_772560
0x87D38A: mov     edi, [esp+30h+a3]
0x87D38E: push    2
0x87D390: push    1
0x87D392: push    0
0x87D394: push    edi
0x87D395: call    sub_801110
0x87D39A: add     esp, 10h
0x87D39D: push    edi; a3
0x87D39E: push    0; a2
0x87D3A0: mov     ecx, esi; this
0x87D3A2: call    sub_760010
0x87D3A7: lea     eax, [esp+30h+var_10]
0x87D3AB: push    eax
0x87D3AC: call    sub_772630
0x87D3B1: add     esp, 4
0x87D3B4: push    eax
0x87D3B5: lea     ecx, [esp+34h+a3]
0x87D3B9: mov     byte ptr [esp+34h+var_4], 43h ; 'C'
0x87D3BE: call    sub_75FAE0
0x87D3C3: mov     eax, [esp+30h+var_10]
0x87D3C7: test    eax, eax
0x87D3C9: mov     byte ptr [esp+30h+var_4], 1
0x87D3CE: jz      short loc_87D3E3
0x87D3D0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D3D4: mov     ecx, eax
0x87D3D6: add     eax, 5Ch ; '\'
0x87D3D9: cmp     dword ptr [eax], 0
0x87D3DC: jnz     short loc_87D3E3
0x87D3DE: call    sub_772560
0x87D3E3: mov     edi, [esp+30h+a3]
0x87D3E7: push    2
0x87D3E9: push    1
0x87D3EB: push    1
0x87D3ED: push    edi
0x87D3EE: call    sub_801110
0x87D3F3: add     esp, 10h
0x87D3F6: push    edi; a3
0x87D3F7: push    1; a2
0x87D3F9: mov     ecx, esi; this
0x87D3FB: call    sub_760010
0x87D400: lea     ecx, [esp+30h+var_10]
0x87D404: push    ecx
0x87D405: call    sub_772630
0x87D40A: add     esp, 4
0x87D40D: push    eax
0x87D40E: lea     ecx, [esp+34h+a3]
0x87D412: mov     byte ptr [esp+34h+var_4], 44h ; 'D'
0x87D417: call    sub_75FAE0
0x87D41C: mov     eax, [esp+30h+var_10]
0x87D420: test    eax, eax
0x87D422: mov     byte ptr [esp+30h+var_4], 1
0x87D427: jz      short loc_87D43C
0x87D429: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D42D: mov     ecx, eax
0x87D42F: add     eax, 5Ch ; '\'
0x87D432: cmp     dword ptr [eax], 0
0x87D435: jnz     short loc_87D43C
0x87D437: call    sub_772560
0x87D43C: mov     edi, [esp+30h+a3]
0x87D440: push    2
0x87D442: push    1
0x87D444: push    2
0x87D446: push    edi
0x87D447: call    sub_801110
0x87D44C: add     esp, 10h
0x87D44F: push    edi; a3
0x87D450: push    2; a2
0x87D452: mov     ecx, esi; this
0x87D454: call    sub_760010
0x87D459: lea     edx, [esp+30h+var_10]
0x87D45D: push    edx
0x87D45E: call    sub_772630
0x87D463: add     esp, 4
0x87D466: push    eax
0x87D467: lea     ecx, [esp+34h+a3]
0x87D46B: mov     byte ptr [esp+34h+var_4], 45h ; 'E'
0x87D470: call    sub_75FAE0
0x87D475: mov     eax, [esp+30h+var_10]
0x87D479: test    eax, eax
0x87D47B: mov     byte ptr [esp+30h+var_4], 1
0x87D480: jz      short loc_87D495
0x87D482: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D486: mov     ecx, eax
0x87D488: add     eax, 5Ch ; '\'
0x87D48B: cmp     dword ptr [eax], 0
0x87D48E: jnz     short loc_87D495
0x87D490: call    sub_772560
0x87D495: mov     edi, [esp+30h+a3]
0x87D499: push    2
0x87D49B: push    1
0x87D49D: push    3
0x87D49F: push    edi
0x87D4A0: call    sub_801110
0x87D4A5: add     esp, 10h
0x87D4A8: push    edi; a3
0x87D4A9: push    3; a2
0x87D4AB: mov     ecx, esi; this
0x87D4AD: call    sub_760010
0x87D4B2: lea     eax, [esp+30h+var_10]
0x87D4B6: push    eax
0x87D4B7: call    sub_772630
0x87D4BC: add     esp, 4
0x87D4BF: push    eax
0x87D4C0: lea     ecx, [esp+34h+a3]
0x87D4C4: mov     byte ptr [esp+34h+var_4], 46h ; 'F'
0x87D4C9: call    sub_75FAE0
0x87D4CE: mov     eax, [esp+30h+var_10]
0x87D4D2: test    eax, eax
0x87D4D4: mov     byte ptr [esp+30h+var_4], 1
0x87D4D9: jz      short loc_87D4EE
0x87D4DB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D4DF: mov     ecx, eax
0x87D4E1: add     eax, 5Ch ; '\'
0x87D4E4: cmp     dword ptr [eax], 0
0x87D4E7: jnz     short loc_87D4EE
0x87D4E9: call    sub_772560
0x87D4EE: mov     edi, [esp+30h+a3]
0x87D4F2: push    2
0x87D4F4: push    1
0x87D4F6: push    4
0x87D4F8: push    edi
0x87D4F9: call    sub_801110
0x87D4FE: add     esp, 10h
0x87D501: push    edi; a3
0x87D502: push    4; a2
0x87D504: mov     ecx, esi; this
0x87D506: call    sub_760010
0x87D50B: lea     ecx, [esp+30h+var_10]
0x87D50F: push    ecx
0x87D510: call    sub_772630
0x87D515: add     esp, 4
0x87D518: push    eax
0x87D519: lea     ecx, [esp+34h+a3]
0x87D51D: mov     byte ptr [esp+34h+var_4], 47h ; 'G'
0x87D522: call    sub_75FAE0
0x87D527: mov     eax, [esp+30h+var_10]
0x87D52B: test    eax, eax
0x87D52D: mov     byte ptr [esp+30h+var_4], 1
0x87D532: jz      short loc_87D547
0x87D534: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D538: mov     ecx, eax
0x87D53A: add     eax, 5Ch ; '\'
0x87D53D: cmp     dword ptr [eax], 0
0x87D540: jnz     short loc_87D547
0x87D542: call    sub_772560
0x87D547: mov     edi, [esp+30h+a3]
0x87D54B: push    0
0x87D54D: push    3
0x87D54F: push    5
0x87D551: push    edi
0x87D552: call    sub_801110
0x87D557: mov     edx, ds:0B43110h
0x87D55D: add     esp, 10h
0x87D560: push    edx; a2
0x87D561: mov     ecx, edi; this
0x87D563: call    sub_76C910
0x87D568: push    edi; a3
0x87D569: push    5; a2
0x87D56B: mov     ecx, esi; this
0x87D56D: call    sub_760010
0x87D572: lea     eax, [esp+30h+var_10]
0x87D576: push    eax
0x87D577: call    sub_772630
0x87D57C: add     esp, 4
0x87D57F: push    eax
0x87D580: lea     ecx, [esp+34h+a3]
0x87D584: mov     byte ptr [esp+34h+var_4], 48h ; 'H'
0x87D589: call    sub_75FAE0
0x87D58E: mov     eax, [esp+30h+var_10]
0x87D592: test    eax, eax
0x87D594: mov     byte ptr [esp+30h+var_4], 1
0x87D599: jz      short loc_87D5AE
0x87D59B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D59F: mov     ecx, eax
0x87D5A1: add     eax, 5Ch ; '\'
0x87D5A4: cmp     dword ptr [eax], 0
0x87D5A7: jnz     short loc_87D5AE
0x87D5A9: call    sub_772560
0x87D5AE: mov     edi, [esp+30h+a3]
0x87D5B2: push    2
0x87D5B4: push    1
0x87D5B6: push    6
0x87D5B8: push    edi
0x87D5B9: call    sub_801110
0x87D5BE: add     esp, 10h
0x87D5C1: push    edi; a3
0x87D5C2: push    6; a2
0x87D5C4: mov     ecx, esi; this
0x87D5C6: call    sub_760010
0x87D5CB: lea     ecx, [esp+30h+var_10]
0x87D5CF: push    ecx
0x87D5D0: call    sub_772630
0x87D5D5: add     esp, 4
0x87D5D8: push    eax
0x87D5D9: lea     ecx, [esp+34h+a3]
0x87D5DD: mov     byte ptr [esp+34h+var_4], 49h ; 'I'
0x87D5E2: call    sub_75FAE0
0x87D5E7: mov     eax, [esp+30h+var_10]
0x87D5EB: test    eax, eax
0x87D5ED: mov     byte ptr [esp+30h+var_4], 1
0x87D5F2: jz      short loc_87D607
0x87D5F4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D5F8: mov     ecx, eax
0x87D5FA: add     eax, 5Ch ; '\'
0x87D5FD: cmp     dword ptr [eax], 0
0x87D600: jnz     short loc_87D607
0x87D602: call    sub_772560
0x87D607: mov     edi, [esp+30h+a3]
0x87D60B: push    0
0x87D60D: push    3
0x87D60F: push    7
0x87D611: push    edi
0x87D612: call    sub_801110
0x87D617: add     esp, 10h
0x87D61A: push    edi; a3
0x87D61B: push    7; a2
0x87D61D: mov     ecx, esi; this
0x87D61F: call    sub_760010
0x87D624: mov     edx, [esp+30h+var_14]
0x87D628: mov     eax, [edx+0A0h]
0x87D62E: push    eax; a2
0x87D62F: mov     ecx, esi; this
0x87D631: call    sub_7AECB0
0x87D636: mov     eax, [esp+30h+var_14]
0x87D63A: mov     eax, [eax+0ECh]
0x87D640: push    eax; a2
0x87D641: mov     ecx, esi; this
0x87D643: call    sub_7AEC60
0x87D648: cmp     dword ptr [esi+30h], 0
0x87D64C: jnz     short loc_87D656
0x87D64E: call    sub_772DF0
0x87D653: mov     [esi+30h], eax
0x87D656: mov     ecx, [esi+30h]
0x87D659: push    0
0x87D65B: push    0Fh
0x87D65D: push    0A8h ; '¨'
0x87D662: call    sub_772CD0
0x87D667: cmp     dword ptr [esi+30h], 0
0x87D66B: jnz     short loc_87D675
0x87D66D: call    sub_772DF0
0x87D672: mov     [esi+30h], eax
0x87D675: mov     ecx, [esi+30h]
0x87D678: push    0
0x87D67A: push    0
0x87D67C: push    1Bh
0x87D67E: call    sub_772CD0
0x87D683: cmp     dword ptr [esi+30h], 0
0x87D687: jnz     short loc_87D691
0x87D689: call    sub_772DF0
0x87D68E: mov     [esi+30h], eax
0x87D691: mov     ecx, [esi+30h]
0x87D694: push    0
0x87D696: push    0
0x87D698: push    0Fh
0x87D69A: call    sub_772CD0
0x87D69F: cmp     dword ptr [esi+30h], 0
0x87D6A3: jnz     short loc_87D6AD
0x87D6A5: call    sub_772DF0
0x87D6AA: mov     [esi+30h], eax
0x87D6AD: mov     ecx, [esi+30h]
0x87D6B0: push    0
0x87D6B2: push    1
0x87D6B4: push    7
0x87D6B6: call    sub_772CD0
0x87D6BB: cmp     dword ptr [esi+30h], 0
0x87D6BF: jnz     short loc_87D6C9
0x87D6C1: call    sub_772DF0
0x87D6C6: mov     [esi+30h], eax
0x87D6C9: mov     ecx, [esi+30h]
0x87D6CC: push    0
0x87D6CE: push    4
0x87D6D0: push    17h
0x87D6D2: call    sub_772CD0
0x87D6D7: cmp     dword ptr [esi+30h], 0
0x87D6DB: jnz     short loc_87D6E5
0x87D6DD: call    sub_772DF0
0x87D6E2: mov     [esi+30h], eax
0x87D6E5: mov     ecx, [esi+30h]
0x87D6E8: push    0
0x87D6EA: push    1
0x87D6EC: push    0Eh
0x87D6EE: call    sub_772CD0
0x87D6F3: cmp     dword ptr [esi+30h], 0
0x87D6F7: jnz     short loc_87D701
0x87D6F9: call    sub_772DF0
0x87D6FE: mov     [esi+30h], eax
0x87D701: mov     ecx, [esi+30h]
0x87D704: push    0
0x87D706: push    0
0x87D708: push    34h ; '4'
0x87D70A: call    sub_772CD0
0x87D70F: cmp     esi, ds:0B47740h
0x87D715: mov     dword ptr ds:0B43D1Ch, 78088h
0x87D71F: mov     ds:0B443ACh, ebp
0x87D725: jz      short loc_87D746
0x87D727: add     dword ptr [esi+60h], 0FFFFFFFFh
0x87D72B: jnz     short loc_87D734
0x87D72D: mov     ecx, esi
0x87D72F: call    sub_7604D0
0x87D734: mov     esi, ds:0B47740h
0x87D73A: test    esi, esi
0x87D73C: mov     [esp+30h+var_18], esi
0x87D740: jz      short loc_87D746
0x87D742: add     dword ptr [esi+60h], 1
0x87D746: cmp     [esi+18h], ebx
0x87D749: jnb     loc_87DA25
0x87D74F: lea     ecx, [esp+30h+var_10]
0x87D753: push    ecx
0x87D754: call    sub_772630
0x87D759: add     esp, 4
0x87D75C: push    eax
0x87D75D: lea     ecx, [esp+34h+a3]
0x87D761: mov     byte ptr [esp+34h+var_4], 4Ah ; 'J'
0x87D766: call    sub_75FAE0
0x87D76B: mov     eax, [esp+30h+var_10]
0x87D76F: test    eax, eax
0x87D771: mov     byte ptr [esp+30h+var_4], 1
0x87D776: jz      short loc_87D78B
0x87D778: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D77C: mov     ecx, eax
0x87D77E: add     eax, 5Ch ; '\'
0x87D781: cmp     dword ptr [eax], 0
0x87D784: jnz     short loc_87D78B
0x87D786: call    sub_772560
0x87D78B: mov     edi, [esp+30h+a3]
0x87D78F: push    2
0x87D791: push    1
0x87D793: push    0
0x87D795: push    edi
0x87D796: call    sub_801110
0x87D79B: add     esp, 10h
0x87D79E: push    edi; a3
0x87D79F: push    0; a2
0x87D7A1: mov     ecx, esi; this
0x87D7A3: call    sub_760010
0x87D7A8: lea     edx, [esp+30h+var_10]
0x87D7AC: push    edx
0x87D7AD: call    sub_772630
0x87D7B2: add     esp, 4
0x87D7B5: push    eax
0x87D7B6: lea     ecx, [esp+34h+a3]
0x87D7BA: mov     byte ptr [esp+34h+var_4], 4Bh ; 'K'
0x87D7BF: call    sub_75FAE0
0x87D7C4: mov     eax, [esp+30h+var_10]
0x87D7C8: test    eax, eax
0x87D7CA: mov     byte ptr [esp+30h+var_4], 1
0x87D7CF: jz      short loc_87D7E4
0x87D7D1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D7D5: mov     ecx, eax
0x87D7D7: add     eax, 5Ch ; '\'
0x87D7DA: cmp     dword ptr [eax], 0
0x87D7DD: jnz     short loc_87D7E4
0x87D7DF: call    sub_772560
0x87D7E4: mov     edi, [esp+30h+a3]
0x87D7E8: push    2
0x87D7EA: push    1
0x87D7EC: push    1
0x87D7EE: push    edi
0x87D7EF: call    sub_801110
0x87D7F4: add     esp, 10h
0x87D7F7: push    edi; a3
0x87D7F8: push    1; a2
0x87D7FA: mov     ecx, esi; this
0x87D7FC: call    sub_760010
0x87D801: lea     eax, [esp+30h+var_10]
0x87D805: push    eax
0x87D806: call    sub_772630
0x87D80B: add     esp, 4
0x87D80E: push    eax
0x87D80F: lea     ecx, [esp+34h+a3]
0x87D813: mov     byte ptr [esp+34h+var_4], 4Ch ; 'L'
0x87D818: call    sub_75FAE0
0x87D81D: mov     eax, [esp+30h+var_10]
0x87D821: test    eax, eax
0x87D823: mov     byte ptr [esp+30h+var_4], 1
0x87D828: jz      short loc_87D83D
0x87D82A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D82E: mov     ecx, eax
0x87D830: add     eax, 5Ch ; '\'
0x87D833: cmp     dword ptr [eax], 0
0x87D836: jnz     short loc_87D83D
0x87D838: call    sub_772560
0x87D83D: mov     edi, [esp+30h+a3]
0x87D841: push    2
0x87D843: push    1
0x87D845: push    2
0x87D847: push    edi
0x87D848: call    sub_801110
0x87D84D: add     esp, 10h
0x87D850: push    edi; a3
0x87D851: push    2; a2
0x87D853: mov     ecx, esi; this
0x87D855: call    sub_760010
0x87D85A: lea     ecx, [esp+30h+var_10]
0x87D85E: push    ecx
0x87D85F: call    sub_772630
0x87D864: add     esp, 4
0x87D867: push    eax
0x87D868: lea     ecx, [esp+34h+a3]
0x87D86C: mov     byte ptr [esp+34h+var_4], 4Dh ; 'M'
0x87D871: call    sub_75FAE0
0x87D876: mov     eax, [esp+30h+var_10]
0x87D87A: test    eax, eax
0x87D87C: mov     byte ptr [esp+30h+var_4], 1
0x87D881: jz      short loc_87D896
0x87D883: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D887: mov     ecx, eax
0x87D889: add     eax, 5Ch ; '\'
0x87D88C: cmp     dword ptr [eax], 0
0x87D88F: jnz     short loc_87D896
0x87D891: call    sub_772560
0x87D896: mov     edi, [esp+30h+a3]
0x87D89A: push    2
0x87D89C: push    1
0x87D89E: push    3
0x87D8A0: push    edi
0x87D8A1: call    sub_801110
0x87D8A6: add     esp, 10h
0x87D8A9: push    edi; a3
0x87D8AA: push    3; a2
0x87D8AC: mov     ecx, esi; this
0x87D8AE: call    sub_760010
0x87D8B3: lea     edx, [esp+30h+var_10]
0x87D8B7: push    edx
0x87D8B8: call    sub_772630
0x87D8BD: add     esp, 4
0x87D8C0: push    eax
0x87D8C1: lea     ecx, [esp+34h+a3]
0x87D8C5: mov     byte ptr [esp+34h+var_4], 4Eh ; 'N'
0x87D8CA: call    sub_75FAE0
0x87D8CF: mov     eax, [esp+30h+var_10]
0x87D8D3: test    eax, eax
0x87D8D5: mov     byte ptr [esp+30h+var_4], 1
0x87D8DA: jz      short loc_87D8EF
0x87D8DC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D8E0: mov     ecx, eax
0x87D8E2: add     eax, 5Ch ; '\'
0x87D8E5: cmp     dword ptr [eax], 0
0x87D8E8: jnz     short loc_87D8EF
0x87D8EA: call    sub_772560
0x87D8EF: mov     edi, [esp+30h+a3]
0x87D8F3: push    2
0x87D8F5: push    1
0x87D8F7: push    4
0x87D8F9: push    edi
0x87D8FA: call    sub_801110
0x87D8FF: add     esp, 10h
0x87D902: push    edi; a3
0x87D903: push    4; a2
0x87D905: mov     ecx, esi; this
0x87D907: call    sub_760010
0x87D90C: lea     eax, [esp+30h+var_10]
0x87D910: push    eax
0x87D911: call    sub_772630
0x87D916: add     esp, 4
0x87D919: push    eax
0x87D91A: lea     ecx, [esp+34h+a3]
0x87D91E: mov     byte ptr [esp+34h+var_4], 4Fh ; 'O'
0x87D923: call    sub_75FAE0
0x87D928: mov     eax, [esp+30h+var_10]
0x87D92C: test    eax, eax
0x87D92E: mov     byte ptr [esp+30h+var_4], 1
0x87D933: jz      short loc_87D948
0x87D935: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D939: mov     ecx, eax
0x87D93B: add     eax, 5Ch ; '\'
0x87D93E: cmp     dword ptr [eax], 0
0x87D941: jnz     short loc_87D948
0x87D943: call    sub_772560
0x87D948: mov     edi, [esp+30h+a3]
0x87D94C: push    0
0x87D94E: push    3
0x87D950: push    5
0x87D952: push    edi
0x87D953: call    sub_801110
0x87D958: mov     ecx, ds:0B43110h
0x87D95E: add     esp, 10h
0x87D961: push    ecx; a2
0x87D962: mov     ecx, edi; this
0x87D964: call    sub_76C910
0x87D969: push    edi; a3
0x87D96A: push    5; a2
0x87D96C: mov     ecx, esi; this
0x87D96E: call    sub_760010
0x87D973: lea     edx, [esp+30h+var_10]
0x87D977: push    edx
0x87D978: call    sub_772630
0x87D97D: add     esp, 4
0x87D980: push    eax
0x87D981: lea     ecx, [esp+34h+a3]
0x87D985: mov     byte ptr [esp+34h+var_4], 50h ; 'P'
0x87D98A: call    sub_75FAE0
0x87D98F: mov     eax, [esp+30h+var_10]
0x87D993: test    eax, eax
0x87D995: mov     byte ptr [esp+30h+var_4], 1
0x87D99A: jz      short loc_87D9AF
0x87D99C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D9A0: mov     ecx, eax
0x87D9A2: add     eax, 5Ch ; '\'
0x87D9A5: cmp     dword ptr [eax], 0
0x87D9A8: jnz     short loc_87D9AF
0x87D9AA: call    sub_772560
0x87D9AF: mov     edi, [esp+30h+a3]
0x87D9B3: push    2
0x87D9B5: push    1
0x87D9B7: push    6
0x87D9B9: push    edi
0x87D9BA: call    sub_801110
0x87D9BF: add     esp, 10h
0x87D9C2: push    edi; a3
0x87D9C3: push    6; a2
0x87D9C5: mov     ecx, esi; this
0x87D9C7: call    sub_760010
0x87D9CC: lea     eax, [esp+30h+var_10]
0x87D9D0: push    eax
0x87D9D1: call    sub_772630
0x87D9D6: add     esp, 4
0x87D9D9: push    eax
0x87D9DA: lea     ecx, [esp+34h+a3]
0x87D9DE: mov     byte ptr [esp+34h+var_4], 51h ; 'Q'
0x87D9E3: call    sub_75FAE0
0x87D9E8: mov     eax, [esp+30h+var_10]
0x87D9EC: test    eax, eax
0x87D9EE: mov     byte ptr [esp+30h+var_4], 1
0x87D9F3: jz      short loc_87DA08
0x87D9F5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87D9F9: mov     ecx, eax
0x87D9FB: add     eax, 5Ch ; '\'
0x87D9FE: cmp     dword ptr [eax], 0
0x87DA01: jnz     short loc_87DA08
0x87DA03: call    sub_772560
0x87DA08: mov     edi, [esp+30h+a3]
0x87DA0C: push    0
0x87DA0E: push    3
0x87DA10: push    7
0x87DA12: push    edi
0x87DA13: call    sub_801110
0x87DA18: add     esp, 10h
0x87DA1B: push    edi; a3
0x87DA1C: push    7; a2
0x87DA1E: mov     ecx, esi; this
0x87DA20: call    sub_760010
0x87DA25: mov     ecx, [esp+30h+var_14]
0x87DA29: mov     eax, [ecx+0A4h]
0x87DA2F: push    eax; a2
0x87DA30: mov     ecx, esi; this
0x87DA32: call    sub_7AECB0
0x87DA37: mov     edx, [esp+30h+var_14]
0x87DA3B: mov     eax, [edx+0F0h]
0x87DA41: push    eax; a2
0x87DA42: mov     ecx, esi; this
0x87DA44: call    sub_7AEC60
0x87DA49: cmp     dword ptr [esi+30h], 0
0x87DA4D: jnz     short loc_87DA57
0x87DA4F: call    sub_772DF0
0x87DA54: mov     [esi+30h], eax
0x87DA57: mov     ecx, [esi+30h]
0x87DA5A: push    0
0x87DA5C: push    0Fh
0x87DA5E: push    0A8h ; '¨'
0x87DA63: call    sub_772CD0
0x87DA68: cmp     dword ptr [esi+30h], 0
0x87DA6C: jnz     short loc_87DA76
0x87DA6E: call    sub_772DF0
0x87DA73: mov     [esi+30h], eax
0x87DA76: mov     ecx, [esi+30h]
0x87DA79: push    0
0x87DA7B: push    0
0x87DA7D: push    1Bh
0x87DA7F: call    sub_772CD0
0x87DA84: cmp     dword ptr [esi+30h], 0
0x87DA88: jnz     short loc_87DA92
0x87DA8A: call    sub_772DF0
0x87DA8F: mov     [esi+30h], eax
0x87DA92: mov     ecx, [esi+30h]
0x87DA95: push    0
0x87DA97: push    0
0x87DA99: push    0Fh
0x87DA9B: call    sub_772CD0
0x87DAA0: cmp     dword ptr [esi+30h], 0
0x87DAA4: jnz     short loc_87DAAE
0x87DAA6: call    sub_772DF0
0x87DAAB: mov     [esi+30h], eax
0x87DAAE: mov     ecx, [esi+30h]
0x87DAB1: push    0
0x87DAB3: push    1
0x87DAB5: push    7
0x87DAB7: call    sub_772CD0
0x87DABC: cmp     dword ptr [esi+30h], 0
0x87DAC0: jnz     short loc_87DACA
0x87DAC2: call    sub_772DF0
0x87DAC7: mov     [esi+30h], eax
0x87DACA: mov     ecx, [esi+30h]
0x87DACD: push    0
0x87DACF: push    4
0x87DAD1: push    17h
0x87DAD3: call    sub_772CD0
0x87DAD8: cmp     dword ptr [esi+30h], 0
0x87DADC: jnz     short loc_87DAE6
0x87DADE: call    sub_772DF0
0x87DAE3: mov     [esi+30h], eax
0x87DAE6: mov     ecx, [esi+30h]
0x87DAE9: push    0
0x87DAEB: push    1
0x87DAED: push    0Eh
0x87DAEF: call    sub_772CD0
0x87DAF4: cmp     dword ptr [esi+30h], 0
0x87DAF8: jnz     short loc_87DB02
0x87DAFA: call    sub_772DF0
0x87DAFF: mov     [esi+30h], eax
0x87DB02: mov     ecx, [esi+30h]
0x87DB05: push    0
0x87DB07: push    0
0x87DB09: push    34h ; '4'
0x87DB0B: call    sub_772CD0
0x87DB10: cmp     esi, ds:0B47744h
0x87DB16: mov     dword ptr ds:0B43D3Ch, 380F2h
0x87DB20: mov     ds:0B443CCh, ebp
0x87DB26: jz      short loc_87DB47
0x87DB28: add     dword ptr [esi+60h], 0FFFFFFFFh
0x87DB2C: jnz     short loc_87DB35
0x87DB2E: mov     ecx, esi
0x87DB30: call    sub_7604D0
0x87DB35: mov     esi, ds:0B47744h
0x87DB3B: test    esi, esi
0x87DB3D: mov     [esp+30h+var_18], esi
0x87DB41: jz      short loc_87DB47
0x87DB43: add     dword ptr [esi+60h], 1
0x87DB47: cmp     [esi+18h], ebx
0x87DB4A: jnb     loc_87DE25
0x87DB50: lea     eax, [esp+30h+var_10]
0x87DB54: push    eax
0x87DB55: call    sub_772630
0x87DB5A: add     esp, 4
0x87DB5D: push    eax
0x87DB5E: lea     ecx, [esp+34h+a3]
0x87DB62: mov     byte ptr [esp+34h+var_4], 52h ; 'R'
0x87DB67: call    sub_75FAE0
0x87DB6C: mov     eax, [esp+30h+var_10]
0x87DB70: test    eax, eax
0x87DB72: mov     byte ptr [esp+30h+var_4], 1
0x87DB77: jz      short loc_87DB8C
0x87DB79: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87DB7D: mov     ecx, eax
0x87DB7F: add     eax, 5Ch ; '\'
0x87DB82: cmp     dword ptr [eax], 0
0x87DB85: jnz     short loc_87DB8C
0x87DB87: call    sub_772560
0x87DB8C: mov     edi, [esp+30h+a3]
0x87DB90: push    2
0x87DB92: push    1
0x87DB94: push    0
0x87DB96: push    edi
0x87DB97: call    sub_801110
0x87DB9C: add     esp, 10h
0x87DB9F: push    edi; a3
0x87DBA0: push    0; a2
0x87DBA2: mov     ecx, esi; this
0x87DBA4: call    sub_760010
0x87DBA9: lea     ecx, [esp+30h+var_10]
0x87DBAD: push    ecx
0x87DBAE: call    sub_772630
0x87DBB3: add     esp, 4
0x87DBB6: push    eax
0x87DBB7: lea     ecx, [esp+34h+a3]
0x87DBBB: mov     byte ptr [esp+34h+var_4], 53h ; 'S'
0x87DBC0: call    sub_75FAE0
0x87DBC5: mov     eax, [esp+30h+var_10]
0x87DBC9: test    eax, eax
0x87DBCB: mov     byte ptr [esp+30h+var_4], 1
0x87DBD0: jz      short loc_87DBE5
0x87DBD2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87DBD6: mov     ecx, eax
0x87DBD8: add     eax, 5Ch ; '\'
0x87DBDB: cmp     dword ptr [eax], 0
0x87DBDE: jnz     short loc_87DBE5
0x87DBE0: call    sub_772560
0x87DBE5: mov     edi, [esp+30h+a3]
0x87DBE9: push    2
0x87DBEB: push    1
0x87DBED: push    1
0x87DBEF: push    edi
0x87DBF0: call    sub_801110
0x87DBF5: add     esp, 10h
0x87DBF8: push    edi; a3
0x87DBF9: push    1; a2
0x87DBFB: mov     ecx, esi; this
0x87DBFD: call    sub_760010
0x87DC02: lea     edx, [esp+30h+var_10]
0x87DC06: push    edx
0x87DC07: call    sub_772630
0x87DC0C: add     esp, 4
0x87DC0F: push    eax
0x87DC10: lea     ecx, [esp+34h+a3]
0x87DC14: mov     byte ptr [esp+34h+var_4], 54h ; 'T'
0x87DC19: call    sub_75FAE0
0x87DC1E: mov     eax, [esp+30h+var_10]
0x87DC22: test    eax, eax
0x87DC24: mov     byte ptr [esp+30h+var_4], 1
0x87DC29: jz      short loc_87DC3E
0x87DC2B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87DC2F: mov     ecx, eax
0x87DC31: add     eax, 5Ch ; '\'
0x87DC34: cmp     dword ptr [eax], 0
0x87DC37: jnz     short loc_87DC3E
0x87DC39: call    sub_772560
0x87DC3E: mov     edi, [esp+30h+a3]
0x87DC42: push    2
0x87DC44: push    1
0x87DC46: push    2
0x87DC48: push    edi
0x87DC49: call    sub_801110
0x87DC4E: add     esp, 10h
0x87DC51: push    edi; a3
0x87DC52: push    2; a2
0x87DC54: mov     ecx, esi; this
0x87DC56: call    sub_760010
0x87DC5B: lea     eax, [esp+30h+var_10]
0x87DC5F: push    eax
0x87DC60: call    sub_772630
0x87DC65: add     esp, 4
0x87DC68: push    eax
0x87DC69: lea     ecx, [esp+34h+a3]
0x87DC6D: mov     byte ptr [esp+34h+var_4], 55h ; 'U'
0x87DC72: call    sub_75FAE0
0x87DC77: mov     eax, [esp+30h+var_10]
0x87DC7B: test    eax, eax
0x87DC7D: mov     byte ptr [esp+30h+var_4], 1
0x87DC82: jz      short loc_87DC97
0x87DC84: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87DC88: mov     ecx, eax
0x87DC8A: add     eax, 5Ch ; '\'
0x87DC8D: cmp     dword ptr [eax], 0
0x87DC90: jnz     short loc_87DC97
0x87DC92: call    sub_772560
0x87DC97: mov     edi, [esp+30h+a3]
0x87DC9B: push    2
0x87DC9D: push    1
0x87DC9F: push    3
0x87DCA1: push    edi
0x87DCA2: call    sub_801110
0x87DCA7: add     esp, 10h
0x87DCAA: push    edi; a3
0x87DCAB: push    3; a2
0x87DCAD: mov     ecx, esi; this
0x87DCAF: call    sub_760010
0x87DCB4: lea     ecx, [esp+30h+var_10]
0x87DCB8: push    ecx
0x87DCB9: call    sub_772630
0x87DCBE: add     esp, 4
0x87DCC1: push    eax
0x87DCC2: lea     ecx, [esp+34h+a3]
0x87DCC6: mov     byte ptr [esp+34h+var_4], 56h ; 'V'
0x87DCCB: call    sub_75FAE0
0x87DCD0: mov     eax, [esp+30h+var_10]
0x87DCD4: test    eax, eax
0x87DCD6: mov     byte ptr [esp+30h+var_4], 1
0x87DCDB: jz      short loc_87DCF0
0x87DCDD: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87DCE1: mov     ecx, eax
0x87DCE3: add     eax, 5Ch ; '\'
0x87DCE6: cmp     dword ptr [eax], 0
0x87DCE9: jnz     short loc_87DCF0
0x87DCEB: call    sub_772560
0x87DCF0: mov     edi, [esp+30h+a3]
0x87DCF4: push    2
0x87DCF6: push    1
0x87DCF8: push    4
0x87DCFA: push    edi
0x87DCFB: call    sub_801110
0x87DD00: add     esp, 10h
0x87DD03: push    edi; a3
0x87DD04: push    4; a2
0x87DD06: mov     ecx, esi; this
0x87DD08: call    sub_760010
0x87DD0D: lea     edx, [esp+30h+var_10]
0x87DD11: push    edx
0x87DD12: call    sub_772630
0x87DD17: add     esp, 4
0x87DD1A: push    eax
0x87DD1B: lea     ecx, [esp+34h+a3]
0x87DD1F: mov     byte ptr [esp+34h+var_4], 57h ; 'W'
0x87DD24: call    sub_75FAE0
0x87DD29: mov     eax, [esp+30h+var_10]
0x87DD2D: test    eax, eax
0x87DD2F: mov     byte ptr [esp+30h+var_4], 1
0x87DD34: jz      short loc_87DD49
0x87DD36: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87DD3A: mov     ecx, eax
0x87DD3C: add     eax, 5Ch ; '\'
0x87DD3F: cmp     dword ptr [eax], 0
0x87DD42: jnz     short loc_87DD49
0x87DD44: call    sub_772560
0x87DD49: mov     edi, [esp+30h+a3]
0x87DD4D: push    0
0x87DD4F: push    3
0x87DD51: push    5
0x87DD53: push    edi
0x87DD54: call    sub_801110
0x87DD59: mov     eax, ds:0B43110h
0x87DD5E: add     esp, 10h
0x87DD61: push    eax; a2
0x87DD62: mov     ecx, edi; this
0x87DD64: call    sub_76C910
0x87DD69: push    edi; a3
0x87DD6A: push    5; a2
0x87DD6C: mov     ecx, esi; this
0x87DD6E: call    sub_760010
0x87DD73: lea     ecx, [esp+30h+var_10]
0x87DD77: push    ecx
0x87DD78: call    sub_772630
0x87DD7D: add     esp, 4
0x87DD80: push    eax
0x87DD81: lea     ecx, [esp+34h+a3]
0x87DD85: mov     byte ptr [esp+34h+var_4], 58h ; 'X'
0x87DD8A: call    sub_75FAE0
0x87DD8F: mov     eax, [esp+30h+var_10]
0x87DD93: test    eax, eax
0x87DD95: mov     byte ptr [esp+30h+var_4], 1
0x87DD9A: jz      short loc_87DDAF
0x87DD9C: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87DDA0: mov     ecx, eax
0x87DDA2: add     eax, 5Ch ; '\'
0x87DDA5: cmp     dword ptr [eax], 0
0x87DDA8: jnz     short loc_87DDAF
0x87DDAA: call    sub_772560
0x87DDAF: mov     edi, [esp+30h+a3]
0x87DDB3: push    2
0x87DDB5: push    1
0x87DDB7: push    6
0x87DDB9: push    edi
0x87DDBA: call    sub_801110
0x87DDBF: add     esp, 10h
0x87DDC2: push    edi; a3
0x87DDC3: push    6; a2
0x87DDC5: mov     ecx, esi; this
0x87DDC7: call    sub_760010
0x87DDCC: lea     edx, [esp+30h+var_10]
0x87DDD0: push    edx
0x87DDD1: call    sub_772630
0x87DDD6: add     esp, 4
0x87DDD9: push    eax
0x87DDDA: lea     ecx, [esp+34h+a3]
0x87DDDE: mov     byte ptr [esp+34h+var_4], 59h ; 'Y'
0x87DDE3: call    sub_75FAE0
0x87DDE8: mov     eax, [esp+30h+var_10]
0x87DDEC: test    eax, eax
0x87DDEE: mov     byte ptr [esp+30h+var_4], 1
0x87DDF3: jz      short loc_87DE08
0x87DDF5: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87DDF9: mov     ecx, eax
0x87DDFB: add     eax, 5Ch ; '\'
0x87DDFE: cmp     dword ptr [eax], 0
0x87DE01: jnz     short loc_87DE08
0x87DE03: call    sub_772560
0x87DE08: mov     edi, [esp+30h+a3]
0x87DE0C: push    0
0x87DE0E: push    3
0x87DE10: push    7
0x87DE12: push    edi
0x87DE13: call    sub_801110
0x87DE18: add     esp, 10h
0x87DE1B: push    edi; a3
0x87DE1C: push    7; a2
0x87DE1E: mov     ecx, esi; this
0x87DE20: call    sub_760010
0x87DE25: mov     eax, [esp+30h+var_14]
0x87DE29: mov     eax, [eax+0A8h]
0x87DE2F: push    eax; a2
0x87DE30: mov     ecx, esi; this
0x87DE32: call    sub_7AECB0
0x87DE37: mov     ecx, [esp+30h+var_14]
0x87DE3B: mov     eax, [ecx+0F0h]
0x87DE41: push    eax; a2
0x87DE42: mov     ecx, esi; this
0x87DE44: call    sub_7AEC60
0x87DE49: cmp     dword ptr [esi+30h], 0
0x87DE4D: jnz     short loc_87DE57
0x87DE4F: call    sub_772DF0
0x87DE54: mov     [esi+30h], eax
0x87DE57: mov     ecx, [esi+30h]
0x87DE5A: push    0
0x87DE5C: push    0Fh
0x87DE5E: push    0A8h ; '¨'
0x87DE63: call    sub_772CD0
0x87DE68: cmp     dword ptr [esi+30h], 0
0x87DE6C: jnz     short loc_87DE76
0x87DE6E: call    sub_772DF0
0x87DE73: mov     [esi+30h], eax
0x87DE76: mov     ecx, [esi+30h]
0x87DE79: push    0
0x87DE7B: push    0
0x87DE7D: push    1Bh
0x87DE7F: call    sub_772CD0
0x87DE84: cmp     dword ptr [esi+30h], 0
0x87DE88: jnz     short loc_87DE92
0x87DE8A: call    sub_772DF0
0x87DE8F: mov     [esi+30h], eax
0x87DE92: mov     ecx, [esi+30h]
0x87DE95: push    0
0x87DE97: push    0
0x87DE99: push    0Fh
0x87DE9B: call    sub_772CD0
0x87DEA0: cmp     dword ptr [esi+30h], 0
0x87DEA4: jnz     short loc_87DEAE
0x87DEA6: call    sub_772DF0
0x87DEAB: mov     [esi+30h], eax
0x87DEAE: mov     ecx, [esi+30h]
0x87DEB1: push    0
0x87DEB3: push    1
0x87DEB5: push    7
0x87DEB7: call    sub_772CD0
0x87DEBC: cmp     dword ptr [esi+30h], 0
0x87DEC0: jnz     short loc_87DECA
0x87DEC2: call    sub_772DF0
0x87DEC7: mov     [esi+30h], eax
0x87DECA: mov     ecx, [esi+30h]
0x87DECD: push    0
0x87DECF: push    4
0x87DED1: push    17h
0x87DED3: call    sub_772CD0
0x87DED8: cmp     dword ptr [esi+30h], 0
0x87DEDC: jnz     short loc_87DEE6
0x87DEDE: call    sub_772DF0
0x87DEE3: mov     [esi+30h], eax
0x87DEE6: mov     ecx, [esi+30h]
0x87DEE9: push    0
0x87DEEB: push    1
0x87DEED: push    0Eh
0x87DEEF: call    sub_772CD0
0x87DEF4: cmp     dword ptr [esi+30h], 0
0x87DEF8: jnz     short loc_87DF02
0x87DEFA: call    sub_772DF0
0x87DEFF: mov     [esi+30h], eax
0x87DF02: mov     ecx, [esi+30h]
0x87DF05: push    0
0x87DF07: push    0
0x87DF09: push    34h ; '4'
0x87DF0B: call    sub_772CD0
0x87DF10: cmp     esi, ds:0B47748h
0x87DF16: mov     dword ptr ds:0B43D54h, 780F8h
0x87DF20: mov     ds:0B443E4h, ebp
0x87DF26: jz      short loc_87DF47
0x87DF28: add     dword ptr [esi+60h], 0FFFFFFFFh
0x87DF2C: jnz     short loc_87DF35
0x87DF2E: mov     ecx, esi
0x87DF30: call    sub_7604D0
0x87DF35: mov     esi, ds:0B47748h
0x87DF3B: test    esi, esi
0x87DF3D: mov     [esp+30h+var_18], esi
0x87DF41: jz      short loc_87DF47
0x87DF43: add     dword ptr [esi+60h], 1
0x87DF47: cmp     [esi+18h], ebx
0x87DF4A: jnb     loc_87E226
0x87DF50: lea     edx, [esp+30h+var_10]
0x87DF54: push    edx
0x87DF55: call    sub_772630
0x87DF5A: add     esp, 4
0x87DF5D: push    eax
0x87DF5E: lea     ecx, [esp+34h+a3]
0x87DF62: mov     byte ptr [esp+34h+var_4], 5Ah ; 'Z'
0x87DF67: call    sub_75FAE0
0x87DF6C: mov     eax, [esp+30h+var_10]
0x87DF70: test    eax, eax
0x87DF72: mov     byte ptr [esp+30h+var_4], 1
0x87DF77: jz      short loc_87DF8C
0x87DF79: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87DF7D: mov     ecx, eax
0x87DF7F: add     eax, 5Ch ; '\'
0x87DF82: cmp     dword ptr [eax], 0
0x87DF85: jnz     short loc_87DF8C
0x87DF87: call    sub_772560
0x87DF8C: mov     edi, [esp+30h+a3]
0x87DF90: push    2
0x87DF92: push    1
0x87DF94: push    0
0x87DF96: push    edi
0x87DF97: call    sub_801110
0x87DF9C: add     esp, 10h
0x87DF9F: push    edi; a3
0x87DFA0: push    0; a2
0x87DFA2: mov     ecx, esi; this
0x87DFA4: call    sub_760010
0x87DFA9: lea     eax, [esp+30h+var_10]
0x87DFAD: push    eax
0x87DFAE: call    sub_772630
0x87DFB3: add     esp, 4
0x87DFB6: push    eax
0x87DFB7: lea     ecx, [esp+34h+a3]
0x87DFBB: mov     byte ptr [esp+34h+var_4], 5Bh ; '['
0x87DFC0: call    sub_75FAE0
0x87DFC5: mov     eax, [esp+30h+var_10]
0x87DFC9: test    eax, eax
0x87DFCB: mov     byte ptr [esp+30h+var_4], 1
0x87DFD0: jz      short loc_87DFE5
0x87DFD2: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87DFD6: mov     ecx, eax
0x87DFD8: add     eax, 5Ch ; '\'
0x87DFDB: cmp     dword ptr [eax], 0
0x87DFDE: jnz     short loc_87DFE5
0x87DFE0: call    sub_772560
0x87DFE5: mov     edi, [esp+30h+a3]
0x87DFE9: push    2
0x87DFEB: push    1
0x87DFED: push    1
0x87DFEF: push    edi
0x87DFF0: call    sub_801110
0x87DFF5: add     esp, 10h
0x87DFF8: push    edi; a3
0x87DFF9: push    1; a2
0x87DFFB: mov     ecx, esi; this
0x87DFFD: call    sub_760010
0x87E002: lea     ecx, [esp+30h+var_10]
0x87E006: push    ecx
0x87E007: call    sub_772630
0x87E00C: add     esp, 4
0x87E00F: push    eax
0x87E010: lea     ecx, [esp+34h+a3]
0x87E014: mov     byte ptr [esp+34h+var_4], 5Ch ; '\'
0x87E019: call    sub_75FAE0
0x87E01E: mov     eax, [esp+30h+var_10]
0x87E022: test    eax, eax
0x87E024: mov     byte ptr [esp+30h+var_4], 1
0x87E029: jz      short loc_87E03E
0x87E02B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E02F: mov     ecx, eax
0x87E031: add     eax, 5Ch ; '\'
0x87E034: cmp     dword ptr [eax], 0
0x87E037: jnz     short loc_87E03E
0x87E039: call    sub_772560
0x87E03E: mov     edi, [esp+30h+a3]
0x87E042: push    2
0x87E044: push    1
0x87E046: push    2
0x87E048: push    edi
0x87E049: call    sub_801110
0x87E04E: add     esp, 10h
0x87E051: push    edi; a3
0x87E052: push    2; a2
0x87E054: mov     ecx, esi; this
0x87E056: call    sub_760010
0x87E05B: lea     edx, [esp+30h+var_10]
0x87E05F: push    edx
0x87E060: call    sub_772630
0x87E065: add     esp, 4
0x87E068: push    eax
0x87E069: lea     ecx, [esp+34h+a3]
0x87E06D: mov     byte ptr [esp+34h+var_4], 5Dh ; ']'
0x87E072: call    sub_75FAE0
0x87E077: mov     eax, [esp+30h+var_10]
0x87E07B: test    eax, eax
0x87E07D: mov     byte ptr [esp+30h+var_4], 1
0x87E082: jz      short loc_87E097
0x87E084: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E088: mov     ecx, eax
0x87E08A: add     eax, 5Ch ; '\'
0x87E08D: cmp     dword ptr [eax], 0
0x87E090: jnz     short loc_87E097
0x87E092: call    sub_772560
0x87E097: mov     edi, [esp+30h+a3]
0x87E09B: push    2
0x87E09D: push    1
0x87E09F: push    3
0x87E0A1: push    edi
0x87E0A2: call    sub_801110
0x87E0A7: add     esp, 10h
0x87E0AA: push    edi; a3
0x87E0AB: push    3; a2
0x87E0AD: mov     ecx, esi; this
0x87E0AF: call    sub_760010
0x87E0B4: lea     eax, [esp+30h+var_10]
0x87E0B8: push    eax
0x87E0B9: call    sub_772630
0x87E0BE: add     esp, 4
0x87E0C1: push    eax
0x87E0C2: lea     ecx, [esp+34h+a3]
0x87E0C6: mov     byte ptr [esp+34h+var_4], 5Eh ; '^'
0x87E0CB: call    sub_75FAE0
0x87E0D0: mov     eax, [esp+30h+var_10]
0x87E0D4: test    eax, eax
0x87E0D6: mov     byte ptr [esp+30h+var_4], 1
0x87E0DB: jz      short loc_87E0F0
0x87E0DD: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E0E1: mov     ecx, eax
0x87E0E3: add     eax, 5Ch ; '\'
0x87E0E6: cmp     dword ptr [eax], 0
0x87E0E9: jnz     short loc_87E0F0
0x87E0EB: call    sub_772560
0x87E0F0: mov     edi, [esp+30h+a3]
0x87E0F4: push    2
0x87E0F6: push    1
0x87E0F8: push    4
0x87E0FA: push    edi
0x87E0FB: call    sub_801110
0x87E100: add     esp, 10h
0x87E103: push    edi; a3
0x87E104: push    4; a2
0x87E106: mov     ecx, esi; this
0x87E108: call    sub_760010
0x87E10D: lea     ecx, [esp+30h+var_10]
0x87E111: push    ecx
0x87E112: call    sub_772630
0x87E117: add     esp, 4
0x87E11A: push    eax
0x87E11B: lea     ecx, [esp+34h+a3]
0x87E11F: mov     byte ptr [esp+34h+var_4], 5Fh ; '_'
0x87E124: call    sub_75FAE0
0x87E129: mov     eax, [esp+30h+var_10]
0x87E12D: test    eax, eax
0x87E12F: mov     byte ptr [esp+30h+var_4], 1
0x87E134: jz      short loc_87E149
0x87E136: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E13A: mov     ecx, eax
0x87E13C: add     eax, 5Ch ; '\'
0x87E13F: cmp     dword ptr [eax], 0
0x87E142: jnz     short loc_87E149
0x87E144: call    sub_772560
0x87E149: mov     edi, [esp+30h+a3]
0x87E14D: push    0
0x87E14F: push    3
0x87E151: push    5
0x87E153: push    edi
0x87E154: call    sub_801110
0x87E159: mov     edx, ds:0B43110h
0x87E15F: add     esp, 10h
0x87E162: push    edx; a2
0x87E163: mov     ecx, edi; this
0x87E165: call    sub_76C910
0x87E16A: push    edi; a3
0x87E16B: push    5; a2
0x87E16D: mov     ecx, esi; this
0x87E16F: call    sub_760010
0x87E174: lea     eax, [esp+30h+var_10]
0x87E178: push    eax
0x87E179: call    sub_772630
0x87E17E: add     esp, 4
0x87E181: push    eax
0x87E182: lea     ecx, [esp+34h+a3]
0x87E186: mov     byte ptr [esp+34h+var_4], 60h ; '`'
0x87E18B: call    sub_75FAE0
0x87E190: mov     eax, [esp+30h+var_10]
0x87E194: test    eax, eax
0x87E196: mov     byte ptr [esp+30h+var_4], 1
0x87E19B: jz      short loc_87E1B0
0x87E19D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E1A1: mov     ecx, eax
0x87E1A3: add     eax, 5Ch ; '\'
0x87E1A6: cmp     dword ptr [eax], 0
0x87E1A9: jnz     short loc_87E1B0
0x87E1AB: call    sub_772560
0x87E1B0: mov     edi, [esp+30h+a3]
0x87E1B4: push    2
0x87E1B6: push    1
0x87E1B8: push    6
0x87E1BA: push    edi
0x87E1BB: call    sub_801110
0x87E1C0: add     esp, 10h
0x87E1C3: push    edi; a3
0x87E1C4: push    6; a2
0x87E1C6: mov     ecx, esi; this
0x87E1C8: call    sub_760010
0x87E1CD: lea     ecx, [esp+30h+var_10]
0x87E1D1: push    ecx
0x87E1D2: call    sub_772630
0x87E1D7: add     esp, 4
0x87E1DA: push    eax
0x87E1DB: lea     ecx, [esp+34h+a3]
0x87E1DF: mov     byte ptr [esp+34h+var_4], 61h ; 'a'
0x87E1E4: call    sub_75FAE0
0x87E1E9: mov     eax, [esp+30h+var_10]
0x87E1ED: test    eax, eax
0x87E1EF: mov     byte ptr [esp+30h+var_4], 1
0x87E1F4: jz      short loc_87E209
0x87E1F6: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E1FA: mov     ecx, eax
0x87E1FC: add     eax, 5Ch ; '\'
0x87E1FF: cmp     dword ptr [eax], 0
0x87E202: jnz     short loc_87E209
0x87E204: call    sub_772560
0x87E209: mov     edi, [esp+30h+a3]
0x87E20D: push    0
0x87E20F: push    3
0x87E211: push    7
0x87E213: push    edi
0x87E214: call    sub_801110
0x87E219: add     esp, 10h
0x87E21C: push    edi; a3
0x87E21D: push    7; a2
0x87E21F: mov     ecx, esi; this
0x87E221: call    sub_760010
0x87E226: mov     ebp, [esp+30h+var_14]
0x87E22A: mov     eax, [ebp+0ACh]
0x87E230: push    eax; a2
0x87E231: mov     ecx, esi; this
0x87E233: call    sub_7AECB0
0x87E238: mov     eax, [ebp+0F4h]
0x87E23E: push    eax; a2
0x87E23F: mov     ecx, esi; this
0x87E241: call    sub_7AEC60
0x87E246: cmp     dword ptr [esi+30h], 0
0x87E24A: jnz     short loc_87E254
0x87E24C: call    sub_772DF0
0x87E251: mov     [esi+30h], eax
0x87E254: mov     ecx, [esi+30h]
0x87E257: push    0
0x87E259: push    0Fh
0x87E25B: push    0A8h ; '¨'
0x87E260: call    sub_772CD0
0x87E265: cmp     dword ptr [esi+30h], 0
0x87E269: jnz     short loc_87E273
0x87E26B: call    sub_772DF0
0x87E270: mov     [esi+30h], eax
0x87E273: mov     ecx, [esi+30h]
0x87E276: push    0
0x87E278: push    0
0x87E27A: push    1Bh
0x87E27C: call    sub_772CD0
0x87E281: cmp     dword ptr [esi+30h], 0
0x87E285: jnz     short loc_87E28F
0x87E287: call    sub_772DF0
0x87E28C: mov     [esi+30h], eax
0x87E28F: mov     ecx, [esi+30h]
0x87E292: push    0
0x87E294: push    0
0x87E296: push    0Fh
0x87E298: call    sub_772CD0
0x87E29D: cmp     dword ptr [esi+30h], 0
0x87E2A1: jnz     short loc_87E2AB
0x87E2A3: call    sub_772DF0
0x87E2A8: mov     [esi+30h], eax
0x87E2AB: mov     ecx, [esi+30h]
0x87E2AE: push    0
0x87E2B0: push    1
0x87E2B2: push    7
0x87E2B4: call    sub_772CD0
0x87E2B9: cmp     dword ptr [esi+30h], 0
0x87E2BD: jnz     short loc_87E2C7
0x87E2BF: call    sub_772DF0
0x87E2C4: mov     [esi+30h], eax
0x87E2C7: mov     ecx, [esi+30h]
0x87E2CA: push    0
0x87E2CC: push    4
0x87E2CE: push    17h
0x87E2D0: call    sub_772CD0
0x87E2D5: cmp     dword ptr [esi+30h], 0
0x87E2D9: jnz     short loc_87E2E3
0x87E2DB: call    sub_772DF0
0x87E2E0: mov     [esi+30h], eax
0x87E2E3: mov     ecx, [esi+30h]
0x87E2E6: push    0
0x87E2E8: push    1
0x87E2EA: push    0Eh
0x87E2EC: call    sub_772CD0
0x87E2F1: cmp     dword ptr [esi+30h], 0
0x87E2F5: jnz     short loc_87E2FF
0x87E2F7: call    sub_772DF0
0x87E2FC: mov     [esi+30h], eax
0x87E2FF: mov     ecx, [esi+30h]
0x87E302: push    0
0x87E304: push    0
0x87E306: push    34h ; '4'
0x87E308: call    sub_772CD0
0x87E30D: cmp     esi, ds:0B4774Ch
0x87E313: mov     ebp, 11Ch
0x87E318: mov     dword ptr ds:0B43D70h, 39082h
0x87E322: mov     ds:0B44400h, ebp
0x87E328: jz      short loc_87E349
0x87E32A: add     dword ptr [esi+60h], 0FFFFFFFFh
0x87E32E: jnz     short loc_87E337
0x87E330: mov     ecx, esi
0x87E332: call    sub_7604D0
0x87E337: mov     esi, ds:0B4774Ch
0x87E33D: test    esi, esi
0x87E33F: mov     [esp+30h+var_18], esi
0x87E343: jz      short loc_87E349
0x87E345: add     dword ptr [esi+60h], 1
0x87E349: cmp     [esi+18h], ebx
0x87E34C: jnb     loc_87E628
0x87E352: lea     edx, [esp+30h+var_10]
0x87E356: push    edx
0x87E357: call    sub_772630
0x87E35C: add     esp, 4
0x87E35F: push    eax
0x87E360: lea     ecx, [esp+34h+a3]
0x87E364: mov     byte ptr [esp+34h+var_4], 62h ; 'b'
0x87E369: call    sub_75FAE0
0x87E36E: mov     eax, [esp+30h+var_10]
0x87E372: test    eax, eax
0x87E374: mov     byte ptr [esp+30h+var_4], 1
0x87E379: jz      short loc_87E38E
0x87E37B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E37F: mov     ecx, eax
0x87E381: add     eax, 5Ch ; '\'
0x87E384: cmp     dword ptr [eax], 0
0x87E387: jnz     short loc_87E38E
0x87E389: call    sub_772560
0x87E38E: mov     edi, [esp+30h+a3]
0x87E392: push    2
0x87E394: push    1
0x87E396: push    0
0x87E398: push    edi
0x87E399: call    sub_801110
0x87E39E: add     esp, 10h
0x87E3A1: push    edi; a3
0x87E3A2: push    0; a2
0x87E3A4: mov     ecx, esi; this
0x87E3A6: call    sub_760010
0x87E3AB: lea     eax, [esp+30h+var_10]
0x87E3AF: push    eax
0x87E3B0: call    sub_772630
0x87E3B5: add     esp, 4
0x87E3B8: push    eax
0x87E3B9: lea     ecx, [esp+34h+a3]
0x87E3BD: mov     byte ptr [esp+34h+var_4], 63h ; 'c'
0x87E3C2: call    sub_75FAE0
0x87E3C7: mov     eax, [esp+30h+var_10]
0x87E3CB: test    eax, eax
0x87E3CD: mov     byte ptr [esp+30h+var_4], 1
0x87E3D2: jz      short loc_87E3E7
0x87E3D4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E3D8: mov     ecx, eax
0x87E3DA: add     eax, 5Ch ; '\'
0x87E3DD: cmp     dword ptr [eax], 0
0x87E3E0: jnz     short loc_87E3E7
0x87E3E2: call    sub_772560
0x87E3E7: mov     edi, [esp+30h+a3]
0x87E3EB: push    2
0x87E3ED: push    1
0x87E3EF: push    1
0x87E3F1: push    edi
0x87E3F2: call    sub_801110
0x87E3F7: add     esp, 10h
0x87E3FA: push    edi; a3
0x87E3FB: push    1; a2
0x87E3FD: mov     ecx, esi; this
0x87E3FF: call    sub_760010
0x87E404: lea     ecx, [esp+30h+var_10]
0x87E408: push    ecx
0x87E409: call    sub_772630
0x87E40E: add     esp, 4
0x87E411: push    eax
0x87E412: lea     ecx, [esp+34h+a3]
0x87E416: mov     byte ptr [esp+34h+var_4], 64h ; 'd'
0x87E41B: call    sub_75FAE0
0x87E420: mov     eax, [esp+30h+var_10]
0x87E424: test    eax, eax
0x87E426: mov     byte ptr [esp+30h+var_4], 1
0x87E42B: jz      short loc_87E440
0x87E42D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E431: mov     ecx, eax
0x87E433: add     eax, 5Ch ; '\'
0x87E436: cmp     dword ptr [eax], 0
0x87E439: jnz     short loc_87E440
0x87E43B: call    sub_772560
0x87E440: mov     edi, [esp+30h+a3]
0x87E444: push    2
0x87E446: push    1
0x87E448: push    2
0x87E44A: push    edi
0x87E44B: call    sub_801110
0x87E450: add     esp, 10h
0x87E453: push    edi; a3
0x87E454: push    2; a2
0x87E456: mov     ecx, esi; this
0x87E458: call    sub_760010
0x87E45D: lea     edx, [esp+30h+var_10]
0x87E461: push    edx
0x87E462: call    sub_772630
0x87E467: add     esp, 4
0x87E46A: push    eax
0x87E46B: lea     ecx, [esp+34h+a3]
0x87E46F: mov     byte ptr [esp+34h+var_4], 65h ; 'e'
0x87E474: call    sub_75FAE0
0x87E479: mov     eax, [esp+30h+var_10]
0x87E47D: test    eax, eax
0x87E47F: mov     byte ptr [esp+30h+var_4], 1
0x87E484: jz      short loc_87E499
0x87E486: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E48A: mov     ecx, eax
0x87E48C: add     eax, 5Ch ; '\'
0x87E48F: cmp     dword ptr [eax], 0
0x87E492: jnz     short loc_87E499
0x87E494: call    sub_772560
0x87E499: mov     edi, [esp+30h+a3]
0x87E49D: push    2
0x87E49F: push    1
0x87E4A1: push    3
0x87E4A3: push    edi
0x87E4A4: call    sub_801110
0x87E4A9: add     esp, 10h
0x87E4AC: push    edi; a3
0x87E4AD: push    3; a2
0x87E4AF: mov     ecx, esi; this
0x87E4B1: call    sub_760010
0x87E4B6: lea     eax, [esp+30h+var_10]
0x87E4BA: push    eax
0x87E4BB: call    sub_772630
0x87E4C0: add     esp, 4
0x87E4C3: push    eax
0x87E4C4: lea     ecx, [esp+34h+a3]
0x87E4C8: mov     byte ptr [esp+34h+var_4], 66h ; 'f'
0x87E4CD: call    sub_75FAE0
0x87E4D2: mov     eax, [esp+30h+var_10]
0x87E4D6: test    eax, eax
0x87E4D8: mov     byte ptr [esp+30h+var_4], 1
0x87E4DD: jz      short loc_87E4F2
0x87E4DF: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E4E3: mov     ecx, eax
0x87E4E5: add     eax, 5Ch ; '\'
0x87E4E8: cmp     dword ptr [eax], 0
0x87E4EB: jnz     short loc_87E4F2
0x87E4ED: call    sub_772560
0x87E4F2: mov     edi, [esp+30h+a3]
0x87E4F6: push    2
0x87E4F8: push    1
0x87E4FA: push    4
0x87E4FC: push    edi
0x87E4FD: call    sub_801110
0x87E502: add     esp, 10h
0x87E505: push    edi; a3
0x87E506: push    4; a2
0x87E508: mov     ecx, esi; this
0x87E50A: call    sub_760010
0x87E50F: lea     ecx, [esp+30h+var_10]
0x87E513: push    ecx
0x87E514: call    sub_772630
0x87E519: add     esp, 4
0x87E51C: push    eax
0x87E51D: lea     ecx, [esp+34h+a3]
0x87E521: mov     byte ptr [esp+34h+var_4], 67h ; 'g'
0x87E526: call    sub_75FAE0
0x87E52B: mov     eax, [esp+30h+var_10]
0x87E52F: test    eax, eax
0x87E531: mov     byte ptr [esp+30h+var_4], 1
0x87E536: jz      short loc_87E54B
0x87E538: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E53C: mov     ecx, eax
0x87E53E: add     eax, 5Ch ; '\'
0x87E541: cmp     dword ptr [eax], 0
0x87E544: jnz     short loc_87E54B
0x87E546: call    sub_772560
0x87E54B: mov     edi, [esp+30h+a3]
0x87E54F: push    0
0x87E551: push    3
0x87E553: push    5
0x87E555: push    edi
0x87E556: call    sub_801110
0x87E55B: mov     edx, ds:0B43110h
0x87E561: add     esp, 10h
0x87E564: push    edx; a2
0x87E565: mov     ecx, edi; this
0x87E567: call    sub_76C910
0x87E56C: push    edi; a3
0x87E56D: push    5; a2
0x87E56F: mov     ecx, esi; this
0x87E571: call    sub_760010
0x87E576: lea     eax, [esp+30h+var_10]
0x87E57A: push    eax
0x87E57B: call    sub_772630
0x87E580: add     esp, 4
0x87E583: push    eax
0x87E584: lea     ecx, [esp+34h+a3]
0x87E588: mov     byte ptr [esp+34h+var_4], 68h ; 'h'
0x87E58D: call    sub_75FAE0
0x87E592: mov     eax, [esp+30h+var_10]
0x87E596: test    eax, eax
0x87E598: mov     byte ptr [esp+30h+var_4], 1
0x87E59D: jz      short loc_87E5B2
0x87E59F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E5A3: mov     ecx, eax
0x87E5A5: add     eax, 5Ch ; '\'
0x87E5A8: cmp     dword ptr [eax], 0
0x87E5AB: jnz     short loc_87E5B2
0x87E5AD: call    sub_772560
0x87E5B2: mov     edi, [esp+30h+a3]
0x87E5B6: push    2
0x87E5B8: push    1
0x87E5BA: push    6
0x87E5BC: push    edi
0x87E5BD: call    sub_801110
0x87E5C2: add     esp, 10h
0x87E5C5: push    edi; a3
0x87E5C6: push    6; a2
0x87E5C8: mov     ecx, esi; this
0x87E5CA: call    sub_760010
0x87E5CF: lea     ecx, [esp+30h+var_10]
0x87E5D3: push    ecx
0x87E5D4: call    sub_772630
0x87E5D9: add     esp, 4
0x87E5DC: push    eax
0x87E5DD: lea     ecx, [esp+34h+a3]
0x87E5E1: mov     byte ptr [esp+34h+var_4], 69h ; 'i'
0x87E5E6: call    sub_75FAE0
0x87E5EB: mov     eax, [esp+30h+var_10]
0x87E5EF: test    eax, eax
0x87E5F1: mov     byte ptr [esp+30h+var_4], 1
0x87E5F6: jz      short loc_87E60B
0x87E5F8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E5FC: mov     ecx, eax
0x87E5FE: add     eax, 5Ch ; '\'
0x87E601: cmp     dword ptr [eax], 0
0x87E604: jnz     short loc_87E60B
0x87E606: call    sub_772560
0x87E60B: mov     edi, [esp+30h+a3]
0x87E60F: push    0
0x87E611: push    3
0x87E613: push    7
0x87E615: push    edi
0x87E616: call    sub_801110
0x87E61B: add     esp, 10h
0x87E61E: push    edi; a3
0x87E61F: push    7; a2
0x87E621: mov     ecx, esi; this
0x87E623: call    sub_760010
0x87E628: mov     edx, [esp+30h+var_14]
0x87E62C: mov     eax, [edx+0B0h]
0x87E632: push    eax; a2
0x87E633: mov     ecx, esi; this
0x87E635: call    sub_7AECB0
0x87E63A: mov     eax, [esp+30h+var_14]
0x87E63E: mov     eax, [eax+0F4h]
0x87E644: push    eax; a2
0x87E645: mov     ecx, esi; this
0x87E647: call    sub_7AEC60
0x87E64C: cmp     dword ptr [esi+30h], 0
0x87E650: jnz     short loc_87E65A
0x87E652: call    sub_772DF0
0x87E657: mov     [esi+30h], eax
0x87E65A: mov     ecx, [esi+30h]
0x87E65D: push    0
0x87E65F: push    0Fh
0x87E661: push    0A8h ; '¨'
0x87E666: call    sub_772CD0
0x87E66B: cmp     dword ptr [esi+30h], 0
0x87E66F: jnz     short loc_87E679
0x87E671: call    sub_772DF0
0x87E676: mov     [esi+30h], eax
0x87E679: mov     ecx, [esi+30h]
0x87E67C: push    0
0x87E67E: push    0
0x87E680: push    1Bh
0x87E682: call    sub_772CD0
0x87E687: cmp     dword ptr [esi+30h], 0
0x87E68B: jnz     short loc_87E695
0x87E68D: call    sub_772DF0
0x87E692: mov     [esi+30h], eax
0x87E695: mov     ecx, [esi+30h]
0x87E698: push    0
0x87E69A: push    0
0x87E69C: push    0Fh
0x87E69E: call    sub_772CD0
0x87E6A3: cmp     dword ptr [esi+30h], 0
0x87E6A7: jnz     short loc_87E6B1
0x87E6A9: call    sub_772DF0
0x87E6AE: mov     [esi+30h], eax
0x87E6B1: mov     ecx, [esi+30h]
0x87E6B4: push    0
0x87E6B6: push    1
0x87E6B8: push    7
0x87E6BA: call    sub_772CD0
0x87E6BF: cmp     dword ptr [esi+30h], 0
0x87E6C3: jnz     short loc_87E6CD
0x87E6C5: call    sub_772DF0
0x87E6CA: mov     [esi+30h], eax
0x87E6CD: mov     ecx, [esi+30h]
0x87E6D0: push    0
0x87E6D2: push    4
0x87E6D4: push    17h
0x87E6D6: call    sub_772CD0
0x87E6DB: cmp     dword ptr [esi+30h], 0
0x87E6DF: jnz     short loc_87E6E9
0x87E6E1: call    sub_772DF0
0x87E6E6: mov     [esi+30h], eax
0x87E6E9: mov     ecx, [esi+30h]
0x87E6EC: push    0
0x87E6EE: push    1
0x87E6F0: push    0Eh
0x87E6F2: call    sub_772CD0
0x87E6F7: cmp     dword ptr [esi+30h], 0
0x87E6FB: jnz     short loc_87E705
0x87E6FD: call    sub_772DF0
0x87E702: mov     [esi+30h], eax
0x87E705: mov     ecx, [esi+30h]
0x87E708: push    0
0x87E70A: push    0
0x87E70C: push    34h ; '4'
0x87E70E: call    sub_772CD0
0x87E713: push    offset dword_B47750
0x87E718: lea     ecx, [esp+34h+var_18]
0x87E71C: mov     dword ptr ds:0B43D88h, 79088h
0x87E726: mov     ds:0B44418h, ebp
0x87E72C: call    sub_76C890
0x87E731: mov     esi, [esp+30h+var_18]
0x87E735: cmp     [esi+18h], ebx
0x87E738: jnb     loc_87EA14
0x87E73E: lea     ecx, [esp+30h+var_10]
0x87E742: push    ecx
0x87E743: call    sub_772630
0x87E748: add     esp, 4
0x87E74B: push    eax
0x87E74C: lea     ecx, [esp+34h+a3]
0x87E750: mov     byte ptr [esp+34h+var_4], 6Ah ; 'j'
0x87E755: call    sub_75FAE0
0x87E75A: mov     eax, [esp+30h+var_10]
0x87E75E: test    eax, eax
0x87E760: mov     byte ptr [esp+30h+var_4], 1
0x87E765: jz      short loc_87E77A
0x87E767: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E76B: mov     ecx, eax
0x87E76D: add     eax, 5Ch ; '\'
0x87E770: cmp     dword ptr [eax], 0
0x87E773: jnz     short loc_87E77A
0x87E775: call    sub_772560
0x87E77A: mov     edi, [esp+30h+a3]
0x87E77E: push    2
0x87E780: push    1
0x87E782: push    0
0x87E784: push    edi
0x87E785: call    sub_801110
0x87E78A: add     esp, 10h
0x87E78D: push    edi; a3
0x87E78E: push    0; a2
0x87E790: mov     ecx, esi; this
0x87E792: call    sub_760010
0x87E797: lea     edx, [esp+30h+var_10]
0x87E79B: push    edx
0x87E79C: call    sub_772630
0x87E7A1: add     esp, 4
0x87E7A4: push    eax
0x87E7A5: lea     ecx, [esp+34h+a3]
0x87E7A9: mov     byte ptr [esp+34h+var_4], 6Bh ; 'k'
0x87E7AE: call    sub_75FAE0
0x87E7B3: mov     eax, [esp+30h+var_10]
0x87E7B7: test    eax, eax
0x87E7B9: mov     byte ptr [esp+30h+var_4], 1
0x87E7BE: jz      short loc_87E7D3
0x87E7C0: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E7C4: mov     ecx, eax
0x87E7C6: add     eax, 5Ch ; '\'
0x87E7C9: cmp     dword ptr [eax], 0
0x87E7CC: jnz     short loc_87E7D3
0x87E7CE: call    sub_772560
0x87E7D3: mov     edi, [esp+30h+a3]
0x87E7D7: push    2
0x87E7D9: push    1
0x87E7DB: push    1
0x87E7DD: push    edi
0x87E7DE: call    sub_801110
0x87E7E3: add     esp, 10h
0x87E7E6: push    edi; a3
0x87E7E7: push    1; a2
0x87E7E9: mov     ecx, esi; this
0x87E7EB: call    sub_760010
0x87E7F0: lea     eax, [esp+30h+var_10]
0x87E7F4: push    eax
0x87E7F5: call    sub_772630
0x87E7FA: add     esp, 4
0x87E7FD: push    eax
0x87E7FE: lea     ecx, [esp+34h+a3]
0x87E802: mov     byte ptr [esp+34h+var_4], 6Ch ; 'l'
0x87E807: call    sub_75FAE0
0x87E80C: mov     eax, [esp+30h+var_10]
0x87E810: test    eax, eax
0x87E812: mov     byte ptr [esp+30h+var_4], 1
0x87E817: jz      short loc_87E82C
0x87E819: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E81D: mov     ecx, eax
0x87E81F: add     eax, 5Ch ; '\'
0x87E822: cmp     dword ptr [eax], 0
0x87E825: jnz     short loc_87E82C
0x87E827: call    sub_772560
0x87E82C: mov     edi, [esp+30h+a3]
0x87E830: push    2
0x87E832: push    1
0x87E834: push    2
0x87E836: push    edi
0x87E837: call    sub_801110
0x87E83C: add     esp, 10h
0x87E83F: push    edi; a3
0x87E840: push    2; a2
0x87E842: mov     ecx, esi; this
0x87E844: call    sub_760010
0x87E849: lea     ecx, [esp+30h+var_10]
0x87E84D: push    ecx
0x87E84E: call    sub_772630
0x87E853: add     esp, 4
0x87E856: push    eax
0x87E857: lea     ecx, [esp+34h+a3]
0x87E85B: mov     byte ptr [esp+34h+var_4], 6Dh ; 'm'
0x87E860: call    sub_75FAE0
0x87E865: mov     eax, [esp+30h+var_10]
0x87E869: test    eax, eax
0x87E86B: mov     byte ptr [esp+30h+var_4], 1
0x87E870: jz      short loc_87E885
0x87E872: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E876: mov     ecx, eax
0x87E878: add     eax, 5Ch ; '\'
0x87E87B: cmp     dword ptr [eax], 0
0x87E87E: jnz     short loc_87E885
0x87E880: call    sub_772560
0x87E885: mov     edi, [esp+30h+a3]
0x87E889: push    2
0x87E88B: push    1
0x87E88D: push    3
0x87E88F: push    edi
0x87E890: call    sub_801110
0x87E895: add     esp, 10h
0x87E898: push    edi; a3
0x87E899: push    3; a2
0x87E89B: mov     ecx, esi; this
0x87E89D: call    sub_760010
0x87E8A2: lea     edx, [esp+30h+var_10]
0x87E8A6: push    edx
0x87E8A7: call    sub_772630
0x87E8AC: add     esp, 4
0x87E8AF: push    eax
0x87E8B0: lea     ecx, [esp+34h+a3]
0x87E8B4: mov     byte ptr [esp+34h+var_4], 6Eh ; 'n'
0x87E8B9: call    sub_75FAE0
0x87E8BE: mov     eax, [esp+30h+var_10]
0x87E8C2: test    eax, eax
0x87E8C4: mov     byte ptr [esp+30h+var_4], 1
0x87E8C9: jz      short loc_87E8DE
0x87E8CB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E8CF: mov     ecx, eax
0x87E8D1: add     eax, 5Ch ; '\'
0x87E8D4: cmp     dword ptr [eax], 0
0x87E8D7: jnz     short loc_87E8DE
0x87E8D9: call    sub_772560
0x87E8DE: mov     edi, [esp+30h+a3]
0x87E8E2: push    2
0x87E8E4: push    1
0x87E8E6: push    4
0x87E8E8: push    edi
0x87E8E9: call    sub_801110
0x87E8EE: add     esp, 10h
0x87E8F1: push    edi; a3
0x87E8F2: push    4; a2
0x87E8F4: mov     ecx, esi; this
0x87E8F6: call    sub_760010
0x87E8FB: lea     eax, [esp+30h+var_10]
0x87E8FF: push    eax
0x87E900: call    sub_772630
0x87E905: add     esp, 4
0x87E908: push    eax
0x87E909: lea     ecx, [esp+34h+a3]
0x87E90D: mov     byte ptr [esp+34h+var_4], 6Fh ; 'o'
0x87E912: call    sub_75FAE0
0x87E917: mov     eax, [esp+30h+var_10]
0x87E91B: test    eax, eax
0x87E91D: mov     byte ptr [esp+30h+var_4], 1
0x87E922: jz      short loc_87E937
0x87E924: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E928: mov     ecx, eax
0x87E92A: add     eax, 5Ch ; '\'
0x87E92D: cmp     dword ptr [eax], 0
0x87E930: jnz     short loc_87E937
0x87E932: call    sub_772560
0x87E937: mov     edi, [esp+30h+a3]
0x87E93B: push    0
0x87E93D: push    3
0x87E93F: push    5
0x87E941: push    edi
0x87E942: call    sub_801110
0x87E947: mov     ecx, ds:0B43110h
0x87E94D: add     esp, 10h
0x87E950: push    ecx; a2
0x87E951: mov     ecx, edi; this
0x87E953: call    sub_76C910
0x87E958: push    edi; a3
0x87E959: push    5; a2
0x87E95B: mov     ecx, esi; this
0x87E95D: call    sub_760010
0x87E962: lea     edx, [esp+30h+var_10]
0x87E966: push    edx
0x87E967: call    sub_772630
0x87E96C: add     esp, 4
0x87E96F: push    eax
0x87E970: lea     ecx, [esp+34h+a3]
0x87E974: mov     byte ptr [esp+34h+var_4], 70h ; 'p'
0x87E979: call    sub_75FAE0
0x87E97E: mov     eax, [esp+30h+var_10]
0x87E982: test    eax, eax
0x87E984: mov     byte ptr [esp+30h+var_4], 1
0x87E989: jz      short loc_87E99E
0x87E98B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E98F: mov     ecx, eax
0x87E991: add     eax, 5Ch ; '\'
0x87E994: cmp     dword ptr [eax], 0
0x87E997: jnz     short loc_87E99E
0x87E999: call    sub_772560
0x87E99E: mov     edi, [esp+30h+a3]
0x87E9A2: push    2
0x87E9A4: push    1
0x87E9A6: push    6
0x87E9A8: push    edi
0x87E9A9: call    sub_801110
0x87E9AE: add     esp, 10h
0x87E9B1: push    edi; a3
0x87E9B2: push    6; a2
0x87E9B4: mov     ecx, esi; this
0x87E9B6: call    sub_760010
0x87E9BB: lea     eax, [esp+30h+var_10]
0x87E9BF: push    eax
0x87E9C0: call    sub_772630
0x87E9C5: add     esp, 4
0x87E9C8: push    eax
0x87E9C9: lea     ecx, [esp+34h+a3]
0x87E9CD: mov     byte ptr [esp+34h+var_4], 71h ; 'q'
0x87E9D2: call    sub_75FAE0
0x87E9D7: mov     eax, [esp+30h+var_10]
0x87E9DB: test    eax, eax
0x87E9DD: mov     byte ptr [esp+30h+var_4], 1
0x87E9E2: jz      short loc_87E9F7
0x87E9E4: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87E9E8: mov     ecx, eax
0x87E9EA: add     eax, 5Ch ; '\'
0x87E9ED: cmp     dword ptr [eax], 0
0x87E9F0: jnz     short loc_87E9F7
0x87E9F2: call    sub_772560
0x87E9F7: mov     edi, [esp+30h+a3]
0x87E9FB: push    0
0x87E9FD: push    3
0x87E9FF: push    7
0x87EA01: push    edi
0x87EA02: call    sub_801110
0x87EA07: add     esp, 10h
0x87EA0A: push    edi; a3
0x87EA0B: push    7; a2
0x87EA0D: mov     ecx, esi; this
0x87EA0F: call    sub_760010
0x87EA14: mov     ecx, [esp+30h+var_14]
0x87EA18: mov     eax, [ecx+0B4h]
0x87EA1E: push    eax; a2
0x87EA1F: mov     ecx, esi; this
0x87EA21: call    sub_7AECB0
0x87EA26: mov     edx, [esp+30h+var_14]
0x87EA2A: mov     eax, [edx+0F8h]
0x87EA30: push    eax; a2
0x87EA31: mov     ecx, esi; this
0x87EA33: call    sub_7AEC60
0x87EA38: cmp     dword ptr [esi+30h], 0
0x87EA3C: jnz     short loc_87EA46
0x87EA3E: call    sub_772DF0
0x87EA43: mov     [esi+30h], eax
0x87EA46: mov     ecx, [esi+30h]
0x87EA49: push    0
0x87EA4B: push    0Fh
0x87EA4D: push    0A8h ; '¨'
0x87EA52: call    sub_772CD0
0x87EA57: cmp     dword ptr [esi+30h], 0
0x87EA5B: jnz     short loc_87EA65
0x87EA5D: call    sub_772DF0
0x87EA62: mov     [esi+30h], eax
0x87EA65: mov     ecx, [esi+30h]
0x87EA68: push    0
0x87EA6A: push    0
0x87EA6C: push    1Bh
0x87EA6E: call    sub_772CD0
0x87EA73: cmp     dword ptr [esi+30h], 0
0x87EA77: jnz     short loc_87EA81
0x87EA79: call    sub_772DF0
0x87EA7E: mov     [esi+30h], eax
0x87EA81: mov     ecx, [esi+30h]
0x87EA84: push    0
0x87EA86: push    0
0x87EA88: push    0Fh
0x87EA8A: call    sub_772CD0
0x87EA8F: cmp     dword ptr [esi+30h], 0
0x87EA93: jnz     short loc_87EA9D
0x87EA95: call    sub_772DF0
0x87EA9A: mov     [esi+30h], eax
0x87EA9D: mov     ecx, [esi+30h]
0x87EAA0: push    0
0x87EAA2: push    1
0x87EAA4: push    7
0x87EAA6: call    sub_772CD0
0x87EAAB: cmp     dword ptr [esi+30h], 0
0x87EAAF: jnz     short loc_87EAB9
0x87EAB1: call    sub_772DF0
0x87EAB6: mov     [esi+30h], eax
0x87EAB9: mov     ecx, [esi+30h]
0x87EABC: push    0
0x87EABE: push    4
0x87EAC0: push    17h
0x87EAC2: call    sub_772CD0
0x87EAC7: cmp     dword ptr [esi+30h], 0
0x87EACB: jnz     short loc_87EAD5
0x87EACD: call    sub_772DF0
0x87EAD2: mov     [esi+30h], eax
0x87EAD5: mov     ecx, [esi+30h]
0x87EAD8: push    0
0x87EADA: push    1
0x87EADC: push    0Eh
0x87EADE: call    sub_772CD0
0x87EAE3: cmp     dword ptr [esi+30h], 0
0x87EAE7: jnz     short loc_87EAF1
0x87EAE9: call    sub_772DF0
0x87EAEE: mov     [esi+30h], eax
0x87EAF1: mov     ecx, [esi+30h]
0x87EAF4: push    0
0x87EAF6: push    0
0x87EAF8: push    34h ; '4'
0x87EAFA: call    sub_772CD0
0x87EAFF: push    offset dword_B47754
0x87EB04: lea     ecx, [esp+34h+var_18]
0x87EB08: mov     dword ptr ds:0B43DA4h, 390F2h
0x87EB12: mov     ds:0B44434h, ebp
0x87EB18: call    sub_76C890
0x87EB1D: mov     esi, [esp+30h+var_18]
0x87EB21: cmp     [esi+18h], ebx
0x87EB24: jnb     loc_87EDFF
0x87EB2A: lea     eax, [esp+30h+var_10]
0x87EB2E: push    eax
0x87EB2F: call    sub_772630
0x87EB34: add     esp, 4
0x87EB37: push    eax
0x87EB38: lea     ecx, [esp+34h+a3]
0x87EB3C: mov     byte ptr [esp+34h+var_4], 72h ; 'r'
0x87EB41: call    sub_75FAE0
0x87EB46: mov     eax, [esp+30h+var_10]
0x87EB4A: test    eax, eax
0x87EB4C: mov     byte ptr [esp+30h+var_4], 1
0x87EB51: jz      short loc_87EB66
0x87EB53: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87EB57: mov     ecx, eax
0x87EB59: add     eax, 5Ch ; '\'
0x87EB5C: cmp     dword ptr [eax], 0
0x87EB5F: jnz     short loc_87EB66
0x87EB61: call    sub_772560
0x87EB66: mov     edi, [esp+30h+a3]
0x87EB6A: push    2
0x87EB6C: push    1
0x87EB6E: push    0
0x87EB70: push    edi
0x87EB71: call    sub_801110
0x87EB76: add     esp, 10h
0x87EB79: push    edi; a3
0x87EB7A: push    0; a2
0x87EB7C: mov     ecx, esi; this
0x87EB7E: call    sub_760010
0x87EB83: lea     ecx, [esp+30h+var_10]
0x87EB87: push    ecx
0x87EB88: call    sub_772630
0x87EB8D: add     esp, 4
0x87EB90: push    eax
0x87EB91: lea     ecx, [esp+34h+a3]
0x87EB95: mov     byte ptr [esp+34h+var_4], 73h ; 's'
0x87EB9A: call    sub_75FAE0
0x87EB9F: mov     eax, [esp+30h+var_10]
0x87EBA3: test    eax, eax
0x87EBA5: mov     byte ptr [esp+30h+var_4], 1
0x87EBAA: jz      short loc_87EBBF
0x87EBAC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87EBB0: mov     ecx, eax
0x87EBB2: add     eax, 5Ch ; '\'
0x87EBB5: cmp     dword ptr [eax], 0
0x87EBB8: jnz     short loc_87EBBF
0x87EBBA: call    sub_772560
0x87EBBF: mov     edi, [esp+30h+a3]
0x87EBC3: push    2
0x87EBC5: push    1
0x87EBC7: push    1
0x87EBC9: push    edi
0x87EBCA: call    sub_801110
0x87EBCF: add     esp, 10h
0x87EBD2: push    edi; a3
0x87EBD3: push    1; a2
0x87EBD5: mov     ecx, esi; this
0x87EBD7: call    sub_760010
0x87EBDC: lea     edx, [esp+30h+var_10]
0x87EBE0: push    edx
0x87EBE1: call    sub_772630
0x87EBE6: add     esp, 4
0x87EBE9: push    eax
0x87EBEA: lea     ecx, [esp+34h+a3]
0x87EBEE: mov     byte ptr [esp+34h+var_4], 74h ; 't'
0x87EBF3: call    sub_75FAE0
0x87EBF8: mov     eax, [esp+30h+var_10]
0x87EBFC: test    eax, eax
0x87EBFE: mov     byte ptr [esp+30h+var_4], 1
0x87EC03: jz      short loc_87EC18
0x87EC05: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87EC09: mov     ecx, eax
0x87EC0B: add     eax, 5Ch ; '\'
0x87EC0E: cmp     dword ptr [eax], 0
0x87EC11: jnz     short loc_87EC18
0x87EC13: call    sub_772560
0x87EC18: mov     edi, [esp+30h+a3]
0x87EC1C: push    2
0x87EC1E: push    1
0x87EC20: push    2
0x87EC22: push    edi
0x87EC23: call    sub_801110
0x87EC28: add     esp, 10h
0x87EC2B: push    edi; a3
0x87EC2C: push    2; a2
0x87EC2E: mov     ecx, esi; this
0x87EC30: call    sub_760010
0x87EC35: lea     eax, [esp+30h+var_10]
0x87EC39: push    eax
0x87EC3A: call    sub_772630
0x87EC3F: add     esp, 4
0x87EC42: push    eax
0x87EC43: lea     ecx, [esp+34h+a3]
0x87EC47: mov     byte ptr [esp+34h+var_4], 75h ; 'u'
0x87EC4C: call    sub_75FAE0
0x87EC51: mov     eax, [esp+30h+var_10]
0x87EC55: test    eax, eax
0x87EC57: mov     byte ptr [esp+30h+var_4], 1
0x87EC5C: jz      short loc_87EC71
0x87EC5E: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87EC62: mov     ecx, eax
0x87EC64: add     eax, 5Ch ; '\'
0x87EC67: cmp     dword ptr [eax], 0
0x87EC6A: jnz     short loc_87EC71
0x87EC6C: call    sub_772560
0x87EC71: mov     edi, [esp+30h+a3]
0x87EC75: push    2
0x87EC77: push    1
0x87EC79: push    3
0x87EC7B: push    edi
0x87EC7C: call    sub_801110
0x87EC81: add     esp, 10h
0x87EC84: push    edi; a3
0x87EC85: push    3; a2
0x87EC87: mov     ecx, esi; this
0x87EC89: call    sub_760010
0x87EC8E: lea     ecx, [esp+30h+var_10]
0x87EC92: push    ecx
0x87EC93: call    sub_772630
0x87EC98: add     esp, 4
0x87EC9B: push    eax
0x87EC9C: lea     ecx, [esp+34h+a3]
0x87ECA0: mov     byte ptr [esp+34h+var_4], 76h ; 'v'
0x87ECA5: call    sub_75FAE0
0x87ECAA: mov     eax, [esp+30h+var_10]
0x87ECAE: test    eax, eax
0x87ECB0: mov     byte ptr [esp+30h+var_4], 1
0x87ECB5: jz      short loc_87ECCA
0x87ECB7: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87ECBB: mov     ecx, eax
0x87ECBD: add     eax, 5Ch ; '\'
0x87ECC0: cmp     dword ptr [eax], 0
0x87ECC3: jnz     short loc_87ECCA
0x87ECC5: call    sub_772560
0x87ECCA: mov     edi, [esp+30h+a3]
0x87ECCE: push    2
0x87ECD0: push    1
0x87ECD2: push    4
0x87ECD4: push    edi
0x87ECD5: call    sub_801110
0x87ECDA: add     esp, 10h
0x87ECDD: push    edi; a3
0x87ECDE: push    4; a2
0x87ECE0: mov     ecx, esi; this
0x87ECE2: call    sub_760010
0x87ECE7: lea     edx, [esp+30h+var_10]
0x87ECEB: push    edx
0x87ECEC: call    sub_772630
0x87ECF1: add     esp, 4
0x87ECF4: push    eax
0x87ECF5: lea     ecx, [esp+34h+a3]
0x87ECF9: mov     byte ptr [esp+34h+var_4], 77h ; 'w'
0x87ECFE: call    sub_75FAE0
0x87ED03: mov     eax, [esp+30h+var_10]
0x87ED07: test    eax, eax
0x87ED09: mov     byte ptr [esp+30h+var_4], 1
0x87ED0E: jz      short loc_87ED23
0x87ED10: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87ED14: mov     ecx, eax
0x87ED16: add     eax, 5Ch ; '\'
0x87ED19: cmp     dword ptr [eax], 0
0x87ED1C: jnz     short loc_87ED23
0x87ED1E: call    sub_772560
0x87ED23: mov     edi, [esp+30h+a3]
0x87ED27: push    0
0x87ED29: push    3
0x87ED2B: push    5
0x87ED2D: push    edi
0x87ED2E: call    sub_801110
0x87ED33: mov     eax, ds:0B43110h
0x87ED38: add     esp, 10h
0x87ED3B: push    eax; a2
0x87ED3C: mov     ecx, edi; this
0x87ED3E: call    sub_76C910
0x87ED43: push    edi; a3
0x87ED44: push    5; a2
0x87ED46: mov     ecx, esi; this
0x87ED48: call    sub_760010
0x87ED4D: lea     ecx, [esp+30h+var_10]
0x87ED51: push    ecx
0x87ED52: call    sub_772630
0x87ED57: add     esp, 4
0x87ED5A: push    eax
0x87ED5B: lea     ecx, [esp+34h+a3]
0x87ED5F: mov     byte ptr [esp+34h+var_4], 78h ; 'x'
0x87ED64: call    sub_75FAE0
0x87ED69: mov     eax, [esp+30h+var_10]
0x87ED6D: test    eax, eax
0x87ED6F: mov     byte ptr [esp+30h+var_4], 1
0x87ED74: jz      short loc_87ED89
0x87ED76: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87ED7A: mov     ecx, eax
0x87ED7C: add     eax, 5Ch ; '\'
0x87ED7F: cmp     dword ptr [eax], 0
0x87ED82: jnz     short loc_87ED89
0x87ED84: call    sub_772560
0x87ED89: mov     edi, [esp+30h+a3]
0x87ED8D: push    2
0x87ED8F: push    1
0x87ED91: push    6
0x87ED93: push    edi
0x87ED94: call    sub_801110
0x87ED99: add     esp, 10h
0x87ED9C: push    edi; a3
0x87ED9D: push    6; a2
0x87ED9F: mov     ecx, esi; this
0x87EDA1: call    sub_760010
0x87EDA6: lea     edx, [esp+30h+var_10]
0x87EDAA: push    edx
0x87EDAB: call    sub_772630
0x87EDB0: add     esp, 4
0x87EDB3: push    eax
0x87EDB4: lea     ecx, [esp+34h+a3]
0x87EDB8: mov     byte ptr [esp+34h+var_4], 79h ; 'y'
0x87EDBD: call    sub_75FAE0
0x87EDC2: mov     eax, [esp+30h+var_10]
0x87EDC6: test    eax, eax
0x87EDC8: mov     byte ptr [esp+30h+var_4], 1
0x87EDCD: jz      short loc_87EDE2
0x87EDCF: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87EDD3: mov     ecx, eax
0x87EDD5: add     eax, 5Ch ; '\'
0x87EDD8: cmp     dword ptr [eax], 0
0x87EDDB: jnz     short loc_87EDE2
0x87EDDD: call    sub_772560
0x87EDE2: mov     edi, [esp+30h+a3]
0x87EDE6: push    0
0x87EDE8: push    3
0x87EDEA: push    7
0x87EDEC: push    edi
0x87EDED: call    sub_801110
0x87EDF2: add     esp, 10h
0x87EDF5: push    edi; a3
0x87EDF6: push    7; a2
0x87EDF8: mov     ecx, esi; this
0x87EDFA: call    sub_760010
0x87EDFF: mov     ebx, [esp+30h+var_14]
0x87EE03: mov     eax, [ebx+0B8h]
0x87EE09: push    eax; a2
0x87EE0A: mov     ecx, esi; this
0x87EE0C: call    sub_7AECB0
0x87EE11: mov     eax, [ebx+0F8h]
0x87EE17: push    eax; a2
0x87EE18: mov     ecx, esi; this
0x87EE1A: call    sub_7AEC60
0x87EE1F: cmp     dword ptr [esi+30h], 0
0x87EE23: jnz     short loc_87EE2D
0x87EE25: call    sub_772DF0
0x87EE2A: mov     [esi+30h], eax
0x87EE2D: mov     ecx, [esi+30h]
0x87EE30: push    0
0x87EE32: push    0Fh
0x87EE34: push    0A8h ; '¨'
0x87EE39: call    sub_772CD0
0x87EE3E: cmp     dword ptr [esi+30h], 0
0x87EE42: jnz     short loc_87EE4C
0x87EE44: call    sub_772DF0
0x87EE49: mov     [esi+30h], eax
0x87EE4C: mov     ecx, [esi+30h]
0x87EE4F: push    0
0x87EE51: push    0
0x87EE53: push    1Bh
0x87EE55: call    sub_772CD0
0x87EE5A: cmp     dword ptr [esi+30h], 0
0x87EE5E: jnz     short loc_87EE68
0x87EE60: call    sub_772DF0
0x87EE65: mov     [esi+30h], eax
0x87EE68: mov     ecx, [esi+30h]
0x87EE6B: push    0
0x87EE6D: push    0
0x87EE6F: push    0Fh
0x87EE71: call    sub_772CD0
0x87EE76: cmp     dword ptr [esi+30h], 0
0x87EE7A: jnz     short loc_87EE84
0x87EE7C: call    sub_772DF0
0x87EE81: mov     [esi+30h], eax
0x87EE84: mov     ecx, [esi+30h]
0x87EE87: push    0
0x87EE89: push    1
0x87EE8B: push    7
0x87EE8D: call    sub_772CD0
0x87EE92: cmp     dword ptr [esi+30h], 0
0x87EE96: jnz     short loc_87EEA0
0x87EE98: call    sub_772DF0
0x87EE9D: mov     [esi+30h], eax
0x87EEA0: mov     ecx, [esi+30h]
0x87EEA3: push    0
0x87EEA5: push    4
0x87EEA7: push    17h
0x87EEA9: call    sub_772CD0
0x87EEAE: cmp     dword ptr [esi+30h], 0
0x87EEB2: jnz     short loc_87EEBC
0x87EEB4: call    sub_772DF0
0x87EEB9: mov     [esi+30h], eax
0x87EEBC: mov     ecx, [esi+30h]
0x87EEBF: push    0
0x87EEC1: push    1
0x87EEC3: push    0Eh
0x87EEC5: call    sub_772CD0
0x87EECA: cmp     dword ptr [esi+30h], 0
0x87EECE: jnz     short loc_87EED8
0x87EED0: call    sub_772DF0
0x87EED5: mov     [esi+30h], eax
0x87EED8: mov     ecx, [esi+30h]
0x87EEDB: push    0
0x87EEDD: push    0
0x87EEDF: push    34h ; '4'
0x87EEE1: call    sub_772CD0
0x87EEE6: push    offset dword_B47758
0x87EEEB: lea     ecx, [esp+34h+var_18]
0x87EEEF: mov     dword ptr ds:0B43DBCh, 790F8h
0x87EEF9: mov     ds:0B4444Ch, ebp
0x87EEFF: call    sub_76C890
0x87EF04: mov     esi, [esp+30h+var_18]
0x87EF08: cmp     dword ptr [esi+18h], 4
0x87EF0C: jnb     loc_87F084
0x87EF12: lea     eax, [esp+30h+var_10]
0x87EF16: push    eax
0x87EF17: call    sub_772630
0x87EF1C: add     esp, 4
0x87EF1F: push    eax
0x87EF20: lea     ecx, [esp+34h+a3]
0x87EF24: mov     byte ptr [esp+34h+var_4], 7Ah ; 'z'
0x87EF29: call    sub_75FAE0
0x87EF2E: mov     eax, [esp+30h+var_10]
0x87EF32: test    eax, eax
0x87EF34: mov     byte ptr [esp+30h+var_4], 1
0x87EF39: jz      short loc_87EF4E
0x87EF3B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87EF3F: mov     ecx, eax
0x87EF41: add     eax, 5Ch ; '\'
0x87EF44: cmp     dword ptr [eax], 0
0x87EF47: jnz     short loc_87EF4E
0x87EF49: call    sub_772560
0x87EF4E: mov     edi, [esp+30h+a3]
0x87EF52: push    2
0x87EF54: push    1
0x87EF56: push    0
0x87EF58: push    edi
0x87EF59: call    sub_801110
0x87EF5E: add     esp, 10h
0x87EF61: push    edi; a3
0x87EF62: push    0; a2
0x87EF64: mov     ecx, esi; this
0x87EF66: call    sub_760010
0x87EF6B: lea     ecx, [esp+30h+var_10]
0x87EF6F: push    ecx
0x87EF70: call    sub_772630
0x87EF75: add     esp, 4
0x87EF78: push    eax
0x87EF79: lea     ecx, [esp+34h+a3]
0x87EF7D: mov     byte ptr [esp+34h+var_4], 7Bh ; '{'
0x87EF82: call    sub_75FAE0
0x87EF87: mov     eax, [esp+30h+var_10]
0x87EF8B: test    eax, eax
0x87EF8D: mov     byte ptr [esp+30h+var_4], 1
0x87EF92: jz      short loc_87EFA7
0x87EF94: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87EF98: mov     ecx, eax
0x87EF9A: add     eax, 5Ch ; '\'
0x87EF9D: cmp     dword ptr [eax], 0
0x87EFA0: jnz     short loc_87EFA7
0x87EFA2: call    sub_772560
0x87EFA7: mov     edi, [esp+30h+a3]
0x87EFAB: push    2
0x87EFAD: push    1
0x87EFAF: push    1
0x87EFB1: push    edi
0x87EFB2: call    sub_801110
0x87EFB7: add     esp, 10h
0x87EFBA: push    edi; a3
0x87EFBB: push    1; a2
0x87EFBD: mov     ecx, esi; this
0x87EFBF: call    sub_760010
0x87EFC4: lea     edx, [esp+30h+var_10]
0x87EFC8: push    edx
0x87EFC9: call    sub_772630
0x87EFCE: add     esp, 4
0x87EFD1: push    eax
0x87EFD2: lea     ecx, [esp+34h+a3]
0x87EFD6: mov     byte ptr [esp+34h+var_4], 7Ch ; '|'
0x87EFDB: call    sub_75FAE0
0x87EFE0: mov     eax, [esp+30h+var_10]
0x87EFE4: test    eax, eax
0x87EFE6: mov     byte ptr [esp+30h+var_4], 1
0x87EFEB: jz      short loc_87F000
0x87EFED: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87EFF1: mov     ecx, eax
0x87EFF3: add     eax, 5Ch ; '\'
0x87EFF6: cmp     dword ptr [eax], 0
0x87EFF9: jnz     short loc_87F000
0x87EFFB: call    sub_772560
0x87F000: mov     edi, [esp+30h+a3]
0x87F004: push    2
0x87F006: push    1
0x87F008: push    2
0x87F00A: push    edi
0x87F00B: call    sub_801110
0x87F010: add     esp, 10h
0x87F013: push    edi; a3
0x87F014: push    2; a2
0x87F016: mov     ecx, esi; this
0x87F018: call    sub_760010
0x87F01D: lea     eax, [esp+30h+var_10]
0x87F021: push    eax
0x87F022: call    sub_772630
0x87F027: add     esp, 4
0x87F02A: push    eax
0x87F02B: lea     ecx, [esp+34h+a3]
0x87F02F: mov     byte ptr [esp+34h+var_4], 7Dh ; '}'
0x87F034: call    sub_75FAE0
0x87F039: mov     eax, [esp+30h+var_10]
0x87F03D: test    eax, eax
0x87F03F: mov     byte ptr [esp+30h+var_4], 1
0x87F044: jz      short loc_87F059
0x87F046: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87F04A: mov     ecx, eax
0x87F04C: add     eax, 5Ch ; '\'
0x87F04F: cmp     dword ptr [eax], 0
0x87F052: jnz     short loc_87F059
0x87F054: call    sub_772560
0x87F059: mov     ecx, ds:0B43110h
0x87F05F: mov     edi, [esp+30h+a3]
0x87F063: push    ecx; a2
0x87F064: mov     ecx, edi; this
0x87F066: call    sub_76C910
0x87F06B: push    0
0x87F06D: push    3
0x87F06F: push    3
0x87F071: push    edi
0x87F072: call    sub_801110
0x87F077: add     esp, 10h
0x87F07A: push    edi; a3
0x87F07B: push    3; a2
0x87F07D: mov     ecx, esi; this
0x87F07F: call    sub_760010
0x87F084: mov     eax, [ebx+0DCh]
0x87F08A: push    eax; a2
0x87F08B: mov     ecx, esi; this
0x87F08D: call    sub_7AECB0
0x87F092: mov     eax, [ebx+10Ch]
0x87F098: push    eax; a2
0x87F099: mov     ecx, esi; this
0x87F09B: call    sub_7AEC60
0x87F0A0: cmp     dword ptr [esi+30h], 0
0x87F0A4: jnz     short loc_87F0AE
0x87F0A6: call    sub_772DF0
0x87F0AB: mov     [esi+30h], eax
0x87F0AE: mov     ecx, [esi+30h]
0x87F0B1: push    0
0x87F0B3: push    0Fh
0x87F0B5: push    0A8h ; '¨'
0x87F0BA: call    sub_772CD0
0x87F0BF: cmp     dword ptr [esi+30h], 0
0x87F0C3: jnz     short loc_87F0CD
0x87F0C5: call    sub_772DF0
0x87F0CA: mov     [esi+30h], eax
0x87F0CD: mov     ecx, [esi+30h]
0x87F0D0: push    0
0x87F0D2: push    1
0x87F0D4: push    1Bh
0x87F0D6: call    sub_772CD0
0x87F0DB: cmp     dword ptr [esi+30h], 0
0x87F0DF: jnz     short loc_87F0E9
0x87F0E1: call    sub_772DF0
0x87F0E6: mov     [esi+30h], eax
0x87F0E9: mov     ecx, [esi+30h]
0x87F0EC: push    0
0x87F0EE: push    2
0x87F0F0: push    13h
0x87F0F2: call    sub_772CD0
0x87F0F7: cmp     dword ptr [esi+30h], 0
0x87F0FB: jnz     short loc_87F105
0x87F0FD: call    sub_772DF0
0x87F102: mov     [esi+30h], eax
0x87F105: mov     ecx, [esi+30h]
0x87F108: push    0
0x87F10A: push    2
0x87F10C: push    14h
0x87F10E: call    sub_772CD0
0x87F113: cmp     dword ptr [esi+30h], 0
0x87F117: jnz     short loc_87F121
0x87F119: call    sub_772DF0
0x87F11E: mov     [esi+30h], eax
0x87F121: mov     ecx, [esi+30h]
0x87F124: push    0
0x87F126: push    0
0x87F128: push    0Fh
0x87F12A: call    sub_772CD0
0x87F12F: cmp     dword ptr [esi+30h], 0
0x87F133: jnz     short loc_87F13D
0x87F135: call    sub_772DF0
0x87F13A: mov     [esi+30h], eax
0x87F13D: mov     ecx, [esi+30h]
0x87F140: push    0
0x87F142: push    1
0x87F144: push    7
0x87F146: call    sub_772CD0
0x87F14B: cmp     dword ptr [esi+30h], 0
0x87F14F: jnz     short loc_87F159
0x87F151: call    sub_772DF0
0x87F156: mov     [esi+30h], eax
0x87F159: mov     ecx, [esi+30h]
0x87F15C: push    0
0x87F15E: push    3
0x87F160: push    17h
0x87F162: call    sub_772CD0
0x87F167: cmp     dword ptr [esi+30h], 0
0x87F16B: jnz     short loc_87F175
0x87F16D: call    sub_772DF0
0x87F172: mov     [esi+30h], eax
0x87F175: mov     ecx, [esi+30h]
0x87F178: push    0
0x87F17A: push    0
0x87F17C: push    0Eh
0x87F17E: call    sub_772CD0
0x87F183: cmp     dword ptr [esi+30h], 0
0x87F187: jnz     short loc_87F191
0x87F189: call    sub_772DF0
0x87F18E: mov     [esi+30h], eax
0x87F191: mov     ecx, [esi+30h]
0x87F194: push    0
0x87F196: push    0
0x87F198: push    34h ; '4'
0x87F19A: call    sub_772CD0
0x87F19F: mov     ebp, 1Ch
0x87F1A4: push    offset dword_B4775C
0x87F1A9: lea     ecx, [esp+34h+var_18]
0x87F1AD: mov     dword ptr ds:0B43EC4h, 39802h
0x87F1B7: mov     ds:0B44554h, ebp
0x87F1BD: call    sub_76C890
0x87F1C2: mov     esi, [esp+30h+var_18]
0x87F1C6: cmp     dword ptr [esi+18h], 4
0x87F1CA: jnb     loc_87F341
0x87F1D0: lea     edx, [esp+30h+var_10]
0x87F1D4: push    edx
0x87F1D5: call    sub_772630
0x87F1DA: add     esp, 4
0x87F1DD: push    eax
0x87F1DE: lea     ecx, [esp+34h+a3]
0x87F1E2: mov     byte ptr [esp+34h+var_4], 7Eh ; '~'
0x87F1E7: call    sub_75FAE0
0x87F1EC: mov     eax, [esp+30h+var_10]
0x87F1F0: test    eax, eax
0x87F1F2: mov     byte ptr [esp+30h+var_4], 1
0x87F1F7: jz      short loc_87F20C
0x87F1F9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87F1FD: mov     ecx, eax
0x87F1FF: add     eax, 5Ch ; '\'
0x87F202: cmp     dword ptr [eax], 0
0x87F205: jnz     short loc_87F20C
0x87F207: call    sub_772560
0x87F20C: mov     edi, [esp+30h+a3]
0x87F210: push    2
0x87F212: push    1
0x87F214: push    0
0x87F216: push    edi
0x87F217: call    sub_801110
0x87F21C: add     esp, 10h
0x87F21F: push    edi; a3
0x87F220: push    0; a2
0x87F222: mov     ecx, esi; this
0x87F224: call    sub_760010
0x87F229: lea     eax, [esp+30h+var_10]
0x87F22D: push    eax
0x87F22E: call    sub_772630
0x87F233: add     esp, 4
0x87F236: push    eax
0x87F237: lea     ecx, [esp+34h+a3]
0x87F23B: mov     byte ptr [esp+34h+var_4], 7Fh
0x87F240: call    sub_75FAE0
0x87F245: mov     eax, [esp+30h+var_10]
0x87F249: test    eax, eax
0x87F24B: mov     byte ptr [esp+30h+var_4], 1
0x87F250: jz      short loc_87F265
0x87F252: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87F256: mov     ecx, eax
0x87F258: add     eax, 5Ch ; '\'
0x87F25B: cmp     dword ptr [eax], 0
0x87F25E: jnz     short loc_87F265
0x87F260: call    sub_772560
0x87F265: mov     edi, [esp+30h+a3]
0x87F269: push    2
0x87F26B: push    1
0x87F26D: push    1
0x87F26F: push    edi
0x87F270: call    sub_801110
0x87F275: add     esp, 10h
0x87F278: push    edi; a3
0x87F279: push    1; a2
0x87F27B: mov     ecx, esi; this
0x87F27D: call    sub_760010
0x87F282: lea     ecx, [esp+30h+var_10]
0x87F286: push    ecx
0x87F287: call    sub_772630
0x87F28C: add     esp, 4
0x87F28F: push    eax
0x87F290: lea     ecx, [esp+34h+a3]
0x87F294: mov     byte ptr [esp+34h+var_4], 80h ; '€'
0x87F299: call    sub_75FAE0
0x87F29E: mov     eax, [esp+30h+var_10]
0x87F2A2: test    eax, eax
0x87F2A4: mov     byte ptr [esp+30h+var_4], 1
0x87F2A9: jz      short loc_87F2BE
0x87F2AB: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87F2AF: mov     ecx, eax
0x87F2B1: add     eax, 5Ch ; '\'
0x87F2B4: cmp     dword ptr [eax], 0
0x87F2B7: jnz     short loc_87F2BE
0x87F2B9: call    sub_772560
0x87F2BE: mov     edi, [esp+30h+a3]
0x87F2C2: push    2
0x87F2C4: push    1
0x87F2C6: push    2
0x87F2C8: push    edi
0x87F2C9: call    sub_801110
0x87F2CE: add     esp, 10h
0x87F2D1: push    edi; a3
0x87F2D2: push    2; a2
0x87F2D4: mov     ecx, esi; this
0x87F2D6: call    sub_760010
0x87F2DB: lea     edx, [esp+30h+var_10]
0x87F2DF: push    edx
0x87F2E0: call    sub_772630
0x87F2E5: add     esp, 4
0x87F2E8: push    eax
0x87F2E9: lea     ecx, [esp+34h+a3]
0x87F2ED: mov     byte ptr [esp+34h+var_4], 81h
0x87F2F2: call    sub_75FAE0
0x87F2F7: mov     eax, [esp+30h+var_10]
0x87F2FB: test    eax, eax
0x87F2FD: mov     byte ptr [esp+30h+var_4], 1
0x87F302: jz      short loc_87F317
0x87F304: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87F308: mov     ecx, eax
0x87F30A: add     eax, 5Ch ; '\'
0x87F30D: cmp     dword ptr [eax], 0
0x87F310: jnz     short loc_87F317
0x87F312: call    sub_772560
0x87F317: mov     eax, ds:0B43110h
0x87F31C: mov     edi, [esp+30h+a3]
0x87F320: push    eax; a2
0x87F321: mov     ecx, edi; this
0x87F323: call    sub_76C910
0x87F328: push    0
0x87F32A: push    3
0x87F32C: push    3
0x87F32E: push    edi
0x87F32F: call    sub_801110
0x87F334: add     esp, 10h
0x87F337: push    edi; a3
0x87F338: push    3; a2
0x87F33A: mov     ecx, esi; this
0x87F33C: call    sub_760010
0x87F341: mov     eax, [ebx+0E0h]
0x87F347: push    eax; a2
0x87F348: mov     ecx, esi; this
0x87F34A: call    sub_7AECB0
0x87F34F: mov     eax, [ebx+10Ch]
0x87F355: push    eax; a2
0x87F356: mov     ecx, esi; this
0x87F358: call    sub_7AEC60
0x87F35D: cmp     dword ptr [esi+30h], 0
0x87F361: jnz     short loc_87F36B
0x87F363: call    sub_772DF0
0x87F368: mov     [esi+30h], eax
0x87F36B: mov     ecx, [esi+30h]
0x87F36E: push    0
0x87F370: push    0Fh
0x87F372: push    0A8h ; '¨'
0x87F377: call    sub_772CD0
0x87F37C: cmp     dword ptr [esi+30h], 0
0x87F380: jnz     short loc_87F38A
0x87F382: call    sub_772DF0
0x87F387: mov     [esi+30h], eax
0x87F38A: mov     ecx, [esi+30h]
0x87F38D: push    0
0x87F38F: push    1
0x87F391: push    1Bh
0x87F393: call    sub_772CD0
0x87F398: cmp     dword ptr [esi+30h], 0
0x87F39C: jnz     short loc_87F3A6
0x87F39E: call    sub_772DF0
0x87F3A3: mov     [esi+30h], eax
0x87F3A6: mov     ecx, [esi+30h]
0x87F3A9: push    0
0x87F3AB: push    2
0x87F3AD: push    13h
0x87F3AF: call    sub_772CD0
0x87F3B4: cmp     dword ptr [esi+30h], 0
0x87F3B8: jnz     short loc_87F3C2
0x87F3BA: call    sub_772DF0
0x87F3BF: mov     [esi+30h], eax
0x87F3C2: mov     ecx, [esi+30h]
0x87F3C5: push    0
0x87F3C7: push    2
0x87F3C9: push    14h
0x87F3CB: call    sub_772CD0
0x87F3D0: cmp     dword ptr [esi+30h], 0
0x87F3D4: jnz     short loc_87F3DE
0x87F3D6: call    sub_772DF0
0x87F3DB: mov     [esi+30h], eax
0x87F3DE: mov     ecx, [esi+30h]
0x87F3E1: push    0
0x87F3E3: push    0
0x87F3E5: push    0Fh
0x87F3E7: call    sub_772CD0
0x87F3EC: cmp     dword ptr [esi+30h], 0
0x87F3F0: jnz     short loc_87F3FA
0x87F3F2: call    sub_772DF0
0x87F3F7: mov     [esi+30h], eax
0x87F3FA: mov     ecx, [esi+30h]
0x87F3FD: push    0
0x87F3FF: push    1
0x87F401: push    7
0x87F403: call    sub_772CD0
0x87F408: cmp     dword ptr [esi+30h], 0
0x87F40C: jnz     short loc_87F416
0x87F40E: call    sub_772DF0
0x87F413: mov     [esi+30h], eax
0x87F416: mov     ecx, [esi+30h]
0x87F419: push    0
0x87F41B: push    3
0x87F41D: push    17h
0x87F41F: call    sub_772CD0
0x87F424: cmp     dword ptr [esi+30h], 0
0x87F428: jnz     short loc_87F432
0x87F42A: call    sub_772DF0
0x87F42F: mov     [esi+30h], eax
0x87F432: mov     ecx, [esi+30h]
0x87F435: push    0
0x87F437: push    0
0x87F439: push    0Eh
0x87F43B: call    sub_772CD0
0x87F440: cmp     dword ptr [esi+30h], 0
0x87F444: jnz     short loc_87F44E
0x87F446: call    sub_772DF0
0x87F44B: mov     [esi+30h], eax
0x87F44E: mov     ecx, [esi+30h]
0x87F451: push    0
0x87F453: push    0
0x87F455: push    34h ; '4'
0x87F457: call    sub_772CD0
0x87F45C: push    offset dword_B47760
0x87F461: lea     ecx, [esp+34h+var_18]
0x87F465: mov     dword ptr ds:0B43ED0h, 79808h
0x87F46F: mov     ds:0B44560h, ebp
0x87F475: call    sub_76C890
0x87F47A: mov     esi, [esp+30h+var_18]
0x87F47E: cmp     dword ptr [esi+18h], 4
0x87F482: jnb     loc_87F5FA
0x87F488: lea     ecx, [esp+30h+var_10]
0x87F48C: push    ecx
0x87F48D: call    sub_772630
0x87F492: add     esp, 4
0x87F495: push    eax
0x87F496: lea     ecx, [esp+34h+a3]
0x87F49A: mov     byte ptr [esp+34h+var_4], 82h ; '‚'
0x87F49F: call    sub_75FAE0
0x87F4A4: mov     eax, [esp+30h+var_10]
0x87F4A8: test    eax, eax
0x87F4AA: mov     byte ptr [esp+30h+var_4], 1
0x87F4AF: jz      short loc_87F4C4
0x87F4B1: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87F4B5: mov     ecx, eax
0x87F4B7: add     eax, 5Ch ; '\'
0x87F4BA: cmp     dword ptr [eax], 0
0x87F4BD: jnz     short loc_87F4C4
0x87F4BF: call    sub_772560
0x87F4C4: mov     edi, [esp+30h+a3]
0x87F4C8: push    2
0x87F4CA: push    1
0x87F4CC: push    0
0x87F4CE: push    edi
0x87F4CF: call    sub_801110
0x87F4D4: add     esp, 10h
0x87F4D7: push    edi; a3
0x87F4D8: push    0; a2
0x87F4DA: mov     ecx, esi; this
0x87F4DC: call    sub_760010
0x87F4E1: lea     edx, [esp+30h+var_10]
0x87F4E5: push    edx
0x87F4E6: call    sub_772630
0x87F4EB: add     esp, 4
0x87F4EE: push    eax
0x87F4EF: lea     ecx, [esp+34h+a3]
0x87F4F3: mov     byte ptr [esp+34h+var_4], 83h ; 'ƒ'
0x87F4F8: call    sub_75FAE0
0x87F4FD: mov     eax, [esp+30h+var_10]
0x87F501: test    eax, eax
0x87F503: mov     byte ptr [esp+30h+var_4], 1
0x87F508: jz      short loc_87F51D
0x87F50A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87F50E: mov     ecx, eax
0x87F510: add     eax, 5Ch ; '\'
0x87F513: cmp     dword ptr [eax], 0
0x87F516: jnz     short loc_87F51D
0x87F518: call    sub_772560
0x87F51D: mov     edi, [esp+30h+a3]
0x87F521: push    2
0x87F523: push    1
0x87F525: push    1
0x87F527: push    edi
0x87F528: call    sub_801110
0x87F52D: add     esp, 10h
0x87F530: push    edi; a3
0x87F531: push    1; a2
0x87F533: mov     ecx, esi; this
0x87F535: call    sub_760010
0x87F53A: lea     eax, [esp+30h+var_10]
0x87F53E: push    eax
0x87F53F: call    sub_772630
0x87F544: add     esp, 4
0x87F547: push    eax
0x87F548: lea     ecx, [esp+34h+a3]
0x87F54C: mov     byte ptr [esp+34h+var_4], 84h ; '„'
0x87F551: call    sub_75FAE0
0x87F556: mov     eax, [esp+30h+var_10]
0x87F55A: test    eax, eax
0x87F55C: mov     byte ptr [esp+30h+var_4], 1
0x87F561: jz      short loc_87F576
0x87F563: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87F567: mov     ecx, eax
0x87F569: add     eax, 5Ch ; '\'
0x87F56C: cmp     dword ptr [eax], 0
0x87F56F: jnz     short loc_87F576
0x87F571: call    sub_772560
0x87F576: mov     edi, [esp+30h+a3]
0x87F57A: push    2
0x87F57C: push    1
0x87F57E: push    2
0x87F580: push    edi
0x87F581: call    sub_801110
0x87F586: add     esp, 10h
0x87F589: push    edi; a3
0x87F58A: push    2; a2
0x87F58C: mov     ecx, esi; this
0x87F58E: call    sub_760010
0x87F593: lea     ecx, [esp+30h+var_10]
0x87F597: push    ecx
0x87F598: call    sub_772630
0x87F59D: add     esp, 4
0x87F5A0: push    eax
0x87F5A1: lea     ecx, [esp+34h+a3]
0x87F5A5: mov     byte ptr [esp+34h+var_4], 85h ; '…'
0x87F5AA: call    sub_75FAE0
0x87F5AF: mov     eax, [esp+30h+var_10]
0x87F5B3: test    eax, eax
0x87F5B5: mov     byte ptr [esp+30h+var_4], 1
0x87F5BA: jz      short loc_87F5CF
0x87F5BC: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87F5C0: mov     ecx, eax
0x87F5C2: add     eax, 5Ch ; '\'
0x87F5C5: cmp     dword ptr [eax], 0
0x87F5C8: jnz     short loc_87F5CF
0x87F5CA: call    sub_772560
0x87F5CF: mov     edx, ds:0B43110h
0x87F5D5: mov     edi, [esp+30h+a3]
0x87F5D9: push    edx; a2
0x87F5DA: mov     ecx, edi; this
0x87F5DC: call    sub_76C910
0x87F5E1: push    0
0x87F5E3: push    3
0x87F5E5: push    3
0x87F5E7: push    edi
0x87F5E8: call    sub_801110
0x87F5ED: add     esp, 10h
0x87F5F0: push    edi; a3
0x87F5F1: push    3; a2
0x87F5F3: mov     ecx, esi; this
0x87F5F5: call    sub_760010
0x87F5FA: mov     eax, [ebx+0E4h]
0x87F600: push    eax; a2
0x87F601: mov     ecx, esi; this
0x87F603: call    sub_7AECB0
0x87F608: mov     eax, [ebx+110h]
0x87F60E: push    eax; a2
0x87F60F: mov     ecx, esi; this
0x87F611: call    sub_7AEC60
0x87F616: cmp     dword ptr [esi+30h], 0
0x87F61A: jnz     short loc_87F624
0x87F61C: call    sub_772DF0
0x87F621: mov     [esi+30h], eax
0x87F624: mov     ecx, [esi+30h]
0x87F627: push    0
0x87F629: push    0Fh
0x87F62B: push    0A8h ; '¨'
0x87F630: call    sub_772CD0
0x87F635: cmp     dword ptr [esi+30h], 0
0x87F639: jnz     short loc_87F643
0x87F63B: call    sub_772DF0
0x87F640: mov     [esi+30h], eax
0x87F643: mov     ecx, [esi+30h]
0x87F646: push    0
0x87F648: push    1
0x87F64A: push    1Bh
0x87F64C: call    sub_772CD0
0x87F651: cmp     dword ptr [esi+30h], 0
0x87F655: jnz     short loc_87F65F
0x87F657: call    sub_772DF0
0x87F65C: mov     [esi+30h], eax
0x87F65F: mov     ecx, [esi+30h]
0x87F662: push    0
0x87F664: push    2
0x87F666: push    13h
0x87F668: call    sub_772CD0
0x87F66D: cmp     dword ptr [esi+30h], 0
0x87F671: jnz     short loc_87F67B
0x87F673: call    sub_772DF0
0x87F678: mov     [esi+30h], eax
0x87F67B: mov     ecx, [esi+30h]
0x87F67E: push    0
0x87F680: push    2
0x87F682: push    14h
0x87F684: call    sub_772CD0
0x87F689: cmp     dword ptr [esi+30h], 0
0x87F68D: jnz     short loc_87F697
0x87F68F: call    sub_772DF0
0x87F694: mov     [esi+30h], eax
0x87F697: mov     ecx, [esi+30h]
0x87F69A: push    0
0x87F69C: push    0
0x87F69E: push    0Fh
0x87F6A0: call    sub_772CD0
0x87F6A5: cmp     dword ptr [esi+30h], 0
0x87F6A9: jnz     short loc_87F6B3
0x87F6AB: call    sub_772DF0
0x87F6B0: mov     [esi+30h], eax
0x87F6B3: mov     ecx, [esi+30h]
0x87F6B6: push    0
0x87F6B8: push    1
0x87F6BA: push    7
0x87F6BC: call    sub_772CD0
0x87F6C1: cmp     dword ptr [esi+30h], 0
0x87F6C5: jnz     short loc_87F6CF
0x87F6C7: call    sub_772DF0
0x87F6CC: mov     [esi+30h], eax
0x87F6CF: mov     ecx, [esi+30h]
0x87F6D2: push    0
0x87F6D4: push    3
0x87F6D6: push    17h
0x87F6D8: call    sub_772CD0
0x87F6DD: cmp     dword ptr [esi+30h], 0
0x87F6E1: jnz     short loc_87F6EB
0x87F6E3: call    sub_772DF0
0x87F6E8: mov     [esi+30h], eax
0x87F6EB: mov     ecx, [esi+30h]
0x87F6EE: push    0
0x87F6F0: push    0
0x87F6F2: push    0Eh
0x87F6F4: call    sub_772CD0
0x87F6F9: cmp     dword ptr [esi+30h], 0
0x87F6FD: jnz     short loc_87F707
0x87F6FF: call    sub_772DF0
0x87F704: mov     [esi+30h], eax
0x87F707: mov     ecx, [esi+30h]
0x87F70A: push    0
0x87F70C: push    0
0x87F70E: push    34h ; '4'
0x87F710: call    sub_772CD0
0x87F715: mov     ebp, 3Ch ; '<'
0x87F71A: push    offset dword_B47764
0x87F71F: lea     ecx, [esp+34h+var_18]
0x87F723: mov     dword ptr ds:0B43EFCh, 3B802h
0x87F72D: mov     ds:0B4458Ch, ebp
0x87F733: call    sub_76C890
0x87F738: mov     esi, [esp+30h+var_18]
0x87F73C: cmp     dword ptr [esi+18h], 4
0x87F740: jnb     loc_87F8B8
0x87F746: lea     eax, [esp+30h+var_10]
0x87F74A: push    eax
0x87F74B: call    sub_772630
0x87F750: add     esp, 4
0x87F753: push    eax
0x87F754: lea     ecx, [esp+34h+a3]
0x87F758: mov     byte ptr [esp+34h+var_4], 86h ; '†'
0x87F75D: call    sub_75FAE0
0x87F762: mov     eax, [esp+30h+var_10]
0x87F766: test    eax, eax
0x87F768: mov     byte ptr [esp+30h+var_4], 1
0x87F76D: jz      short loc_87F782
0x87F76F: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87F773: mov     ecx, eax
0x87F775: add     eax, 5Ch ; '\'
0x87F778: cmp     dword ptr [eax], 0
0x87F77B: jnz     short loc_87F782
0x87F77D: call    sub_772560
0x87F782: mov     edi, [esp+30h+a3]
0x87F786: push    2
0x87F788: push    1
0x87F78A: push    0
0x87F78C: push    edi
0x87F78D: call    sub_801110
0x87F792: add     esp, 10h
0x87F795: push    edi; a3
0x87F796: push    0; a2
0x87F798: mov     ecx, esi; this
0x87F79A: call    sub_760010
0x87F79F: lea     ecx, [esp+30h+var_10]
0x87F7A3: push    ecx
0x87F7A4: call    sub_772630
0x87F7A9: add     esp, 4
0x87F7AC: push    eax
0x87F7AD: lea     ecx, [esp+34h+a3]
0x87F7B1: mov     byte ptr [esp+34h+var_4], 87h ; '‡'
0x87F7B6: call    sub_75FAE0
0x87F7BB: mov     eax, [esp+30h+var_10]
0x87F7BF: test    eax, eax
0x87F7C1: mov     byte ptr [esp+30h+var_4], 1
0x87F7C6: jz      short loc_87F7DB
0x87F7C8: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87F7CC: mov     ecx, eax
0x87F7CE: add     eax, 5Ch ; '\'
0x87F7D1: cmp     dword ptr [eax], 0
0x87F7D4: jnz     short loc_87F7DB
0x87F7D6: call    sub_772560
0x87F7DB: mov     edi, [esp+30h+a3]
0x87F7DF: push    2
0x87F7E1: push    1
0x87F7E3: push    1
0x87F7E5: push    edi
0x87F7E6: call    sub_801110
0x87F7EB: add     esp, 10h
0x87F7EE: push    edi; a3
0x87F7EF: push    1; a2
0x87F7F1: mov     ecx, esi; this
0x87F7F3: call    sub_760010
0x87F7F8: lea     edx, [esp+30h+var_10]
0x87F7FC: push    edx
0x87F7FD: call    sub_772630
0x87F802: add     esp, 4
0x87F805: push    eax
0x87F806: lea     ecx, [esp+34h+a3]
0x87F80A: mov     byte ptr [esp+34h+var_4], 88h ; 'ˆ'
0x87F80F: call    sub_75FAE0
0x87F814: mov     eax, [esp+30h+var_10]
0x87F818: test    eax, eax
0x87F81A: mov     byte ptr [esp+30h+var_4], 1
0x87F81F: jz      short loc_87F834
0x87F821: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87F825: mov     ecx, eax
0x87F827: add     eax, 5Ch ; '\'
0x87F82A: cmp     dword ptr [eax], 0
0x87F82D: jnz     short loc_87F834
0x87F82F: call    sub_772560
0x87F834: mov     edi, [esp+30h+a3]
0x87F838: push    2
0x87F83A: push    1
0x87F83C: push    2
0x87F83E: push    edi
0x87F83F: call    sub_801110
0x87F844: add     esp, 10h
0x87F847: push    edi; a3
0x87F848: push    2; a2
0x87F84A: mov     ecx, esi; this
0x87F84C: call    sub_760010
0x87F851: lea     eax, [esp+30h+var_10]
0x87F855: push    eax
0x87F856: call    sub_772630
0x87F85B: add     esp, 4
0x87F85E: push    eax
0x87F85F: lea     ecx, [esp+34h+a3]
0x87F863: mov     byte ptr [esp+34h+var_4], 89h ; '‰'
0x87F868: call    sub_75FAE0
0x87F86D: mov     eax, [esp+30h+var_10]
0x87F871: test    eax, eax
0x87F873: mov     byte ptr [esp+30h+var_4], 1
0x87F878: jz      short loc_87F88D
0x87F87A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87F87E: mov     ecx, eax
0x87F880: add     eax, 5Ch ; '\'
0x87F883: cmp     dword ptr [eax], 0
0x87F886: jnz     short loc_87F88D
0x87F888: call    sub_772560
0x87F88D: mov     ecx, ds:0B43110h
0x87F893: mov     edi, [esp+30h+a3]
0x87F897: push    ecx; a2
0x87F898: mov     ecx, edi; this
0x87F89A: call    sub_76C910
0x87F89F: push    0
0x87F8A1: push    3
0x87F8A3: push    3
0x87F8A5: push    edi
0x87F8A6: call    sub_801110
0x87F8AB: add     esp, 10h
0x87F8AE: push    edi; a3
0x87F8AF: push    3; a2
0x87F8B1: mov     ecx, esi; this
0x87F8B3: call    sub_760010
0x87F8B8: mov     eax, [ebx+0E8h]
0x87F8BE: push    eax; a2
0x87F8BF: mov     ecx, esi; this
0x87F8C1: call    sub_7AECB0
0x87F8C6: mov     eax, [ebx+110h]
0x87F8CC: push    eax; a2
0x87F8CD: mov     ecx, esi; this
0x87F8CF: call    sub_7AEC60
0x87F8D4: cmp     dword ptr [esi+30h], 0
0x87F8D8: jnz     short loc_87F8E2
0x87F8DA: call    sub_772DF0
0x87F8DF: mov     [esi+30h], eax
0x87F8E2: mov     ecx, [esi+30h]
0x87F8E5: push    0
0x87F8E7: push    0Fh
0x87F8E9: push    0A8h ; '¨'
0x87F8EE: call    sub_772CD0
0x87F8F3: cmp     dword ptr [esi+30h], 0
0x87F8F7: jnz     short loc_87F901
0x87F8F9: call    sub_772DF0
0x87F8FE: mov     [esi+30h], eax
0x87F901: mov     ecx, [esi+30h]
0x87F904: push    0
0x87F906: push    1
0x87F908: push    1Bh
0x87F90A: call    sub_772CD0
0x87F90F: cmp     dword ptr [esi+30h], 0
0x87F913: jnz     short loc_87F91D
0x87F915: call    sub_772DF0
0x87F91A: mov     [esi+30h], eax
0x87F91D: mov     ecx, [esi+30h]
0x87F920: push    0
0x87F922: push    2
0x87F924: push    13h
0x87F926: call    sub_772CD0
0x87F92B: cmp     dword ptr [esi+30h], 0
0x87F92F: jnz     short loc_87F939
0x87F931: call    sub_772DF0
0x87F936: mov     [esi+30h], eax
0x87F939: mov     ecx, [esi+30h]
0x87F93C: push    0
0x87F93E: push    2
0x87F940: push    14h
0x87F942: call    sub_772CD0
0x87F947: cmp     dword ptr [esi+30h], 0
0x87F94B: jnz     short loc_87F955
0x87F94D: call    sub_772DF0
0x87F952: mov     [esi+30h], eax
0x87F955: mov     ecx, [esi+30h]
0x87F958: push    0
0x87F95A: push    0
0x87F95C: push    0Fh
0x87F95E: call    sub_772CD0
0x87F963: cmp     dword ptr [esi+30h], 0
0x87F967: jnz     short loc_87F971
0x87F969: call    sub_772DF0
0x87F96E: mov     [esi+30h], eax
0x87F971: mov     ecx, [esi+30h]
0x87F974: push    0
0x87F976: push    1
0x87F978: push    7
0x87F97A: call    sub_772CD0
0x87F97F: cmp     dword ptr [esi+30h], 0
0x87F983: jnz     short loc_87F98D
0x87F985: call    sub_772DF0
0x87F98A: mov     [esi+30h], eax
0x87F98D: mov     ecx, [esi+30h]
0x87F990: push    0
0x87F992: push    3
0x87F994: push    17h
0x87F996: call    sub_772CD0
0x87F99B: cmp     dword ptr [esi+30h], 0
0x87F99F: jnz     short loc_87F9A9
0x87F9A1: call    sub_772DF0
0x87F9A6: mov     [esi+30h], eax
0x87F9A9: mov     ecx, [esi+30h]
0x87F9AC: push    0
0x87F9AE: push    0
0x87F9B0: push    0Eh
0x87F9B2: call    sub_772CD0
0x87F9B7: cmp     dword ptr [esi+30h], 0
0x87F9BB: jnz     short loc_87F9C5
0x87F9BD: call    sub_772DF0
0x87F9C2: mov     [esi+30h], eax
0x87F9C5: mov     ecx, [esi+30h]
0x87F9C8: push    0
0x87F9CA: push    0
0x87F9CC: push    34h ; '4'
0x87F9CE: call    sub_772CD0
0x87F9D3: or      ebx, 0FFFFFFFFh
0x87F9D6: test    edi, edi
0x87F9D8: mov     dword ptr ds:0B43F08h, 7B808h
0x87F9E2: mov     ds:0B44598h, ebp
0x87F9E8: mov     byte ptr [esp+30h+var_4], 0
0x87F9ED: jz      short loc_87F9FB
0x87F9EF: add     [edi+5Ch], ebx
0x87F9F2: jnz     short loc_87F9FB
0x87F9F4: mov     ecx, edi
0x87F9F6: call    sub_772560
0x87F9FB: add     [esi+60h], ebx
0x87F9FE: mov     [esp+30h+var_4], ebx
0x87FA02: jnz     short loc_87FA0B
0x87FA04: mov     ecx, esi
0x87FA06: call    sub_7604D0
0x87FA0B: mov     ecx, dword ptr [esp+30h+var_C]
0x87FA0F: mov     large fs:0, ecx
0x87FA16: pop     ecx
0x87FA17: pop     edi
0x87FA18: pop     esi
0x87FA19: pop     ebp
0x87FA1A: pop     ebx
0x87FA1B: add     esp, 1Ch
0x87FA1E: retn
