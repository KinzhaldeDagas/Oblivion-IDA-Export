0x9602C0: fld     dword ptr ds:0A79DB4h
0x9602C6: mov     eax, [esp+arg_C]
0x9602CA: mov     ecx, [esp+arg_4]
0x9602CE: sub     esp, 54h
0x9602D1: push    20h ; ' '; int
0x9602D3: sub     esp, 0Ch
0x9602D6: fstp    [esp+64h+var_5C]; float
0x9602DA: fld     dword ptr ds:0A37080h
0x9602E0: fstp    [esp+64h+var_60]; float
0x9602E4: fld     [esp+64h+arg_0]
0x9602E8: fstp    [esp+64h+var_64]; float
0x9602EB: push    eax; int
0x9602EC: push    ecx; int
0x9602ED: lea     ecx, [esp+6Ch+var_48]
0x9602F1: call    sub_96F3C0
0x9602F6: mov     edx, [esp+54h+arg_10]
0x9602FA: mov     eax, [esp+54h+arg_8]
0x9602FE: push    edx
0x9602FF: push    eax
0x960300: lea     ecx, [esp+5Ch+var_48]
0x960304: call    sub_96F170
0x960309: lea     ecx, [esp+54h+var_48]
0x96030D: call    sub_680CC0
0x960312: mov     ecx, [esp+54h+arg_14]
0x960316: fstp    dword ptr [ecx]
0x960318: lea     ecx, [esp+54h+var_48]
0x96031C: call    NiRenderTargetGroup__GetRenderTargetsNum
0x960321: cmp     eax, 3
0x960324: jz      short loc_96033A
0x960326: lea     ecx, [esp+54h+var_48]
0x96032A: call    NiRenderTargetGroup__GetRenderTargetsNum
0x96032F: cmp     eax, 2
0x960332: jz      short loc_96033A
0x960334: xor     al, al
0x960336: add     esp, 54h
0x960339: retn
0x96033A: lea     ecx, [esp+54h+var_48]
0x96033E: call    sub_4E7DE0
0x960343: cmp     [esp+54h+arg_1C], 0
0x960348: mov     edx, [eax]
0x96034A: mov     ecx, [esp+54h+arg_18]
0x96034E: mov     [ecx], edx
0x960350: mov     edx, [eax+4]
0x960353: mov     [ecx+4], edx
0x960356: mov     eax, [eax+8]
0x960359: mov     [ecx+8], eax
0x96035C: jz      short loc_9603AB
0x96035E: lea     ecx, [esp+54h+var_48]; this
0x960362: call    TESObjectREFR_GetPosition
0x960367: mov     edx, [eax]
0x960369: mov     ecx, [esp+54h+arg_20]
0x96036D: mov     [ecx], edx
0x96036F: mov     edx, [eax+4]
0x960372: mov     [ecx+4], edx
0x960375: mov     eax, [eax+8]
0x960378: mov     [ecx+8], eax
0x96037B: fld     dword ptr [ecx]
0x96037D: mov     eax, [esp+54h+arg_24]
0x960381: fchs
0x960383: fstp    [esp+54h+var_54]
0x960386: fld     dword ptr [ecx+4]
0x960389: fchs
0x96038B: fstp    [esp+54h+var_50]
0x96038F: mov     edx, [esp+54h+var_50]
0x960393: fld     dword ptr [ecx+8]
0x960396: mov     ecx, [esp+54h+var_54]
0x960399: fchs
0x96039B: mov     [eax], ecx
0x96039D: fstp    [esp+54h+var_4C]
0x9603A1: mov     ecx, [esp+54h+var_4C]
0x9603A5: mov     [eax+4], edx
0x9603A8: mov     [eax+8], ecx
0x9603AB: mov     al, 1
0x9603AD: add     esp, 54h
0x9603B0: retn
