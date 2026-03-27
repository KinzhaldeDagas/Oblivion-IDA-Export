0x67B5A0: push    esi
0x67B5A1: mov     esi, ecx
0x67B5A3: call    sub_567F70
0x67B5A8: push    4; a2
0x67B5AA: lea     eax, [esi+40h]
0x67B5AD: push    eax; a1
0x67B5AE: mov     ecx, esi
0x67B5B0: call    TESForm_LoadDataFromCurrentSaveGame
0x67B5B5: push    0Ch; a2
0x67B5B7: lea     ecx, [esi+44h]
0x67B5BA: push    ecx; a1
0x67B5BB: mov     ecx, esi
0x67B5BD: call    TESForm_LoadDataFromCurrentSaveGame
0x67B5C2: push    4; a2
0x67B5C4: lea     edx, [esi+50h]
0x67B5C7: push    edx; a1
0x67B5C8: mov     ecx, esi
0x67B5CA: call    TESForm_LoadDataFromCurrentSaveGame
0x67B5CF: pop     esi
0x67B5D0: retn
