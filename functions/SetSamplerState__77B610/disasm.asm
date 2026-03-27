0x77B610: push    edi
0x77B611: mov     edi, [esp+4+arg_4]
0x77B615: movzx   eax, word ptr ds:0B427B0h[edi*2]
0x77B61D: cmp     ax, 5
0x77B621: jnb     short loc_77B664
0x77B623: push    esi
0x77B624: mov     esi, [esp+8+arg_0]
0x77B628: movzx   eax, ax
0x77B62B: lea     edx, [esi+esi*4+1A4h]
0x77B632: add     edx, eax
0x77B634: lea     eax, [ecx+edx*8]
0x77B637: mov     edx, [esp+8+arg_8]
0x77B63B: cmp     [eax], edx
0x77B63D: jz      short loc_77B663
0x77B63F: cmp     [esp+8+arg_C], 0
0x77B644: jz      short loc_77B64D
0x77B646: push    ebx
0x77B647: mov     ebx, [eax]
0x77B649: mov     [eax+4], ebx
0x77B64C: pop     ebx
0x77B64D: push    edx
0x77B64E: mov     [eax], edx
0x77B650: mov     eax, [ecx+0FF8h]
0x77B656: mov     ecx, [eax]
0x77B658: mov     edx, [ecx+114h]
0x77B65E: push    edi
0x77B65F: push    esi
0x77B660: push    eax
0x77B661: call    edx
0x77B663: pop     esi
0x77B664: pop     edi
0x77B665: retn    10h
