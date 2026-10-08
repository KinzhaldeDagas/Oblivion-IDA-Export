0x7A28E0: push    0FFFFFFFFh; CTreeEngine LOD-info parser. Writes branch LOD count +0x70, leaf LOD count +0xC0, and branch/leaf reduction fields +0xDC..+0xEC.
0x7A28E2: push    offset SEH_7A28E0
0x7A28E7: mov     eax, large fs:0
0x7A28ED: push    eax
0x7A28EE: sub     esp, 44h
0x7A28F1: push    esi
0x7A28F2: push    edi
0x7A28F3: mov     eax, ds:0B30AACh
0x7A28F8: xor     eax, esp
0x7A28FA: push    eax
0x7A28FB: lea     eax, [esp+5Ch+var_C]
0x7A28FF: mov     large fs:0, eax
0x7A2905: mov     edi, ecx
0x7A2907: mov     esi, [esp+5Ch+file]
0x7A290B: mov     ecx, esi; this
0x7A290D: call    OB_CTreeFileAccess_ReadDword_010201A0; SpeedTreeOBSE 2026-05-25 stock-tail fidelity pass: nested 9005/9006 engine LOD parser reads a first recognized 9007/9008/9010/9011/9012/9013/9014 payload before accepting 9006.
0x7A2912: add     eax, 0FFFFDCD1h; switch 8 cases
0x7A2917: cmp     eax, 7
0x7A291A: ja      def_7A2920; jumptable 007A2920 default case, case 9009
0x7A2920: jmp     ds:jpt_7A2920[eax*4]; switch jump
0x7A2927: mov     ecx, esi; jumptable 007A2920 case 9007
0x7A2929: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A292E: mov     [edi+70h], eax
0x7A2931: jmp     short loc_7A29AA
0x7A2933: mov     ecx, esi; jumptable 007A2920 case 9008
0x7A2935: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A293A: fstp    dword ptr [edi+0DCh]
0x7A2940: jmp     short loc_7A29AA
0x7A2942: mov     ecx, esi; jumptable 007A2920 case 9010
0x7A2944: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A2949: fstp    [esp+5Ch+file]
0x7A294D: fld     [esp+5Ch+file]
0x7A2951: fst     dword ptr [edi+0E4h]
0x7A2957: fldz
0x7A2959: fucompp
0x7A295B: fnstsw  ax
0x7A295D: test    ah, 44h
0x7A2960: jp      short loc_7A29AA
0x7A2962: fld     dword ptr ds:0A2FAACh
0x7A2968: fstp    dword ptr [edi+0E4h]
0x7A296E: jmp     short loc_7A29AA
0x7A2970: mov     ecx, esi; jumptable 007A2920 case 9011
0x7A2972: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A2977: mov     [edi+0C0h], eax
0x7A297D: jmp     short loc_7A29AA
0x7A297F: mov     ecx, esi; jumptable 007A2920 case 9012
0x7A2981: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A2986: fstp    dword ptr [edi+0E0h]
0x7A298C: jmp     short loc_7A29AA
0x7A298E: mov     ecx, esi; jumptable 007A2920 case 9013
0x7A2990: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A2995: fstp    dword ptr [edi+0E8h]
0x7A299B: jmp     short loc_7A29AA
0x7A299D: mov     ecx, esi; jumptable 007A2920 case 9014
0x7A299F: call    OB_CTreeFileAccess_ReadFloat_010201A0; CTreeFileAccess::ParseFloat. Bounds-checks cursor, advances by 4, returns little-endian float.
0x7A29A4: fstp    dword ptr [edi+0ECh]
0x7A29AA: mov     ecx, esi; this
0x7A29AC: call    OB_CTreeFileAccess_ReadDword_010201A0; CTreeFileAccess::ParseToken/ParseInt-style 4-byte read. Bounds-checks cursor against owned buffer, advances cursor by 4, returns little-endian dword.
0x7A29B1: cmp     eax, 232Eh
0x7A29B6: jnz     loc_7A2912
0x7A29BC: mov     ecx, [esp+5Ch+var_C]
0x7A29C0: mov     large fs:0, ecx
0x7A29C7: pop     ecx
0x7A29C8: pop     edi
0x7A29C9: pop     esi
0x7A29CA: add     esp, 50h
0x7A29CD: retn    4
0x7A29D0: push    19h; jumptable 007A2920 default case, case 9009
0x7A29D2: push    offset aMalformedEngin; "malformed engine lod data"
0x7A29D7: lea     ecx, [esp+64h+details]; this
0x7A29DB: mov     [esp+64h+details.capacity], 0Fh
0x7A29E3: mov     [esp+64h+details.size], 0
0x7A29EB: mov     byte ptr [esp+64h+details.storage], 0
0x7A29F0: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x7A29F5: push    0; appendSystemError
0x7A29F7: lea     eax, [esp+60h+details]
0x7A29FB: push    eax; details
0x7A29FC: lea     ecx, [esp+64h+var_34]; this
0x7A2A00: mov     [esp+64h+var_4], 0
0x7A2A08: call    OB_IdvFileError_Ctor_010201A0; Oblivion IdvFileError constructor: builds details + ' [' + optional strerror(errno) + ']', constructs the binary runtime_error base, then installs IdvFileError vftable. RT4.1 corroborates the message expression but its st_string inheritance is not used for this older binary layout.
0x7A2A0D: push    offset __TI3?AVIdvFileError@@; throw info for 'class IdvFileError'
0x7A2A12: lea     ecx, [esp+60h+var_34]
0x7A2A16: push    ecx
0x7A2A17: call    ThrowException??
0x9AB190: lea     ecx, [ebp-50h]; this
0x9AB193: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9AB198: mov     edx, [esp+arg_4]
0x9AB19C: lea     eax, [edx-4Ch]
0x9AB19F: mov     ecx, [edx-50h]
0x9AB1A2: xor     ecx, eax
0x9AB1A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB1A9: mov     eax, offset stru_AD80C8
0x9AB1AE: jmp     ___CxxFrameHandler3
