0x6A38D0: mov     eax, [esp+arg_0]
0x6A38D4: push    esi
0x6A38D5: push    eax
0x6A38D6: mov     esi, ecx
0x6A38D8: call    ActiveEffect_Base_LoadEffect
0x6A38DD: push    4; Size
0x6A38DF: lea     ecx, [esi+3Ch]
0x6A38E2: push    ecx; Dst
0x6A38E3: mov     ecx, ds:0B33B00h
0x6A38E9: call    SaveLoad_LoadData
0x6A38EE: mov     ecx, ds:0B33B00h
0x6A38F4: push    4; Size
0x6A38F6: lea     edx, [esi+40h]
0x6A38F9: push    edx; Dst
0x6A38FA: call    SaveLoad_LoadData
0x6A38FF: mov     ecx, ds:0B33B00h
0x6A3905: push    0Ch; Size
0x6A3907: lea     eax, [esi+44h]
0x6A390A: push    eax; Dst
0x6A390B: call    SaveLoad_LoadData
0x6A3910: mov     ecx, ds:0B33B00h
0x6A3916: push    10h; Size
0x6A3918: add     esi, 50h ; 'P'
0x6A391B: push    esi; Dst
0x6A391C: call    SaveLoad_LoadData
0x6A3921: pop     esi
0x6A3922: retn    4
