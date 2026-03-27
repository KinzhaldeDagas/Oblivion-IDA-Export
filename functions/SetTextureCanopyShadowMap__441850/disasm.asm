0x441850: mov     eax, ds:0B4310Ch
0x441855: push    edi
0x441856: mov     edi, [esp+4+arg_0]
0x44185A: cmp     eax, edi
0x44185C: jz      short loc_441896
0x44185E: test    eax, eax
0x441860: jz      short loc_441882
0x441862: push    esi
0x441863: mov     esi, eax
0x441865: add     eax, 4
0x441868: push    eax; lpAddend
0x441869: call    dword ptr ds:0A2807Ch
0x44186F: test    eax, eax
0x441871: jnz     short loc_441881
0x441873: test    esi, esi
0x441875: jz      short loc_441881
0x441877: mov     eax, [esi]
0x441879: mov     edx, [eax]
0x44187B: push    1
0x44187D: mov     ecx, esi
0x44187F: call    edx
0x441881: pop     esi
0x441882: test    edi, edi
0x441884: mov     ds:0B4310Ch, edi
0x44188A: jz      short loc_441896
0x44188C: add     edi, 4
0x44188F: push    edi; lpAddend
0x441890: call    dword ptr ds:0A28078h
0x441896: pop     edi
0x441897: retn
