0x7BD0D0: push    0FFFFFFFFh
0x7BD0D2: push    offset SEH_68D380
0x7BD0D7: mov     eax, large fs:0
0x7BD0DD: push    eax
0x7BD0DE: sub     esp, 14h
0x7BD0E1: push    ebx
0x7BD0E2: push    ebp
0x7BD0E3: push    esi
0x7BD0E4: push    edi
0x7BD0E5: mov     eax, ds:0B30AACh
0x7BD0EA: xor     eax, esp
0x7BD0EC: push    eax
0x7BD0ED: lea     eax, [esp+34h+var_C]
0x7BD0F1: mov     large fs:0, eax
0x7BD0F7: xor     ebp, ebp
0x7BD0F9: push    30h ; '0'; Size
0x7BD0FB: mov     [esp+38h+var_20], ebp
0x7BD0FF: call    FormHeapAlloc
0x7BD104: fld     dword ptr ds:0A30634h
0x7BD10A: fst     [esp+38h+var_1C]
0x7BD10E: mov     edi, eax
0x7BD110: mov     eax, [esp+38h+var_1C]
0x7BD114: fst     [esp+38h+var_18]
0x7BD118: fld     dword ptr ds:0A8F8E4h
0x7BD11E: mov     ecx, [esp+38h+var_18]
0x7BD122: fst     [esp+38h+var_14]
0x7BD126: mov     edx, [esp+38h+var_14]
0x7BD12A: fld1
0x7BD12C: mov     [edi], eax
0x7BD12E: fst     [esp+38h+var_1C]
0x7BD132: mov     [edi+4], ecx
0x7BD135: mov     eax, [esp+38h+var_1C]
0x7BD139: fxch    st(2)
0x7BD13B: fst     [esp+38h+var_18]
0x7BD13F: mov     [edi+8], edx
0x7BD142: mov     ecx, [esp+38h+var_18]
0x7BD146: fxch    st(1)
0x7BD148: fst     [esp+38h+var_14]
0x7BD14C: mov     [edi+0Ch], eax
0x7BD14F: mov     edx, [esp+38h+var_14]
0x7BD153: fxch    st(2)
0x7BD155: fst     [esp+38h+var_1C]
0x7BD159: mov     [edi+10h], ecx
0x7BD15C: mov     eax, [esp+38h+var_1C]
0x7BD160: fst     [esp+38h+var_18]
0x7BD164: mov     ecx, [esp+38h+var_18]
0x7BD168: fxch    st(2)
0x7BD16A: fst     [esp+38h+var_14]
0x7BD16E: mov     [edi+14h], edx
0x7BD171: mov     edx, [esp+38h+var_14]
0x7BD175: fxch    st(1)
0x7BD177: fstp    [esp+38h+var_1C]
0x7BD17B: mov     [edi+18h], eax
0x7BD17E: mov     eax, [esp+38h+var_1C]
0x7BD182: fxch    st(1)
0x7BD184: fstp    [esp+38h+var_18]
0x7BD188: mov     [edi+1Ch], ecx
0x7BD18B: mov     ecx, [esp+38h+var_18]
0x7BD18F: mov     [edi+20h], edx
0x7BD192: mov     [edi+24h], eax
0x7BD195: fstp    [esp+38h+var_14]
0x7BD199: mov     edx, [esp+38h+var_14]
0x7BD19D: mov     [edi+28h], ecx
0x7BD1A0: push    0Ch; Size
0x7BD1A2: mov     [edi+2Ch], edx
0x7BD1A5: call    FormHeapAlloc
0x7BD1AA: mov     ebx, eax
0x7BD1AC: mov     eax, 2
0x7BD1B1: push    40h ; '@'; Size
0x7BD1B3: mov     [ebx], bp
0x7BD1B6: mov     word ptr [ebx+2], 1
0x7BD1BC: mov     [ebx+4], ax
0x7BD1C0: mov     word ptr [ebx+6], 3
0x7BD1C6: mov     [ebx+8], bp
0x7BD1CA: mov     [ebx+0Ah], ax
0x7BD1CE: call    FormHeapAlloc
0x7BD1D3: mov     esi, eax
0x7BD1D5: add     esp, 0Ch
0x7BD1D8: mov     [esp+34h+var_20], esi
0x7BD1DC: cmp     esi, ebp
0x7BD1DE: mov     [esp+34h+var_4], ebp
0x7BD1E2: jz      short loc_7BD1F5
0x7BD1E4: push    offset sub_47EA50
0x7BD1E9: push    4
0x7BD1EB: push    10h
0x7BD1ED: push    esi
0x7BD1EE: call    sub_401080
0x7BD1F3: jmp     short loc_7BD1F7
0x7BD1F5: xor     esi, esi
0x7BD1F7: mov     eax, ds:0B25AD0h
0x7BD1FC: mov     [esi], eax
0x7BD1FE: mov     ecx, ds:0B25AD4h
0x7BD204: mov     [esi+4], ecx
0x7BD207: mov     edx, ds:0B25AD8h
0x7BD20D: mov     [esi+8], edx
0x7BD210: mov     eax, ds:0B25ADCh
0x7BD215: mov     [esi+0Ch], eax
0x7BD218: mov     eax, ds:0B25AD0h
0x7BD21D: mov     ecx, ds:0B25AD4h
0x7BD223: mov     edx, ds:0B25AD8h
0x7BD229: mov     ebp, ds:0B25ADCh
0x7BD22F: mov     [esi+10h], eax
0x7BD232: mov     [esi+14h], ecx
0x7BD235: mov     [esi+18h], edx
0x7BD238: mov     [esi+1Ch], ebp
0x7BD23B: mov     eax, ds:0B25AD0h
0x7BD240: mov     ecx, ds:0B25AD4h
0x7BD246: mov     edx, ds:0B25AD8h
0x7BD24C: mov     ebp, ds:0B25ADCh
0x7BD252: mov     [esi+20h], eax
0x7BD255: mov     [esi+24h], ecx
0x7BD258: mov     [esi+28h], edx
0x7BD25B: mov     [esi+2Ch], ebp
0x7BD25E: mov     eax, ds:0B25AD0h
0x7BD263: mov     ecx, ds:0B25AD4h
0x7BD269: mov     edx, ds:0B25AD8h
0x7BD26F: mov     ebp, ds:0B25ADCh
0x7BD275: mov     [esi+30h], eax
0x7BD278: mov     [esi+34h], ecx
0x7BD27B: mov     [esi+38h], edx
0x7BD27E: push    0C0h ; 'À'; Size
0x7BD283: mov     [esp+38h+var_4], 0FFFFFFFFh
0x7BD28B: mov     [esi+3Ch], ebp
0x7BD28E: call    FormHeapAlloc
0x7BD293: add     esp, 4
0x7BD296: mov     [esp+34h+var_20], eax
0x7BD29A: test    eax, eax
0x7BD29C: mov     [esp+34h+var_4], 1
0x7BD2A4: jz      short loc_7BD2BE
0x7BD2A6: push    ebx
0x7BD2A7: push    2
0x7BD2A9: push    0
0x7BD2AB: push    0
0x7BD2AD: push    0
0x7BD2AF: push    esi
0x7BD2B0: push    0
0x7BD2B2: push    edi
0x7BD2B3: push    4
0x7BD2B5: mov     ecx, eax
0x7BD2B7: call    sub_7174B0
0x7BD2BC: jmp     short loc_7BD2C0
0x7BD2BE: xor     eax, eax
0x7BD2C0: test    eax, eax
0x7BD2C2: mov     esi, [esp+34h+arg_0]
0x7BD2C6: mov     [esi], eax
0x7BD2C8: jz      short loc_7BD2D4
0x7BD2CA: add     eax, 4
0x7BD2CD: push    eax; lpAddend
0x7BD2CE: call    dword ptr ds:0A28078h
0x7BD2D4: fldz
0x7BD2D6: mov     eax, [esi]
0x7BD2D8: mov     eax, [eax+0B4h]
0x7BD2DE: fst     [esp+34h+var_1C]
0x7BD2E2: mov     ecx, [esp+34h+var_1C]
0x7BD2E6: fst     [esp+34h+var_18]
0x7BD2EA: mov     edx, [esp+34h+var_18]
0x7BD2EE: fstp    [esp+34h+var_14]
0x7BD2F2: fld     dword ptr ds:0A342A4h
0x7BD2F8: mov     edi, [esp+34h+var_14]
0x7BD2FC: mov     [eax+0Ch], ecx
0x7BD2FF: fstp    [esp+34h+var_10]
0x7BD303: mov     ecx, [esp+34h+var_10]
0x7BD307: mov     [eax+10h], edx
0x7BD30A: mov     [eax+14h], edi
0x7BD30D: mov     [eax+18h], ecx
0x7BD310: mov     eax, esi
0x7BD312: mov     ecx, [esp+34h+var_C]
0x7BD316: mov     large fs:0, ecx
0x7BD31D: pop     ecx
0x7BD31E: pop     edi
0x7BD31F: pop     esi
0x7BD320: pop     ebp
0x7BD321: pop     ebx
0x7BD322: add     esp, 20h
0x7BD325: retn
