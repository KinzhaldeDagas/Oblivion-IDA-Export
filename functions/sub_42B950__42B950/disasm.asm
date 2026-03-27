0x42B950: push    ecx
0x42B951: push    esi
0x42B952: mov     esi, ecx
0x42B954: mov     ecx, SaveLoad_CurrentSavegame
0x42B95A: push    0Ch; Size
0x42B95C: lea     eax, [esi+4]
0x42B95F: push    eax; Src
0x42B960: call    SaveLoad_SaveData
0x42B965: push    0Ch; Size
0x42B967: lea     ecx, [esi+10h]
0x42B96A: push    ecx; Src
0x42B96B: mov     ecx, SaveLoad_CurrentSavegame
0x42B971: call    SaveLoad_SaveData
0x42B976: mov     esi, [esi]
0x42B978: test    esi, esi
0x42B97A: mov     [esp+8+var_4], 0
0x42B982: jz      short loc_42B98B
0x42B984: mov     edx, [esi+0Ch]
0x42B987: mov     [esp+8+var_4], edx
0x42B98B: mov     ecx, SaveLoad_CurrentSavegame
0x42B991: push    4
0x42B993: lea     eax, [esp+0Ch+var_4]
0x42B997: push    eax
0x42B998: call    SaveLoad_SaveFormID
0x42B99D: pop     esi
0x42B99E: pop     ecx
0x42B99F: retn
