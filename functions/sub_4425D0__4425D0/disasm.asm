0x4425D0: cmp     dword ptr ds:0B33A98h, 0
0x4425D7: push    esi
0x4425D8: mov     esi, ecx
0x4425DA: jz      short loc_44262E
0x4425DC: mov     ecx, [esi+8]
0x4425DF: mov     eax, [ecx]
0x4425E1: mov     edx, [eax+8]
0x4425E4: call    edx
0x4425E6: mov     ecx, [esi+4]
0x4425E9: mov     eax, [ecx]
0x4425EB: mov     edx, [eax+8]
0x4425EE: call    edx
0x4425F0: mov     eax, ds:0B4310Ch
0x4425F5: test    eax, eax
0x4425F7: jz      short loc_442621
0x4425F9: mov     esi, eax
0x4425FB: add     eax, 4
0x4425FE: push    eax; lpAddend
0x4425FF: call    dword ptr ds:0A2807Ch
0x442605: test    eax, eax
0x442607: jnz     short loc_442617
0x442609: test    esi, esi
0x44260B: jz      short loc_442617
0x44260D: mov     eax, [esi]
0x44260F: mov     edx, [eax]
0x442611: push    1
0x442613: mov     ecx, esi
0x442615: call    edx
0x442617: mov     dword ptr ds:0B4310Ch, 0
0x442621: mov     byte ptr ds:0B06A28h, 1
0x442628: pop     esi
0x442629: jmp     sub_7C4D90
0x44262E: pop     esi
0x44262F: retn
