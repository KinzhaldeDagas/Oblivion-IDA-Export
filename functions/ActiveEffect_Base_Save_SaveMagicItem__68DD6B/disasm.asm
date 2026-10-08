0x68DD6B: mov     ecx, [esi+8]; int
0x68DD6E: call    MagicItem_GetFormID
0x68DD73: mov     ecx, ds:0B33B00h; self
0x68DD79: mov     [esp+source], eax
0x68DD7D: push    4; byteCount
0x68DD7F: lea     eax, [esp+4+source]
0x68DD83: push    eax; source
0x68DD84: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
