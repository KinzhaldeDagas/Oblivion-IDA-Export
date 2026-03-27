0x70AEE0: push    esi
0x70AEE1: mov     esi, ecx
0x70AEE3: call    ??1?$NiTPointerList@PAVNiDynamicEffect@@@@UAE@XZ; NiTPointerList<NiDynamicEffect *>::~NiTPointerList<NiDynamicEffect *>(void)
0x70AEE8: test    [esp+4+arg_0], 1
0x70AEED: jz      short loc_70AEF8
0x70AEEF: push    esi
0x70AEF0: call    FormHeapFree
0x70AEF5: add     esp, 4
0x70AEF8: mov     eax, esi
0x70AEFA: pop     esi
0x70AEFB: retn    4
