0x9EE4A0: fld     ds:g_DialogueFov?
0x9EE4A6: push    ecx
0x9EE4A7: fstp    [esp+4+var_4]; float
0x9EE4AA: push    offset aFmagicspelll_3; "fMagicSpellLevelExpertMin"
0x9EE4AF: mov     ecx, offset flt_B37E18
0x9EE4B4: call    GameSetting_ConstrAndReg_float
0x9EE4B9: push    offset sub_A20350; void (__cdecl *)()
0x9EE4BE: call    _atexit
0x9EE4C3: pop     ecx
0x9EE4C4: retn
