0x9EE3B0: fld     ds:flt_A57414
0x9EE3B6: push    ecx
0x9EE3B7: fstp    [esp+4+var_4]; float
0x9EE3BA: push    offset aFmagiccaster_0; "fMagicCasterSkillCostMult"
0x9EE3BF: mov     ecx, offset fMagicCasterSkillCostMult
0x9EE3C4: call    GameSetting_ConstrAndReg_float
0x9EE3C9: push    offset sub_A20300; void (__cdecl *)()
0x9EE3CE: call    _atexit
0x9EE3D3: pop     ecx
0x9EE3D4: retn
