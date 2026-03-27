0x703C50: push    esi
0x703C51: mov     esi, ecx
0x703C53: mov     eax, [esi+4]
0x703C56: push    eax
0x703C57: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVShaderMap@NiTexturingProperty@@@@6B@; const NiTArray<NiTexturingProperty::ShaderMap *>::`vftable'
0x703C5D: call    FormHeapFree
0x703C62: add     esp, 4
0x703C65: test    [esp+4+arg_0], 1
0x703C6A: jz      short loc_703C75
0x703C6C: push    esi
0x703C6D: call    FormHeapFree
0x703C72: add     esp, 4
0x703C75: mov     eax, esi
0x703C77: pop     esi
0x703C78: retn    4
