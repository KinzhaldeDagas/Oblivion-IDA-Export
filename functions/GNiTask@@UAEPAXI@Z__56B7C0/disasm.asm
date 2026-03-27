0x56B7C0: push    esi
0x56B7C1: mov     esi, ecx
0x56B7C3: mov     dword ptr [esi], offset ??_7NiTask@@6B@; const NiTask::`vftable'
0x56B7C9: call    NiRefObject_destr
0x56B7CE: test    byte ptr [esp+4+arg_0], 1
0x56B7D3: jz      short loc_56B7DE
0x56B7D5: push    esi
0x56B7D6: call    FormHeapFree
0x56B7DB: add     esp, 4
0x56B7DE: mov     eax, esi
0x56B7E0: pop     esi
0x56B7E1: retn    4
