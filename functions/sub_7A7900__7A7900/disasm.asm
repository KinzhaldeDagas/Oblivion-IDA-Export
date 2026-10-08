0x7A7900: push    0FFFFFFFFh; Compact stock SIdvBranchInfo parser. Allocates 0x74 bytes, accepts only core branch-level tokens 6000..6017, and stores spline/profile pointers at +0x50..+0x70.
0x7A7902: push    offset SEH_7A7900
0x7A7907: mov     eax, large fs:0
0x7A790D: push    eax
0x7A790E: sub     esp, 8Ch
0x7A7914: push    ebx
0x7A7915: push    ebp
0x7A7916: push    esi
0x7A7917: push    edi
0x7A7918: mov     eax, ds:0B30AACh
0x7A791D: xor     eax, esp
0x7A791F: push    eax
0x7A7920: lea     eax, [esp+0ACh+var_C]
0x7A7927: mov     large fs:0, eax
0x7A792D: push    74h ; 't'; Size
0x7A792F: call    FormHeapAlloc
0x7A7934: add     esp, 4
0x7A7937: mov     [esp+0ACh+var_98], eax
0x7A793B: xor     ebx, ebx
0x7A793D: cmp     eax, ebx
0x7A793F: mov     [esp+0ACh+var_4], ebx
0x7A7946: jz      short loc_7A7953
0x7A7948: mov     ecx, eax; this
0x7A794A: call    OB_SIdvBranchInfo_ctor_010201A0; Compact stock SIdvBranchInfo constructor. Initializes core branch fields, diffuse texcoord controls, flare defaults at +0x24..+0x4C, and default spline pointers.
0x7A794F: mov     edi, eax
0x7A7951: jmp     short loc_7A7955
0x7A7953: xor     edi, edi
0x7A7955: mov     esi, [esp+0ACh+arg_0]
0x7A795C: mov     ecx, esi; this
0x7A795E: mov     [esp+0ACh+var_4], 0FFFFFFFFh
0x7A7969: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A796E: cmp     eax, 3F8h
0x7A7973: jz      short loc_7A79BE
0x7A7975: push    15h; count
0x7A7977: push    offset aMalformedBranc; "malformed branch data"
0x7A797C: lea     ecx, [esp+0B4h+details]; this
0x7A7980: mov     [esp+0B4h+details.capacity], 0Fh
0x7A7988: mov     [esp+0B4h+details.size], ebx
0x7A798C: mov     byte ptr [esp+0B4h+details.storage], bl
0x7A7990: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A7995: push    ebx; appendSystemError
0x7A7996: lea     eax, [esp+0B0h+details]
0x7A799A: push    eax; details
0x7A799B: lea     ecx, [esp+0B4h+var_5C]; this
0x7A799F: mov     [esp+0B4h+var_4], 1
0x7A79AA: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x7A79AF: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A79B4: lea     ecx, [esp+0B0h+var_5C]
0x7A79B8: push    ecx
0x7A79B9: call    ThrowException??
0x7A79BE: mov     ecx, esi; this
0x7A79C0: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A79C5: add     eax, 0FFFFE890h; switch 18 cases
0x7A79CA: cmp     eax, 11h
0x7A79CD: ja      def_7A79D3; jumptable 007A79D3 default case
0x7A79D3: jmp     ds:jpt_7A79D3[eax*4]; switch jump
0x7A79DA: mov     ecx, esi; jumptable 007A79D3 case 6000
0x7A79DC: call    OB_CTreeFileAccess_ParseSplineProfileObject_010201A0; Reads one stock counted string from CTreeFileAccess, allocates a 0x5C stBezierSpline/profile object, and constructs it from the text. Used by frond token 13005 and branch parameter/profile tokens.
0x7A79E1: mov     ebp, [edi+50h]
0x7A79E4: mov     ebx, eax
0x7A79E6: cmp     ebp, ebx
0x7A79E8: jz      loc_7A7C3A
0x7A79EE: test    ebp, ebp
0x7A79F0: jz      short loc_7A7A02
0x7A79F2: mov     ecx, ebp; this
0x7A79F4: call    OB_StBezierSpline_Dtor_010201A0; stBezierSpline/profile destructor helper: frees nested profile/vector storage. Used when branch/frond profile pointers are replaced or destroyed.
0x7A79F9: push    ebp
0x7A79FA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A79FF: add     esp, 4
0x7A7A02: mov     [edi+50h], ebx
0x7A7A05: jmp     loc_7A7C3A
0x7A7A0A: mov     ecx, esi; jumptable 007A79D3 case 6001
0x7A7A0C: call    OB_CTreeFileAccess_ParseSplineProfileObject_010201A0; Reads one stock counted string from CTreeFileAccess, allocates a 0x5C stBezierSpline/profile object, and constructs it from the text. Used by frond token 13005 and branch parameter/profile tokens.
0x7A7A11: mov     ebp, [edi+54h]
0x7A7A14: mov     ebx, eax
0x7A7A16: cmp     ebp, ebx
0x7A7A18: jz      loc_7A7C3A
0x7A7A1E: test    ebp, ebp
0x7A7A20: jz      short loc_7A7A32
0x7A7A22: mov     ecx, ebp; this
0x7A7A24: call    OB_StBezierSpline_Dtor_010201A0; stBezierSpline/profile destructor helper: frees nested profile/vector storage. Used when branch/frond profile pointers are replaced or destroyed.
0x7A7A29: push    ebp
0x7A7A2A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A7A2F: add     esp, 4
0x7A7A32: mov     [edi+54h], ebx
0x7A7A35: jmp     loc_7A7C3A
0x7A7A3A: mov     ecx, esi; jumptable 007A79D3 case 6002
0x7A7A3C: call    OB_CTreeFileAccess_ParseSplineProfileObject_010201A0; Reads one stock counted string from CTreeFileAccess, allocates a 0x5C stBezierSpline/profile object, and constructs it from the text. Used by frond token 13005 and branch parameter/profile tokens.
0x7A7A41: mov     ebp, [edi+58h]
0x7A7A44: mov     ebx, eax
0x7A7A46: cmp     ebp, ebx
0x7A7A48: jz      loc_7A7C3A
0x7A7A4E: test    ebp, ebp
0x7A7A50: jz      short loc_7A7A62
0x7A7A52: mov     ecx, ebp; this
0x7A7A54: call    OB_StBezierSpline_Dtor_010201A0; stBezierSpline/profile destructor helper: frees nested profile/vector storage. Used when branch/frond profile pointers are replaced or destroyed.
0x7A7A59: push    ebp
0x7A7A5A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A7A5F: add     esp, 4
0x7A7A62: mov     [edi+58h], ebx
0x7A7A65: jmp     loc_7A7C3A
0x7A7A6A: mov     ecx, esi; jumptable 007A79D3 case 6003
0x7A7A6C: call    OB_CTreeFileAccess_ParseSplineProfileObject_010201A0; Reads one stock counted string from CTreeFileAccess, allocates a 0x5C stBezierSpline/profile object, and constructs it from the text. Used by frond token 13005 and branch parameter/profile tokens.
0x7A7A71: mov     ebp, [edi+5Ch]
0x7A7A74: mov     ebx, eax
0x7A7A76: cmp     ebp, ebx
0x7A7A78: jz      loc_7A7C3A
0x7A7A7E: test    ebp, ebp
0x7A7A80: jz      short loc_7A7A92
0x7A7A82: mov     ecx, ebp; this
0x7A7A84: call    OB_StBezierSpline_Dtor_010201A0; stBezierSpline/profile destructor helper: frees nested profile/vector storage. Used when branch/frond profile pointers are replaced or destroyed.
0x7A7A89: push    ebp
0x7A7A8A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A7A8F: add     esp, 4
0x7A7A92: mov     [edi+5Ch], ebx
0x7A7A95: jmp     loc_7A7C3A
0x7A7A9A: mov     ecx, esi; jumptable 007A79D3 case 6017
0x7A7A9C: call    OB_CTreeFileAccess_ParseSplineProfileObject_010201A0; Reads one stock counted string from CTreeFileAccess, allocates a 0x5C stBezierSpline/profile object, and constructs it from the text. Used by frond token 13005 and branch parameter/profile tokens.
0x7A7AA1: mov     ebp, [edi+70h]
0x7A7AA4: mov     ebx, eax
0x7A7AA6: cmp     ebp, ebx
0x7A7AA8: jz      loc_7A7C3A
0x7A7AAE: test    ebp, ebp
0x7A7AB0: jz      short loc_7A7AC2
0x7A7AB2: mov     ecx, ebp; this
0x7A7AB4: call    OB_StBezierSpline_Dtor_010201A0; stBezierSpline/profile destructor helper: frees nested profile/vector storage. Used when branch/frond profile pointers are replaced or destroyed.
0x7A7AB9: push    ebp
0x7A7ABA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A7ABF: add     esp, 4
0x7A7AC2: mov     [edi+70h], ebx
0x7A7AC5: jmp     loc_7A7C3A
0x7A7ACA: mov     ecx, esi; jumptable 007A79D3 case 6004
0x7A7ACC: call    OB_CTreeFileAccess_ParseSplineProfileObject_010201A0; Reads one stock counted string from CTreeFileAccess, allocates a 0x5C stBezierSpline/profile object, and constructs it from the text. Used by frond token 13005 and branch parameter/profile tokens.
0x7A7AD1: mov     ebp, [edi+60h]
0x7A7AD4: mov     ebx, eax
0x7A7AD6: cmp     ebp, ebx
0x7A7AD8: jz      loc_7A7C3A
0x7A7ADE: test    ebp, ebp
0x7A7AE0: jz      short loc_7A7AF2
0x7A7AE2: mov     ecx, ebp; this
0x7A7AE4: call    OB_StBezierSpline_Dtor_010201A0; stBezierSpline/profile destructor helper: frees nested profile/vector storage. Used when branch/frond profile pointers are replaced or destroyed.
0x7A7AE9: push    ebp
0x7A7AEA: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A7AEF: add     esp, 4
0x7A7AF2: mov     [edi+60h], ebx
0x7A7AF5: jmp     loc_7A7C3A
0x7A7AFA: mov     ecx, esi; jumptable 007A79D3 case 6005
0x7A7AFC: call    OB_CTreeFileAccess_ParseSplineProfileObject_010201A0; Reads one stock counted string from CTreeFileAccess, allocates a 0x5C stBezierSpline/profile object, and constructs it from the text. Used by frond token 13005 and branch parameter/profile tokens.
0x7A7B01: mov     ebp, [edi+64h]
0x7A7B04: mov     ebx, eax
0x7A7B06: cmp     ebp, ebx
0x7A7B08: jz      loc_7A7C3A
0x7A7B0E: test    ebp, ebp
0x7A7B10: jz      short loc_7A7B22
0x7A7B12: mov     ecx, ebp; this
0x7A7B14: call    OB_StBezierSpline_Dtor_010201A0; stBezierSpline/profile destructor helper: frees nested profile/vector storage. Used when branch/frond profile pointers are replaced or destroyed.
0x7A7B19: push    ebp
0x7A7B1A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A7B1F: add     esp, 4
0x7A7B22: mov     [edi+64h], ebx
0x7A7B25: jmp     loc_7A7C3A
0x7A7B2A: mov     ecx, esi; jumptable 007A79D3 case 6006
0x7A7B2C: call    OB_CTreeFileAccess_ParseSplineProfileObject_010201A0; Reads one stock counted string from CTreeFileAccess, allocates a 0x5C stBezierSpline/profile object, and constructs it from the text. Used by frond token 13005 and branch parameter/profile tokens.
0x7A7B31: mov     ebp, [edi+68h]
0x7A7B34: mov     ebx, eax
0x7A7B36: cmp     ebp, ebx
0x7A7B38: jz      loc_7A7C3A
0x7A7B3E: test    ebp, ebp
0x7A7B40: jz      short loc_7A7B52
0x7A7B42: mov     ecx, ebp; this
0x7A7B44: call    OB_StBezierSpline_Dtor_010201A0; stBezierSpline/profile destructor helper: frees nested profile/vector storage. Used when branch/frond profile pointers are replaced or destroyed.
0x7A7B49: push    ebp
0x7A7B4A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A7B4F: add     esp, 4
0x7A7B52: mov     [edi+68h], ebx
0x7A7B55: jmp     loc_7A7C3A
0x7A7B5A: mov     ecx, esi; jumptable 007A79D3 case 6007
0x7A7B5C: call    OB_CTreeFileAccess_ParseSplineProfileObject_010201A0; Reads one stock counted string from CTreeFileAccess, allocates a 0x5C stBezierSpline/profile object, and constructs it from the text. Used by frond token 13005 and branch parameter/profile tokens.
0x7A7B61: mov     ebp, [edi+6Ch]
0x7A7B64: mov     ebx, eax
0x7A7B66: cmp     ebp, ebx
0x7A7B68: jz      loc_7A7C3A
0x7A7B6E: test    ebp, ebp
0x7A7B70: jz      short loc_7A7B82
0x7A7B72: mov     ecx, ebp; this
0x7A7B74: call    OB_StBezierSpline_Dtor_010201A0; stBezierSpline/profile destructor helper: frees nested profile/vector storage. Used when branch/frond profile pointers are replaced or destroyed.
0x7A7B79: push    ebp
0x7A7B7A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7A7B7F: add     esp, 4
0x7A7B82: mov     [edi+6Ch], ebx
0x7A7B85: jmp     loc_7A7C3A
0x7A7B8A: mov     ecx, esi; jumptable 007A79D3 case 6008
0x7A7B8C: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A7B91: mov     [edi], eax
0x7A7B93: jmp     loc_7A7C3A
0x7A7B98: mov     ecx, esi; jumptable 007A79D3 case 6009
0x7A7B9A: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A7B9F: mov     [edi+4], eax
0x7A7BA2: jmp     loc_7A7C3A
0x7A7BA7: mov     ecx, esi; jumptable 007A79D3 case 6010
0x7A7BA9: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A7BAE: fstp    dword ptr [edi+8]
0x7A7BB1: jmp     loc_7A7C3A
0x7A7BB6: mov     ecx, esi; jumptable 007A79D3 case 6011
0x7A7BB8: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A7BBD: fstp    dword ptr [edi+0Ch]
0x7A7BC0: jmp     short loc_7A7C3A
0x7A7BC2: mov     ecx, esi; jumptable 007A79D3 case 6012
0x7A7BC4: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A7BC9: fstp    dword ptr [edi+10h]
0x7A7BCC: jmp     short loc_7A7C3A
0x7A7BCE: mov     ecx, esi; jumptable 007A79D3 case 6013
0x7A7BD0: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A7BD5: fstp    dword ptr [edi+14h]
0x7A7BD8: jmp     short loc_7A7C3A
0x7A7BDA: mov     ecx, esi; jumptable 007A79D3 case 6014
0x7A7BDC: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A7BE1: fstp    dword ptr [edi+18h]
0x7A7BE4: jmp     short loc_7A7C3A
0x7A7BE6: mov     ebp, [esi]; jumptable 007A79D3 case 6015
0x7A7BE8: lea     edx, [ebp+1]
0x7A7BEB: mov     [esi], edx
0x7A7BED: mov     ecx, [esi+8]
0x7A7BF0: test    ecx, ecx
0x7A7BF2: jz      short loc_7A7BFD
0x7A7BF4: mov     eax, [esi+0Ch]
0x7A7BF7: sub     eax, ecx
0x7A7BF9: cmp     ebp, eax
0x7A7BFB: jb      short loc_7A7C02
0x7A7BFD: call    __invalid_parameter_noinfo
0x7A7C02: mov     eax, [esi+8]
0x7A7C05: cmp     byte ptr [eax+ebp], 0
0x7A7C09: setnz   cl
0x7A7C0C: mov     [edi+1Ch], cl
0x7A7C0F: jmp     short loc_7A7C3A
0x7A7C11: mov     ebp, [esi]; jumptable 007A79D3 case 6016
0x7A7C13: lea     edx, [ebp+1]
0x7A7C16: mov     [esi], edx
0x7A7C18: mov     ecx, [esi+8]
0x7A7C1B: test    ecx, ecx
0x7A7C1D: jz      short loc_7A7C28
0x7A7C1F: mov     eax, [esi+0Ch]
0x7A7C22: sub     eax, ecx
0x7A7C24: cmp     ebp, eax
0x7A7C26: jb      short loc_7A7C2D
0x7A7C28: call    __invalid_parameter_noinfo
0x7A7C2D: mov     eax, [esi+8]
0x7A7C30: cmp     byte ptr [eax+ebp], 0
0x7A7C34: setnz   cl
0x7A7C37: mov     [edi+1Dh], cl
0x7A7C3A: mov     ecx, esi; this
0x7A7C3C: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A7C41: cmp     eax, 3F9h
0x7A7C46: jnz     loc_7A79C5
0x7A7C4C: mov     eax, edi
0x7A7C4E: mov     ecx, [esp+0ACh+var_C]
0x7A7C55: mov     large fs:0, ecx
0x7A7C5C: pop     ecx
0x7A7C5D: pop     edi
0x7A7C5E: pop     esi
0x7A7C5F: pop     ebp
0x7A7C60: pop     ebx
0x7A7C61: add     esp, 98h
0x7A7C67: retn
0x7A7C68: push    24h ; '$'; jumptable 007A79D3 default case
0x7A7C6A: push    offset aMalformedGen_1; "malformed general branch information"
0x7A7C6F: lea     ecx, [esp+0B4h+var_94]; this
0x7A7C73: mov     [esp+0B4h+var_94.capacity], 0Fh
0x7A7C7B: mov     [esp+0B4h+var_94.size], 0
0x7A7C83: mov     byte ptr [esp+0B4h+var_94.storage], 0
0x7A7C88: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A7C8D: push    0; appendSystemError
0x7A7C8F: lea     edx, [esp+0B0h+var_94]
0x7A7C93: push    edx; details
0x7A7C94: lea     ecx, [esp+0B4h+var_34]; this
0x7A7C9B: mov     [esp+0B4h+var_4], 2
0x7A7CA6: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x7A7CAB: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A7CB0: lea     eax, [esp+0B0h+var_34]
0x7A7CB4: push    eax
0x7A7CB5: call    ThrowException??
0x9CCE10: mov     eax, [ebp-98h]
0x9CCE16: push    eax
0x9CCE17: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CCE1C: pop     ecx
0x9CCE1D: retn
0x9CCE1E: lea     ecx, [ebp-78h]; this
0x9CCE21: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCE26: lea     ecx, [ebp-94h]; this
0x9CCE2C: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CCE31: mov     edx, [esp+arg_4]
0x9CCE35: lea     eax, [edx-9Ch]
0x9CCE3B: mov     ecx, [edx-0A0h]
0x9CCE41: xor     ecx, eax
0x9CCE43: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CCE48: mov     eax, offset stru_AF6210
0x9CCE4D: jmp     ___CxxFrameHandler3
