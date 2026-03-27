0x692ED0: mov     eax, [esp+arg_0]
0x692ED4: push    esi
0x692ED5: push    eax
0x692ED6: mov     esi, ecx
0x692ED8: call    ActiveEffect_Base_LoadEffect
0x692EDD: mov     ecx, ds:0B33B00h
0x692EE3: push    1; Size
0x692EE5: add     esi, 38h ; '8'
0x692EE8: push    esi; Dst
0x692EE9: call    SaveLoad_LoadData
0x692EEE: pop     esi
0x692EEF: retn    4
