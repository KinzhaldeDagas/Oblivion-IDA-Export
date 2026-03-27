0x6D7250: push    esi
0x6D7251: mov     esi, ecx
0x6D7253: mov     eax, [esi+54h]
0x6D7256: push    eax
0x6D7257: mov     dword ptr [esi], offset ??_7NiTextureTransformController@@6B@; const NiTextureTransformController::`vftable'
0x6D725D: call    FormHeapFree
0x6D7262: add     esp, 4
0x6D7265: mov     ecx, esi; this
0x6D7267: mov     dword ptr [esi+54h], 0
0x6D726E: call    ??1NiPoint3InterpController@@UAE@XZ; NiPoint3InterpController::~NiPoint3InterpController(void)
0x6D7273: test    [esp+4+arg_0], 1
0x6D7278: jz      short loc_6D7283
0x6D727A: push    esi
0x6D727B: call    FormHeapFree
0x6D7280: add     esp, 4
0x6D7283: mov     eax, esi
0x6D7285: pop     esi
0x6D7286: retn    4
