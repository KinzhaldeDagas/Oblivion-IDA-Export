0x46E9F0: push    esi
0x46E9F1: xor     esi, esi
0x46E9F3: test    [esp+4+arg_0], 8
0x46E9F8: push    edi
0x46E9F9: mov     edi, ecx
0x46E9FB: jz      loc_46EAB0
0x46EA01: mov     ecx, ds:0B33B00h
0x46EA07: call    sub_45A170
0x46EA0C: test    al, al
0x46EA0E: jz      short loc_46EA15
0x46EA10: mov     esi, 6
0x46EA15: lea     eax, [edi+4]
0x46EA18: add     esi, 2
0x46EA1B: xor     ecx, ecx
0x46EA1D: test    eax, eax
0x46EA1F: jz      short loc_46EA30
0x46EA21: cmp     dword ptr [eax], 0
0x46EA24: jz      short loc_46EA29
0x46EA26: add     ecx, 1
0x46EA29: mov     eax, [eax+4]
0x46EA2C: test    eax, eax
0x46EA2E: jnz     short loc_46EA21
0x46EA30: cmp     byte ptr ds:0B05BACh, 0
0x46EA37: lea     edi, [esi+ecx*8]
0x46EA3A: jz      short loc_46EA85
0x46EA3C: mov     eax, ds:0B33B00h
0x46EA41: mov     esi, [eax+84h]
0x46EA47: test    esi, esi
0x46EA49: jz      short loc_46EA8D
0x46EA4B: mov     ecx, [esi]
0x46EA4D: push    ecx; a1
0x46EA4E: call    TESForm_LookupByFormID
0x46EA53: mov     edx, [esi+5]
0x46EA56: add     esp, 4
0x46EA59: push    offset a__TesSharedT_3; "..\\TES Shared\\TESReactionForm.cpp"
0x46EA5E: push    4E9h
0x46EA63: push    edx
0x46EA64: mov     edx, [eax]
0x46EA66: mov     ecx, eax
0x46EA68: mov     eax, [edx+0D4h]
0x46EA6E: call    eax
0x46EA70: mov     ecx, [esi]
0x46EA72: push    eax
0x46EA73: movzx   edx, di
0x46EA76: push    ecx
0x46EA77: push    edx; ArgList
0x46EA78: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x46EA7D: call    sub_40FEC0
0x46EA82: add     esp, 1Ch
0x46EA85: mov     ax, di
0x46EA88: pop     edi
0x46EA89: pop     esi
0x46EA8A: retn    4
0x46EA8D: push    offset a__TesSharedT_3; "..\\TES Shared\\TESReactionForm.cpp"
0x46EA92: movzx   eax, di
0x46EA95: push    4E9h
0x46EA9A: push    eax; ArgList
0x46EA9B: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x46EAA0: call    sub_40FEC0
0x46EAA5: add     esp, 10h
0x46EAA8: mov     ax, di
0x46EAAB: pop     edi
0x46EAAC: pop     esi
0x46EAAD: retn    4
0x46EAB0: pop     edi
0x46EAB1: mov     ax, si
0x46EAB4: pop     esi
0x46EAB5: retn    4
