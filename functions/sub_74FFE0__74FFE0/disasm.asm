0x74FFE0: push    esi
0x74FFE1: push    edi
0x74FFE2: mov     edi, ecx
0x74FFE4: mov     eax, [edi+58h]
0x74FFE7: push    eax
0x74FFE8: call    FormHeapFree
0x74FFED: mov     esi, [edi+48h]
0x74FFF0: add     esp, 4
0x74FFF3: test    esi, esi
0x74FFF5: jz      short loc_750013
0x74FFF7: lea     ecx, [esi+4]
0x74FFFA: push    ecx; lpAddend
0x74FFFB: call    dword ptr ds:0A2807Ch
0x750001: test    eax, eax
0x750003: jnz     short loc_750013
0x750005: test    esi, esi
0x750007: jz      short loc_750013
0x750009: mov     edx, [esi]
0x75000B: mov     eax, [edx]
0x75000D: push    1
0x75000F: mov     ecx, esi
0x750011: call    eax
0x750013: mov     ecx, edi; this
0x750015: call    ??1NiPSysModifierFloatCtlr@@UAE@XZ; NiPSysModifierFloatCtlr::~NiPSysModifierFloatCtlr(void)
0x75001A: test    [esp+8+arg_0], 1
0x75001F: jz      short loc_75002A
0x750021: push    edi
0x750022: call    FormHeapFree
0x750027: add     esp, 4
0x75002A: mov     eax, edi
0x75002C: pop     edi
0x75002D: pop     esi
0x75002E: retn    4
