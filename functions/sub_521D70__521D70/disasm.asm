0x521D70: push    esi
0x521D71: mov     esi, ecx
0x521D73: mov     eax, [esi+4]
0x521D76: push    eax
0x521D77: mov     dword ptr [esi], offset ??_7?$NiTArray@PAUFaceGenUndo@@@@6B@; const NiTArray<FaceGenUndo *>::`vftable'
0x521D7D: call    FormHeapFree
0x521D82: add     esp, 4
0x521D85: test    [esp+4+arg_0], 1
0x521D8A: jz      short loc_521D95
0x521D8C: push    esi
0x521D8D: call    FormHeapFree
0x521D92: add     esp, 4
0x521D95: mov     eax, esi
0x521D97: pop     esi
0x521D98: retn    4
