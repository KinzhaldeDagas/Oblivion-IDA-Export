0x6ECEE0: push    esi
0x6ECEE1: push    edi
0x6ECEE2: mov     edi, [esp+8+a2]
0x6ECEE6: push    edi
0x6ECEE7: mov     esi, ecx
0x6ECEE9: call    sub_6CE2F0
0x6ECEEE: mov     ecx, [edi]
0x6ECEF0: lea     eax, [esp+8+a2]
0x6ECEF4: push    eax
0x6ECEF5: push    esi
0x6ECEF6: call    NiTMap_GetAt
0x6ECEFB: cmp     dword ptr [esi+30h], 0
0x6ECEFF: jz      short loc_6ECF2A
0x6ECF01: push    ebx
0x6ECF02: mov     ebx, [esp+0Ch+a2]
0x6ECF06: cmp     dword ptr [ebx+30h], 0
0x6ECF0A: jz      short loc_6ECF29
0x6ECF0C: mov     edx, [esi+44h]
0x6ECF0F: lea     ecx, [esp+0Ch+a2]
0x6ECF13: push    ecx
0x6ECF14: mov     ecx, [edi]
0x6ECF16: push    edx
0x6ECF17: call    NiTMap_GetAt
0x6ECF1C: mov     eax, [esp+0Ch+a2]
0x6ECF20: push    eax; a2
0x6ECF21: lea     ecx, [ebx+44h]; this
0x6ECF24: call    NiSmartPointer_Set??
0x6ECF29: pop     ebx
0x6ECF2A: pop     edi
0x6ECF2B: pop     esi
0x6ECF2C: retn    4
