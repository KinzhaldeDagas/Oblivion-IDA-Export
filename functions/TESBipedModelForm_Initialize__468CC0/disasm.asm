0x468CC0: push    esi
0x468CC1: mov     esi, ecx
0x468CC3: xor     eax, eax
0x468CC5: lea     ecx, [esi+8]
0x468CC8: mov     [esi+4], ax
0x468CCC: mov     [esi+6], al
0x468CCF: mov     eax, [ecx]
0x468CD1: mov     edx, [eax]
0x468CD3: call    edx
0x468CD5: mov     eax, [esi+38h]
0x468CD8: mov     edx, [eax]
0x468CDA: lea     ecx, [esi+38h]
0x468CDD: call    edx
0x468CDF: mov     eax, [esi+68h]
0x468CE2: mov     edx, [eax]
0x468CE4: lea     ecx, [esi+68h]
0x468CE7: call    edx
0x468CE9: mov     eax, [esi+20h]
0x468CEC: mov     edx, [eax]
0x468CEE: lea     ecx, [esi+20h]
0x468CF1: call    edx
0x468CF3: mov     eax, [esi+50h]
0x468CF6: mov     edx, [eax]
0x468CF8: lea     ecx, [esi+50h]
0x468CFB: call    edx
0x468CFD: mov     eax, [esi+74h]
0x468D00: mov     edx, [eax]
0x468D02: lea     ecx, [esi+74h]
0x468D05: pop     esi
0x468D06: jmp     edx
