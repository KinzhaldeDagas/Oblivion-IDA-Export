0x56C030: push    esi
0x56C031: mov     esi, ecx
0x56C033: mov     ecx, ds:0B33B00h
0x56C039: push    edi
0x56C03A: xor     edi, edi
0x56C03C: call    sub_45A170
0x56C041: test    al, al
0x56C043: jz      short loc_56C04A
0x56C045: mov     edi, 6
0x56C04A: mov     ecx, esi
0x56C04C: call    sub_73D5D0
0x56C051: add     edi, eax
0x56C053: mov     eax, [esi+18h]
0x56C056: mov     eax, [eax]
0x56C058: test    eax, eax
0x56C05A: jz      short loc_56C061
0x56C05C: mov     eax, [eax+34h]
0x56C05F: jmp     short loc_56C063
0x56C061: xor     eax, eax
0x56C063: mov     ecx, ds:0B33B00h
0x56C069: push    eax
0x56C06A: call    sub_452400
0x56C06F: cmp     byte ptr ds:0B05BACh, 0
0x56C076: movzx   ecx, ax
0x56C079: lea     edi, [edi+ecx+35h]
0x56C07D: jz      short loc_56C0E3
0x56C07F: mov     edx, ds:0B33B00h
0x56C085: mov     esi, [edx+84h]
0x56C08B: test    esi, esi
0x56C08D: jz      short loc_56C0CB
0x56C08F: mov     eax, [esi]
0x56C091: push    eax; a1
0x56C092: call    TESForm_LookupByFormID
0x56C097: mov     ecx, [esi+5]
0x56C09A: mov     edx, [eax]
0x56C09C: add     esp, 4
0x56C09F: push    offset a__TesSharedTem; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56C0A4: push    90h
0x56C0A9: push    ecx
0x56C0AA: mov     ecx, eax
0x56C0AC: mov     eax, [edx+0D4h]
0x56C0B2: call    eax
0x56C0B4: mov     ecx, [esi]
0x56C0B6: push    eax
0x56C0B7: push    ecx
0x56C0B8: push    edi; ArgList
0x56C0B9: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x56C0BE: call    sub_40FEC0
0x56C0C3: add     esp, 1Ch
0x56C0C6: mov     eax, edi
0x56C0C8: pop     edi
0x56C0C9: pop     esi
0x56C0CA: retn
0x56C0CB: push    offset a__TesSharedTem; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56C0D0: push    90h
0x56C0D5: push    edi; ArgList
0x56C0D6: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x56C0DB: call    sub_40FEC0
0x56C0E0: add     esp, 10h
0x56C0E3: mov     eax, edi
0x56C0E5: pop     edi
0x56C0E6: pop     esi
0x56C0E7: retn
