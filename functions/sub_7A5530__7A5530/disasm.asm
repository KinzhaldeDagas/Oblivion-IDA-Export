0x7A5530: push    0FFFFFFFFh; Parses Oblivion shadow tokens: 18002 right, 18003 up, 18004 out, 18005 basename-only map filename, terminated by 18001.
0x7A5532: push    offset SEH_7A5530
0x7A5537: mov     eax, large fs:0
0x7A553D: push    eax
0x7A553E: sub     esp, 0A8h
0x7A5544: mov     eax, ds:0B30AACh
0x7A5549: xor     eax, esp
0x7A554B: mov     [esp+0B4h+var_10], eax
0x7A5552: push    ebx
0x7A5553: push    ebp
0x7A5554: push    esi
0x7A5555: push    edi
0x7A5556: mov     eax, ds:0B30AACh
0x7A555B: xor     eax, esp
0x7A555D: push    eax
0x7A555E: lea     eax, [esp+0C8h+var_C]
0x7A5565: mov     large fs:0, eax
0x7A556B: mov     edi, [esp+0C8h+file]
0x7A5572: mov     esi, ecx
0x7A5574: mov     ecx, edi; this
0x7A5576: call    OB_CTreeFileAccess_ReadDword_010201A0; SpeedTreeOBSE 2026-05-25 stock-tail fidelity pass: 18000 shadow projection delegate requires a first recognized 18002..18005 payload before accepting 18001.
0x7A557B: xor     ebx, ebx
0x7A557D: mov     ebp, 10h
0x7A5582: jmp     short loc_7A5590
0x7A558B: jmp     short loc_7A5590
0x7A5590: lea     ecx, [eax-4652h]; switch 4 cases
0x7A5596: cmp     ecx, 3
0x7A5599: ja      def_7A559F; jumptable 007A559F default case
0x7A559F: jmp     ds:jpt_7A559F[ecx*4]; switch jump
0x7A55A6: lea     eax, [esp+0C8h+outVec3]; jumptable 007A559F case 18002
0x7A55AA: push    eax; outVec3
0x7A55AB: mov     ecx, edi; this
0x7A55AD: call    OB_CTreeFileAccess_ReadVec3_010201A0; CTreeFileAccess vector3 float reader. Reads three 4-byte floats into caller buffer.
0x7A55B2: fld     dword ptr [eax]
0x7A55B4: fstp    dword ptr [esi]
0x7A55B6: fld     dword ptr [eax+4]
0x7A55B9: fstp    dword ptr [esi+4]
0x7A55BC: fld     dword ptr [eax+8]
0x7A55BF: fstp    dword ptr [esi+8]
0x7A55C2: jmp     loc_7A56B4
0x7A55C7: lea     ecx, [esp+0C8h+var_88]; jumptable 007A559F case 18003
0x7A55CB: push    ecx; outVec3
0x7A55CC: mov     ecx, edi; this
0x7A55CE: call    OB_CTreeFileAccess_ReadVec3_010201A0; CTreeFileAccess vector3 float reader. Reads three 4-byte floats into caller buffer.
0x7A55D3: fld     dword ptr [eax]
0x7A55D5: fstp    dword ptr [esi+0Ch]
0x7A55D8: fld     dword ptr [eax+4]
0x7A55DB: fstp    dword ptr [esi+10h]
0x7A55DE: fld     dword ptr [eax+8]
0x7A55E1: fstp    dword ptr [esi+14h]
0x7A55E4: jmp     loc_7A56B4
0x7A55E9: lea     edx, [esp+0C8h+var_94]; jumptable 007A559F case 18004
0x7A55ED: push    edx; outVec3
0x7A55EE: mov     ecx, edi; this
0x7A55F0: call    OB_CTreeFileAccess_ReadVec3_010201A0; CTreeFileAccess vector3 float reader. Reads three 4-byte floats into caller buffer.
0x7A55F5: fld     dword ptr [eax]
0x7A55F7: fstp    dword ptr [esi+18h]
0x7A55FA: fld     dword ptr [eax+4]
0x7A55FD: fstp    dword ptr [esi+1Ch]
0x7A5600: fld     dword ptr [eax+8]
0x7A5603: fstp    dword ptr [esi+20h]
0x7A5606: jmp     loc_7A56B4
0x7A560B: sub     esp, 1Ch; jumptable 007A559F case 18005
0x7A560E: mov     eax, esp
0x7A5610: mov     [esp+0E4h+var_B4], esp
0x7A5614: push    eax; outSmallString
0x7A5615: mov     ecx, edi; this
0x7A5617: call    OB_CTreeFileAccess_ReadString_010201A0; CTreeFileAccess::ParseString-style helper. Reads a 4-byte byte count, then consumes that many raw bytes into a small-string object.
0x7A561C: lea     ecx, [esp+0E4h+filename]; this
0x7A5623: call    OB_stString28_CopyCtorConsumeTemporary_010201A0; Oblivion 28-byte SSO copy constructor for a by-value temporary: initializes destination, copies the source substring, and releases heap-backed source storage. Used after ParseString.
0x7A5628: lea     ecx, [esp+0C8h+var_B0]
0x7A562C: push    ecx; result
0x7A562D: lea     ecx, [esp+0CCh+filename]; filename
0x7A5634: mov     [esp+0CCh+var_4], ebx
0x7A563B: call    OB_IdvNoPath_010201A0; Oblivion IdvNoPath helper: copies the input 28-byte SSO string, scans backward for '/' or '\', and constructs the returned basename string. RT4.1 IdvFilename.h corroborates the algorithm/name.
0x7A5640: push    0FFFFFFFFh; count
0x7A5642: push    ebx; offset
0x7A5643: push    eax; source
0x7A5644: lea     ecx, [esi+24h]; this
0x7A5647: mov     byte ptr [esp+0D4h+var_4], 1
0x7A564F: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x7A5654: cmp     [esp+0C8h+var_B0.capacity], ebp
0x7A5658: jb      short loc_7A5667
0x7A565A: mov     edx, dword ptr [esp+0C8h+var_B0.storage]
0x7A565E: push    edx
0x7A565F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A5664: add     esp, 4
0x7A5667: cmp     [esp+0C8h+filename.capacity], ebp
0x7A566E: mov     [esp+0C8h+var_B0.capacity], 0Fh
0x7A5676: mov     [esp+0C8h+var_B0.size], ebx
0x7A567A: mov     byte ptr [esp+0C8h+var_B0.storage], bl
0x7A567E: mov     [esp+0C8h+var_4], 0FFFFFFFFh
0x7A5689: jb      short loc_7A569B
0x7A568B: mov     eax, dword ptr [esp+0C8h+filename.storage]
0x7A5692: push    eax
0x7A5693: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A5698: add     esp, 4
0x7A569B: mov     [esp+0C8h+filename.capacity], 0Fh
0x7A56A6: mov     [esp+0C8h+filename.size], ebx
0x7A56AD: mov     byte ptr [esp+0C8h+filename.storage], bl
0x7A56B4: mov     ecx, edi; this
0x7A56B6: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A56BB: cmp     eax, 4651h
0x7A56C0: jnz     loc_7A5590
0x7A56C6: mov     ecx, [esp+0C8h+var_C]
0x7A56CD: mov     large fs:0, ecx
0x7A56D4: pop     ecx
0x7A56D5: pop     edi
0x7A56D6: pop     esi
0x7A56D7: pop     ebp
0x7A56D8: pop     ebx
0x7A56D9: mov     ecx, [esp+0B4h+var_10]
0x7A56E0: xor     ecx, esp
0x7A56E2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7A56E7: add     esp, 0B4h
0x7A56ED: retn    4
0x7A56F0: push    eax; jumptable 007A559F default case
0x7A56F1: push    offset aMalformedFro_0; "malformed frond info (token %d)"
0x7A56F6: lea     esi, [esp+0D0h+result]; result
0x7A56FD: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x7A5702: add     esp, 8
0x7A5705: push    ebx; appendSystemError
0x7A5706: push    eax; details
0x7A5707: lea     ecx, [esp+0D0h+var_70]; this
0x7A570B: mov     [esp+0D0h+var_4], 2
0x7A5716: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x7A571B: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A5720: lea     ecx, [esp+0CCh+var_70]
0x7A5724: push    ecx
0x7A5725: call    ThrowException??
0x9CCB60: lea     ecx, [ebp-2Ch]; this
0x9CCB63: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCB68: lea     ecx, [ebp-0B0h]; this
0x9CCB6E: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCB73: lea     ecx, [ebp-48h]; this
0x9CCB76: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCB7B: mov     edx, [esp+arg_4]
0x9CCB7F: lea     eax, [edx-0B8h]
0x9CCB85: mov     ecx, [edx-0BCh]
0x9CCB8B: xor     ecx, eax
0x9CCB8D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCB92: add     eax, 10h
0x9CCB95: mov     ecx, [edx-4]
0x9CCB98: xor     ecx, eax
0x9CCB9A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCB9F: mov     eax, offset stru_AF5F04
0x9CCBA4: jmp     ___CxxFrameHandler3
