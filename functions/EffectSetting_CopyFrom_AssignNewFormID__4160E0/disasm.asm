0x4160E0: mov     ecx, g_TESDataHandler; Verified singleton pointer: allocated as TESDataHandler (0xCE0 bytes) and published at TES_constr 441B8A; passed to LoadFiles and form APIs; TES_destr 446915 destroys and clears it. Field +0x74 is the Global list head used by TESSaveLoadGame_LoadGlobalValues; surrounding layout remains Unknown.
0x4160E6: push    1; a3
0x4160E8: call    TESDataHandler_ReserveNextFormID
0x4160ED: push    eax; a2
0x4160EE: mov     ecx, esi; this
0x4160F0: call    TESForm_SetFormID
