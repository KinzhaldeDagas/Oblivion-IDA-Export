0x693B50: mov     eax, [esp+arg_0]
0x693B54: push    esi
0x693B55: push    eax
0x693B56: mov     esi, ecx
0x693B58: call    ActiveEffect_Base_SaveEffect
0x693B5D: mov     ecx, ds:0B33B00h
0x693B63: push    1; Size
0x693B65: add     esi, 3Ch ; '<'
0x693B68: push    esi; Src
0x693B69: call    SaveLoad_SaveData
0x693B6E: pop     esi
0x693B6F: retn    4
