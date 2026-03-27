0x4143E0: push    esi
0x4143E1: mov     esi, ecx
0x4143E3: mov     dword ptr [esi], offset ??_7logic_error@std@@6B@; const std::logic_error::`vftable'
0x4143E9: cmp     dword ptr [esi+24h], 10h
0x4143ED: jb      short loc_4143FB
0x4143EF: mov     eax, [esi+10h]
0x4143F2: push    eax
0x4143F3: call    FormHeapFree
0x4143F8: add     esp, 4
0x4143FB: xor     eax, eax
0x4143FD: mov     dword ptr [esi+24h], 0Fh
0x414404: mov     [esi+20h], eax
0x414407: mov     [esi+10h], al
0x41440A: mov     ecx, esi; this
0x41440C: pop     esi
0x41440D: jmp     ??1exception@std@@UAE@XZ; std::exception::~exception(void)
