0x78B820: push    ebp; CSpeedTreeRT::SetLeafWindMethod. Before Compute, mirrors the wind method to CWindEngine and leaf geometry vertex-weighting state.
0x78B821: mov     ebp, esp
0x78B823: push    0FFFFFFFFh
0x78B825: push    offset SEH_78B820
0x78B82A: mov     eax, large fs:0
0x78B830: push    eax
0x78B831: sub     esp, 40h
0x78B834: push    ebx
0x78B835: push    esi
0x78B836: push    edi
0x78B837: mov     eax, ds:0B30AACh
0x78B83C: xor     eax, ebp
0x78B83E: push    eax
0x78B83F: lea     eax, [ebp+var_C]
0x78B842: mov     large fs:0, eax
0x78B848: mov     [ebp+var_10], esp
0x78B84B: cmp     byte ptr [ecx+45h], 0
0x78B84F: mov     [ebp+var_4], 0
0x78B856: jnz     short loc_78B881
0x78B858: mov     eax, [ebp+method]
0x78B85B: mov     edx, [ecx+10h]
0x78B85E: mov     [edx+10h], eax
0x78B861: mov     ecx, [ecx+8]
0x78B864: cmp     eax, 2
0x78B867: setnz   al
0x78B86A: mov     [ecx+1], al
0x78B86D: mov     ecx, [ebp+var_C]
0x78B870: mov     large fs:0, ecx
0x78B877: pop     ecx
0x78B878: pop     edi
0x78B879: pop     esi
0x78B87A: pop     ebx
0x78B87B: mov     esp, ebp
0x78B87D: pop     ebp
0x78B87E: retn    4
0x78B881: push    41h ; 'A'; count
0x78B883: push    offset aSetleafwindmet; "SetLeafWindMethod() has no effect after"...
0x78B888: mov     ecx, offset OB_g_strError_010201A0; this
0x78B88D: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x78B892: mov     ecx, [ebp+var_C]
0x78B895: mov     large fs:0, ecx
0x78B89C: pop     ecx
0x78B89D: pop     edi
0x78B89E: pop     esi
0x78B89F: pop     ebx
0x78B8A0: mov     esp, ebp
0x78B8A2: pop     ebp
0x78B8A3: retn    4
0x78B8A6: mov     ecx, [ebp+var_14]
0x78B8A9: mov     edx, [ecx]
0x78B8AB: mov     eax, [edx+4]
0x78B8AE: call    eax
0x78B8B0: push    eax
0x78B8B1: push    offset aCspeedtreert_5; "CSpeedTreeRT::SetLeafWindMethod"
0x78B8B6: push    offset aSFailedS; "%s - failed [%s]"
0x78B8BB: lea     esi, [ebp+result]; result
0x78B8BE: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78B8C3: add     esp, 0Ch
0x78B8C6: cmp     dword ptr [eax+18h], 10h
0x78B8CA: mov     byte ptr [ebp+var_4], 2
0x78B8CE: jb      short loc_78B8D5
0x78B8D0: mov     eax, [eax+4]
0x78B8D3: jmp     short loc_78B8D8
0x78B8D5: add     eax, 4
0x78B8D8: push    eax; error
0x78B8D9: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78B8DE: add     esp, 4
0x78B8E1: lea     ecx, [ebp+result]; this
0x78B8E4: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78B8E9: mov     eax, offset loc_78B8EF
0x78B8EE: retn
0x78B8EF: mov     ecx, [ebp+var_C]
0x78B8F2: mov     large fs:0, ecx
0x78B8F9: pop     ecx
0x78B8FA: pop     edi
0x78B8FB: pop     esi
0x78B8FC: pop     ebx
0x78B8FD: mov     esp, ebp
0x78B8FF: pop     ebp
0x78B900: retn    4
0x78B903: push    offset aCspeedtreert_5; "CSpeedTreeRT::SetLeafWindMethod"
0x78B908: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78B90D: lea     esi, [ebp+var_4C]; result
0x78B910: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78B915: add     esp, 8
0x78B918: cmp     dword ptr [eax+18h], 10h
0x78B91C: mov     byte ptr [ebp+var_4], 3
0x78B920: jb      short loc_78B927
0x78B922: mov     eax, [eax+4]
0x78B925: jmp     short loc_78B92A
0x78B927: add     eax, 4
0x78B92A: push    eax; error
0x78B92B: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78B930: add     esp, 4
0x78B933: lea     ecx, [ebp+var_4C]; this
0x78B936: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78B93B: mov     eax, offset loc_78B86D
0x78B940: retn
0x9CB650: lea     ecx, [ebp+result]; this
0x9CB653: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB658: lea     ecx, [ebp+var_4C]; this
0x9CB65B: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB660: mov     edx, [esp-4+arg_4]
0x9CB664: lea     eax, [edx+0Ch]
0x9CB667: mov     ecx, [edx-50h]
0x9CB66A: xor     ecx, eax
0x9CB66C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB671: mov     eax, offset stru_AF3FE4
0x9CB676: jmp     ___CxxFrameHandler3
