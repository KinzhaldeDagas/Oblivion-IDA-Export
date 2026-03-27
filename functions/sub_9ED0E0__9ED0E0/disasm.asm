0x9ED0E0: fld     ds:flt_A47E6C
0x9ED0E6: push    ecx
0x9ED0E7: fstp    [esp+4+var_4]; float
0x9ED0EA: push    offset aFenchantmentef; "fEnchantmentEffectPointsMult"
0x9ED0EF: mov     ecx, offset fEnchantmentEffectPointsMult
0x9ED0F4: call    GameSetting_ConstrAndReg_float
0x9ED0F9: push    offset sub_A1FBF0; void (__cdecl *)()
0x9ED0FE: call    _atexit
0x9ED103: pop     ecx
0x9ED104: retn
