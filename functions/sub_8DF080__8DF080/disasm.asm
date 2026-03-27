0x8DF080: push    ebp
0x8DF081: mov     ebp, esp
0x8DF083: and     esp, 0FFFFFFF0h
0x8DF086: sub     esp, 44h
0x8DF089: push    ebx
0x8DF08A: push    esi
0x8DF08B: mov     esi, ecx
0x8DF08D: mov     ecx, [ebp+arg_4]
0x8DF090: lea     eax, [esi+8]
0x8DF093: mov     word ptr [esi+6], 1
0x8DF099: mov     dword ptr [eax], offset off_A99B50
0x8DF09F: mov     dword ptr [esi+0Ch], offset ??_7hkPhantomOverlapListener@@6B@; const hkPhantomOverlapListener::`vftable'
0x8DF0A6: cmp     word ptr [esi+4], 0
0x8DF0AB: lea     ebx, [esi+0Ch]
0x8DF0AE: push    edi
0x8DF0AF: mov     edi, [ebp+arg_0]
0x8DF0B2: mov     dword ptr [esi], offset off_A9A574
0x8DF0B8: mov     dword ptr [eax], offset off_A9A56C
0x8DF0BE: mov     dword ptr [ebx], offset off_A9A560
0x8DF0C4: mov     [esi+10h], edi
0x8DF0C7: mov     [esi+2Ch], ecx
0x8DF0CA: jz      short loc_8DF0D0
0x8DF0CC: inc     word ptr [esi+6]
0x8DF0D0: push    eax
0x8DF0D1: mov     ecx, edi
0x8DF0D3: call    sub_899DA0
0x8DF0D8: mov     eax, [esi+10h]
0x8DF0DB: lea     edx, [eax+280h]
0x8DF0E1: mov     ecx, [edx]
0x8DF0E3: mov     [esp+50h+var_30], ecx
0x8DF0E7: mov     ecx, [edx+4]
0x8DF0EA: mov     [esp+50h+var_2C], ecx
0x8DF0EE: mov     ecx, [edx+8]
0x8DF0F1: mov     edx, [edx+0Ch]
0x8DF0F4: mov     [esp+50h+var_28], ecx
0x8DF0F8: add     eax, 290h
0x8DF0FD: mov     ecx, [eax]
0x8DF0FF: mov     [esp+50h+var_24], edx
0x8DF103: mov     edx, [eax+4]
0x8DF106: mov     [esp+50h+var_40], ecx
0x8DF10A: mov     ecx, [eax+8]
0x8DF10D: mov     [esp+50h+var_3C], edx
0x8DF111: mov     edx, [eax+0Ch]
0x8DF114: mov     eax, [esp+50h+var_40]
0x8DF118: mov     [esp+50h+var_38], ecx
0x8DF11C: mov     ecx, [esp+50h+var_2C]
0x8DF120: mov     [esp+50h+var_34], edx
0x8DF124: mov     edx, [esp+50h+var_28]
0x8DF128: mov     [esp+50h+var_1C], ecx
0x8DF12C: mov     ecx, [esp+50h+var_3C]
0x8DF130: mov     [esp+50h+var_18], edx
0x8DF134: mov     edx, [esp+50h+var_38]
0x8DF138: mov     [esp+50h+var_C], ecx
0x8DF13C: mov     ecx, ds:0BA7D98h
0x8DF142: push    2Eh ; '.'
0x8DF144: mov     [esp+54h+var_20], eax
0x8DF148: mov     [esp+54h+var_14], 0
0x8DF150: mov     [esp+54h+var_10], eax
0x8DF154: mov     [esp+54h+var_8], edx
0x8DF158: mov     [esp+54h+var_4], 0
0x8DF160: mov     eax, [ecx]
0x8DF162: push    0A0h ; ' '
0x8DF167: call    dword ptr [eax+10h]
0x8DF16A: push    0
0x8DF16C: lea     ecx, [esp+54h+var_20]
0x8DF170: push    ecx
0x8DF171: mov     ecx, eax
0x8DF173: mov     word ptr [eax+4], 0A0h ; ' '
0x8DF179: call    sub_8CDCB0
0x8DF17E: push    ebx
0x8DF17F: mov     ecx, eax
0x8DF181: mov     [esp+54h+var_44], eax
0x8DF185: call    sub_8DE750
0x8DF18A: mov     eax, [esp+50h+var_44]
0x8DF18E: push    eax
0x8DF18F: mov     ecx, edi
0x8DF191: mov     [esi+14h], eax
0x8DF194: call    sub_899A50
0x8DF199: mov     ecx, [esp+50h+var_28]
0x8DF19D: mov     eax, [esp+50h+var_2C]
0x8DF1A1: mov     edx, [esp+50h+var_30]
0x8DF1A5: mov     [esp+50h+var_18], ecx
0x8DF1A9: mov     ecx, [esp+50h+var_38]
0x8DF1AD: mov     [esp+50h+var_1C], eax
0x8DF1B1: mov     eax, [esp+50h+var_3C]
0x8DF1B5: mov     [esp+50h+var_8], ecx
0x8DF1B9: mov     ecx, ds:0BA7D98h
0x8DF1BF: push    2Eh ; '.'
0x8DF1C1: mov     [esp+54h+var_20], edx
0x8DF1C5: mov     [esp+54h+var_14], 0
0x8DF1CD: mov     [esp+54h+var_10], edx
0x8DF1D1: mov     [esp+54h+var_C], eax
0x8DF1D5: mov     [esp+54h+var_4], 0
0x8DF1DD: mov     edx, [ecx]
0x8DF1DF: push    0A0h ; ' '
0x8DF1E4: call    dword ptr [edx+10h]
0x8DF1E7: push    0
0x8DF1E9: lea     ecx, [esp+54h+var_20]
0x8DF1ED: push    ecx
0x8DF1EE: mov     ecx, eax
0x8DF1F0: mov     word ptr [eax+4], 0A0h ; ' '
0x8DF1F6: call    sub_8CDCB0
0x8DF1FB: mov     [esp+50h+var_44], eax
0x8DF1FF: push    ebx
0x8DF200: mov     ecx, eax
0x8DF202: call    sub_8DE750
0x8DF207: mov     eax, [esp+50h+var_44]
0x8DF20B: push    eax
0x8DF20C: mov     ecx, edi
0x8DF20E: mov     [esi+18h], eax
0x8DF211: call    sub_899A50
0x8DF216: mov     ecx, [esp+50h+var_28]
0x8DF21A: mov     edx, [esp+50h+var_30]
0x8DF21E: mov     eax, [esp+50h+var_3C]
0x8DF222: mov     [esp+50h+var_18], ecx
0x8DF226: mov     ecx, [esp+50h+var_38]
0x8DF22A: mov     [esp+50h+var_20], edx
0x8DF22E: mov     edx, [esp+50h+var_40]
0x8DF232: mov     [esp+50h+var_8], ecx
0x8DF236: mov     ecx, ds:0BA7D98h
0x8DF23C: push    2Eh ; '.'
0x8DF23E: mov     [esp+54h+var_1C], eax
0x8DF242: mov     [esp+54h+var_14], 0
0x8DF24A: mov     [esp+54h+var_10], edx
0x8DF24E: mov     [esp+54h+var_C], eax
0x8DF252: mov     [esp+54h+var_4], 0
0x8DF25A: mov     edx, [ecx]
0x8DF25C: push    0A0h ; ' '
0x8DF261: call    dword ptr [edx+10h]
0x8DF264: push    0
0x8DF266: lea     ecx, [esp+54h+var_20]
0x8DF26A: push    ecx
0x8DF26B: mov     ecx, eax
0x8DF26D: mov     word ptr [eax+4], 0A0h ; ' '
0x8DF273: call    sub_8CDCB0
0x8DF278: push    ebx
0x8DF279: mov     ecx, eax
0x8DF27B: mov     [esp+54h+var_44], eax
0x8DF27F: call    sub_8DE750
0x8DF284: mov     eax, [esp+50h+var_44]
0x8DF288: push    eax
0x8DF289: mov     ecx, edi
0x8DF28B: mov     [esi+1Ch], eax
0x8DF28E: call    sub_899A50
0x8DF293: mov     ecx, [esp+50h+var_28]
0x8DF297: mov     edx, [esp+50h+var_30]
0x8DF29B: mov     eax, [esp+50h+var_2C]
0x8DF29F: mov     [esp+50h+var_18], ecx
0x8DF2A3: mov     ecx, [esp+50h+var_38]
0x8DF2A7: mov     [esp+50h+var_20], edx
0x8DF2AB: mov     edx, [esp+50h+var_40]
0x8DF2AF: mov     [esp+50h+var_8], ecx
0x8DF2B3: mov     ecx, ds:0BA7D98h
0x8DF2B9: push    2Eh ; '.'
0x8DF2BB: mov     [esp+54h+var_1C], eax
0x8DF2BF: mov     [esp+54h+var_14], 0
0x8DF2C7: mov     [esp+54h+var_10], edx
0x8DF2CB: mov     [esp+54h+var_C], eax
0x8DF2CF: mov     [esp+54h+var_4], 0
0x8DF2D7: mov     edx, [ecx]
0x8DF2D9: push    0A0h ; ' '
0x8DF2DE: call    dword ptr [edx+10h]
0x8DF2E1: push    0
0x8DF2E3: lea     ecx, [esp+54h+var_20]
0x8DF2E7: push    ecx
0x8DF2E8: mov     ecx, eax
0x8DF2EA: mov     word ptr [eax+4], 0A0h ; ' '
0x8DF2F0: call    sub_8CDCB0
0x8DF2F5: push    ebx
0x8DF2F6: mov     ecx, eax
0x8DF2F8: mov     [esp+54h+var_44], eax
0x8DF2FC: call    sub_8DE750
0x8DF301: mov     eax, [esp+50h+var_44]
0x8DF305: push    eax
0x8DF306: mov     ecx, edi
0x8DF308: mov     [esi+20h], eax
0x8DF30B: call    sub_899A50
0x8DF310: mov     edx, [esp+50h+var_30]
0x8DF314: mov     eax, [esp+50h+var_2C]
0x8DF318: mov     ecx, [esp+50h+var_38]
0x8DF31C: mov     [esp+50h+var_20], edx
0x8DF320: mov     edx, [esp+50h+var_40]
0x8DF324: mov     [esp+50h+var_1C], eax
0x8DF328: mov     [esp+50h+var_18], ecx
0x8DF32C: mov     [esp+50h+var_14], 0
0x8DF334: mov     eax, [esp+50h+var_3C]
0x8DF338: mov     [esp+50h+var_8], ecx
0x8DF33C: mov     ecx, ds:0BA7D98h
0x8DF342: push    2Eh ; '.'
0x8DF344: mov     [esp+54h+var_10], edx
0x8DF348: mov     [esp+54h+var_C], eax
0x8DF34C: mov     [esp+54h+var_4], 0
0x8DF354: mov     edx, [ecx]
0x8DF356: push    0A0h ; ' '
0x8DF35B: call    dword ptr [edx+10h]
0x8DF35E: push    0
0x8DF360: lea     ecx, [esp+54h+var_20]
0x8DF364: push    ecx
0x8DF365: mov     ecx, eax
0x8DF367: mov     word ptr [eax+4], 0A0h ; ' '
0x8DF36D: call    sub_8CDCB0
0x8DF372: push    ebx
0x8DF373: mov     ecx, eax
0x8DF375: mov     [esp+54h+var_44], eax
0x8DF379: call    sub_8DE750
0x8DF37E: mov     eax, [esp+50h+var_44]
0x8DF382: push    eax
0x8DF383: mov     ecx, edi
0x8DF385: mov     [esi+24h], eax
0x8DF388: call    sub_899A50
0x8DF38D: mov     edx, [esp+50h+var_30]
0x8DF391: mov     eax, [esp+50h+var_2C]
0x8DF395: mov     ecx, [esp+50h+var_28]
0x8DF399: mov     [esp+50h+var_20], edx
0x8DF39D: mov     edx, [esp+50h+var_40]
0x8DF3A1: mov     [esp+50h+var_1C], eax
0x8DF3A5: mov     eax, [esp+50h+var_3C]
0x8DF3A9: mov     [esp+50h+var_18], ecx
0x8DF3AD: mov     [esp+50h+var_8], ecx
0x8DF3B1: mov     ecx, ds:0BA7D98h
0x8DF3B7: push    2Eh ; '.'
0x8DF3B9: mov     [esp+54h+var_14], 0
0x8DF3C1: mov     [esp+54h+var_10], edx
0x8DF3C5: mov     [esp+54h+var_C], eax
0x8DF3C9: mov     [esp+54h+var_4], 0
0x8DF3D1: mov     edx, [ecx]
0x8DF3D3: push    0A0h ; ' '
0x8DF3D8: call    dword ptr [edx+10h]
0x8DF3DB: push    0
0x8DF3DD: lea     ecx, [esp+54h+var_20]
0x8DF3E1: push    ecx
0x8DF3E2: mov     ecx, eax
0x8DF3E4: mov     word ptr [eax+4], 0A0h ; ' '
0x8DF3EA: call    sub_8CDCB0
0x8DF3EF: push    ebx
0x8DF3F0: mov     ecx, eax
0x8DF3F2: mov     [esp+54h+var_44], eax
0x8DF3F6: call    sub_8DE750
0x8DF3FB: mov     eax, [esp+50h+var_44]
0x8DF3FF: push    eax
0x8DF400: mov     ecx, edi
0x8DF402: mov     [esi+28h], eax
0x8DF405: call    sub_899A50
0x8DF40A: pop     edi
0x8DF40B: mov     eax, esi
0x8DF40D: pop     esi
0x8DF40E: pop     ebx
0x8DF40F: mov     esp, ebp
0x8DF411: pop     ebp
0x8DF412: retn    8
