0x7893E0: push    esi
0x7893E1: mov     esi, ecx
0x7893E3: mov     dword ptr [esi], offset ??_7runtime_error@std@@6B@; const std::runtime_error::`vftable'
0x7893E9: cmp     dword ptr [esi+24h], 10h
0x7893ED: jb      short loc_7893FB
0x7893EF: mov     eax, [esi+10h]
0x7893F2: push    eax
0x7893F3: call    FormHeapFree
0x7893F8: add     esp, 4
0x7893FB: xor     eax, eax
0x7893FD: mov     dword ptr [esi+24h], 0Fh
0x789404: mov     [esi+20h], eax
0x789407: mov     ecx, esi; this
0x789409: mov     [esi+10h], al
0x78940C: call    ??1exception@std@@UAE@XZ; std::exception::~exception(void)
0x789411: test    [esp+4+arg_0], 1
0x789416: jz      short loc_789421
0x789418: push    esi
0x789419: call    FormHeapFree
0x78941E: add     esp, 4
0x789421: mov     eax, esi
0x789423: pop     esi
0x789424: retn    4
