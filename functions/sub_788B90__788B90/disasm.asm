0x788B90: push    ebx
0x788B91: push    esi
0x788B92: mov     esi, ecx
0x788B94: mov     eax, [esi+4]
0x788B97: push    eax
0x788B98: call    FormHeapFree
0x788B9D: mov     ecx, [esi+0Ch]
0x788BA0: xor     ebx, ebx
0x788BA2: push    ecx
0x788BA3: mov     [esi+4], ebx
0x788BA6: call    FormHeapFree
0x788BAB: mov     edx, [esi+14h]
0x788BAE: push    edx
0x788BAF: mov     [esi+0Ch], ebx
0x788BB2: call    FormHeapFree
0x788BB7: add     esp, 0Ch
0x788BBA: mov     [esi+14h], ebx
0x788BBD: cmp     dword ptr [esi+30h], 10h
0x788BC1: jb      short loc_788BCF
0x788BC3: mov     eax, [esi+1Ch]
0x788BC6: push    eax
0x788BC7: call    FormHeapFree
0x788BCC: add     esp, 4
0x788BCF: mov     [esi+2Ch], ebx
0x788BD2: mov     dword ptr [esi+30h], 0Fh
0x788BD9: mov     [esi+1Ch], bl
0x788BDC: pop     esi
0x788BDD: pop     ebx
0x788BDE: retn
