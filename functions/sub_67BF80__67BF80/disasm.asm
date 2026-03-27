0x67BF80: push    esi
0x67BF81: mov     esi, [ecx]
0x67BF83: push    edi
0x67BF84: mov     edi, [esp+8+arg_0]
0x67BF88: test    edi, edi
0x67BF8A: jz      short loc_67BFC7
0x67BF8C: cmp     dword ptr [esi], 0
0x67BF8F: jz      short loc_67BFC5
0x67BF91: push    8; Size
0x67BF93: call    FormHeapAlloc
0x67BF98: add     esp, 4
0x67BF9B: test    eax, eax
0x67BF9D: jz      short loc_67BFBA
0x67BF9F: mov     ecx, [esi]
0x67BFA1: mov     [eax], ecx
0x67BFA3: mov     dword ptr [eax+4], 0
0x67BFAA: mov     edx, [esi+4]
0x67BFAD: mov     [eax+4], edx
0x67BFB0: mov     [esi], edi
0x67BFB2: pop     edi
0x67BFB3: mov     [esi+4], eax
0x67BFB6: pop     esi
0x67BFB7: retn    4
0x67BFBA: mov     edx, [esi+4]
0x67BFBD: xor     eax, eax
0x67BFBF: mov     [eax+4], edx
0x67BFC2: mov     [esi+4], eax
0x67BFC5: mov     [esi], edi
0x67BFC7: pop     edi
0x67BFC8: pop     esi
0x67BFC9: retn    4
