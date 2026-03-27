0x6A0430: mov     eax, [esp+arg_4]
0x6A0434: push    esi
0x6A0435: mov     esi, ecx
0x6A0437: mov     ecx, [esp+4+arg_0]
0x6A043B: push    eax
0x6A043C: push    ecx
0x6A043D: mov     ecx, esi
0x6A043F: call    sub_69DBB0
0x6A0444: mov     ecx, ds:0B33B00h
0x6A044A: push    4; Size
0x6A044C: lea     edx, [esi+38h]
0x6A044F: push    edx; Src
0x6A0450: call    SaveLoad_SaveData
0x6A0455: mov     ecx, ds:0B33B00h
0x6A045B: cmp     byte ptr [ecx+7Ch], 37h ; '7'
0x6A045F: jb      short loc_6A04A5
0x6A0461: push    1; Size
0x6A0463: lea     eax, [esi+28h]
0x6A0466: push    eax; Src
0x6A0467: call    SaveLoad_SaveData
0x6A046C: push    4; Size
0x6A046E: lea     ecx, [esi+2Ch]
0x6A0471: push    ecx; Src
0x6A0472: mov     ecx, ds:0B33B00h
0x6A0478: call    SaveLoad_SaveData
0x6A047D: mov     esi, [esi+30h]
0x6A0480: test    esi, esi
0x6A0482: mov     [esp+4+arg_4], 0
0x6A048A: jz      short loc_6A0493
0x6A048C: mov     edx, [esi+0Ch]
0x6A048F: mov     [esp+4+arg_4], edx
0x6A0493: mov     ecx, ds:0B33B00h
0x6A0499: push    4
0x6A049B: lea     eax, [esp+8+arg_4]
0x6A049F: push    eax
0x6A04A0: call    SaveLoad_SaveFormID
0x6A04A5: pop     esi
0x6A04A6: retn    8
