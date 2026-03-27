0x68E3C7: mov     ebp, ecx
0x68E3C9: mov     ecx, ds:0B33B00h
0x68E3CF: push    4; Size
0x68E3D1: lea     eax, [ebp+4]
0x68E3D4: push    eax; Dst
0x68E3D5: call    SaveLoad_LoadData
0x68E3DA: push    1; Size
0x68E3DC: lea     ecx, [ebp+10h]
0x68E3DF: push    ecx; Dst
0x68E3E0: mov     ecx, ds:0B33B00h
0x68E3E6: call    SaveLoad_LoadData
0x68E3EB: mov     ecx, ds:0B33B00h
0x68E3F1: push    1; Size
0x68E3F3: lea     edx, [ebp+11h]
0x68E3F6: push    edx; Dst
0x68E3F7: call    SaveLoad_LoadData
0x68E3FC: mov     ecx, ds:0B33B00h
0x68E402: push    1; Size
0x68E404: lea     eax, [ebp+13h]
0x68E407: push    eax; Dst
0x68E408: call    SaveLoad_LoadData
0x68E40D: push    4; Size
0x68E40F: lea     ecx, [ebp+18h]
0x68E412: push    ecx; Dst
0x68E413: mov     ecx, ds:0B33B00h
0x68E419: call    SaveLoad_LoadData
0x68E41E: mov     ecx, ds:0B33B00h
0x68E424: push    4; Size
0x68E426: lea     edx, [ebp+1Ch]
0x68E429: push    edx; Dst
0x68E42A: call    SaveLoad_LoadData
0x68E42F: mov     ecx, ds:0B33B00h
0x68E435: push    4; Size
0x68E437: lea     eax, [esp+4+Dst]
0x68E43B: push    eax; Dst
0x68E43C: call    SaveLoad_LoadFormID
0x68E441: mov     ecx, [esp+8+arg_10]
0x68E445: push    4; Size
0x68E447: lea     edx, [esp+0Ch+arg_14]
0x68E44B: mov     [ebp+24h], ecx
0x68E44E: mov     ecx, ds:0B33B00h
0x68E454: push    edx; Dst
0x68E455: call    SaveLoad_LoadFormID
0x68E45A: mov     eax, [esp+10h+arg_C]
0x68E45E: push    4; Size
0x68E460: lea     ecx, [esp+14h+arg_10]
0x68E464: mov     [ebp+20h], eax
0x68E467: push    ecx; Dst
0x68E468: mov     ecx, ds:0B33B00h
0x68E46E: call    SaveLoad_LoadFormID
0x68E473: mov     edx, [esp+18h+arg_8]
0x68E477: push    1; Size
0x68E479: lea     eax, [ebp+12h]
0x68E47C: mov     [ebp+30h], edx
0x68E47F: mov     ecx, ds:0B33B00h
0x68E485: push    eax; Dst
0x68E486: call    SaveLoad_LoadData
0x68E48B: mov     ecx, ds:0B33B00h
0x68E491: mov     al, [ecx+7Ch]
0x68E494: xor     ebx, ebx
0x68E496: cmp     al, 2Ah ; '*'
0x68E498: jb      ActiveEffect_Base_LoadEffect___LoadUnk14
