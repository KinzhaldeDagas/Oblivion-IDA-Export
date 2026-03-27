0x52B550: push    edi
0x52B551: mov     edi, [esp+4+arg_0]
0x52B555: test    edi, edi
0x52B557: jz      short loc_52B58F
0x52B559: add     ecx, 8Ch ; 'Œ'
0x52B55F: push    esi
0x52B560: mov     esi, [edi+0Ch]
0x52B563: mov     eax, ecx
0x52B565: jz      short loc_52B588
0x52B567: mov     edx, [eax]
0x52B569: test    edx, edx
0x52B56B: jz      short loc_52B588
0x52B56D: cmp     [edx+0Ch], esi
0x52B570: jz      short loc_52B584
0x52B572: mov     eax, [eax+4]
0x52B575: test    eax, eax
0x52B577: jnz     short loc_52B567
0x52B579: push    edi
0x52B57A: call    BSSimpleList_PushBack
0x52B57F: pop     esi
0x52B580: pop     edi
0x52B581: retn    4
0x52B584: test    edx, edx
0x52B586: jnz     short loc_52B58E
0x52B588: push    edi
0x52B589: call    BSSimpleList_PushBack
0x52B58E: pop     esi
0x52B58F: pop     edi
0x52B590: retn    4
