0x78C160: push    ebp; CSpeedTreeRT::DeleteBranchGeometry. After Compute, deletes branch geometry only for non-instance trees when the shared instance refcount is exactly one.
0x78C161: mov     ebp, esp
0x78C163: push    0FFFFFFFFh
0x78C165: push    offset SEH_78C160
0x78C16A: mov     eax, large fs:0
0x78C170: push    eax
0x78C171: sub     esp, 40h
0x78C174: push    ebx
0x78C175: push    esi
0x78C176: push    edi
0x78C177: mov     eax, ds:0B30AACh
0x78C17C: xor     eax, ebp
0x78C17E: push    eax
0x78C17F: lea     eax, [ebp+var_C]
0x78C182: mov     large fs:0, eax
0x78C188: mov     [ebp+var_10], esp
0x78C18B: mov     esi, ecx
0x78C18D: xor     ebx, ebx
0x78C18F: cmp     [esi+45h], bl
0x78C192: mov     [ebp+var_4], ebx
0x78C195: jz      short loc_78C1BE
0x78C197: mov     edi, [esi+4]
0x78C19A: cmp     edi, ebx
0x78C19C: jz      short loc_78C1BE
0x78C19E: cmp     [esi+34h], ebx
0x78C1A1: jnz     short loc_78C1BE
0x78C1A3: mov     eax, [esi+30h]
0x78C1A6: cmp     dword ptr [eax], 1
0x78C1A9: jnz     short loc_78C1BE
0x78C1AB: mov     ecx, edi; this
0x78C1AD: call    OB_CIndexedGeometry_dtor_010201A0; OBLIVION AUTHORITY (2026-08-30): CIndexedGeometry destructor releases CPU-wind state, owned per-strip unsigned-short buffers, nested length/pointer vectors, triangle counts, and all vertex-attribute vector storage.
0x78C1B2: push    edi
0x78C1B3: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x78C1B8: add     esp, 4
0x78C1BB: mov     [esi+4], ebx
0x78C1BE: mov     ecx, [ebp+var_C]
0x78C1C1: mov     large fs:0, ecx
0x78C1C8: pop     ecx
0x78C1C9: pop     edi
0x78C1CA: pop     esi
0x78C1CB: pop     ebx
0x78C1CC: mov     esp, ebp
0x78C1CE: pop     ebp
0x78C1CF: retn
0x78C1D0: mov     ecx, [ebp+var_14]
0x78C1D3: mov     edx, [ecx]
0x78C1D5: mov     eax, [edx+4]
0x78C1D8: call    eax
0x78C1DA: push    eax
0x78C1DB: push    offset aCspeedtreer_11; "CSpeedTreeRT::DeleteBranchGeometry"
0x78C1E0: push    offset aSFailedS; "%s - failed [%s]"
0x78C1E5: lea     esi, [ebp+result]; result
0x78C1E8: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78C1ED: add     esp, 0Ch
0x78C1F0: cmp     dword ptr [eax+18h], 10h
0x78C1F4: mov     byte ptr [ebp+var_4], 2
0x78C1F8: jb      short loc_78C1FF
0x78C1FA: mov     eax, [eax+4]
0x78C1FD: jmp     short loc_78C202
0x78C1FF: add     eax, 4
0x78C202: push    eax; error
0x78C203: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78C208: add     esp, 4
0x78C20B: lea     ecx, [ebp+result]; this
0x78C20E: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78C213: mov     eax, offset loc_78C219
0x78C218: retn
0x78C219: mov     ecx, [ebp+var_C]
0x78C21C: mov     large fs:0, ecx
0x78C223: pop     ecx
0x78C224: pop     edi
0x78C225: pop     esi
0x78C226: pop     ebx
0x78C227: mov     esp, ebp
0x78C229: pop     ebp
0x78C22A: retn
0x78C22B: push    offset aCspeedtreer_11; "CSpeedTreeRT::DeleteBranchGeometry"
0x78C230: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78C235: lea     esi, [ebp+var_4C]; result
0x78C238: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78C23D: add     esp, 8
0x78C240: cmp     dword ptr [eax+18h], 10h
0x78C244: mov     byte ptr [ebp+var_4], 3
0x78C248: jb      short loc_78C24F
0x78C24A: mov     eax, [eax+4]
0x78C24D: jmp     short loc_78C252
0x78C24F: add     eax, 4
0x78C252: push    eax; error
0x78C253: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78C258: add     esp, 4
0x78C25B: lea     ecx, [ebp+var_4C]; this
0x78C25E: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78C263: mov     eax, offset loc_78C269
0x78C268: retn
0x78C269: mov     ecx, [ebp+var_C]
0x78C26C: mov     large fs:0, ecx
0x78C273: pop     ecx
0x78C274: pop     edi
0x78C275: pop     esi
0x78C276: pop     ebx
0x78C277: mov     esp, ebp
0x78C279: pop     ebp
0x78C27A: retn
0x9CB7A0: lea     ecx, [ebp+result]; this
0x9CB7A3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB7A8: lea     ecx, [ebp+var_4C]; this
0x9CB7AB: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB7B0: mov     edx, [esp-4+arg_4]
0x9CB7B4: lea     eax, [edx+0Ch]
0x9CB7B7: mov     ecx, [edx-50h]
0x9CB7BA: xor     ecx, eax
0x9CB7BC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB7C1: mov     eax, offset stru_AF432C
0x9CB7C6: jmp     ___CxxFrameHandler3
