0x778110: push    esi
0x778111: mov     esi, ecx
0x778113: cmp     dword ptr [esi+4], 0
0x778117: jz      short loc_778136
0x778119: push    edi
0x77811A: xor     edi, edi
0x77811C: cmp     [esi+1Ch], edi
0x77811F: jbe     short loc_778135
0x778121: mov     ecx, [esi+4]
0x778124: mov     eax, [ecx]
0x778126: mov     edx, [eax+1Ch]
0x778129: push    edi
0x77812A: push    esi
0x77812B: call    edx
0x77812D: add     edi, 1
0x778130: cmp     edi, [esi+1Ch]
0x778133: jb      short loc_778121
0x778135: pop     edi
0x778136: mov     eax, [esi+30h]
0x778139: test    eax, eax
0x77813B: mov     dword ptr [esi+2Ch], 0
0x778142: jz      short loc_778153
0x778144: mov     ecx, [eax]
0x778146: mov     edx, [ecx+8]
0x778149: push    eax
0x77814A: call    edx
0x77814C: mov     dword ptr [esi+30h], 0
0x778153: mov     eax, [esi+24h]
0x778156: push    eax
0x778157: call    FormHeapFree
0x77815C: mov     ecx, [esi+20h]
0x77815F: push    ecx
0x778160: call    FormHeapFree
0x778165: mov     esi, [esi+0Ch]
0x778168: add     esp, 8
0x77816B: test    esi, esi
0x77816D: jz      short loc_778177
0x77816F: mov     edx, [esi]
0x778171: mov     eax, [edx+8]
0x778174: push    esi
0x778175: call    eax
0x778177: pop     esi
0x778178: retn
