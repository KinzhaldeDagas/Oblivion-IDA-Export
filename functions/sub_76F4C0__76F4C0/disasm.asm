0x76F4C0: push    esi
0x76F4C1: mov     esi, ecx
0x76F4C3: mov     eax, [esi+4]
0x76F4C6: push    eax
0x76F4C7: mov     dword ptr [esi], offset ??_7?$NiTArray@P6AIAAVPackingParameters@NiD3DShaderDeclaration@@@Z@@6B@; const NiTArray<uint (*)(NiD3DShaderDeclaration::PackingParameters &)>::`vftable'
0x76F4CD: call    FormHeapFree
0x76F4D2: add     esp, 4
0x76F4D5: test    [esp+4+arg_0], 1
0x76F4DA: jz      short loc_76F4E5
0x76F4DC: push    esi
0x76F4DD: call    FormHeapFree
0x76F4E2: add     esp, 4
0x76F4E5: mov     eax, esi
0x76F4E7: pop     esi
0x76F4E8: retn    4
