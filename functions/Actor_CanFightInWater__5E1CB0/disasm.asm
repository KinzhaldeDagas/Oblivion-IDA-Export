0x5E1CB0: push    ebx
0x5E1CB1: push    esi
0x5E1CB2: mov     esi, ecx
0x5E1CB4: mov     eax, [esi]
0x5E1CB6: mov     edx, [eax+170h]
0x5E1CBC: push    edi
0x5E1CBD: xor     ebx, ebx
0x5E1CBF: call    edx
0x5E1CC1: mov     edi, eax
0x5E1CC3: test    edi, edi
0x5E1CC5: jz      short loc_5E1CD9
0x5E1CC7: mov     eax, [esi]
0x5E1CC9: mov     edx, [eax+190h]
0x5E1CCF: mov     ecx, esi
0x5E1CD1: call    edx
0x5E1CD3: test    al, al
0x5E1CD5: jz      short loc_5E1CD9
0x5E1CD7: mov     ebx, edi
0x5E1CD9: pop     edi
0x5E1CDA: pop     esi
0x5E1CDB: mov     ecx, ebx
0x5E1CDD: pop     ebx
0x5E1CDE: jmp     TESActorBase_CanFightInWater
