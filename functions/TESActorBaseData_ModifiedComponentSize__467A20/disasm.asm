0x467A20: push    esi
0x467A21: push    edi
0x467A22: mov     edi, ecx
0x467A24: mov     ecx, ds:0B33B00h
0x467A2A: xor     esi, esi
0x467A2C: call    sub_45A170
0x467A31: test    al, al
0x467A33: jz      short loc_467A3A
0x467A35: mov     esi, 6
0x467A3A: mov     al, [esp+8+arg_0]
0x467A3E: test    al, 10h
0x467A40: jz      short loc_467A45
0x467A42: add     esi, 10h
0x467A45: test    al, 40h
0x467A47: jz      short loc_467A6A
0x467A49: lea     eax, [edi+18h]
0x467A4C: add     esi, 2
0x467A4F: xor     ecx, ecx
0x467A51: test    eax, eax
0x467A53: jz      short loc_467A64
0x467A55: cmp     dword ptr [eax], 0
0x467A58: jz      short loc_467A5D
0x467A5A: add     ecx, 1
0x467A5D: mov     eax, [eax+4]
0x467A60: test    eax, eax
0x467A62: jnz     short loc_467A55
0x467A64: lea     eax, [ecx+esi]
0x467A67: lea     esi, [eax+ecx*4]
0x467A6A: cmp     byte ptr ds:0B05BACh, 0
0x467A71: jz      short loc_467AE0
0x467A73: mov     ecx, ds:0B33B00h
0x467A79: mov     edi, [ecx+84h]
0x467A7F: test    edi, edi
0x467A81: jz      short loc_467AC5
0x467A83: mov     edx, [edi]
0x467A85: push    edx; a1
0x467A86: call    TESForm_LookupByFormID
0x467A8B: mov     ecx, [edi+5]
0x467A8E: mov     edx, [eax]
0x467A90: add     esp, 4
0x467A93: push    offset a__TesSharedT_2; "..\\TES Shared\\TESActorBaseData.cpp"
0x467A98: push    646h
0x467A9D: push    ecx
0x467A9E: mov     ecx, eax
0x467AA0: mov     eax, [edx+0D4h]
0x467AA6: call    eax
0x467AA8: mov     ecx, [edi]
0x467AAA: push    eax
0x467AAB: movzx   edx, si
0x467AAE: push    ecx
0x467AAF: push    edx; ArgList
0x467AB0: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x467AB5: call    sub_40FEC0
0x467ABA: add     esp, 1Ch
0x467ABD: pop     edi
0x467ABE: mov     ax, si
0x467AC1: pop     esi
0x467AC2: retn    4
0x467AC5: push    offset a__TesSharedT_2; "..\\TES Shared\\TESActorBaseData.cpp"
0x467ACA: movzx   eax, si
0x467ACD: push    646h
0x467AD2: push    eax; ArgList
0x467AD3: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x467AD8: call    sub_40FEC0
0x467ADD: add     esp, 10h
0x467AE0: pop     edi
0x467AE1: mov     ax, si
0x467AE4: pop     esi
0x467AE5: retn    4
