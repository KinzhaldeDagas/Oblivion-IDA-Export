0x67B560: push    esi
0x67B561: mov     esi, ecx
0x67B563: call    sub_567E00
0x67B568: push    4; a2
0x67B56A: lea     eax, [esi+40h]
0x67B56D: push    eax; a1
0x67B56E: mov     ecx, esi
0x67B570: call    TESForm_SaveDataToCurrentSaveGame
0x67B575: push    0Ch; a2
0x67B577: lea     ecx, [esi+44h]
0x67B57A: push    ecx; a1
0x67B57B: mov     ecx, esi
0x67B57D: call    TESForm_SaveDataToCurrentSaveGame
0x67B582: push    4; a2
0x67B584: lea     edx, [esi+50h]
0x67B587: push    edx; a1
0x67B588: mov     ecx, esi
0x67B58A: call    TESForm_SaveDataToCurrentSaveGame
0x67B58F: pop     esi
0x67B590: retn
