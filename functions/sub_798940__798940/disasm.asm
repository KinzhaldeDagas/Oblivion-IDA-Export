0x798940: push    ebx
0x798941: push    esi
0x798942: mov     esi, ecx
0x798944: mov     eax, [esi+20h]
0x798947: push    eax
0x798948: call    FormHeapFree
0x79894D: mov     ecx, [esi+24h]
0x798950: push    ecx
0x798951: call    FormHeapFree
0x798956: mov     eax, [esi+2Ch]
0x798959: xor     ebx, ebx
0x79895B: add     esp, 8
0x79895E: cmp     eax, ebx
0x798960: jz      short loc_798981
0x798962: mov     edx, [eax-4]
0x798965: push    edi
0x798966: lea     edi, [eax-4]
0x798969: push    offset sub_7981E0; void (__thiscall *)(void *)
0x79896E: push    edx; int
0x79896F: push    44h ; 'D'; unsigned int
0x798971: push    eax; void *
0x798972: call    $LN21
0x798977: push    edi
0x798978: call    FormHeapFree
0x79897D: add     esp, 4
0x798980: pop     edi
0x798981: mov     eax, [esi+18h]
0x798984: push    eax
0x798985: call    FormHeapFree
0x79898A: add     esp, 4
0x79898D: mov     [esi+0Ch], ebx
0x798990: mov     [esi+14h], ebx
0x798993: mov     [esi+20h], ebx
0x798996: mov     [esi+24h], ebx
0x798999: mov     [esi+2Ch], ebx
0x79899C: mov     [esi+18h], ebx
0x79899F: pop     esi
0x7989A0: pop     ebx
0x7989A1: retn
