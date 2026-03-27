0x567D20: push    ecx
0x567D21: push    esi
0x567D22: mov     esi, ecx
0x567D24: mov     ecx, ds:0B33B00h
0x567D2A: push    edi
0x567D2B: xor     edi, edi
0x567D2D: call    sub_45A170
0x567D32: test    al, al
0x567D34: jz      short loc_567D3B
0x567D36: mov     edi, 6
0x567D3B: mov     ecx, [esi+24h]
0x567D3E: add     edi, 9
0x567D41: test    ecx, ecx
0x567D43: mov     [esp+0Ch+var_4], edi
0x567D47: jz      short loc_567D53
0x567D49: call    sub_569A20
0x567D4E: add     word ptr [esp+0Ch+var_4], ax
0x567D53: mov     ecx, [esi+28h]
0x567D56: test    ecx, ecx
0x567D58: jz      short loc_567D64
0x567D5A: call    sub_56A000
0x567D5F: add     word ptr [esp+0Ch+var_4], ax
0x567D64: add     [esp+0Ch+var_4], 4
0x567D69: cmp     byte ptr ds:0B05BACh, 0
0x567D70: jz      short loc_567DEE
0x567D72: mov     eax, ds:0B33B00h
0x567D77: mov     esi, [eax+84h]
0x567D7D: test    esi, esi
0x567D7F: jz      short loc_567DC7
0x567D81: mov     ecx, [esi]
0x567D83: push    ecx; a1
0x567D84: call    TESForm_LookupByFormID
0x567D89: mov     edx, [esi+5]
0x567D8C: add     esp, 4
0x567D8F: push    offset a__TesSharedPac; "..\\TES Shared\\Package.cpp"
0x567D94: push    0E9Dh
0x567D99: push    edx
0x567D9A: mov     edx, [eax]
0x567D9C: mov     ecx, eax
0x567D9E: mov     eax, [edx+0D4h]
0x567DA4: call    eax
0x567DA6: mov     ecx, [esi]
0x567DA8: mov     si, word ptr [esp+18h+var_4]
0x567DAD: push    eax
0x567DAE: movzx   edx, si
0x567DB1: push    ecx
0x567DB2: push    edx; ArgList
0x567DB3: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x567DB8: call    sub_40FEC0
0x567DBD: add     esp, 1Ch
0x567DC0: pop     edi
0x567DC1: mov     ax, si
0x567DC4: pop     esi
0x567DC5: pop     ecx
0x567DC6: retn
0x567DC7: mov     si, word ptr [esp+0Ch+var_4]
0x567DCC: push    offset a__TesSharedPac; "..\\TES Shared\\Package.cpp"
0x567DD1: movzx   eax, si
0x567DD4: push    0E9Dh
0x567DD9: push    eax; ArgList
0x567DDA: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x567DDF: call    sub_40FEC0
0x567DE4: add     esp, 10h
0x567DE7: pop     edi
0x567DE8: mov     ax, si
0x567DEB: pop     esi
0x567DEC: pop     ecx
0x567DED: retn
0x567DEE: mov     ax, word ptr [esp+0Ch+var_4]
0x567DF3: pop     edi
0x567DF4: pop     esi
0x567DF5: pop     ecx
0x567DF6: retn
