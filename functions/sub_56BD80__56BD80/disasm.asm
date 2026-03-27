0x56BD80: push    ecx
0x56BD81: push    esi
0x56BD82: mov     esi, ecx
0x56BD84: mov     ecx, ds:0B33B00h
0x56BD8A: push    4; Size
0x56BD8C: lea     eax, [esi+8]
0x56BD8F: push    eax; Src
0x56BD90: call    SaveLoad_SaveData
0x56BD95: push    4; Size
0x56BD97: lea     ecx, [esi+10h]
0x56BD9A: push    ecx; Src
0x56BD9B: mov     ecx, ds:0B33B00h
0x56BDA1: call    SaveLoad_SaveData
0x56BDA6: mov     esi, [esi+0Ch]
0x56BDA9: test    esi, esi
0x56BDAB: mov     [esp+8+var_4], 0
0x56BDB3: jz      short loc_56BDBC
0x56BDB5: mov     edx, [esi+0Ch]
0x56BDB8: mov     [esp+8+var_4], edx
0x56BDBC: mov     ecx, ds:0B33B00h
0x56BDC2: push    4
0x56BDC4: lea     eax, [esp+0Ch+var_4]
0x56BDC8: push    eax
0x56BDC9: call    SaveLoad_SaveFormID
0x56BDCE: pop     esi
0x56BDCF: pop     ecx
0x56BDD0: retn
