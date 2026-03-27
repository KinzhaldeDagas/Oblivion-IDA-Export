0x6A6CE0: mov     eax, [esp+arg_0]
0x6A6CE4: push    esi
0x6A6CE5: push    eax
0x6A6CE6: mov     esi, ecx
0x6A6CE8: call    ActiveEffect_Base_LoadEffect
0x6A6CED: mov     ecx, ds:0B33B00h
0x6A6CF3: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x6A6CF7: jb      short loc_6A6D04
0x6A6CF9: push    4; Size
0x6A6CFB: add     esi, 38h ; '8'
0x6A6CFE: push    esi; Dst
0x6A6CFF: call    SaveLoad_LoadData
0x6A6D04: pop     esi
0x6A6D05: retn    4
