0x583C30: push    ecx
0x583C31: mov     eax, [ecx+130h]
0x583C37: mov     ecx, [eax+10h]
0x583C3A: test    ecx, ecx
0x583C3C: jz      short loc_583C7D
0x583C3E: fld1
0x583C40: push    esi
0x583C41: fld     dword ptr [ecx+4]
0x583C44: fadd    dword ptr ds:0B33E9Ch
0x583C4A: fstp    [esp+8+var_4]
0x583C4E: fld     [esp+8+var_4]
0x583C52: fst     dword ptr [ecx+4]
0x583C55: fld     st
0x583C57: fdiv    dword ptr [ecx+8]
0x583C5A: fcomp   st(2)
0x583C5C: fnstsw  ax
0x583C5E: test    ah, 41h
0x583C61: jz      short loc_583C7F
0x583C63: fdiv    dword ptr [ecx+8]
0x583C66: fcomp   qword ptr ds:0A2FC68h
0x583C6C: fnstsw  ax
0x583C6E: test    ah, 5
0x583C71: jp      short loc_583C81
0x583C73: mov     ecx, [ecx+10h]
0x583C76: test    ecx, ecx
0x583C78: jnz     short loc_583C41
0x583C7A: fstp    st
0x583C7C: pop     esi
0x583C7D: pop     ecx
0x583C7E: retn
0x583C7F: fstp    st
0x583C81: fld     dword ptr [ecx+4]
0x583C84: fdiv    dword ptr [ecx+8]
0x583C87: fcom    st(1)
0x583C89: fnstsw  ax
0x583C8B: test    ah, 41h
0x583C8E: jz      short loc_583C9D
0x583C90: fld     st(1)
0x583C92: fucompp
0x583C94: fnstsw  ax
0x583C96: test    ah, 44h
0x583C99: jp      short loc_583C73
0x583C9B: jmp     short loc_583C9F
0x583C9D: fstp    st
0x583C9F: mov     esi, [ecx+10h]
0x583CA2: fstp    st
0x583CA4: test    esi, esi
0x583CA6: mov     edx, [ecx+0Ch]
0x583CA9: mov     [edx+10h], esi
0x583CAC: jz      short loc_583CC3
0x583CAE: mov     eax, [ecx+0Ch]
0x583CB1: push    ecx
0x583CB2: mov     [esi+0Ch], eax
0x583CB5: call    FormHeapFree
0x583CBA: fld1
0x583CBC: add     esp, 4
0x583CBF: mov     ecx, esi
0x583CC1: jmp     short loc_583C76
0x583CC3: mov     edx, ds:0B3A6E0h
0x583CC9: mov     eax, [edx+130h]
0x583CCF: mov     edx, [ecx+0Ch]
0x583CD2: push    ecx
0x583CD3: mov     [eax+0Ch], edx
0x583CD6: call    FormHeapFree
0x583CDB: fld1
0x583CDD: add     esp, 4
0x583CE0: mov     ecx, esi
0x583CE2: jmp     short loc_583C76
