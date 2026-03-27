0x6E2C70: push    esi
0x6E2C71: mov     esi, ecx
0x6E2C73: mov     eax, [esi+4Ch]
0x6E2C76: push    eax
0x6E2C77: mov     dword ptr [esi], offset ??_7NiFloatsExtraDataController@@6B@; const NiFloatsExtraDataController::`vftable'
0x6E2C7D: call    FormHeapFree
0x6E2C82: add     esp, 4
0x6E2C85: mov     ecx, esi; this
0x6E2C87: call    ??1NiExtraDataController@@UAE@XZ; NiExtraDataController::~NiExtraDataController(void)
0x6E2C8C: test    [esp+4+arg_0], 1
0x6E2C91: jz      short loc_6E2C9C
0x6E2C93: push    esi
0x6E2C94: call    FormHeapFree
0x6E2C99: add     esp, 4
0x6E2C9C: mov     eax, esi
0x6E2C9E: pop     esi
0x6E2C9F: retn    4
