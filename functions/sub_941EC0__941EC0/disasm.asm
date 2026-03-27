0x941EC0: push    esi
0x941EC1: push    edi
0x941EC2: mov     edi, ecx
0x941EC4: lea     esi, [edi+8]
0x941EC7: mov     word ptr [edi+6], 1
0x941ECD: mov     dword ptr [edi], offset off_AA22B8
0x941ED3: lea     eax, [esi+0Ch]
0x941ED6: lea     ecx, [edi+24h]
0x941ED9: mov     [esi], eax
0x941EDB: mov     dword ptr [esi+4], 0
0x941EE2: mov     dword ptr [esi+8], 80000010h
0x941EE9: call    sub_8B0E10
0x941EEE: mov     ecx, [esi+8]
0x941EF1: mov     eax, [esi+4]
0x941EF4: and     ecx, 3FFFFFFFh
0x941EFA: cmp     eax, ecx
0x941EFC: jnz     short loc_941F09
0x941EFE: push    1
0x941F00: push    esi
0x941F01: call    sub_8A6EE0
0x941F06: add     esp, 8
0x941F09: mov     edx, [esi+4]
0x941F0C: mov     eax, [esi]
0x941F0E: mov     byte ptr [edx+eax], 0
0x941F12: mov     ecx, [esi+4]
0x941F15: inc     ecx
0x941F16: mov     eax, ecx
0x941F18: dec     eax
0x941F19: mov     [esi+4], ecx
0x941F1C: mov     [esi+4], eax
0x941F1F: mov     eax, edi
0x941F21: pop     edi
0x941F22: pop     esi
0x941F23: retn
