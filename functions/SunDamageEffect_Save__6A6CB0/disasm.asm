0x6A6CB0: mov     eax, [esp+arg_0]
0x6A6CB4: push    esi
0x6A6CB5: push    eax
0x6A6CB6: mov     esi, ecx
0x6A6CB8: call    ActiveEffect_Base_SaveEffect
0x6A6CBD: mov     ecx, ds:0B33B00h
0x6A6CC3: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x6A6CC7: jb      short loc_6A6CD4
0x6A6CC9: push    4; Size
0x6A6CCB: add     esi, 38h ; '8'
0x6A6CCE: push    esi; Src
0x6A6CCF: call    SaveLoad_SaveData
0x6A6CD4: pop     esi
0x6A6CD5: retn    4
