0x65BC40: push    esi
0x65BC41: mov     esi, [esp+4+arg_0]
0x65BC45: test    esi, esi
0x65BC47: jz      short loc_65BC5E
0x65BC49: mov     eax, [esi]
0x65BC4B: test    eax, eax
0x65BC4D: jz      short loc_65BC5E
0x65BC4F: push    eax
0x65BC50: call    FormHeapFree
0x65BC55: add     esp, 4
0x65BC58: mov     dword ptr [esi], 0
0x65BC5E: pop     esi
0x65BC5F: retn    4
