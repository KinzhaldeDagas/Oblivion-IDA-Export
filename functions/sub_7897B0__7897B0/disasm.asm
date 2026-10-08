0x7897B0: push    0FFFFFFFFh; 2026-05-24 SpeedTreeOBSE stock post-load pass: stock CSpeedTreeRT::ParseWindInfo candidate for top-level 11000. Accepts nested 11002 only and writes CTreeEngine+0xF0; later 21000/21001 SpeedWind scalars are separate top-level float cases.
0x7897B2: push    offset SEH_7897B0
0x7897B7: mov     eax, large fs:0
0x7897BD: push    eax
0x7897BE: sub     esp, 88h
0x7897C4: push    ebx
0x7897C5: push    esi
0x7897C6: push    edi
0x7897C7: mov     eax, ds:0B30AACh
0x7897CC: xor     eax, esp
0x7897CE: push    eax
0x7897CF: lea     eax, [esp+0A4h+var_C]
0x7897D6: mov     large fs:0, eax
0x7897DC: mov     edi, ecx
0x7897DE: mov     esi, [esp+0A4h+file]
0x7897E5: mov     ecx, esi; this
0x7897E7: call    OB_CTreeFileAccess_ReadDword_010201A0; SpeedTreeOBSE 2026-05-25 stock-tail fidelity pass: top-level 11000 wind requires first inner token 11002 and stores its dword at CTreeEngine+0xF0 before accepting 11001.
0x7897EC: lea     esp, [esp+0]
0x7897F0: cmp     eax, 2AFAh
0x7897F5: jnz     short loc_78983A
0x7897F7: mov     ecx, esi; this
0x7897F9: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7897FE: mov     ecx, [edi]
0x789800: mov     [ecx+0F0h], eax
0x789806: mov     ecx, esi; this
0x789808: call    OB_CTreeFileAccess_IsEOF_010201A0; CTreeFileAccess::EndOfFile-style helper. Returns true when byte-buffer begin is null or cursor offset is at/after end-begin.
0x78980D: test    al, al
0x78980F: jnz     short loc_789881
0x789811: mov     ecx, esi; this
0x789813: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x789818: cmp     eax, 2AF9h
0x78981D: jnz     short loc_7897F0
0x78981F: mov     ecx, [esp+0A4h+var_C]
0x789826: mov     large fs:0, ecx
0x78982D: pop     ecx
0x78982E: pop     edi
0x78982F: pop     esi
0x789830: pop     ebx
0x789831: add     esp, 94h
0x789837: retn    4
0x78983A: push    17h; count
0x78983C: xor     ebx, ebx
0x78983E: push    offset aMalformedNewWi; "malformed new wind info"
0x789843: lea     ecx, [esp+0ACh+details]; this
0x789847: mov     [esp+0ACh+details.capacity], 0Fh
0x78984F: mov     [esp+0ACh+details.size], ebx
0x789853: mov     byte ptr [esp+0ACh+details.storage], bl
0x789857: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x78985C: push    ebx; appendSystemError
0x78985D: lea     eax, [esp+0A8h+details]
0x789861: push    eax; details
0x789862: lea     ecx, [esp+0ACh+var_5C]; this
0x789866: mov     [esp+0ACh+var_4], ebx
0x78986D: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x789872: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x789877: lea     ecx, [esp+0A8h+var_5C]
0x78987B: push    ecx
0x78987C: call    ThrowException??
0x789881: push    33h ; '3'; count
0x789883: xor     ebx, ebx
0x789885: push    offset aPrematureEnd_1; "premature end of file reached parsing n"...
0x78988A: lea     ecx, [esp+0ACh+var_94]; this
0x78988E: mov     [esp+0ACh+var_94.capacity], 0Fh
0x789896: mov     [esp+0ACh+var_94.size], ebx
0x78989A: mov     byte ptr [esp+0ACh+var_94.storage], bl
0x78989E: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7898A3: push    ebx; appendSystemError
0x7898A4: lea     edx, [esp+0A8h+var_94]
0x7898A8: push    edx; details
0x7898A9: lea     ecx, [esp+0ACh+var_34]; this
0x7898AD: mov     [esp+0ACh+var_4], 1
0x7898B8: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x7898BD: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7898C2: lea     eax, [esp+0A8h+var_34]
0x7898C6: push    eax
0x7898C7: call    ThrowException??
0x9CB3E0: lea     ecx, [ebp-78h]; this
0x9CB3E3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB3E8: lea     ecx, [ebp-94h]; this
0x9CB3EE: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB3F3: mov     edx, [esp+arg_4]
0x9CB3F7: lea     eax, [edx-94h]
0x9CB3FD: mov     ecx, [edx-98h]
0x9CB403: xor     ecx, eax
0x9CB405: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB40A: mov     eax, offset stru_AF3A64
0x9CB40F: jmp     ___CxxFrameHandler3
