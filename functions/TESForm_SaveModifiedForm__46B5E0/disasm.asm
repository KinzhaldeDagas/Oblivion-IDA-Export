0x46B5E0: test    [esp+arg_0], 1
0x46B5E5: jz      short locret_46B5F8
0x46B5E7: add     ecx, 8
0x46B5EA: push    4; byteCount
0x46B5EC: push    ecx; source
0x46B5ED: mov     ecx, ds:0B33B00h; self
0x46B5F3: call    SaveLoad_SaveData
0x46B5F8: retn    4
