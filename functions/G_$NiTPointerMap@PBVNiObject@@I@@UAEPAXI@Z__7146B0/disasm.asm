0x7146B0: push    esi
0x7146B1: mov     esi, ecx
0x7146B3: call    ??1?$NiTPointerMap@PBVNiObject@@I@@UAE@XZ; NiTPointerMap<NiObject const *,uint>::~NiTPointerMap<NiObject const *,uint>(void)
0x7146B8: test    [esp+4+arg_0], 1
0x7146BD: jz      short loc_7146C8
0x7146BF: push    esi
0x7146C0: call    FormHeapFree
0x7146C5: add     esp, 4
0x7146C8: mov     eax, esi
0x7146CA: pop     esi
0x7146CB: retn    4
