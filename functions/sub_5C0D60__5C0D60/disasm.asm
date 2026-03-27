0x5C0D60: mov     ecx, ds:0B33B00h
0x5C0D66: push    edi
0x5C0D67: xor     edi, edi
0x5C0D69: call    sub_45A170
0x5C0D6E: test    al, al
0x5C0D70: jz      short loc_5C0D77
0x5C0D72: mov     edi, 6
0x5C0D77: xor     edx, edx
0x5C0D79: lea     esp, [esp+0]
0x5C0D80: mov     eax, ds:dword_B3B444[edx]
0x5C0D86: add     edi, 1
0x5C0D89: test    eax, eax
0x5C0D8B: jz      short loc_5C0DA2
0x5C0D8D: lea     ecx, [ecx+0]
0x5C0D90: cmp     dword ptr [eax+8], 0
0x5C0D94: lea     ecx, [eax+8]
0x5C0D97: mov     eax, [eax]
0x5C0D99: jz      short loc_5C0D9E
0x5C0D9B: add     edi, 4
0x5C0D9E: test    eax, eax
0x5C0DA0: jnz     short loc_5C0D90
0x5C0DA2: add     edx, 10h
0x5C0DA5: cmp     edx, 80h ; '€'
0x5C0DAB: jb      short loc_5C0D80
0x5C0DAD: cmp     byte ptr ds:0B05BACh, 0
0x5C0DB4: jz      short loc_5C0E22
0x5C0DB6: mov     eax, ds:0B33B00h
0x5C0DBB: push    esi
0x5C0DBC: mov     esi, [eax+84h]
0x5C0DC2: test    esi, esi
0x5C0DC4: jz      short loc_5C0E06
0x5C0DC6: mov     ecx, [esi]
0x5C0DC8: push    ecx; a1
0x5C0DC9: call    TESForm_LookupByFormID
0x5C0DCE: mov     edx, [esi+5]
0x5C0DD1: add     esp, 4
0x5C0DD4: push    offset a_InterfaceMenu; ".\\Interface\\Menus\\QuickKeysMenu.cpp"
0x5C0DD9: push    368h
0x5C0DDE: push    edx
0x5C0DDF: mov     edx, [eax]
0x5C0DE1: mov     ecx, eax
0x5C0DE3: mov     eax, [edx+0D4h]
0x5C0DE9: call    eax
0x5C0DEB: mov     ecx, [esi]
0x5C0DED: push    eax
0x5C0DEE: movzx   edx, di
0x5C0DF1: push    ecx
0x5C0DF2: push    edx; ArgList
0x5C0DF3: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x5C0DF8: call    sub_40FEC0
0x5C0DFD: add     esp, 1Ch
0x5C0E00: pop     esi
0x5C0E01: mov     ax, di
0x5C0E04: pop     edi
0x5C0E05: retn
0x5C0E06: push    offset a_InterfaceMenu; ".\\Interface\\Menus\\QuickKeysMenu.cpp"
0x5C0E0B: movzx   eax, di
0x5C0E0E: push    368h
0x5C0E13: push    eax; ArgList
0x5C0E14: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x5C0E19: call    sub_40FEC0
0x5C0E1E: add     esp, 10h
0x5C0E21: pop     esi
0x5C0E22: mov     ax, di
0x5C0E25: pop     edi
0x5C0E26: retn
