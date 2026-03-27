0x439000: push    esi
0x439001: mov     esi, ecx
0x439003: push    offset Addend; lpAddend
0x439008: mov     dword ptr [esi], offset ??_7?$BSTask@_J@@6B@; const BSTask<__int64>::`vftable'
0x43900E: call    ds:InterlockedDecrement
0x439014: test    [esp+4+arg_0], 1
0x439019: jz      short loc_439024
0x43901B: push    esi
0x43901C: call    FormHeapFree
0x439021: add     esp, 4
0x439024: mov     eax, esi
0x439026: pop     esi
0x439027: retn    4
