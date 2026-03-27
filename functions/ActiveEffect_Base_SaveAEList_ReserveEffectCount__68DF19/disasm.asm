0x68DF19: mov     ecx, ds:0B33B00h
0x68DF1F: push    ebp
0x68DF20: push    esi
0x68DF21: push    edi
0x68DF22: push    2; Size
0x68DF24: lea     edx, [esp+10h]
0x68DF28: mov     dword ptr [esp+10h], 0
0x68DF30: mov     ebp, [ecx+14h]
0x68DF33: push    edx; Src
0x68DF34: call    SaveLoad_SaveData
