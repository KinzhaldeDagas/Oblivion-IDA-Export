0x7A84A0: push    0FFFFFFFFh; Recovered unrecognized Oblivion function boundary. SIdvWindInfo::Parse reads local tokens 5000..5006 until EndWindInfo: direction, branch oscillation, branch factors, and enabled are consumed/discarded; leafOscillation, leafFactors, and strength are stored. The 4.1 source/Fallout supply the historical name only after the local switch and field stores were observed.
0x7A84A2: push    offset SEH_7A84A0
0x7A84A7: mov     eax, large fs:0
0x7A84AD: push    eax
0x7A84AE: sub     esp, 80h
0x7A84B4: push    esi
0x7A84B5: push    edi
0x7A84B6: mov     eax, ds:0B30AACh
0x7A84BB: xor     eax, esp
0x7A84BD: push    eax
0x7A84BE: lea     eax, [esp+98h+var_C]
0x7A84C5: mov     large fs:0, eax
0x7A84CB: mov     edi, ecx
0x7A84CD: mov     esi, [esp+98h+file]
0x7A84D4: mov     ecx, esi; this
0x7A84D6: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A84DB: jmp     short loc_7A84E0
0x7A84E0: add     eax, 0FFFFEC78h; switch 7 cases
0x7A84E5: cmp     eax, 6
0x7A84E8: ja      def_7A84EE; jumptable 007A84EE default case
0x7A84EE: jmp     ds:jpt_7A84EE[eax*4]; switch jump
0x7A84F5: lea     eax, [esp+98h+outVec3]; jumptable 007A84EE case 5000
0x7A84F9: push    eax; outVec3
0x7A84FA: mov     ecx, esi; this
0x7A84FC: call    OB_CTreeFileAccess_ReadVec3_010201A0; CTreeFileAccess vector3 float reader. Reads three 4-byte floats into caller buffer.
0x7A8501: jmp     loc_7A8587
0x7A8506: lea     ecx, [esp+98h+var_80]; jumptable 007A84EE case 5001
0x7A850A: push    ecx; outVec3
0x7A850B: mov     ecx, esi; this
0x7A850D: call    OB_CTreeFileAccess_ReadVec3_010201A0; CTreeFileAccess vector3 float reader. Reads three 4-byte floats into caller buffer.
0x7A8512: jmp     short loc_7A8587
0x7A8514: lea     edx, [esp+98h+var_74]; jumptable 007A84EE case 5002
0x7A8518: push    edx; outVec3
0x7A8519: mov     ecx, esi; this
0x7A851B: call    OB_CTreeFileAccess_ReadVec3_010201A0; CTreeFileAccess vector3 float reader. Reads three 4-byte floats into caller buffer.
0x7A8520: mov     ecx, [eax]
0x7A8522: mov     [edi+0Ch], ecx
0x7A8525: mov     edx, [eax+4]
0x7A8528: mov     [edi+10h], edx
0x7A852B: mov     eax, [eax+8]
0x7A852E: mov     [edi+14h], eax
0x7A8531: jmp     short loc_7A8587
0x7A8533: lea     ecx, [esp+98h+var_68]; jumptable 007A84EE case 5003
0x7A8537: push    ecx; outVec3
0x7A8538: mov     ecx, esi; this
0x7A853A: call    OB_CTreeFileAccess_ReadVec3_010201A0; CTreeFileAccess vector3 float reader. Reads three 4-byte floats into caller buffer.
0x7A853F: jmp     short loc_7A8587
0x7A8541: lea     edx, [esp+98h+var_5C]; jumptable 007A84EE case 5004
0x7A8545: push    edx; outVec3
0x7A8546: mov     ecx, esi; this
0x7A8548: call    OB_CTreeFileAccess_ReadVec3_010201A0; CTreeFileAccess vector3 float reader. Reads three 4-byte floats into caller buffer.
0x7A854D: mov     ecx, [eax]
0x7A854F: mov     [edi], ecx
0x7A8551: mov     edx, [eax+4]
0x7A8554: mov     [edi+4], edx
0x7A8557: mov     eax, [eax+8]
0x7A855A: mov     [edi+8], eax
0x7A855D: jmp     short loc_7A8587
0x7A855F: mov     ecx, esi; jumptable 007A84EE case 5005
0x7A8561: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A8566: fstp    dword ptr [edi+18h]
0x7A8569: jmp     short loc_7A8587
0x7A856B: mov     ecx, [esi]; jumptable 007A84EE case 5006
0x7A856D: lea     edx, [ecx+1]
0x7A8570: mov     [esi], edx
0x7A8572: mov     edx, [esi+8]
0x7A8575: test    edx, edx
0x7A8577: jz      short loc_7A8582
0x7A8579: mov     eax, [esi+0Ch]
0x7A857C: sub     eax, edx
0x7A857E: cmp     ecx, eax
0x7A8580: jb      short loc_7A8587
0x7A8582: call    __invalid_parameter_noinfo
0x7A8587: mov     ecx, esi; this
0x7A8589: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A858E: cmp     eax, 3F4h
0x7A8593: jnz     loc_7A84E0
0x7A8599: mov     ecx, [esp+98h+var_C]
0x7A85A0: mov     large fs:0, ecx
0x7A85A7: pop     ecx
0x7A85A8: pop     edi
0x7A85A9: pop     esi
0x7A85AA: add     esp, 8Ch
0x7A85B0: retn    4
0x7A85B3: push    22h ; '"'; jumptable 007A84EE default case
0x7A85B5: push    offset aMalformedGen_2; "malformed general wind information"
0x7A85BA: lea     ecx, [esp+0A0h+details]; this
0x7A85BE: mov     [esp+0A0h+details.capacity], 0Fh
0x7A85C6: mov     [esp+0A0h+details.size], 0
0x7A85CE: mov     byte ptr [esp+0A0h+details.storage], 0
0x7A85D3: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A85D8: push    0; appendSystemError
0x7A85DA: lea     eax, [esp+9Ch+details]
0x7A85DE: push    eax; details
0x7A85DF: lea     ecx, [esp+0A0h+var_34]; this
0x7A85E3: mov     [esp+0A0h+var_4], 0
0x7A85EE: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x7A85F3: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A85F8: lea     ecx, [esp+9Ch+var_34]
0x7A85FC: push    ecx
0x7A85FD: call    ThrowException??
0x9CCE90: lea     ecx, [ebp-50h]; this
0x9CCE93: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCE98: mov     edx, [esp+arg_4]
0x9CCE9C: lea     eax, [edx-88h]
0x9CCEA2: mov     ecx, [edx-8Ch]
0x9CCEA8: xor     ecx, eax
0x9CCEAA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCEAF: mov     eax, offset stru_AF6270
0x9CCEB4: jmp     ___CxxFrameHandler3
