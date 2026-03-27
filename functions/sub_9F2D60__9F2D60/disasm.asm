0x9F2D60: push    offset aIngredientHadN; " Ingredient had no effect."
0x9F2D65: push    offset aSingredientfai; "sIngredientFail"
0x9F2D6A: mov     ecx, offset sIngredientFail
0x9F2D6F: call    GameSetting_ConstrAndReg
0x9F2D74: push    offset sub_A222E0; void (__cdecl *)()
0x9F2D79: call    _atexit
0x9F2D7E: pop     ecx
0x9F2D7F: retn
