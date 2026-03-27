0x981C6B: cmp     dword ptr ds:0AA3E84h, 0
0x981C72: jz      short loc_981C8E
0x981C74: push    offset off_AA3E84
0x981C79: call    __IsNonwritableInCurrentImage
0x981C7E: test    eax, eax
0x981C80: pop     ecx
0x981C81: jz      short loc_981C8E
0x981C83: push    [esp+arg_0]
0x981C87: call    dword ptr ds:0AA3E84h
0x981C8D: pop     ecx
0x981C8E: call    __initp_misc_cfltcvt_tab
0x981C93: push    offset __x?_z_0
0x981C98: push    offset __x?_a_0
0x981C9D: call    __initterm_e
0x981CA2: test    eax, eax
0x981CA4: pop     ecx
0x981CA5: pop     ecx
0x981CA6: jnz     short locret_981CFC
0x981CA8: push    esi
0x981CA9: push    edi
0x981CAA: push    offset sub_98D7E1; void (__cdecl *)()
0x981CAF: call    _atexit
0x981CB4: mov     esi, offset unk_A283D0
0x981CB9: mov     eax, esi
0x981CBB: mov     edi, offset unk_A2F77C
0x981CC0: cmp     eax, edi
0x981CC2: pop     ecx
0x981CC3: jnb     short loc_981CD4
0x981CC5: mov     eax, [esi]
0x981CC7: test    eax, eax
0x981CC9: jz      short loc_981CCD
0x981CCB: call    eax
0x981CCD: add     esi, 4
0x981CD0: cmp     esi, edi
0x981CD2: jb      short loc_981CC5
0x981CD4: cmp     dword ptr ds:0BABC18h, 0
0x981CDB: pop     edi
0x981CDC: pop     esi
0x981CDD: jz      short loc_981CFA
0x981CDF: push    offset dword_BABC18
0x981CE4: call    __IsNonwritableInCurrentImage
0x981CE9: test    eax, eax
0x981CEB: pop     ecx
0x981CEC: jz      short loc_981CFA
0x981CEE: push    0
0x981CF0: push    2
0x981CF2: push    0
0x981CF4: call    dword ptr ds:0BABC18h
0x981CFA: xor     eax, eax
0x981CFC: retn
