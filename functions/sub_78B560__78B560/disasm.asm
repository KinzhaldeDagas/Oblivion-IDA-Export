0x78B560: push    ebp; CSpeedTreeRT::SetFrondLightingMethod. Before Compute, mirrors lighting method to frond geometry manual-lighting state and CLightingEngine frond method.
0x78B561: mov     ebp, esp
0x78B563: push    0FFFFFFFFh
0x78B565: push    offset SEH_78B560
0x78B56A: mov     eax, large fs:0
0x78B570: push    eax
0x78B571: sub     esp, 40h
0x78B574: push    ebx
0x78B575: push    esi
0x78B576: push    edi
0x78B577: mov     eax, ds:0B30AACh
0x78B57C: xor     eax, ebp
0x78B57E: push    eax
0x78B57F: lea     eax, [ebp+var_C]
0x78B582: mov     large fs:0, eax
0x78B588: mov     [ebp+var_10], esp
0x78B58B: cmp     byte ptr [ecx+45h], 0
0x78B58F: mov     [ebp+var_4], 0
0x78B596: jnz     short loc_78B5C1
0x78B598: mov     eax, [ebp+method]
0x78B59B: mov     esi, [ecx+60h]
0x78B59E: cmp     eax, 1
0x78B5A1: setz    dl
0x78B5A4: mov     [esi+9], dl
0x78B5A7: mov     ecx, [ecx+0Ch]
0x78B5AA: mov     [ecx+78h], eax
0x78B5AD: mov     ecx, [ebp+var_C]
0x78B5B0: mov     large fs:0, ecx
0x78B5B7: pop     ecx
0x78B5B8: pop     edi
0x78B5B9: pop     esi
0x78B5BA: pop     ebx
0x78B5BB: mov     esp, ebp
0x78B5BD: pop     ebp
0x78B5BE: retn    4
0x78B5C1: push    46h ; 'F'; count
0x78B5C3: push    offset aSetfrondlighti; "SetFrondLightingMethod() has no effect "...
0x78B5C8: mov     ecx, offset OB_g_strError_010201A0; this
0x78B5CD: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x78B5D2: mov     ecx, [ebp+var_C]
0x78B5D5: mov     large fs:0, ecx
0x78B5DC: pop     ecx
0x78B5DD: pop     edi
0x78B5DE: pop     esi
0x78B5DF: pop     ebx
0x78B5E0: mov     esp, ebp
0x78B5E2: pop     ebp
0x78B5E3: retn    4
0x78B5E6: mov     ecx, [ebp+var_14]
0x78B5E9: mov     edx, [ecx]
0x78B5EB: mov     eax, [edx+4]
0x78B5EE: call    eax
0x78B5F0: push    eax
0x78B5F1: push    offset aCspeedtreert_3; "CSpeedTreeRT::SetFrondLightingMethod"
0x78B5F6: push    offset aSFailedS; "%s - failed [%s]"
0x78B5FB: lea     esi, [ebp+result]; result
0x78B5FE: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78B603: add     esp, 0Ch
0x78B606: cmp     dword ptr [eax+18h], 10h
0x78B60A: mov     byte ptr [ebp+var_4], 2
0x78B60E: jb      short loc_78B615
0x78B610: mov     eax, [eax+4]
0x78B613: jmp     short loc_78B618
0x78B615: add     eax, 4
0x78B618: push    eax; error
0x78B619: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78B61E: add     esp, 4
0x78B621: lea     ecx, [ebp+result]; this
0x78B624: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78B629: mov     eax, offset loc_78B62F
0x78B62E: retn
0x78B62F: mov     ecx, [ebp+var_C]
0x78B632: mov     large fs:0, ecx
0x78B639: pop     ecx
0x78B63A: pop     edi
0x78B63B: pop     esi
0x78B63C: pop     ebx
0x78B63D: mov     esp, ebp
0x78B63F: pop     ebp
0x78B640: retn    4
0x78B643: push    offset aCspeedtreert_3; "CSpeedTreeRT::SetFrondLightingMethod"
0x78B648: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78B64D: lea     esi, [ebp+var_4C]; result
0x78B650: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78B655: add     esp, 8
0x78B658: cmp     dword ptr [eax+18h], 10h
0x78B65C: mov     byte ptr [ebp+var_4], 3
0x78B660: jb      short loc_78B667
0x78B662: mov     eax, [eax+4]
0x78B665: jmp     short loc_78B66A
0x78B667: add     eax, 4
0x78B66A: push    eax; error
0x78B66B: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78B670: add     esp, 4
0x78B673: lea     ecx, [ebp+var_4C]; this
0x78B676: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78B67B: mov     eax, offset loc_78B5AD
0x78B680: retn
0x9CB5F0: lea     ecx, [ebp+result]; this
0x9CB5F3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB5F8: lea     ecx, [ebp+var_4C]; this
0x9CB5FB: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB600: mov     edx, [esp-4+arg_4]
0x9CB604: lea     eax, [edx+0Ch]
0x9CB607: mov     ecx, [edx-50h]
0x9CB60A: xor     ecx, eax
0x9CB60C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB611: mov     eax, offset stru_AF3EF4
0x9CB616: jmp     ___CxxFrameHandler3
