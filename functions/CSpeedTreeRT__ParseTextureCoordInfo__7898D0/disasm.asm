0x7898D0: push    0FFFFFFFFh; CSpeedTreeRT::ParseTextureCoordInfo (top-level token 10000). Allocates the 0x54 embedded-texcoord object; parses branch/leaf/frond 8-float coordinate tables, composite texture filename, and horizontal/360 billboard flags through terminator 10001. Leaf V coordinates honor the global texture-flip flag.
0x7898D2: push    offset SEH_7898D0
0x7898D7: mov     eax, large fs:0
0x7898DD: push    eax
0x7898DE: sub     esp, 0C8h
0x7898E4: mov     eax, ds:0B30AACh
0x7898E9: xor     eax, esp
0x7898EB: mov     [esp+0D4h+var_10], eax
0x7898F2: push    ebx
0x7898F3: push    ebp
0x7898F4: push    esi
0x7898F5: push    edi
0x7898F6: mov     eax, ds:0B30AACh
0x7898FB: xor     eax, esp
0x7898FD: push    eax
0x7898FE: lea     eax, [esp+0E8h+var_C]
0x789905: mov     large fs:0, eax
0x78990B: mov     edi, [esp+0E8h+file]
0x789912: push    54h ; 'T'; Embedded texcoord block allocation: stock SEmbeddedTexCoords is 0x54 bytes and is stored at CSpeedTreeRT+0x4C.
0x789914: mov     esi, ecx
0x789916: call    FormHeapAlloc
0x78991B: xor     ebx, ebx
0x78991D: add     esp, 4
0x789920: cmp     eax, ebx
0x789922: jz      short loc_789960
0x789924: fld1; SEmbeddedTexCoords constructor inline: zero counts/pointers/string, default shadow texcoords to (1,1),(0,1),(0,0),(1,0).
0x789926: mov     [eax], ebx
0x789928: mov     [eax+4], ebx
0x78992B: mov     [eax+8], ebx
0x78992E: mov     [eax+0Ch], ebx
0x789931: mov     [eax+10h], ebx
0x789934: mov     [eax+14h], ebx
0x789937: mov     dword ptr [eax+30h], 0Fh
0x78993E: mov     [eax+2Ch], ebx
0x789941: mov     [eax+1Ch], bl
0x789944: fst     dword ptr [eax+34h]
0x789947: fst     dword ptr [eax+38h]
0x78994A: fldz
0x78994C: fst     dword ptr [eax+3Ch]
0x78994F: fst     dword ptr [eax+44h]
0x789952: fst     dword ptr [eax+48h]
0x789955: fstp    dword ptr [eax+50h]
0x789958: fst     dword ptr [eax+40h]
0x78995B: fstp    dword ptr [eax+4Ch]
0x78995E: jmp     short loc_789962
0x789960: xor     eax, eax
0x789962: mov     ecx, edi; this
0x789964: mov     [esi+4Ch], eax
0x789967: call    OB_CTreeFileAccess_ReadDword_010201A0; SpeedTreeOBSE 2026-05-25 stock-tail fidelity pass: local 10000 texcoord block allocates CSpeedTreeRT+0x4C and requires a first recognized 10002..10007 payload before accepting 10001.
0x78996C: lea     esp, [esp+0]
0x789970: add     eax, 0FFFFD8EEh; switch 6 cases
0x789975: cmp     eax, 5
0x789978: ja      near ptr def_78997E; jumptable 0078997E default case
0x78997E: jmp     ds:jpt_78997E[eax*4]; switch jump
0x789985: mov     ecx, edi; Texture coord token 10002: read leaf map count, allocate count*8 floats at embedded+0x04, fill by ParseFloat.
0x789987: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x78998C: mov     ecx, [esi+4Ch]
0x78998F: mov     [ecx], eax
0x789991: mov     edx, [esi+4Ch]
0x789994: mov     eax, [edx]
0x789996: cmp     eax, ebx
0x789998: jle     loc_789C44
0x78999E: add     eax, eax
0x7899A0: add     eax, eax
0x7899A2: xor     ecx, ecx
0x7899A4: add     eax, eax
0x7899A6: mov     edx, 4
0x7899AB: mul     edx
0x7899AD: seto    cl
0x7899B0: neg     ecx
0x7899B2: or      ecx, eax
0x7899B4: push    ecx; Size
0x7899B5: call    FormHeapAlloc
0x7899BA: mov     ecx, [esi+4Ch]
0x7899BD: mov     [ecx+4], eax
0x7899C0: mov     edx, [esi+4Ch]
0x7899C3: add     esp, 4
0x7899C6: cmp     [edx], ebx
0x7899C8: mov     [esp+0E8h+var_D4], ebx
0x7899CC: jle     loc_789C44
0x7899D2: mov     ebp, [esp+0E8h+var_D4]
0x7899D6: shl     ebp, 5
0x7899D9: mov     ebx, 8
0x7899DE: mov     edi, edi
0x7899E0: mov     ecx, edi; this
0x7899E2: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7899E7: mov     eax, [esi+4Ch]
0x7899EA: mov     ecx, [eax+4]
0x7899ED: fstp    dword ptr [ecx+ebp]
0x7899F0: add     ebp, 4
0x7899F3: sub     ebx, 1
0x7899F6: jnz     short loc_7899E0
0x7899F8: mov     eax, [esp+0E8h+var_D4]
0x7899FC: mov     edx, [esi+4Ch]
0x7899FF: add     eax, 1
0x789A02: cmp     eax, [edx]
0x789A04: mov     [esp+0E8h+var_D4], eax
0x789A08: jl      short loc_7899D2
0x789A0A: xor     ebx, ebx
0x789A0C: jmp     loc_789C44
0x789A11: mov     ecx, edi; 2026-05-21 360 gap pass: token 10003 reads embedded billboard texcoord count/table into embedded texcoords +0x08/+0x0C only; no write to CSpeedTreeRT+0x54 observed.
0x789A13: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x789A18: mov     ecx, [esi+4Ch]
0x789A1B: mov     [ecx+8], eax
0x789A1E: mov     edx, [esi+4Ch]
0x789A21: mov     eax, [edx+8]
0x789A24: cmp     eax, ebx
0x789A26: jle     loc_789C44
0x789A2C: add     eax, eax
0x789A2E: add     eax, eax
0x789A30: xor     ecx, ecx
0x789A32: add     eax, eax
0x789A34: mov     edx, 4
0x789A39: mul     edx
0x789A3B: seto    cl
0x789A3E: neg     ecx
0x789A40: or      ecx, eax
0x789A42: push    ecx; Size
0x789A43: call    FormHeapAlloc
0x789A48: mov     ecx, [esi+4Ch]
0x789A4B: mov     [ecx+0Ch], eax
0x789A4E: mov     edx, [esi+4Ch]
0x789A51: add     esp, 4
0x789A54: cmp     [edx+8], ebx
0x789A57: mov     [esp+0E8h+var_D4], ebx
0x789A5B: jle     loc_789C44
0x789A61: mov     ebp, [esp+0E8h+var_D4]
0x789A65: shl     ebp, 5
0x789A68: mov     ecx, edi; this
0x789A6A: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x789A6F: mov     eax, [esi+4Ch]
0x789A72: mov     ecx, [eax+0Ch]
0x789A75: mov     edx, ebx
0x789A77: fstp    dword ptr [ecx+ebp]
0x789A7A: and     edx, 80000001h
0x789A80: jns     short loc_789A87
0x789A82: dec     edx
0x789A83: or      edx, 0FFFFFFFEh
0x789A86: inc     edx
0x789A87: jz      short loc_789AA2
0x789A89: cmp     byte ptr ds:0B4297Dh, 0
0x789A90: jz      short loc_789AA2
0x789A92: mov     eax, [esi+4Ch]
0x789A95: mov     ecx, [eax+0Ch]
0x789A98: fld     dword ptr [ecx+ebp]
0x789A9B: lea     eax, [ecx+ebp]
0x789A9E: fchs
0x789AA0: fstp    dword ptr [eax]
0x789AA2: add     ebx, 1
0x789AA5: add     ebp, 4
0x789AA8: cmp     ebx, 8
0x789AAB: jl      short loc_789A68
0x789AAD: mov     eax, [esp+0E8h+var_D4]
0x789AB1: mov     edx, [esi+4Ch]
0x789AB4: add     eax, 1
0x789AB7: xor     ebx, ebx
0x789AB9: cmp     eax, [edx+8]
0x789ABC: mov     [esp+0E8h+var_D4], eax
0x789AC0: jl      short loc_789A61
0x789AC2: jmp     loc_789C44
0x789AC7: mov     ecx, edi; Texture coord token 10004: read frond map count, allocate count*8 floats at embedded+0x14, fill by ParseFloat.
0x789AC9: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x789ACE: mov     ecx, [esi+4Ch]
0x789AD1: mov     [ecx+10h], eax
0x789AD4: mov     edx, [esi+4Ch]
0x789AD7: mov     eax, [edx+10h]
0x789ADA: cmp     eax, ebx
0x789ADC: jle     loc_789C44
0x789AE2: add     eax, eax
0x789AE4: add     eax, eax
0x789AE6: xor     ecx, ecx
0x789AE8: add     eax, eax
0x789AEA: mov     edx, 4
0x789AEF: mul     edx
0x789AF1: seto    cl
0x789AF4: neg     ecx
0x789AF6: or      ecx, eax
0x789AF8: push    ecx; Size
0x789AF9: call    FormHeapAlloc
0x789AFE: mov     ecx, [esi+4Ch]
0x789B01: mov     [ecx+14h], eax
0x789B04: mov     edx, [esi+4Ch]
0x789B07: add     esp, 4
0x789B0A: cmp     [edx+10h], ebx
0x789B0D: mov     [esp+0E8h+var_D4], ebx
0x789B11: jle     loc_789C44
0x789B17: mov     ebp, [esp+0E8h+var_D4]
0x789B1B: shl     ebp, 5
0x789B1E: mov     ebx, 8
0x789B23: mov     ecx, edi; this
0x789B25: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x789B2A: mov     eax, [esi+4Ch]
0x789B2D: mov     ecx, [eax+14h]
0x789B30: fstp    dword ptr [ecx+ebp]
0x789B33: add     ebp, 4
0x789B36: sub     ebx, 1
0x789B39: jnz     short loc_789B23
0x789B3B: mov     eax, [esp+0E8h+var_D4]
0x789B3F: mov     edx, [esi+4Ch]
0x789B42: add     eax, 1
0x789B45: cmp     eax, [edx+10h]
0x789B48: mov     [esp+0E8h+var_D4], eax
0x789B4C: jl      short loc_789B17
0x789B4E: xor     ebx, ebx
0x789B50: jmp     loc_789C44
0x789B55: sub     esp, 1Ch; Texture coord token 10005: read composite texture filename, normalize/remove path, store string at embedded+0x18.
0x789B58: mov     eax, esp
0x789B5A: mov     [esp+104h+var_D4], esp
0x789B5E: push    eax; outSmallString
0x789B5F: mov     ecx, edi; this
0x789B61: call    OB_CTreeFileAccess_ReadString_010201A0; CTreeFileAccess::ParseString-style helper. Reads a 4-byte byte count, then consumes that many raw bytes into a small-string object.
0x789B66: lea     ecx, [esp+104h+filename]; this
0x789B6D: call    OB_stString28_CopyCtorConsumeTemporary_010201A0; Oblivion 28-byte SSO copy constructor for a by-value temporary: initializes destination, copies the source substring, and releases heap-backed source storage. Used after ParseString.
0x789B72: lea     ecx, [esp+0E8h+result]
0x789B76: push    ecx; result
0x789B77: lea     ecx, [esp+0ECh+filename]; filename
0x789B7E: mov     [esp+0ECh+var_4], ebx
0x789B85: call    OB_IdvNoPath_010201A0; Oblivion IdvNoPath helper: copies the input 28-byte SSO string, scans backward for '/' or '\', and constructs the returned basename string. RT4.1 IdvFilename.h corroborates the algorithm/name.
0x789B8A: mov     ecx, [esi+4Ch]
0x789B8D: push    0FFFFFFFFh; count
0x789B8F: push    ebx; offset
0x789B90: add     ecx, 18h; this
0x789B93: push    eax; source
0x789B94: mov     byte ptr [esp+0F4h+var_4], 1
0x789B9C: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x789BA1: mov     ebp, 10h
0x789BA6: cmp     [esp+0E8h+result.capacity], ebp
0x789BAA: jb      short loc_789BB9
0x789BAC: mov     edx, dword ptr [esp+0E8h+result.storage]
0x789BB0: push    edx
0x789BB1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x789BB6: add     esp, 4
0x789BB9: cmp     [esp+0E8h+filename.capacity], ebp
0x789BC0: mov     [esp+0E8h+result.capacity], 0Fh
0x789BC8: mov     [esp+0E8h+result.size], ebx
0x789BCC: mov     byte ptr [esp+0E8h+result.storage], 0
0x789BD1: mov     [esp+0E8h+var_4], 0FFFFFFFFh
0x789BDC: jb      short loc_789C44
0x789BDE: mov     eax, dword ptr [esp+0E8h+filename.storage]
0x789BE5: push    eax
0x789BE6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x789BEB: add     esp, 4
0x789BEE: jmp     short loc_789C44
0x789BF0: mov     ebp, [edi]; 2026-05-21 360 gap pass: token 10006 writes raw one-byte horizontal billboard flag to CSpeedTreeRT+0x6D; no CSpeedTreeRT+0x54 count update.
0x789BF2: lea     ecx, [ebp+1]
0x789BF5: mov     [edi], ecx
0x789BF7: mov     ecx, [edi+8]
0x789BFA: cmp     ecx, ebx
0x789BFC: jz      short loc_789C07
0x789BFE: mov     eax, [edi+0Ch]
0x789C01: sub     eax, ecx
0x789C03: cmp     ebp, eax
0x789C05: jb      short loc_789C0C
0x789C07: call    __invalid_parameter_noinfo
0x789C0C: mov     edx, [edi+8]
0x789C0F: cmp     byte ptr [edx+ebp], 0
0x789C13: setnz   al
0x789C16: mov     [esi+6Dh], al
0x789C19: jmp     short loc_789C44
0x789C1B: mov     ebp, [edi]; 2026-05-21 360 gap pass: token 10007 writes raw one-byte 360 billboard flag to CSpeedTreeRT+0x6C; this enables the branch gate but does not set directional image count +0x54.
0x789C1D: lea     ecx, [ebp+1]
0x789C20: mov     [edi], ecx
0x789C22: mov     ecx, [edi+8]
0x789C25: cmp     ecx, ebx
0x789C27: jz      short loc_789C32
0x789C29: mov     eax, [edi+0Ch]
0x789C2C: sub     eax, ecx
0x789C2E: cmp     ebp, eax
0x789C30: jb      short loc_789C37
0x789C32: call    __invalid_parameter_noinfo
0x789C37: mov     edx, [edi+8]
0x789C3A: cmp     byte ptr [edx+ebp], 0
0x789C3E: setnz   al
0x789C41: mov     [esi+6Ch], al
0x789C44: mov     ecx, edi; Texture coord parser loop tail: after each recognized payload, read next token and exit only on 10001; EOF before 10001 throws.
0x789C46: call    OB_CTreeFileAccess_IsEOF_010201A0; CTreeFileAccess::EndOfFile-style helper. Returns true when byte-buffer begin is null or cursor offset is at/after end-begin.
0x789C4B: test    al, al
0x789C4D: jnz     short loc_789C8B
0x789C4F: mov     ecx, edi; this
0x789C51: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x789C56: cmp     eax, 2711h
0x789C5B: jnz     loc_789970
0x789C61: mov     ecx, [esp+0E8h+var_C]
0x789C68: mov     large fs:0, ecx
0x789C6F: pop     ecx
0x789C70: pop     edi
0x789C71: pop     esi
0x789C72: pop     ebp
0x789C73: pop     ebx
0x789C74: mov     ecx, [esp+0D4h+var_10]
0x789C7B: xor     ecx, esp
0x789C7D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x789C82: add     esp, 0D4h
0x789C88: retn    4
0x789C8B: push    3Dh ; '='; count
0x789C8D: push    offset aPrematureEnd_0; "premature end of file reached parsing t"...
0x789C92: lea     ecx, [esp+0F0h+details]; this
0x789C96: mov     [esp+0F0h+details.capacity], 0Fh
0x789C9E: mov     [esp+0F0h+details.size], ebx
0x789CA2: mov     byte ptr [esp+0F0h+details.storage], 0
0x789CA7: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x789CAC: push    ebx; appendSystemError
0x789CAD: lea     ecx, [esp+0ECh+details]
0x789CB1: push    ecx; details
0x789CB2: lea     ecx, [esp+0F0h+var_54]; this
0x789CB9: mov     [esp+0F0h+var_4], 3
0x789CC4: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x789CC9: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x789CCE: lea     edx, [esp+0ECh+var_54]
0x789CD5: push    edx
0x789CD6: call    ThrowException??
0x789CDC: sbb     al, 68h ; 'h'
0x789CDE: cld
0x789CDF: mov     edx, 4C8D00A8h
0x789CE4: and     al, 3Ch
0x789CE6: mov     [esp+8+arg_30.capacity], 0Fh
0x789CEE: mov     [esp+8+arg_30.size], ebx
0x789CF2: mov     byte ptr [esp+8+arg_30.storage], 0
0x789CF7: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x789CFC: push    ebx; appendSystemError
0x789CFD: lea     eax, [esp+4+arg_30]
0x789D01: push    eax; details
0x789D02: lea     ecx, [esp+8+arg_68]; this
0x789D06: mov     [esp+8+arg_E0], 2
0x789D11: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x789D16: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x789D1B: lea     ecx, [esp+4+arg_68]
0x789D1F: push    ecx
0x789D20: call    ThrowException??
0x9CB4B0: lea     ecx, [ebp-2Ch]; this
0x9CB4B3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB4B8: lea     ecx, [ebp-0D0h]; this
0x9CB4BE: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB4C3: lea     ecx, [ebp-98h]; this
0x9CB4C9: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB4CE: lea     ecx, [ebp-0B4h]; this
0x9CB4D4: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB4D9: mov     edx, [esp+arg_4]
0x9CB4DD: lea     eax, [edx-0D8h]
0x9CB4E3: mov     ecx, [edx-0DCh]
0x9CB4E9: xor     ecx, eax
0x9CB4EB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB4F0: add     eax, 10h
0x9CB4F3: mov     ecx, [edx-4]
0x9CB4F6: xor     ecx, eax
0x9CB4F8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB4FD: mov     eax, offset stru_AF3C10
0x9CB502: jmp     ___CxxFrameHandler3
