0x6DEE80: push    esi
0x6DEE81: mov     esi, ecx
0x6DEE83: mov     dword ptr [esi], offset ??_7NiMaterialColorController@@6B@; const NiMaterialColorController::`vftable'
0x6DEE89: call    ??1NiPoint3InterpController@@UAE@XZ; NiPoint3InterpController::~NiPoint3InterpController(void)
0x6DEE8E: test    byte ptr [esp+4+arg_0], 1
0x6DEE93: jz      short loc_6DEE9E
0x6DEE95: push    esi
0x6DEE96: call    FormHeapFree
0x6DEE9B: add     esp, 4
0x6DEE9E: mov     eax, esi
0x6DEEA0: pop     esi
0x6DEEA1: retn    4
