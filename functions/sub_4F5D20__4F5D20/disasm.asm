0x4F5D20: fldz
0x4F5D22: push    esi
0x4F5D23: mov     esi, [esp+4+arg_0]
0x4F5D27: test    esi, esi
0x4F5D29: push    edi
0x4F5D2A: mov     edi, [esp+8+arg_C]
0x4F5D2E: fstp    qword ptr [edi]
0x4F5D30: jz      short loc_4F5D58
0x4F5D32: mov     eax, [esi]
0x4F5D34: mov     edx, [eax+190h]
0x4F5D3A: mov     ecx, esi
0x4F5D3C: call    edx
0x4F5D3E: test    al, al
0x4F5D40: jz      short loc_4F5D58
0x4F5D42: mov     eax, ds:0B333C4h
0x4F5D47: cmp     esi, [eax+1E0h]
0x4F5D4D: mov     al, 1
0x4F5D4F: jnz     short loc_4F5D5A
0x4F5D51: fld1
0x4F5D53: fstp    qword ptr [edi]
0x4F5D55: pop     edi
0x4F5D56: pop     esi
0x4F5D57: retn
0x4F5D58: mov     al, 1
0x4F5D5A: pop     edi
0x4F5D5B: pop     esi
0x4F5D5C: retn
