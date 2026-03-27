0x625EF0: push    ecx
0x625EF1: push    ebx
0x625EF2: push    esi
0x625EF3: push    edi
0x625EF4: mov     edi, ecx
0x625EF6: call    sub_567D20
0x625EFB: mov     ecx, ds:0B33B00h
0x625F01: movzx   esi, ax
0x625F04: mov     [esp+10h+var_4], esi
0x625F08: movzx   ebx, si
0x625F0B: call    sub_45A170
0x625F10: test    al, al
0x625F12: jz      short loc_625F17
0x625F14: add     esi, 6
0x625F17: mov     eax, ds:0B33B00h
0x625F1C: add     esi, 4
0x625F1F: cmp     byte ptr [eax+7Ch], 6Ah ; 'j'
0x625F23: jb      short loc_625F28
0x625F25: add     esi, 1
0x625F28: mov     ecx, [edi+50h]
0x625F2B: add     esi, 12h
0x625F2E: test    ecx, ecx
0x625F30: mov     [esp+10h+var_4], esi
0x625F34: jz      short loc_625F47
0x625F36: call    sub_6B75B0
0x625F3B: add     ax, 4
0x625F3F: mov     di, si
0x625F42: add     di, ax
0x625F45: jmp     short loc_625F4C
0x625F47: mov     di, word ptr [esp+10h+var_4]
0x625F4C: cmp     byte ptr ds:0B05BACh, 0
0x625F53: jz      short loc_625FCC
0x625F55: mov     ecx, ds:0B33B00h
0x625F5B: mov     esi, [ecx+84h]
0x625F61: test    esi, esi
0x625F63: jz      short loc_625FAC
0x625F65: mov     edx, [esi]
0x625F67: push    edx; a1
0x625F68: call    TESForm_LookupByFormID
0x625F6D: mov     ecx, [esi+5]
0x625F70: mov     edx, [eax]
0x625F72: add     esp, 4
0x625F75: push    offset a_AiDialoguepac; ".\\AI\\DialoguePackage.cpp"
0x625F7A: push    13Dh
0x625F7F: push    ecx
0x625F80: mov     ecx, eax
0x625F82: mov     eax, [edx+0D4h]
0x625F88: call    eax
0x625F8A: mov     ecx, [esi]
0x625F8C: push    eax
0x625F8D: movzx   edx, bx
0x625F90: movzx   eax, di
0x625F93: push    ecx
0x625F94: sub     eax, edx
0x625F96: push    eax; ArgList
0x625F97: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x625F9C: call    sub_40FEC0
0x625FA1: add     esp, 1Ch
0x625FA4: mov     ax, di
0x625FA7: pop     edi
0x625FA8: pop     esi
0x625FA9: pop     ebx
0x625FAA: pop     ecx
0x625FAB: retn
0x625FAC: movzx   ecx, bx
0x625FAF: push    offset a_AiDialoguepac; ".\\AI\\DialoguePackage.cpp"
0x625FB4: movzx   edx, di
0x625FB7: push    13Dh
0x625FBC: sub     edx, ecx
0x625FBE: push    edx; ArgList
0x625FBF: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x625FC4: call    sub_40FEC0
0x625FC9: add     esp, 10h
0x625FCC: mov     ax, di
0x625FCF: pop     edi
0x625FD0: pop     esi
0x625FD1: pop     ebx
0x625FD2: pop     ecx
0x625FD3: retn
