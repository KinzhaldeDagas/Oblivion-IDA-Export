0x5E0860: push    esi
0x5E0861: mov     esi, ecx
0x5E0863: mov     eax, [esi]
0x5E0865: mov     edx, [eax+170h]
0x5E086B: push    edi
0x5E086C: call    edx
0x5E086E: mov     edi, eax
0x5E0870: test    edi, edi
0x5E0872: jz      short loc_5E0889
0x5E0874: mov     eax, [esi]
0x5E0876: mov     edx, [eax+190h]
0x5E087C: mov     ecx, esi
0x5E087E: call    edx
0x5E0880: test    al, al
0x5E0882: jz      short loc_5E0889
0x5E0884: lea     eax, [edi+44h]
0x5E0887: jmp     short loc_5E088B
0x5E0889: xor     eax, eax
0x5E088B: push    eax
0x5E088C: push    esi; a1
0x5E088D: call    ContainerExtraData_GetContainerExtraDataForRef
0x5E0892: mov     edi, eax
0x5E0894: add     esp, 8
0x5E0897: test    edi, edi
0x5E0899: jz      short loc_5E08B3
0x5E089B: mov     ecx, ds:0B333C4h
0x5E08A1: cmp     esi, ecx
0x5E08A3: jnz     short loc_5E08AA
0x5E08A5: call    sub_65DD20
0x5E08AA: mov     ecx, edi
0x5E08AC: pop     edi
0x5E08AD: pop     esi
0x5E08AE: jmp     sub_48D910
0x5E08B3: pop     edi
0x5E08B4: xor     al, al
0x5E08B6: pop     esi
0x5E08B7: retn
