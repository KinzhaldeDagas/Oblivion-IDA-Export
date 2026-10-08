0x9FA590: fld1; Verified registration: fPathPreferredPointBonus defaults to 1.0 and is applied when actor-aware graph traversal evaluates a preferred point (low bit of point Z).
0x9FA592: push    ecx
0x9FA593: fstp    [esp+4+var_4]; float
0x9FA596: mov     ecx, offset g_fPathPreferredPointBonus
0x9FA59B: push    offset aFpathpreferred; "fPathPreferredPointBonus"
0x9FA5A0: call    GameSetting_ConstrAndReg_float
0x9FA5A5: push    offset sub_A24030; void (__cdecl *)()
0x9FA5AA: call    _atexit
0x9FA5AF: pop     ecx
0x9FA5B0: retn
