0x765480: sub     esp, 30h
0x765483: push    ebx
0x765484: push    esi
0x765485: push    edi
0x765486: mov     edi, [esp+3Ch+arg_0]
0x76548A: fld     dword ptr [edi+30h]
0x76548D: push    ecx
0x76548E: fstp    [esp+40h+var_40]; float
0x765491: lea     eax, [edi+24h]
0x765494: push    eax; int
0x765495: mov     esi, ecx
0x765497: lea     ebx, [esi+940h]
0x76549D: push    edi; int
0x76549E: push    ebx; int
0x76549F: call    sub_761AE0
0x7654A4: add     esp, 10h
0x7654A7: cmp     [esp+3Ch+arg_4], 0
0x7654AC: jz      short loc_7654C5
0x7654AE: mov     eax, [esi+280h]
0x7654B4: mov     ecx, [eax]
0x7654B6: mov     edx, [ecx+0B0h]
0x7654BC: push    ebx
0x7654BD: push    100h
0x7654C2: push    eax
0x7654C3: call    edx
0x7654C5: mov     ecx, [esi+8ACh]
0x7654CB: mov     eax, [ecx]
0x7654CD: mov     edx, [eax+34h]
0x7654D0: push    edi
0x7654D1: call    edx
0x7654D3: fld     dword ptr [edi+30h]
0x7654D6: push    ecx
0x7654D7: lea     eax, [esp+40h+var_24]
0x7654DB: fstp    [esp+40h+var_40]; float
0x7654DE: push    eax; int
0x7654DF: mov     ecx, edi
0x7654E1: call    sub_710190
0x7654E6: lea     ecx, [esp+3Ch+var_24]
0x7654EA: push    ecx
0x7654EB: lea     edx, [esi+628h]
0x7654F1: push    edx
0x7654F2: lea     eax, [esp+44h+var_30]
0x7654F6: push    eax
0x7654F7: call    sub_710250
0x7654FC: mov     ecx, [eax]
0x7654FE: mov     [esi+640h], ecx
0x765504: mov     edx, [eax+4]
0x765507: mov     [esi+644h], edx
0x76550D: mov     eax, [eax+8]
0x765510: lea     ecx, [esp+48h+var_24]
0x765514: push    ecx
0x765515: lea     edx, [esi+634h]
0x76551B: mov     [esi+648h], eax
0x765521: push    edx
0x765522: lea     eax, [esp+50h+var_30]
0x765526: push    eax
0x765527: call    sub_710250
0x76552C: mov     ecx, [eax]
0x76552E: mov     [esi+64Ch], ecx
0x765534: mov     edx, [eax+4]
0x765537: add     esp, 18h
0x76553A: mov     [esi+650h], edx
0x765540: mov     eax, [eax+8]
0x765543: pop     edi
0x765544: mov     [esi+654h], eax
0x76554A: pop     esi
0x76554B: pop     ebx
0x76554C: add     esp, 30h
0x76554F: retn    8
