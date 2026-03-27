0x488580: push    ecx
0x488581: push    esi
0x488582: push    edi
0x488583: mov     edi, ecx
0x488585: mov     ecx, ds:0B33B00h
0x48858B: xor     esi, esi
0x48858D: call    sub_45A170
0x488592: test    al, al
0x488594: jz      short loc_48859B
0x488596: mov     esi, 6
0x48859B: add     esi, 2
0x48859E: mov     [esp+0Ch+var_4], esi
0x4885A2: mov     esi, [edi]
0x4885A4: test    esi, esi
0x4885A6: mov     di, word ptr [esp+0Ch+var_4]
0x4885AB: jz      short loc_4885D0
0x4885AD: lea     ecx, [ecx+0]
0x4885B0: cmp     dword ptr [esi+4], 0
0x4885B4: jnz     short loc_4885BB
0x4885B6: cmp     dword ptr [esi], 0
0x4885B9: jz      short loc_4885D0
0x4885BB: mov     ecx, [esi]
0x4885BD: test    ecx, ecx
0x4885BF: jz      short loc_4885C9
0x4885C1: call    sub_485660
0x4885C6: add     di, ax
0x4885C9: mov     esi, [esi+4]
0x4885CC: test    esi, esi
0x4885CE: jnz     short loc_4885B0
0x4885D0: cmp     byte ptr ds:0B05BACh, 0
0x4885D7: jz      short loc_488644
0x4885D9: mov     eax, ds:0B33B00h
0x4885DE: mov     esi, [eax+84h]
0x4885E4: test    esi, esi
0x4885E6: jz      short loc_488629
0x4885E8: mov     ecx, [esi]
0x4885EA: push    ecx; a1
0x4885EB: call    TESForm_LookupByFormID
0x4885F0: mov     edx, [esi+5]
0x4885F3: add     esp, 4
0x4885F6: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x4885FB: push    2131h
0x488600: push    edx
0x488601: mov     edx, [eax]
0x488603: mov     ecx, eax
0x488605: mov     eax, [edx+0D4h]
0x48860B: call    eax
0x48860D: mov     ecx, [esi]
0x48860F: push    eax
0x488610: movzx   edx, di
0x488613: push    ecx
0x488614: push    edx; ArgList
0x488615: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x48861A: call    sub_40FEC0
0x48861F: add     esp, 1Ch
0x488622: mov     ax, di
0x488625: pop     edi
0x488626: pop     esi
0x488627: pop     ecx
0x488628: retn
0x488629: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x48862E: movzx   eax, di
0x488631: push    2131h
0x488636: push    eax; ArgList
0x488637: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x48863C: call    sub_40FEC0
0x488641: add     esp, 10h
0x488644: mov     ax, di
0x488647: pop     edi
0x488648: pop     esi
0x488649: pop     ecx
0x48864A: retn
