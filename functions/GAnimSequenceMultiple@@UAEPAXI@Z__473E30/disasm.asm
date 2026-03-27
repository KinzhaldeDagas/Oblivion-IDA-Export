0x473E30: push    esi
0x473E31: mov     esi, ecx
0x473E33: call    ??1AnimSequenceMultiple@@UAE@XZ; AnimSequenceMultiple::~AnimSequenceMultiple(void)
0x473E38: test    byte ptr [esp+4+arg_0], 1
0x473E3D: jz      short loc_473E48
0x473E3F: push    esi
0x473E40: call    FormHeapFree
0x473E45: add     esp, 4
0x473E48: mov     eax, esi
0x473E4A: pop     esi
0x473E4B: retn    4
