0x730BF0: push    esi
0x730BF1: mov     esi, ecx
0x730BF3: mov     dword ptr [esi], offset ??_7NiVertWeightsExtraData@@6B@; const NiVertWeightsExtraData::`vftable'
0x730BF9: call    NiExtraData_dtor
0x730BFE: test    byte ptr [esp+4+arg_0], 1
0x730C03: jz      short loc_730C0E
0x730C05: push    esi
0x730C06: call    FormHeapFree
0x730C0B: add     esp, 4
0x730C0E: mov     eax, esi
0x730C10: pop     esi
0x730C11: retn    4
