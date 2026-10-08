0x7A2A40: push    0FFFFFFFFh; 2026-05-25 fidelity note: Oblivion stock 15000 texture-controls parser is bounded by the existing CTreeEngine branch-info pointer-vector count and requires 15001 after that loop. Compatibility mirror must not treat unknown branch count as a free-running record stream; standalone unknown count is accepted only as zero-entry/end-token form.
0x7A2A42: push    offset SEH_7A2A40
0x7A2A47: mov     eax, large fs:0
0x7A2A4D: push    eax
0x7A2A4E: sub     esp, 90h
0x7A2A54: push    ebx
0x7A2A55: push    ebp
0x7A2A56: push    esi
0x7A2A57: push    edi
0x7A2A58: mov     eax, ds:0B30AACh
0x7A2A5D: xor     eax, esp
0x7A2A5F: push    eax
0x7A2A60: lea     eax, [esp+0B0h+var_C]
0x7A2A67: mov     large fs:0, eax
0x7A2A6D: mov     esi, ecx
0x7A2A6F: mov     edi, [esp+0B0h+file]
0x7A2A76: xor     ebx, ebx
0x7A2A78: mov     [esp+0B0h+var_98], ebx
0x7A2A7C: lea     esp, [esp+0]
0x7A2A80: mov     ecx, [esi+64h]
0x7A2A83: xor     ebp, ebp
0x7A2A85: cmp     ecx, ebp
0x7A2A87: jz      loc_7A2BE1
0x7A2A8D: mov     eax, [esi+68h]
0x7A2A90: sub     eax, ecx
0x7A2A92: sar     eax, 2
0x7A2A95: cmp     ebx, eax
0x7A2A97: jnb     loc_7A2BE1
0x7A2A9D: mov     ecx, edi; this
0x7A2A9F: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A2AA4: cmp     eax, 3A9Ah
0x7A2AA9: jnz     loc_7A2B4C
0x7A2AAF: mov     ebp, [edi]
0x7A2AB1: lea     eax, [ebp+1]
0x7A2AB4: mov     [edi], eax
0x7A2AB6: mov     ecx, [edi+8]
0x7A2AB9: test    ecx, ecx
0x7A2ABB: jz      short loc_7A2AC6
0x7A2ABD: mov     eax, [edi+0Ch]
0x7A2AC0: sub     eax, ecx
0x7A2AC2: cmp     ebp, eax
0x7A2AC4: jb      short loc_7A2ACB
0x7A2AC6: call    __invalid_parameter_noinfo
0x7A2ACB: mov     ecx, [edi+8]
0x7A2ACE: cmp     byte ptr [ecx+ebp], 0
0x7A2AD2: mov     ecx, [esi+64h]
0x7A2AD5: setnz   [esp+0B0h+var_99]
0x7A2ADA: test    ecx, ecx
0x7A2ADC: jz      short loc_7A2AEA
0x7A2ADE: mov     eax, [esi+68h]
0x7A2AE1: sub     eax, ecx
0x7A2AE3: sar     eax, 2
0x7A2AE6: cmp     ebx, eax
0x7A2AE8: jb      short loc_7A2AEF
0x7A2AEA: call    __invalid_parameter_noinfo
0x7A2AEF: mov     edx, [esi+64h]
0x7A2AF2: mov     cl, [esp+0B0h+var_99]
0x7A2AF6: add     ebx, ebx
0x7A2AF8: add     ebx, ebx
0x7A2AFA: mov     eax, [ebx+edx]
0x7A2AFD: mov     [eax+1Eh], cl
0x7A2B00: mov     ecx, edi; this
0x7A2B02: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A2B07: cmp     eax, 3A9Bh
0x7A2B0C: jnz     loc_7A2B92
0x7A2B12: mov     ecx, [esi+64h]
0x7A2B15: test    ecx, ecx
0x7A2B17: jz      short loc_7A2B27
0x7A2B19: mov     eax, [esi+68h]
0x7A2B1C: sub     eax, ecx
0x7A2B1E: sar     eax, 2
0x7A2B21: cmp     [esp+0B0h+var_98], eax
0x7A2B25: jb      short loc_7A2B2C
0x7A2B27: call    __invalid_parameter_noinfo
0x7A2B2C: mov     ebp, [esi+64h]
0x7A2B2F: mov     ecx, edi; this
0x7A2B31: add     ebp, ebx
0x7A2B33: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A2B38: mov     edx, [ebp+0]
0x7A2B3B: add     [esp+0B0h+var_98], 1
0x7A2B40: fstp    dword ptr [edx+20h]
0x7A2B43: mov     ebx, [esp+0B0h+var_98]
0x7A2B47: jmp     loc_7A2A80
0x7A2B4C: push    1Ah; count
0x7A2B4E: push    offset aMalformedTex_0; "malformed texture controls"
0x7A2B53: lea     ecx, [esp+0B8h+details]; this
0x7A2B57: mov     [esp+0B8h+details.capacity], 0Fh
0x7A2B5F: mov     [esp+0B8h+details.size], ebp
0x7A2B63: mov     byte ptr [esp+0B8h+details.storage], 0
0x7A2B68: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A2B6D: push    ebp; appendSystemError
0x7A2B6E: lea     eax, [esp+0B4h+details]
0x7A2B72: push    eax; details
0x7A2B73: lea     ecx, [esp+0B8h+var_5C]; this
0x7A2B77: mov     [esp+0B8h+var_4], ebp
0x7A2B7E: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x7A2B83: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A2B88: lea     ecx, [esp+0B4h+var_5C]
0x7A2B8C: push    ecx
0x7A2B8D: call    ThrowException??
0x7A2B92: push    1Ah; count
0x7A2B94: push    offset aMalformedTex_0; "malformed texture controls"
0x7A2B99: lea     ecx, [esp+0B8h+details]; this
0x7A2B9D: mov     [esp+0B8h+details.capacity], 0Fh
0x7A2BA5: mov     [esp+0B8h+details.size], 0
0x7A2BAD: mov     byte ptr [esp+0B8h+details.storage], 0
0x7A2BB2: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A2BB7: push    0; appendSystemError
0x7A2BB9: lea     edx, [esp+0B4h+details]
0x7A2BBD: push    edx; details
0x7A2BBE: lea     ecx, [esp+0B8h+var_5C]; this
0x7A2BC2: mov     [esp+0B8h+var_4], 1
0x7A2BCD: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x7A2BD2: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A2BD7: lea     eax, [esp+0B4h+var_5C]
0x7A2BDB: push    eax
0x7A2BDC: call    ThrowException??
0x7A2BE1: mov     ecx, edi; this
0x7A2BE3: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A2BE8: cmp     eax, 3A99h
0x7A2BED: jz      short loc_7A2C3F
0x7A2BEF: push    1Ah; count
0x7A2BF1: push    offset aMalformedTex_0; "malformed texture controls"
0x7A2BF6: lea     ecx, [esp+0B8h+var_78]; this
0x7A2BFA: mov     [esp+0B8h+var_78.capacity], 0Fh
0x7A2C02: mov     [esp+0B8h+var_78.size], ebp
0x7A2C06: mov     byte ptr [esp+0B8h+var_78.storage], 0
0x7A2C0B: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A2C10: push    ebp; appendSystemError
0x7A2C11: lea     ecx, [esp+0B4h+var_78]
0x7A2C15: push    ecx; details
0x7A2C16: lea     ecx, [esp+0B8h+var_34]; this
0x7A2C1D: mov     [esp+0B8h+var_4], 2
0x7A2C28: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x7A2C2D: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A2C32: lea     edx, [esp+0B4h+var_34]
0x7A2C39: push    edx
0x7A2C3A: call    ThrowException??
0x7A2C3F: mov     ecx, [esp+0B0h+var_C]
0x7A2C46: mov     large fs:0, ecx
0x7A2C4D: pop     ecx
0x7A2C4E: pop     edi
0x7A2C4F: pop     esi
0x7A2C50: pop     ebp
0x7A2C51: pop     ebx
0x7A2C52: add     esp, 9Ch
0x7A2C58: retn    4
0x9CC7A0: lea     ecx, [ebp-94h]; this
0x9CC7A6: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CC7AB: lea     ecx, [ebp-94h]; this
0x9CC7B1: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CC7B6: lea     ecx, [ebp-78h]; this
0x9CC7B9: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CC7BE: mov     edx, [esp+arg_4]
0x9CC7C2: lea     eax, [edx-0A0h]
0x9CC7C8: mov     ecx, [edx-0A4h]
0x9CC7CE: xor     ecx, eax
0x9CC7D0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC7D5: mov     eax, offset stru_AF5B7C
0x9CC7DA: jmp     ___CxxFrameHandler3
