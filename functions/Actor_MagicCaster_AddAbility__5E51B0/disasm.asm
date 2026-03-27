0x5E51B0: mov     edx, [ecx-4]
0x5E51B3: test    edx, edx
0x5E51B5: jz      short locret_5E51D9
0x5E51B7: lea     eax, [ecx-5Ch]
0x5E51BA: neg     eax
0x5E51BC: push    esi
0x5E51BD: mov     esi, [edx]
0x5E51BF: sbb     eax, eax
0x5E51C1: and     eax, ecx
0x5E51C3: mov     ecx, [esp+4+arg_4]
0x5E51C7: push    ecx
0x5E51C8: mov     ecx, [esp+8+arg_0]
0x5E51CC: push    ecx
0x5E51CD: mov     ecx, edx
0x5E51CF: mov     edx, [esi+2A0h]
0x5E51D5: push    eax
0x5E51D6: call    edx
0x5E51D8: pop     esi
0x5E51D9: retn    8
