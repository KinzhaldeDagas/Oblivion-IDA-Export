0x848FA0: push    esi
0x848FA1: mov     esi, [esp+4+arg_0]
0x848FA5: test    esi, esi
0x848FA7: jz      short loc_848FC9
0x848FA9: mov     ecx, [esp+4+arg_4]
0x848FAD: test    ecx, ecx
0x848FAF: jz      short loc_848FC9
0x848FB1: cmp     byte ptr ds:0B42CDDh, 0
0x848FB8: jz      short loc_848FC9
0x848FBA: mov     eax, [ecx]
0x848FBC: mov     edx, [eax+78h]
0x848FBF: call    edx
0x848FC1: push    eax
0x848FC2: mov     ecx, esi
0x848FC4: call    sub_7715E0
0x848FC9: pop     esi
0x848FCA: retn    8
