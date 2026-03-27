0x77B750: push    esi
0x77B751: mov     esi, ecx
0x77B753: mov     cl, [esp+4+arg_0]
0x77B757: cmp     cl, [esi+1014h]
0x77B75D: jz      short loc_77B79C
0x77B75F: mov     eax, [esi+0FFCh]
0x77B765: cmp     byte ptr [eax+5C9h], 0
0x77B76C: jz      short loc_77B79C
0x77B76E: mov     eax, [esi+0FF8h]
0x77B774: mov     [esi+1014h], cl
0x77B77A: mov     edx, [eax]
0x77B77C: mov     edx, [edx+134h]
0x77B782: movzx   ecx, cl
0x77B785: push    ecx
0x77B786: push    eax
0x77B787: call    edx
0x77B789: mov     ecx, [esi+0FE0h]
0x77B78F: mov     eax, [esi]
0x77B791: mov     edx, [eax+94h]
0x77B797: push    ecx
0x77B798: mov     ecx, esi
0x77B79A: call    edx
0x77B79C: pop     esi
0x77B79D: retn    4
