0x5E1FD0: push    ebx
0x5E1FD1: push    esi
0x5E1FD2: mov     esi, ecx
0x5E1FD4: mov     eax, [esi]
0x5E1FD6: mov     edx, [eax+170h]
0x5E1FDC: push    edi
0x5E1FDD: xor     ebx, ebx
0x5E1FDF: call    edx
0x5E1FE1: mov     edi, eax
0x5E1FE3: test    edi, edi
0x5E1FE5: jz      short loc_5E1FF9
0x5E1FE7: mov     eax, [esi]
0x5E1FE9: mov     edx, [eax+190h]
0x5E1FEF: mov     ecx, esi
0x5E1FF1: call    edx
0x5E1FF3: test    al, al
0x5E1FF5: jz      short loc_5E1FF9
0x5E1FF7: mov     ebx, edi
0x5E1FF9: pop     edi
0x5E1FFA: pop     esi
0x5E1FFB: lea     ecx, [ebx+24h]
0x5E1FFE: pop     ebx
0x5E1FFF: jmp     TESActorBaseData_GetLevel
