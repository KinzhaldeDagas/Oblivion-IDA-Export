0x45A7E0: push    esi
0x45A7E1: mov     esi, ecx
0x45A7E3: call    ??1?$NiTPointerMap@IPAVChangeData@@@@UAE@XZ; NiTPointerMap<uint,ChangeData *>::~NiTPointerMap<uint,ChangeData *>(void)
0x45A7E8: test    [esp+4+arg_0], 1
0x45A7ED: jz      short loc_45A7F8
0x45A7EF: push    esi
0x45A7F0: call    FormHeapFree
0x45A7F5: add     esp, 4
0x45A7F8: mov     eax, esi
0x45A7FA: pop     esi
0x45A7FB: retn    4
