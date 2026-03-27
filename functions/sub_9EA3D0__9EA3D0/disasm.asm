0x9EA3D0: fld     ds:flt_A35AA4
0x9EA3D6: push    ecx
0x9EA3D7: fstp    [esp+4+var_4]; float
0x9EA3DA: push    offset aFperklightarmo; "fPerkLightArmorMasterRatingMult"
0x9EA3DF: mov     ecx, offset fPerkLightArmorMasterRatingMult
0x9EA3E4: call    GameSetting_ConstrAndReg_float
0x9EA3E9: push    offset sub_A1EBD0; void (__cdecl *)()
0x9EA3EE: call    _atexit
0x9EA3F3: pop     ecx
0x9EA3F4: retn
