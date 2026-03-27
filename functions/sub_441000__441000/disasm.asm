0x441000: push    esi
0x441001: mov     esi, ecx
0x441003: mov     ecx, ds:0B33B00h
0x441009: push    edi
0x44100A: xor     edi, edi
0x44100C: call    sub_45A170
0x441011: test    al, al
0x441013: jz      short loc_44101A
0x441015: mov     edi, 6
0x44101A: lea     eax, [esi+8Ch]
0x441020: add     edi, 4
0x441023: xor     ecx, ecx
0x441025: test    eax, eax
0x441027: jz      short loc_44103F
0x441029: lea     esp, [esp+0]
0x441030: cmp     dword ptr [eax], 0
0x441033: jz      short loc_441038
0x441035: add     ecx, 1
0x441038: mov     eax, [eax+4]
0x44103B: test    eax, eax
0x44103D: jnz     short loc_441030
0x44103F: lea     eax, [ecx+ecx*2]
0x441042: lea     edi, [edi+eax*2]
0x441045: mov     eax, ds:0B33B00h
0x44104A: cmp     byte ptr [eax+7Ch], 32h ; '2'
0x44104E: jb      short loc_441053
0x441050: add     edi, 4
0x441053: cmp     byte ptr ds:0B05BACh, 0
0x44105A: jz      short loc_4410C1
0x44105C: mov     esi, [eax+84h]
0x441062: test    esi, esi
0x441064: jz      short loc_4410A6
0x441066: mov     ecx, [esi]
0x441068: push    ecx; a1
0x441069: call    TESForm_LookupByFormID
0x44106E: mov     edx, [esi+5]
0x441071: add     esp, 4
0x441074: push    offset a__TesSharedTes; "..\\TES Shared\\TES.cpp"
0x441079: push    1591h
0x44107E: push    edx
0x44107F: mov     edx, [eax]
0x441081: mov     ecx, eax
0x441083: mov     eax, [edx+0D4h]
0x441089: call    eax
0x44108B: mov     ecx, [esi]
0x44108D: push    eax
0x44108E: movzx   edx, di
0x441091: push    ecx
0x441092: push    edx; ArgList
0x441093: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x441098: call    sub_40FEC0
0x44109D: add     esp, 1Ch
0x4410A0: mov     ax, di
0x4410A3: pop     edi
0x4410A4: pop     esi
0x4410A5: retn
0x4410A6: push    offset a__TesSharedTes; "..\\TES Shared\\TES.cpp"
0x4410AB: movzx   eax, di
0x4410AE: push    1591h
0x4410B3: push    eax; ArgList
0x4410B4: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x4410B9: call    sub_40FEC0
0x4410BE: add     esp, 10h
0x4410C1: mov     ax, di
0x4410C4: pop     edi
0x4410C5: pop     esi
0x4410C6: retn
