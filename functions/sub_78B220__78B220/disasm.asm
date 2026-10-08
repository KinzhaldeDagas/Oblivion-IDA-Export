0x78B220: push    ebp; CSpeedTreeRT::GetSeed. While transient data is intact, returns CTreeEngine+0x48; otherwise reports the same misleading SetTreeSize/DeleteTransientData error present in local 4.1 source.
0x78B221: mov     ebp, esp
0x78B223: push    0FFFFFFFFh
0x78B225: push    offset SEH_78B220
0x78B22A: mov     eax, large fs:0
0x78B230: push    eax
0x78B231: sub     esp, 44h
0x78B234: push    ebx
0x78B235: push    esi
0x78B236: push    edi
0x78B237: mov     eax, ds:0B30AACh
0x78B23C: xor     eax, ebp
0x78B23E: push    eax
0x78B23F: lea     eax, [ebp+var_C]
0x78B242: mov     large fs:0, eax
0x78B248: mov     [ebp+var_10], esp
0x78B24B: mov     eax, [ecx]
0x78B24D: xor     edx, edx
0x78B24F: cmp     [eax+21h], dl
0x78B252: mov     [ebp+var_14], edx
0x78B255: mov     [ebp+var_4], edx
0x78B258: jz      short loc_78B275
0x78B25A: mov     eax, [eax+48h]
0x78B25D: mov     [ebp+var_14], eax
0x78B260: mov     eax, [ebp+var_14]
0x78B263: mov     ecx, [ebp+var_C]
0x78B266: mov     large fs:0, ecx
0x78B26D: pop     ecx
0x78B26E: pop     edi
0x78B26F: pop     esi
0x78B270: pop     ebx
0x78B271: mov     esp, ebp
0x78B273: pop     ebp
0x78B274: retn
0x78B275: push    47h ; 'G'; count
0x78B277: push    offset aSettreesizeHas; "SetTreeSize() has no effect after Delet"...
0x78B27C: mov     ecx, offset OB_g_strError_010201A0; this
0x78B281: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x78B286: jmp     short loc_78B260
0x78B288: mov     ecx, [ebp+var_18]
0x78B28B: mov     edx, [ecx]
0x78B28D: mov     eax, [edx+4]
0x78B290: call    eax
0x78B292: push    eax
0x78B293: push    offset aCspeedtreertSe; "CSpeedTreeRT::SetTreeSize"
0x78B298: push    offset aSFailedS; "%s - failed [%s]"
0x78B29D: lea     esi, [ebp+result]; result
0x78B2A0: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78B2A5: add     esp, 0Ch
0x78B2A8: cmp     dword ptr [eax+18h], 10h
0x78B2AC: mov     byte ptr [ebp+var_4], 2
0x78B2B0: jb      short loc_78B2B7
0x78B2B2: mov     eax, [eax+4]
0x78B2B5: jmp     short loc_78B2BA
0x78B2B7: add     eax, 4
0x78B2BA: push    eax; error
0x78B2BB: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78B2C0: add     esp, 4
0x78B2C3: lea     ecx, [ebp+result]; this
0x78B2C6: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78B2CB: mov     eax, offset loc_78B2D1
0x78B2D0: retn
0x78B2D1: jmp     short loc_78B260
0x78B2D3: push    offset aCspeedtreertSe; "CSpeedTreeRT::SetTreeSize"
0x78B2D8: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78B2DD: lea     esi, [ebp+var_50]; result
0x78B2E0: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78B2E5: add     esp, 8
0x78B2E8: cmp     dword ptr [eax+18h], 10h
0x78B2EC: mov     byte ptr [ebp+var_4], 3
0x78B2F0: jb      short loc_78B2F7
0x78B2F2: mov     eax, [eax+4]
0x78B2F5: jmp     short loc_78B2FA
0x78B2F7: add     eax, 4
0x78B2FA: push    eax; error
0x78B2FB: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78B300: add     esp, 4
0x78B303: lea     ecx, [ebp+var_50]; this
0x78B306: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78B30B: mov     eax, offset loc_78B260
0x78B310: retn
0x9CB560: lea     ecx, [ebp+result]; this
0x9CB563: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB568: lea     ecx, [ebp+var_50]; this
0x9CB56B: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB570: mov     edx, [esp-4+arg_4]
0x9CB574: lea     eax, [edx+0Ch]
0x9CB577: mov     ecx, [edx-54h]
0x9CB57A: xor     ecx, eax
0x9CB57C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB581: mov     eax, offset stru_AF3D8C
0x9CB586: jmp     ___CxxFrameHandler3
