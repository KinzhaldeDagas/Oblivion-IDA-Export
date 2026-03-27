0x5E0CE0: mov     edx, [ecx+58h]
0x5E0CE3: push    esi
0x5E0CE4: mov     esi, [edx]
0x5E0CE6: push    edi
0x5E0CE7: mov     edi, ds:0B3F9A8h
0x5E0CED: sub     esp, 0Ch
0x5E0CF0: mov     eax, esp
0x5E0CF2: mov     [eax], edi
0x5E0CF4: mov     edi, ds:0B3F9ACh
0x5E0CFA: mov     [eax+4], edi
0x5E0CFD: mov     edi, ds:0B3F9B0h
0x5E0D03: mov     [eax+8], edi
0x5E0D06: mov     eax, [esi+2CCh]
0x5E0D0C: push    ecx
0x5E0D0D: mov     ecx, edx
0x5E0D0F: call    eax
0x5E0D11: pop     edi
0x5E0D12: pop     esi
0x5E0D13: retn    4
