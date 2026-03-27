0x478C60: push    esi
0x478C61: mov     esi, ecx
0x478C63: call    ??1?$NiTPointerMap@PAVNiObject@@_N@@UAE@XZ; NiTPointerMap<NiObject *,bool>::~NiTPointerMap<NiObject *,bool>(void)
0x478C68: test    [esp+4+arg_0], 1
0x478C6D: jz      short loc_478C78
0x478C6F: push    esi
0x478C70: call    FormHeapFree
0x478C75: add     esp, 4
0x478C78: mov     eax, esi
0x478C7A: pop     esi
0x478C7B: retn    4
