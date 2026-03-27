0x448D40: push    ecx
0x448D41: push    ebx
0x448D42: push    ebp
0x448D43: push    esi
0x448D44: push    edi
0x448D45: mov     ebx, ecx
0x448D47: jmp     short loc_448D50
0x448D49: align 10h
0x448D50: mov     ebp, [ebx+8C0h]
0x448D56: jmp     short loc_448D60
0x448D58: align 10h
0x448D60: mov     eax, [ebx+8C0h]
0x448D66: mov     ecx, eax
0x448D68: and     ecx, 0FFFFFFh
0x448D6E: cmp     ecx, 0FFFFFFh
0x448D74: jnz     short loc_448D82
0x448D76: and     eax, 0FF000000h
0x448D7B: add     eax, 800h
0x448D80: jmp     short loc_448D85
0x448D82: add     eax, 1
0x448D85: mov     [ebx+8C0h], eax
0x448D8B: mov     edx, ds:0B0613Ch
0x448D91: mov     edi, eax
0x448D93: mov     eax, [edx+4]
0x448D96: push    edi
0x448D97: mov     ecx, offset TESForm_FormIDMap
0x448D9C: call    eax
0x448D9E: mov     ecx, ds:0B06144h
0x448DA4: mov     esi, [ecx+eax*4]
0x448DA7: test    esi, esi
0x448DA9: jz      short loc_448DCE
0x448DAB: jmp     short loc_448DB0
0x448DAD: align 10h
0x448DB0: mov     edx, [esi+4]
0x448DB3: mov     eax, ds:0B0613Ch
0x448DB8: push    edx
0x448DB9: mov     edx, [eax+8]
0x448DBC: push    edi
0x448DBD: mov     ecx, offset TESForm_FormIDMap
0x448DC2: call    edx
0x448DC4: test    al, al
0x448DC6: jnz     short loc_448D60
0x448DC8: mov     esi, [esi]
0x448DCA: test    esi, esi
0x448DCC: jnz     short loc_448DB0
0x448DCE: mov     eax, [ebx+8C0h]
0x448DD4: mov     ecx, ds:0B33B00h
0x448DDA: push    eax
0x448DDB: call    sub_453450
0x448DE0: test    al, al
0x448DE2: jnz     loc_448D60
0x448DE8: lea     ecx, [esp+14h+var_4]
0x448DEC: push    ecx
0x448DED: push    ebp
0x448DEE: mov     ecx, offset TESForm_FormIDMap
0x448DF3: call    NiTMap_GetAt
0x448DF8: test    al, al
0x448DFA: jnz     loc_448D50
0x448E00: mov     ecx, ds:0B33B00h
0x448E06: push    ebp
0x448E07: call    sub_453450
0x448E0C: test    al, al
0x448E0E: jnz     loc_448D50
0x448E14: pop     edi
0x448E15: pop     esi
0x448E16: mov     eax, ebp
0x448E18: pop     ebp
0x448E19: pop     ebx
0x448E1A: pop     ecx
0x448E1B: retn
