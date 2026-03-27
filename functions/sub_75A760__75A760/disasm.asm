0x75A760: push    esi
0x75A761: push    edi
0x75A762: mov     edi, ecx
0x75A764: mov     esi, [edi+18h]
0x75A767: test    esi, esi
0x75A769: jz      short loc_75A787
0x75A76B: lea     eax, [esi+4]
0x75A76E: push    eax; lpAddend
0x75A76F: call    dword ptr ds:0A2807Ch
0x75A775: test    eax, eax
0x75A777: jnz     short loc_75A787
0x75A779: test    esi, esi
0x75A77B: jz      short loc_75A787
0x75A77D: mov     edx, [esi]
0x75A77F: mov     eax, [edx]
0x75A781: push    1
0x75A783: mov     ecx, esi
0x75A785: call    eax
0x75A787: mov     ecx, edi; this
0x75A789: call    ??1NiPSysFieldModifier@@UAE@XZ; NiPSysFieldModifier::~NiPSysFieldModifier(void)
0x75A78E: test    [esp+8+arg_0], 1
0x75A793: jz      short loc_75A79E
0x75A795: push    edi
0x75A796: call    FormHeapFree
0x75A79B: add     esp, 4
0x75A79E: mov     eax, edi
0x75A7A0: pop     edi
0x75A7A1: pop     esi
0x75A7A2: retn    4
