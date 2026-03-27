0x7139F0: push    esi
0x7139F1: mov     esi, ecx
0x7139F3: call    ??1?$NiTPointerMap@PBDP6APAVNiObject@@XZ@@UAE@XZ; NiTPointerMap<char const *,NiObject * (*)(void)>::~NiTPointerMap<char const *,NiObject * (*)(void)>(void)
0x7139F8: test    [esp+4+arg_0], 1
0x7139FD: jz      short loc_713A08
0x7139FF: push    esi
0x713A00: call    FormHeapFree
0x713A05: add     esp, 4
0x713A08: mov     eax, esi
0x713A0A: pop     esi
0x713A0B: retn    4
