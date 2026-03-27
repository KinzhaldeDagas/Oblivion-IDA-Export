0x4160E0: mov     ecx, TESDataHandler
0x4160E6: push    1; a3
0x4160E8: call    TESDataHandler_ReserveNextFormID
0x4160ED: push    eax; a2
0x4160EE: mov     ecx, esi; this
0x4160F0: call    TESForm_SetFormID
