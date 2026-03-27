0x81D090: push    0FFFFFFFFh
0x81D092: push    offset SEH_81B120
0x81D097: mov     eax, large fs:0
0x81D09D: push    eax
0x81D09E: sub     esp, 0Ch
0x81D0A1: push    ebx
0x81D0A2: push    ebp
0x81D0A3: push    esi
0x81D0A4: push    edi
0x81D0A5: mov     eax, ds:0B30AACh
0x81D0AA: xor     eax, esp
0x81D0AC: push    eax
0x81D0AD: lea     eax, [esp+2Ch+var_C]
0x81D0B1: mov     large fs:0, eax
0x81D0B7: xor     esi, esi
0x81D0B9: mov     [esp+2Ch+var_14], esi
0x81D0BD: xor     edi, edi
0x81D0BF: mov     [esp+2Ch+var_4], esi
0x81D0C3: mov     [esp+2Ch+var_18], edi
0x81D0C7: mov     eax, ds:0B459DCh
0x81D0CC: test    eax, eax
0x81D0CE: mov     ebx, 1
0x81D0D3: mov     byte ptr [esp+2Ch+var_4], bl
0x81D0D7: jz      short loc_81D0E6
0x81D0D9: mov     esi, eax
0x81D0DB: test    esi, esi
0x81D0DD: mov     [esp+2Ch+var_14], esi
0x81D0E1: jz      short loc_81D0E6
0x81D0E3: add     [esi+60h], ebx
0x81D0E6: mov     eax, [esi+18h]
0x81D0E9: cmp     eax, ebx
0x81D0EB: jnb     short loc_81D143
0x81D0ED: lea     eax, [esp+2Ch+var_10]
0x81D0F1: push    eax
0x81D0F2: call    sub_772630
0x81D0F7: add     esp, 4
0x81D0FA: mov     eax, [eax]
0x81D0FC: test    eax, eax
0x81D0FE: jz      short loc_81D109
0x81D100: mov     edi, eax
0x81D102: add     [edi+5Ch], ebx
0x81D105: mov     [esp+2Ch+var_18], edi
0x81D109: mov     eax, [esp+2Ch+var_10]
0x81D10D: test    eax, eax
0x81D10F: mov     byte ptr [esp+2Ch+var_4], 1
0x81D114: jz      short loc_81D129
0x81D116: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81D11A: mov     ecx, eax
0x81D11C: add     eax, 5Ch ; '\'
0x81D11F: cmp     dword ptr [eax], 0
0x81D122: jnz     short loc_81D129
0x81D124: call    sub_772560
0x81D129: push    2
0x81D12B: push    ebx
0x81D12C: push    0
0x81D12E: push    edi
0x81D12F: call    sub_801110
0x81D134: mov     ecx, [esi+14h]
0x81D137: add     esp, 10h
0x81D13A: push    edi; a3
0x81D13B: push    ecx; a2
0x81D13C: mov     ecx, esi; this
0x81D13E: call    sub_760010
0x81D143: mov     eax, ds:0B452B4h
0x81D148: mov     ebp, [esi+58h]
0x81D14B: cmp     ebp, eax
0x81D14D: mov     ebx, eax
0x81D14F: jz      short loc_81D183
0x81D151: test    ebp, ebp
0x81D153: jz      short loc_81D172
0x81D155: lea     edx, [ebp+4]
0x81D158: push    edx; lpAddend
0x81D159: call    dword ptr ds:0A2807Ch
0x81D15F: test    eax, eax
0x81D161: jnz     short loc_81D172
0x81D163: test    ebp, ebp
0x81D165: jz      short loc_81D172
0x81D167: mov     eax, [ebp+0]
0x81D16A: mov     edx, [eax]
0x81D16C: push    1
0x81D16E: mov     ecx, ebp
0x81D170: call    edx
0x81D172: test    ebx, ebx
0x81D174: mov     [esi+58h], ebx
0x81D177: jz      short loc_81D183
0x81D179: add     ebx, 4
0x81D17C: push    ebx; lpAddend
0x81D17D: call    dword ptr ds:0A28078h
0x81D183: mov     eax, ds:0B450A8h
0x81D188: mov     ebp, [esi+44h]
0x81D18B: cmp     ebp, eax
0x81D18D: mov     ebx, eax
0x81D18F: jz      short loc_81D1C3
0x81D191: test    ebp, ebp
0x81D193: jz      short loc_81D1B2
0x81D195: lea     eax, [ebp+4]
0x81D198: push    eax; lpAddend
0x81D199: call    dword ptr ds:0A2807Ch
0x81D19F: test    eax, eax
0x81D1A1: jnz     short loc_81D1B2
0x81D1A3: test    ebp, ebp
0x81D1A5: jz      short loc_81D1B2
0x81D1A7: mov     edx, [ebp+0]
0x81D1AA: mov     eax, [edx]
0x81D1AC: push    1
0x81D1AE: mov     ecx, ebp
0x81D1B0: call    eax
0x81D1B2: test    ebx, ebx
0x81D1B4: mov     [esi+44h], ebx
0x81D1B7: jz      short loc_81D1C3
0x81D1B9: add     ebx, 4
0x81D1BC: push    ebx; lpAddend
0x81D1BD: call    dword ptr ds:0A28078h
0x81D1C3: cmp     dword ptr [esi+30h], 0
0x81D1C7: jnz     short loc_81D1D1
0x81D1C9: call    sub_772DF0
0x81D1CE: mov     [esi+30h], eax
0x81D1D1: mov     ecx, [esi+30h]
0x81D1D4: push    0
0x81D1D6: push    1
0x81D1D8: push    1Bh
0x81D1DA: call    sub_772CD0
0x81D1DF: cmp     dword ptr [esi+30h], 0
0x81D1E3: jnz     short loc_81D1ED
0x81D1E5: call    sub_772DF0
0x81D1EA: mov     [esi+30h], eax
0x81D1ED: mov     ecx, [esi+30h]
0x81D1F0: push    0
0x81D1F2: push    2
0x81D1F4: push    13h
0x81D1F6: call    sub_772CD0
0x81D1FB: cmp     dword ptr [esi+30h], 0
0x81D1FF: jnz     short loc_81D209
0x81D201: call    sub_772DF0
0x81D206: mov     [esi+30h], eax
0x81D209: mov     ecx, [esi+30h]
0x81D20C: push    0
0x81D20E: push    2
0x81D210: push    14h
0x81D212: call    sub_772CD0
0x81D217: cmp     dword ptr [esi+30h], 0
0x81D21B: jnz     short loc_81D225
0x81D21D: call    sub_772DF0
0x81D222: mov     [esi+30h], eax
0x81D225: mov     ecx, [esi+30h]
0x81D228: push    0
0x81D22A: push    0
0x81D22C: push    0Fh
0x81D22E: call    sub_772CD0
0x81D233: cmp     dword ptr [esi+30h], 0
0x81D237: jnz     short loc_81D241
0x81D239: call    sub_772DF0
0x81D23E: mov     [esi+30h], eax
0x81D241: mov     ecx, [esi+30h]
0x81D244: push    0
0x81D246: push    1
0x81D248: push    7
0x81D24A: call    sub_772CD0
0x81D24F: cmp     dword ptr [esi+30h], 0
0x81D253: jnz     short loc_81D25D
0x81D255: call    sub_772DF0
0x81D25A: mov     [esi+30h], eax
0x81D25D: mov     ecx, [esi+30h]
0x81D260: push    0
0x81D262: push    3
0x81D264: push    17h
0x81D266: call    sub_772CD0
0x81D26B: cmp     dword ptr [esi+30h], 0
0x81D26F: jnz     short loc_81D279
0x81D271: call    sub_772DF0
0x81D276: mov     [esi+30h], eax
0x81D279: mov     ecx, [esi+30h]
0x81D27C: push    0
0x81D27E: push    0
0x81D280: push    0Eh
0x81D282: call    sub_772CD0
0x81D287: cmp     dword ptr [esi+30h], 0
0x81D28B: jnz     short loc_81D295
0x81D28D: call    sub_772DF0
0x81D292: mov     [esi+30h], eax
0x81D295: mov     ecx, [esi+30h]
0x81D298: push    0
0x81D29A: push    0
0x81D29C: push    34h ; '4'
0x81D29E: call    sub_772CD0
0x81D2A3: or      ebx, 0FFFFFFFFh
0x81D2A6: cmp     esi, ds:0B459E0h
0x81D2AC: mov     dword ptr ds:0B43F5Ch, 20082h
0x81D2B6: mov     dword ptr ds:0B445ECh, 8
0x81D2C0: jz      short loc_81D2E0
0x81D2C2: add     [esi+60h], ebx
0x81D2C5: jnz     short loc_81D2CE
0x81D2C7: mov     ecx, esi
0x81D2C9: call    sub_7604D0
0x81D2CE: mov     esi, ds:0B459E0h
0x81D2D4: test    esi, esi
0x81D2D6: mov     [esp+2Ch+var_14], esi
0x81D2DA: jz      short loc_81D2E0
0x81D2DC: add     dword ptr [esi+60h], 1
0x81D2E0: mov     eax, [esi+18h]
0x81D2E3: cmp     eax, 4
0x81D2E6: jnb     loc_81D4DE
0x81D2EC: lea     ecx, [esp+2Ch+var_10]
0x81D2F0: push    ecx
0x81D2F1: call    sub_772630
0x81D2F6: add     esp, 4
0x81D2F9: mov     ebp, eax
0x81D2FB: cmp     edi, [ebp+0]
0x81D2FE: mov     byte ptr [esp+2Ch+var_4], 3
0x81D303: jz      short loc_81D324
0x81D305: test    edi, edi
0x81D307: jz      short loc_81D315
0x81D309: add     [edi+5Ch], ebx
0x81D30C: jnz     short loc_81D315
0x81D30E: mov     ecx, edi
0x81D310: call    sub_772560
0x81D315: mov     edi, [ebp+0]
0x81D318: test    edi, edi
0x81D31A: mov     [esp+2Ch+var_18], edi
0x81D31E: jz      short loc_81D324
0x81D320: add     dword ptr [edi+5Ch], 1
0x81D324: mov     eax, [esp+2Ch+var_10]
0x81D328: test    eax, eax
0x81D32A: mov     byte ptr [esp+2Ch+var_4], 1
0x81D32F: jz      short loc_81D343
0x81D331: add     [eax+5Ch], ebx
0x81D334: mov     ecx, eax
0x81D336: add     eax, 5Ch ; '\'
0x81D339: cmp     dword ptr [eax], 0
0x81D33C: jnz     short loc_81D343
0x81D33E: call    sub_772560
0x81D343: push    2
0x81D345: push    1
0x81D347: push    0
0x81D349: push    edi
0x81D34A: call    sub_801110
0x81D34F: mov     edx, [esi+14h]
0x81D352: add     esp, 10h
0x81D355: push    edi; a3
0x81D356: push    edx; a2
0x81D357: mov     ecx, esi; this
0x81D359: call    sub_760010
0x81D35E: lea     eax, [esp+2Ch+var_10]
0x81D362: push    eax
0x81D363: call    sub_772630
0x81D368: add     esp, 4
0x81D36B: mov     ebp, eax
0x81D36D: cmp     edi, [ebp+0]
0x81D370: mov     byte ptr [esp+2Ch+var_4], 4
0x81D375: jz      short loc_81D396
0x81D377: test    edi, edi
0x81D379: jz      short loc_81D387
0x81D37B: add     [edi+5Ch], ebx
0x81D37E: jnz     short loc_81D387
0x81D380: mov     ecx, edi
0x81D382: call    sub_772560
0x81D387: mov     edi, [ebp+0]
0x81D38A: test    edi, edi
0x81D38C: mov     [esp+2Ch+var_18], edi
0x81D390: jz      short loc_81D396
0x81D392: add     dword ptr [edi+5Ch], 1
0x81D396: mov     eax, [esp+2Ch+var_10]
0x81D39A: test    eax, eax
0x81D39C: mov     byte ptr [esp+2Ch+var_4], 1
0x81D3A1: jz      short loc_81D3B5
0x81D3A3: add     [eax+5Ch], ebx
0x81D3A6: mov     ecx, eax
0x81D3A8: add     eax, 5Ch ; '\'
0x81D3AB: cmp     dword ptr [eax], 0
0x81D3AE: jnz     short loc_81D3B5
0x81D3B0: call    sub_772560
0x81D3B5: push    2
0x81D3B7: push    3
0x81D3B9: push    1
0x81D3BB: push    edi
0x81D3BC: call    sub_801110
0x81D3C1: mov     ecx, ds:0B43110h
0x81D3C7: add     esp, 10h
0x81D3CA: push    ecx; a2
0x81D3CB: mov     ecx, edi; this
0x81D3CD: call    sub_76C910
0x81D3D2: mov     edx, [esi+14h]
0x81D3D5: push    edi; a3
0x81D3D6: push    edx; a2
0x81D3D7: mov     ecx, esi; this
0x81D3D9: call    sub_760010
0x81D3DE: lea     eax, [esp+2Ch+var_10]
0x81D3E2: push    eax
0x81D3E3: call    sub_772630
0x81D3E8: add     esp, 4
0x81D3EB: mov     ebp, eax
0x81D3ED: cmp     edi, [ebp+0]
0x81D3F0: mov     byte ptr [esp+2Ch+var_4], 5
0x81D3F5: jz      short loc_81D416
0x81D3F7: test    edi, edi
0x81D3F9: jz      short loc_81D407
0x81D3FB: add     [edi+5Ch], ebx
0x81D3FE: jnz     short loc_81D407
0x81D400: mov     ecx, edi
0x81D402: call    sub_772560
0x81D407: mov     edi, [ebp+0]
0x81D40A: test    edi, edi
0x81D40C: mov     [esp+2Ch+var_18], edi
0x81D410: jz      short loc_81D416
0x81D412: add     dword ptr [edi+5Ch], 1
0x81D416: mov     eax, [esp+2Ch+var_10]
0x81D41A: test    eax, eax
0x81D41C: mov     byte ptr [esp+2Ch+var_4], 1
0x81D421: jz      short loc_81D435
0x81D423: add     [eax+5Ch], ebx
0x81D426: mov     ecx, eax
0x81D428: add     eax, 5Ch ; '\'
0x81D42B: cmp     dword ptr [eax], 0
0x81D42E: jnz     short loc_81D435
0x81D430: call    sub_772560
0x81D435: push    2
0x81D437: push    3
0x81D439: push    2
0x81D43B: push    edi
0x81D43C: call    sub_801110
0x81D441: mov     ecx, ds:0B430D4h
0x81D447: add     esp, 10h
0x81D44A: push    ecx; a2
0x81D44B: mov     ecx, edi; this
0x81D44D: call    sub_76C910
0x81D452: mov     edx, [esi+14h]
0x81D455: push    edi; a3
0x81D456: push    edx; a2
0x81D457: mov     ecx, esi; this
0x81D459: call    sub_760010
0x81D45E: lea     eax, [esp+2Ch+var_10]
0x81D462: push    eax
0x81D463: call    sub_772630
0x81D468: add     esp, 4
0x81D46B: mov     ebp, eax
0x81D46D: cmp     edi, [ebp+0]
0x81D470: mov     byte ptr [esp+2Ch+var_4], 6
0x81D475: jz      short loc_81D496
0x81D477: test    edi, edi
0x81D479: jz      short loc_81D487
0x81D47B: add     [edi+5Ch], ebx
0x81D47E: jnz     short loc_81D487
0x81D480: mov     ecx, edi
0x81D482: call    sub_772560
0x81D487: mov     edi, [ebp+0]
0x81D48A: test    edi, edi
0x81D48C: mov     [esp+2Ch+var_18], edi
0x81D490: jz      short loc_81D496
0x81D492: add     dword ptr [edi+5Ch], 1
0x81D496: mov     eax, [esp+2Ch+var_10]
0x81D49A: test    eax, eax
0x81D49C: mov     byte ptr [esp+2Ch+var_4], 1
0x81D4A1: jz      short loc_81D4B5
0x81D4A3: add     [eax+5Ch], ebx
0x81D4A6: mov     ecx, eax
0x81D4A8: add     eax, 5Ch ; '\'
0x81D4AB: cmp     dword ptr [eax], 0
0x81D4AE: jnz     short loc_81D4B5
0x81D4B0: call    sub_772560
0x81D4B5: push    2
0x81D4B7: push    1
0x81D4B9: push    3
0x81D4BB: push    edi
0x81D4BC: call    sub_801110
0x81D4C1: mov     ecx, ds:0B430ECh
0x81D4C7: add     esp, 10h
0x81D4CA: push    ecx; a2
0x81D4CB: mov     ecx, edi; this
0x81D4CD: call    sub_76C910
0x81D4D2: mov     edx, [esi+14h]
0x81D4D5: push    edi; a3
0x81D4D6: push    edx; a2
0x81D4D7: mov     ecx, esi; this
0x81D4D9: call    sub_760010
0x81D4DE: mov     eax, ds:0B452B0h
0x81D4E3: mov     ebp, [esi+58h]
0x81D4E6: cmp     ebp, eax
0x81D4E8: mov     ebx, eax
0x81D4EA: jz      short loc_81D51E
0x81D4EC: test    ebp, ebp
0x81D4EE: jz      short loc_81D50D
0x81D4F0: lea     eax, [ebp+4]
0x81D4F3: push    eax; lpAddend
0x81D4F4: call    dword ptr ds:0A2807Ch
0x81D4FA: test    eax, eax
0x81D4FC: jnz     short loc_81D50D
0x81D4FE: test    ebp, ebp
0x81D500: jz      short loc_81D50D
0x81D502: mov     edx, [ebp+0]
0x81D505: mov     eax, [edx]
0x81D507: push    1
0x81D509: mov     ecx, ebp
0x81D50B: call    eax
0x81D50D: test    ebx, ebx
0x81D50F: mov     [esi+58h], ebx
0x81D512: jz      short loc_81D51E
0x81D514: add     ebx, 4
0x81D517: push    ebx; lpAddend
0x81D518: call    dword ptr ds:0A28078h
0x81D51E: mov     eax, ds:0B450A4h
0x81D523: mov     ebp, [esi+44h]
0x81D526: cmp     ebp, eax
0x81D528: mov     ebx, eax
0x81D52A: jz      short loc_81D55E
0x81D52C: test    ebp, ebp
0x81D52E: jz      short loc_81D54D
0x81D530: lea     ecx, [ebp+4]
0x81D533: push    ecx; lpAddend
0x81D534: call    dword ptr ds:0A2807Ch
0x81D53A: test    eax, eax
0x81D53C: jnz     short loc_81D54D
0x81D53E: test    ebp, ebp
0x81D540: jz      short loc_81D54D
0x81D542: mov     edx, [ebp+0]
0x81D545: mov     eax, [edx]
0x81D547: push    1
0x81D549: mov     ecx, ebp
0x81D54B: call    eax
0x81D54D: test    ebx, ebx
0x81D54F: mov     [esi+44h], ebx
0x81D552: jz      short loc_81D55E
0x81D554: add     ebx, 4
0x81D557: push    ebx; lpAddend
0x81D558: call    dword ptr ds:0A28078h
0x81D55E: cmp     dword ptr [esi+30h], 0
0x81D562: jnz     short loc_81D56C
0x81D564: call    sub_772DF0
0x81D569: mov     [esi+30h], eax
0x81D56C: mov     ecx, [esi+30h]
0x81D56F: push    0
0x81D571: mov     ebp, 1
0x81D576: push    ebp
0x81D577: push    1Bh
0x81D579: call    sub_772CD0
0x81D57E: cmp     dword ptr [esi+30h], 0
0x81D582: jnz     short loc_81D58C
0x81D584: call    sub_772DF0
0x81D589: mov     [esi+30h], eax
0x81D58C: mov     ecx, [esi+30h]
0x81D58F: push    0
0x81D591: push    2
0x81D593: push    13h
0x81D595: call    sub_772CD0
0x81D59A: cmp     dword ptr [esi+30h], 0
0x81D59E: jnz     short loc_81D5A8
0x81D5A0: call    sub_772DF0
0x81D5A5: mov     [esi+30h], eax
0x81D5A8: mov     ecx, [esi+30h]
0x81D5AB: push    0
0x81D5AD: push    2
0x81D5AF: push    14h
0x81D5B1: call    sub_772CD0
0x81D5B6: cmp     dword ptr [esi+30h], 0
0x81D5BA: jnz     short loc_81D5C4
0x81D5BC: call    sub_772DF0
0x81D5C1: mov     [esi+30h], eax
0x81D5C4: mov     ecx, [esi+30h]
0x81D5C7: push    0
0x81D5C9: push    0
0x81D5CB: push    0Fh
0x81D5CD: call    sub_772CD0
0x81D5D2: cmp     dword ptr [esi+30h], 0
0x81D5D6: jnz     short loc_81D5E0
0x81D5D8: call    sub_772DF0
0x81D5DD: mov     [esi+30h], eax
0x81D5E0: mov     ecx, [esi+30h]
0x81D5E3: push    0
0x81D5E5: push    ebp
0x81D5E6: push    7
0x81D5E8: call    sub_772CD0
0x81D5ED: cmp     dword ptr [esi+30h], 0
0x81D5F1: jnz     short loc_81D5FB
0x81D5F3: call    sub_772DF0
0x81D5F8: mov     [esi+30h], eax
0x81D5FB: mov     ecx, [esi+30h]
0x81D5FE: push    0
0x81D600: push    3
0x81D602: push    17h
0x81D604: call    sub_772CD0
0x81D609: cmp     dword ptr [esi+30h], 0
0x81D60D: jnz     short loc_81D617
0x81D60F: call    sub_772DF0
0x81D614: mov     [esi+30h], eax
0x81D617: mov     ecx, [esi+30h]
0x81D61A: push    0
0x81D61C: push    0
0x81D61E: push    0Eh
0x81D620: call    sub_772CD0
0x81D625: cmp     dword ptr [esi+30h], 0
0x81D629: jnz     short loc_81D633
0x81D62B: call    sub_772DF0
0x81D630: mov     [esi+30h], eax
0x81D633: mov     ecx, [esi+30h]
0x81D636: push    0
0x81D638: push    0
0x81D63A: push    34h ; '4'
0x81D63C: call    sub_772CD0
0x81D641: cmp     esi, ds:0B459E4h
0x81D647: mov     dword ptr ds:0B43F60h, 20802h
0x81D651: mov     dword ptr ds:0B445F0h, 8
0x81D65B: jz      short loc_81D67B
0x81D65D: add     dword ptr [esi+60h], 0FFFFFFFFh
0x81D661: jnz     short loc_81D66A
0x81D663: mov     ecx, esi
0x81D665: call    sub_7604D0
0x81D66A: mov     esi, ds:0B459E4h
0x81D670: test    esi, esi
0x81D672: mov     [esp+2Ch+var_14], esi
0x81D676: jz      short loc_81D67B
0x81D678: add     [esi+60h], ebp
0x81D67B: cmp     [esi+18h], ebp
0x81D67E: jnb     short loc_81D6F0
0x81D680: lea     ecx, [esp+2Ch+var_10]
0x81D684: push    ecx
0x81D685: call    sub_772630
0x81D68A: add     esp, 4
0x81D68D: mov     ebx, eax
0x81D68F: cmp     edi, [ebx]
0x81D691: mov     byte ptr [esp+2Ch+var_4], 7
0x81D696: jz      short loc_81D6B6
0x81D698: test    edi, edi
0x81D69A: jz      short loc_81D6A9
0x81D69C: add     dword ptr [edi+5Ch], 0FFFFFFFFh
0x81D6A0: jnz     short loc_81D6A9
0x81D6A2: mov     ecx, edi
0x81D6A4: call    sub_772560
0x81D6A9: mov     edi, [ebx]
0x81D6AB: test    edi, edi
0x81D6AD: mov     [esp+2Ch+var_18], edi
0x81D6B1: jz      short loc_81D6B6
0x81D6B3: add     [edi+5Ch], ebp
0x81D6B6: mov     eax, [esp+2Ch+var_10]
0x81D6BA: test    eax, eax
0x81D6BC: mov     byte ptr [esp+2Ch+var_4], 1
0x81D6C1: jz      short loc_81D6D6
0x81D6C3: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x81D6C7: mov     ecx, eax
0x81D6C9: add     eax, 5Ch ; '\'
0x81D6CC: cmp     dword ptr [eax], 0
0x81D6CF: jnz     short loc_81D6D6
0x81D6D1: call    sub_772560
0x81D6D6: push    2
0x81D6D8: push    ebp
0x81D6D9: push    0
0x81D6DB: push    edi
0x81D6DC: call    sub_801110
0x81D6E1: mov     edx, [esi+14h]
0x81D6E4: add     esp, 10h
0x81D6E7: push    edi; a3
0x81D6E8: push    edx; a2
0x81D6E9: mov     ecx, esi; this
0x81D6EB: call    sub_760010
0x81D6F0: mov     eax, ds:0B45330h
0x81D6F5: mov     ebp, [esi+58h]
0x81D6F8: cmp     ebp, eax
0x81D6FA: mov     ebx, eax
0x81D6FC: jz      short loc_81D730
0x81D6FE: test    ebp, ebp
0x81D700: jz      short loc_81D71F
0x81D702: lea     eax, [ebp+4]
0x81D705: push    eax; lpAddend
0x81D706: call    dword ptr ds:0A2807Ch
0x81D70C: test    eax, eax
0x81D70E: jnz     short loc_81D71F
0x81D710: test    ebp, ebp
0x81D712: jz      short loc_81D71F
0x81D714: mov     edx, [ebp+0]
0x81D717: mov     eax, [edx]
0x81D719: push    1
0x81D71B: mov     ecx, ebp
0x81D71D: call    eax
0x81D71F: test    ebx, ebx
0x81D721: mov     [esi+58h], ebx
0x81D724: jz      short loc_81D730
0x81D726: add     ebx, 4
0x81D729: push    ebx; lpAddend
0x81D72A: call    dword ptr ds:0A28078h
0x81D730: mov     eax, ds:0B450A8h
0x81D735: mov     ebp, [esi+44h]
0x81D738: cmp     ebp, eax
0x81D73A: mov     ebx, eax
0x81D73C: jz      short loc_81D770
0x81D73E: test    ebp, ebp
0x81D740: jz      short loc_81D75F
0x81D742: lea     ecx, [ebp+4]
0x81D745: push    ecx; lpAddend
0x81D746: call    dword ptr ds:0A2807Ch
0x81D74C: test    eax, eax
0x81D74E: jnz     short loc_81D75F
0x81D750: test    ebp, ebp
0x81D752: jz      short loc_81D75F
0x81D754: mov     edx, [ebp+0]
0x81D757: mov     eax, [edx]
0x81D759: push    1
0x81D75B: mov     ecx, ebp
0x81D75D: call    eax
0x81D75F: test    ebx, ebx
0x81D761: mov     [esi+44h], ebx
0x81D764: jz      short loc_81D770
0x81D766: add     ebx, 4
0x81D769: push    ebx; lpAddend
0x81D76A: call    dword ptr ds:0A28078h
0x81D770: cmp     dword ptr [esi+30h], 0
0x81D774: jnz     short loc_81D77E
0x81D776: call    sub_772DF0
0x81D77B: mov     [esi+30h], eax
0x81D77E: mov     ecx, [esi+30h]
0x81D781: push    0
0x81D783: push    1
0x81D785: push    1Bh
0x81D787: call    sub_772CD0
0x81D78C: cmp     dword ptr [esi+30h], 0
0x81D790: jnz     short loc_81D79A
0x81D792: call    sub_772DF0
0x81D797: mov     [esi+30h], eax
0x81D79A: mov     ecx, [esi+30h]
0x81D79D: push    0
0x81D79F: push    2
0x81D7A1: push    13h
0x81D7A3: call    sub_772CD0
0x81D7A8: cmp     dword ptr [esi+30h], 0
0x81D7AC: jnz     short loc_81D7B6
0x81D7AE: call    sub_772DF0
0x81D7B3: mov     [esi+30h], eax
0x81D7B6: mov     ecx, [esi+30h]
0x81D7B9: push    0
0x81D7BB: push    2
0x81D7BD: push    14h
0x81D7BF: call    sub_772CD0
0x81D7C4: cmp     dword ptr [esi+30h], 0
0x81D7C8: jnz     short loc_81D7D2
0x81D7CA: call    sub_772DF0
0x81D7CF: mov     [esi+30h], eax
0x81D7D2: mov     ecx, [esi+30h]
0x81D7D5: push    0
0x81D7D7: push    0
0x81D7D9: push    0Fh
0x81D7DB: call    sub_772CD0
0x81D7E0: cmp     dword ptr [esi+30h], 0
0x81D7E4: jnz     short loc_81D7EE
0x81D7E6: call    sub_772DF0
0x81D7EB: mov     [esi+30h], eax
0x81D7EE: mov     ecx, [esi+30h]
0x81D7F1: push    0
0x81D7F3: push    1
0x81D7F5: push    7
0x81D7F7: call    sub_772CD0
0x81D7FC: cmp     dword ptr [esi+30h], 0
0x81D800: jnz     short loc_81D80A
0x81D802: call    sub_772DF0
0x81D807: mov     [esi+30h], eax
0x81D80A: mov     ecx, [esi+30h]
0x81D80D: push    0
0x81D80F: push    3
0x81D811: push    17h
0x81D813: call    sub_772CD0
0x81D818: cmp     dword ptr [esi+30h], 0
0x81D81C: jnz     short loc_81D826
0x81D81E: call    sub_772DF0
0x81D823: mov     [esi+30h], eax
0x81D826: mov     ecx, [esi+30h]
0x81D829: push    0
0x81D82B: push    0
0x81D82D: push    0Eh
0x81D82F: call    sub_772CD0
0x81D834: cmp     dword ptr [esi+30h], 0
0x81D838: jnz     short loc_81D842
0x81D83A: call    sub_772DF0
0x81D83F: mov     [esi+30h], eax
0x81D842: mov     ecx, [esi+30h]
0x81D845: push    0
0x81D847: push    0
0x81D849: push    34h ; '4'
0x81D84B: call    sub_772CD0
0x81D850: or      ebx, 0FFFFFFFFh
0x81D853: cmp     esi, ds:0B459E8h
0x81D859: mov     dword ptr ds:0B43F64h, 60088h
0x81D863: mov     dword ptr ds:0B445F4h, 8
0x81D86D: jz      short loc_81D88D
0x81D86F: add     [esi+60h], ebx
0x81D872: jnz     short loc_81D87B
0x81D874: mov     ecx, esi
0x81D876: call    sub_7604D0
0x81D87B: mov     esi, ds:0B459E8h
0x81D881: test    esi, esi
0x81D883: mov     [esp+2Ch+var_14], esi
0x81D887: jz      short loc_81D88D
0x81D889: add     dword ptr [esi+60h], 1
0x81D88D: cmp     dword ptr [esi+18h], 4
0x81D891: jnb     loc_81DA89
0x81D897: lea     ecx, [esp+2Ch+var_10]
0x81D89B: push    ecx
0x81D89C: call    sub_772630
0x81D8A1: add     esp, 4
0x81D8A4: mov     ebp, eax
0x81D8A6: cmp     edi, [ebp+0]
0x81D8A9: mov     byte ptr [esp+2Ch+var_4], 8
0x81D8AE: jz      short loc_81D8CF
0x81D8B0: test    edi, edi
0x81D8B2: jz      short loc_81D8C0
0x81D8B4: add     [edi+5Ch], ebx
0x81D8B7: jnz     short loc_81D8C0
0x81D8B9: mov     ecx, edi
0x81D8BB: call    sub_772560
0x81D8C0: mov     edi, [ebp+0]
0x81D8C3: test    edi, edi
0x81D8C5: mov     [esp+2Ch+var_18], edi
0x81D8C9: jz      short loc_81D8CF
0x81D8CB: add     dword ptr [edi+5Ch], 1
0x81D8CF: mov     eax, [esp+2Ch+var_10]
0x81D8D3: test    eax, eax
0x81D8D5: mov     byte ptr [esp+2Ch+var_4], 1
0x81D8DA: jz      short loc_81D8EE
0x81D8DC: add     [eax+5Ch], ebx
0x81D8DF: mov     ecx, eax
0x81D8E1: add     eax, 5Ch ; '\'
0x81D8E4: cmp     dword ptr [eax], 0
0x81D8E7: jnz     short loc_81D8EE
0x81D8E9: call    sub_772560
0x81D8EE: push    2
0x81D8F0: push    1
0x81D8F2: push    0
0x81D8F4: push    edi
0x81D8F5: call    sub_801110
0x81D8FA: mov     edx, [esi+14h]
0x81D8FD: add     esp, 10h
0x81D900: push    edi; a3
0x81D901: push    edx; a2
0x81D902: mov     ecx, esi; this
0x81D904: call    sub_760010
0x81D909: lea     eax, [esp+2Ch+var_10]
0x81D90D: push    eax
0x81D90E: call    sub_772630
0x81D913: add     esp, 4
0x81D916: mov     ebp, eax
0x81D918: cmp     edi, [ebp+0]
0x81D91B: mov     byte ptr [esp+2Ch+var_4], 9
0x81D920: jz      short loc_81D941
0x81D922: test    edi, edi
0x81D924: jz      short loc_81D932
0x81D926: add     [edi+5Ch], ebx
0x81D929: jnz     short loc_81D932
0x81D92B: mov     ecx, edi
0x81D92D: call    sub_772560
0x81D932: mov     edi, [ebp+0]
0x81D935: test    edi, edi
0x81D937: mov     [esp+2Ch+var_18], edi
0x81D93B: jz      short loc_81D941
0x81D93D: add     dword ptr [edi+5Ch], 1
0x81D941: mov     eax, [esp+2Ch+var_10]
0x81D945: test    eax, eax
0x81D947: mov     byte ptr [esp+2Ch+var_4], 1
0x81D94C: jz      short loc_81D960
0x81D94E: add     [eax+5Ch], ebx
0x81D951: mov     ecx, eax
0x81D953: add     eax, 5Ch ; '\'
0x81D956: cmp     dword ptr [eax], 0
0x81D959: jnz     short loc_81D960
0x81D95B: call    sub_772560
0x81D960: push    2
0x81D962: push    3
0x81D964: push    1
0x81D966: push    edi
0x81D967: call    sub_801110
0x81D96C: mov     ecx, ds:0B43110h
0x81D972: add     esp, 10h
0x81D975: push    ecx; a2
0x81D976: mov     ecx, edi; this
0x81D978: call    sub_76C910
0x81D97D: mov     edx, [esi+14h]
0x81D980: push    edi; a3
0x81D981: push    edx; a2
0x81D982: mov     ecx, esi; this
0x81D984: call    sub_760010
0x81D989: lea     eax, [esp+2Ch+var_10]
0x81D98D: push    eax
0x81D98E: call    sub_772630
0x81D993: add     esp, 4
0x81D996: mov     ebp, eax
0x81D998: cmp     edi, [ebp+0]
0x81D99B: mov     byte ptr [esp+2Ch+var_4], 0Ah
0x81D9A0: jz      short loc_81D9C1
0x81D9A2: test    edi, edi
0x81D9A4: jz      short loc_81D9B2
0x81D9A6: add     [edi+5Ch], ebx
0x81D9A9: jnz     short loc_81D9B2
0x81D9AB: mov     ecx, edi
0x81D9AD: call    sub_772560
0x81D9B2: mov     edi, [ebp+0]
0x81D9B5: test    edi, edi
0x81D9B7: mov     [esp+2Ch+var_18], edi
0x81D9BB: jz      short loc_81D9C1
0x81D9BD: add     dword ptr [edi+5Ch], 1
0x81D9C1: mov     eax, [esp+2Ch+var_10]
0x81D9C5: test    eax, eax
0x81D9C7: mov     byte ptr [esp+2Ch+var_4], 1
0x81D9CC: jz      short loc_81D9E0
0x81D9CE: add     [eax+5Ch], ebx
0x81D9D1: mov     ecx, eax
0x81D9D3: add     eax, 5Ch ; '\'
0x81D9D6: cmp     dword ptr [eax], 0
0x81D9D9: jnz     short loc_81D9E0
0x81D9DB: call    sub_772560
0x81D9E0: push    2
0x81D9E2: push    3
0x81D9E4: push    2
0x81D9E6: push    edi
0x81D9E7: call    sub_801110
0x81D9EC: mov     ecx, ds:0B430D4h
0x81D9F2: add     esp, 10h
0x81D9F5: push    ecx; a2
0x81D9F6: mov     ecx, edi; this
0x81D9F8: call    sub_76C910
0x81D9FD: mov     edx, [esi+14h]
0x81DA00: push    edi; a3
0x81DA01: push    edx; a2
0x81DA02: mov     ecx, esi; this
0x81DA04: call    sub_760010
0x81DA09: lea     eax, [esp+2Ch+var_10]
0x81DA0D: push    eax
0x81DA0E: call    sub_772630
0x81DA13: add     esp, 4
0x81DA16: mov     ebp, eax
0x81DA18: cmp     edi, [ebp+0]
0x81DA1B: mov     byte ptr [esp+2Ch+var_4], 0Bh
0x81DA20: jz      short loc_81DA41
0x81DA22: test    edi, edi
0x81DA24: jz      short loc_81DA32
0x81DA26: add     [edi+5Ch], ebx
0x81DA29: jnz     short loc_81DA32
0x81DA2B: mov     ecx, edi
0x81DA2D: call    sub_772560
0x81DA32: mov     edi, [ebp+0]
0x81DA35: test    edi, edi
0x81DA37: mov     [esp+2Ch+var_18], edi
0x81DA3B: jz      short loc_81DA41
0x81DA3D: add     dword ptr [edi+5Ch], 1
0x81DA41: mov     eax, [esp+2Ch+var_10]
0x81DA45: test    eax, eax
0x81DA47: mov     byte ptr [esp+2Ch+var_4], 1
0x81DA4C: jz      short loc_81DA60
0x81DA4E: add     [eax+5Ch], ebx
0x81DA51: mov     ecx, eax
0x81DA53: add     eax, 5Ch ; '\'
0x81DA56: cmp     dword ptr [eax], 0
0x81DA59: jnz     short loc_81DA60
0x81DA5B: call    sub_772560
0x81DA60: push    2
0x81DA62: push    1
0x81DA64: push    3
0x81DA66: push    edi
0x81DA67: call    sub_801110
0x81DA6C: mov     ecx, ds:0B430ECh
0x81DA72: add     esp, 10h
0x81DA75: push    ecx; a2
0x81DA76: mov     ecx, edi; this
0x81DA78: call    sub_76C910
0x81DA7D: mov     edx, [esi+14h]
0x81DA80: push    edi; a3
0x81DA81: push    edx; a2
0x81DA82: mov     ecx, esi; this
0x81DA84: call    sub_760010
0x81DA89: mov     eax, ds:0B4532Ch
0x81DA8E: mov     ebp, [esi+58h]
0x81DA91: cmp     ebp, eax
0x81DA93: mov     ebx, eax
0x81DA95: jz      short loc_81DAC9
0x81DA97: test    ebp, ebp
0x81DA99: jz      short loc_81DAB8
0x81DA9B: lea     eax, [ebp+4]
0x81DA9E: push    eax; lpAddend
0x81DA9F: call    dword ptr ds:0A2807Ch
0x81DAA5: test    eax, eax
0x81DAA7: jnz     short loc_81DAB8
0x81DAA9: test    ebp, ebp
0x81DAAB: jz      short loc_81DAB8
0x81DAAD: mov     edx, [ebp+0]
0x81DAB0: mov     eax, [edx]
0x81DAB2: push    1
0x81DAB4: mov     ecx, ebp
0x81DAB6: call    eax
0x81DAB8: test    ebx, ebx
0x81DABA: mov     [esi+58h], ebx
0x81DABD: jz      short loc_81DAC9
0x81DABF: add     ebx, 4
0x81DAC2: push    ebx; lpAddend
0x81DAC3: call    dword ptr ds:0A28078h
0x81DAC9: mov     eax, ds:0B450A4h
0x81DACE: mov     ebp, [esi+44h]
0x81DAD1: cmp     ebp, eax
0x81DAD3: mov     ebx, eax
0x81DAD5: jz      short loc_81DB09
0x81DAD7: test    ebp, ebp
0x81DAD9: jz      short loc_81DAF8
0x81DADB: lea     ecx, [ebp+4]
0x81DADE: push    ecx; lpAddend
0x81DADF: call    dword ptr ds:0A2807Ch
0x81DAE5: test    eax, eax
0x81DAE7: jnz     short loc_81DAF8
0x81DAE9: test    ebp, ebp
0x81DAEB: jz      short loc_81DAF8
0x81DAED: mov     edx, [ebp+0]
0x81DAF0: mov     eax, [edx]
0x81DAF2: push    1
0x81DAF4: mov     ecx, ebp
0x81DAF6: call    eax
0x81DAF8: test    ebx, ebx
0x81DAFA: mov     [esi+44h], ebx
0x81DAFD: jz      short loc_81DB09
0x81DAFF: add     ebx, 4
0x81DB02: push    ebx; lpAddend
0x81DB03: call    dword ptr ds:0A28078h
0x81DB09: cmp     dword ptr [esi+30h], 0
0x81DB0D: jnz     short loc_81DB17
0x81DB0F: call    sub_772DF0
0x81DB14: mov     [esi+30h], eax
0x81DB17: mov     ecx, [esi+30h]
0x81DB1A: push    0
0x81DB1C: push    1
0x81DB1E: push    1Bh
0x81DB20: call    sub_772CD0
0x81DB25: cmp     dword ptr [esi+30h], 0
0x81DB29: jnz     short loc_81DB33
0x81DB2B: call    sub_772DF0
0x81DB30: mov     [esi+30h], eax
0x81DB33: mov     ecx, [esi+30h]
0x81DB36: push    0
0x81DB38: push    2
0x81DB3A: push    13h
0x81DB3C: call    sub_772CD0
0x81DB41: cmp     dword ptr [esi+30h], 0
0x81DB45: jnz     short loc_81DB4F
0x81DB47: call    sub_772DF0
0x81DB4C: mov     [esi+30h], eax
0x81DB4F: mov     ecx, [esi+30h]
0x81DB52: push    0
0x81DB54: push    2
0x81DB56: push    14h
0x81DB58: call    sub_772CD0
0x81DB5D: cmp     dword ptr [esi+30h], 0
0x81DB61: jnz     short loc_81DB6B
0x81DB63: call    sub_772DF0
0x81DB68: mov     [esi+30h], eax
0x81DB6B: mov     ecx, [esi+30h]
0x81DB6E: push    0
0x81DB70: push    0
0x81DB72: push    0Fh
0x81DB74: call    sub_772CD0
0x81DB79: cmp     dword ptr [esi+30h], 0
0x81DB7D: jnz     short loc_81DB87
0x81DB7F: call    sub_772DF0
0x81DB84: mov     [esi+30h], eax
0x81DB87: mov     ecx, [esi+30h]
0x81DB8A: push    0
0x81DB8C: push    1
0x81DB8E: push    7
0x81DB90: call    sub_772CD0
0x81DB95: cmp     dword ptr [esi+30h], 0
0x81DB99: jnz     short loc_81DBA3
0x81DB9B: call    sub_772DF0
0x81DBA0: mov     [esi+30h], eax
0x81DBA3: mov     ecx, [esi+30h]
0x81DBA6: push    0
0x81DBA8: push    3
0x81DBAA: push    17h
0x81DBAC: call    sub_772CD0
0x81DBB1: cmp     dword ptr [esi+30h], 0
0x81DBB5: jnz     short loc_81DBBF
0x81DBB7: call    sub_772DF0
0x81DBBC: mov     [esi+30h], eax
0x81DBBF: mov     ecx, [esi+30h]
0x81DBC2: push    0
0x81DBC4: push    0
0x81DBC6: push    0Eh
0x81DBC8: call    sub_772CD0
0x81DBCD: cmp     dword ptr [esi+30h], 0
0x81DBD1: jnz     short loc_81DBDB
0x81DBD3: call    sub_772DF0
0x81DBD8: mov     [esi+30h], eax
0x81DBDB: mov     ecx, [esi+30h]
0x81DBDE: push    0
0x81DBE0: push    0
0x81DBE2: push    34h ; '4'
0x81DBE4: call    sub_772CD0
0x81DBE9: or      ebx, 0FFFFFFFFh
0x81DBEC: test    edi, edi
0x81DBEE: mov     dword ptr ds:0B43F68h, 60808h
0x81DBF8: mov     dword ptr ds:0B445F8h, 8
0x81DC02: mov     byte ptr [esp+2Ch+var_4], 0
0x81DC07: jz      short loc_81DC15
0x81DC09: add     [edi+5Ch], ebx
0x81DC0C: jnz     short loc_81DC15
0x81DC0E: mov     ecx, edi
0x81DC10: call    sub_772560
0x81DC15: add     [esi+60h], ebx
0x81DC18: mov     [esp+2Ch+var_4], ebx
0x81DC1C: jnz     short loc_81DC25
0x81DC1E: mov     ecx, esi
0x81DC20: call    sub_7604D0
0x81DC25: mov     ecx, dword ptr [esp+2Ch+var_C]
0x81DC29: mov     large fs:0, ecx
0x81DC30: pop     ecx
0x81DC31: pop     edi
0x81DC32: pop     esi
0x81DC33: pop     ebp
0x81DC34: pop     ebx
0x81DC35: add     esp, 18h
0x81DC38: retn
