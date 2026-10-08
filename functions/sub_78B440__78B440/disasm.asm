0x78B440: push    ebp; CSpeedTreeRT::SetLeafLightingMethod. Before Compute, mirrors lighting method to CLightingEngine leaf method and leaf geometry manual-lighting state.
0x78B441: mov     ebp, esp
0x78B443: push    0FFFFFFFFh
0x78B445: push    offset SEH_78B440
0x78B44A: mov     eax, large fs:0
0x78B450: push    eax
0x78B451: sub     esp, 40h
0x78B454: push    ebx
0x78B455: push    esi
0x78B456: push    edi
0x78B457: mov     eax, ds:0B30AACh
0x78B45C: xor     eax, ebp
0x78B45E: push    eax
0x78B45F: lea     eax, [ebp+var_C]
0x78B462: mov     large fs:0, eax
0x78B468: mov     [ebp+var_10], esp
0x78B46B: cmp     byte ptr [ecx+45h], 0
0x78B46F: mov     [ebp+var_4], 0
0x78B476: jnz     short loc_78B4A0
0x78B478: mov     eax, [ebp+method]
0x78B47B: mov     edx, [ecx+0Ch]
0x78B47E: mov     [edx+38h], eax
0x78B481: mov     ecx, [ecx+8]
0x78B484: cmp     eax, 1
0x78B487: setz    al
0x78B48A: mov     [ecx], al
0x78B48C: mov     ecx, [ebp+var_C]
0x78B48F: mov     large fs:0, ecx
0x78B496: pop     ecx
0x78B497: pop     edi
0x78B498: pop     esi
0x78B499: pop     ebx
0x78B49A: mov     esp, ebp
0x78B49C: pop     ebp
0x78B49D: retn    4
0x78B4A0: push    45h ; 'E'; count
0x78B4A2: push    offset aSetleaflightin; "SetLeafLightingMethod() has no effect a"...
0x78B4A7: mov     ecx, offset OB_g_strError_010201A0; this
0x78B4AC: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x78B4B1: mov     ecx, [ebp+var_C]
0x78B4B4: mov     large fs:0, ecx
0x78B4BB: pop     ecx
0x78B4BC: pop     edi
0x78B4BD: pop     esi
0x78B4BE: pop     ebx
0x78B4BF: mov     esp, ebp
0x78B4C1: pop     ebp
0x78B4C2: retn    4
0x78B4C5: mov     ecx, [ebp+var_14]
0x78B4C8: mov     edx, [ecx]
0x78B4CA: mov     eax, [edx+4]
0x78B4CD: call    eax
0x78B4CF: push    eax
0x78B4D0: push    offset aCspeedtreert_2; "CSpeedTreeRT::SetLeafLightingMethod"
0x78B4D5: push    offset aSFailedS; "%s - failed [%s]"
0x78B4DA: lea     esi, [ebp+result]; result
0x78B4DD: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78B4E2: add     esp, 0Ch
0x78B4E5: cmp     dword ptr [eax+18h], 10h
0x78B4E9: mov     byte ptr [ebp+var_4], 2
0x78B4ED: jb      short loc_78B4F4
0x78B4EF: mov     eax, [eax+4]
0x78B4F2: jmp     short loc_78B4F7
0x78B4F4: add     eax, 4
0x78B4F7: push    eax; error
0x78B4F8: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78B4FD: add     esp, 4
0x78B500: lea     ecx, [ebp+result]; this
0x78B503: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78B508: mov     eax, offset loc_78B50E
0x78B50D: retn
0x78B50E: mov     ecx, [ebp+var_C]
0x78B511: mov     large fs:0, ecx
0x78B518: pop     ecx
0x78B519: pop     edi
0x78B51A: pop     esi
0x78B51B: pop     ebx
0x78B51C: mov     esp, ebp
0x78B51E: pop     ebp
0x78B51F: retn    4
0x78B522: push    offset aCspeedtreert_2; "CSpeedTreeRT::SetLeafLightingMethod"
0x78B527: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78B52C: lea     esi, [ebp+var_4C]; result
0x78B52F: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78B534: add     esp, 8
0x78B537: cmp     dword ptr [eax+18h], 10h
0x78B53B: mov     byte ptr [ebp+var_4], 3
0x78B53F: jb      short loc_78B546
0x78B541: mov     eax, [eax+4]
0x78B544: jmp     short loc_78B549
0x78B546: add     eax, 4
0x78B549: push    eax; error
0x78B54A: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78B54F: add     esp, 4
0x78B552: lea     ecx, [ebp+var_4C]; this
0x78B555: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78B55A: mov     eax, offset loc_78B48C
0x78B55F: retn
0x9CB5C0: lea     ecx, [ebp+result]; this
0x9CB5C3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB5C8: lea     ecx, [ebp+var_4C]; this
0x9CB5CB: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB5D0: mov     edx, [esp-4+arg_4]
0x9CB5D4: lea     eax, [edx+0Ch]
0x9CB5D7: mov     ecx, [edx-50h]
0x9CB5DA: xor     ecx, eax
0x9CB5DC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB5E1: mov     eax, offset stru_AF3E7C
0x9CB5E6: jmp     ___CxxFrameHandler3
