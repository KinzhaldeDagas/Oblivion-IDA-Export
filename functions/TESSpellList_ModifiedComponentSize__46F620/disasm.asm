0x46F620: push    esi
0x46F621: xor     esi, esi
0x46F623: test    [esp+4+arg_0], 20h
0x46F628: push    edi
0x46F629: mov     edi, ecx
0x46F62B: jz      TESSpellList_ModifiedComponentSize___Done
0x46F631: mov     ecx, ds:0B33B00h
0x46F637: call    sub_45A170
0x46F63C: test    al, al
0x46F63E: jz      short loc_46F645
0x46F640: mov     esi, 6
0x46F645: lea     eax, [edi+4]
0x46F648: add     esi, 2
0x46F64B: xor     ecx, ecx
0x46F64D: test    eax, eax
0x46F64F: jz      short loc_46F660
0x46F651: cmp     dword ptr [eax], 0
0x46F654: jz      short loc_46F659
0x46F656: add     ecx, 1
0x46F659: mov     eax, [eax+4]
0x46F65C: test    eax, eax
0x46F65E: jnz     short loc_46F651
0x46F660: lea     edx, [esi+ecx*4]
0x46F663: lea     eax, [edi+0Ch]
0x46F666: xor     ecx, ecx
0x46F668: test    eax, eax
0x46F66A: jz      short loc_46F67F
0x46F66C: lea     esp, [esp+0]
0x46F670: cmp     dword ptr [eax], 0
0x46F673: jz      short loc_46F678
0x46F675: add     ecx, 1
0x46F678: mov     eax, [eax+4]
0x46F67B: test    eax, eax
0x46F67D: jnz     short loc_46F670
0x46F67F: cmp     byte ptr ds:0B05BACh, 0
0x46F686: lea     edi, [edx+ecx*4]
0x46F689: jz      short loc_46F6D4
0x46F68B: mov     eax, ds:0B33B00h
0x46F690: mov     esi, [eax+84h]
0x46F696: test    esi, esi
0x46F698: jz      short loc_46F6DC
0x46F69A: mov     ecx, [esi]
0x46F69C: push    ecx; a1
0x46F69D: call    TESForm_LookupByFormID
0x46F6A2: mov     edx, [esi+5]
0x46F6A5: add     esp, 4
0x46F6A8: push    offset a__TesSharedT_4; "..\\TES Shared\\TESSpellList.cpp"
0x46F6AD: push    4EFh
0x46F6B2: push    edx
0x46F6B3: mov     edx, [eax]
0x46F6B5: mov     ecx, eax
0x46F6B7: mov     eax, [edx+0D4h]
0x46F6BD: call    eax
0x46F6BF: mov     ecx, [esi]
0x46F6C1: push    eax
0x46F6C2: movzx   edx, di
0x46F6C5: push    ecx
0x46F6C6: push    edx; ArgList
0x46F6C7: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x46F6CC: call    sub_40FEC0
0x46F6D1: add     esp, 1Ch
0x46F6D4: mov     ax, di
0x46F6D7: pop     edi
0x46F6D8: pop     esi
0x46F6D9: retn    4
0x46F6DC: push    offset a__TesSharedT_4; "..\\TES Shared\\TESSpellList.cpp"
0x46F6E1: movzx   eax, di
0x46F6E4: push    4EFh
0x46F6E9: push    eax; ArgList
0x46F6EA: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x46F6EF: call    sub_40FEC0
0x46F6F4: add     esp, 10h
0x46F6F7: mov     ax, di
0x46F6FA: pop     edi
0x46F6FB: pop     esi
0x46F6FC: retn    4
