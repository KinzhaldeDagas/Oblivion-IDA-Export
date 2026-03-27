0x52F650: mov     eax, [esp+arg_0]
0x52F654: push    eax
0x52F655: call    sub_52EFA0
0x52F65A: test    eax, eax
0x52F65C: jz      short locret_52F67E
0x52F65E: push    esi
0x52F65F: mov     esi, [eax+0Ch]
0x52F662: xor     ecx, ecx
0x52F664: test    esi, esi
0x52F666: jbe     short loc_52F67D
0x52F668: mov     edx, [eax+4]
0x52F66B: mov     edx, [edx+ecx*4]
0x52F66E: test    edx, edx
0x52F670: jz      short loc_52F676
0x52F672: mov     [edx+20h], cx
0x52F676: add     ecx, 1
0x52F679: cmp     ecx, esi
0x52F67B: jb      short loc_52F668
0x52F67D: pop     esi
0x52F67E: retn    4
