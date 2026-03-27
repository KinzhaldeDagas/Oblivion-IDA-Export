0x730240: push    esi
0x730241: mov     esi, ecx
0x730243: mov     eax, [esi+10h]
0x730246: push    eax
0x730247: mov     dword ptr [esi], offset ??_7NiFloatsExtraData@@6B@; const NiFloatsExtraData::`vftable'
0x73024D: call    FormHeapFree
0x730252: add     esp, 4
0x730255: mov     ecx, esi
0x730257: mov     dword ptr [esi+10h], 0
0x73025E: call    NiExtraData_dtor
0x730263: test    [esp+4+arg_0], 1
0x730268: jz      short loc_730273
0x73026A: push    esi
0x73026B: call    FormHeapFree
0x730270: add     esp, 4
0x730273: mov     eax, esi
0x730275: pop     esi
0x730276: retn    4
