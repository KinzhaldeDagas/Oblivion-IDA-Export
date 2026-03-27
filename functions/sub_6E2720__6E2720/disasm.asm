0x6E2720: push    esi
0x6E2721: mov     esi, ecx
0x6E2723: mov     eax, [esi+4Ch]
0x6E2726: push    eax
0x6E2727: mov     dword ptr [esi], offset ??_7NiFloatsExtraDataPoint3Controller@@6B@; const NiFloatsExtraDataPoint3Controller::`vftable'
0x6E272D: call    FormHeapFree
0x6E2732: add     esp, 4
0x6E2735: mov     ecx, esi; this
0x6E2737: call    ??1NiExtraDataController@@UAE@XZ; NiExtraDataController::~NiExtraDataController(void)
0x6E273C: test    [esp+4+arg_0], 1
0x6E2741: jz      short loc_6E274C
0x6E2743: push    esi
0x6E2744: call    FormHeapFree
0x6E2749: add     esp, 4
0x6E274C: mov     eax, esi
0x6E274E: pop     esi
0x6E274F: retn    4
