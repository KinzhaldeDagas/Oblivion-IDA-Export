0x431340: push    esi
0x431341: mov     esi, ecx
0x431343: mov     eax, [esi+4]
0x431346: push    eax
0x431347: mov     dword ptr [esi], offset ??_7?$NiTArray@PBD@@6B@; const NiTArray<char const *>::`vftable'
0x43134D: call    FormHeapFree
0x431352: add     esp, 4
0x431355: test    [esp+4+arg_0], 1
0x43135A: jz      short loc_431365
0x43135C: push    esi
0x43135D: call    FormHeapFree
0x431362: add     esp, 4
0x431365: mov     eax, esi
0x431367: pop     esi
0x431368: retn    4
