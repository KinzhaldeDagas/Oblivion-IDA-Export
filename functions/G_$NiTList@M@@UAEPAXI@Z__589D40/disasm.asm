0x589D40: push    esi
0x589D41: mov     esi, ecx
0x589D43: call    ??1?$NiTList@M@@UAE@XZ; NiTList<float>::~NiTList<float>(void)
0x589D48: test    [esp+4+arg_0], 1
0x589D4D: jz      short loc_589D58
0x589D4F: push    esi
0x589D50: call    FormHeapFree
0x589D55: add     esp, 4
0x589D58: mov     eax, esi
0x589D5A: pop     esi
0x589D5B: retn    4
