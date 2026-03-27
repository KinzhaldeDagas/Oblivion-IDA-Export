0x5E12E0: push    ebx
0x5E12E1: push    esi
0x5E12E2: mov     esi, ecx
0x5E12E4: mov     eax, [esi]
0x5E12E6: mov     edx, [eax+330h]
0x5E12EC: xor     bl, bl
0x5E12EE: call    edx
0x5E12F0: test    eax, eax
0x5E12F2: jz      short loc_5E134E
0x5E12F4: mov     ecx, [esi+58h]
0x5E12F7: mov     eax, [ecx]
0x5E12F9: mov     edx, [eax+0CCh]
0x5E12FF: call    edx
0x5E1301: test    eax, eax
0x5E1303: jz      short loc_5E134E
0x5E1305: mov     ecx, [esi+58h]
0x5E1308: mov     eax, [ecx]
0x5E130A: mov     edx, [eax+0CCh]
0x5E1310: push    edi
0x5E1311: call    edx
0x5E1313: mov     ecx, eax; this
0x5E1315: call    TESObjectREFR_GetWorldSpace
0x5E131A: mov     ecx, esi; this
0x5E131C: mov     edi, eax
0x5E131E: call    TESObjectREFR_GetWorldSpace
0x5E1323: cmp     edi, eax
0x5E1325: jnz     short loc_5E1348
0x5E1327: mov     ecx, [esi+58h]
0x5E132A: mov     eax, [ecx]
0x5E132C: mov     edx, [eax+0CCh]
0x5E1332: call    edx
0x5E1334: mov     ecx, eax; this
0x5E1336: call    TESObjectREFR_GetParentCell
0x5E133B: mov     ecx, esi; this
0x5E133D: mov     edi, eax
0x5E133F: call    TESObjectREFR_GetParentCell
0x5E1344: cmp     edi, eax
0x5E1346: jz      short loc_5E1353
0x5E1348: pop     edi
0x5E1349: pop     esi
0x5E134A: mov     al, 1
0x5E134C: pop     ebx
0x5E134D: retn
0x5E134E: pop     esi
0x5E134F: mov     al, bl
0x5E1351: pop     ebx
0x5E1352: retn
0x5E1353: pop     edi
0x5E1354: pop     esi
0x5E1355: mov     al, bl
0x5E1357: pop     ebx
0x5E1358: retn
