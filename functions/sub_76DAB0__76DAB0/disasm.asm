0x76DAB0: push    esi
0x76DAB1: mov     esi, ecx
0x76DAB3: mov     eax, [esi+0Ch]
0x76DAB6: test    eax, eax
0x76DAB8: jz      short loc_76DAC9
0x76DABA: mov     ecx, [eax]
0x76DABC: mov     edx, [ecx+8]
0x76DABF: push    eax
0x76DAC0: call    edx
0x76DAC2: mov     dword ptr [esi+0Ch], 0
0x76DAC9: mov     eax, [esi+10h]
0x76DACC: push    eax
0x76DACD: call    FormHeapFree
0x76DAD2: mov     eax, [esi+14h]
0x76DAD5: add     esp, 4
0x76DAD8: test    eax, eax
0x76DADA: mov     dword ptr [esi+10h], 0
0x76DAE1: jz      short loc_76DAF2
0x76DAE3: mov     ecx, [eax]
0x76DAE5: mov     edx, [ecx+8]
0x76DAE8: push    eax
0x76DAE9: call    edx
0x76DAEB: mov     dword ptr [esi+14h], 0
0x76DAF2: pop     esi
0x76DAF3: retn
