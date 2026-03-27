0x8A03A0: push    esi
0x8A03A1: mov     esi, ecx
0x8A03A3: mov     eax, [esi]
0x8A03A5: mov     edx, [eax+8Ch]
0x8A03AB: push    edi
0x8A03AC: call    edx
0x8A03AE: test    eax, eax
0x8A03B0: jz      short loc_8A03B7
0x8A03B2: mov     ecx, [eax+0Ch]
0x8A03B5: jmp     short loc_8A03B9
0x8A03B7: xor     ecx, ecx
0x8A03B9: test    ecx, ecx
0x8A03BB: mov     edi, [esp+8+arg_0]
0x8A03BF: jz      short loc_8A03C9
0x8A03C1: mov     eax, [ecx]
0x8A03C3: mov     edx, [eax+24h]
0x8A03C6: push    edi
0x8A03C7: call    edx
0x8A03C9: push    edi
0x8A03CA: mov     ecx, esi
0x8A03CC: call    sub_6E7270
0x8A03D1: pop     edi
0x8A03D2: pop     esi
0x8A03D3: retn    4
