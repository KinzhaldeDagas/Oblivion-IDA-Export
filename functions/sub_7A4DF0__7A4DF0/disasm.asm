0x7A4DF0: push    0FFFFFFFFh; 2026-05-21 SpeedTreeOBSE billboard-leaf core/tail load pass: Oblivion CTreeEngine::Parse consumes core 1000..1001, optionally consumes post-core 7000 leaf clusters, and those clusters may include stock 7004 billboard-leaf records parsed by 0x7A8250. Full-file compatibility fixtures now cover known-family supplemental tails after empty 7000 clusters and after stock 7004 payloads; the compatibility layer must sanitize only after that post-core cursor point.
0x7A4DF2: push    offset SEH_7A4DF0
0x7A4DF7: mov     eax, large fs:0
0x7A4DFD: push    eax
0x7A4DFE: sub     esp, 0A8h
0x7A4E04: mov     eax, ds:0B30AACh
0x7A4E09: xor     eax, esp
0x7A4E0B: mov     [esp+0B4h+var_10], eax
0x7A4E12: push    ebx
0x7A4E13: push    ebp
0x7A4E14: push    esi
0x7A4E15: push    edi
0x7A4E16: mov     eax, ds:0B30AACh
0x7A4E1B: xor     eax, esp
0x7A4E1D: push    eax; file
0x7A4E1E: lea     eax, [esp+0C8h+var_C]
0x7A4E25: mov     large fs:0, eax
0x7A4E2B: mov     esi, [esp+0C8h+file]
0x7A4E32: mov     ebp, ecx
0x7A4E34: mov     ecx, esi; this
0x7A4E36: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A4E3B: cmp     eax, 3E8h
0x7A4E40: jz      short loc_7A4E8A
0x7A4E42: push    18h; count
0x7A4E44: xor     esi, esi
0x7A4E46: push    offset aMissingBegin_f; "missing begin_file token"
0x7A4E4B: lea     ecx, [esp+0D0h+details]; this
0x7A4E4F: mov     [esp+0D0h+details.capacity], 0Fh
0x7A4E57: mov     [esp+0D0h+details.size], esi
0x7A4E5B: mov     byte ptr [esp+0D0h+details.storage], 0
0x7A4E60: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A4E65: push    esi; appendSystemError
0x7A4E66: lea     eax, [esp+0CCh+details]
0x7A4E6A: push    eax; details
0x7A4E6B: lea     ecx, [esp+0D0h+var_98]; this
0x7A4E6F: mov     [esp+0D0h+var_4], esi
0x7A4E76: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x7A4E7B: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A4E80: lea     ecx, [esp+0CCh+var_98]
0x7A4E84: push    ecx
0x7A4E85: call    ThrowException??
0x7A4E8A: lea     edx, [esp+0C8h+outSmallString]; scratch
0x7A4E91: push    edx; outSmallString
0x7A4E92: mov     ecx, esi; this
0x7A4E94: call    OB_CTreeFileAccess_ReadString_010201A0; CTreeFileAccess::ParseString-style helper. Reads a 4-byte byte count, then consumes that many raw bytes into a small-string object.
0x7A4E99: mov     edx, ds:0B2BA10h
0x7A4E9F: mov     eax, edx
0x7A4EA1: mov     [esp+0C8h+var_4], 1
0x7A4EAC: mov     [esp+0C8h+details.capacity], 0Fh
0x7A4EB4: mov     [esp+0C8h+details.size], 0
0x7A4EBC: mov     byte ptr [esp+0C8h+details.storage], 0
0x7A4EC1: lea     edi, [eax+1]
0x7A4EC4: mov     cl, [eax]
0x7A4EC6: add     eax, 1
0x7A4EC9: test    cl, cl
0x7A4ECB: jnz     short loc_7A4EC4
0x7A4ECD: sub     eax, edi
0x7A4ECF: push    eax; count
0x7A4ED0: push    edx; source
0x7A4ED1: lea     ecx, [esp+0D0h+details]; this
0x7A4ED5: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A4EDA: mov     eax, dword ptr [esp+0C8h+details.storage]
0x7A4EDE: mov     edi, 10h
0x7A4EE3: cmp     [esp+0C8h+details.capacity], edi
0x7A4EE7: mov     byte ptr [esp+0C8h+var_4], 2
0x7A4EEF: jnb     short loc_7A4EF5
0x7A4EF1: lea     eax, [esp+0C8h+details.storage]
0x7A4EF5: mov     ecx, [esp+0C8h+details.size]
0x7A4EF9: mov     edx, [esp+0C8h+var_18]
0x7A4F00: push    ecx
0x7A4F01: push    eax
0x7A4F02: push    edx
0x7A4F03: push    0
0x7A4F05: lea     ecx, [esp+0D8h+outSmallString]
0x7A4F0C: call    sub_6F5DE0
0x7A4F11: test    eax, eax
0x7A4F13: setnz   bl
0x7A4F16: cmp     [esp+0C8h+details.capacity], edi
0x7A4F1A: mov     byte ptr [esp+0C8h+var_4], 1
0x7A4F22: jb      short loc_7A4F31
0x7A4F24: mov     eax, dword ptr [esp+0C8h+details.storage]
0x7A4F28: push    eax
0x7A4F29: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A4F2E: add     esp, 4
0x7A4F31: test    bl, bl
0x7A4F33: jz      short loc_7A4F81
0x7A4F35: push    1Eh; count
0x7A4F37: push    offset aNotAValidSpeed; "not a valid SpeedTree SPT file"
0x7A4F3C: lea     ecx, [esp+0D0h+details]; this
0x7A4F40: mov     [esp+0D0h+details.capacity], 0Fh
0x7A4F48: mov     [esp+0D0h+details.size], 0
0x7A4F50: mov     byte ptr [esp+0D0h+details.storage], 0
0x7A4F55: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A4F5A: push    0; appendSystemError
0x7A4F5C: lea     ecx, [esp+0CCh+details]
0x7A4F60: push    ecx; details
0x7A4F61: lea     ecx, [esp+0D0h+var_98]; this
0x7A4F65: mov     byte ptr [esp+0D0h+var_4], 3
0x7A4F6D: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x7A4F72: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A4F77: lea     edx, [esp+0CCh+var_98]
0x7A4F7B: push    edx
0x7A4F7C: call    ThrowException??
0x7A4F81: mov     ecx, esi; this
0x7A4F83: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A4F88: sub     eax, 3EAh
0x7A4F8D: jz      short loc_7A4FB9
0x7A4F8F: sub     eax, 2
0x7A4F92: jz      short loc_7A4FAB
0x7A4F94: sub     eax, 7
0x7A4F97: jnz     loc_7A5074
0x7A4F9D: push    esi; file
0x7A4F9E: lea     ecx, [ebp+0F4h]; this
0x7A4FA4: call    OB_SIdvWindInfo_Parse_010201A0; Recovered unrecognized Oblivion function boundary. SIdvWindInfo::Parse reads local tokens 5000..5006 until EndWindInfo: direction, branch oscillation, branch factors, and enabled are consumed/discarded; leafOscillation, leafFactors, and strength are stored. The 4.1 source/Fallout supply the historical name only after the local switch and field stores were observed.
0x7A4FA9: jmp     short loc_7A4FC1
0x7A4FAB: push    esi; file
0x7A4FAC: lea     ecx, [ebp+84h]; this
0x7A4FB2: call    OB_SIdvLeafInfo_Parse_010201A0; Oblivion SIdvLeafInfo::Parse: token 1009 clears/resizes the compact 0x54 leaf-texture vector, parses tokens 4000-4007 into a temporary, and deep-assigns each indexed slot. Oblivion is authoritative; later RT mesh fields are absent.
0x7A4FB7: jmp     short loc_7A4FC1
0x7A4FB9: push    esi; file
0x7A4FBA: mov     ecx, ebp; this
0x7A4FBC: call    OB_CTreeEngine_ParseTreeInfo_010201A0; Oblivion CTreeEngine tree-info parser. Maps the 1002-family tokens to the typed CTreeEngine fields and dispatches nested branch-info parsing.
0x7A4FC1: mov     ecx, esi; this
0x7A4FC3: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A4FC8: cmp     eax, 3E9h
0x7A4FCD: jnz     short loc_7A4F88
0x7A4FCF: mov     ecx, [esi+8]; OBLIVION AUTHORITY 2026-08-27: Parsed/generated gate is optional top-level post-core token 7000. Inner token 7006 is only a BillboardLeaf packedColor field and does not control this gate. Input-corpus corroboration: all 149 installed SPTs have immediate post-1001 token 8000, not 7000; therefore their parsedLeafLodFlag remains zero and Compute builds generated explicit leaf LODs.
0x7A4FD2: test    ecx, ecx
0x7A4FD4: jz      short loc_7A4FFC
0x7A4FD6: mov     eax, [esi+0Ch]
0x7A4FD9: sub     eax, ecx
0x7A4FDB: cmp     [esi], eax
0x7A4FDD: jnb     short loc_7A4FFC
0x7A4FDF: mov     ecx, esi; this
0x7A4FE1: call    OB_CTreeFileAccess_PeekToken_010201A0; Oblivion CTreeFileAccess::PeekToken. Bounds-checks byteBufferBegin/cursorOffset/byteBufferEnd, returns the little-endian dword at the current cursor without advancing it. CTreeEngine::Parse uses the result to detect optional token 0x1B58 before consuming it; RT4.1 FileAccess.cpp corroborates PeekToken after this behavior was established.
0x7A4FE6: cmp     eax, 1B58h
0x7A4FEB: jnz     short loc_7A4FFC
0x7A4FED: mov     ecx, esi; this
0x7A4FEF: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A4FF4: push    esi; file
0x7A4FF5: mov     ecx, ebp; this
0x7A4FF7: call    OB_CTreeEngine_ParseLeafCluster_010201A0; OBLIVION AUTHORITY 2026-08-27: Parses optional top-level post-core token 7000 leaf cluster. Allocates leafLodLevelCount vectors, accepts token 7004 BillboardLeaf records inside 7002 LOD blocks, and sets parsedLeafLodFlag=1 even for an empty cluster. Inner token 7006 is only a BillboardLeaf packedColor field.
0x7A4FFC: lea     edx, [ebp+24h]
0x7A4FFF: push    edx; filename
0x7A5000: mov     ecx, ebp; this
0x7A5002: call    OB_CTreeEngine_SetBranchTexture_010201A0; Parsed branch-texture st_string is committed through OB_CTreeEngine_SetBranchTexture. Identity derives from the Oblivion call/data flow; SpeedTreeRT 4.1 is corroborative only.
0x7A5007: lea     ecx, [ebp+94h]; this
0x7A500D: push    ecx; source
0x7A500E: call    OB_stVector_SIdvLeafTexture_CopyAssign_010201A0; Leaf-texture vector deep copy assignment: clear on empty source, reuse initialized/capacity ranges when possible, otherwise destroy/free and allocate exact source size.
0x7A5013: fld     dword ptr ds:0A30634h
0x7A5019: fcomp   dword ptr [ebp+18h]
0x7A501C: fnstsw  ax
0x7A501E: test    ah, 5
0x7A5021: jp      short loc_7A502F
0x7A5023: fld     dword ptr [ebp+18h]
0x7A5026: fstp    dword ptr [ebp+4Ch]
0x7A5029: fld     dword ptr [ebp+1Ch]
0x7A502C: fstp    dword ptr [ebp+50h]
0x7A502F: cmp     [esp+0C8h+var_14], edi
0x7A5036: jb      short loc_7A5048
0x7A5038: mov     eax, [esp+0C8h+var_28]
0x7A503F: push    eax
0x7A5040: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A5045: add     esp, 4
0x7A5048: mov     al, 1
0x7A504A: mov     ecx, [esp+0C8h+var_C]
0x7A5051: mov     large fs:0, ecx
0x7A5058: pop     ecx
0x7A5059: pop     edi
0x7A505A: pop     esi
0x7A505B: pop     ebp
0x7A505C: pop     ebx
0x7A505D: mov     ecx, [esp+0B4h+var_10]
0x7A5064: xor     ecx, esp
0x7A5066: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7A506B: add     esp, 0B4h
0x7A5071: retn    4
0x7A5074: push    offset aMalformedSpeed; "malformed SpeedTree SPT file"
0x7A5079: lea     ecx, [esp+0CCh+var_70]
0x7A507D: call    sub_414750; 2026-05-21 SpeedTreeOBSE core malformed pass: CTreeEngine::Parse rejects unknown core tokens before 1001 with the malformed SpeedTree SPT path. Compatibility core/tail tracing must fail here before any known-family tail sanitizing.
0x7A5082: push    0; appendSystemError
0x7A5084: lea     eax, [esp+0CCh+var_70]
0x7A5088: push    eax; details
0x7A5089: lea     ecx, [esp+0D0h+var_54]; this
0x7A508D: mov     byte ptr [esp+0D0h+var_4], 4
0x7A5095: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x7A509A: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A509F: lea     ecx, [esp+0CCh+var_54]
0x7A50A3: push    ecx
0x7A50A4: call    ThrowException??
0x9CCB00: lea     ecx, [ebp-0B4h]; this
0x9CCB06: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCB0B: lea     ecx, [ebp-2Ch]; this
0x9CCB0E: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCB13: lea     ecx, [ebp-0B4h]; this
0x9CCB19: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCB1E: lea     ecx, [ebp-0B4h]; this
0x9CCB24: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCB29: lea     ecx, [ebp-70h]; this
0x9CCB2C: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCB31: mov     edx, [esp+arg_4]
0x9CCB35: lea     eax, [edx-0B8h]
0x9CCB3B: mov     ecx, [edx-0BCh]
0x9CCB41: xor     ecx, eax
0x9CCB43: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCB48: add     eax, 10h
0x9CCB4B: mov     ecx, [edx-4]
0x9CCB4E: xor     ecx, eax
0x9CCB50: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCB55: mov     eax, offset stru_AF5EA0
0x9CCB5A: jmp     ___CxxFrameHandler3
