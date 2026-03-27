0x52B610: push    edi
0x52B611: mov     edi, [esp+4+arg_0]
0x52B615: test    edi, edi
0x52B617: jz      short loc_52B64F
0x52B619: add     ecx, 0A8h ; '¨'
0x52B61F: push    esi
0x52B620: mov     esi, [edi+0Ch]
0x52B623: mov     eax, ecx
0x52B625: jz      short loc_52B648
0x52B627: mov     edx, [eax]
0x52B629: test    edx, edx
0x52B62B: jz      short loc_52B648
0x52B62D: cmp     [edx+0Ch], esi
0x52B630: jz      short loc_52B644
0x52B632: mov     eax, [eax+4]
0x52B635: test    eax, eax
0x52B637: jnz     short loc_52B627
0x52B639: push    edi
0x52B63A: call    BSSimpleList_PushBack
0x52B63F: pop     esi
0x52B640: pop     edi
0x52B641: retn    4
0x52B644: test    edx, edx
0x52B646: jnz     short loc_52B64E
0x52B648: push    edi
0x52B649: call    BSSimpleList_PushBack
0x52B64E: pop     esi
0x52B64F: pop     edi
0x52B650: retn    4
