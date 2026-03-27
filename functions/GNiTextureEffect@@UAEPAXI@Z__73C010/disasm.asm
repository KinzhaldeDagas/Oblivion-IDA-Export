0x73C010: push    esi
0x73C011: mov     esi, ecx
0x73C013: call    ??1NiTextureEffect@@UAE@XZ; NiTextureEffect::~NiTextureEffect(void)
0x73C018: test    byte ptr [esp+4+arg_0], 1
0x73C01D: jz      short loc_73C028
0x73C01F: push    esi
0x73C020: call    FormHeapFree
0x73C025: add     esp, 4
0x73C028: mov     eax, esi
0x73C02A: pop     esi
0x73C02B: retn    4
