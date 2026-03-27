0x628600: push    esi
0x628601: mov     esi, ecx
0x628603: mov     ecx, [esi+2Ch]
0x628606: test    ecx, ecx
0x628608: jz      short loc_62862E
0x62860A: mov     eax, [ecx]
0x62860C: mov     edx, [eax+174h]
0x628612: call    edx
0x628614: mov     ecx, [eax]
0x628616: mov     [esi+0D4h], ecx
0x62861C: mov     edx, [eax+4]
0x62861F: mov     [esi+0D8h], edx
0x628625: mov     eax, [eax+8]
0x628628: mov     [esi+0DCh], eax
0x62862E: pop     esi
0x62862F: retn
