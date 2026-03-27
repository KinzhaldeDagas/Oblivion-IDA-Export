0x570CA0: push    esi
0x570CA1: mov     esi, ecx
0x570CA3: mov     ecx, ds:0B33B00h
0x570CA9: push    edi
0x570CAA: xor     edi, edi
0x570CAC: call    sub_45A170
0x570CB1: test    al, al
0x570CB3: jz      short loc_570CBA
0x570CB5: mov     edi, 6
0x570CBA: mov     ecx, esi
0x570CBC: call    sub_73D5D0
0x570CC1: lea     edx, [edi+eax+1]
0x570CC5: mov     eax, [esi+1Ch]
0x570CC8: lea     edi, [eax+1]
0x570CCB: jmp     short loc_570CD0
0x570CCD: align 10h
0x570CD0: mov     cl, [eax]
0x570CD2: add     eax, 1
0x570CD5: test    cl, cl
0x570CD7: jnz     short loc_570CD0
0x570CD9: sub     eax, edi
0x570CDB: lea     edi, [edx+eax+22h]
0x570CDF: mov     eax, [esi+18h]
0x570CE2: mov     esi, [eax+0Ch]
0x570CE5: test    esi, esi
0x570CE7: jz      short loc_570D1C
0x570CE9: mov     edx, [esi]
0x570CEB: mov     eax, [edx+4]
0x570CEE: mov     ecx, esi
0x570CF0: call    eax
0x570CF2: test    eax, eax
0x570CF4: jz      short loc_570D04
0x570CF6: cmp     eax, offset stru_B3CAC0
0x570CFB: jz      short loc_570D71
0x570CFD: mov     eax, [eax+4]
0x570D00: test    eax, eax
0x570D02: jnz     short loc_570CF6
0x570D04: xor     al, al
0x570D06: neg     al
0x570D08: sbb     eax, eax
0x570D0A: and     eax, esi
0x570D0C: jz      short loc_570D1C
0x570D0E: push    eax
0x570D0F: call    sub_4DA760
0x570D14: movzx   ecx, ax
0x570D17: add     esp, 4
0x570D1A: add     edi, ecx
0x570D1C: cmp     byte ptr ds:0B05BACh, 0
0x570D23: jz      short loc_570D8D
0x570D25: mov     edx, ds:0B33B00h
0x570D2B: mov     esi, [edx+84h]
0x570D31: test    esi, esi
0x570D33: jz      short loc_570D75
0x570D35: mov     eax, [esi]
0x570D37: push    eax; a1
0x570D38: call    TESForm_LookupByFormID
0x570D3D: mov     ecx, [esi+5]
0x570D40: mov     edx, [eax]
0x570D42: add     esp, 4
0x570D45: push    offset a__TesShared_11; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x570D4A: push    104h
0x570D4F: push    ecx
0x570D50: mov     ecx, eax
0x570D52: mov     eax, [edx+0D4h]
0x570D58: call    eax
0x570D5A: mov     ecx, [esi]
0x570D5C: push    eax
0x570D5D: push    ecx
0x570D5E: push    edi; ArgList
0x570D5F: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x570D64: call    sub_40FEC0
0x570D69: add     esp, 1Ch
0x570D6C: mov     eax, edi
0x570D6E: pop     edi
0x570D6F: pop     esi
0x570D70: retn
0x570D71: mov     al, 1
0x570D73: jmp     short loc_570D06
0x570D75: push    offset a__TesShared_11; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x570D7A: push    104h
0x570D7F: push    edi; ArgList
0x570D80: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x570D85: call    sub_40FEC0
0x570D8A: add     esp, 10h
0x570D8D: mov     eax, edi
0x570D8F: pop     edi
0x570D90: pop     esi
0x570D91: retn
