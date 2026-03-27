0x485660: push    ecx
0x485661: push    esi
0x485662: push    edi
0x485663: mov     edi, ecx
0x485665: mov     ecx, ds:0B33B00h
0x48566B: xor     esi, esi
0x48566D: call    sub_45A170
0x485672: test    al, al
0x485674: jz      short loc_48567B
0x485676: mov     esi, 6
0x48567B: add     esi, 0Ch
0x48567E: mov     [esp+0Ch+var_4], esi
0x485682: mov     esi, [edi]
0x485684: test    esi, esi
0x485686: mov     di, word ptr [esp+0Ch+var_4]
0x48568B: jz      short loc_4856B0
0x48568D: lea     ecx, [ecx+0]
0x485690: cmp     dword ptr [esi+4], 0
0x485694: jnz     short loc_48569B
0x485696: cmp     dword ptr [esi], 0
0x485699: jz      short loc_4856B0
0x48569B: mov     ecx, [esi]
0x48569D: push    0
0x48569F: push    20h ; ' '
0x4856A1: call    ExtraDataList_GetSaveSize
0x4856A6: mov     esi, [esi+4]
0x4856A9: add     di, ax
0x4856AC: test    esi, esi
0x4856AE: jnz     short loc_485690
0x4856B0: cmp     byte ptr ds:0B05BACh, 0
0x4856B7: jz      short loc_485724
0x4856B9: mov     eax, ds:0B33B00h
0x4856BE: mov     esi, [eax+84h]
0x4856C4: test    esi, esi
0x4856C6: jz      short loc_485709
0x4856C8: mov     ecx, [esi]
0x4856CA: push    ecx; a1
0x4856CB: call    TESForm_LookupByFormID
0x4856D0: mov     edx, [esi+5]
0x4856D3: add     esp, 4
0x4856D6: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x4856DB: push    58Ch
0x4856E0: push    edx
0x4856E1: mov     edx, [eax]
0x4856E3: mov     ecx, eax
0x4856E5: mov     eax, [edx+0D4h]
0x4856EB: call    eax
0x4856ED: mov     ecx, [esi]
0x4856EF: push    eax
0x4856F0: movzx   edx, di
0x4856F3: push    ecx
0x4856F4: push    edx; ArgList
0x4856F5: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x4856FA: call    sub_40FEC0
0x4856FF: add     esp, 1Ch
0x485702: mov     ax, di
0x485705: pop     edi
0x485706: pop     esi
0x485707: pop     ecx
0x485708: retn
0x485709: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x48570E: movzx   eax, di
0x485711: push    58Ch
0x485716: push    eax; ArgList
0x485717: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x48571C: call    sub_40FEC0
0x485721: add     esp, 10h
0x485724: mov     ax, di
0x485727: pop     edi
0x485728: pop     esi
0x485729: pop     ecx
0x48572A: retn
