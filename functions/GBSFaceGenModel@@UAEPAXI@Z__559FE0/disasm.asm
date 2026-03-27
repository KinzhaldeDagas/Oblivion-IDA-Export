0x559FE0: push    esi
0x559FE1: mov     esi, ecx
0x559FE3: call    ??1BSFaceGenModel@@UAE@XZ; BSFaceGenModel::~BSFaceGenModel(void)
0x559FE8: test    byte ptr [esp+4+arg_0], 1
0x559FED: jz      short loc_559FF8
0x559FEF: push    esi
0x559FF0: call    FormHeapFree
0x559FF5: add     esp, 4
0x559FF8: mov     eax, esi
0x559FFA: pop     esi
0x559FFB: retn    4
