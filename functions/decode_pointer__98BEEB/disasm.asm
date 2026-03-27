0x98BEEB: push    esi
0x98BEEC: push    dwTlsIndex; dwTlsIndex
0x98BEF2: mov     esi, ds:TlsGetValue
0x98BEF8: call    esi ; TlsGetValue
0x98BEFA: test    eax, eax
0x98BEFC: jz      short loc_98BF1F
0x98BEFE: mov     eax, dword_B310AC
0x98BF03: cmp     eax, 0FFFFFFFFh
0x98BF06: jz      short loc_98BF1F
0x98BF08: push    eax
0x98BF09: push    dwTlsIndex; dwTlsIndex
0x98BF0F: call    esi ; TlsGetValue
0x98BF11: call    eax
0x98BF13: test    eax, eax
0x98BF15: jz      short loc_98BF1F
0x98BF17: mov     eax, [eax+1FCh]
0x98BF1D: jmp     short loc_98BF3A
0x98BF1F: push    offset aKernel32_dll
0x98BF24: call    ds:GetModuleHandleA
0x98BF2A: test    eax, eax
0x98BF2C: jz      short loc_98BF48
0x98BF2E: push    offset aDecodepointer
0x98BF33: push    eax; hModule
0x98BF34: call    ds:GetProcAddress
0x98BF3A: test    eax, eax
0x98BF3C: jz      short loc_98BF48
0x98BF3E: push    [esp+4+arg_0]
0x98BF42: call    eax
0x98BF44: mov     [esp+4+arg_0], eax
0x98BF48: mov     eax, [esp+4+arg_0]
0x98BF4C: pop     esi
0x98BF4D: retn
