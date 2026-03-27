0x72EF70: push    esi
0x72EF71: mov     esi, ecx
0x72EF73: call    ??1?$NiTPointerMap@IM@@UAE@XZ; NiTPointerMap<uint,float>::~NiTPointerMap<uint,float>(void)
0x72EF78: test    [esp+4+arg_0], 1
0x72EF7D: jz      short loc_72EF88
0x72EF7F: push    esi
0x72EF80: call    FormHeapFree
0x72EF85: add     esp, 4
0x72EF88: mov     eax, esi
0x72EF8A: pop     esi
0x72EF8B: retn    4
