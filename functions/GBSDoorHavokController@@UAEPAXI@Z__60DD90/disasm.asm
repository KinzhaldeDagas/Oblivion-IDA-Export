0x60DD90: push    esi
0x60DD91: mov     esi, ecx
0x60DD93: mov     dword ptr [esi], offset ??_7BSDoorHavokController@@6B@; const BSDoorHavokController::`vftable'
0x60DD99: call    ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x60DD9E: test    byte ptr [esp+4+arg_0], 1
0x60DDA3: jz      short loc_60DDAE
0x60DDA5: push    esi
0x60DDA6: call    FormHeapFree
0x60DDAB: add     esp, 4
0x60DDAE: mov     eax, esi
0x60DDB0: pop     esi
0x60DDB1: retn    4
