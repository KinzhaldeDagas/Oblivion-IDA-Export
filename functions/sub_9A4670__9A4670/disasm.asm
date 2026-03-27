0x9A4670: push    esi
0x9A4671: mov     esi, ecx
0x9A4673: mov     ecx, [esi+4]
0x9A4676: test    ecx, ecx
0x9A4678: mov     dword ptr [esi], offset ??_7?$NiTArray@V?$NiPointer@VNiD3DShaderConstantMapEntry@@@@@@6B@; const NiTArray<NiPointer<NiD3DShaderConstantMapEntry>>::`vftable'
0x9A467E: jz      short loc_9A4687
0x9A4680: push    3
0x9A4682: call    sub_4027F0
0x9A4687: test    [esp+4+arg_0], 1
0x9A468C: jz      short loc_9A4697
0x9A468E: push    esi
0x9A468F: call    FormHeapFree
0x9A4694: add     esp, 4
0x9A4697: mov     eax, esi
0x9A4699: pop     esi
0x9A469A: retn    4
