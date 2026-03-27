0x754AC0: push    ebx
0x754AC1: push    esi
0x754AC2: push    edi
0x754AC3: mov     edi, [esp+0Ch+arg_0]
0x754AC7: push    edi
0x754AC8: mov     esi, ecx
0x754ACA: call    sub_75EDA0
0x754ACF: mov     ecx, [edi]
0x754AD1: lea     eax, [esp+0Ch+arg_0]
0x754AD5: push    eax
0x754AD6: push    esi
0x754AD7: call    NiTMap_GetAt
0x754ADC: mov     eax, [esi+2Ch]
0x754ADF: test    eax, eax
0x754AE1: mov     ebx, [esp+0Ch+arg_0]
0x754AE5: jz      short loc_754B0B
0x754AE7: lea     ecx, [esp+0Ch+arg_0]
0x754AEB: push    ecx
0x754AEC: mov     ecx, [edi]
0x754AEE: push    eax
0x754AEF: call    NiTMap_GetAt
0x754AF4: test    al, al
0x754AF6: jz      short loc_754B05
0x754AF8: mov     edx, [esp+0Ch+arg_0]
0x754AFC: pop     edi
0x754AFD: pop     esi
0x754AFE: mov     [ebx+2Ch], edx
0x754B01: pop     ebx
0x754B02: retn    4
0x754B05: mov     eax, [esi+2Ch]
0x754B08: mov     [ebx+2Ch], eax
0x754B0B: pop     edi
0x754B0C: pop     esi
0x754B0D: pop     ebx
0x754B0E: retn    4
