0x794340: push    0FFFFFFFFh; Oblivion CLightingEngine::Parse. Reads tokens 8002..8009 into the observed 0xB0 lighting-engine layout and terminates on 8001; malformed tokens throw IdvFileError. Fallout/source provide only the historical Parse name after the local token-to-field mapping was established.
0x794342: push    offset SEH_794340
0x794347: mov     eax, large fs:0
0x79434D: push    eax
0x79434E: sub     esp, 44h
0x794351: push    ebx
0x794352: push    ebp
0x794353: push    esi
0x794354: push    edi
0x794355: mov     eax, ds:0B30AACh
0x79435A: xor     eax, esp
0x79435C: push    eax
0x79435D: lea     eax, [esp+64h+var_C]
0x794361: mov     large fs:0, eax
0x794367: mov     ebp, ecx
0x794369: mov     esi, [esp+64h+file]
0x79436D: mov     ecx, esi; this
0x79436F: call    OB_CTreeFileAccess_ReadDword_010201A0; SpeedTreeOBSE 2026-05-25 stock-tail fidelity pass: top-level 8000 lighting reads a first inner token before accepting 8001; immediate 8001 is malformed in the observed Oblivion path.
0x794374: jmp     short loc_794380
0x794380: add     eax, 0FFFFE0BEh; switch 8 cases
0x794385: cmp     eax, 7
0x794388: ja      def_79438E; jumptable 0079438E default case
0x79438E: jmp     ds:jpt_79438E[eax*4]; switch jump
0x794395: mov     ecx, esi; jumptable 0079438E case 8002
0x794397: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x79439C: mov     [ebp+0], eax
0x79439F: jmp     loc_794427
0x7943A4: lea     edi, [ebp+4]; jumptable 0079438E case 8003
0x7943A7: mov     ebx, 0Dh
0x7943AC: lea     esp, [esp+0]
0x7943B0: mov     ecx, esi; this
0x7943B2: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7943B7: fstp    dword ptr [edi]
0x7943B9: add     edi, 4
0x7943BC: sub     ebx, 1
0x7943BF: jnz     short loc_7943B0
0x7943C1: jmp     short loc_794427
0x7943C3: mov     ecx, esi; jumptable 0079438E case 8004
0x7943C5: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7943CA: mov     [ebp+38h], eax; SPT lighting token 8004 stores leafLightingMethod (0 dynamic, 1 static). BSTreeModel::InitFromBase later forces method 0 at 0x560818.
0x7943CD: jmp     short loc_794427
0x7943CF: lea     edi, [ebp+3Ch]; jumptable 0079438E case 8005
0x7943D2: mov     ebx, 0Dh
0x7943D7: mov     ecx, esi; this
0x7943D9: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7943DE: fstp    dword ptr [edi]
0x7943E0: add     edi, 4
0x7943E3: sub     ebx, 1
0x7943E6: jnz     short loc_7943D7
0x7943E8: jmp     short loc_794427
0x7943EA: mov     ecx, esi; jumptable 0079438E case 8006
0x7943EC: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7943F1: fstp    dword ptr [ebp+70h]; SPT lighting token 8006 stores leafLightingAdjustmentScalar.
0x7943F4: jmp     short loc_794427
0x7943F6: mov     ecx, esi; jumptable 0079438E case 8007
0x7943F8: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7943FD: mov     [ebp+74h], eax; SPT lighting token 8007 stores staticLightingStyle: 0 BASIC/no work here, 1 USE_LIGHT_SOURCES/bit0, 2 SIMULATE_SHADOWS/bit1.
0x794400: jmp     short loc_794427
0x794402: mov     ecx, esi; jumptable 0079438E case 8008
0x794404: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x794409: mov     [ebp+78h], eax
0x79440C: jmp     short loc_794427
0x79440E: lea     edi, [ebp+7Ch]; jumptable 0079438E case 8009
0x794411: mov     ebx, 0Dh
0x794416: mov     ecx, esi; this
0x794418: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x79441D: fstp    dword ptr [edi]
0x79441F: add     edi, 4
0x794422: sub     ebx, 1
0x794425: jnz     short loc_794416
0x794427: mov     ecx, esi; this
0x794429: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x79442E: cmp     eax, 1F41h
0x794433: jnz     loc_794380
0x794439: mov     ecx, [esp+64h+var_C]
0x79443D: mov     large fs:0, ecx
0x794444: pop     ecx
0x794445: pop     edi
0x794446: pop     esi
0x794447: pop     ebp
0x794448: pop     ebx
0x794449: add     esp, 50h
0x79444C: retn    4
0x79444F: push    1Eh; jumptable 0079438E default case
0x794451: xor     ebx, ebx
0x794453: push    offset aMalformedLight; "malformed lighting information"
0x794458: lea     ecx, [esp+6Ch+details]; this
0x79445C: mov     [esp+6Ch+details.capacity], 0Fh
0x794464: mov     [esp+6Ch+details.size], ebx
0x794468: mov     byte ptr [esp+6Ch+details.storage], bl
0x79446C: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x794471: push    ebx; appendSystemError
0x794472: lea     eax, [esp+68h+details]
0x794476: push    eax; details
0x794477: lea     ecx, [esp+6Ch+var_34]; this
0x79447B: mov     [esp+6Ch+var_4], ebx
0x79447F: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x794484: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x794489: lea     ecx, [esp+68h+var_34]
0x79448D: push    ecx
0x79448E: call    ThrowException??
0x9CBD00: lea     ecx, [ebp-50h]; this
0x9CBD03: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CBD08: mov     edx, dword ptr [esp+insertLeft]
0x9CBD0C: lea     eax, [edx-54h]
0x9CBD0F: mov     ecx, [edx-58h]
0x9CBD12: xor     ecx, eax
0x9CBD14: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBD19: mov     eax, offset stru_AF4C48
0x9CBD1E: jmp     ___CxxFrameHandler3
