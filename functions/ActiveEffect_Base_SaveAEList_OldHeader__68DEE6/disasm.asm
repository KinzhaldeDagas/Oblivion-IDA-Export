0x68DEE6: mov     ecx, ds:0B33B00h; self
0x68DEEC: push    4; byteCount
0x68DEEE: lea     eax, [esp+4+Src]
0x68DEF2: push    eax; source
0x68DEF3: mov     [esp+8+Src], 4B4F4C42h
0x68DEFB: call    SaveLoad_SaveData
0x68DF00: mov     ecx, ds:0B33B00h; self
0x68DF06: mov     edx, [ecx+14h]
0x68DF09: push    2; byteCount
0x68DF0B: lea     eax, [esp+4+source]
0x68DF0F: push    eax; source
0x68DF10: mov     [esp+8+arg_4], edx
0x68DF14: call    SaveLoad_SaveData
