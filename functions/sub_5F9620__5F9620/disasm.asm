0x5F9620: push    ebp
0x5F9621: mov     ebp, esp
0x5F9623: and     esp, 0FFFFFFF0h
0x5F9626: push    0FFFFFFFFh
0x5F9628: push    offset SEH_5F9620
0x5F962D: mov     eax, large fs:0
0x5F9633: push    eax
0x5F9634: sub     esp, 0A8h
0x5F963A: mov     eax, ds:0B30AACh
0x5F963F: xor     eax, esp
0x5F9641: mov     [esp+0B4h+var_14], eax
0x5F9648: push    ebx
0x5F9649: push    esi
0x5F964A: push    edi
0x5F964B: mov     eax, ds:0B30AACh
0x5F9650: xor     eax, esp
0x5F9652: push    eax
0x5F9653: lea     eax, [esp+0C4h+var_C]
0x5F965A: mov     large fs:0, eax
0x5F9660: mov     esi, ecx
0x5F9662: mov     [esp+0C4h+var_A9], 0
0x5F9667: call    TESObjectREFR_GetParentCell
0x5F966C: mov     edi, eax
0x5F966E: test    edi, edi
0x5F9670: jz      short loc_5F9695
0x5F9672: mov     ecx, edi; this
0x5F9674: call    TESObjectCELL_IsInterior
0x5F9679: test    al, al
0x5F967B: jz      short loc_5F968D
0x5F967D: lea     ecx, [edi+28h]
0x5F9680: call    sub_424180
0x5F9685: mov     ebx, eax
0x5F9687: mov     [esp+0C4h+var_9C], eax
0x5F968B: jmp     short loc_5F969B
0x5F968D: mov     ebx, ds:0B35C24h
0x5F9693: jmp     short loc_5F9697
0x5F9695: xor     ebx, ebx
0x5F9697: mov     [esp+0C4h+var_9C], ebx
0x5F969B: mov     eax, ds:0B333C4h
0x5F96A0: mov     ecx, [esi+58h]
0x5F96A3: test    ecx, ecx
0x5F96A5: mov     edi, [eax+1F4h]
0x5F96AB: mov     [esp+0C4h+var_80], edi
0x5F96AF: jz      short loc_5F96CF
0x5F96B1: mov     edx, [ecx]
0x5F96B3: mov     eax, [edx+0ECh]
0x5F96B9: push    1
0x5F96BB: call    eax
0x5F96BD: test    eax, eax
0x5F96BF: jz      short loc_5F96CF
0x5F96C1: cmp     dword ptr [eax+8], 0
0x5F96C5: jz      short loc_5F96CF
0x5F96C7: fld     dword ptr ds:0B37D38h
0x5F96CD: jmp     short loc_5F96D5
0x5F96CF: fild    dword ptr ds:0B37D30h
0x5F96D5: test    ebx, ebx
0x5F96D7: fstp    [esp+0C4h+var_98]
0x5F96DB: jz      loc_5F9E7A
0x5F96E1: test    edi, edi
0x5F96E3: jz      loc_5F9E7A
0x5F96E9: mov     ecx, edi
0x5F96EB: call    sub_535510
0x5F96F0: test    eax, eax
0x5F96F2: jnz     loc_5F9E7A
0x5F96F8: lea     ecx, [esp+0C4h+var_60]
0x5F96FC: push    ecx
0x5F96FD: lea     edx, [esp+0C8h+var_54]
0x5F9701: push    edx
0x5F9702: mov     ecx, esi
0x5F9704: call    sub_5F11F0
0x5F9709: push    ebx
0x5F970A: mov     ecx, edi
0x5F970C: call    sub_5354C0
0x5F9711: lea     eax, [esp+0C4h+var_A4]
0x5F9715: push    eax
0x5F9716: mov     ecx, esi
0x5F9718: call    sub_65ABE0
0x5F971D: movzx   eax, word ptr [eax+2]
0x5F9721: cmp     [edi+1A8h], eax
0x5F9727: jz      short loc_5F9731
0x5F9729: push    eax
0x5F972A: mov     ecx, edi
0x5F972C: call    sub_535460
0x5F9731: fld     [esp+0C4h+var_98]
0x5F9735: push    ecx
0x5F9736: fstp    [esp+0C8h+var_C8]; float
0x5F9739: lea     ecx, [esp+0C8h+var_60]
0x5F973D: push    ecx; int
0x5F973E: lea     edx, [esp+0CCh+var_54]
0x5F9742: push    edx; int
0x5F9743: mov     ecx, edi
0x5F9745: call    sub_535540
0x5F974A: test    al, al
0x5F974C: jz      loc_5F9E6F
0x5F9752: mov     ebx, edi
0x5F9754: mov     eax, [ebx+10h]
0x5F9757: mov     eax, [eax+28h]
0x5F975A: push    eax
0x5F975B: call    sub_4806E0
0x5F9760: add     esp, 4
0x5F9763: test    eax, eax
0x5F9765: jz      short loc_5F9778
0x5F9767: push    eax
0x5F9768: call    sub_4DC270
0x5F976D: add     esp, 4
0x5F9770: mov     edi, eax
0x5F9772: mov     [esp+0C4h+var_94], eax
0x5F9776: jmp     short loc_5F977E
0x5F9778: xor     edi, edi
0x5F977A: mov     [esp+0C4h+var_94], edi
0x5F977E: mov     ecx, [ebx+10h]
0x5F9781: mov     eax, [ecx+28h]
0x5F9784: cmp     byte ptr [eax+18h], 1
0x5F9788: jnz     loc_5F9C38
0x5F978E: mov     ebx, [eax+10h]
0x5F9791: add     ebx, eax
0x5F9793: jz      loc_5F9C38
0x5F9799: mov     edx, [ebx+0Ch]
0x5F979C: mov     eax, [esi]
0x5F979E: mov     [esp+0C4h+var_98], edx
0x5F97A2: mov     edx, [eax+154h]
0x5F97A8: mov     ecx, esi
0x5F97AA: mov     [esp+0C4h+var_A9], 1
0x5F97AF: call    edx
0x5F97B1: test    eax, eax
0x5F97B3: jz      short loc_5F9819
0x5F97B5: mov     ecx, [esi+58h]
0x5F97B8: lea     edi, [eax+64h]
0x5F97BB: mov     eax, [ecx]
0x5F97BD: mov     edx, [eax+310h]
0x5F97C3: call    edx
0x5F97C5: push    eax
0x5F97C6: lea     eax, [esp+0C8h+var_8C]
0x5F97CA: push    eax
0x5F97CB: mov     ecx, edi
0x5F97CD: call    sub_53D4B0
0x5F97D2: mov     ecx, [eax]
0x5F97D4: mov     edx, [eax+4]
0x5F97D7: mov     eax, [eax+8]
0x5F97DA: mov     [esp+0C4h+var_7C], ecx
0x5F97DE: lea     ecx, [esp+0C4h+a2]
0x5F97E5: push    ecx; a2
0x5F97E6: mov     ecx, esi; this
0x5F97E8: mov     [esp+0C8h+var_78], edx
0x5F97EC: mov     [esp+0C8h+var_74], eax
0x5F97F0: call    sub_5E6A40
0x5F97F5: push    eax
0x5F97F6: lea     edx, [esp+0C8h+var_48]
0x5F97FD: push    edx
0x5F97FE: mov     ecx, edi
0x5F9800: call    sub_53D4B0
0x5F9805: mov     ecx, [eax]
0x5F9807: mov     edx, [eax+4]
0x5F980A: mov     eax, [eax+8]
0x5F980D: mov     [esp+0C4h+var_8C], ecx
0x5F9811: mov     [esp+0C4h+var_88], edx
0x5F9815: mov     [esp+0C4h+var_84], eax
0x5F9819: fld     [esp+0C4h+var_8C]
0x5F981D: lea     ecx, [esp+0C4h+var_7C]
0x5F9821: fsub    [esp+0C4h+var_7C]
0x5F9825: fstp    [esp+0C4h+var_A8]
0x5F9829: fld     [esp+0C4h+var_88]
0x5F982D: fsub    [esp+0C4h+var_78]
0x5F9831: fstp    [esp+0C4h+var_A0]
0x5F9835: fld     [esp+0C4h+var_84]
0x5F9839: fsub    [esp+0C4h+var_74]
0x5F983D: fstp    [esp+0C4h+var_90]
0x5F9841: fld     [esp+0C4h+var_A8]
0x5F9845: fstp    [esp+0C4h+var_7C]
0x5F9849: fld     [esp+0C4h+var_A0]
0x5F984D: fstp    [esp+0C4h+var_78]
0x5F9851: fld     [esp+0C4h+var_90]
0x5F9855: fstp    [esp+0C4h+var_74]
0x5F9859: call    sub_43F350
0x5F985E: mov     ecx, [esp+0C4h+var_80]
0x5F9862: fstp    st
0x5F9864: mov     edx, [ecx+10h]
0x5F9867: push    edx
0x5F9868: lea     eax, [esp+0C8h+var_6C]
0x5F986C: push    eax
0x5F986D: call    sub_43F3E0
0x5F9872: mov     ecx, [esi+58h]
0x5F9875: add     esp, 8
0x5F9878: test    ecx, ecx
0x5F987A: jz      short loc_5F9891
0x5F987C: mov     edx, [ecx]
0x5F987E: mov     eax, [edx+0ECh]
0x5F9884: push    1
0x5F9886: call    eax
0x5F9888: test    eax, eax
0x5F988A: jz      short loc_5F9891
0x5F988C: mov     eax, [eax+8]
0x5F988F: jmp     short loc_5F9893
0x5F9891: xor     eax, eax
0x5F9893: test    eax, eax
0x5F9895: jz      short loc_5F989C
0x5F9897: fld     dword ptr [eax+7Ch]
0x5F989A: jmp     short loc_5F98B8
0x5F989C: push    4
0x5F989E: mov     ecx, esi
0x5F98A0: call    sub_5E4330
0x5F98A5: test    eax, eax
0x5F98A7: jz      short loc_5F98B1
0x5F98A9: mov     eax, [eax+8]
0x5F98AC: fld     dword ptr [eax+58h]
0x5F98AF: jmp     short loc_5F98B8
0x5F98B1: fldz
0x5F98B3: mov     [esp+0C4h+var_A9], 0
0x5F98B8: mov     ecx, [esp+0C4h+var_80]
0x5F98BC: fstp    [esp+0C4h+var_A0]
0x5F98C0: fld     [esp+0C4h+var_A0]
0x5F98C4: mov     edx, [ecx+10h]
0x5F98C7: fadd    qword ptr ds:0A30E48h
0x5F98CD: mov     ecx, [esp+0C4h+var_98]
0x5F98D1: mov     edi, [edx+2Ch]
0x5F98D4: lea     eax, [esp+0C4h+var_A4]
0x5F98D8: push    eax
0x5F98D9: fstp    [esp+0C8h+var_A0]
0x5F98DD: mov     [esp+0C8h+var_A8], 0
0x5F98E5: call    sub_497340
0x5F98EA: mov     ecx, [eax]
0x5F98EC: and     ecx, 3Fh
0x5F98EF: cmp     cl, 11h
0x5F98F2: jnz     short loc_5F9906
0x5F98F4: mov     ecx, ds:0B333A0h
0x5F98FA: lea     edx, [esp+0C4h+var_6C]
0x5F98FE: push    edx
0x5F98FF: call    sub_440AC0
0x5F9904: jmp     short loc_5F993C
0x5F9906: mov     ecx, [esp+0C4h+var_98]
0x5F990A: call    sub_494F10
0x5F990F: test    eax, eax
0x5F9911: jz      short loc_5F9940
0x5F9913: cmp     edi, 0FFFFFFFFh
0x5F9916: mov     ecx, [eax+10h]
0x5F9919: mov     [esp+0C4h+var_A8], ecx
0x5F991D: jz      short loc_5F9940
0x5F991F: mov     edx, [eax]
0x5F9921: mov     ecx, eax
0x5F9923: mov     eax, [edx+88h]
0x5F9929: call    eax
0x5F992B: test    eax, eax
0x5F992D: jz      short loc_5F9940
0x5F992F: mov     edx, [eax]
0x5F9931: mov     ecx, eax
0x5F9933: mov     eax, [edx+9Ch]
0x5F9939: push    edi
0x5F993A: call    eax
0x5F993C: mov     [esp+0C4h+var_A8], eax
0x5F9940: mov     ecx, offset unk_B37138
0x5F9945: call    GameSetting_GetSafeFloatPointer
0x5F994A: fld     dword ptr [eax]
0x5F994C: sub     esp, 8
0x5F994F: fstp    [esp+0CCh+var_C8]; float
0x5F9953: fld     [esp+0CCh+var_A0]
0x5F9957: fstp    [esp+0CCh+var_CC]; float
0x5F995A: call    sub_4AC760
0x5F995F: add     esp, 8
0x5F9962: fstp    [esp+0C4h+var_A0]
0x5F9966: mov     ecx, offset unk_B37130
0x5F996B: call    GameSetting_GetSafeFloatPointer
0x5F9970: fld     dword ptr [eax]
0x5F9972: fstp    [esp+0C4h+var_90]
0x5F9976: mov     ecx, [ebx+50h]
0x5F9979: fld     [esp+0C4h+var_90]
0x5F997D: fld     st
0x5F997F: fmul    [esp+0C4h+var_7C]
0x5F9983: fstp    [esp+0C4h+var_90]
0x5F9987: fld     [esp+0C4h+var_78]
0x5F998B: fmul    st, st(1)
0x5F998D: fstp    [esp+0C4h+var_70]
0x5F9991: fmul    [esp+0C4h+var_74]
0x5F9995: fstp    [esp+0C4h+var_A4]
0x5F9999: fld     [esp+0C4h+var_90]
0x5F999D: fld     [esp+0C4h+var_A0]
0x5F99A1: fld     st
0x5F99A3: fmulp   st(2), st
0x5F99A5: fxch    st(1)
0x5F99A7: fstp    [esp+0C4h+var_90]
0x5F99AB: fld     [esp+0C4h+var_70]
0x5F99AF: fmul    st, st(1)
0x5F99B1: fstp    [esp+0C4h+var_70]
0x5F99B5: fmul    [esp+0C4h+var_A4]
0x5F99B9: fstp    [esp+0C4h+var_A4]
0x5F99BD: fld     [esp+0C4h+var_90]
0x5F99C1: fstp    [esp+0C4h+var_8C]
0x5F99C5: fld     [esp+0C4h+var_70]
0x5F99C9: fstp    [esp+0C4h+var_88]
0x5F99CD: fld     [esp+0C4h+var_A4]
0x5F99D1: fstp    [esp+0C4h+var_84]
0x5F99D5: call    sub_89DA90
0x5F99DA: mov     ecx, offset unk_B37140
0x5F99DF: fstp    [esp+0C4h+var_A0]
0x5F99E3: call    GameSetting_GetSafeFloatPointer
0x5F99E8: fld     [esp+0C4h+var_A0]
0x5F99EC: fld     dword ptr [eax]
0x5F99EE: fcompp
0x5F99F0: fnstsw  ax
0x5F99F2: test    ah, 41h
0x5F99F5: jnz     short loc_5F9A1C
0x5F99F7: mov     ecx, offset unk_B37140
0x5F99FC: call    GameSetting_GetSafeFloatPointer
0x5F9A01: fld     [esp+0C4h+var_A0]
0x5F9A05: fdiv    dword ptr [eax]
0x5F9A07: push    ecx
0x5F9A08: lea     ecx, [esp+0C8h+var_8C]
0x5F9A0C: fstp    [esp+0C8h+var_A4]
0x5F9A10: fld     [esp+0C8h+var_A4]
0x5F9A14: fstp    [esp+0C8h+var_C8]; float
0x5F9A17: call    NiPoint3__MutliplyByValue
0x5F9A1C: lea     ecx, [esp+0C4h+var_A4]
0x5F9A20: push    ecx
0x5F9A21: mov     ecx, [esp+0C8h+var_98]
0x5F9A25: call    sub_497340
0x5F9A2A: mov     edx, [eax]
0x5F9A2C: and     dl, 3Fh
0x5F9A2F: cmp     dl, 8
0x5F9A32: jnz     short loc_5F9A4D
0x5F9A34: mov     ecx, offset unk_B37148
0x5F9A39: call    GameSetting_GetSafeFloatPointer
0x5F9A3E: fld     dword ptr [eax]
0x5F9A40: push    ecx
0x5F9A41: lea     ecx, [esp+0C8h+var_8C]
0x5F9A45: fstp    [esp+0C8h+var_C8]; float
0x5F9A48: call    NiPoint3__MutliplyByValue
0x5F9A4D: lea     eax, [esp+0C4h+var_8C]
0x5F9A51: push    eax
0x5F9A52: lea     ecx, [esp+0C8h+var_30]
0x5F9A59: push    ecx
0x5F9A5A: call    sub_4529E0
0x5F9A5F: mov     ecx, [esp+0CCh+var_9C]
0x5F9A63: mov     edx, [ecx]
0x5F9A65: mov     eax, [edx+58h]
0x5F9A68: add     esp, 8
0x5F9A6B: call    eax
0x5F9A6D: mov     ecx, [esp+0C4h+var_80]
0x5F9A71: mov     edi, [ecx+10h]
0x5F9A74: mov     ecx, ebx
0x5F9A76: call    sub_8A6410
0x5F9A7B: mov     ecx, [ebx+50h]
0x5F9A7E: mov     edx, [ecx]
0x5F9A80: mov     edx, [edx+60h]
0x5F9A83: push    edi
0x5F9A84: lea     eax, [esp+0C8h+var_30]
0x5F9A8B: push    eax
0x5F9A8C: call    edx
0x5F9A8E: mov     ecx, [esp+0C4h+var_9C]
0x5F9A92: mov     eax, [ecx]
0x5F9A94: mov     edx, [eax+58h]
0x5F9A97: call    edx
0x5F9A99: mov     eax, [esp+0C4h+var_A8]
0x5F9A9D: mov     ecx, [esp+0C4h+var_98]
0x5F9AA1: mov     edx, [esp+0C4h+var_94]
0x5F9AA5: push    eax
0x5F9AA6: push    ecx
0x5F9AA7: mov     ecx, [esp+0CCh+var_6C]
0x5F9AAB: push    edx
0x5F9AAC: mov     edx, [esp+0D0h+var_68]
0x5F9AB0: sub     esp, 0Ch
0x5F9AB3: mov     eax, esp
0x5F9AB5: mov     [eax], ecx
0x5F9AB7: mov     ecx, [esp+0DCh+var_64]
0x5F9ABB: mov     [eax+4], edx
0x5F9ABE: mov     [eax+8], ecx
0x5F9AC1: mov     ecx, esi
0x5F9AC3: call    sub_5F05F0
0x5F9AC8: cmp     [esp+0C4h+var_A9], 0
0x5F9ACD: jz      loc_5F9DFE
0x5F9AD3: mov     edx, [esp+0C4h+var_7C]
0x5F9AD7: mov     eax, [esp+0C4h+var_78]
0x5F9ADB: mov     ecx, [esp+0C4h+var_74]
0x5F9ADF: mov     [esp+0C4h+var_8C], edx
0x5F9AE3: lea     edx, [esp+0C4h+var_60]
0x5F9AE7: mov     [esp+0C4h+var_88], eax
0x5F9AEB: push    edx; int
0x5F9AEC: mov     eax, edx
0x5F9AEE: mov     [esp+0C8h+var_84], ecx
0x5F9AF2: push    eax
0x5F9AF3: lea     ecx, [esp+0CCh+var_8C]
0x5F9AF7: call    sub_47D9E0
0x5F9AFC: push    ecx
0x5F9AFD: lea     ecx, [esp+0CCh+var_48]
0x5F9B04: fstp    [esp+0CCh+var_CC]; float
0x5F9B07: push    ecx; int
0x5F9B08: call    sub_47DA10
0x5F9B0D: add     esp, 0Ch
0x5F9B10: push    eax
0x5F9B11: lea     ecx, [esp+0C8h+var_8C]
0x5F9B15: call    sub_43F320
0x5F9B1A: lea     ecx, [esp+0C4h+var_8C]
0x5F9B1E: call    sub_43F350
0x5F9B23: fstp    st
0x5F9B25: mov     ecx, [esp+0C4h+var_98]
0x5F9B29: lea     edx, [esp+0C4h+var_A4]
0x5F9B2D: push    edx
0x5F9B2E: call    sub_497340
0x5F9B33: mov     eax, [eax]
0x5F9B35: and     al, 3Fh
0x5F9B37: cmp     al, 8
0x5F9B39: jnz     short loc_5F9B68
0x5F9B3B: mov     edi, [esp+0C4h+var_94]
0x5F9B3F: test    edi, edi
0x5F9B41: jz      short loc_5F9B5C
0x5F9B43: mov     edx, [edi]
0x5F9B45: mov     eax, [edx+190h]
0x5F9B4B: mov     ecx, edi
0x5F9B4D: call    eax
0x5F9B4F: test    al, al
0x5F9B51: jz      short loc_5F9B5C
0x5F9B53: mov     ecx, edi
0x5F9B55: call    sub_5E1BF0
0x5F9B5A: jmp     short loc_5F9B75
0x5F9B5C: mov     ecx, ds:0B371B0h
0x5F9B62: mov     [esp+0C4h+var_9C], ecx
0x5F9B66: jmp     short loc_5F9B79
0x5F9B68: mov     edx, [esp+0C4h+var_A8]
0x5F9B6C: push    edx
0x5F9B6D: call    sub_5361B0
0x5F9B72: add     esp, 4
0x5F9B75: mov     [esp+0C4h+var_9C], eax
0x5F9B79: cmp     [esp+0C4h+var_9C], 0
0x5F9B7E: jz      loc_5F9DFE
0x5F9B84: mov     ecx, esi; this
0x5F9B86: call    TESObjectREFR_GetParentCell
0x5F9B8B: push    esi; TESObjectREFR *
0x5F9B8C: call    sub_4C9BE0
0x5F9B91: add     esp, 4
0x5F9B94: push    3
0x5F9B96: push    eax
0x5F9B97: mov     ecx, esi; this
0x5F9B99: call    TESObjectREFR_GetParentCell
0x5F9B9E: mov     ecx, eax
0x5F9BA0: call    sub_441800
0x5F9BA5: push    20h ; ' '; Size
0x5F9BA7: mov     ebx, eax
0x5F9BA9: call    FormHeapAlloc
0x5F9BAE: mov     edi, eax
0x5F9BB0: add     esp, 4
0x5F9BB3: mov     [esp+0C4h+var_A4], edi
0x5F9BB7: xor     eax, eax
0x5F9BB9: cmp     edi, eax
0x5F9BBB: mov     [esp+0C4h+var_4], eax
0x5F9BC2: jz      short loc_5F9C1D
0x5F9BC4: fld1
0x5F9BC6: mov     ecx, [esp+0C4h+var_6C]
0x5F9BCA: mov     edx, [esp+0C4h+var_68]
0x5F9BCE: push    1; float
0x5F9BD0: sub     esp, 10h
0x5F9BD3: fstp    [esp+0D8h+var_CC]; float
0x5F9BD7: mov     eax, esp
0x5F9BD9: fld     dword ptr ds:0A31E2Ch
0x5F9BDF: mov     [eax], ecx
0x5F9BE1: mov     ecx, [esp+0D8h+var_64]
0x5F9BE5: mov     [eax+4], edx
0x5F9BE8: mov     edx, [esp+0D8h+var_8C]
0x5F9BEC: mov     [eax+8], ecx
0x5F9BEF: mov     ecx, [esp+0D8h+var_88]
0x5F9BF3: sub     esp, 0Ch
0x5F9BF6: mov     eax, esp
0x5F9BF8: mov     [eax], edx
0x5F9BFA: mov     edx, [esp+0E4h+var_84]
0x5F9BFE: mov     [eax+4], ecx
0x5F9C01: mov     [eax+8], edx
0x5F9C04: mov     eax, [esp+0E4h+var_9C]
0x5F9C08: push    eax; float
0x5F9C09: push    ebx; int
0x5F9C0A: push    ecx
0x5F9C0B: mov     ecx, esi; this
0x5F9C0D: fstp    [esp+0F0h+var_F0]; float
0x5F9C10: call    TESObjectREFR_GetParentCell
0x5F9C15: push    eax; int
0x5F9C16: mov     ecx, edi
0x5F9C18: call    sub_5713F0
0x5F9C1D: push    eax
0x5F9C1E: mov     ecx, offset ActorProcessManager_ptr
0x5F9C23: mov     [esp+0C8h+var_4], 0FFFFFFFFh
0x5F9C2E: call    sub_678D30
0x5F9C33: jmp     loc_5F9DFE
0x5F9C38: cmp     esi, ds:0B333C4h
0x5F9C3E: jz      loc_5F9E0F
0x5F9C44: push    eax
0x5F9C45: call    sub_47DDE0
0x5F9C4A: add     esp, 4
0x5F9C4D: test    eax, eax
0x5F9C4F: jz      short loc_5F9C56
0x5F9C51: mov     ebx, [eax+0Ch]
0x5F9C54: jmp     short loc_5F9C58
0x5F9C56: xor     ebx, ebx
0x5F9C58: test    edi, edi
0x5F9C5A: jz      loc_5F9E07
0x5F9C60: mov     edx, [edi]
0x5F9C62: mov     eax, [edx+190h]
0x5F9C68: mov     ecx, edi
0x5F9C6A: call    eax
0x5F9C6C: test    al, al
0x5F9C6E: jz      loc_5F9E07
0x5F9C74: mov     edx, [edi]
0x5F9C76: mov     eax, [edx+198h]
0x5F9C7C: push    0
0x5F9C7E: mov     ecx, edi
0x5F9C80: call    eax
0x5F9C82: test    al, al
0x5F9C84: jnz     loc_5F9E07
0x5F9C8A: test    ebx, ebx
0x5F9C8C: jz      loc_5F9E07
0x5F9C92: lea     ecx, [esp+0C4h+var_A4]
0x5F9C96: push    ecx
0x5F9C97: mov     ecx, ebx
0x5F9C99: call    sub_497340
0x5F9C9E: mov     edx, [eax]
0x5F9CA0: and     edx, 3Fh
0x5F9CA3: cmp     dl, 14h
0x5F9CA6: jnz     loc_5F9E07
0x5F9CAC: mov     ecx, [esi+58h]
0x5F9CAF: test    ecx, ecx
0x5F9CB1: jz      short loc_5F9CC8
0x5F9CB3: mov     eax, [ecx]
0x5F9CB5: mov     edx, [eax+0ECh]
0x5F9CBB: push    1
0x5F9CBD: call    edx
0x5F9CBF: test    eax, eax
0x5F9CC1: jz      short loc_5F9CCA
0x5F9CC3: mov     edx, [eax+8]
0x5F9CC6: jmp     short loc_5F9CCC
0x5F9CC8: xor     eax, eax
0x5F9CCA: xor     edx, edx
0x5F9CCC: test    edx, edx
0x5F9CCE: jz      short loc_5F9CD9
0x5F9CD0: movsx   ebx, byte ptr [edx+90h]
0x5F9CD7: jmp     short loc_5F9CDC
0x5F9CD9: or      ebx, 0FFFFFFFFh
0x5F9CDC: test    eax, eax
0x5F9CDE: fldz
0x5F9CE0: fstp    [esp+0C4h+var_A8]
0x5F9CE4: jz      short loc_5F9CFA
0x5F9CE6: fld1
0x5F9CE8: push    ecx
0x5F9CE9: fstp    [esp+0C8h+var_C8]
0x5F9CEC: mov     ecx, eax
0x5F9CEE: push    esi
0x5F9CEF: call    EquippedWeaponData_GetDamage
0x5F9CF4: fstp    [esp+0C4h+var_A8]
0x5F9CF8: jmp     short loc_5F9D76
0x5F9CFA: mov     ecx, esi; this
0x5F9CFC: call    Actor_IsCreature
0x5F9D01: test    al, al
0x5F9D03: jz      short loc_5F9D1F
0x5F9D05: mov     eax, [esi]
0x5F9D07: mov     edx, [eax+34Ch]
0x5F9D0D: mov     ecx, esi
0x5F9D0F: call    edx
0x5F9D11: mov     [esp+0C4h+var_A4], eax
0x5F9D15: fild    [esp+0C4h+var_A4]
0x5F9D19: fstp    [esp+0C4h+var_A8]
0x5F9D1D: jmp     short loc_5F9D76
0x5F9D1F: mov     edx, [edi]
0x5F9D21: lea     eax, [esp+0C4h+var_9C]
0x5F9D25: push    eax
0x5F9D26: mov     eax, [edx+19Ch]
0x5F9D2C: lea     ecx, [esp+0C8h+var_A8]
0x5F9D30: push    ecx
0x5F9D31: mov     ecx, edi
0x5F9D33: call    eax
0x5F9D35: mov     ecx, esi; this
0x5F9D37: push    eax
0x5F9D38: call    Actor_GetFatigueFraction
0x5F9D3D: mov     edx, [esi]
0x5F9D3F: mov     eax, [edx+284h]
0x5F9D45: push    ecx
0x5F9D46: fstp    [esp+0C8h+var_C8]; int
0x5F9D49: push    0; int
0x5F9D4B: mov     ecx, esi
0x5F9D4D: call    eax
0x5F9D4F: mov     edx, [esi]
0x5F9D51: push    eax; char
0x5F9D52: mov     eax, [edx+284h]
0x5F9D58: push    7; float
0x5F9D5A: mov     ecx, esi
0x5F9D5C: call    eax
0x5F9D5E: mov     edx, [esi]
0x5F9D60: push    eax; int
0x5F9D61: mov     eax, [edx+284h]
0x5F9D67: push    11h; int
0x5F9D69: mov     ecx, esi
0x5F9D6B: call    eax
0x5F9D6D: push    eax; int
0x5F9D6E: call    Calc_HandToHandDamage
0x5F9D73: add     esp, 1Ch
0x5F9D76: mov     ecx, edi; this
0x5F9D78: call    Actor_IsCreature
0x5F9D7D: test    al, al
0x5F9D7F: jz      short loc_5F9D8D
0x5F9D81: push    0
0x5F9D83: push    0
0x5F9D85: push    0FFFFFFFFh
0x5F9D87: push    0FFFFFFFFh
0x5F9D89: push    ebx
0x5F9D8A: push    edi
0x5F9D8B: jmp     short loc_5F9DE5
0x5F9D8D: mov     ecx, [esp+0C4h+var_94]
0x5F9D91: call    sub_5E5A00
0x5F9D96: push    0; char
0x5F9D98: mov     edi, eax
0x5F9D9A: test    edi, edi
0x5F9D9C: push    1; char
0x5F9D9E: push    0FFFFFFFFh; char
0x5F9DA0: jz      short loc_5F9DDD
0x5F9DA2: mov     ecx, [edi+8]
0x5F9DA5: call    TESObjectARMO_ISHeavyArmor
0x5F9DAA: fld     [esp+0D0h+var_A8]
0x5F9DAE: mov     edx, [esp+0D0h+var_94]
0x5F9DB2: movzx   ecx, al
0x5F9DB5: push    ecx; int
0x5F9DB6: push    ebx; int
0x5F9DB7: push    edx; int
0x5F9DB8: sub     esp, 8
0x5F9DBB: fst     [esp+0E4h+var_E0]; int
0x5F9DBF: fstp    [esp+0E4h+var_E4]; float
0x5F9DC2: push    esi; int
0x5F9DC3: call    sub_6AF880
0x5F9DC8: add     esp, 24h
0x5F9DCB: mov     ecx, edi
0x5F9DCD: call    ContainerEntryExtraData_DestroyDataTable
0x5F9DD2: push    edi
0x5F9DD3: call    FormHeapFree
0x5F9DD8: add     esp, 4
0x5F9DDB: jmp     short loc_5F9DFE
0x5F9DDD: mov     eax, [esp+0D0h+var_94]
0x5F9DE1: push    0FFFFFFFFh; int
0x5F9DE3: push    ebx; int
0x5F9DE4: push    eax; int
0x5F9DE5: fldz
0x5F9DE7: sub     esp, 8
0x5F9DEA: fstp    [esp+0E4h+var_E0]; int
0x5F9DEE: fld     [esp+0E4h+var_A8]
0x5F9DF2: fstp    [esp+0E4h+var_E4]; float
0x5F9DF5: push    esi; int
0x5F9DF6: call    sub_6AF880
0x5F9DFB: add     esp, 24h
0x5F9DFE: mov     edi, [esp+0C4h+var_94]
0x5F9E02: mov     [esp+0C4h+var_A9], 1
0x5F9E07: cmp     esi, ds:0B333C4h
0x5F9E0D: jnz     short loc_5F9E6F
0x5F9E0F: test    edi, edi
0x5F9E11: jz      short loc_5F9E2E
0x5F9E13: mov     ecx, edi; this
0x5F9E15: call    TESObjectREFR_GetParentCell
0x5F9E1A: test    eax, eax
0x5F9E1C: jz      short loc_5F9E2E
0x5F9E1E: mov     ecx, eax
0x5F9E20: call    sub_4440C0
0x5F9E25: test    eax, eax
0x5F9E27: jz      short loc_5F9E2E
0x5F9E29: mov     esi, [eax+24h]
0x5F9E2C: jmp     short loc_5F9E30
0x5F9E2E: xor     esi, esi
0x5F9E30: test    esi, esi
0x5F9E32: jz      short loc_5F9E6F
0x5F9E34: push    1; arg1
0x5F9E36: push    0; canCreate
0x5F9E38: call    InterfaceManager_GetSingleton
0x5F9E3D: add     esp, 8
0x5F9E40: cmp     edi, [eax+0C8h]
0x5F9E46: jnz     short loc_5F9E6F
0x5F9E48: push    edi
0x5F9E49: mov     ecx, esi
0x5F9E4B: call    sub_536AE0
0x5F9E50: test    al, al
0x5F9E52: jz      short loc_5F9E6F
0x5F9E54: lea     eax, [edi+44h]
0x5F9E57: test    eax, eax
0x5F9E59: jz      short loc_5F9E6F
0x5F9E5B: push    10000000h
0x5F9E60: push    eax
0x5F9E61: push    edi
0x5F9E62: call    Script_AddEventToExtraScript
0x5F9E67: add     esp, 0Ch
0x5F9E6A: mov     [esp+0C4h+var_A9], 1
0x5F9E6F: mov     ecx, [esp+0C4h+var_80]
0x5F9E73: push    0
0x5F9E75: call    sub_5354C0
0x5F9E7A: mov     al, [esp+0C4h+var_A9]
0x5F9E7E: mov     ecx, dword ptr [esp+0C4h+var_C]
0x5F9E85: mov     large fs:0, ecx
0x5F9E8C: pop     ecx
0x5F9E8D: pop     edi
0x5F9E8E: pop     esi
0x5F9E8F: pop     ebx
0x5F9E90: mov     ecx, [esp+0B4h+var_14]
0x5F9E97: xor     ecx, esp
0x5F9E99: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5F9E9E: mov     esp, ebp
0x5F9EA0: pop     ebp
0x5F9EA1: retn
