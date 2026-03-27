0x9ED7B0: fld     ds:flt_A31E2C
0x9ED7B6: push    ecx
0x9ED7B7: fstp    [esp+4+var_4]; float
0x9ED7BA: push    offset aFclothingjewel; "fClothingJewelryBase"
0x9ED7BF: mov     ecx, offset fClothingJewelryBase
0x9ED7C4: call    GameSetting_ConstrAndReg_float
0x9ED7C9: push    offset sub_A1FE40; void (__cdecl *)()
0x9ED7CE: call    _atexit
0x9ED7D3: pop     ecx
0x9ED7D4: retn
