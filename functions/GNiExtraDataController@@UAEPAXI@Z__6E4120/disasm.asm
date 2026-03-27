0x6E4120: push    esi
0x6E4121: mov     esi, ecx
0x6E4123: call    ??1NiExtraDataController@@UAE@XZ; NiExtraDataController::~NiExtraDataController(void)
0x6E4128: test    byte ptr [esp+4+arg_0], 1
0x6E412D: jz      short loc_6E4138
0x6E412F: push    esi
0x6E4130: call    FormHeapFree
0x6E4135: add     esp, 4
0x6E4138: mov     eax, esi
0x6E413A: pop     esi
0x6E413B: retn    4
