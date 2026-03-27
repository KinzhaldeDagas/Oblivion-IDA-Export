0x8DE790: push    esi
0x8DE791: push    edi
0x8DE792: mov     edi, [esp+8+arg_0]
0x8DE796: push    edi
0x8DE797: mov     esi, ecx
0x8DE799: call    sub_8BC870
0x8DE79E: mov     eax, [esi+58h]
0x8DE7A1: test    eax, eax
0x8DE7A3: js      short loc_8DE7C7
0x8DE7A5: mov     ecx, [esi+50h]
0x8DE7A8: mov     edx, [edi]
0x8DE7AA: and     eax, 3FFFFFFFh
0x8DE7AF: shl     eax, 2
0x8DE7B2: push    eax
0x8DE7B3: mov     eax, [esi+54h]
0x8DE7B6: shl     eax, 2
0x8DE7B9: push    eax
0x8DE7BA: push    ecx
0x8DE7BB: push    4
0x8DE7BD: push    offset aOvrlaplisptr; "OvrlapLisPtr"
0x8DE7C2: mov     ecx, edi
0x8DE7C4: call    dword ptr [edx+4]
0x8DE7C7: mov     eax, [esi+64h]
0x8DE7CA: test    eax, eax
0x8DE7CC: js      short loc_8DE7F0
0x8DE7CE: mov     ecx, [esi+5Ch]
0x8DE7D1: mov     edx, [edi]
0x8DE7D3: and     eax, 3FFFFFFFh
0x8DE7D8: shl     eax, 2
0x8DE7DB: push    eax
0x8DE7DC: mov     eax, [esi+60h]
0x8DE7DF: shl     eax, 2
0x8DE7E2: push    eax
0x8DE7E3: push    ecx
0x8DE7E4: push    4
0x8DE7E6: push    offset aPhantmlisptr; "PhantmLisPtr"
0x8DE7EB: mov     ecx, edi
0x8DE7ED: call    dword ptr [edx+4]
0x8DE7F0: pop     edi
0x8DE7F1: pop     esi
0x8DE7F2: retn    4
