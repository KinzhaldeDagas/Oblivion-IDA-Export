0x7F4D60: push    esi
0x7F4D61: push    edi
0x7F4D62: mov     edi, [esp+8+arg_0]
0x7F4D66: test    edi, edi
0x7F4D68: jz      short loc_7F4DD3
0x7F4D6A: call    sub_7F4970
0x7F4D6F: mov     ecx, eax
0x7F4D71: call    sub_700900
0x7F4D76: mov     esi, eax
0x7F4D78: mov     eax, [edi]
0x7F4D7A: mov     edx, [eax+84h]
0x7F4D80: push    0
0x7F4D82: push    esi
0x7F4D83: mov     ecx, edi
0x7F4D85: call    edx
0x7F4D87: push    1
0x7F4D89: push    0
0x7F4D8B: push    17h
0x7F4D8D: push    esi
0x7F4D8E: call    sub_7B8940
0x7F4D93: add     esp, 10h
0x7F4D96: push    4
0x7F4D98: mov     ecx, esi
0x7F4D9A: call    NiNode_GetNiPropertyByID
0x7F4D9F: mov     esi, eax
0x7F4DA1: test    esi, esi
0x7F4DA3: jz      short loc_7F4DB8
0x7F4DA5: mov     eax, [esi]
0x7F4DA7: mov     edx, [eax+54h]
0x7F4DAA: mov     ecx, esi
0x7F4DAC: call    edx
0x7F4DAE: xor     ecx, ecx
0x7F4DB0: cmp     eax, 0Dh
0x7F4DB3: setz    cl
0x7F4DB6: mov     eax, ecx
0x7F4DB8: neg     eax
0x7F4DBA: sbb     eax, eax
0x7F4DBC: and     eax, esi
0x7F4DBE: mov     esi, eax
0x7F4DC0: jz      short loc_7F4DD3
0x7F4DC2: call    sub_7F4970
0x7F4DC7: add     dword ptr ds:0B46900h, 1
0x7F4DCE: pop     edi
0x7F4DCF: mov     eax, esi
0x7F4DD1: pop     esi
0x7F4DD2: retn
0x7F4DD3: pop     edi
0x7F4DD4: xor     eax, eax
0x7F4DD6: pop     esi
0x7F4DD7: retn
