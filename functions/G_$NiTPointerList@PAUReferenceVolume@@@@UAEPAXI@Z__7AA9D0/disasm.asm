0x7AA9D0: push    esi
0x7AA9D1: mov     esi, ecx
0x7AA9D3: call    ??1?$NiTPointerList@PAUReferenceVolume@@@@UAE@XZ; NiTPointerList<ReferenceVolume *>::~NiTPointerList<ReferenceVolume *>(void)
0x7AA9D8: test    [esp+4+arg_0], 1
0x7AA9DD: jz      short loc_7AA9E8
0x7AA9DF: push    esi
0x7AA9E0: call    FormHeapFree
0x7AA9E5: add     esp, 4
0x7AA9E8: mov     eax, esi
0x7AA9EA: pop     esi
0x7AA9EB: retn    4
