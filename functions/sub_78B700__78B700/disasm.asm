0x78B700: push    ebp; CSpeedTreeRT::SetNumLeafRockingGroups. Before Compute, stores at CTreeEngine+0xBC and coerces zero to one; after Compute reports the stock no-effect error.
0x78B701: mov     ebp, esp
0x78B703: push    0FFFFFFFFh
0x78B705: push    offset SEH_78B700
0x78B70A: mov     eax, large fs:0
0x78B710: push    eax
0x78B711: sub     esp, 40h
0x78B714: push    ebx
0x78B715: push    esi
0x78B716: push    edi
0x78B717: mov     eax, ds:0B30AACh
0x78B71C: xor     eax, ebp
0x78B71E: push    eax
0x78B71F: lea     eax, [ebp+var_C]
0x78B722: mov     large fs:0, eax
0x78B728: mov     [ebp+var_10], esp
0x78B72B: cmp     byte ptr [ecx+45h], 0
0x78B72F: mov     [ebp+var_4], 0
0x78B736: jnz     short loc_78B760
0x78B738: mov     eax, [ebp+groupCount]
0x78B73B: test    eax, eax
0x78B73D: jnz     short loc_78B744
0x78B73F: mov     eax, 1
0x78B744: mov     ecx, [ecx]
0x78B746: mov     [ecx+0BCh], eax
0x78B74C: mov     ecx, [ebp+var_C]
0x78B74F: mov     large fs:0, ecx
0x78B756: pop     ecx
0x78B757: pop     edi
0x78B758: pop     esi
0x78B759: pop     ebx
0x78B75A: mov     esp, ebp
0x78B75C: pop     ebp
0x78B75D: retn    4
0x78B760: push    47h ; 'G'; count
0x78B762: push    offset aSetnumleafrock; "SetNumLeafRockingGroups() has no effect"...
0x78B767: mov     ecx, offset OB_g_strError_010201A0; this
0x78B76C: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x78B771: mov     ecx, [ebp+var_C]
0x78B774: mov     large fs:0, ecx
0x78B77B: pop     ecx
0x78B77C: pop     edi
0x78B77D: pop     esi
0x78B77E: pop     ebx
0x78B77F: mov     esp, ebp
0x78B781: pop     ebp
0x78B782: retn    4
0x78B785: mov     ecx, [ebp+var_14]
0x78B788: mov     edx, [ecx]
0x78B78A: mov     eax, [edx+4]
0x78B78D: call    eax
0x78B78F: push    eax
0x78B790: push    offset aCspeedtreert_4; "CSpeedTreeRT::SetLeafRockingState"
0x78B795: push    offset aSFailedS; "%s - failed [%s]"
0x78B79A: lea     esi, [ebp+result]; result
0x78B79D: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78B7A2: add     esp, 0Ch
0x78B7A5: cmp     dword ptr [eax+18h], 10h
0x78B7A9: mov     byte ptr [ebp+var_4], 2
0x78B7AD: jb      short loc_78B7B4
0x78B7AF: mov     eax, [eax+4]
0x78B7B2: jmp     short loc_78B7B7
0x78B7B4: add     eax, 4
0x78B7B7: push    eax; error
0x78B7B8: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78B7BD: add     esp, 4
0x78B7C0: lea     ecx, [ebp+result]; this
0x78B7C3: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78B7C8: mov     eax, offset loc_78B7CE
0x78B7CD: retn
0x78B7CE: mov     ecx, [ebp+var_C]
0x78B7D1: mov     large fs:0, ecx
0x78B7D8: pop     ecx
0x78B7D9: pop     edi
0x78B7DA: pop     esi
0x78B7DB: pop     ebx
0x78B7DC: mov     esp, ebp
0x78B7DE: pop     ebp
0x78B7DF: retn    4
0x78B7E2: push    offset aCspeedtreert_4; "CSpeedTreeRT::SetLeafRockingState"
0x78B7E7: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78B7EC: lea     esi, [ebp+var_4C]; result
0x78B7EF: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78B7F4: add     esp, 8
0x78B7F7: cmp     dword ptr [eax+18h], 10h
0x78B7FB: mov     byte ptr [ebp+var_4], 3
0x78B7FF: jb      short loc_78B806
0x78B801: mov     eax, [eax+4]
0x78B804: jmp     short loc_78B809
0x78B806: add     eax, 4
0x78B809: push    eax; error
0x78B80A: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78B80F: add     esp, 4
0x78B812: lea     ecx, [ebp+var_4C]; this
0x78B815: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78B81A: mov     eax, offset loc_78B74C
0x78B81F: retn
0x9CB620: lea     ecx, [ebp+result]; this
0x9CB623: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB628: lea     ecx, [ebp+var_4C]; this
0x9CB62B: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB630: mov     edx, [esp-4+arg_4]
0x9CB634: lea     eax, [edx+0Ch]
0x9CB637: mov     ecx, [edx-50h]
0x9CB63A: xor     ecx, eax
0x9CB63C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB641: mov     eax, offset stru_AF3F6C
0x9CB646: jmp     ___CxxFrameHandler3
