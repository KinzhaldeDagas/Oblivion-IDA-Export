0x440FA0: push    esi
0x440FA1: lea     esi, [ecx+8Ch]
0x440FA7: mov     eax, esi
0x440FA9: test    eax, eax
0x440FAB: push    edi
0x440FAC: mov     edi, [esp+8+arg_0]
0x440FB0: jz      short loc_440FC3
0x440FB2: mov     ecx, [eax]
0x440FB4: test    ecx, ecx
0x440FB6: jz      short loc_440FC3
0x440FB8: cmp     [ecx], edi
0x440FBA: jz      short loc_440FE5
0x440FBC: mov     eax, [eax+4]
0x440FBF: test    eax, eax
0x440FC1: jnz     short loc_440FB2
0x440FC3: push    8; Size
0x440FC5: call    FormHeapAlloc
0x440FCA: mov     cx, [esp+0Ch+arg_4]
0x440FCF: add     esp, 4
0x440FD2: mov     [eax+4], cx
0x440FD6: push    eax
0x440FD7: mov     ecx, esi
0x440FD9: mov     [eax], edi
0x440FDB: call    BSSimpleList_PushFront
0x440FE0: pop     edi
0x440FE1: pop     esi
0x440FE2: retn    8
0x440FE5: mov     ax, [esp+8+arg_4]
0x440FEA: add     [ecx+4], ax
0x440FEE: pop     edi
0x440FEF: pop     esi
0x440FF0: retn    8
