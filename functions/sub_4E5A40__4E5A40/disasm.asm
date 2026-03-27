0x4E5A40: push    ebx
0x4E5A41: push    esi
0x4E5A42: mov     ebx, ecx
0x4E5A44: mov     ecx, ds:0B33B00h
0x4E5A4A: push    edi
0x4E5A4B: xor     edi, edi
0x4E5A4D: call    sub_45A170
0x4E5A52: test    al, al
0x4E5A54: jz      short loc_4E5A5B
0x4E5A56: mov     edi, 6
0x4E5A5B: mov     eax, [ebx+24h]
0x4E5A5E: add     edi, 2
0x4E5A61: test    eax, eax
0x4E5A63: jz      short loc_4E5A94
0x4E5A65: xor     esi, esi
0x4E5A67: cmp     [eax+0Ah], si
0x4E5A6B: jbe     short loc_4E5A94
0x4E5A6D: lea     ecx, [ecx+0]
0x4E5A70: mov     eax, [eax+4]
0x4E5A73: mov     ecx, [eax+esi*4]
0x4E5A76: test    ecx, ecx
0x4E5A78: jz      short loc_4E5A86
0x4E5A7A: call    sub_67ED70
0x4E5A7F: test    al, al
0x4E5A81: jz      short loc_4E5A86
0x4E5A83: add     edi, 2
0x4E5A86: mov     eax, [ebx+24h]
0x4E5A89: movzx   ecx, word ptr [eax+0Ah]
0x4E5A8D: add     esi, 1
0x4E5A90: cmp     esi, ecx
0x4E5A92: jb      short loc_4E5A70
0x4E5A94: cmp     byte ptr ds:0B05BACh, 0
0x4E5A9B: jz      short loc_4E5B09
0x4E5A9D: mov     edx, ds:0B33B00h
0x4E5AA3: mov     esi, [edx+84h]
0x4E5AA9: test    esi, esi
0x4E5AAB: jz      short loc_4E5AEE
0x4E5AAD: mov     eax, [esi]
0x4E5AAF: push    eax; a1
0x4E5AB0: call    TESForm_LookupByFormID
0x4E5AB5: mov     ecx, [esi+5]
0x4E5AB8: mov     edx, [eax]
0x4E5ABA: add     esp, 4
0x4E5ABD: push    offset a__TesSharedT_6; "..\\TES Shared\\TESPathGrid.cpp"
0x4E5AC2: push    0D3Eh
0x4E5AC7: push    ecx
0x4E5AC8: mov     ecx, eax
0x4E5ACA: mov     eax, [edx+0D4h]
0x4E5AD0: call    eax
0x4E5AD2: mov     ecx, [esi]
0x4E5AD4: push    eax
0x4E5AD5: movzx   edx, di
0x4E5AD8: push    ecx
0x4E5AD9: push    edx; ArgList
0x4E5ADA: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x4E5ADF: call    sub_40FEC0
0x4E5AE4: add     esp, 1Ch
0x4E5AE7: mov     ax, di
0x4E5AEA: pop     edi
0x4E5AEB: pop     esi
0x4E5AEC: pop     ebx
0x4E5AED: retn
0x4E5AEE: push    offset a__TesSharedT_6; "..\\TES Shared\\TESPathGrid.cpp"
0x4E5AF3: movzx   eax, di
0x4E5AF6: push    0D3Eh
0x4E5AFB: push    eax; ArgList
0x4E5AFC: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x4E5B01: call    sub_40FEC0
0x4E5B06: add     esp, 10h
0x4E5B09: mov     ax, di
0x4E5B0C: pop     edi
0x4E5B0D: pop     esi
0x4E5B0E: pop     ebx
0x4E5B0F: retn
