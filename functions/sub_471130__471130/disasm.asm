0x471130: mov     ecx, ds:0B33B00h
0x471136: push    esi
0x471137: xor     esi, esi
0x471139: call    sub_45A170
0x47113E: test    al, al
0x471140: jz      short loc_471147
0x471142: mov     esi, 6
0x471147: mov     eax, [esp+4+arg_4]
0x47114B: add     esi, 4
0x47114E: test    eax, eax
0x471150: jz      short loc_471175
0x471152: cmp     dword ptr [eax+24h], 0
0x471156: jz      short loc_471175
0x471158: mov     ecx, [eax+10h]
0x47115B: add     esi, 2
0x47115E: test    ecx, ecx
0x471160: mov     edx, 0Dh
0x471165: jz      short loc_471173
0x471167: call    sub_49F550
0x47116C: add     ax, 0Eh
0x471170: movzx   edx, ax
0x471173: add     esi, edx
0x471175: cmp     byte ptr ds:0B05BACh, 0
0x47117C: jz      short loc_4711EA
0x47117E: mov     eax, ds:0B33B00h
0x471183: push    edi
0x471184: mov     edi, [eax+84h]
0x47118A: test    edi, edi
0x47118C: jz      short loc_4711CE
0x47118E: mov     ecx, [edi]
0x471190: push    ecx; a1
0x471191: call    TESForm_LookupByFormID
0x471196: mov     edx, [edi+5]
0x471199: add     esp, 4
0x47119C: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x4711A1: push    0F57h
0x4711A6: push    edx
0x4711A7: mov     edx, [eax]
0x4711A9: mov     ecx, eax
0x4711AB: mov     eax, [edx+0D4h]
0x4711B1: call    eax
0x4711B3: mov     ecx, [edi]
0x4711B5: push    eax
0x4711B6: movzx   edx, si
0x4711B9: push    ecx
0x4711BA: push    edx; ArgList
0x4711BB: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x4711C0: call    sub_40FEC0
0x4711C5: add     esp, 1Ch
0x4711C8: pop     edi
0x4711C9: mov     ax, si
0x4711CC: pop     esi
0x4711CD: retn
0x4711CE: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x4711D3: movzx   eax, si
0x4711D6: push    0F57h
0x4711DB: push    eax; ArgList
0x4711DC: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x4711E1: call    sub_40FEC0
0x4711E6: add     esp, 10h
0x4711E9: pop     edi
0x4711EA: mov     ax, si
0x4711ED: pop     esi
0x4711EE: retn
