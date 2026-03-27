0x8A0490: push    esi
0x8A0491: push    edi
0x8A0492: mov     edi, [esp+8+arg_0]
0x8A0496: push    edi
0x8A0497: mov     esi, ecx
0x8A0499: call    sub_89D820
0x8A049E: mov     eax, [esi]
0x8A04A0: mov     edx, [eax+74h]
0x8A04A3: lea     ecx, [esp+8+arg_0]
0x8A04A7: push    ecx
0x8A04A8: mov     ecx, esi
0x8A04AA: call    edx
0x8A04AC: test    eax, eax
0x8A04AE: jz      short loc_8A04CA
0x8A04B0: lea     ecx, [eax-4]
0x8A04B3: test    ecx, ecx
0x8A04B5: jz      short loc_8A04CA
0x8A04B7: mov     eax, [ecx]
0x8A04B9: mov     edx, [eax+14h]
0x8A04BC: push    edi
0x8A04BD: call    edx
0x8A04BF: mov     eax, [esi]
0x8A04C1: mov     edx, [eax+64h]
0x8A04C4: push    1
0x8A04C6: mov     ecx, esi
0x8A04C8: call    edx
0x8A04CA: pop     edi
0x8A04CB: pop     esi
0x8A04CC: retn    4
