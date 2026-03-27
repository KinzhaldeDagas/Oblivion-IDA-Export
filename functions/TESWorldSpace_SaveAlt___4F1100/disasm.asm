0x4F1100: push    ecx
0x4F1101: push    esi
0x4F1102: mov     esi, ecx
0x4F1104: call    TESForm_InitializeFormRecord
0x4F1109: lea     ecx, [esi+18h]
0x4F110C: call    TESFullName_Save
0x4F1111: mov     eax, [esi+7Ch]
0x4F1114: test    eax, eax
0x4F1116: mov     [esp+8+Src], 0
0x4F111E: jz      short loc_4F1140
0x4F1120: mov     eax, [eax+0Ch]
0x4F1123: push    4; Size
0x4F1125: lea     ecx, [esp+0Ch+Src]
0x4F1129: push    ecx; Src
0x4F112A: push    4D414E57h; int
0x4F112F: mov     [esp+14h+Src], eax
0x4F1133: call    TESForm_PutFormRecordChunkData
0x4F1138: add     esp, 0Ch
0x4F113B: jmp     loc_4F11E1
0x4F1140: mov     eax, [esi+58h]
0x4F1143: test    eax, eax
0x4F1145: jz      short loc_4F1162
0x4F1147: mov     edx, [eax+0Ch]
0x4F114A: push    4; Size
0x4F114C: lea     eax, [esp+0Ch+Src]
0x4F1150: push    eax; Src
0x4F1151: push    4D414E43h; int
0x4F1156: mov     [esp+14h+Src], edx
0x4F115A: call    TESForm_PutFormRecordChunkData
0x4F115F: add     esp, 0Ch
0x4F1162: mov     edx, [esi+7Ch]
0x4F1165: test    edx, edx
0x4F1167: push    edi
0x4F1168: mov     edi, ds:0B360ACh
0x4F116E: jz      short loc_4F1179
0x4F1170: mov     ecx, edx; a1
0x4F1172: call    TESWorldSpace__GetWaterFormParents
0x4F1177: jmp     short loc_4F1185
0x4F1179: mov     eax, [esi+80h]
0x4F117F: test    eax, eax
0x4F1181: jnz     short loc_4F1189
0x4F1183: mov     eax, edi
0x4F1185: test    eax, eax
0x4F1187: jz      short loc_4F11BD
0x4F1189: test    edx, edx
0x4F118B: jz      short loc_4F1196
0x4F118D: mov     ecx, edx; a1
0x4F118F: call    TESWorldSpace__GetWaterFormParents
0x4F1194: jmp     short loc_4F11A2
0x4F1196: mov     eax, [esi+80h]
0x4F119C: test    eax, eax
0x4F119E: jnz     short loc_4F11A2
0x4F11A0: mov     eax, edi
0x4F11A2: mov     ecx, [eax+0Ch]
0x4F11A5: push    4; Size
0x4F11A7: lea     edx, [esp+10h+Src]
0x4F11AB: push    edx; Src
0x4F11AC: push    324D414Eh; int
0x4F11B1: mov     [esp+18h+Src], ecx
0x4F11B5: call    TESForm_PutFormRecordChunkData
0x4F11BA: add     esp, 0Ch
0x4F11BD: push    4E4F4349h
0x4F11C2: lea     ecx, [esi+24h]
0x4F11C5: call    TESTexture_Save
0x4F11CA: push    10h; Size
0x4F11CC: lea     eax, [esi+84h]
0x4F11D2: push    eax; Src
0x4F11D3: push    4D414E4Dh; int
0x4F11D8: call    TESForm_PutFormRecordChunkData
0x4F11DD: add     esp, 0Ch
0x4F11E0: pop     edi
0x4F11E1: push    1; Size
0x4F11E3: lea     ecx, [esi+5Ch]
0x4F11E6: push    ecx; Src
0x4F11E7: mov     ecx, esi; this
0x4F11E9: call    TESForm_SaveGenericComponents
0x4F11EE: push    8; Size
0x4F11F0: lea     edx, [esi+98h]
0x4F11F6: push    edx; Src
0x4F11F7: push    304D414Eh; int
0x4F11FC: call    TESForm_PutFormRecordChunkData
0x4F1201: push    8; Size
0x4F1203: lea     eax, [esi+0A0h]
0x4F1209: push    eax; Src
0x4F120A: push    394D414Eh; int
0x4F120F: call    TESForm_PutFormRecordChunkData
0x4F1214: mov     eax, [esi+94h]
0x4F121A: add     esp, 18h
0x4F121D: test    eax, eax
0x4F121F: jz      short loc_4F122F
0x4F1221: push    eax
0x4F1222: push    4D414E53h
0x4F1227: call    TESForm_PutCurrentChunkData4
0x4F122C: add     esp, 8
0x4F122F: mov     ecx, esi; this
0x4F1231: call    TESForm_FinalizeFormRecord
0x4F1236: pop     esi
0x4F1237: pop     ecx
0x4F1238: retn
