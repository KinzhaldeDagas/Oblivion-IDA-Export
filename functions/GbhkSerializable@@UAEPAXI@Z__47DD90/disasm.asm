0x47DD90: push    esi
0x47DD91: mov     esi, ecx
0x47DD93: call    ??1bhkSerializable@@UAE@XZ; bhkSerializable::~bhkSerializable(void)
0x47DD98: test    byte ptr [esp+4+arg_0], 1
0x47DD9D: jz      short loc_47DDA8
0x47DD9F: push    esi
0x47DDA0: call    FormHeapFree
0x47DDA5: add     esp, 4
0x47DDA8: mov     eax, esi
0x47DDAA: pop     esi
0x47DDAB: retn    4
