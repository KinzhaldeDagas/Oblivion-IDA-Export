0x78BFB0: push    ebp; CSpeedTreeRT::ComputeLodLevel. For instances, temporarily applies instance position to the shared tree engine, computes/stores instance LOD, then restores parent position and LOD; base trees compute directly.
0x78BFB1: mov     ebp, esp
0x78BFB3: push    0FFFFFFFFh
0x78BFB5: push    offset SEH_78BFB0
0x78BFBA: mov     eax, large fs:0
0x78BFC0: push    eax
0x78BFC1: sub     esp, 54h
0x78BFC4: push    ebx
0x78BFC5: push    esi
0x78BFC6: push    edi
0x78BFC7: mov     eax, ds:0B30AACh
0x78BFCC: xor     eax, ebp
0x78BFCE: push    eax
0x78BFCF: lea     eax, [ebp+var_C]
0x78BFD2: mov     large fs:0, eax
0x78BFD8: mov     [ebp+var_10], esp
0x78BFDB: mov     esi, ecx
0x78BFDD: mov     ecx, [esi+34h]
0x78BFE0: test    ecx, ecx
0x78BFE2: mov     [ebp+var_4], 0
0x78BFE9: jz      short loc_78C04E
0x78BFEB: mov     eax, [esi]
0x78BFED: mov     edx, [eax+0Ch]
0x78BFF0: fld     dword ptr [eax+14h]
0x78BFF3: mov     edi, [eax+4]
0x78BFF6: fstp    [ebp+var_18]
0x78BFF9: mov     ebx, [eax+8]
0x78BFFC: mov     [ebp+var_20], edx
0x78BFFF: mov     edx, [ecx+4]
0x78C002: mov     [eax+4], edx
0x78C005: mov     edx, [ecx+8]
0x78C008: mov     [eax+8], edx
0x78C00B: mov     ecx, [ecx+0Ch]
0x78C00E: mov     [eax+0Ch], ecx
0x78C011: mov     ecx, [esi]; this
0x78C013: call    CTreeEngine__ComputeLod; CTreeEngine::ComputeLod-style helper. Computes LOD from global camera position against tree position and near/far LOD limits at +0x44/+0x40, clamps to [0,1], stores at +0x14.
0x78C018: fstp    [ebp+var_14]
0x78C01B: mov     edx, [esi+34h]
0x78C01E: fld     [ebp+var_14]
0x78C021: mov     ecx, [ebp+var_20]
0x78C024: fstp    dword ptr [edx+10h]
0x78C027: mov     eax, [esi]
0x78C029: fld     [ebp+var_18]
0x78C02C: fstp    dword ptr [eax+14h]
0x78C02F: mov     esi, [esi]
0x78C031: add     esi, 4
0x78C034: mov     [esi], edi
0x78C036: mov     [esi+4], ebx
0x78C039: mov     [esi+8], ecx
0x78C03C: mov     ecx, [ebp+var_C]
0x78C03F: mov     large fs:0, ecx
0x78C046: pop     ecx
0x78C047: pop     edi
0x78C048: pop     esi
0x78C049: pop     ebx
0x78C04A: mov     esp, ebp
0x78C04C: pop     ebp
0x78C04D: retn
0x78C04E: mov     ecx, [esi]; this
0x78C050: call    CTreeEngine__ComputeLod; CTreeEngine::ComputeLod-style helper. Computes LOD from global camera position against tree position and near/far LOD limits at +0x44/+0x40, clamps to [0,1], stores at +0x14.
0x78C055: fstp    st
0x78C057: mov     ecx, [ebp+var_C]
0x78C05A: mov     large fs:0, ecx
0x78C061: pop     ecx
0x78C062: pop     edi
0x78C063: pop     esi
0x78C064: pop     ebx
0x78C065: mov     esp, ebp
0x78C067: pop     ebp
0x78C068: retn
0x78C069: mov     ecx, [ebp+var_1C]
0x78C06C: mov     edx, [ecx]
0x78C06E: mov     eax, [edx+4]
0x78C071: call    eax
0x78C073: push    eax
0x78C074: push    offset aCspeedtreertCo; "CSpeedTreeRT::ComputeLodLevel"
0x78C079: push    offset aSFailedS; "%s - failed [%s]"
0x78C07E: lea     esi, [ebp+result]; result
0x78C081: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78C086: add     esp, 0Ch
0x78C089: cmp     dword ptr [eax+18h], 10h
0x78C08D: mov     byte ptr [ebp+var_4], 2
0x78C091: jb      short loc_78C098
0x78C093: mov     eax, [eax+4]
0x78C096: jmp     short loc_78C09B
0x78C098: add     eax, 4
0x78C09B: push    eax; error
0x78C09C: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78C0A1: add     esp, 4
0x78C0A4: lea     ecx, [ebp+result]; this
0x78C0A7: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78C0AC: mov     eax, offset loc_78C0B2
0x78C0B1: retn
0x78C0B2: mov     ecx, [ebp+var_C]
0x78C0B5: mov     large fs:0, ecx
0x78C0BC: pop     ecx
0x78C0BD: pop     edi
0x78C0BE: pop     esi
0x78C0BF: pop     ebx
0x78C0C0: mov     esp, ebp
0x78C0C2: pop     ebp
0x78C0C3: retn
0x78C0C4: push    offset aCspeedtreertCo; "CSpeedTreeRT::ComputeLodLevel"
0x78C0C9: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78C0CE: lea     esi, [ebp+var_60]; result
0x78C0D1: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78C0D6: add     esp, 8
0x78C0D9: cmp     dword ptr [eax+18h], 10h
0x78C0DD: mov     byte ptr [ebp+var_4], 3
0x78C0E1: jb      short loc_78C0E8
0x78C0E3: mov     eax, [eax+4]
0x78C0E6: jmp     short loc_78C0EB
0x78C0E8: add     eax, 4
0x78C0EB: push    eax; error
0x78C0EC: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78C0F1: add     esp, 4
0x78C0F4: lea     ecx, [ebp+var_60]; this
0x78C0F7: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78C0FC: mov     eax, offset loc_78C03C
0x78C101: retn
0x9CB770: lea     ecx, [ebp+result]; this
0x9CB773: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB778: lea     ecx, [ebp+var_60]; this
0x9CB77B: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB780: mov     edx, [esp-4+arg_4]
0x9CB784: lea     eax, [edx+0Ch]
0x9CB787: mov     ecx, [edx-64h]
0x9CB78A: xor     ecx, eax
0x9CB78C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB791: mov     eax, offset stru_AF42B4
0x9CB796: jmp     ___CxxFrameHandler3
