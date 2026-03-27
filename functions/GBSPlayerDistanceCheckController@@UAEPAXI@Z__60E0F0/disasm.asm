0x60E0F0: push    esi
0x60E0F1: mov     esi, ecx
0x60E0F3: mov     dword ptr [esi], offset ??_7BSPlayerDistanceCheckController@@6B@; const BSPlayerDistanceCheckController::`vftable'
0x60E0F9: call    ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x60E0FE: test    byte ptr [esp+4+arg_0], 1
0x60E103: jz      short loc_60E10E
0x60E105: push    esi
0x60E106: call    FormHeapFree
0x60E10B: add     esp, 4
0x60E10E: mov     eax, esi
0x60E110: pop     esi
0x60E111: retn    4
