0x7E1120: push    0FFFFFFFFh
0x7E1122: push    offset SEH_7E1120
0x7E1127: mov     eax, large fs:0
0x7E112D: push    eax
0x7E112E: push    ecx
0x7E112F: push    ebx
0x7E1130: push    ebp
0x7E1131: push    esi
0x7E1132: push    edi
0x7E1133: mov     eax, ds:0B30AACh
0x7E1138: xor     eax, esp
0x7E113A: push    eax; _DWORD
0x7E113B: lea     eax, [esp+24h+var_C]
0x7E113F: mov     large fs:0, eax
0x7E1145: mov     esi, ecx
0x7E1147: mov     eax, [esi]
0x7E1149: mov     edx, [eax+80h]
0x7E114F: call    edx
0x7E1151: cmp     dword ptr ds:0B42D78h, 0
0x7E1158: jz      short loc_7E1169
0x7E115A: push    1; _DWORD
0x7E115C: push    0; _DWORD
0x7E115E: call    dword ptr ds:0B42D78h
0x7E1164: add     esp, 8
0x7E1167: jmp     short loc_7E116B
0x7E1169: fldz
0x7E116B: fstp    [esp+24h+var_10]
0x7E116F: mov     eax, [esi+0D4h]
0x7E1175: fld     [esp+24h+var_10]
0x7E1179: lea     edi, [esi+0D4h]
0x7E117F: fdiv    qword ptr ds:0A492B0h
0x7E1185: fmul    dword ptr ds:0B45FD4h
0x7E118B: fstp    dword ptr [esi+100h]
0x7E1191: mov     eax, [eax+24h]
0x7E1194: mov     ebp, [eax]
0x7E1196: mov     ebx, [ebp+4]
0x7E1199: test    ebx, ebx
0x7E119B: jz      short loc_7E11C0
0x7E119D: lea     ecx, [ebx+4]
0x7E11A0: push    ecx; lpAddend
0x7E11A1: call    dword ptr ds:0A2807Ch
0x7E11A7: test    eax, eax
0x7E11A9: jnz     short loc_7E11B9
0x7E11AB: test    ebx, ebx
0x7E11AD: jz      short loc_7E11B9
0x7E11AF: mov     edx, [ebx]
0x7E11B1: mov     eax, [edx]
0x7E11B3: push    1
0x7E11B5: mov     ecx, ebx
0x7E11B7: call    eax
0x7E11B9: mov     dword ptr [ebp+4], 0
0x7E11C0: mov     eax, [edi]
0x7E11C2: mov     ecx, [eax+24h]
0x7E11C5: mov     ebp, [ecx+4]
0x7E11C8: mov     ebx, [ebp+4]
0x7E11CB: test    ebx, ebx
0x7E11CD: jz      short loc_7E11F2
0x7E11CF: lea     edx, [ebx+4]
0x7E11D2: push    edx; lpAddend
0x7E11D3: call    dword ptr ds:0A2807Ch
0x7E11D9: test    eax, eax
0x7E11DB: jnz     short loc_7E11EB
0x7E11DD: test    ebx, ebx
0x7E11DF: jz      short loc_7E11EB
0x7E11E1: mov     eax, [ebx]
0x7E11E3: mov     edx, [eax]
0x7E11E5: push    1
0x7E11E7: mov     ecx, ebx
0x7E11E9: call    edx
0x7E11EB: mov     dword ptr [ebp+4], 0
0x7E11F2: mov     eax, [edi]
0x7E11F4: mov     eax, [eax+24h]
0x7E11F7: mov     ebp, [eax+8]
0x7E11FA: mov     ebx, [ebp+4]
0x7E11FD: test    ebx, ebx
0x7E11FF: jz      short loc_7E1224
0x7E1201: lea     ecx, [ebx+4]
0x7E1204: push    ecx; lpAddend
0x7E1205: call    dword ptr ds:0A2807Ch
0x7E120B: test    eax, eax
0x7E120D: jnz     short loc_7E121D
0x7E120F: test    ebx, ebx
0x7E1211: jz      short loc_7E121D
0x7E1213: mov     edx, [ebx]
0x7E1215: mov     eax, [edx]
0x7E1217: push    1
0x7E1219: mov     ecx, ebx
0x7E121B: call    eax
0x7E121D: mov     dword ptr [ebp+4], 0
0x7E1224: mov     eax, [esi+0D0h]
0x7E122A: cmp     eax, 6; switch 7 cases
0x7E122D: ja      def_7E1233
0x7E1233: jmp     ds:jpt_7E1233[eax*4]; switch jump
0x7E123A: mov     eax, [edi]; jumptable 007E1233 case 0
0x7E123C: mov     ecx, [eax+24h]
0x7E123F: mov     ebx, [ecx]
0x7E1241: test    ebx, ebx
0x7E1243: mov     [esp+30h+var_1C], ebx
0x7E1247: jz      short loc_7E124D
0x7E1249: add     dword ptr [ebx+5Ch], 1
0x7E124D: push    1
0x7E124F: push    ebx
0x7E1250: mov     [esp+38h+var_10], 0
0x7E1258: call    sub_8011E0
0x7E125D: mov     ecx, [esi+0DCh]; this
0x7E1263: add     esp, 8
0x7E1266: call    BSRenderedTexture__GetInnerTexture
0x7E126B: push    eax; texture
0x7E126C: mov     ecx, ebx; this
0x7E126E: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x7E1273: mov     eax, [edi]
0x7E1275: mov     edx, [eax+24h]
0x7E1278: mov     eax, [edx+4]
0x7E127B: push    eax
0x7E127C: lea     ecx, [esp+34h+var_1C]
0x7E1280: call    sub_7AEC20
0x7E1285: mov     ebx, [esp+30h+var_1C]
0x7E1289: push    1
0x7E128B: push    ebx
0x7E128C: call    sub_8011E0
0x7E1291: mov     ecx, [esi+0D8h]
0x7E1297: jmp     loc_7E1367
0x7E129C: mov     eax, [edi]; jumptable 007E1233 cases 1-4
0x7E129E: mov     eax, [eax+24h]
0x7E12A1: mov     ebx, [eax]
0x7E12A3: test    ebx, ebx
0x7E12A5: mov     [esp+30h+var_1C], ebx
0x7E12A9: jz      short loc_7E12AF
0x7E12AB: add     dword ptr [ebx+5Ch], 1
0x7E12AF: push    3
0x7E12B1: push    ebx
0x7E12B2: mov     [esp+38h+var_10], 1
0x7E12BA: call    sub_8011E0
0x7E12BF: mov     ecx, [esi+0E0h]; this
0x7E12C5: add     esp, 8
0x7E12C8: call    BSRenderedTexture__GetInnerTexture
0x7E12CD: push    eax; texture
0x7E12CE: mov     ecx, ebx; this
0x7E12D0: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x7E12D5: mov     eax, [edi]
0x7E12D7: mov     ecx, [eax+24h]
0x7E12DA: mov     eax, [ecx+4]
0x7E12DD: push    eax
0x7E12DE: lea     ecx, [esp+34h+var_1C]
0x7E12E2: call    sub_7AEC20
0x7E12E7: mov     ebx, [esp+30h+var_1C]
0x7E12EB: push    3
0x7E12ED: push    ebx
0x7E12EE: call    sub_8011E0
0x7E12F3: mov     ecx, [esi+0E4h]; this
0x7E12F9: add     esp, 8
0x7E12FC: call    BSRenderedTexture__GetInnerTexture
0x7E1301: push    eax; texture
0x7E1302: mov     ecx, ebx; this
0x7E1304: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x7E1309: mov     eax, [edi]
0x7E130B: mov     edx, [eax+24h]
0x7E130E: mov     eax, [edx+8]
0x7E1311: push    eax
0x7E1312: lea     ecx, [esp+34h+var_1C]
0x7E1316: call    sub_7AEC20
0x7E131B: mov     ebx, [esp+30h+var_1C]
0x7E131F: jmp     short loc_7E1359
0x7E1321: mov     eax, [edi]; jumptable 007E1233 case 5
0x7E1323: mov     eax, [eax+24h]
0x7E1326: mov     ebx, [eax]
0x7E1328: test    ebx, ebx
0x7E132A: mov     [esp+30h+var_1C], ebx
0x7E132E: jz      short loc_7E1334
0x7E1330: add     dword ptr [ebx+5Ch], 1
0x7E1334: mov     [esp+30h+var_10], 2
0x7E133C: jmp     short loc_7E1359
0x7E133E: mov     eax, [edi]; jumptable 007E1233 case 6
0x7E1340: mov     ecx, [eax+24h]
0x7E1343: mov     ebx, [ecx]
0x7E1345: test    ebx, ebx
0x7E1347: mov     [esp+30h+var_1C], ebx
0x7E134B: jz      short loc_7E1351
0x7E134D: add     dword ptr [ebx+5Ch], 1
0x7E1351: mov     [esp+30h+var_10], 3
0x7E1359: push    1
0x7E135B: push    ebx
0x7E135C: call    sub_8011E0
0x7E1361: mov     ecx, [esi+0ECh]; this
0x7E1367: add     esp, 8
0x7E136A: call    BSRenderedTexture__GetInnerTexture
0x7E136F: push    eax; texture
0x7E1370: mov     ecx, ebx; this
0x7E1372: call    NiD3DTextureStage_SetTexture; Replace NiD3DTextureStage::Texture at +0x04 with reference-count transfer. Lighting30 uses this to bind BSRenderedTexture::GetInnerTexture(current ShadowSceneLight +0x114) to the SimpleShadow pass.
0x7E1377: or      eax, 0FFFFFFFFh
0x7E137A: test    ebx, ebx
0x7E137C: mov     [esp+30h+var_10], eax
0x7E1380: jz      short def_7E1233
0x7E1382: add     [ebx+5Ch], eax
0x7E1385: jnz     short def_7E1233
0x7E1387: mov     ecx, ebx
0x7E1389: call    sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x75FA70: mov     ecx, [ecx]
0x75FA72: test    ecx, ecx
0x75FA74: jz      short locret_75FA81
0x75FA76: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x75FA7A: jnz     short locret_75FA81
0x75FA7C: jmp     sub_772560; MoonSugarEffect decode: releases or frees NiD3DTextureStage; pool-owned stages return to dword_B4275C after texture/state cleanup.
0x75FA81: retn
0x9CF500: lea     ecx, [ebp-10h]
0x9CF503: jmp     loc_75FA70
0x9CF508: lea     ecx, [ebp-10h]
0x9CF50B: jmp     loc_75FA70
0x9CF510: lea     ecx, [ebp-10h]
0x9CF513: jmp     loc_75FA70
0x9CF518: lea     ecx, [ebp-10h]
0x9CF51B: jmp     loc_75FA70
0x9CF520: mov     edx, [esp+arg_4]
0x9CF524: lea     eax, [edx-14h]
0x9CF527: mov     ecx, [edx-18h]
0x9CF52A: xor     ecx, eax
0x9CF52C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CF531: mov     eax, offset stru_AF8160
0x9CF536: jmp     ___CxxFrameHandler3
