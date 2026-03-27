0x574F90: push    esi
0x574F91: mov     esi, ecx
0x574F93: call    ??1?$NiTList@PAVNiTriShape@@@@UAE@XZ; NiTList<NiTriShape *>::~NiTList<NiTriShape *>(void)
0x574F98: test    [esp+4+arg_0], 1
0x574F9D: jz      short loc_574FA8
0x574F9F: push    esi
0x574FA0: call    FormHeapFree
0x574FA5: add     esp, 4
0x574FA8: mov     eax, esi
0x574FAA: pop     esi
0x574FAB: retn    4
