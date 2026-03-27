0x5E7D00: push    ebx
0x5E7D01: mov     ebx, [esp+4+arg_0]
0x5E7D05: push    ebp
0x5E7D06: push    esi
0x5E7D07: push    edi
0x5E7D08: push    ebx
0x5E7D09: mov     edi, ecx
0x5E7D0B: call    MobileObject_ModifiedFormSize
0x5E7D10: mov     ecx, ds:0B33B00h
0x5E7D16: movzx   esi, ax
0x5E7D19: mov     [esp+10h+arg_0], esi
0x5E7D1D: movzx   ebp, si
0x5E7D20: call    sub_45A170
0x5E7D25: test    al, al
0x5E7D27: jz      short loc_5E7D2C
0x5E7D29: add     esi, 6
0x5E7D2C: add     esi, 7
0x5E7D2F: test    bl, 40h
0x5E7D32: jz      short loc_5E7D37
0x5E7D34: add     esi, 1
0x5E7D37: mov     eax, [edi]
0x5E7D39: mov     edx, [eax+170h]
0x5E7D3F: mov     ecx, edi
0x5E7D41: call    edx
0x5E7D43: cmp     byte ptr [eax+4], 24h ; '$'
0x5E7D47: jnz     short loc_5E7D71
0x5E7D49: mov     eax, [edi]
0x5E7D4B: mov     edx, [eax+170h]
0x5E7D51: mov     ecx, edi
0x5E7D53: call    edx
0x5E7D55: test    eax, eax
0x5E7D57: jz      short loc_5E7D71
0x5E7D59: cmp     byte ptr [eax+104h], 4
0x5E7D60: jnz     short loc_5E7D71
0x5E7D62: add     esi, 1
0x5E7D65: cmp     dword ptr [edi+0D4h], 0
0x5E7D6C: jz      short loc_5E7D71
0x5E7D6E: add     esi, 4
0x5E7D71: test    ebx, 8000h
0x5E7D77: jz      short loc_5E7DA2
0x5E7D79: lea     eax, [edi+0A4h]
0x5E7D7F: add     esi, 2
0x5E7D82: test    eax, eax
0x5E7D84: jz      short loc_5E7DA2
0x5E7D86: mov     ecx, [eax+4]
0x5E7D89: test    ecx, ecx
0x5E7D8B: jnz     short loc_5E7D91
0x5E7D8D: cmp     [eax], ecx
0x5E7D8F: jz      short loc_5E7DA2
0x5E7D91: mov     eax, [eax]
0x5E7D93: cmp     dword ptr [eax+4], 0
0x5E7D97: jz      short loc_5E7D9C
0x5E7D99: add     esi, 8
0x5E7D9C: mov     eax, ecx
0x5E7D9E: test    eax, eax
0x5E7DA0: jnz     short loc_5E7D86
0x5E7DA2: test    ebx, 20000000h
0x5E7DA8: jz      short loc_5E7DAD
0x5E7DAA: add     esi, 4
0x5E7DAD: lea     eax, [edi+9Ch]
0x5E7DB3: add     esi, 2
0x5E7DB6: xor     ecx, ecx
0x5E7DB8: test    eax, eax
0x5E7DBA: jz      short loc_5E7DCF
0x5E7DBC: lea     esp, [esp+0]
0x5E7DC0: cmp     dword ptr [eax], 0
0x5E7DC3: jz      short loc_5E7DC8
0x5E7DC5: add     ecx, 1
0x5E7DC8: mov     eax, [eax+4]
0x5E7DCB: test    eax, eax
0x5E7DCD: jnz     short loc_5E7DC0
0x5E7DCF: lea     esi, [esi+ecx*8]
0x5E7DD2: mov     ecx, ds:0B33B00h
0x5E7DD8: mov     al, [ecx+7Ch]
0x5E7DDB: cmp     al, 32h ; '2'
0x5E7DDD: mov     [esp+10h+arg_0], esi
0x5E7DE1: jb      short loc_5E7DEA
0x5E7DE3: add     esi, 4
0x5E7DE6: mov     [esp+10h+arg_0], esi
0x5E7DEA: cmp     al, 3Ch ; '<'
0x5E7DEC: jb      short loc_5E7DF5
0x5E7DEE: add     esi, 4
0x5E7DF1: mov     [esp+10h+arg_0], esi
0x5E7DF5: cmp     al, 44h ; 'D'
0x5E7DF7: jb      short loc_5E7E17
0x5E7DF9: test    ebx, 200000h
0x5E7DFF: jz      short loc_5E7E17
0x5E7E01: lea     ecx, [edi+88h]
0x5E7E07: call    AVCollection_GetSaveSize
0x5E7E0C: add     word ptr [esp+10h+arg_0], ax
0x5E7E11: mov     ecx, ds:0B33B00h
0x5E7E17: mov     al, [ecx+7Ch]
0x5E7E1A: cmp     al, 45h ; 'E'
0x5E7E1C: jb      short loc_5E7E23
0x5E7E1E: add     [esp+10h+arg_0], 5
0x5E7E23: cmp     al, 61h ; 'a'
0x5E7E25: jb      short loc_5E7E2C
0x5E7E27: add     [esp+10h+arg_0], 4
0x5E7E2C: cmp     al, 65h ; 'e'
0x5E7E2E: jb      short loc_5E7E35
0x5E7E30: add     [esp+10h+arg_0], 4
0x5E7E35: cmp     al, 71h ; 'q'
0x5E7E37: jb      short loc_5E7E3E
0x5E7E39: add     [esp+10h+arg_0], 0Eh
0x5E7E3E: cmp     al, 73h ; 's'
0x5E7E40: jb      short loc_5E7E47
0x5E7E42: add     [esp+10h+arg_0], 1
0x5E7E47: cmp     al, 7Bh ; '{'
0x5E7E49: jb      short loc_5E7E50
0x5E7E4B: add     [esp+10h+arg_0], 1
0x5E7E50: cmp     byte ptr ds:0B05BACh, 0
0x5E7E57: jz      loc_5E7EE4
0x5E7E5D: mov     esi, [ecx+84h]
0x5E7E63: test    esi, esi
0x5E7E65: jz      short loc_5E7EB5
0x5E7E67: mov     ecx, [esi]
0x5E7E69: push    ecx; a1
0x5E7E6A: call    TESForm_LookupByFormID
0x5E7E6F: mov     edx, [esi+5]
0x5E7E72: add     esp, 4
0x5E7E75: push    offset a_AiActor_cpp; ".\\AI\\Actor.cpp"
0x5E7E7A: push    4323h
0x5E7E7F: push    edx
0x5E7E80: mov     edx, [eax]
0x5E7E82: mov     ecx, eax
0x5E7E84: mov     eax, [edx+0D4h]
0x5E7E8A: call    eax
0x5E7E8C: mov     ecx, [esi]
0x5E7E8E: mov     si, word ptr [esp+1Ch+arg_0]
0x5E7E93: push    eax
0x5E7E94: movzx   edx, bp
0x5E7E97: movzx   eax, si
0x5E7E9A: push    ecx
0x5E7E9B: sub     eax, edx
0x5E7E9D: push    eax; ArgList
0x5E7E9E: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x5E7EA3: call    sub_40FEC0
0x5E7EA8: add     esp, 1Ch
0x5E7EAB: pop     edi
0x5E7EAC: mov     ax, si
0x5E7EAF: pop     esi
0x5E7EB0: pop     ebp
0x5E7EB1: pop     ebx
0x5E7EB2: retn    4
0x5E7EB5: mov     si, word ptr [esp+10h+arg_0]
0x5E7EBA: movzx   ecx, bp
0x5E7EBD: push    offset a_AiActor_cpp; ".\\AI\\Actor.cpp"
0x5E7EC2: movzx   edx, si
0x5E7EC5: push    4323h
0x5E7ECA: sub     edx, ecx
0x5E7ECC: push    edx; ArgList
0x5E7ECD: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x5E7ED2: call    sub_40FEC0
0x5E7ED7: add     esp, 10h
0x5E7EDA: pop     edi
0x5E7EDB: mov     ax, si
0x5E7EDE: pop     esi
0x5E7EDF: pop     ebp
0x5E7EE0: pop     ebx
0x5E7EE1: retn    4
0x5E7EE4: mov     ax, word ptr [esp+10h+arg_0]
0x5E7EE9: pop     edi
0x5E7EEA: pop     esi
0x5E7EEB: pop     ebp
0x5E7EEC: pop     ebx
0x5E7EED: retn    4
