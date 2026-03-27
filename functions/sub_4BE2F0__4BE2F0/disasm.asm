0x4BE2F0: push    esi
0x4BE2F1: mov     esi, ecx
0x4BE2F3: mov     eax, [esi+1Ch]
0x4BE2F6: push    eax
0x4BE2F7: mov     dword ptr [esi], offset ??_7ExteriorCellLoaderTask@@6B@; const ExteriorCellLoaderTask::`vftable'
0x4BE2FD: call    FormHeapFree
0x4BE302: add     esp, 4
0x4BE305: push    offset flt_B35B94; lpAddend
0x4BE30A: mov     dword ptr [esi], offset ??_7?$BSTask@_J@@6B@; const BSTask<__int64>::`vftable'
0x4BE310: call    dword ptr ds:0A2807Ch
0x4BE316: test    [esp+4+arg_0], 1
0x4BE31B: jz      short loc_4BE326
0x4BE31D: push    esi
0x4BE31E: call    FormHeapFree
0x4BE323: add     esp, 4
0x4BE326: mov     eax, esi
0x4BE328: pop     esi
0x4BE329: retn    4
