0x775060: push    esi
0x775061: mov     esi, ecx
0x775063: mov     eax, [esi+4]
0x775066: push    eax
0x775067: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVNiDX9AdapterDesc@@@@6B@; const NiTArray<NiDX9AdapterDesc *>::`vftable'
0x77506D: call    FormHeapFree
0x775072: add     esp, 4
0x775075: test    [esp+4+arg_0], 1
0x77507A: jz      short loc_775085
0x77507C: push    esi
0x77507D: call    FormHeapFree
0x775082: add     esp, 4
0x775085: mov     eax, esi
0x775087: pop     esi
0x775088: retn    4
