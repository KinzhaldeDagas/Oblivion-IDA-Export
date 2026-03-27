0x550850: mov     eax, [esp+arg_0]
0x550854: push    esi
0x550855: push    eax
0x550856: call    sub_550790
0x55085B: mov     esi, eax
0x55085D: add     esp, 4
0x550860: test    esi, esi
0x550862: jz      short loc_550885
0x550864: mov     edx, [esi]
0x550866: mov     eax, [edx+54h]
0x550869: mov     ecx, esi
0x55086B: call    eax
0x55086D: test    eax, eax
0x55086F: jz      short loc_550885
0x550871: mov     edx, [esi]
0x550873: mov     eax, [edx+54h]
0x550876: mov     ecx, esi
0x550878: call    eax
0x55087A: mov     ecx, eax
0x55087C: call    sub_550480
0x550881: test    eax, eax
0x550883: jnz     short loc_550889
0x550885: xor     eax, eax
0x550887: pop     esi
0x550888: retn
0x550889: push    eax
0x55088A: push    offset unk_B39DA8
0x55088F: call    NiRTTI_Cast
0x550894: add     esp, 8
0x550897: pop     esi
0x550898: retn
