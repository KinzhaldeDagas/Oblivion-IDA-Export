0x6A7350: mov     eax, [esp+Dst]
0x6A7354: push    esi
0x6A7355: push    eax
0x6A7356: mov     esi, ecx
0x6A7358: call    ActiveEffect_Base_LoadEffect
0x6A735D: push    4; Size
0x6A735F: lea     ecx, [esp+0Ch]
0x6A7363: push    ecx; Dst
0x6A7364: mov     ecx, ds:0B33B00h
0x6A736A: call    SaveLoad_LoadFormID
0x6A736F: mov     edx, [esp+10h+var_8]
0x6A7373: mov     [esi+48h], edx
0x6A7376: mov     ecx, ds:0B33B00h
0x6A737C: cmp     byte ptr [ecx+7Ch], 40h ; '@'
0x6A7380: jb      short loc_6A739E
0x6A7382: push    4; Size
0x6A7384: lea     eax, [esi+40h]
0x6A7387: push    eax; Dst
0x6A7388: call    SaveLoad_LoadData
0x6A738D: mov     ecx, ds:0B33B00h
0x6A7393: push    4; Size
0x6A7395: add     esi, 44h ; 'D'
0x6A7398: push    esi; Dst
0x6A7399: call    SaveLoad_LoadData
0x6A739E: pop     esi
0x6A739F: retn    4
