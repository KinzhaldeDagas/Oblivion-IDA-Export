0x7B1070: push    0FFFFFFFFh
0x7B1072: push    offset SEH_8122A0
0x7B1077: mov     eax, large fs:0
0x7B107D: push    eax
0x7B107E: push    ecx
0x7B107F: push    ebx
0x7B1080: push    esi
0x7B1081: push    edi
0x7B1082: mov     eax, ds:0B30AACh
0x7B1087: xor     eax, esp
0x7B1089: push    eax
0x7B108A: lea     eax, [esp+20h+var_C]
0x7B108E: mov     large fs:0, eax
0x7B1094: push    8; Size
0x7B1096: call    FormHeapAlloc
0x7B109B: add     esp, 4
0x7B109E: mov     [esp+20h+var_10], eax
0x7B10A2: xor     edi, edi
0x7B10A4: cmp     eax, edi
0x7B10A6: mov     [esp+20h+var_4], edi
0x7B10AA: jz      short loc_7B10B5
0x7B10AC: mov     ecx, eax
0x7B10AE: call    ShaderDefinition__Init
0x7B10B3: mov     edi, eax
0x7B10B5: mov     eax, ds:0B43104h
0x7B10BA: push    1; StreamCount
0x7B10BC: push    2; a2
0x7B10BE: push    eax; a1
0x7B10BF: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7B10C7: call    CreateDX9ShaderDeclaration
0x7B10CC: mov     esi, [edi]
0x7B10CE: mov     ebx, eax
0x7B10D0: add     esp, 0Ch
0x7B10D3: cmp     esi, ebx
0x7B10D5: jz      short loc_7B1107
0x7B10D7: test    esi, esi
0x7B10D9: jz      short loc_7B10F7
0x7B10DB: lea     ecx, [esi+4]
0x7B10DE: push    ecx; lpAddend
0x7B10DF: call    dword ptr ds:0A2807Ch
0x7B10E5: test    eax, eax
0x7B10E7: jnz     short loc_7B10F7
0x7B10E9: test    esi, esi
0x7B10EB: jz      short loc_7B10F7
0x7B10ED: mov     edx, [esi]
0x7B10EF: mov     eax, [edx]
0x7B10F1: push    1
0x7B10F3: mov     ecx, esi
0x7B10F5: call    eax
0x7B10F7: test    ebx, ebx
0x7B10F9: mov     [edi], ebx
0x7B10FB: jz      short loc_7B1107
0x7B10FD: add     ebx, 4
0x7B1100: push    ebx; lpAddend
0x7B1101: call    dword ptr ds:0A28078h
0x7B1107: mov     ecx, [edi]
0x7B1109: mov     edx, [ecx]
0x7B110B: mov     eax, [edx+50h]
0x7B110E: push    0
0x7B1110: push    2
0x7B1112: push    0
0x7B1114: push    0
0x7B1116: push    0
0x7B1118: call    eax
0x7B111A: mov     ecx, [edi]
0x7B111C: mov     edx, [ecx]
0x7B111E: mov     eax, [edx+50h]
0x7B1121: push    0
0x7B1123: push    1
0x7B1125: push    5
0x7B1127: push    7
0x7B1129: push    1
0x7B112B: call    eax
0x7B112D: mov     ecx, [edi]
0x7B112F: test    ecx, ecx
0x7B1131: jz      short loc_7B114E
0x7B1133: mov     edx, [ecx]
0x7B1135: mov     eax, [edx+4]
0x7B1138: call    eax
0x7B113A: test    eax, eax
0x7B113C: jz      short loc_7B114E
0x7B113E: mov     edi, edi
0x7B1140: cmp     eax, offset dword_B3F684
0x7B1145: jz      short loc_7B114E
0x7B1147: mov     eax, [eax+4]
0x7B114A: test    eax, eax
0x7B114C: jnz     short loc_7B1140
0x7B114E: push    0E4h ; 'ä'; Size
0x7B1153: call    FormHeapAlloc
0x7B1158: add     esp, 4
0x7B115B: mov     [esp+20h+var_10], eax
0x7B115F: test    eax, eax
0x7B1161: mov     [esp+20h+var_4], 1
0x7B1169: jz      short loc_7B1176
0x7B116B: mov     ecx, eax; this
0x7B116D: call    ??0BlurShader@@QAE@XZ; BlurShader::BlurShader(void)
0x7B1172: mov     esi, eax
0x7B1174: jmp     short loc_7B1178
0x7B1176: xor     esi, esi
0x7B1178: mov     edx, [esi]
0x7B117A: mov     eax, [edx+84h]
0x7B1180: mov     ecx, esi
0x7B1182: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7B118A: call    eax
0x7B118C: mov     edx, [esi]
0x7B118E: mov     eax, [edx+0B0h]
0x7B1194: mov     ecx, esi
0x7B1196: call    eax
0x7B1198: mov     edx, [esi]
0x7B119A: mov     eax, [edx+0B4h]
0x7B11A0: mov     ecx, esi
0x7B11A2: call    eax
0x7B11A4: mov     ebx, [edi+4]
0x7B11A7: cmp     ebx, esi
0x7B11A9: jz      short loc_7B11D8
0x7B11AB: test    ebx, ebx
0x7B11AD: jz      short loc_7B11CB
0x7B11AF: lea     ecx, [ebx+4]
0x7B11B2: push    ecx; lpAddend
0x7B11B3: call    dword ptr ds:0A2807Ch
0x7B11B9: test    eax, eax
0x7B11BB: jnz     short loc_7B11CB
0x7B11BD: test    ebx, ebx
0x7B11BF: jz      short loc_7B11CB
0x7B11C1: mov     edx, [ebx]
0x7B11C3: mov     eax, [edx]
0x7B11C5: push    1
0x7B11C7: mov     ecx, ebx
0x7B11C9: call    eax
0x7B11CB: mov     [edi+4], esi
0x7B11CE: add     esi, 4
0x7B11D1: push    esi; lpAddend
0x7B11D2: call    dword ptr ds:0A28078h
0x7B11D8: mov     ecx, [edi+4]
0x7B11DB: mov     edx, [ecx]
0x7B11DD: mov     eax, [edi]
0x7B11DF: mov     edx, [edx+54h]
0x7B11E2: push    eax
0x7B11E3: call    edx
0x7B11E5: mov     eax, edi
0x7B11E7: mov     ecx, dword ptr [esp+20h+var_C]
0x7B11EB: mov     large fs:0, ecx
0x7B11F2: pop     ecx
0x7B11F3: pop     edi
0x7B11F4: pop     esi
0x7B11F5: pop     ebx
0x7B11F6: add     esp, 10h
0x7B11F9: retn
