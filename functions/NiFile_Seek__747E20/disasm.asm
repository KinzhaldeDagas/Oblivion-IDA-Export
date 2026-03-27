0x747E20: push    esi
0x747E21: mov     esi, ecx
0x747E23: cmp     byte ptr [esi+24h], 0
0x747E27: jz      short NiFile_Seek___Done
0x747E29: push    ebx
0x747E2A: mov     ebx, [esp+8+Origin]
0x747E2E: cmp     ebx, 1
0x747E31: push    edi
0x747E32: mov     edi, [esp+0Ch+Offset]
0x747E36: jnz     short loc_747E55
0x747E38: mov     eax, [esi+14h]
0x747E3B: lea     ecx, [eax+edi]
0x747E3E: test    ecx, ecx
0x747E40: jl      short loc_747E50
0x747E42: cmp     ecx, [esi+10h]
0x747E45: jge     short loc_747E50
0x747E47: pop     edi
0x747E48: pop     ebx
0x747E49: mov     [esi+14h], ecx
0x747E4C: pop     esi
0x747E4D: retn    8
0x747E50: sub     eax, [esi+10h]
0x747E53: add     edi, eax
0x747E55: mov     ecx, esi
0x747E57: call    NiFile_Flush
0x747E5C: mov     eax, [esi+1Ch]
0x747E5F: push    ebx; Origin
0x747E60: push    edi; Offset
0x747E61: push    eax; File
0x747E62: call    _fseek
0x747E67: add     esp, 0Ch
0x747E6A: test    eax, eax
0x747E6C: setz    cl
0x747E6F: pop     edi
0x747E70: mov     [esi+24h], cl
0x747E73: pop     ebx
