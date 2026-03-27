0x7893A0: push    esi
0x7893A1: mov     esi, ecx
0x7893A3: mov     dword ptr [esi], offset ??_7runtime_error@std@@6B@; const std::runtime_error::`vftable'
0x7893A9: cmp     dword ptr [esi+24h], 10h
0x7893AD: jb      short loc_7893BB
0x7893AF: mov     eax, [esi+10h]
0x7893B2: push    eax
0x7893B3: call    FormHeapFree
0x7893B8: add     esp, 4
0x7893BB: xor     eax, eax
0x7893BD: mov     dword ptr [esi+24h], 0Fh
0x7893C4: mov     [esi+20h], eax
0x7893C7: mov     [esi+10h], al
0x7893CA: mov     ecx, esi; this
0x7893CC: pop     esi
0x7893CD: jmp     ??1exception@std@@UAE@XZ; std::exception::~exception(void)
