0x79F1E0: push    0FFFFFFFFh; Oblivion-authoritative stock CFrondEngine parser for token family 13000. Token 13005 reads one counted string through 0x7909D0 and constructs/replaces the +0x30 Bezier spline/profile object; the payload is not a nested binary block.
0x79F1E2: push    offset SEH_79F1E0
0x79F1E7: mov     eax, large fs:0
0x79F1ED: push    eax
0x79F1EE: sub     esp, 0FCh
0x79F1F4: mov     eax, ds:0B30AACh
0x79F1F9: xor     eax, esp
0x79F1FB: mov     [esp+108h+var_10], eax
0x79F202: push    ebx
0x79F203: push    ebp
0x79F204: push    esi
0x79F205: push    edi
0x79F206: mov     eax, ds:0B30AACh
0x79F20B: xor     eax, esp
0x79F20D: push    eax
0x79F20E: lea     eax, [esp+11Ch+var_C]
0x79F215: mov     large fs:0, eax
0x79F21B: mov     esi, [esp+11Ch+fileAccess]
0x79F222: mov     edi, ecx
0x79F224: mov     ecx, esi; this
0x79F226: mov     [esp+11Ch+var_108], edi
0x79F22A: call    OB_CTreeFileAccess_ReadDword_010201A0; SpeedTreeOBSE 2026-05-25 stock-tail fidelity pass: top-level 13000 frond parser reads a first recognized frond token before accepting 13001; nested 14000 texture blocks likewise require recognized payload before 14001.
0x79F22F: xor     ebx, ebx
0x79F231: mov     ebp, 10h
0x79F236: jmp     short loc_79F240
0x79F240: cmp     eax, 36B7h
0x79F245: jg      loc_79F555
0x79F24B: jz      loc_79F549
0x79F251: lea     ecx, [eax-32CAh]; switch 12 cases
0x79F257: cmp     ecx, 0Bh
0x79F25A: ja      def_79F260; jumptable 0079F260 default case
0x79F260: jmp     ds:jpt_79F260[ecx*4]; switch jump
0x79F267: mov     ecx, esi; jumptable 0079F260 case 13002
0x79F269: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x79F26E: mov     [edi+38h], eax
0x79F271: jmp     loc_79F50D
0x79F276: mov     ecx, esi; jumptable 0079F260 case 13003
0x79F278: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x79F27D: mov     [edi+28h], eax
0x79F280: jmp     loc_79F50D
0x79F285: mov     ecx, esi; jumptable 0079F260 case 13004
0x79F287: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x79F28C: mov     [edi+2Ch], eax
0x79F28F: jmp     loc_79F50D
0x79F294: mov     ecx, esi; jumptable 0079F260 case 13005
0x79F296: call    OB_CTreeFileAccess_ParseSplineProfileObject_010201A0; Reads one stock counted string from CTreeFileAccess, allocates a 0x5C stBezierSpline/profile object, and constructs it from the text. Used by frond token 13005 and branch parameter/profile tokens.
0x79F29B: push    eax; profile
0x79F29C: mov     ecx, edi; this
0x79F29E: call    OB_CFrondEngine_SetProfile_010201A0; CFrondEngine profile setter. Replaces CFrondEngine+0x30, destructing/freeing the old 0x5C profile object when the pointer differs.
0x79F2A3: jmp     loc_79F50D
0x79F2A8: mov     ecx, esi; jumptable 0079F260 case 13006
0x79F2AA: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x79F2AF: mov     [edi+34h], eax
0x79F2B2: jmp     loc_79F50D
0x79F2B7: mov     ecx, esi; jumptable 0079F260 case 13007
0x79F2B9: call    OB_CTreeFileAccess_ParseBool_010201A0; Oblivion CTreeFileAccess::ParseBool: consumes one byte at cursorOffset, bounds-checks against the owned buffer, advances the cursor, and returns byte != 0. RT4.1 FileAccess.h corroborates the method name.
0x79F2BE: mov     [edi+3Ch], al
0x79F2C1: jmp     loc_79F50D
0x79F2C6: mov     ecx, esi; jumptable 0079F260 case 13009
0x79F2C8: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x79F2CD: mov     [edi+50h], eax
0x79F2D0: jmp     loc_79F50D
0x79F2D5: mov     ecx, esi; jumptable 0079F260 case 13010
0x79F2D7: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x79F2DC: fstp    dword ptr [edi+54h]
0x79F2DF: jmp     loc_79F50D
0x79F2E4: mov     ecx, esi; jumptable 0079F260 case 13011
0x79F2E6: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x79F2EB: fstp    dword ptr [edi+58h]
0x79F2EE: jmp     loc_79F50D
0x79F2F3: mov     ecx, esi; jumptable 0079F260 case 13012
0x79F2F5: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x79F2FA: fstp    dword ptr [edi+5Ch]
0x79F2FD: jmp     loc_79F50D
0x79F302: mov     ecx, esi; jumptable 0079F260 case 13013
0x79F304: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x79F309: fstp    dword ptr [edi+60h]
0x79F30C: jmp     loc_79F50D
0x79F311: lea     ecx, [edi+40h]; jumptable 0079F260 case 13008
0x79F314: call    OB_stVector_SFrondTexture_Clear_010201A0; Token 13008 clears the existing CFrondEngine+0x40 SFrondTexture vector before reading the declared texture count.
0x79F319: mov     ecx, esi; this
0x79F31B: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x79F320: xor     edi, edi
0x79F322: cmp     eax, ebx
0x79F324: mov     [esp+11Ch+var_104], eax
0x79F328: jle     loc_79F509
0x79F32E: mov     edi, edi
0x79F330: fld     dword ptr ds:0A3D65Ch; Oblivion constructs the temporary SFrondTexture with defaults aspectRatio=0.5, sizeScale=1.0, minAngleOffset=0.0, maxAngleOffset=0.0; RT 4.1 FrondEngine.h independently corroborates these defaults.
0x79F336: mov     [esp+11Ch+textureRecord.filename.capacity], 0Fh; Initializes the embedded OB_stString28 filename: capacity 15, size 0, inline byte 0. The executable fixes the 28-byte string layout; RT 4.1 only corroborates the member identity.
0x79F341: fstp    [esp+11Ch+textureRecord.aspectRatio]
0x79F348: mov     [esp+11Ch+textureRecord.filename.size], ebx
0x79F34F: fld1
0x79F351: mov     byte ptr [esp+11Ch+textureRecord.filename.storage], bl
0x79F358: fstp    [esp+11Ch+textureRecord.sizeScale]
0x79F35F: fldz
0x79F361: fst     [esp+11Ch+textureRecord.minAngleOffset]
0x79F368: fstp    [esp+11Ch+textureRecord.maxAngleOffset]
0x79F36F: mov     ecx, esi; this
0x79F371: mov     [esp+11Ch+var_4], ebx
0x79F378: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x79F37D: mov     ecx, esi; this
0x79F37F: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x79F384: jmp     short loc_79F390
0x79F390: lea     ecx, [eax-36B2h]; switch 5 cases
0x79F396: cmp     ecx, 4
0x79F399: ja      def_79F39F; Malformed nested frond-texture token edge. Hex-Rays renders this shared exception path as JUMPOUT; it is not an unresolved vector-control-flow edge and does not alter the normal token 14001 termination path.
0x79F39F: jmp     ds:jpt_79F39F[ecx*4]; Nested frond-texture tokens: 14002 filename, 14003 aspect ratio, 14004 size scale, 14005 minimum angle offset, 14006 maximum angle offset; 14001 ends the record.
0x79F3A6: sub     esp, 1Ch; jumptable 0079F39F case 14002
0x79F3A9: mov     eax, esp
0x79F3AB: mov     [esp+138h+var_100], esp
0x79F3AF: push    eax; outSmallString
0x79F3B0: mov     ecx, esi; this
0x79F3B2: call    OB_CTreeFileAccess_ReadString_010201A0; CTreeFileAccess::ParseString-style helper. Reads a 4-byte byte count, then consumes that many raw bytes into a small-string object.
0x79F3B7: lea     ecx, [esp+138h+source]; this
0x79F3BB: call    OB_stString28_CopyCtorConsumeTemporary_010201A0; Oblivion 28-byte SSO copy constructor for a by-value temporary: initializes destination, copies the source substring, and releases heap-backed source storage. Used after ParseString.
0x79F3C0: push    0FFFFFFFFh; count
0x79F3C2: push    ebx; offset
0x79F3C3: lea     ecx, [esp+124h+source]
0x79F3C7: push    ecx; source
0x79F3C8: lea     ecx, [esp+128h+textureRecord]; this
0x79F3CF: mov     byte ptr [esp+128h+var_4], 1
0x79F3D7: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x79F3DC: cmp     [esp+11Ch+source.capacity], ebp
0x79F3E0: mov     byte ptr [esp+11Ch+var_4], bl
0x79F3E7: jb      short loc_79F3F6
0x79F3E9: mov     edx, dword ptr [esp+11Ch+source.storage]
0x79F3ED: push    edx
0x79F3EE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x79F3F3: add     esp, 4
0x79F3F6: lea     eax, [esp+11Ch+var_E0]
0x79F3FA: push    eax; result
0x79F3FB: lea     ecx, [esp+120h+textureRecord]; filename
0x79F402: mov     [esp+120h+source.capacity], 0Fh
0x79F40A: mov     [esp+120h+source.size], ebx
0x79F40E: mov     byte ptr [esp+120h+source.storage], bl
0x79F412: call    OB_IdvNoPath_010201A0; Oblivion IdvNoPath helper: copies the input 28-byte SSO string, scans backward for '/' or '\', and constructs the returned basename string. RT4.1 IdvFilename.h corroborates the algorithm/name.
0x79F417: push    0FFFFFFFFh; count
0x79F419: push    ebx; offset
0x79F41A: push    eax; source
0x79F41B: lea     ecx, [esp+128h+textureRecord]; this
0x79F422: mov     byte ptr [esp+128h+var_4], 2
0x79F42A: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x79F42F: cmp     [esp+11Ch+var_E0.capacity], ebp
0x79F433: mov     byte ptr [esp+11Ch+var_4], bl
0x79F43A: jb      short loc_79F449
0x79F43C: mov     ecx, dword ptr [esp+11Ch+var_E0.storage]
0x79F440: push    ecx
0x79F441: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x79F446: add     esp, 4
0x79F449: mov     [esp+11Ch+var_E0.capacity], 0Fh
0x79F451: mov     [esp+11Ch+var_E0.size], ebx
0x79F455: mov     byte ptr [esp+11Ch+var_E0.storage], bl
0x79F459: jmp     short loc_79F499
0x79F45B: mov     ecx, esi; jumptable 0079F39F case 14003
0x79F45D: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x79F462: fstp    [esp+11Ch+textureRecord.aspectRatio]
0x79F469: jmp     short loc_79F499
0x79F46B: mov     ecx, esi; jumptable 0079F39F case 14004
0x79F46D: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x79F472: fstp    [esp+11Ch+textureRecord.sizeScale]
0x79F479: jmp     short loc_79F499
0x79F47B: mov     ecx, esi; jumptable 0079F39F case 14005
0x79F47D: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x79F482: fstp    [esp+11Ch+textureRecord.minAngleOffset]
0x79F489: jmp     short loc_79F499
0x79F48B: mov     ecx, esi; jumptable 0079F39F case 14006
0x79F48D: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x79F492: fstp    [esp+11Ch+textureRecord.maxAngleOffset]
0x79F499: mov     ecx, esi; this
0x79F49B: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x79F4A0: cmp     eax, 36B1h
0x79F4A5: jnz     loc_79F390
0x79F4AB: mov     ecx, [esp+11Ch+var_108]
0x79F4AF: lea     edx, [esp+11Ch+textureRecord]
0x79F4B6: push    edx; value
0x79F4B7: add     ecx, 40h ; '@'; this
0x79F4BA: call    OB_stVector_SFrondTexture_PushBack_010201A0; Appends the completed temporary SFrondTexture to CFrondEngine+0x40 via the decoded deep-copying vector push_back specialization.
0x79F4BF: cmp     [esp+11Ch+textureRecord.filename.capacity], ebp
0x79F4C6: mov     [esp+11Ch+var_4], 0FFFFFFFFh
0x79F4D1: jb      short loc_79F4E3
0x79F4D3: mov     eax, dword ptr [esp+11Ch+textureRecord.filename.storage]
0x79F4DA: push    eax
0x79F4DB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x79F4E0: add     esp, 4
0x79F4E3: add     edi, 1
0x79F4E6: cmp     edi, [esp+11Ch+var_104]
0x79F4EA: mov     [esp+11Ch+textureRecord.filename.capacity], 0Fh
0x79F4F5: mov     [esp+11Ch+textureRecord.filename.size], ebx
0x79F4FC: mov     byte ptr [esp+11Ch+textureRecord.filename.storage], bl
0x79F503: jl      loc_79F330
0x79F509: mov     edi, [esp+11Ch+var_108]
0x79F50D: mov     ecx, esi; this
0x79F50F: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x79F514: cmp     eax, 32C9h
0x79F519: jnz     loc_79F240
0x79F51F: mov     ecx, [esp+11Ch+var_C]
0x79F526: mov     large fs:0, ecx
0x79F52D: pop     ecx
0x79F52E: pop     edi
0x79F52F: pop     esi
0x79F530: pop     ebp
0x79F531: pop     ebx
0x79F532: mov     ecx, [esp+108h+var_10]
0x79F539: xor     ecx, esp
0x79F53B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x79F540: add     esp, 108h
0x79F546: retn    4
0x79F549: mov     ecx, esi; this
0x79F54B: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x79F550: mov     [edi+64h], eax
0x79F553: jmp     short loc_79F50D
0x79F555: cmp     eax, 36B8h
0x79F55A: jnz     short def_79F260; jumptable 0079F260 default case
0x79F55C: mov     ecx, esi; this
0x79F55E: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x79F563: mov     [edi+68h], eax
0x79F566: jmp     short loc_79F50D
0x79F59F: push    eax; jumptable 0079F260 default case
0x79F5A0: push    offset aMalformedFro_0; "malformed frond info (token %d)"
0x79F5A5: lea     esi, [esp+124h+result]; result
0x79F5AC: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x79F5B1: add     esp, 8
0x79F5B4: push    ebx; appendSystemError
0x79F5B5: push    eax; details
0x79F5B6: lea     ecx, [esp+124h+var_9C]; this
0x79F5BD: mov     [esp+124h+var_4], 4
0x79F5C8: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x79F5CD: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x79F5D2: lea     edx, [esp+120h+var_9C]
0x79F5D9: push    edx
0x79F5DA: call    ThrowException??
0x9CC4A0: lea     ecx, [ebp-3Ch]; this
0x9CC4A3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CC4A8: lea     ecx, [ebp-0FCh]; this
0x9CC4AE: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CC4B3: lea     ecx, [ebp-0E0h]; this
0x9CC4B9: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CC4BE: lea     ecx, [ebp-74h]; this
0x9CC4C1: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CC4C6: lea     ecx, [ebp-58h]; this
0x9CC4C9: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CC4CE: mov     edx, [esp+arg_4]
0x9CC4D2: lea     eax, [edx-10Ch]
0x9CC4D8: mov     ecx, [edx-110h]
0x9CC4DE: xor     ecx, eax
0x9CC4E0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC4E5: add     eax, 10h
0x9CC4E8: mov     ecx, [edx-4]
0x9CC4EB: xor     ecx, eax
0x9CC4ED: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC4F2: mov     eax, offset stru_AF5774
0x9CC4F7: jmp     ___CxxFrameHandler3
