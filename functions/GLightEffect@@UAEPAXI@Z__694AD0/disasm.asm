0x694AD0: push    esi
0x694AD1: mov     esi, ecx
0x694AD3: call    ??1LightEffect@@UAE@XZ; LightEffect::~LightEffect(void)
0x694AD8: test    byte ptr [esp+4+arg_0], 1
0x694ADD: jz      short loc_694AE8
0x694ADF: push    esi
0x694AE0: call    FormHeapFree
0x694AE5: add     esp, 4
0x694AE8: mov     eax, esi
0x694AEA: pop     esi
0x694AEB: retn    4
