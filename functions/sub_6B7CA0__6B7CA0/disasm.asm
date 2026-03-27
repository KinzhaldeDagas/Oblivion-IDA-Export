0x6B7CA0: mov     eax, ecx
0x6B7CA2: xor     edx, edx
0x6B7CA4: test    eax, eax
0x6B7CA6: push    esi; ArgList
0x6B7CA7: jz      short loc_6B7CC9
0x6B7CA9: mov     si, [esp+4+arg_0]
0x6B7CAE: mov     edi, edi
0x6B7CB0: mov     ecx, [eax+4]
0x6B7CB3: test    ecx, ecx
0x6B7CB5: jnz     short loc_6B7CBB
0x6B7CB7: cmp     [eax], ecx
0x6B7CB9: jz      short loc_6B7CC9
0x6B7CBB: cmp     dx, si
0x6B7CBE: jz      short loc_6B7CDC
0x6B7CC0: mov     eax, ecx
0x6B7CC2: add     edx, 1
0x6B7CC5: test    eax, eax
0x6B7CC7: jnz     short loc_6B7CB0
0x6B7CC9: push    offset aWhenTryingTo_0; "When trying to get a dialogue response "...
0x6B7CCE: call    PrintError
0x6B7CD3: add     esp, 4
0x6B7CD6: xor     eax, eax
0x6B7CD8: pop     esi
0x6B7CD9: retn    4
0x6B7CDC: mov     eax, [eax]
0x6B7CDE: pop     esi
0x6B7CDF: retn    4
