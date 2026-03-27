0x6EC950: push    esi
0x6EC951: push    edi
0x6EC952: mov     edi, [esp+8+arg_0]
0x6EC956: push    edi
0x6EC957: mov     esi, ecx
0x6EC959: call    sub_715E40
0x6EC95E: mov     ecx, [esi+40h]
0x6EC961: test    ecx, ecx
0x6EC963: jz      short loc_6EC96D
0x6EC965: mov     eax, [ecx]
0x6EC967: mov     edx, [eax+38h]
0x6EC96A: push    edi
0x6EC96B: call    edx
0x6EC96D: pop     edi
0x6EC96E: pop     esi
0x6EC96F: retn    4
