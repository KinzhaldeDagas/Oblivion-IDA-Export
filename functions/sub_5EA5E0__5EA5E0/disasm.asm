0x5EA5E0: push    ebx
0x5EA5E1: push    esi
0x5EA5E2: mov     esi, ecx
0x5EA5E4: mov     eax, [esi]
0x5EA5E6: mov     edx, [eax+170h]
0x5EA5EC: push    edi
0x5EA5ED: xor     ebx, ebx
0x5EA5EF: call    edx
0x5EA5F1: mov     edi, eax
0x5EA5F3: test    edi, edi
0x5EA5F5: jz      short loc_5EA609
0x5EA5F7: mov     eax, [esi]
0x5EA5F9: mov     edx, [eax+190h]
0x5EA5FF: mov     ecx, esi
0x5EA601: call    edx
0x5EA603: test    al, al
0x5EA605: jz      short loc_5EA609
0x5EA607: mov     ebx, edi
0x5EA609: mov     eax, [ebx+24h]
0x5EA60C: mov     edx, [eax+24h]
0x5EA60F: lea     ecx, [ebx+24h]
0x5EA612: call    edx
0x5EA614: test    al, al
0x5EA616: jnz     short loc_5EA62D
0x5EA618: lea     ecx, [esi+44h]
0x5EA61B: call    BaseExtraList_HasGhost
0x5EA620: test    al, al
0x5EA622: jnz     short loc_5EA62D
0x5EA624: pop     edi
0x5EA625: pop     esi
0x5EA626: mov     eax, 1
0x5EA62B: pop     ebx
0x5EA62C: retn
0x5EA62D: pop     edi
0x5EA62E: pop     esi
0x5EA62F: xor     eax, eax
0x5EA631: pop     ebx
0x5EA632: retn
