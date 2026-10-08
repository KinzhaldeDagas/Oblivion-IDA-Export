0x78BE70: push    ebp; CSpeedTreeRT::SetLocalMatrices. Before Compute, forwards a validated matrix start/span to CWindEngine; after Compute reports stock no-effect error.
0x78BE71: mov     ebp, esp
0x78BE73: push    0FFFFFFFFh
0x78BE75: push    offset SEH_78BE70
0x78BE7A: mov     eax, large fs:0
0x78BE80: push    eax
0x78BE81: sub     esp, 40h
0x78BE84: push    ebx
0x78BE85: push    esi
0x78BE86: push    edi
0x78BE87: mov     eax, ds:0B30AACh
0x78BE8C: xor     eax, ebp
0x78BE8E: push    eax
0x78BE8F: lea     eax, [ebp+var_C]
0x78BE92: mov     large fs:0, eax
0x78BE98: mov     [ebp+var_10], esp
0x78BE9B: cmp     byte ptr [ecx+45h], 0
0x78BE9F: mov     [ebp+var_4], 0
0x78BEA6: jnz     short loc_78BF00
0x78BEA8: mov     eax, [ebp+startingMatrix]
0x78BEAB: mov     edx, [ebp+matrixSpan]
0x78BEAE: movzx   edi, word ptr ds:0B42A10h
0x78BEB5: lea     esi, [eax+edx-1]
0x78BEB9: cmp     esi, edi
0x78BEBB: jnb     short loc_78BEDB
0x78BEBD: mov     ecx, [ecx+10h]; this
0x78BEC0: push    edx; matrixSpan
0x78BEC1: push    eax; startingMatrix
0x78BEC2: call    OB_CWindEngine_SetLocalMatrices_010201A0; Stores only this tree's [startingMatrix, matrixSpan] window into the shared global wind-matrix array.
0x78BEC7: mov     ecx, [ebp+var_C]
0x78BECA: mov     large fs:0, ecx
0x78BED1: pop     ecx
0x78BED2: pop     edi
0x78BED3: pop     esi
0x78BED4: pop     ebx
0x78BED5: mov     esp, ebp
0x78BED7: pop     ebp
0x78BED8: retn    8
0x78BEDB: push    3Ch ; '<'; count
0x78BEDD: push    offset aSetlocalmatric; "SetLocalMatrices() parameters exceed av"...
0x78BEE2: mov     ecx, offset OB_g_strError_010201A0; this
0x78BEE7: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x78BEEC: mov     ecx, [ebp+var_C]
0x78BEEF: mov     large fs:0, ecx
0x78BEF6: pop     ecx
0x78BEF7: pop     edi
0x78BEF8: pop     esi
0x78BEF9: pop     ebx
0x78BEFA: mov     esp, ebp
0x78BEFC: pop     ebp
0x78BEFD: retn    8
0x78BF00: push    40h ; '@'
0x78BF02: push    offset aSetlocalmatr_0; "SetLocalMatrices() has no effect after "...
0x78BF07: jmp     short loc_78BEE2
0x78BF09: mov     ecx, [ebp+var_14]
0x78BF0C: mov     eax, [ecx]
0x78BF0E: mov     edx, [eax+4]
0x78BF11: call    edx
0x78BF13: push    eax
0x78BF14: push    offset aCspeedtreer_10; "CSpeedTreeRT::SetLocalMatrices"
0x78BF19: push    offset aSFailedS; "%s - failed [%s]"
0x78BF1E: lea     esi, [ebp+result]; result
0x78BF21: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78BF26: add     esp, 0Ch
0x78BF29: cmp     dword ptr [eax+18h], 10h
0x78BF2D: mov     byte ptr [ebp+var_4], 2
0x78BF31: jb      short loc_78BF38
0x78BF33: mov     eax, [eax+4]
0x78BF36: jmp     short loc_78BF3B
0x78BF38: add     eax, 4
0x78BF3B: push    eax; error
0x78BF3C: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78BF41: add     esp, 4
0x78BF44: lea     ecx, [ebp+result]; this
0x78BF47: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78BF4C: mov     eax, offset loc_78BF52
0x78BF51: retn
0x78BF52: mov     ecx, [ebp+var_C]
0x78BF55: mov     large fs:0, ecx
0x78BF5C: pop     ecx
0x78BF5D: pop     edi
0x78BF5E: pop     esi
0x78BF5F: pop     ebx
0x78BF60: mov     esp, ebp
0x78BF62: pop     ebp
0x78BF63: retn    8
0x78BF66: push    offset aCspeedtreer_10; "CSpeedTreeRT::SetLocalMatrices"
0x78BF6B: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78BF70: lea     esi, [ebp+var_4C]; result
0x78BF73: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78BF78: add     esp, 8
0x78BF7B: cmp     dword ptr [eax+18h], 10h
0x78BF7F: mov     byte ptr [ebp+var_4], 3
0x78BF83: jb      short loc_78BF8A
0x78BF85: mov     eax, [eax+4]
0x78BF88: jmp     short loc_78BF8D
0x78BF8A: add     eax, 4
0x78BF8D: push    eax; error
0x78BF8E: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78BF93: add     esp, 4
0x78BF96: lea     ecx, [ebp+var_4C]; this
0x78BF99: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78BF9E: mov     eax, offset loc_78BEEC
0x78BFA3: retn
0x9CB740: lea     ecx, [ebp+result]; this
0x9CB743: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB748: lea     ecx, [ebp+var_4C]; this
0x9CB74B: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB750: mov     edx, [esp-4+matrixSpan]
0x9CB754: lea     eax, [edx+0Ch]
0x9CB757: mov     ecx, [edx-50h]
0x9CB75A: xor     ecx, eax
0x9CB75C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB761: mov     eax, offset stru_AF423C
0x9CB766: jmp     ___CxxFrameHandler3
