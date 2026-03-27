0x7E28C0: push    esi
0x7E28C1: mov     esi, ecx
0x7E28C3: call    ??1BSShaderProperty@@UAE@XZ; BSShaderProperty::~BSShaderProperty(void)
0x7E28C8: test    byte ptr [esp+4+arg_0], 1
0x7E28CD: jz      short loc_7E28D8
0x7E28CF: push    esi
0x7E28D0: call    FormHeapFree
0x7E28D5: add     esp, 4
0x7E28D8: mov     eax, esi
0x7E28DA: pop     esi
0x7E28DB: retn    4
