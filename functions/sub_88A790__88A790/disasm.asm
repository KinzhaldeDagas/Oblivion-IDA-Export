0x88A790: push    edi
0x88A791: mov     edi, ecx
0x88A793: cmp     dword ptr [edi+14h], 0
0x88A797: jz      short loc_88A7C5
0x88A799: push    esi
0x88A79A: mov     esi, [edi+70h]
0x88A79D: test    esi, esi
0x88A79F: jz      short loc_88A7C4
0x88A7A1: mov     eax, [edi+6Ch]
0x88A7A4: sub     esi, 1
0x88A7A7: mov     ecx, [eax+esi*8]
0x88A7AA: mov     edx, [eax+esi*8+4]
0x88A7AE: lea     eax, [eax+esi*8]
0x88A7B1: push    0
0x88A7B3: push    ecx
0x88A7B4: mov     ecx, ds:0BA7DA0h
0x88A7BA: push    edx
0x88A7BB: call    sub_8A7830
0x88A7C0: test    esi, esi
0x88A7C2: jnz     short loc_88A7A1
0x88A7C4: pop     esi
0x88A7C5: mov     dword ptr [edi+70h], 0
0x88A7CC: pop     edi
0x88A7CD: retn
