0x789EC0: push    ebp; CSpeedTreeRT::DeleteFrondGeometry. After Compute, deletes frond geometry only for non-instance trees when the shared instance refcount is exactly one; MakeBase calls this after TES4 render-resource build.
0x789EC1: mov     ebp, esp
0x789EC3: push    0FFFFFFFFh
0x789EC5: push    offset SEH_789EC0
0x789ECA: mov     eax, large fs:0
0x789ED0: push    eax
0x789ED1: sub     esp, 40h
0x789ED4: push    ebx
0x789ED5: push    esi
0x789ED6: push    edi
0x789ED7: mov     eax, ds:0B30AACh
0x789EDC: xor     eax, ebp
0x789EDE: push    eax
0x789EDF: lea     eax, [ebp+var_C]
0x789EE2: mov     large fs:0, eax
0x789EE8: mov     [ebp+var_10], esp
0x789EEB: mov     esi, ecx
0x789EED: xor     ebx, ebx
0x789EEF: cmp     [esi+45h], bl
0x789EF2: mov     [ebp+var_4], ebx
0x789EF5: jz      short loc_789F22
0x789EF7: mov     edi, [esi+60h]
0x789EFA: cmp     edi, ebx
0x789EFC: jz      short loc_789F22
0x789EFE: cmp     [esi+34h], ebx
0x789F01: jnz     short loc_789F22
0x789F03: mov     eax, [esi+30h]
0x789F06: cmp     eax, ebx
0x789F08: jz      short loc_789F22
0x789F0A: cmp     dword ptr [eax], 1
0x789F0D: jnz     short loc_789F22
0x789F0F: mov     ecx, edi; this
0x789F11: call    OB_CIndexedGeometry_dtor_010201A0; OBLIVION AUTHORITY (2026-08-30): CIndexedGeometry destructor releases CPU-wind state, owned per-strip unsigned-short buffers, nested length/pointer vectors, triangle counts, and all vertex-attribute vector storage.
0x789F16: push    edi
0x789F17: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x789F1C: add     esp, 4
0x789F1F: mov     [esi+60h], ebx
0x789F22: mov     ecx, [ebp+var_C]
0x789F25: mov     large fs:0, ecx
0x789F2C: pop     ecx
0x789F2D: pop     edi
0x789F2E: pop     esi
0x789F2F: pop     ebx
0x789F30: mov     esp, ebp
0x789F32: pop     ebp
0x789F33: retn
0x789F34: mov     ecx, [ebp+var_14]
0x789F37: mov     eax, [ecx]
0x789F39: mov     edx, [eax+4]
0x789F3C: call    edx
0x789F3E: push    eax
0x789F3F: push    offset aCspeedtreertDe; "CSpeedTreeRT::DeleteFrondGeometry"
0x789F44: push    offset aSFailedS; "%s - failed [%s]"
0x789F49: lea     esi, [ebp+result]; result
0x789F4C: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x789F51: add     esp, 0Ch
0x789F54: cmp     dword ptr [eax+18h], 10h
0x789F58: mov     byte ptr [ebp+var_4], 2
0x789F5C: jb      short loc_789F63
0x789F5E: mov     eax, [eax+4]
0x789F61: jmp     short loc_789F66
0x789F63: add     eax, 4
0x789F66: push    eax; error
0x789F67: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x789F6C: add     esp, 4
0x789F6F: lea     ecx, [ebp+result]; this
0x789F72: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x789F77: mov     eax, offset loc_789F7D
0x789F7C: retn
0x789F7D: mov     ecx, [ebp+var_C]
0x789F80: mov     large fs:0, ecx
0x789F87: pop     ecx
0x789F88: pop     edi
0x789F89: pop     esi
0x789F8A: pop     ebx
0x789F8B: mov     esp, ebp
0x789F8D: pop     ebp
0x789F8E: retn
0x789F8F: push    offset aCspeedtreertDe; "CSpeedTreeRT::DeleteFrondGeometry"
0x789F94: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x789F99: lea     esi, [ebp+var_4C]; result
0x789F9C: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x789FA1: add     esp, 8
0x789FA4: cmp     dword ptr [eax+18h], 10h
0x789FA8: mov     byte ptr [ebp+var_4], 3
0x789FAC: jb      short loc_789FB3
0x789FAE: mov     eax, [eax+4]
0x789FB1: jmp     short loc_789FB6
0x789FB3: add     eax, 4
0x789FB6: push    eax; error
0x789FB7: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x789FBC: add     esp, 4
0x789FBF: lea     ecx, [ebp+var_4C]; this
0x789FC2: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x789FC7: mov     eax, offset loc_789FCD
0x789FCC: retn
0x789FCD: mov     ecx, [ebp+var_C]
0x789FD0: mov     large fs:0, ecx
0x789FD7: pop     ecx
0x789FD8: pop     edi
0x789FD9: pop     esi
0x789FDA: pop     ebx
0x789FDB: mov     esp, ebp
0x789FDD: pop     ebp
0x789FDE: retn
0x9CB420: lea     ecx, [ebp+result]; this
0x9CB423: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB428: lea     ecx, [ebp+var_4C]; this
0x9CB42B: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB430: mov     edx, [esp-4+arg_4]
0x9CB434: lea     eax, [edx+0Ch]
0x9CB437: mov     ecx, [edx-50h]
0x9CB43A: xor     ecx, eax
0x9CB43C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB441: mov     eax, offset stru_AF3ADC
0x9CB446: jmp     ___CxxFrameHandler3
