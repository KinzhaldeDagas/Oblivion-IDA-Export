0x753790: push    esi
0x753791: push    edi
0x753792: push    3Ch ; '<'; Size
0x753794: mov     edi, ecx
0x753796: call    FormHeapAlloc
0x75379B: mov     esi, eax
0x75379D: add     esp, 4
0x7537A0: test    esi, esi
0x7537A2: jz      short loc_7537CD
0x7537A4: mov     ecx, esi
0x7537A6: call    sub_75E800
0x7537AB: mov     dword ptr [esi], offset ??_7NiPSysVortexFieldModifier@@6B@; const NiPSysVortexFieldModifier::`vftable'
0x7537B1: mov     eax, ds:0B3F9A8h
0x7537B6: mov     [esi+30h], eax
0x7537B9: mov     ecx, ds:0B3F9ACh
0x7537BF: mov     [esi+34h], ecx
0x7537C2: mov     edx, ds:0B3F9B0h
0x7537C8: mov     [esi+38h], edx
0x7537CB: jmp     short loc_7537CF
0x7537CD: xor     esi, esi
0x7537CF: mov     eax, [esp+8+arg_0]
0x7537D3: push    eax
0x7537D4: push    esi
0x7537D5: mov     ecx, edi
0x7537D7: call    sub_75E830
0x7537DC: mov     ecx, [edi+30h]
0x7537DF: lea     eax, [edi+30h]
0x7537E2: mov     [esi+30h], ecx
0x7537E5: mov     edx, [eax+4]
0x7537E8: mov     [esi+34h], edx
0x7537EB: mov     eax, [eax+8]
0x7537EE: mov     [esi+38h], eax
0x7537F1: pop     edi
0x7537F2: mov     eax, esi
0x7537F4: pop     esi
0x7537F5: retn    4
