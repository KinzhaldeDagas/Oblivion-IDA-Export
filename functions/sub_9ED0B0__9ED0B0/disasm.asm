0x9ED0B0: fld     ds:flt_A47E6C
0x9ED0B6: push    ecx
0x9ED0B7: fstp    [esp+4+var_4]; float
0x9ED0BA: push    offset aFenchantmentpo; "fEnchantmentPointsMult"
0x9ED0BF: mov     ecx, offset fEnchantmentPointsMult
0x9ED0C4: call    GameSetting_ConstrAndReg_float
0x9ED0C9: push    offset sub_A1FBE0; void (__cdecl *)()
0x9ED0CE: call    _atexit
0x9ED0D3: pop     ecx
0x9ED0D4: retn
