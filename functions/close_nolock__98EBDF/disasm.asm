0x98EBDF: push    esi
0x98EBE0: mov     esi, [esp+4+arg_0]
0x98EBE4: push    edi
0x98EBE5: push    esi; int
0x98EBE6: call    __get_osfhandle
0x98EBEB: cmp     eax, 0FFFFFFFFh
0x98EBEE: pop     ecx
0x98EBEF: jz      short loc_98EC3E
0x98EBF1: cmp     esi, 1
0x98EBF4: mov     eax, dword_BAAAC0
0x98EBF9: jnz     short loc_98EC01
0x98EBFB: test    byte ptr [eax+54h], 1
0x98EBFF: jnz     short loc_98EC0C
0x98EC01: cmp     esi, 2
0x98EC04: jnz     short loc_98EC22
0x98EC06: test    byte ptr [eax+2Ch], 1
0x98EC0A: jz      short loc_98EC22
0x98EC0C: push    2; int
0x98EC0E: call    __get_osfhandle
0x98EC13: push    1; int
0x98EC15: mov     edi, eax
0x98EC17: call    __get_osfhandle
0x98EC1C: cmp     eax, edi
0x98EC1E: pop     ecx
0x98EC1F: pop     ecx
0x98EC20: jz      short loc_98EC3E
0x98EC22: push    esi; int
0x98EC23: call    __get_osfhandle
0x98EC28: pop     ecx
0x98EC29: push    eax; hObject
0x98EC2A: call    ds:CloseHandle
0x98EC30: test    eax, eax
0x98EC32: jnz     short loc_98EC3E
0x98EC34: call    ds:GetLastError
0x98EC3A: mov     edi, eax
0x98EC3C: jmp     short loc_98EC40
0x98EC3E: xor     edi, edi
0x98EC40: push    esi
0x98EC41: call    __free_osfhnd
0x98EC46: mov     eax, esi
0x98EC48: and     esi, 1Fh
0x98EC4B: imul    esi, 28h ; '('
0x98EC4E: sar     eax, 5
0x98EC51: test    edi, edi
0x98EC53: mov     eax, dword_BAAAC0[eax*4]
0x98EC5A: pop     ecx
0x98EC5B: mov     byte ptr [eax+esi+4], 0
0x98EC60: jz      short loc_98EC6E
0x98EC62: push    edi
0x98EC63: call    __dosmaperr
0x98EC68: pop     ecx
0x98EC69: or      eax, 0FFFFFFFFh
0x98EC6C: jmp     short loc_98EC70
0x98EC6E: xor     eax, eax
0x98EC70: pop     edi
0x98EC71: pop     esi
0x98EC72: retn
