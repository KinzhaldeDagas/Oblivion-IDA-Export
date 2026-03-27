0x693B80: mov     eax, [esp+arg_0]
0x693B84: push    esi
0x693B85: push    eax
0x693B86: mov     esi, ecx
0x693B88: call    ActiveEffect_Base_LoadEffect
0x693B8D: mov     ecx, ds:0B33B00h
0x693B93: push    1; Size
0x693B95: add     esi, 3Ch ; '<'
0x693B98: push    esi; Dst
0x693B99: call    SaveLoad_LoadData
0x693B9E: pop     esi
0x693B9F: retn    4
