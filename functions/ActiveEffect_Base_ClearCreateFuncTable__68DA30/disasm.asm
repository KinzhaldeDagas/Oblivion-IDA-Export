0x68DA30: mov     ecx, offset NiTMap_AECreatorFuncs; Verified registry-clear helper, called during WinMain shutdown after EffectSettingCollection_Clear; it clears NiTMap_AECreatorFuncs. The map also has a separate atexit destructor that frees its bucket array.
0x68DA35: jmp     NiTMap_Clear
