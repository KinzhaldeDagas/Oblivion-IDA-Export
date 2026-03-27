0x5358F0: push    0FFFFFFFFh
0x5358F2: push    offset SEH_5358F0
0x5358F7: mov     eax, large fs:0
0x5358FD: push    eax
0x5358FE: push    ecx
0x5358FF: push    esi
0x535900: mov     eax, ds:0B30AACh
0x535905: xor     eax, esp
0x535907: push    eax
0x535908: lea     eax, [esp+18h+var_C]
0x53590C: mov     large fs:0, eax
0x535912: mov     esi, ecx
0x535914: mov     [esp+18h+var_10], esi
0x535918: fld     dword ptr ds:0A562B0h
0x53591E: lea     eax, [esi+20h]
0x535921: mov     dword ptr [esi], offset ??_7hkAllCdPointCollector@@6B@; const hkAllCdPointCollector::`vftable'
0x535927: mov     [esi+10h], eax
0x53592A: xor     eax, eax
0x53592C: mov     dword ptr [esi+18h], 80000008h
0x535933: fstp    dword ptr [esi+4]
0x535936: mov     [esi+14h], eax
0x535939: mov     [esp+18h+var_4], eax
0x53593D: mov     [esi+1A0h], eax
0x535943: fld     [esp+18h+arg_0]
0x535947: mov     ecx, [esp+18h+arg_4]
0x53594B: push    ecx; int
0x53594C: push    ecx
0x53594D: mov     ecx, esi
0x53594F: fstp    [esp+20h+var_20]; float
0x535952: mov     byte ptr [esp+20h+var_4], 1
0x535957: call    sub_535730
0x53595C: mov     eax, esi
0x53595E: mov     ecx, [esp+18h+var_C]
0x535962: mov     large fs:0, ecx
0x535969: pop     ecx
0x53596A: pop     esi
0x53596B: add     esp, 10h
0x53596E: retn    8
