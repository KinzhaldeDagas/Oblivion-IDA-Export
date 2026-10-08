0x78C280: push    ebp; CSpeedTreeRT::GetLeafBillboardTable. Returns the leaf-geometry billboard table and writes its entry count through the caller output pointer.
0x78C281: mov     ebp, esp
0x78C283: push    0FFFFFFFFh
0x78C285: push    offset SEH_78C280
0x78C28A: mov     eax, large fs:0
0x78C290: push    eax
0x78C291: sub     esp, 44h
0x78C294: push    ebx
0x78C295: push    esi
0x78C296: push    edi
0x78C297: mov     eax, ds:0B30AACh
0x78C29C: xor     eax, ebp
0x78C29E: push    eax
0x78C29F: lea     eax, [ebp+var_C]
0x78C2A2: mov     large fs:0, eax
0x78C2A8: mov     [ebp+var_10], esp
0x78C2AB: mov     ecx, [ecx+8]; this
0x78C2AE: xor     eax, eax
0x78C2B0: mov     [ebp+var_14], eax
0x78C2B3: mov     [ebp+var_4], eax
0x78C2B6: mov     eax, [ebp+entryCount]
0x78C2B9: push    eax; entryCount
0x78C2BA: call    OB_CLeafGeometry_GetLeafBillboardTable_010201A0; Copies LOD 0's generated leaf-card vertex table into the persistent vertex-program billboard table; entryCount is returned in floats.
0x78C2BF: mov     [ebp+var_14], eax
0x78C2C2: mov     eax, [ebp+var_14]
0x78C2C5: mov     ecx, [ebp+var_C]
0x78C2C8: mov     large fs:0, ecx
0x78C2CF: pop     ecx
0x78C2D0: pop     edi
0x78C2D1: pop     esi
0x78C2D2: pop     ebx
0x78C2D3: mov     esp, ebp
0x78C2D5: pop     ebp
0x78C2D6: retn    4
0x78C2D9: mov     ecx, [ebp+var_18]
0x78C2DC: mov     edx, [ecx]
0x78C2DE: mov     eax, [edx+4]
0x78C2E1: call    eax
0x78C2E3: push    eax
0x78C2E4: push    offset aCspeedtreer_12; "CSpeedTreeRT::GetLeafBillboardTable"
0x78C2E9: push    offset aSFailedS; "%s - failed [%s]"
0x78C2EE: lea     esi, [ebp+result]; result
0x78C2F1: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78C2F6: add     esp, 0Ch
0x78C2F9: cmp     dword ptr [eax+18h], 10h
0x78C2FD: mov     byte ptr [ebp+var_4], 2
0x78C301: jb      short loc_78C308
0x78C303: mov     eax, [eax+4]
0x78C306: jmp     short loc_78C30B
0x78C308: add     eax, 4
0x78C30B: push    eax; error
0x78C30C: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78C311: add     esp, 4
0x78C314: lea     ecx, [ebp+result]; this
0x78C317: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78C31C: mov     eax, offset loc_78C322
0x78C321: retn
0x78C322: jmp     short loc_78C2C2
0x78C324: push    offset aCspeedtreer_12; "CSpeedTreeRT::GetLeafBillboardTable"
0x78C329: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78C32E: lea     esi, [ebp+var_50]; result
0x78C331: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78C336: add     esp, 8
0x78C339: cmp     dword ptr [eax+18h], 10h
0x78C33D: mov     byte ptr [ebp+var_4], 3
0x78C341: jb      short loc_78C348
0x78C343: mov     eax, [eax+4]
0x78C346: jmp     short loc_78C34B
0x78C348: add     eax, 4
0x78C34B: push    eax; error
0x78C34C: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78C351: add     esp, 4
0x78C354: lea     ecx, [ebp+var_50]; this
0x78C357: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78C35C: mov     eax, offset loc_78C2C2
0x78C361: retn
0x9CB7D0: lea     ecx, [ebp+result]; this
0x9CB7D3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB7D8: lea     ecx, [ebp+var_50]; this
0x9CB7DB: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB7E0: mov     edx, [esp-4+arg_4]
0x9CB7E4: lea     eax, [edx+0Ch]
0x9CB7E7: mov     ecx, [edx-54h]
0x9CB7EA: xor     ecx, eax
0x9CB7EC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB7F1: mov     eax, offset stru_AF43A4
0x9CB7F6: jmp     ___CxxFrameHandler3
