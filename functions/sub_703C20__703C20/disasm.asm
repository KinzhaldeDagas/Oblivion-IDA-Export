0x703C20: push    esi
0x703C21: mov     esi, ecx
0x703C23: mov     eax, [esi+4]
0x703C26: push    eax
0x703C27: mov     dword ptr [esi], offset ??_7?$NiTArray@PAVMap@NiTexturingProperty@@@@6B@; const NiTArray<NiTexturingProperty::Map *>::`vftable'
0x703C2D: call    FormHeapFree
0x703C32: add     esp, 4
0x703C35: test    [esp+4+arg_0], 1
0x703C3A: jz      short loc_703C45
0x703C3C: push    esi
0x703C3D: call    FormHeapFree
0x703C42: add     esp, 4
0x703C45: mov     eax, esi
0x703C47: pop     esi
0x703C48: retn    4
