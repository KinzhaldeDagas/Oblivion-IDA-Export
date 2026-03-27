0x753800: push    ebx
0x753801: push    esi
0x753802: push    edi
0x753803: mov     edi, [esp+0Ch+arg_0]
0x753807: push    edi
0x753808: mov     esi, ecx
0x75380A: call    sub_752D80
0x75380F: mov     ecx, [edi]
0x753811: lea     eax, [esp+0Ch+arg_0]
0x753815: push    eax
0x753816: push    esi
0x753817: call    NiTMap_GetAt
0x75381C: mov     eax, [esi+18h]
0x75381F: test    eax, eax
0x753821: mov     ebx, [esp+0Ch+arg_0]
0x753825: jz      short loc_75384B
0x753827: lea     ecx, [esp+0Ch+arg_0]
0x75382B: push    ecx
0x75382C: mov     ecx, [edi]
0x75382E: push    eax
0x75382F: call    NiTMap_GetAt
0x753834: test    al, al
0x753836: jz      short loc_753845
0x753838: mov     edx, [esp+0Ch+arg_0]
0x75383C: pop     edi
0x75383D: pop     esi
0x75383E: mov     [ebx+18h], edx
0x753841: pop     ebx
0x753842: retn    4
0x753845: mov     eax, [esi+18h]
0x753848: mov     [ebx+18h], eax
0x75384B: pop     edi
0x75384C: pop     esi
0x75384D: pop     ebx
0x75384E: retn    4
