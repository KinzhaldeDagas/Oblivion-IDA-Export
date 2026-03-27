0x8717B0: push    0FFFFFFFFh
0x8717B2: push    offset SEH_8717B0
0x8717B7: mov     eax, large fs:0
0x8717BD: push    eax
0x8717BE: sub     esp, 10h
0x8717C1: push    ebx
0x8717C2: push    ebp
0x8717C3: push    esi
0x8717C4: push    edi
0x8717C5: mov     eax, ds:0B30AACh
0x8717CA: xor     eax, esp
0x8717CC: push    eax
0x8717CD: lea     eax, [esp+30h+var_C]
0x8717D1: mov     large fs:0, eax
0x8717D7: mov     edi, ecx
0x8717D9: mov     [esp+30h+var_1C], edi
0x8717DD: xor     esi, esi
0x8717DF: mov     [esp+30h+var_18], esi
0x8717E3: xor     ebx, ebx
0x8717E5: mov     [esp+30h+var_4], esi
0x8717E9: mov     [esp+30h+var_14], ebx
0x8717ED: mov     eax, ds:0B476F0h
0x8717F2: test    eax, eax
0x8717F4: mov     byte ptr [esp+30h+var_4], 1
0x8717F9: jz      short loc_871809
0x8717FB: mov     esi, eax
0x8717FD: test    esi, esi
0x8717FF: mov     [esp+30h+var_18], esi
0x871803: jz      short loc_871809
0x871805: add     dword ptr [esi+60h], 1
0x871809: mov     eax, [esi+18h]
0x87180C: cmp     eax, 1
0x87180F: jnb     short loc_871869
0x871811: lea     eax, [esp+30h+var_10]
0x871815: push    eax
0x871816: call    sub_772630
0x87181B: add     esp, 4
0x87181E: mov     eax, [eax]
0x871820: test    eax, eax
0x871822: jz      short loc_87182E
0x871824: mov     ebx, eax
0x871826: add     dword ptr [ebx+5Ch], 1
0x87182A: mov     [esp+30h+var_14], ebx
0x87182E: mov     eax, [esp+30h+var_10]
0x871832: test    eax, eax
0x871834: mov     byte ptr [esp+30h+var_4], 1
0x871839: jz      short loc_87184E
0x87183B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x87183F: mov     ecx, eax
0x871841: add     eax, 5Ch ; '\'
0x871844: cmp     dword ptr [eax], 0
0x871847: jnz     short loc_87184E
0x871849: call    sub_772560
0x87184E: push    2
0x871850: push    1
0x871852: push    0
0x871854: push    ebx
0x871855: call    sub_801110
0x87185A: mov     ecx, [esi+14h]
0x87185D: add     esp, 10h
0x871860: push    ebx; a3
0x871861: push    ecx; a2
0x871862: mov     ecx, esi; this
0x871864: call    sub_760010
0x871869: mov     ebp, [edi+10Ch]
0x87186F: mov     edi, [esi+58h]
0x871872: cmp     edi, ebp
0x871874: jz      short loc_8718A7
0x871876: test    edi, edi
0x871878: jz      short loc_871896
0x87187A: lea     edx, [edi+4]
0x87187D: push    edx; lpAddend
0x87187E: call    dword ptr ds:0A2807Ch
0x871884: test    eax, eax
0x871886: jnz     short loc_871896
0x871888: test    edi, edi
0x87188A: jz      short loc_871896
0x87188C: mov     eax, [edi]
0x87188E: mov     edx, [eax]
0x871890: push    1
0x871892: mov     ecx, edi
0x871894: call    edx
0x871896: test    ebp, ebp
0x871898: mov     [esi+58h], ebp
0x87189B: jz      short loc_8718A7
0x87189D: add     ebp, 4
0x8718A0: push    ebp; lpAddend
0x8718A1: call    dword ptr ds:0A28078h
0x8718A7: mov     eax, [esp+30h+var_1C]
0x8718AB: mov     ebp, [eax+184h]
0x8718B1: mov     edi, [esi+44h]
0x8718B4: cmp     edi, ebp
0x8718B6: jz      short loc_8718E9
0x8718B8: test    edi, edi
0x8718BA: jz      short loc_8718D8
0x8718BC: lea     ecx, [edi+4]
0x8718BF: push    ecx; lpAddend
0x8718C0: call    dword ptr ds:0A2807Ch
0x8718C6: test    eax, eax
0x8718C8: jnz     short loc_8718D8
0x8718CA: test    edi, edi
0x8718CC: jz      short loc_8718D8
0x8718CE: mov     edx, [edi]
0x8718D0: mov     eax, [edx]
0x8718D2: push    1
0x8718D4: mov     ecx, edi
0x8718D6: call    eax
0x8718D8: test    ebp, ebp
0x8718DA: mov     [esi+44h], ebp
0x8718DD: jz      short loc_8718E9
0x8718DF: add     ebp, 4
0x8718E2: push    ebp; lpAddend
0x8718E3: call    dword ptr ds:0A28078h
0x8718E9: cmp     dword ptr [esi+30h], 0
0x8718ED: jnz     short loc_8718F7
0x8718EF: call    sub_772DF0
0x8718F4: mov     [esi+30h], eax
0x8718F7: mov     ecx, [esi+30h]
0x8718FA: push    0
0x8718FC: mov     ebp, 1
0x871901: push    ebp
0x871902: push    1Bh
0x871904: call    sub_772CD0
0x871909: cmp     dword ptr [esi+30h], 0
0x87190D: jnz     short loc_871917
0x87190F: call    sub_772DF0
0x871914: mov     [esi+30h], eax
0x871917: mov     ecx, [esi+30h]
0x87191A: push    0
0x87191C: push    9
0x87191E: push    13h
0x871920: call    sub_772CD0
0x871925: cmp     dword ptr [esi+30h], 0
0x871929: jnz     short loc_871933
0x87192B: call    sub_772DF0
0x871930: mov     [esi+30h], eax
0x871933: mov     ecx, [esi+30h]
0x871936: push    0
0x871938: push    ebp
0x871939: push    14h
0x87193B: call    sub_772CD0
0x871940: cmp     dword ptr [esi+30h], 0
0x871944: jnz     short loc_87194E
0x871946: call    sub_772DF0
0x87194B: mov     [esi+30h], eax
0x87194E: mov     ecx, [esi+30h]
0x871951: push    0
0x871953: push    0
0x871955: push    0Fh
0x871957: call    sub_772CD0
0x87195C: cmp     dword ptr [esi+30h], 0
0x871960: jnz     short loc_87196A
0x871962: call    sub_772DF0
0x871967: mov     [esi+30h], eax
0x87196A: mov     ecx, [esi+30h]
0x87196D: push    0
0x87196F: push    ebp
0x871970: push    7
0x871972: call    sub_772CD0
0x871977: cmp     dword ptr [esi+30h], 0
0x87197B: jnz     short loc_871985
0x87197D: call    sub_772DF0
0x871982: mov     [esi+30h], eax
0x871985: mov     ecx, [esi+30h]
0x871988: push    0
0x87198A: push    3
0x87198C: push    17h
0x87198E: call    sub_772CD0
0x871993: cmp     dword ptr [esi+30h], 0
0x871997: jnz     short loc_8719A1
0x871999: call    sub_772DF0
0x87199E: mov     [esi+30h], eax
0x8719A1: mov     ecx, [esi+30h]
0x8719A4: push    0
0x8719A6: push    0
0x8719A8: push    0Eh
0x8719AA: call    sub_772CD0
0x8719AF: cmp     dword ptr [esi+30h], 0
0x8719B3: jnz     short loc_8719BD
0x8719B5: call    sub_772DF0
0x8719BA: mov     [esi+30h], eax
0x8719BD: mov     ecx, [esi+30h]
0x8719C0: push    0
0x8719C2: push    0
0x8719C4: push    34h ; '4'
0x8719C6: call    sub_772CD0
0x8719CB: cmp     esi, ds:0B476F4h
0x8719D1: mov     dword ptr ds:0B43F54h, 20002h
0x8719DB: mov     dword ptr ds:0B445E4h, 100h
0x8719E5: jz      short loc_871A05
0x8719E7: add     dword ptr [esi+60h], 0FFFFFFFFh
0x8719EB: jnz     short loc_8719F4
0x8719ED: mov     ecx, esi
0x8719EF: call    sub_7604D0
0x8719F4: mov     esi, ds:0B476F4h
0x8719FA: test    esi, esi
0x8719FC: mov     [esp+30h+var_18], esi
0x871A00: jz      short loc_871A05
0x871A02: add     [esi+60h], ebp
0x871A05: cmp     [esi+18h], ebp
0x871A08: jnb     short loc_871A7A
0x871A0A: lea     ecx, [esp+30h+var_10]
0x871A0E: push    ecx
0x871A0F: call    sub_772630
0x871A14: add     esp, 4
0x871A17: mov     edi, eax
0x871A19: cmp     ebx, [edi]
0x871A1B: mov     byte ptr [esp+30h+var_4], 3
0x871A20: jz      short loc_871A40
0x871A22: test    ebx, ebx
0x871A24: jz      short loc_871A33
0x871A26: add     dword ptr [ebx+5Ch], 0FFFFFFFFh
0x871A2A: jnz     short loc_871A33
0x871A2C: mov     ecx, ebx
0x871A2E: call    sub_772560
0x871A33: mov     ebx, [edi]
0x871A35: test    ebx, ebx
0x871A37: mov     [esp+30h+var_14], ebx
0x871A3B: jz      short loc_871A40
0x871A3D: add     [ebx+5Ch], ebp
0x871A40: mov     eax, [esp+30h+var_10]
0x871A44: test    eax, eax
0x871A46: mov     byte ptr [esp+30h+var_4], 1
0x871A4B: jz      short loc_871A60
0x871A4D: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x871A51: mov     ecx, eax
0x871A53: add     eax, 5Ch ; '\'
0x871A56: cmp     dword ptr [eax], 0
0x871A59: jnz     short loc_871A60
0x871A5B: call    sub_772560
0x871A60: push    2
0x871A62: push    ebp
0x871A63: push    0
0x871A65: push    ebx
0x871A66: call    sub_801110
0x871A6B: mov     edx, [esi+14h]
0x871A6E: add     esp, 10h
0x871A71: push    ebx; a3
0x871A72: push    edx; a2
0x871A73: mov     ecx, esi; this
0x871A75: call    sub_760010
0x871A7A: mov     eax, [esp+30h+var_1C]
0x871A7E: mov     ebp, [eax+110h]
0x871A84: mov     edi, [esi+58h]
0x871A87: cmp     edi, ebp
0x871A89: jz      short loc_871ABC
0x871A8B: test    edi, edi
0x871A8D: jz      short loc_871AAB
0x871A8F: lea     ecx, [edi+4]
0x871A92: push    ecx; lpAddend
0x871A93: call    dword ptr ds:0A2807Ch
0x871A99: test    eax, eax
0x871A9B: jnz     short loc_871AAB
0x871A9D: test    edi, edi
0x871A9F: jz      short loc_871AAB
0x871AA1: mov     edx, [edi]
0x871AA3: mov     eax, [edx]
0x871AA5: push    1
0x871AA7: mov     ecx, edi
0x871AA9: call    eax
0x871AAB: test    ebp, ebp
0x871AAD: mov     [esi+58h], ebp
0x871AB0: jz      short loc_871ABC
0x871AB2: add     ebp, 4
0x871AB5: push    ebp; lpAddend
0x871AB6: call    dword ptr ds:0A28078h
0x871ABC: mov     ecx, [esp+30h+var_1C]
0x871AC0: mov     ebp, [ecx+184h]
0x871AC6: mov     edi, [esi+44h]
0x871AC9: cmp     edi, ebp
0x871ACB: jz      short loc_871AFE
0x871ACD: test    edi, edi
0x871ACF: jz      short loc_871AED
0x871AD1: lea     edx, [edi+4]
0x871AD4: push    edx; lpAddend
0x871AD5: call    dword ptr ds:0A2807Ch
0x871ADB: test    eax, eax
0x871ADD: jnz     short loc_871AED
0x871ADF: test    edi, edi
0x871AE1: jz      short loc_871AED
0x871AE3: mov     eax, [edi]
0x871AE5: mov     edx, [eax]
0x871AE7: push    1
0x871AE9: mov     ecx, edi
0x871AEB: call    edx
0x871AED: test    ebp, ebp
0x871AEF: mov     [esi+44h], ebp
0x871AF2: jz      short loc_871AFE
0x871AF4: add     ebp, 4
0x871AF7: push    ebp; lpAddend
0x871AF8: call    dword ptr ds:0A28078h
0x871AFE: cmp     dword ptr [esi+30h], 0
0x871B02: jnz     short loc_871B0C
0x871B04: call    sub_772DF0
0x871B09: mov     [esi+30h], eax
0x871B0C: mov     ecx, [esi+30h]
0x871B0F: push    0
0x871B11: push    1
0x871B13: push    1Bh
0x871B15: call    sub_772CD0
0x871B1A: cmp     dword ptr [esi+30h], 0
0x871B1E: jnz     short loc_871B28
0x871B20: call    sub_772DF0
0x871B25: mov     [esi+30h], eax
0x871B28: mov     ecx, [esi+30h]
0x871B2B: push    0
0x871B2D: push    9
0x871B2F: push    13h
0x871B31: call    sub_772CD0
0x871B36: cmp     dword ptr [esi+30h], 0
0x871B3A: jnz     short loc_871B44
0x871B3C: call    sub_772DF0
0x871B41: mov     [esi+30h], eax
0x871B44: mov     ecx, [esi+30h]
0x871B47: push    0
0x871B49: push    1
0x871B4B: push    14h
0x871B4D: call    sub_772CD0
0x871B52: cmp     dword ptr [esi+30h], 0
0x871B56: jnz     short loc_871B60
0x871B58: call    sub_772DF0
0x871B5D: mov     [esi+30h], eax
0x871B60: mov     ecx, [esi+30h]
0x871B63: push    0
0x871B65: push    0
0x871B67: push    0Fh
0x871B69: call    sub_772CD0
0x871B6E: cmp     dword ptr [esi+30h], 0
0x871B72: jnz     short loc_871B7C
0x871B74: call    sub_772DF0
0x871B79: mov     [esi+30h], eax
0x871B7C: mov     ecx, [esi+30h]
0x871B7F: push    0
0x871B81: push    1
0x871B83: push    7
0x871B85: call    sub_772CD0
0x871B8A: cmp     dword ptr [esi+30h], 0
0x871B8E: jnz     short loc_871B98
0x871B90: call    sub_772DF0
0x871B95: mov     [esi+30h], eax
0x871B98: mov     ecx, [esi+30h]
0x871B9B: push    0
0x871B9D: push    3
0x871B9F: push    17h
0x871BA1: call    sub_772CD0
0x871BA6: cmp     dword ptr [esi+30h], 0
0x871BAA: jnz     short loc_871BB4
0x871BAC: call    sub_772DF0
0x871BB1: mov     [esi+30h], eax
0x871BB4: mov     ecx, [esi+30h]
0x871BB7: push    0
0x871BB9: push    0
0x871BBB: push    0Eh
0x871BBD: call    sub_772CD0
0x871BC2: cmp     dword ptr [esi+30h], 0
0x871BC6: jnz     short loc_871BD0
0x871BC8: call    sub_772DF0
0x871BCD: mov     [esi+30h], eax
0x871BD0: mov     ecx, [esi+30h]
0x871BD3: push    0
0x871BD5: push    0
0x871BD7: push    34h ; '4'
0x871BD9: call    sub_772CD0
0x871BDE: or      edi, 0FFFFFFFFh
0x871BE1: test    ebx, ebx
0x871BE3: mov     dword ptr ds:0B43F58h, 60008h
0x871BED: mov     dword ptr ds:0B445E8h, 100h
0x871BF7: mov     byte ptr [esp+30h+var_4], 0
0x871BFC: jz      short loc_871C0A
0x871BFE: add     [ebx+5Ch], edi
0x871C01: jnz     short loc_871C0A
0x871C03: mov     ecx, ebx
0x871C05: call    sub_772560
0x871C0A: add     [esi+60h], edi
0x871C0D: mov     [esp+30h+var_4], edi
0x871C11: jnz     short loc_871C1A
0x871C13: mov     ecx, esi
0x871C15: call    sub_7604D0
0x871C1A: mov     ecx, dword ptr [esp+30h+var_C]
0x871C1E: mov     large fs:0, ecx
0x871C25: pop     ecx
0x871C26: pop     edi
0x871C27: pop     esi
0x871C28: pop     ebp
0x871C29: pop     ebx
0x871C2A: add     esp, 1Ch
0x871C2D: retn
