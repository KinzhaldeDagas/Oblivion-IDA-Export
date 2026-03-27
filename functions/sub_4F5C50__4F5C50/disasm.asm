0x4F5C50: fldz
0x4F5C52: push    esi
0x4F5C53: mov     esi, [esp+4+arg_0]
0x4F5C57: test    esi, esi
0x4F5C59: push    edi
0x4F5C5A: mov     edi, [esp+8+arg_C]
0x4F5C5E: fstp    qword ptr [edi]
0x4F5C60: jz      short loc_4F5C86
0x4F5C62: mov     eax, [esi]
0x4F5C64: mov     edx, [eax+190h]
0x4F5C6A: mov     ecx, esi
0x4F5C6C: call    edx
0x4F5C6E: test    al, al
0x4F5C70: jz      short loc_4F5C86
0x4F5C72: mov     ecx, esi
0x4F5C74: call    Actor__IsNoRumor
0x4F5C79: test    al, al
0x4F5C7B: mov     al, 1
0x4F5C7D: jz      short loc_4F5C88
0x4F5C7F: fld1
0x4F5C81: fstp    qword ptr [edi]
0x4F5C83: pop     edi
0x4F5C84: pop     esi
0x4F5C85: retn
0x4F5C86: mov     al, 1
0x4F5C88: pop     edi
0x4F5C89: pop     esi
0x4F5C8A: retn
