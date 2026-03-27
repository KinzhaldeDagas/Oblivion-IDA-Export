0x51C650: push    esi
0x51C651: mov     esi, ecx
0x51C653: mov     eax, [esi]
0x51C655: mov     edx, [eax+28h]
0x51C658: push    edi
0x51C659: xor     edi, edi
0x51C65B: call    edx
0x51C65D: test    al, al
0x51C65F: jnz     short loc_51C684
0x51C661: mov     eax, [esi+0F8h]
0x51C667: mov     edx, [eax+14h]
0x51C66A: lea     ecx, [esi+0F8h]
0x51C670: call    edx
0x51C672: test    eax, eax
0x51C674: jz      short loc_51C67B
0x51C676: cmp     byte ptr [eax], 0
0x51C679: jnz     short loc_51C686
0x51C67B: pop     edi
0x51C67C: mov     ecx, esi
0x51C67E: pop     esi
0x51C67F: jmp     TESActorBaseData_GetBloodParticlePath
0x51C684: mov     eax, edi
0x51C686: pop     edi
0x51C687: pop     esi
0x51C688: retn
