0x4E2BF0: push    ebx
0x4E2BF1: mov     ebx, [esp+4+arg_0]
0x4E2BF5: push    ebp
0x4E2BF6: push    esi
0x4E2BF7: push    edi
0x4E2BF8: push    ebx
0x4E2BF9: mov     esi, ecx
0x4E2BFB: call    TESForm_ModifiedFormSize
0x4E2C00: mov     ecx, ds:0B33B00h
0x4E2C06: movzx   eax, ax
0x4E2C09: mov     di, ax
0x4E2C0C: mov     [esp+10h+arg_0], eax
0x4E2C10: movzx   ebp, di
0x4E2C13: call    sub_45A170
0x4E2C18: test    al, al
0x4E2C1A: jz      short loc_4E2C26
0x4E2C1C: add     [esp+10h+arg_0], 6
0x4E2C21: mov     di, word ptr [esp+10h+arg_0]
0x4E2C26: test    ebx, 8000000h
0x4E2C2C: jz      short loc_4E2C45
0x4E2C2E: lea     ecx, [esi+44h]; this
0x4E2C31: call    ExtraDataList_GetContainerChanges
0x4E2C36: mov     ecx, eax
0x4E2C38: call    sub_488580
0x4E2C3D: add     di, ax
0x4E2C40: mov     word ptr [esp+10h+arg_0], di
0x4E2C45: test    ebx, 177577E0h
0x4E2C4B: jnz     short loc_4E2C5D
0x4E2C4D: mov     edx, [esi]
0x4E2C4F: mov     eax, [edx+190h]
0x4E2C55: mov     ecx, esi
0x4E2C57: call    eax
0x4E2C59: test    al, al
0x4E2C5B: jz      short loc_4E2C6F
0x4E2C5D: push    esi
0x4E2C5E: push    ebx
0x4E2C5F: lea     ecx, [esi+44h]
0x4E2C62: call    ExtraDataList_GetSaveSize
0x4E2C67: add     di, ax
0x4E2C6A: mov     word ptr [esp+10h+arg_0], di
0x4E2C6F: test    ebx, 2000000h
0x4E2C75: jz      short loc_4E2C9A
0x4E2C77: mov     edx, [esi]
0x4E2C79: mov     eax, [edx+190h]
0x4E2C7F: mov     ecx, esi
0x4E2C81: call    eax
0x4E2C83: test    al, al
0x4E2C85: jnz     short loc_4E2C9A
0x4E2C87: mov     ecx, esi
0x4E2C89: call    sub_4E0840
0x4E2C8E: add     ax, 2
0x4E2C92: add     di, ax
0x4E2C95: mov     word ptr [esp+10h+arg_0], di
0x4E2C9A: test    bl, 8
0x4E2C9D: jz      short loc_4E2CB4
0x4E2C9F: push    0
0x4E2CA1: mov     ecx, esi
0x4E2CA3: call    sub_4E0970
0x4E2CA8: add     ax, 2
0x4E2CAC: add     di, ax
0x4E2CAF: mov     word ptr [esp+10h+arg_0], di
0x4E2CB4: mov     eax, ds:0B33B00h
0x4E2CB9: cmp     byte ptr [eax+7Ch], 43h ; 'C'
0x4E2CBD: jb      short loc_4E2CCE
0x4E2CBF: test    bl, 10h
0x4E2CC2: jz      short loc_4E2CCE
0x4E2CC4: add     [esp+10h+arg_0], 4
0x4E2CC9: mov     di, word ptr [esp+10h+arg_0]
0x4E2CCE: cmp     byte ptr ds:0B05BACh, 0
0x4E2CD5: jz      short loc_4E2D4A
0x4E2CD7: mov     esi, [eax+84h]
0x4E2CDD: test    esi, esi
0x4E2CDF: jz      short loc_4E2D2A
0x4E2CE1: mov     ecx, [esi]
0x4E2CE3: push    ecx; a1
0x4E2CE4: call    TESForm_LookupByFormID
0x4E2CE9: mov     edx, [esi+5]
0x4E2CEC: add     esp, 4
0x4E2CEF: push    offset a__TesSharedT_7; "..\\TES Shared\\TESObjectREFR.cpp"
0x4E2CF4: push    6E2h
0x4E2CF9: push    edx
0x4E2CFA: mov     edx, [eax]
0x4E2CFC: mov     ecx, eax
0x4E2CFE: mov     eax, [edx+0D4h]
0x4E2D04: call    eax
0x4E2D06: mov     ecx, [esi]
0x4E2D08: push    eax
0x4E2D09: movzx   edx, bp
0x4E2D0C: movzx   eax, di
0x4E2D0F: push    ecx
0x4E2D10: sub     eax, edx
0x4E2D12: push    eax; ArgList
0x4E2D13: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x4E2D18: call    sub_40FEC0
0x4E2D1D: add     esp, 1Ch
0x4E2D20: mov     ax, di
0x4E2D23: pop     edi
0x4E2D24: pop     esi
0x4E2D25: pop     ebp
0x4E2D26: pop     ebx
0x4E2D27: retn    4
0x4E2D2A: movzx   ecx, bp
0x4E2D2D: push    offset a__TesSharedT_7; "..\\TES Shared\\TESObjectREFR.cpp"
0x4E2D32: movzx   edx, di
0x4E2D35: push    6E2h
0x4E2D3A: sub     edx, ecx
0x4E2D3C: push    edx; ArgList
0x4E2D3D: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x4E2D42: call    sub_40FEC0
0x4E2D47: add     esp, 10h
0x4E2D4A: mov     ax, di
0x4E2D4D: pop     edi
0x4E2D4E: pop     esi
0x4E2D4F: pop     ebp
0x4E2D50: pop     ebx
0x4E2D51: retn    4
