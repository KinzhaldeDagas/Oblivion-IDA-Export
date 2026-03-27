0x77D360: push    esi
0x77D361: mov     esi, ecx
0x77D363: mov     eax, [esi+4]
0x77D366: push    eax
0x77D367: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVNiVBBlock@@@@6B@; const NiTArray<NiVBBlock *>::`vftable'
0x77D36D: call    FormHeapFree
0x77D372: add     esp, 4
0x77D375: test    [esp+4+arg_0], 1
0x77D37A: jz      short loc_77D385
0x77D37C: push    esi
0x77D37D: call    FormHeapFree
0x77D382: add     esp, 4
0x77D385: mov     eax, esi
0x77D387: pop     esi
0x77D388: retn    4
