0x772060: mov     eax, [esp+arg_0]
0x772064: test    eax, eax
0x772066: mov     ds:0B42754h, eax
0x77206B: jz      short loc_7720AA
0x77206D: push    esi
0x77206E: mov     esi, [eax+280h]
0x772074: mov     eax, ds:0B42750h
0x772079: test    eax, eax
0x77207B: jz      short loc_772085
0x77207D: mov     ecx, [eax]
0x77207F: mov     edx, [ecx+8]
0x772082: push    eax
0x772083: call    edx
0x772085: test    esi, esi
0x772087: mov     ds:0B42750h, esi
0x77208D: jz      short loc_772097
0x77208F: mov     eax, [esi]
0x772091: mov     ecx, [eax+4]
0x772094: push    esi
0x772095: call    ecx
0x772097: mov     edx, ds:0B42754h
0x77209D: mov     eax, [edx+8ACh]
0x7720A3: mov     ds:0B42758h, eax
0x7720A8: pop     esi
0x7720A9: retn
0x7720AA: mov     eax, ds:0B42750h
0x7720AF: test    eax, eax
0x7720B1: jz      short loc_7720BB
0x7720B3: mov     ecx, [eax]
0x7720B5: mov     edx, [ecx+8]
0x7720B8: push    eax
0x7720B9: call    edx
0x7720BB: mov     dword ptr ds:0B42750h, 0
0x7720C5: mov     dword ptr ds:0B42758h, 0
0x7720CF: retn
