0x478C40: push    esi
0x478C41: mov     esi, ecx
0x478C43: call    ??1?$NiTPointerMap@PAVNiObject@@PAV1@@@UAE@XZ; NiTPointerMap<NiObject *,NiObject *>::~NiTPointerMap<NiObject *,NiObject *>(void)
0x478C48: test    [esp+4+arg_0], 1
0x478C4D: jz      short loc_478C58
0x478C4F: push    esi
0x478C50: call    FormHeapFree
0x478C55: add     esp, 4
0x478C58: mov     eax, esi
0x478C5A: pop     esi
0x478C5B: retn    4
