0x67B560: push    esi
0x67B561: mov     esi, ecx
0x67B563: call    TESPackage_SaveGame
0x67B568: push    4; byteCount
0x67B56A: lea     eax, [esi+40h]
0x67B56D: push    eax; source
0x67B56E: mov     ecx, esi; self
0x67B570: call    TESForm_SaveDataToCurrentSaveGame
0x67B575: push    0Ch; byteCount
0x67B577: lea     ecx, [esi+44h]
0x67B57A: push    ecx; source
0x67B57B: mov     ecx, esi; self
0x67B57D: call    TESForm_SaveDataToCurrentSaveGame
0x67B582: push    4; byteCount
0x67B584: lea     edx, [esi+50h]
0x67B587: push    edx; source
0x67B588: mov     ecx, esi; self
0x67B58A: call    TESForm_SaveDataToCurrentSaveGame
0x67B58F: pop     esi
0x67B590: retn
