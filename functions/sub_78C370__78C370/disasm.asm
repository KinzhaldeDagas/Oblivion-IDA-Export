0x78C370: push    ebp; CSpeedTreeRT::ComputeLeafStaticLighting per local 4.1: compute tree center from bounds and pass leaves/LOD count to lighting engine.
0x78C371: mov     ebp, esp
0x78C373: push    0FFFFFFFFh
0x78C375: push    offset SEH_78C370
0x78C37A: mov     eax, large fs:0
0x78C380: push    eax
0x78C381: sub     esp, 4Ch
0x78C384: push    ebx
0x78C385: push    esi
0x78C386: push    edi
0x78C387: mov     eax, ds:0B30AACh
0x78C38C: xor     eax, ebp
0x78C38E: push    eax
0x78C38F: lea     eax, [ebp+var_C]
0x78C392: mov     large fs:0, eax
0x78C398: mov     [ebp+var_10], esp
0x78C39B: mov     eax, [ecx+40h]
0x78C39E: mov     edx, [eax]
0x78C3A0: mov     dword ptr [ebp+result.storage], edx
0x78C3A3: mov     edx, [eax+4]
0x78C3A6: mov     dword ptr [ebp+result.storage+4], edx
0x78C3A9: mov     edx, [eax+8]
0x78C3AC: mov     dword ptr [ebp+result.storage+8], edx
0x78C3AF: mov     edx, [eax+0Ch]
0x78C3B2: mov     dword ptr [ebp+result.storage+0Ch], edx
0x78C3B5: fld     dword ptr [ebp+result.storage+0Ch]
0x78C3B8: fadd    dword ptr [ebp+result.storage]
0x78C3BB: mov     edx, [eax+10h]
0x78C3BE: fld     qword ptr ds:0A2FAA0h
0x78C3C4: mov     [ebp+result.size], edx
0x78C3C7: mov     eax, [eax+14h]
0x78C3CA: fmul    st(1), st
0x78C3CC: fxch    st(1)
0x78C3CE: mov     [ebp+result.capacity], eax
0x78C3D1: mov     eax, [ecx]
0x78C3D3: fstp    [ebp+var_14]
0x78C3D6: mov     ecx, [ecx+0Ch]; this
0x78C3D9: fld     [ebp+result.size]
0x78C3DC: mov     [ebp+var_4], 0
0x78C3E3: fadd    dword ptr [ebp+result.storage+4]
0x78C3E6: fmul    st, st(1)
0x78C3E8: fstp    [ebp+var_18]
0x78C3EB: fld     [ebp+result.capacity]
0x78C3EE: fadd    dword ptr [ebp+result.storage+8]
0x78C3F1: fmulp   st(1), st
0x78C3F3: fstp    [ebp+var_1C]
0x78C3F6: fld     [ebp+var_14]
0x78C3F9: fstp    dword ptr [ebp+result.storage+0Ch]
0x78C3FC: fld     [ebp+var_18]
0x78C3FF: fstp    [ebp+result.size]
0x78C402: fld     [ebp+var_1C]
0x78C405: fstp    [ebp+result.capacity]
0x78C408: mov     edx, [eax+0D4h]
0x78C40E: movzx   eax, word ptr [eax+0C0h]
0x78C415: push    eax; numLeafLods
0x78C416: push    edx; leafLods
0x78C417: lea     edx, [ebp+result.storage+0Ch]
0x78C41A: push    edx; treeCenter
0x78C41B: call    OB_CLightingEngine_ComputeLeafStaticLighting_010201A0; OBLIVION AUTHORITY 2026-08-27: Static leaf color processing runs only when leafLightingMethod==1 (static) and staticLightingStyle!=0. Style bit0/value1 (USE_LIGHT_SOURCES) computes material/light RGB and SetColor(false); style bit1/value2 (SIMULATE_SHADOWS) runs AdjustStaticLighting, which SetColor(true) and reapplies colorScaleByte. Value3 would execute both in order.
0x78C420: mov     ecx, [ebp+var_C]
0x78C423: mov     large fs:0, ecx
0x78C42A: pop     ecx
0x78C42B: pop     edi
0x78C42C: pop     esi
0x78C42D: pop     ebx
0x78C42E: mov     esp, ebp
0x78C430: pop     ebp
0x78C431: retn
0x78C432: mov     ecx, [ebp+var_20]
0x78C435: mov     eax, [ecx]
0x78C437: mov     edx, [eax+4]
0x78C43A: call    edx
0x78C43C: push    eax
0x78C43D: push    offset aCspeedtreer_13; "CSpeedTreeRT::ComputeLeafStaticLighting"
0x78C442: push    offset aSFailedS; "%s - failed [%s]"
0x78C447: lea     esi, [ebp+result]; result
0x78C44A: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78C44F: add     esp, 0Ch
0x78C452: cmp     dword ptr [eax+18h], 10h
0x78C456: mov     byte ptr [ebp+var_4], 2
0x78C45A: jb      short loc_78C461
0x78C45C: mov     eax, [eax+4]
0x78C45F: jmp     short loc_78C464
0x78C461: add     eax, 4
0x78C464: push    eax; error
0x78C465: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78C46A: add     esp, 4
0x78C46D: lea     ecx, [ebp+result]; this
0x78C470: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78C475: mov     eax, offset loc_78C47B
0x78C47A: retn
0x78C47B: mov     ecx, [ebp+var_C]
0x78C47E: mov     large fs:0, ecx
0x78C485: pop     ecx
0x78C486: pop     edi
0x78C487: pop     esi
0x78C488: pop     ebx
0x78C489: mov     esp, ebp
0x78C48B: pop     ebp
0x78C48C: retn
0x78C48D: push    offset aCspeedtreer_13; "CSpeedTreeRT::ComputeLeafStaticLighting"
0x78C492: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78C497: lea     esi, [ebp+var_58]; result
0x78C49A: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78C49F: add     esp, 8
0x78C4A2: cmp     dword ptr [eax+18h], 10h
0x78C4A6: mov     byte ptr [ebp+var_4], 3
0x78C4AA: jb      short loc_78C4B1
0x78C4AC: mov     eax, [eax+4]
0x78C4AF: jmp     short loc_78C4B4
0x78C4B1: add     eax, 4
0x78C4B4: push    eax; error
0x78C4B5: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78C4BA: add     esp, 4
0x78C4BD: lea     ecx, [ebp+var_58]; this
0x78C4C0: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78C4C5: mov     eax, offset loc_78C420
0x78C4CA: retn
0x9CB800: lea     ecx, [ebp+result]; this
0x9CB803: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB808: lea     ecx, [ebp+var_58]; this
0x9CB80B: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB810: mov     edx, [esp-4+arg_4]
0x9CB814: lea     eax, [edx+0Ch]
0x9CB817: mov     ecx, [edx-5Ch]
0x9CB81A: xor     ecx, eax
0x9CB81C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB821: mov     eax, offset stru_AF441C
0x9CB826: jmp     ___CxxFrameHandler3
