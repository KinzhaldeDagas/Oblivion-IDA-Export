0x4F85E0: fldz
0x4F85E2: push    esi
0x4F85E3: mov     esi, [esp+4+arg_0]
0x4F85E7: test    esi, esi
0x4F85E9: push    edi
0x4F85EA: mov     edi, [esp+8+arg_C]
0x4F85EE: fstp    qword ptr [edi]
0x4F85F0: jz      short loc_4F861D
0x4F85F2: mov     eax, [esi]
0x4F85F4: mov     edx, [eax+190h]
0x4F85FA: mov     ecx, esi
0x4F85FC: call    edx
0x4F85FE: test    al, al
0x4F8600: jz      short loc_4F861D
0x4F8602: mov     ecx, [esi+58h]
0x4F8605: test    ecx, ecx
0x4F8607: jz      short loc_4F861D
0x4F8609: mov     eax, [ecx]
0x4F860B: mov     edx, [eax+64h]
0x4F860E: call    edx
0x4F8610: test    al, al
0x4F8612: mov     al, 1
0x4F8614: jz      short loc_4F861F
0x4F8616: fld1
0x4F8618: fstp    qword ptr [edi]
0x4F861A: pop     edi
0x4F861B: pop     esi
0x4F861C: retn
0x4F861D: mov     al, 1
0x4F861F: pop     edi
0x4F8620: pop     esi
0x4F8621: retn
