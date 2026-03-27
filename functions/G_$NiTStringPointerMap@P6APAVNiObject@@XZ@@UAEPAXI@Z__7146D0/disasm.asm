0x7146D0: push    esi
0x7146D1: mov     esi, ecx
0x7146D3: call    ??1?$NiTStringPointerMap@P6APAVNiObject@@XZ@@UAE@XZ; NiTStringPointerMap<NiObject * (*)(void)>::~NiTStringPointerMap<NiObject * (*)(void)>(void)
0x7146D8: test    [esp+4+arg_0], 1
0x7146DD: jz      short loc_7146E8
0x7146DF: push    esi
0x7146E0: call    FormHeapFree
0x7146E5: add     esp, 4
0x7146E8: mov     eax, esi
0x7146EA: pop     esi
0x7146EB: retn    4
