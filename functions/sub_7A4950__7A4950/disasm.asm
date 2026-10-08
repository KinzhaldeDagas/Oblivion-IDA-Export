0x7A4950: push    0FFFFFFFFh; Oblivion CTreeEngine tree-info parser. Maps the 1002-family tokens to the typed CTreeEngine fields and dispatches nested branch-info parsing.
0x7A4952: push    offset SEH_7A4950
0x7A4957: mov     eax, large fs:0
0x7A495D: push    eax
0x7A495E: sub     esp, 80h
0x7A4964: push    ebx
0x7A4965: push    ebp
0x7A4966: push    esi
0x7A4967: push    edi
0x7A4968: mov     eax, ds:0B30AACh
0x7A496D: xor     eax, esp
0x7A496F: push    eax
0x7A4970: lea     eax, [esp+0A0h+var_C]
0x7A4977: mov     large fs:0, eax
0x7A497D: mov     ebp, ecx
0x7A497F: mov     esi, [esp+0A0h+file]
0x7A4986: mov     ecx, esi; this
0x7A4988: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A498D: xor     ebx, ebx
0x7A498F: nop
0x7A4990: cmp     eax, 7D0h
0x7A4995: jg      loc_7A4A6A
0x7A499B: jz      short loc_7A49B5
0x7A499D: cmp     eax, 3F6h
0x7A49A2: jnz     def_7A4A78; jumptable 007A4A78 default case
0x7A49A8: push    esi
0x7A49A9: mov     ecx, ebp
0x7A49AB: call    OB_CTreeEngine_ParseBranchInfo_010201A0; Oblivion core branch-info parser. Allocates/parses compact branch-level records from core 1014/1016 data only; later 23000 light-seam reduction and 26000 supplemental branch data are absent from this parser/storage path.
0x7A49B0: jmp     loc_7A4AE5
0x7A49B5: sub     esp, 1Ch
0x7A49B8: mov     eax, esp
0x7A49BA: mov     [esp+0BCh+var_8C], esp
0x7A49BE: push    eax; outSmallString
0x7A49BF: mov     ecx, esi; this
0x7A49C1: call    OB_CTreeFileAccess_ReadString_010201A0; CTreeFileAccess::ParseString-style helper. Reads a 4-byte byte count, then consumes that many raw bytes into a small-string object.
0x7A49C6: lea     ecx, [esp+0BCh+source]; this
0x7A49CA: call    OB_stString28_CopyCtorConsumeTemporary_010201A0; Oblivion 28-byte SSO copy constructor for a by-value temporary: initializes destination, copies the source substring, and releases heap-backed source storage. Used after ParseString.
0x7A49CF: push    0FFFFFFFFh; count
0x7A49D1: push    ebx; offset
0x7A49D2: lea     ecx, [esp+0A8h+source]
0x7A49D6: lea     edi, [ebp+24h]
0x7A49D9: push    ecx; source
0x7A49DA: mov     ecx, edi; this
0x7A49DC: mov     [esp+0ACh+var_4], ebx
0x7A49E3: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x7A49E8: cmp     [esp+0A0h+source.capacity], 10h
0x7A49ED: mov     [esp+0A0h+var_4], 0FFFFFFFFh
0x7A49F8: jb      short loc_7A4A07
0x7A49FA: mov     edx, dword ptr [esp+0A0h+source.storage]
0x7A49FE: push    edx
0x7A49FF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A4A04: add     esp, 4
0x7A4A07: lea     eax, [esp+0A0h+result]
0x7A4A0B: push    eax; result
0x7A4A0C: mov     ecx, edi; filename
0x7A4A0E: mov     [esp+0A4h+source.capacity], 0Fh
0x7A4A16: mov     [esp+0A4h+source.size], ebx
0x7A4A1A: mov     byte ptr [esp+0A4h+source.storage], bl
0x7A4A1E: call    OB_IdvNoPath_010201A0; Oblivion IdvNoPath helper: copies the input 28-byte SSO string, scans backward for '/' or '\', and constructs the returned basename string. RT4.1 IdvFilename.h corroborates the algorithm/name.
0x7A4A23: push    0FFFFFFFFh; count
0x7A4A25: push    ebx; offset
0x7A4A26: push    eax; source
0x7A4A27: mov     ecx, edi; this
0x7A4A29: mov     [esp+0ACh+var_4], 1
0x7A4A34: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x7A4A39: cmp     [esp+0A0h+result.capacity], 10h
0x7A4A3E: mov     [esp+0A0h+var_4], 0FFFFFFFFh
0x7A4A49: jb      short loc_7A4A58
0x7A4A4B: mov     ecx, dword ptr [esp+0A0h+result.storage]
0x7A4A4F: push    ecx
0x7A4A50: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A4A55: add     esp, 4
0x7A4A58: mov     [esp+0A0h+result.capacity], 0Fh
0x7A4A60: mov     [esp+0A0h+result.size], ebx
0x7A4A64: mov     byte ptr [esp+0A0h+result.storage], bl
0x7A4A68: jmp     short loc_7A4AE5
0x7A4A6A: add     eax, 0FFFFF82Fh; switch 7 cases
0x7A4A6F: cmp     eax, 6
0x7A4A72: ja      def_7A4A78; jumptable 007A4A78 default case
0x7A4A78: jmp     ds:jpt_7A4A78[eax*4]; switch jump
0x7A4A7F: mov     ecx, esi; jumptable 007A4A78 case 2005
0x7A4A81: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A4A86: push    eax; seed
0x7A4A87: mov     ecx, ebp; this
0x7A4A89: call    OB_CTreeEngine_SetSeed_010201A0; CTreeEngine::SetSeed per local SpeedTreeRT 4.1: 0=random seed, 1=keep existing seed, >1=store provided seed at +0x48.
0x7A4A8E: jmp     short loc_7A4AE5
0x7A4A90: mov     ecx, esi; jumptable 007A4A78 case 2003
0x7A4A92: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A4A97: fstp    dword ptr [ebp+44h]
0x7A4A9A: jmp     short loc_7A4AE5
0x7A4A9C: mov     ecx, esi; jumptable 007A4A78 case 2001
0x7A4A9E: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A4AA3: fstp    dword ptr [ebp+40h]
0x7A4AA6: jmp     short loc_7A4AE5
0x7A4AA8: mov     ecx, esi; jumptable 007A4A78 case 2004
0x7A4AAA: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A4AAF: jmp     short loc_7A4AE5
0x7A4AB1: mov     ecx, [esi]; jumptable 007A4A78 case 2002
0x7A4AB3: lea     edx, [ecx+1]
0x7A4AB6: mov     [esi], edx
0x7A4AB8: mov     edx, [esi+8]
0x7A4ABB: cmp     edx, ebx
0x7A4ABD: jz      short loc_7A4AC8
0x7A4ABF: mov     eax, [esi+0Ch]
0x7A4AC2: sub     eax, edx
0x7A4AC4: cmp     ecx, eax
0x7A4AC6: jb      short loc_7A4AE5
0x7A4AC8: call    __invalid_parameter_noinfo
0x7A4ACD: jmp     short loc_7A4AE5
0x7A4ACF: mov     ecx, esi; jumptable 007A4A78 case 2006
0x7A4AD1: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A4AD6: fstp    dword ptr [ebp+4Ch]
0x7A4AD9: jmp     short loc_7A4AE5
0x7A4ADB: mov     ecx, esi; jumptable 007A4A78 case 2007
0x7A4ADD: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A4AE2: fstp    dword ptr [ebp+50h]
0x7A4AE5: mov     ecx, esi; this
0x7A4AE7: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A4AEC: cmp     eax, 3EBh
0x7A4AF1: jnz     loc_7A4990
0x7A4AF7: mov     ecx, [esp+0A0h+var_C]
0x7A4AFE: mov     large fs:0, ecx
0x7A4B05: pop     ecx
0x7A4B06: pop     edi
0x7A4B07: pop     esi
0x7A4B08: pop     ebp
0x7A4B09: pop     ebx
0x7A4B0A: add     esp, 8Ch
0x7A4B10: retn    4
0x7A4B13: push    22h ; '"'; 2026-05-21 SpeedTreeOBSE core malformed pass: ParseTreeInfo rejects unknown 1002-family tokens as malformed general tree information; later-family compatibility must not reinterpret this as a supplemental tail.
0x7A4B15: push    offset aMalformedGener; "malformed general tree information"
0x7A4B1A: lea     ecx, [esp+0A8h+details]; this
0x7A4B1E: mov     [esp+0A8h+details.capacity], 0Fh
0x7A4B26: mov     [esp+0A8h+details.size], ebx
0x7A4B2A: mov     byte ptr [esp+0A8h+details.storage], bl
0x7A4B2E: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A4B33: push    ebx; appendSystemError
0x7A4B34: lea     eax, [esp+0A4h+details]
0x7A4B38: push    eax; details
0x7A4B39: lea     ecx, [esp+0A8h+var_34]; this
0x7A4B3D: mov     [esp+0A8h+var_4], 2
0x7A4B48: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x7A4B4D: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A4B52: lea     ecx, [esp+0A4h+var_34]
0x7A4B56: push    ecx
0x7A4B57: call    ThrowException??
0x9CCAC0: lea     ecx, [ebp-88h]; this
0x9CCAC6: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCACB: lea     ecx, [ebp-6Ch]; this
0x9CCACE: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCAD3: lea     ecx, [ebp-50h]; this
0x9CCAD6: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCADB: mov     edx, [esp+arg_4]
0x9CCADF: lea     eax, [edx-90h]
0x9CCAE5: mov     ecx, [edx-94h]
0x9CCAEB: xor     ecx, eax
0x9CCAED: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCAF2: mov     eax, offset stru_AF5E7C
0x9CCAF7: jmp     ___CxxFrameHandler3
