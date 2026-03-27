0x6F6ED0: push    esi
0x6F6ED1: mov     esi, ecx
0x6F6ED3: push    esi; struct std::ios_base *
0x6F6ED4: mov     dword ptr [esi], offset ??_7ios_base@std@@6B@; const std::ios_base::`vftable'
0x6F6EDA: call    ?_Ios_base_dtor@ios_base@std@@CAXPAV12@@Z; std::ios_base::_Ios_base_dtor(std::ios_base *)
0x6F6EDF: add     esp, 4
0x6F6EE2: test    [esp+4+arg_0], 1
0x6F6EE7: jz      short loc_6F6EF2
0x6F6EE9: push    esi
0x6F6EEA: call    FormHeapFree
0x6F6EEF: add     esp, 4
0x6F6EF2: mov     eax, esi
0x6F6EF4: pop     esi
0x6F6EF5: retn    4
