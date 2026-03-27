0x714800: push    esi
0x714801: mov     esi, ecx
0x714803: call    ??1NiStream@@UAE@XZ; NiStream::~NiStream(void)
0x714808: test    byte ptr [esp+4+arg_0], 1
0x71480D: jz      short loc_714818
0x71480F: push    esi
0x714810: call    FormHeapFree
0x714815: add     esp, 4
0x714818: mov     eax, esi
0x71481A: pop     esi
0x71481B: retn    4
