0x67B5A0: push    esi
0x67B5A1: mov     esi, ecx
0x67B5A3: call    TESPackage_LoadGame
0x67B5A8: push    4; byteCount
0x67B5AA: lea     eax, [esi+40h]
0x67B5AD: push    eax; destination
0x67B5AE: mov     ecx, esi; self
0x67B5B0: call    TESForm_LoadDataFromCurrentSaveGame; MEF v29 actor-pair helper prerequisite: TESForm_LoadDataFromCurrentSaveGame still loads SaveLoad at 0xB33B00 and tail-jumps to SaveLoad_LoadData.
0x67B5B5: push    0Ch; byteCount
0x67B5B7: lea     ecx, [esi+44h]
0x67B5BA: push    ecx; destination
0x67B5BB: mov     ecx, esi; self
0x67B5BD: call    TESForm_LoadDataFromCurrentSaveGame; MEF v29 actor-pair helper prerequisite: TESForm_LoadDataFromCurrentSaveGame still loads SaveLoad at 0xB33B00 and tail-jumps to SaveLoad_LoadData.
0x67B5C2: push    4; byteCount
0x67B5C4: lea     edx, [esi+50h]
0x67B5C7: push    edx; destination
0x67B5C8: mov     ecx, esi; self
0x67B5CA: call    TESForm_LoadDataFromCurrentSaveGame; MEF v29 actor-pair helper prerequisite: TESForm_LoadDataFromCurrentSaveGame still loads SaveLoad at 0xB33B00 and tail-jumps to SaveLoad_LoadData.
0x67B5CF: pop     esi
0x67B5D0: retn
