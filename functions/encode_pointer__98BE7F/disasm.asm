0x98BE7F: push    esi
0x98BE80: push    dwTlsIndex; dwTlsIndex
0x98BE86: mov     esi, ds:TlsGetValue
0x98BE8C: call    esi ; TlsGetValue
0x98BE8E: test    eax, eax
0x98BE90: jz      short loc_98BEB3
0x98BE92: mov     eax, dword_B310AC
0x98BE97: cmp     eax, 0FFFFFFFFh
0x98BE9A: jz      short loc_98BEB3
0x98BE9C: push    eax
0x98BE9D: push    dwTlsIndex; dwTlsIndex
0x98BEA3: call    esi ; TlsGetValue
0x98BEA5: call    eax
0x98BEA7: test    eax, eax
0x98BEA9: jz      short loc_98BEB3
0x98BEAB: mov     eax, [eax+1F8h]
0x98BEB1: jmp     short loc_98BECE
0x98BEB3: push    offset aKernel32_dll
0x98BEB8: call    ds:GetModuleHandleA
0x98BEBE: test    eax, eax
0x98BEC0: jz      short loc_98BEDC
0x98BEC2: push    offset aEncodepointer
0x98BEC7: push    eax; hModule
0x98BEC8: call    ds:GetProcAddress
0x98BECE: test    eax, eax
0x98BED0: jz      short loc_98BEDC
0x98BED2: push    [esp+4+arg_0]
0x98BED6: call    eax
0x98BED8: mov     [esp+4+arg_0], eax
0x98BEDC: mov     eax, [esp+4+arg_0]
0x98BEE0: pop     esi
0x98BEE1: retn
