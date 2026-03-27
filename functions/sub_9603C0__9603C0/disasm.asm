0x9603C0: fld     dword ptr ds:0A79DB4h
0x9603C6: mov     eax, [esp+arg_C]
0x9603CA: mov     ecx, [esp+arg_4]
0x9603CE: sub     esp, 58h
0x9603D1: push    20h ; ' '; int
0x9603D3: sub     esp, 0Ch
0x9603D6: fstp    [esp+68h+var_60]; float
0x9603DA: fld     dword ptr ds:0A37080h
0x9603E0: fstp    [esp+68h+var_64]; float
0x9603E4: fld     [esp+68h+arg_0]
0x9603E8: fstp    [esp+68h+var_68]; float
0x9603EB: push    eax; int
0x9603EC: push    ecx; int
0x9603ED: lea     ecx, [esp+70h+var_4C]
0x9603F1: call    sub_96F7A0
0x9603F6: mov     edx, [esp+58h+arg_10]
0x9603FA: mov     eax, [esp+58h+arg_8]
0x9603FE: push    edx
0x9603FF: push    eax
0x960400: lea     ecx, [esp+60h+var_4C]
0x960404: call    sub_96F170
0x960409: lea     ecx, [esp+58h+var_4C]
0x96040D: call    sub_680CC0
0x960412: mov     ecx, [esp+58h+arg_14]
0x960416: fstp    dword ptr [ecx]
0x960418: lea     ecx, [esp+58h+var_4C]
0x96041C: call    NiRenderTargetGroup__GetRenderTargetsNum
0x960421: cmp     eax, 3
0x960424: jz      short loc_96043A
0x960426: lea     ecx, [esp+58h+var_4C]
0x96042A: call    NiRenderTargetGroup__GetRenderTargetsNum
0x96042F: cmp     eax, 2
0x960432: jz      short loc_96043A
0x960434: xor     al, al
0x960436: add     esp, 58h
0x960439: retn
0x96043A: lea     ecx, [esp+58h+var_4C]
0x96043E: call    sub_4E7DE0
0x960443: cmp     [esp+58h+arg_1C], 0
0x960448: mov     edx, [eax]
0x96044A: mov     ecx, [esp+58h+arg_18]
0x96044E: mov     [ecx], edx
0x960450: mov     edx, [eax+4]
0x960453: mov     [ecx+4], edx
0x960456: mov     eax, [eax+8]
0x960459: mov     [ecx+8], eax
0x96045C: jz      short loc_9604AE
0x96045E: lea     ecx, [esp+58h+var_4C]; this
0x960462: call    TESObjectREFR_GetPosition
0x960467: mov     edx, [eax]
0x960469: mov     ecx, [esp+58h+arg_20]
0x96046D: mov     [ecx], edx
0x96046F: mov     edx, [eax+4]
0x960472: mov     [ecx+4], edx
0x960475: mov     eax, [eax+8]
0x960478: mov     [ecx+8], eax
0x96047B: fld     dword ptr [ecx]
0x96047D: mov     eax, [esp+58h+arg_24]
0x960484: fchs
0x960486: fstp    [esp+58h+var_58]
0x960489: fld     dword ptr [ecx+4]
0x96048C: fchs
0x96048E: fstp    [esp+58h+var_54]
0x960492: mov     edx, [esp+58h+var_54]
0x960496: fld     dword ptr [ecx+8]
0x960499: mov     ecx, [esp+58h+var_58]
0x96049C: fchs
0x96049E: mov     [eax], ecx
0x9604A0: fstp    [esp+58h+var_50]
0x9604A4: mov     ecx, [esp+58h+var_50]
0x9604A8: mov     [eax+4], edx
0x9604AB: mov     [eax+8], ecx
0x9604AE: mov     al, 1
0x9604B0: add     esp, 58h
0x9604B3: retn
