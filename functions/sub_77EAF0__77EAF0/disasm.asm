0x77EAF0: mov     ecx, ds:0B428A8h
0x77EAF6: test    ecx, ecx
0x77EAF8: jz      short loc_77EB02
0x77EAFA: mov     eax, [ecx]
0x77EAFC: mov     edx, [eax]
0x77EAFE: push    1
0x77EB00: call    edx
0x77EB02: mov     dword ptr ds:0B428A8h, 0
0x77EB0C: retn
