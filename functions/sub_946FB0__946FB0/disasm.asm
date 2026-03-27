0x946FB0: sub     esp, 60h
0x946FB3: mov     eax, ecx
0x946FB5: mov     ecx, [eax+0Ch]
0x946FB8: push    edi
0x946FB9: xor     edi, edi
0x946FBB: cmp     ecx, edi
0x946FBD: mov     [esp+64h+var_5C], eax
0x946FC1: jz      loc_9475F6
0x946FC7: mov     eax, [eax+1Ch]
0x946FCA: cmp     eax, edi
0x946FCC: push    ebx
0x946FCD: mov     ebx, ds:0BA9DE4h
0x946FD3: mov     ecx, 80000000h
0x946FD8: push    ebp
0x946FD9: push    esi
0x946FDA: mov     [esp+70h+var_20], edi
0x946FDE: mov     [esp+70h+var_1C], edi
0x946FE2: mov     [esp+70h+var_18], ecx
0x946FE6: mov     [esp+70h+var_50], edi
0x946FEA: mov     [esp+70h+var_4C], edi
0x946FEE: mov     [esp+70h+var_48], ecx
0x946FF2: mov     [esp+70h+var_44], edi
0x946FF6: mov     [esp+70h+var_40], edi
0x946FFA: mov     [esp+70h+var_3C], ecx
0x946FFE: jle     loc_947149
0x947004: mov     edx, [esp+70h+var_5C]
0x947008: mov     esi, [edx+18h]
0x94700B: mov     edx, esi
0x94700D: lea     ecx, [ecx+0]
0x947010: mov     ebp, [edx]
0x947012: cmp     dword ptr [ebp+0Ch], 0
0x947016: jg      short loc_947025
0x947018: inc     edi
0x947019: add     edx, 4
0x94701C: cmp     edi, eax
0x94701E: jl      short loc_947010
0x947020: jmp     loc_947149
0x947025: mov     esi, [esi+edi*4]
0x947028: mov     eax, [esi+0Ch]
0x94702B: add     esi, 8
0x94702E: test    eax, eax
0x947030: jle     short loc_94706E
0x947032: mov     ecx, large fs:2Ch
0x947039: mov     edx, [ecx+ebx*4]
0x94703C: mov     ecx, [edx+19Ch]
0x947042: test    ecx, ecx
0x947044: jnz     short loc_94704C
0x947046: mov     ecx, ds:0BA7D9Ch
0x94704C: push    14h
0x94704E: shl     eax, 2
0x947051: push    eax
0x947052: call    sub_8A7560
0x947057: mov     ecx, [esp+70h+var_48]
0x94705B: mov     [esp+70h+var_50], eax
0x94705F: mov     eax, [esi+4]
0x947062: and     ecx, 40000000h
0x947068: or      ecx, eax
0x94706A: mov     [esp+70h+var_48], ecx
0x94706E: mov     edx, [esi+4]
0x947071: mov     ebp, [esp+70h+var_50]
0x947075: xor     eax, eax
0x947077: test    edx, edx
0x947079: mov     [esp+70h+var_4C], edx
0x94707D: mov     esi, [esi]
0x94707F: jle     short loc_947091
0x947081: mov     ecx, [esi+eax*4]
0x947084: mov     [ebp+eax*4+0], ecx
0x947088: inc     eax
0x947089: cmp     eax, edx
0x94708B: jl      short loc_947081
0x94708D: mov     ecx, [esp+70h+var_48]
0x947091: mov     edx, [esp+70h+var_5C]
0x947095: mov     eax, [edx+18h]
0x947098: mov     esi, [eax+edi*4]
0x94709B: mov     edx, [esp+70h+var_3C]
0x94709F: mov     edi, [esi+28h]
0x9470A2: add     esi, 24h ; '$'
0x9470A5: mov     eax, edx
0x9470A7: and     eax, 3FFFFFFFh
0x9470AC: cmp     eax, edi
0x9470AE: jge     short loc_94711F
0x9470B0: test    edx, edx
0x9470B2: js      short loc_9470DE
0x9470B4: mov     ecx, large fs:2Ch
0x9470BB: mov     edx, [ecx+ebx*4]
0x9470BE: mov     ecx, [edx+19Ch]
0x9470C4: test    ecx, ecx
0x9470C6: jnz     short loc_9470CE
0x9470C8: mov     ecx, ds:0BA7D9Ch
0x9470CE: mov     edx, [esp+70h+var_44]
0x9470D2: push    14h
0x9470D4: shl     eax, 2
0x9470D7: push    eax
0x9470D8: push    edx
0x9470D9: call    sub_8A75D0
0x9470DE: mov     eax, large fs:2Ch
0x9470E4: mov     ecx, [eax+ebx*4]
0x9470E7: mov     ecx, [ecx+19Ch]
0x9470ED: test    ecx, ecx
0x9470EF: jnz     short loc_9470F7
0x9470F1: mov     ecx, ds:0BA7D9Ch
0x9470F7: mov     edx, [esi+4]
0x9470FA: push    14h
0x9470FC: shl     edx, 2
0x9470FF: push    edx
0x947100: call    sub_8A7560
0x947105: mov     [esp+70h+var_44], eax
0x947109: mov     eax, [esp+70h+var_3C]
0x94710D: mov     ecx, [esi+4]
0x947110: and     eax, 40000000h
0x947115: or      eax, ecx
0x947117: mov     ecx, [esp+70h+var_48]
0x94711B: mov     [esp+70h+var_3C], eax
0x94711F: mov     edx, [esi+4]
0x947122: mov     edi, [esp+70h+var_44]
0x947126: xor     eax, eax
0x947128: test    edx, edx
0x94712A: mov     [esp+70h+var_40], edx
0x94712E: mov     esi, [esi]
0x947130: jle     short loc_947141
0x947132: mov     ecx, [esi+eax*4]
0x947135: mov     [edi+eax*4], ecx
0x947138: inc     eax
0x947139: cmp     eax, edx
0x94713B: jl      short loc_947132
0x94713D: mov     ecx, [esp+70h+var_48]
0x947141: mov     eax, [esp+70h+var_4C]
0x947145: test    eax, eax
0x947147: jnz     short loc_9471B9
0x947149: test    ecx, 3FFFFFFFh
0x94714F: mov     edx, large fs:2Ch
0x947156: mov     eax, [edx+ebx*4]
0x947159: mov     esi, [eax+1A0h]
0x94715F: mov     edi, [eax+1A4h]
0x947165: jnz     short loc_947176
0x947167: lea     eax, [esp+70h+var_50]
0x94716B: push    4
0x94716D: push    eax
0x94716E: call    sub_8A6EE0
0x947173: add     esp, 8
0x947176: mov     ecx, [esp+70h+var_50]
0x94717A: mov     edx, [esp+70h+var_4C]
0x94717E: mov     [ecx+edx*4], esi
0x947181: mov     esi, [esp+70h+var_4C]
0x947185: mov     eax, [esp+70h+var_3C]
0x947189: mov     ecx, [esp+70h+var_40]
0x94718D: inc     esi
0x94718E: and     eax, 3FFFFFFFh
0x947193: cmp     ecx, eax
0x947195: mov     [esp+70h+var_4C], esi
0x947199: jnz     short loc_9471AA
0x94719B: lea     ecx, [esp+70h+var_44]
0x94719F: push    4
0x9471A1: push    ecx
0x9471A2: call    sub_8A6EE0
0x9471A7: add     esp, 8
0x9471AA: mov     eax, [esp+70h+var_40]
0x9471AE: mov     edx, [esp+70h+var_44]
0x9471B2: mov     [edx+eax*4], edi
0x9471B5: inc     [esp+70h+var_40]
0x9471B9: mov     ebp, [esp+70h+var_5C]
0x9471BD: mov     eax, [ebp+38h]
0x9471C0: add     ebp, 30h ; '0'
0x9471C3: and     eax, 3FFFFFFFh
0x9471C8: jge     short loc_9471E2
0x9471CA: add     eax, eax
0x9471CC: xor     ecx, ecx
0x9471CE: test    eax, eax
0x9471D0: setle   cl
0x9471D3: push    1
0x9471D5: dec     ecx
0x9471D6: and     eax, ecx
0x9471D8: push    eax
0x9471D9: push    ebp
0x9471DA: call    sub_8A6E40
0x9471DF: add     esp, 0Ch
0x9471E2: xor     esi, esi
0x9471E4: xor     ebx, ebx
0x9471E6: lea     ecx, [esp+70h+var_2C]
0x9471EA: mov     [ebp+4], esi
0x9471ED: mov     [esp+70h+var_58], ebx
0x9471F1: call    sub_8B0E10
0x9471F6: cmp     [esp+70h+var_4C], esi
0x9471FA: mov     [esp+70h+var_38], esi
0x9471FE: mov     [esp+70h+var_34], esi
0x947202: mov     [esp+70h+var_30], 80000000h
0x94720A: jle     short loc_947246
0x94720C: mov     ecx, [esp+70h+var_50]
0x947210: mov     eax, [esp+70h+var_44]
0x947214: mov     eax, [eax+esi*4]
0x947217: mov     ecx, [ecx+esi*4]
0x94721A: lea     edx, [esp+70h+var_2C]
0x94721E: push    edx
0x94721F: push    eax
0x947220: push    ecx
0x947221: call    sub_9584F0
0x947226: mov     eax, [esp+7Ch+var_44]
0x94722A: mov     ecx, [esp+7Ch+var_50]
0x94722E: mov     edx, [eax+esi*4]
0x947231: sub     edx, [ecx+esi*4]
0x947234: add     ebx, edx
0x947236: mov     edx, [esp+7Ch+var_4C]
0x94723A: add     esp, 0Ch
0x94723D: inc     esi
0x94723E: cmp     esi, edx
0x947240: jl      short loc_947214
0x947242: mov     [esp+70h+var_58], ebx
0x947246: lea     ecx, [esp+70h+var_2C]
0x94724A: call    sub_8B0D00
0x94724F: mov     edi, eax
0x947251: push    edi
0x947252: lea     eax, [esp+74h+var_5D]
0x947256: push    eax
0x947257: lea     ecx, [esp+78h+var_2C]
0x94725B: call    sub_8B0D80
0x947260: mov     al, [esp+70h+var_5D]
0x947264: test    al, al
0x947266: jz      short loc_9472E5
0x947268: jmp     short loc_947270
0x94726A: align 10h
0x947270: mov     ecx, [esp+70h+var_30]
0x947274: mov     eax, [esp+70h+var_34]
0x947278: and     ecx, 3FFFFFFFh
0x94727E: cmp     eax, ecx
0x947280: jnz     short loc_947291
0x947282: lea     edx, [esp+70h+var_38]
0x947286: push    10h
0x947288: push    edx
0x947289: call    sub_8A6EE0
0x94728E: add     esp, 8
0x947291: mov     eax, [esp+70h+var_34]
0x947295: mov     ecx, [esp+70h+var_38]
0x947299: mov     esi, eax
0x94729B: shl     esi, 4
0x94729E: add     esi, ecx
0x9472A0: inc     eax
0x9472A1: push    edi
0x9472A2: lea     ecx, [esp+74h+var_2C]
0x9472A6: mov     [esp+74h+var_34], eax
0x9472AA: call    sub_8B0D20
0x9472AF: cdq
0x9472B0: push    edi
0x9472B1: lea     ecx, [esp+74h+var_2C]
0x9472B5: mov     [esi], eax
0x9472B7: mov     [esi+4], edx
0x9472BA: call    sub_8B0D30
0x9472BF: push    edi
0x9472C0: lea     ecx, [esp+74h+var_2C]
0x9472C4: mov     [esi+8], eax
0x9472C7: call    sub_8B0D50
0x9472CC: mov     edi, eax
0x9472CE: push    edi
0x9472CF: lea     eax, [esp+74h+var_5D]
0x9472D3: push    eax
0x9472D4: lea     ecx, [esp+78h+var_2C]
0x9472D8: call    sub_8B0D80
0x9472DD: mov     al, [esp+70h+var_5D]
0x9472E1: test    al, al
0x9472E3: jnz     short loc_947270
0x9472E5: mov     ecx, [ebp+4]
0x9472E8: mov     edi, 1
0x9472ED: mov     esi, offset off_A98330
0x9472F2: mov     edx, ebp
0x9472F4: mov     eax, ecx
0x9472F6: mov     [esp+70h+var_8], ecx
0x9472FA: mov     [esp+70h+var_E], di
0x9472FF: mov     [esp+70h+var_14], esi
0x947303: mov     [esp+70h+var_C], edx
0x947307: mov     [esp+70h+var_4], edi
0x94730B: mov     ecx, [ebp+8]
0x94730E: inc     eax
0x94730F: and     ecx, 3FFFFFFFh
0x947315: cmp     ecx, eax
0x947317: jge     short loc_947330
0x947319: add     ecx, ecx
0x94731B: cmp     eax, ecx
0x94731D: jge     short loc_947321
0x94731F: mov     eax, ecx
0x947321: push    edi
0x947322: push    eax
0x947323: push    ebp
0x947324: call    sub_8A6E40
0x947329: mov     edx, [esp+7Ch+var_C]
0x94732D: add     esp, 0Ch
0x947330: mov     ecx, [edx]
0x947332: mov     eax, [edx+4]
0x947335: mov     byte ptr [eax+ecx], 0
0x947339: push    offset dword_A9C288
0x94733E: lea     ecx, [esp+74h+var_54]
0x947342: call    sub_90BBA0
0x947347: lea     edx, [esp+70h+var_20]
0x94734B: push    edx
0x94734C: push    offset unk_BA99D4
0x947351: lea     eax, [esp+78h+var_38]
0x947355: push    eax
0x947356: push    0
0x947358: push    edi
0x947359: lea     ecx, [esp+84h+var_54]
0x94735D: push    ecx
0x94735E: lea     edx, [esp+88h+var_14]
0x947362: push    edx
0x947363: call    sub_9582E0
0x947368: mov     eax, [esp+8Ch+var_4]
0x94736F: add     esp, 1Ch
0x947372: test    eax, eax
0x947374: mov     [esp+70h+var_14], esi
0x947378: jnz     short loc_9473CD
0x94737A: mov     edx, [esp+70h+var_C]
0x94737E: test    edx, edx
0x947380: mov     esi, edx
0x947382: jz      short loc_9473CD
0x947384: mov     eax, [edx+8]
0x947387: test    eax, eax
0x947389: mov     edi, ds:0BA9DE4h
0x94738F: js      short loc_9473BB
0x947391: mov     ecx, large fs:2Ch
0x947398: mov     ecx, [ecx+edi*4]
0x94739B: mov     ecx, [ecx+19Ch]
0x9473A1: test    ecx, ecx
0x9473A3: jnz     short loc_9473AB
0x9473A5: mov     ecx, ds:0BA7D9Ch
0x9473AB: mov     edx, [edx]
0x9473AD: push    14h
0x9473AF: and     eax, 3FFFFFFFh
0x9473B4: push    eax
0x9473B5: push    edx
0x9473B6: call    sub_8A75D0
0x9473BB: mov     ecx, ds:0BA7D98h
0x9473C1: mov     eax, [ecx]
0x9473C3: push    14h
0x9473C5: push    0Ch
0x9473C7: push    esi
0x9473C8: call    dword ptr [eax+14h]
0x9473CB: jmp     short loc_9473D3
0x9473CD: mov     edi, ds:0BA9DE4h
0x9473D3: mov     eax, [esp+70h+var_30]
0x9473D7: test    eax, eax
0x9473D9: mov     esi, large fs:2Ch
0x9473E0: mov     [esp+70h+var_14], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x9473E8: js      short loc_947412
0x9473EA: mov     ecx, [esi+edi*4]
0x9473ED: mov     ecx, [ecx+19Ch]
0x9473F3: test    ecx, ecx
0x9473F5: jnz     short loc_9473FD
0x9473F7: mov     ecx, ds:0BA7D9Ch
0x9473FD: mov     edx, [esp+70h+var_38]
0x947401: and     eax, 3FFFFFFFh
0x947406: push    14h
0x947408: shl     eax, 4
0x94740B: push    eax
0x94740C: push    edx
0x94740D: call    sub_8A75D0
0x947412: lea     ecx, [esp+70h+var_2C]
0x947416: call    sub_8B0E60
0x94741B: cmp     ebx, 1
0x94741E: jge     short loc_947494
0x947420: mov     eax, [esp+70h+var_3C]
0x947424: test    eax, eax
0x947426: js      short loc_947450
0x947428: mov     ecx, [esi+edi*4]
0x94742B: mov     ecx, [ecx+19Ch]
0x947431: test    ecx, ecx
0x947433: jnz     short loc_94743B
0x947435: mov     ecx, ds:0BA7D9Ch
0x94743B: mov     edx, [esp+70h+var_44]
0x94743F: and     eax, 3FFFFFFFh
0x947444: push    14h
0x947446: shl     eax, 2
0x947449: push    eax
0x94744A: push    edx
0x94744B: call    sub_8A75D0
0x947450: mov     eax, [esp+70h+var_48]
0x947454: test    eax, eax
0x947456: js      short loc_947480
0x947458: mov     ecx, [esi+edi*4]
0x94745B: mov     ecx, [ecx+19Ch]
0x947461: test    ecx, ecx
0x947463: jnz     short loc_94746B
0x947465: mov     ecx, ds:0BA7D9Ch
0x94746B: mov     edx, [esp+70h+var_50]
0x94746F: and     eax, 3FFFFFFFh
0x947474: push    14h
0x947476: shl     eax, 2
0x947479: push    eax
0x94747A: push    edx
0x94747B: call    sub_8A75D0
0x947480: mov     eax, [esp+70h+var_18]
0x947484: test    eax, eax
0x947486: js      loc_9475F3
0x94748C: mov     ecx, [esi+edi*4]
0x94748F: jmp     loc_9475CB
0x947494: mov     ecx, [esp+70h+var_5C]
0x947498: mov     eax, [esp+70h+var_4C]
0x94749C: mov     edi, [ecx+34h]
0x94749F: mov     esi, [ecx+28h]
0x9474A2: mov     ecx, [ecx+0Ch]
0x9474A5: lea     edx, [edi+eax*4]
0x9474A8: mov     ebx, eax
0x9474AA: mov     eax, [esp+70h+var_58]
0x9474AE: add     edx, esi
0x9474B0: lea     edx, [edx+eax+0Dh]
0x9474B4: push    edx
0x9474B5: call    sub_918440
0x9474BA: mov     eax, [esp+70h+var_5C]
0x9474BE: mov     ecx, [eax+0Ch]
0x9474C1: push    0Ah
0x9474C3: call    sub_9181B0
0x9474C8: mov     ecx, [esp+70h+var_5C]
0x9474CC: mov     ecx, [ecx+0Ch]
0x9474CF: push    esi
0x9474D0: call    sub_918440
0x9474D5: test    esi, esi
0x9474D7: jle     short loc_9474EA
0x9474D9: mov     eax, [esp+70h+var_5C]
0x9474DD: mov     edx, [eax+24h]
0x9474E0: mov     ecx, [eax+0Ch]
0x9474E3: push    esi
0x9474E4: push    edx
0x9474E5: call    sub_918390
0x9474EA: mov     esi, [esp+70h+var_5C]
0x9474EE: mov     ecx, [esi+0Ch]
0x9474F1: push    edi
0x9474F2: call    sub_918440
0x9474F7: test    edi, edi
0x9474F9: jle     short loc_947508
0x9474FB: mov     eax, [ebp+0]
0x9474FE: mov     ecx, [esi+0Ch]
0x947501: push    edi
0x947502: push    eax
0x947503: call    sub_918390
0x947508: mov     ecx, [esi+0Ch]
0x94750B: push    ebx
0x94750C: call    sub_918440
0x947511: xor     edi, edi
0x947513: test    ebx, ebx
0x947515: jle     short loc_947553
0x947517: mov     ebp, [esp+70h+var_5C]
0x94751B: jmp     short loc_947520
0x94751D: align 10h
0x947520: mov     ecx, [esp+70h+var_44]
0x947524: mov     edx, [esp+70h+var_50]
0x947528: mov     esi, [ecx+edi*4]
0x94752B: mov     eax, [edx+edi*4]
0x94752E: mov     ecx, [ebp+0Ch]
0x947531: sub     esi, eax
0x947533: push    esi
0x947534: call    sub_918440
0x947539: test    esi, esi
0x94753B: jle     short loc_94754E
0x94753D: mov     eax, [esp+70h+var_50]
0x947541: mov     ecx, [eax+edi*4]
0x947544: push    esi
0x947545: push    ecx
0x947546: mov     ecx, [ebp+0Ch]
0x947549: call    sub_918390
0x94754E: inc     edi
0x94754F: cmp     edi, ebx
0x947551: jl      short loc_947520
0x947553: mov     eax, [esp+70h+var_3C]
0x947557: test    eax, eax
0x947559: mov     esi, ds:0BA9DE4h
0x94755F: mov     edi, large fs:2Ch
0x947566: js      short loc_947590
0x947568: mov     edx, [edi+esi*4]
0x94756B: mov     ecx, [edx+19Ch]
0x947571: test    ecx, ecx
0x947573: jnz     short loc_94757B
0x947575: mov     ecx, ds:0BA7D9Ch
0x94757B: and     eax, 3FFFFFFFh
0x947580: push    14h
0x947582: shl     eax, 2
0x947585: push    eax
0x947586: mov     eax, [esp+78h+var_44]
0x94758A: push    eax
0x94758B: call    sub_8A75D0
0x947590: mov     eax, [esp+70h+var_48]
0x947594: test    eax, eax
0x947596: js      short loc_9475C0
0x947598: mov     ecx, [edi+esi*4]
0x94759B: mov     ecx, [ecx+19Ch]
0x9475A1: test    ecx, ecx
0x9475A3: jnz     short loc_9475AB
0x9475A5: mov     ecx, ds:0BA7D9Ch
0x9475AB: mov     edx, [esp+70h+var_50]
0x9475AF: and     eax, 3FFFFFFFh
0x9475B4: push    14h
0x9475B6: shl     eax, 2
0x9475B9: push    eax
0x9475BA: push    edx
0x9475BB: call    sub_8A75D0
0x9475C0: mov     eax, [esp+70h+var_18]
0x9475C4: test    eax, eax
0x9475C6: js      short loc_9475F3
0x9475C8: mov     ecx, [edi+esi*4]
0x9475CB: mov     ecx, [ecx+19Ch]
0x9475D1: test    ecx, ecx
0x9475D3: jnz     short loc_9475DB
0x9475D5: mov     ecx, ds:0BA7D9Ch
0x9475DB: and     eax, 3FFFFFFFh
0x9475E0: lea     edx, [eax+eax*2]
0x9475E3: mov     eax, [esp+70h+var_20]
0x9475E7: push    14h
0x9475E9: shl     edx, 3
0x9475EC: push    edx
0x9475ED: push    eax
0x9475EE: call    sub_8A75D0
0x9475F3: pop     esi
0x9475F4: pop     ebp
0x9475F5: pop     ebx
0x9475F6: pop     edi
0x9475F7: add     esp, 60h
0x9475FA: retn    4
