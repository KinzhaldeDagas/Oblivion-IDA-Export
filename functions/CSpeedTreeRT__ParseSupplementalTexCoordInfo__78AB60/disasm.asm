0x78AB60: push    0FFFFFFFFh; CSpeedTreeRT::ParseSupplementalTexCoordInfo (top-level token 20000). Only parses when embedded texcoords already exist; accepts composite filename, horizontal/360 flags, and eight billboard floats through terminator 20001. If the base object is absent, Oblivion returns without consuming payload.
0x78AB62: push    offset SEH_7898D0
0x78AB67: mov     eax, large fs:0
0x78AB6D: push    eax
0x78AB6E: sub     esp, 0C8h
0x78AB74: mov     eax, ds:0B30AACh
0x78AB79: xor     eax, esp
0x78AB7B: mov     [esp+0D4h+var_10], eax
0x78AB82: push    ebx
0x78AB83: push    ebp
0x78AB84: push    esi
0x78AB85: push    edi
0x78AB86: mov     eax, ds:0B30AACh
0x78AB8B: xor     eax, esp
0x78AB8D: push    eax
0x78AB8E: lea     eax, [esp+0E8h+var_C]
0x78AB95: mov     large fs:0, eax
0x78AB9B: mov     esi, [esp+0E8h+file]
0x78ABA2: mov     ebp, ecx
0x78ABA4: xor     ebx, ebx
0x78ABA6: cmp     [ebp+4Ch], ebx; 2026-05-24 SpeedTreeOBSE: stock gate for 20000 consumption. If CSpeedTreeRT+0x4C is null, supplemental texcoord payload is not parsed or skipped; compatibility mirror must treat following bytes as the outer-loop stream/terminal boundary.
0x78ABA9: jz      loc_78AD02
0x78ABAF: mov     ecx, esi; SpeedTreeOBSE 2026-05-25 stock-tail fidelity pass: 20000 supplemental texcoord parser, when CSpeedTreeRT+0x4C exists, requires a first recognized 20002..20005 payload before accepting 20001; no-embedded early-return path is separate.
0x78ABB1: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x78ABB6: jmp     short loc_78ABC0
0x78ABC0: add     eax, 0FFFFB1DEh; switch 4 cases
0x78ABC5: cmp     eax, 3
0x78ABC8: ja      near ptr def_78ABCE; jumptable 0078ABCE default case
0x78ABCE: jmp     ds:jpt_78ABCE[eax*4]; switch jump
0x78ABD5: sub     esp, 1Ch; Supplemental texcoord token 20002: read normalized composite filename into embedded+0x18.
0x78ABD8: mov     eax, esp
0x78ABDA: mov     [esp+104h+var_D4], esp
0x78ABDE: push    eax; outSmallString
0x78ABDF: mov     ecx, esi; this
0x78ABE1: call    OB_CTreeFileAccess_ReadString_010201A0; CTreeFileAccess::ParseString-style helper. Reads a 4-byte byte count, then consumes that many raw bytes into a small-string object.
0x78ABE6: lea     ecx, [esp+104h+filename]; this
0x78ABED: call    OB_stString28_CopyCtorConsumeTemporary_010201A0; Oblivion 28-byte SSO copy constructor for a by-value temporary: initializes destination, copies the source substring, and releases heap-backed source storage. Used after ParseString.
0x78ABF2: lea     ecx, [esp+0E8h+result]
0x78ABF6: push    ecx; result
0x78ABF7: lea     ecx, [esp+0ECh+filename]; filename
0x78ABFE: mov     [esp+0ECh+var_4], ebx
0x78AC05: call    OB_IdvNoPath_010201A0; Oblivion IdvNoPath helper: copies the input 28-byte SSO string, scans backward for '/' or '\', and constructs the returned basename string. RT4.1 IdvFilename.h corroborates the algorithm/name.
0x78AC0A: mov     ecx, [ebp+4Ch]
0x78AC0D: push    0FFFFFFFFh; count
0x78AC0F: push    ebx; offset
0x78AC10: add     ecx, 18h; this
0x78AC13: push    eax; source
0x78AC14: mov     byte ptr [esp+0F4h+var_4], 1
0x78AC1C: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x78AC21: mov     edi, 10h
0x78AC26: cmp     [esp+0E8h+result.capacity], edi
0x78AC2A: jb      short loc_78AC39
0x78AC2C: mov     edx, dword ptr [esp+0E8h+result.storage]
0x78AC30: push    edx
0x78AC31: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x78AC36: add     esp, 4
0x78AC39: cmp     [esp+0E8h+filename.capacity], edi
0x78AC40: mov     [esp+0E8h+result.capacity], 0Fh
0x78AC48: mov     [esp+0E8h+result.size], ebx
0x78AC4C: mov     byte ptr [esp+0E8h+result.storage], bl
0x78AC50: mov     [esp+0E8h+var_4], 0FFFFFFFFh
0x78AC5B: jb      loc_78ACE5
0x78AC61: mov     eax, dword ptr [esp+0E8h+filename.storage]
0x78AC68: push    eax
0x78AC69: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x78AC6E: add     esp, 4
0x78AC71: jmp     short loc_78ACE5
0x78AC73: mov     edi, [esi]; 2026-05-21 360 gap pass: supplemental token 20003 writes raw one-byte horizontal billboard flag to CSpeedTreeRT+0x6D; no CSpeedTreeRT+0x54 count update.
0x78AC75: lea     ecx, [edi+1]
0x78AC78: mov     [esi], ecx
0x78AC7A: mov     ecx, [esi+8]
0x78AC7D: cmp     ecx, ebx
0x78AC7F: jz      short loc_78AC8A
0x78AC81: mov     eax, [esi+0Ch]
0x78AC84: sub     eax, ecx
0x78AC86: cmp     edi, eax
0x78AC88: jb      short loc_78AC8F
0x78AC8A: call    __invalid_parameter_noinfo
0x78AC8F: mov     edx, [esi+8]
0x78AC92: cmp     [edi+edx], bl
0x78AC95: setnz   al
0x78AC98: mov     [ebp+6Dh], al
0x78AC9B: jmp     short loc_78ACE5
0x78AC9D: mov     edi, [esi]; 2026-05-21 360 gap pass: supplemental token 20004 writes raw one-byte 360 billboard flag to CSpeedTreeRT+0x6C; no CSpeedTreeRT+0x54 count update.
0x78AC9F: lea     ecx, [edi+1]
0x78ACA2: mov     [esi], ecx
0x78ACA4: mov     ecx, [esi+8]
0x78ACA7: cmp     ecx, ebx
0x78ACA9: jz      short loc_78ACB4
0x78ACAB: mov     eax, [esi+0Ch]
0x78ACAE: sub     eax, ecx
0x78ACB0: cmp     edi, eax
0x78ACB2: jb      short loc_78ACB9
0x78ACB4: call    __invalid_parameter_noinfo
0x78ACB9: mov     edx, [esi+8]
0x78ACBC: cmp     [edi+edx], bl
0x78ACBF: setnz   al
0x78ACC2: mov     [ebp+6Ch], al
0x78ACC5: jmp     short loc_78ACE5
0x78ACC7: mov     edi, 34h ; '4'; Supplemental token 20005 reads 8 shadow texcoord floats into embedded+0x34..+0x50.
0x78ACCC: lea     esp, [esp+0]
0x78ACD0: mov     ecx, esi; this
0x78ACD2: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x78ACD7: mov     ecx, [ebp+4Ch]
0x78ACDA: fstp    dword ptr [edi+ecx]
0x78ACDD: add     edi, 4
0x78ACE0: cmp     edi, 54h ; 'T'
0x78ACE3: jl      short loc_78ACD0
0x78ACE5: mov     ecx, esi; this
0x78ACE7: call    OB_CTreeFileAccess_IsEOF_010201A0; CTreeFileAccess::EndOfFile-style helper. Returns true when byte-buffer begin is null or cursor offset is at/after end-begin.
0x78ACEC: test    al, al
0x78ACEE: jnz     short loc_78AD2C
0x78ACF0: mov     ecx, esi; this
0x78ACF2: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x78ACF7: cmp     eax, 4E21h
0x78ACFC: jnz     loc_78ABC0
0x78AD02: mov     ecx, [esp+0E8h+var_C]; 2026-05-24 SpeedTreeOBSE: early return path for 20000 when no embedded texcoords were allocated by prior 10000. This is stock cursor behavior and not a malformed-family throw.
0x78AD09: mov     large fs:0, ecx
0x78AD10: pop     ecx
0x78AD11: pop     edi
0x78AD12: pop     esi
0x78AD13: pop     ebp
0x78AD14: pop     ebx
0x78AD15: mov     ecx, [esp+0D4h+var_10]
0x78AD1C: xor     ecx, esp
0x78AD1E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x78AD23: add     esp, 0D4h
0x78AD29: retn    4
0x78AD2C: push    3Dh ; '='; count
0x78AD2E: push    offset aPrematureEnd_0; "premature end of file reached parsing t"...
0x78AD33: lea     ecx, [esp+0F0h+details]; this
0x78AD37: mov     [esp+0F0h+details.capacity], 0Fh
0x78AD3F: mov     [esp+0F0h+details.size], ebx
0x78AD43: mov     byte ptr [esp+0F0h+details.storage], bl
0x78AD47: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x78AD4C: push    ebx; appendSystemError
0x78AD4D: lea     edx, [esp+0ECh+details]
0x78AD51: push    edx; details
0x78AD52: lea     ecx, [esp+0F0h+var_54]; this
0x78AD59: mov     [esp+0F0h+var_4], 3
0x78AD64: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x78AD69: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x78AD6E: lea     eax, [esp+0ECh+var_54]
0x78AD75: push    eax
0x78AD76: call    ThrowException??
0x78AD7C: sbb     al, 68h ; 'h'
0x78AD7E: cld
0x78AD7F: mov     edx, 4C8D00A8h
0x78AD84: and     al, 3Ch
0x78AD86: mov     [esp+8+arg_30.capacity], 0Fh
0x78AD8E: mov     [esp+8+arg_30.size], ebx
0x78AD92: mov     byte ptr [esp+8+arg_30.storage], bl
0x78AD96: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x78AD9B: push    ebx; appendSystemError
0x78AD9C: lea     ecx, [esp+4+arg_30]
0x78ADA0: push    ecx; details
0x78ADA1: lea     ecx, [esp+8+arg_68]; this
0x78ADA5: mov     [esp+8+arg_E0], 2
0x78ADB0: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x78ADB5: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x78ADBA: lea     edx, [esp+4+arg_68]
0x78ADBE: push    edx
0x78ADBF: call    ThrowException??
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
