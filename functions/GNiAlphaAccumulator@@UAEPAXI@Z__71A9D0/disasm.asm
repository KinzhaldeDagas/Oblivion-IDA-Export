0x71A9D0: push    esi
0x71A9D1: mov     esi, ecx
0x71A9D3: mov     dword ptr [esi], offset ??_7NiAlphaAccumulator@@6B@; const NiAlphaAccumulator::`vftable'
0x71A9D9: call    ??1NiBackToFrontAccumulator@@UAE@XZ; NiBackToFrontAccumulator::~NiBackToFrontAccumulator(void)
0x71A9DE: test    byte ptr [esp+4+arg_0], 1
0x71A9E3: jz      short loc_71A9EE
0x71A9E5: push    esi
0x71A9E6: call    FormHeapFree
0x71A9EB: add     esp, 4
0x71A9EE: mov     eax, esi
0x71A9F0: pop     esi
0x71A9F1: retn    4
