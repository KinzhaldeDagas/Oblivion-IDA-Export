0x8CBE90: mov     eax, [esp+arg_4]
0x8CBE94: push    esi
0x8CBE95: mov     esi, [eax+54h]
0x8CBE98: push    eax
0x8CBE99: mov     ecx, esi
0x8CBE9B: mov     dword ptr [eax+8], 0
0x8CBEA2: call    sub_8DDC20
0x8CBEA7: cmp     word ptr [esi+20h], 0FFFFh
0x8CBEAD: jz      short loc_8CBED6
0x8CBEAF: mov     eax, [esi+38h]
0x8CBEB2: test    eax, eax
0x8CBEB4: jnz     short loc_8CBED6
0x8CBEB6: mov     eax, [esp+4+arg_0]
0x8CBEBA: mov     cl, [eax+0A4h]
0x8CBEC0: test    cl, cl
0x8CBEC2: jz      short loc_8CBED6
0x8CBEC4: push    esi
0x8CBEC5: push    eax
0x8CBEC6: call    sub_8CB820
0x8CBECB: mov     eax, [esi]
0x8CBECD: add     esp, 8
0x8CBED0: push    1
0x8CBED2: mov     ecx, esi
0x8CBED4: call    dword ptr [eax]
0x8CBED6: pop     esi
0x8CBED7: retn
