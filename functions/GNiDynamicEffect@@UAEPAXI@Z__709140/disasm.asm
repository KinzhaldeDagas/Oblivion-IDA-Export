0x709140: push    esi
0x709141: mov     esi, ecx
0x709143: call    ??1NiDynamicEffect@@UAE@XZ; NiDynamicEffect::~NiDynamicEffect(void)
0x709148: test    byte ptr [esp+4+arg_0], 1
0x70914D: jz      short loc_709158
0x70914F: push    esi
0x709150: call    FormHeapFree
0x709155: add     esp, 4
0x709158: mov     eax, esi
0x70915A: pop     esi
0x70915B: retn    4
