0x6A4700: mov     eax, [esp+Src]
0x6A4704: push    esi
0x6A4705: push    eax
0x6A4706: mov     esi, ecx
0x6A4708: call    ActiveEffect_Base_SaveEffect
0x6A470D: mov     ecx, ds:0B33B00h
0x6A4713: mov     [esp+4+Src], 0
0x6A471B: cmp     byte ptr [ecx+7Ch], 2Ah ; '*'
0x6A471F: jb      short loc_6A4746
0x6A4721: mov     ecx, [esi+3Ch]
0x6A4724: test    ecx, ecx
0x6A4726: jz      short loc_6A4734
0x6A4728: call    ScriptEventList_GetSaveSize?
0x6A472D: movzx   edx, ax
0x6A4730: mov     [esp+4+Src], edx
0x6A4734: mov     ecx, ds:0B33B00h
0x6A473A: push    2; Size
0x6A473C: lea     eax, [esp+8+Src]
0x6A4740: push    eax; Src
0x6A4741: call    SaveLoad_SaveData
0x6A4746: mov     ecx, ds:0B33B00h
0x6A474C: cmp     byte ptr [ecx+7Ch], 2Ah ; '*'
0x6A4750: jnb     short loc_6A4766
0x6A4752: mov     ecx, [esi+3Ch]
0x6A4755: mov     [esp+4+Src], 1
0x6A475D: call    ScriptEventList_Save?
0x6A4762: pop     esi
0x6A4763: retn    4
0x6A4766: cmp     word ptr [esp+4+Src], 0
0x6A476C: jz      short loc_6A4776
0x6A476E: mov     ecx, [esi+3Ch]
0x6A4771: call    ScriptEventList_Save?
0x6A4776: pop     esi
0x6A4777: retn    4
