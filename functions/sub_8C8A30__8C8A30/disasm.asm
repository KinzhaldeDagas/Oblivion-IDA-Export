0x8C8A30: push    esi
0x8C8A31: push    edi
0x8C8A32: mov     edi, [esp+8+arg_0]
0x8C8A36: push    edi
0x8C8A37: mov     esi, ecx
0x8C8A39: call    sub_8AEAB0
0x8C8A3E: mov     eax, [esi]
0x8C8A40: mov     edx, [eax+74h]
0x8C8A43: lea     ecx, [esp+8+arg_0]
0x8C8A47: push    ecx
0x8C8A48: mov     ecx, esi
0x8C8A4A: call    edx
0x8C8A4C: mov     esi, eax
0x8C8A4E: test    esi, esi
0x8C8A50: jz      short loc_8C8A72
0x8C8A52: fld     dword ptr ds:0B2EFC4h
0x8C8A58: lea     eax, [esi+8]
0x8C8A5B: push    eax
0x8C8A5C: fstp    dword ptr [esi+4]
0x8C8A5F: push    edi
0x8C8A60: call    sub_8E83B0
0x8C8A65: add     esi, 14h
0x8C8A68: push    esi
0x8C8A69: push    edi
0x8C8A6A: call    sub_8E83B0
0x8C8A6F: add     esp, 10h
0x8C8A72: pop     edi
0x8C8A73: pop     esi
0x8C8A74: retn    4
