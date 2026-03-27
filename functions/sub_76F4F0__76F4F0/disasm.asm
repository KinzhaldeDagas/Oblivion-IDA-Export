0x76F4F0: push    esi
0x76F4F1: mov     esi, ecx
0x76F4F3: mov     eax, [esi+4]
0x76F4F6: push    eax
0x76F4F7: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVNiPackerEntry@NiD3DShaderDeclaration@@@@6B@; const NiTArray<NiD3DShaderDeclaration::NiPackerEntry *>::`vftable'
0x76F4FD: call    FormHeapFree
0x76F502: add     esp, 4
0x76F505: test    [esp+4+arg_0], 1
0x76F50A: jz      short loc_76F515
0x76F50C: push    esi
0x76F50D: call    FormHeapFree
0x76F512: add     esp, 4
0x76F515: mov     eax, esi
0x76F517: pop     esi
0x76F518: retn    4
