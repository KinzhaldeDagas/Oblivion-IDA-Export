0x70E080: test    byte ptr [esp+arg_0], 1
0x70E085: push    esi
0x70E086: mov     esi, ecx
0x70E088: mov     dword ptr [esi], offset ??_7NiCullingProcess@@6B@; const NiCullingProcess::`vftable'
0x70E08E: jz      short loc_70E099
0x70E090: push    esi
0x70E091: call    FormHeapFree
0x70E096: add     esp, 4
0x70E099: mov     eax, esi
0x70E09B: pop     esi
0x70E09C: retn    4
