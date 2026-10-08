0x78D140: push    ebp; Static CSpeedTreeRT::SetCamera. On a changed non-NULL camera, updates global vectors, invalidates registered tree camera caches, recomputes unit billboard data, and updates clamped horizontal-billboard fade.
0x78D141: mov     ebp, esp
0x78D143: push    0FFFFFFFFh
0x78D145: push    offset SEH_78D140
0x78D14A: mov     eax, large fs:0
0x78D150: push    eax
0x78D151: sub     esp, 78h
0x78D154: push    ebx
0x78D155: push    esi
0x78D156: push    edi
0x78D157: mov     eax, ds:0B30AACh
0x78D15C: xor     eax, ebp
0x78D15E: push    eax
0x78D15F: lea     eax, [ebp+var_C]
0x78D162: mov     large fs:0, eax
0x78D168: mov     [ebp+var_10], esp
0x78D16B: mov     ecx, [ebp+position3]
0x78D16E: test    ecx, ecx
0x78D170: mov     [ebp+var_4], 0
0x78D177: jz      loc_78D328
0x78D17D: mov     eax, [ebp+direction3]
0x78D180: test    eax, eax
0x78D182: jz      loc_78D328
0x78D188: fld     dword ptr [ecx]
0x78D18A: mov     edx, ds:0B429ACh
0x78D190: fstp    [ebp+position3]
0x78D193: mov     [ebp+var_34], edx
0x78D196: fld     dword ptr [ecx+4]
0x78D199: mov     edx, ds:0B429B0h
0x78D19F: fstp    [ebp+var_14]
0x78D1A2: mov     [ebp+var_30], edx
0x78D1A5: fld     dword ptr [ecx+8]
0x78D1A8: mov     edx, ds:0B429B4h
0x78D1AE: fstp    [ebp+var_18]
0x78D1B1: mov     [ebp+var_2C], edx
0x78D1B4: fld     [ebp+position3]
0x78D1B7: mov     edx, ds:0B2B6D8h
0x78D1BD: fst     [ebp+var_40]
0x78D1C0: mov     [ebp+var_4C.x], edx
0x78D1C3: fld     [ebp+var_14]
0x78D1C6: mov     edx, ds:0B2B6DCh
0x78D1CC: fst     [ebp+var_3C]
0x78D1CF: mov     [ebp+var_4C.y], edx
0x78D1D2: fld     [ebp+var_18]
0x78D1D5: mov     edx, ds:0B2B6E0h
0x78D1DB: fst     [ebp+var_38]
0x78D1DE: mov     [ebp+var_4C.z], edx
0x78D1E1: fld     dword ptr [eax]
0x78D1E3: fstp    [ebp+position3]
0x78D1E6: fld     dword ptr [eax+4]
0x78D1E9: fstp    [ebp+var_18]
0x78D1EC: fld     dword ptr [eax+8]
0x78D1EF: fstp    [ebp+var_14]
0x78D1F2: fld     [ebp+position3]
0x78D1F5: fstp    [ebp+cameraDirection]
0x78D1F8: fld     [ebp+var_18]
0x78D1FB: fstp    [ebp+var_24]
0x78D1FE: fld     [ebp+var_14]
0x78D201: fstp    [ebp+var_20]
0x78D204: fld     [ebp+var_34]
0x78D207: fucomp  st(3)
0x78D209: fnstsw  ax
0x78D20B: fstp    st(2)
0x78D20D: test    ah, 44h
0x78D210: jp      short loc_78D24C
0x78D212: fld     [ebp+var_30]
0x78D215: fucompp
0x78D217: fnstsw  ax
0x78D219: test    ah, 44h
0x78D21C: jp      short loc_78D24E
0x78D21E: fld     [ebp+var_2C]
0x78D221: fucompp
0x78D223: fnstsw  ax
0x78D225: test    ah, 44h
0x78D228: jp      short loc_78D250
0x78D22A: lea     eax, [ebp+cameraDirection]
0x78D22D: push    eax; other
0x78D22E: lea     ecx, [ebp+var_4C]; this
0x78D231: call    OB_stVec3_NotEqual_010201A0; Oblivion 1.2.0.416: exact component-wise stVec3 inequality. RT4.1 inline operator!= corroborates the three OR comparisons.
0x78D236: test    al, al
0x78D238: jnz     short loc_78D250
0x78D23A: mov     ecx, [ebp+var_C]
0x78D23D: mov     large fs:0, ecx
0x78D244: pop     ecx
0x78D245: pop     edi
0x78D246: pop     esi
0x78D247: pop     ebx
0x78D248: mov     esp, ebp
0x78D24A: pop     ebp
0x78D24B: retn
0x78D24C: fstp    st
0x78D24E: fstp    st
0x78D250: mov     ecx, [ebp+var_40]
0x78D253: mov     edx, [ebp+var_3C]
0x78D256: mov     eax, [ebp+var_38]
0x78D259: mov     ds:0B429ACh, ecx
0x78D25F: mov     ecx, [ebp+cameraDirection]
0x78D262: mov     ds:0B429B0h, edx
0x78D268: mov     edx, [ebp+var_24]
0x78D26B: mov     ds:0B429B4h, eax
0x78D270: mov     eax, [ebp+var_20]
0x78D273: push    1; message
0x78D275: mov     ds:0B2B6D8h, ecx
0x78D27B: mov     ds:0B2B6DCh, edx
0x78D281: mov     ds:0B2B6E0h, eax
0x78D286: call    CSpeedTreeRT__NotifyAllTreesOfEvent; Static CSpeedTreeRT::NotifyAllTreesOfEvent. Iterates registered unique trees: wind/time invalidation clears wind-dependent branch/frond/leaf caches; camera invalidation clears leaf LOD and simple-billboard caches.
0x78D28B: lea     ecx, [ebp+cameraDirection]
0x78D28E: add     esp, 4
0x78D291: push    ecx; cameraDirection
0x78D292: call    OB_CSimpleBillboard_ComputeUnitBillboard_010201A0; Oblivion legacy unit-billboard builder: derives azimuth from cameraDirection XY, rotates four canonical corners, and writes 12 static floats.
0x78D297: add     esp, 4
0x78D29A: push    1; message
0x78D29C: call    CSpeedTreeRT__NotifyAllTreesOfEvent; Static CSpeedTreeRT::NotifyAllTreesOfEvent. Iterates registered unique trees: wind/time invalidation clears wind-dependent branch/frond/leaf caches; camera invalidation clears leaf LOD and simple-billboard caches.
0x78D2A1: fld     [ebp+var_20]
0x78D2A4: add     esp, 4
0x78D2A7: call    __CIasin
0x78D2AC: fstp    [ebp+position3]
0x78D2AF: fld     [ebp+position3]
0x78D2B2: fmul    qword ptr ds:0A8BA48h
0x78D2B8: fstp    [ebp+position3]
0x78D2BB: fld     [ebp+position3]
0x78D2BE: fld     dword ptr ds:0B2B5FCh
0x78D2C4: fld     st
0x78D2C6: fsubp   st(2), st
0x78D2C8: fsubr   dword ptr ds:0B2B600h
0x78D2CE: fdivp   st(1), st
0x78D2D0: fld1
0x78D2D2: fld     st
0x78D2D4: fsubrp  st(2), st
0x78D2D6: fxch    st(1)
0x78D2D8: fstp    [ebp+position3]
0x78D2DB: fld     [ebp+position3]
0x78D2DE: fcomp   qword ptr ds:0A2FC68h
0x78D2E4: fnstsw  ax
0x78D2E6: test    ah, 5
0x78D2E9: jp      short loc_78D2F0
0x78D2EB: fldz
0x78D2ED: fstp    [ebp+position3]
0x78D2F0: fld     [ebp+position3]
0x78D2F3: fcompp
0x78D2F5: fnstsw  ax
0x78D2F7: test    ah, 41h
0x78D2FA: jnz     short loc_78D301
0x78D2FC: fld1
0x78D2FE: fstp    [ebp+position3]
0x78D301: fld     [ebp+position3]
0x78D304: fmul    qword ptr ds:0A8C3F0h
0x78D30A: fadd    qword ptr ds:0A8C3E8h
0x78D310: fstp    dword ptr ds:0B2B604h
0x78D316: mov     ecx, [ebp+var_C]
0x78D319: mov     large fs:0, ecx
0x78D320: pop     ecx
0x78D321: pop     edi
0x78D322: pop     esi
0x78D323: pop     ebx
0x78D324: mov     esp, ebp
0x78D326: pop     ebp
0x78D327: retn
0x78D328: push    3Bh ; ';'; count
0x78D32A: push    offset aSetcameraRequi; "SetCamera() requires non-NULL position "...
0x78D32F: mov     ecx, offset OB_g_strError_010201A0; this
0x78D334: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x78D339: mov     ecx, [ebp+var_C]
0x78D33C: mov     large fs:0, ecx
0x78D343: pop     ecx
0x78D344: pop     edi
0x78D345: pop     esi
0x78D346: pop     ebx
0x78D347: mov     esp, ebp
0x78D349: pop     ebp
0x78D34A: retn
0x78D34B: mov     ecx, [ebp+var_1C]
0x78D34E: mov     edx, [ecx]
0x78D350: mov     eax, [edx+4]
0x78D353: call    eax
0x78D355: push    eax
0x78D356: push    offset aCspeedtreer_16; "CSpeedTreeRT::SetCamera"
0x78D35B: push    offset aSFailedS; "%s - failed [%s]"
0x78D360: lea     esi, [ebp+result]; result
0x78D363: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78D368: add     esp, 0Ch
0x78D36B: cmp     dword ptr [eax+18h], 10h
0x78D36F: mov     byte ptr [ebp+var_4], 2
0x78D373: jb      short loc_78D37A
0x78D375: mov     eax, [eax+4]
0x78D378: jmp     short loc_78D37D
0x78D37A: add     eax, 4
0x78D37D: push    eax; error
0x78D37E: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78D383: add     esp, 4
0x78D386: lea     ecx, [ebp+result]; this
0x78D389: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78D38E: mov     eax, offset loc_78D394
0x78D393: retn
0x78D394: mov     ecx, [ebp+var_C]
0x78D397: mov     large fs:0, ecx
0x78D39E: pop     ecx
0x78D39F: pop     edi
0x78D3A0: pop     esi
0x78D3A1: pop     ebx
0x78D3A2: mov     esp, ebp
0x78D3A4: pop     ebp
0x78D3A5: retn
0x78D3A6: push    offset aCspeedtreer_16; "CSpeedTreeRT::SetCamera"
0x78D3AB: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78D3B0: lea     esi, [ebp+var_84]; result
0x78D3B6: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78D3BB: add     esp, 8
0x78D3BE: cmp     dword ptr [eax+18h], 10h
0x78D3C2: mov     byte ptr [ebp+var_4], 3
0x78D3C6: jb      short loc_78D3CD
0x78D3C8: mov     eax, [eax+4]
0x78D3CB: jmp     short loc_78D3D0
0x78D3CD: add     eax, 4
0x78D3D0: push    eax; error
0x78D3D1: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78D3D6: add     esp, 4
0x78D3D9: lea     ecx, [ebp+var_84]; this
0x78D3DF: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78D3E4: mov     eax, offset loc_78D23A
0x78D3E9: retn
0x9CB8D0: lea     ecx, [ebp+result]; this
0x9CB8D3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB8D8: lea     ecx, [ebp+var_84]; this
0x9CB8DE: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB8E3: mov     edx, [esp-4+direction3]
0x9CB8E7: lea     eax, [edx+0Ch]
0x9CB8EA: mov     ecx, [edx-88h]
0x9CB8F0: xor     ecx, eax
0x9CB8F2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB8F7: mov     eax, offset stru_AF460C
0x9CB8FC: jmp     ___CxxFrameHandler3
