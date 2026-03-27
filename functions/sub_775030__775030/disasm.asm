0x775030: push    esi
0x775031: mov     esi, ecx
0x775033: mov     eax, [esi+4]
0x775036: push    eax
0x775037: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVModeDesc@NiDX9AdapterDesc@@@@6B@; const NiTArray<NiDX9AdapterDesc::ModeDesc *>::`vftable'
0x77503D: call    FormHeapFree
0x775042: add     esp, 4
0x775045: test    [esp+4+arg_0], 1
0x77504A: jz      short loc_775055
0x77504C: push    esi
0x77504D: call    FormHeapFree
0x775052: add     esp, 4
0x775055: mov     eax, esi
0x775057: pop     esi
0x775058: retn    4
