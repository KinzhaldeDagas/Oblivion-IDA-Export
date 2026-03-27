0x6A3870: mov     eax, [esp+arg_0]
0x6A3874: push    esi
0x6A3875: push    eax
0x6A3876: mov     esi, ecx
0x6A3878: call    ActiveEffect_Base_SaveEffect
0x6A387D: push    4; Size
0x6A387F: lea     ecx, [esi+3Ch]
0x6A3882: push    ecx; Src
0x6A3883: mov     ecx, ds:0B33B00h
0x6A3889: call    SaveLoad_SaveData
0x6A388E: mov     ecx, ds:0B33B00h
0x6A3894: push    4; Size
0x6A3896: lea     edx, [esi+40h]
0x6A3899: push    edx; Src
0x6A389A: call    SaveLoad_SaveData
0x6A389F: mov     ecx, ds:0B33B00h
0x6A38A5: push    0Ch; Size
0x6A38A7: lea     eax, [esi+44h]
0x6A38AA: push    eax; Src
0x6A38AB: call    SaveLoad_SaveData
0x6A38B0: mov     ecx, ds:0B33B00h
0x6A38B6: push    10h; Size
0x6A38B8: add     esi, 50h ; 'P'
0x6A38BB: push    esi; Src
0x6A38BC: call    SaveLoad_SaveData
0x6A38C1: pop     esi
0x6A38C2: retn    4
