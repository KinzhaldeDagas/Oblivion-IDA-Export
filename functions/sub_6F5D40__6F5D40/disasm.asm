0x6F5D40: push    edi
0x6F5D41: mov     edi, ecx
0x6F5D43: mov     ecx, [edi+40h]
0x6F5D46: test    ecx, ecx
0x6F5D48: jnz     short loc_6F5D50
0x6F5D4A: xor     al, al
0x6F5D4C: pop     edi
0x6F5D4D: retn    0Ch
0x6F5D50: mov     eax, [esp+4+arg_4]
0x6F5D54: push    esi
0x6F5D55: mov     esi, eax
0x6F5D57: imul    esi, [esp+8+arg_8]
0x6F5D5C: test    eax, eax
0x6F5D5E: jbe     short loc_6F5D8A
0x6F5D60: cmp     eax, 2
0x6F5D63: jbe     short loc_6F5D6A
0x6F5D65: cmp     eax, 4
0x6F5D68: jnz     short loc_6F5D8A
0x6F5D6A: mov     edx, [esp+8+arg_0]
0x6F5D6E: push    1
0x6F5D70: lea     eax, [esp+0Ch+arg_4]
0x6F5D74: push    eax
0x6F5D75: mov     eax, [ecx+4]
0x6F5D78: push    esi
0x6F5D79: push    edx
0x6F5D7A: push    ecx
0x6F5D7B: call    eax
0x6F5D7D: add     esp, 14h
0x6F5D80: cmp     esi, eax
0x6F5D82: pop     esi
0x6F5D83: setz    al
0x6F5D86: pop     edi
0x6F5D87: retn    0Ch
0x6F5D8A: test    al, 3
0x6F5D8C: jnz     short loc_6F5D98
0x6F5D8E: mov     [esp+8+arg_4], 4
0x6F5D96: jmp     short loc_6F5DB2
0x6F5D98: push    1BDh; int
0x6F5D9D: push    offset a_Binaryfile_cp; ".\\binaryFile.cpp"
0x6F5DA2: call    sub_6ED6D0
0x6F5DA7: add     esp, 8
0x6F5DAA: mov     [esp+8+arg_4], 1
0x6F5DB2: mov     edx, [esp+8+arg_0]
0x6F5DB6: mov     eax, [edi+40h]
0x6F5DB9: push    1
0x6F5DBB: lea     ecx, [esp+0Ch+arg_4]
0x6F5DBF: push    ecx
0x6F5DC0: push    esi
0x6F5DC1: push    edx
0x6F5DC2: push    eax
0x6F5DC3: mov     eax, [eax+4]
0x6F5DC6: call    eax
0x6F5DC8: add     esp, 14h
0x6F5DCB: cmp     esi, eax
0x6F5DCD: pop     esi
0x6F5DCE: setz    al
0x6F5DD1: pop     edi
0x6F5DD2: retn    0Ch
