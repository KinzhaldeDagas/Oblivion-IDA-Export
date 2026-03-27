0x42B500: push    ecx
0x42B501: push    esi
0x42B502: mov     esi, ecx
0x42B504: mov     ecx, SaveLoad_CurrentSavegame
0x42B50A: push    0Ch; Size
0x42B50C: lea     eax, [esi+4]
0x42B50F: push    eax; Dst
0x42B510: call    SaveLoad_LoadData
0x42B515: push    0Ch; Size
0x42B517: lea     ecx, [esi+10h]
0x42B51A: push    ecx; Dst
0x42B51B: mov     ecx, SaveLoad_CurrentSavegame
0x42B521: call    SaveLoad_LoadData
0x42B526: mov     ecx, SaveLoad_CurrentSavegame
0x42B52C: push    4; Size
0x42B52E: lea     edx, [esp+0Ch+Dst]
0x42B532: push    edx; Dst
0x42B533: call    SaveLoad_LoadFormID
0x42B538: mov     eax, [esp+10h+var_C]
0x42B53C: mov     [esi], eax
0x42B53E: pop     esi
0x42B53F: pop     ecx
0x42B540: retn
