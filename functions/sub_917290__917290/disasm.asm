0x917290: push    ebp
0x917291: mov     ebp, esp
0x917293: and     esp, 0FFFFFFF0h
0x917296: sub     esp, 34h
0x917299: push    ebx
0x91729A: push    esi
0x91729B: push    edi
0x91729C: mov     edi, [ebp+arg_8]
0x91729F: lea     eax, [edi+3]
0x9172A2: and     eax, 0FFFFFFFCh
0x9172A5: mov     [esp+40h+var_28], eax
0x9172A9: cdq
0x9172AA: and     edx, 3
0x9172AD: add     eax, edx
0x9172AF: mov     ebx, eax
0x9172B1: lea     esi, [ecx+30h]
0x9172B4: mov     [ecx+3Ch], edi
0x9172B7: mov     eax, [esi+8]
0x9172BA: sar     ebx, 2
0x9172BD: and     eax, 3FFFFFFFh
0x9172C2: cmp     eax, ebx
0x9172C4: mov     [esp+40h+var_24], ecx
0x9172C8: jge     short loc_9172DE
0x9172CA: add     eax, eax
0x9172CC: cmp     ebx, eax
0x9172CE: jl      short loc_9172D2
0x9172D0: mov     eax, ebx
0x9172D2: push    30h ; '0'
0x9172D4: push    eax
0x9172D5: push    esi
0x9172D6: call    sub_8A6E40
0x9172DB: add     esp, 0Ch
0x9172DE: mov     eax, [ebp+arg_0]
0x9172E1: xor     ecx, ecx
0x9172E3: cmp     edi, 4
0x9172E6: mov     [esi+4], ebx
0x9172E9: jl      loc_9173DA
0x9172EF: mov     [esp+40h+var_2C], 1
0x9172F7: mov     ebx, [eax]
0x9172F9: mov     edx, ecx
0x9172FB: shr     edx, 2
0x9172FE: lea     edx, [edx+edx*2]
0x917301: mov     edi, ecx
0x917303: and     edi, 3
0x917306: lea     edx, [edi+edx*4]
0x917309: mov     edi, [esi]
0x91730B: mov     [edi+edx*4], ebx
0x91730E: mov     ebx, [eax+4]
0x917311: mov     edi, [esi]
0x917313: mov     [edi+edx*4+10h], ebx
0x917317: mov     ebx, [eax+8]
0x91731A: mov     edi, [esi]
0x91731C: mov     [edi+edx*4+20h], ebx
0x917320: mov     edx, [ebp+arg_4]
0x917323: mov     ebx, [eax+edx]
0x917326: mov     edi, [esp+40h+var_2C]
0x91732A: add     eax, edx
0x91732C: mov     edx, edi
0x91732E: shr     edx, 2
0x917331: and     edi, 3
0x917334: lea     edx, [edx+edx*2]
0x917337: lea     edx, [edi+edx*4]
0x91733A: mov     edi, [esi]
0x91733C: mov     [edi+edx*4], ebx
0x91733F: mov     ebx, [eax+4]
0x917342: mov     edi, [esi]
0x917344: mov     [edi+edx*4+10h], ebx
0x917348: mov     ebx, [eax+8]
0x91734B: mov     edi, [esi]
0x91734D: mov     [edi+edx*4+20h], ebx
0x917351: mov     edx, [ebp+arg_4]
0x917354: mov     edi, [esp+40h+var_2C]
0x917358: mov     ebx, [eax+edx]
0x91735B: add     eax, edx
0x91735D: lea     edx, [edi+1]
0x917360: shr     edx, 2
0x917363: inc     edi
0x917364: and     edi, 3
0x917367: lea     edx, [edx+edx*2]
0x91736A: lea     edx, [edi+edx*4]
0x91736D: mov     edi, [esi]
0x91736F: mov     [edi+edx*4], ebx
0x917372: mov     ebx, [eax+4]
0x917375: mov     edi, [esi]
0x917377: mov     [edi+edx*4+10h], ebx
0x91737B: mov     ebx, [eax+8]
0x91737E: mov     edi, [esi]
0x917380: mov     [edi+edx*4+20h], ebx
0x917384: mov     edx, [ebp+arg_4]
0x917387: mov     edi, [esp+40h+var_2C]
0x91738B: mov     ebx, [eax+edx]
0x91738E: add     eax, edx
0x917390: lea     edx, [edi+2]
0x917393: shr     edx, 2
0x917396: add     edi, 0FFFFFFFEh
0x917399: and     edi, 3
0x91739C: lea     edx, [edx+edx*2]
0x91739F: lea     edx, [edi+edx*4]
0x9173A2: mov     edi, [esi]
0x9173A4: mov     [edi+edx*4], ebx
0x9173A7: mov     ebx, [eax+4]
0x9173AA: mov     edi, [esi]
0x9173AC: mov     [edi+edx*4+10h], ebx
0x9173B0: mov     ebx, [eax+8]
0x9173B3: mov     edi, [esi]
0x9173B5: mov     [edi+edx*4+20h], ebx
0x9173B9: mov     edx, [esp+40h+var_2C]
0x9173BD: mov     edi, [ebp+arg_8]
0x9173C0: mov     ebx, [ebp+arg_4]
0x9173C3: add     edx, 4
0x9173C6: mov     [esp+40h+var_2C], edx
0x9173CA: add     ecx, 4
0x9173CD: lea     edx, [edi-3]
0x9173D0: add     eax, ebx
0x9173D2: cmp     ecx, edx
0x9173D4: jl      loc_9172F7
0x9173DA: cmp     ecx, edi
0x9173DC: jge     short loc_917416
0x9173DE: mov     edi, edi
0x9173E0: mov     ebx, [eax]
0x9173E2: mov     edx, ecx
0x9173E4: shr     edx, 2
0x9173E7: mov     edi, ecx
0x9173E9: and     edi, 3
0x9173EC: lea     edx, [edx+edx*2]
0x9173EF: lea     edx, [edi+edx*4]
0x9173F2: mov     edi, [esi]
0x9173F4: mov     [edi+edx*4], ebx
0x9173F7: mov     ebx, [eax+4]
0x9173FA: mov     edi, [esi]
0x9173FC: mov     [edi+edx*4+10h], ebx
0x917400: mov     ebx, [eax+8]
0x917403: mov     edi, [esi]
0x917405: mov     [edi+edx*4+20h], ebx
0x917409: mov     ebx, [ebp+arg_4]
0x91740C: mov     edi, [ebp+arg_8]
0x91740F: add     eax, ebx
0x917411: inc     ecx
0x917412: cmp     ecx, edi
0x917414: jl      short loc_9173E0
0x917416: mov     ebx, [ebp+arg_4]
0x917419: mov     edx, [esp+40h+var_28]
0x91741D: sub     eax, ebx
0x91741F: cmp     ecx, edx
0x917421: jge     short loc_917458
0x917423: mov     ebx, [eax]
0x917425: mov     edx, ecx
0x917427: sar     edx, 2
0x91742A: mov     edi, ecx
0x91742C: and     edi, 3
0x91742F: lea     edx, [edx+edx*2]
0x917432: lea     edx, [edi+edx*4]
0x917435: mov     edi, [esi]
0x917437: mov     [edi+edx*4], ebx
0x91743A: mov     edi, [esi]
0x91743C: mov     ebx, [eax+4]
0x91743F: mov     [edi+edx*4+10h], ebx
0x917443: mov     edi, [esi]
0x917445: mov     ebx, [eax+8]
0x917448: mov     [edi+edx*4+20h], ebx
0x91744C: mov     edx, [esp+40h+var_28]
0x917450: inc     ecx
0x917451: cmp     ecx, edx
0x917453: jl      short loc_917423
0x917455: mov     edi, [ebp+arg_8]
0x917458: mov     ecx, [ebp+arg_4]
0x91745B: mov     edx, [ebp+arg_0]
0x91745E: lea     eax, [esp+40h+var_20]
0x917462: push    eax
0x917463: push    ecx
0x917464: push    edi
0x917465: push    edx
0x917466: call    sub_8B8800
0x91746B: mov     eax, [esp+50h+var_24]
0x91746F: movaps  xmm2, [esp+50h+var_20]
0x917474: movaps  xmm1, [esp+50h+var_10]
0x917479: movaps  xmm0, xmm2
0x91747C: addps   xmm0, xmm1
0x91747F: movaps  xmmword ptr [eax+20h], xmm0
0x917483: movaps  xmm3, xmmword ptr [eax+20h]
0x917487: mov     [esp+50h+var_24], 3F000000h
0x91748F: movss   xmm0, [esp+50h+var_24]
0x917495: add     esp, 10h
0x917498: subps   xmm1, xmm2
0x91749B: movaps  xmm4, xmm0
0x91749E: shufps  xmm4, xmm0, 0
0x9174A2: mulps   xmm4, xmm3
0x9174A5: movaps  xmmword ptr [eax+20h], xmm4
0x9174A9: pop     edi
0x9174AA: movaps  xmmword ptr [eax+10h], xmm1
0x9174AE: movaps  xmm1, xmmword ptr [eax+10h]
0x9174B2: movaps  xmm2, xmm0
0x9174B5: shufps  xmm2, xmm0, 0
0x9174B9: pop     esi
0x9174BA: mulps   xmm2, xmm1
0x9174BD: movaps  xmmword ptr [eax+10h], xmm2
0x9174C1: pop     ebx
0x9174C2: mov     esp, ebp
0x9174C4: pop     ebp
0x9174C5: retn    0Ch
