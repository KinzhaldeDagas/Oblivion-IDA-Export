0x715E40: push    esi
0x715E41: push    edi
0x715E42: mov     edi, [esp+8+arg0]
0x715E46: push    edi; arg0
0x715E47: mov     esi, ecx
0x715E49: call    sub_700750
0x715E4E: mov     ecx, [esi+34h]
0x715E51: test    ecx, ecx
0x715E53: jz      short loc_715E5D
0x715E55: mov     eax, [ecx]
0x715E57: mov     edx, [eax+38h]
0x715E5A: push    edi
0x715E5B: call    edx
0x715E5D: pop     edi
0x715E5E: pop     esi
0x715E5F: retn    4
