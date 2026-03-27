0x4BCDE0: push    esi
0x4BCDE1: mov     esi, ecx
0x4BCDE3: call    ??1?$NiTPointerMap@PAVTESBoundObject@@PAUDISTANT_3D_DATA@@@@UAE@XZ; NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>::~NiTPointerMap<TESBoundObject *,DISTANT_3D_DATA *>(void)
0x4BCDE8: test    [esp+4+arg_0], 1
0x4BCDED: jz      short loc_4BCDF8
0x4BCDEF: push    esi
0x4BCDF0: call    FormHeapFree
0x4BCDF5: add     esp, 4
0x4BCDF8: mov     eax, esi
0x4BCDFA: pop     esi
0x4BCDFB: retn    4
