0x78BBF0: push    ebp; CSpeedTreeRT::SetWindStrength. Accepts nonnegative strength, defaults old strength/time offset from CWindEngine on -1.0 sentinels, updates wind engine, and invalidates CPU-wind branch/frond/leaf caches.
0x78BBF1: mov     ebp, esp
0x78BBF3: push    0FFFFFFFFh
0x78BBF5: push    offset SEH_78BBF0
0x78BBFA: mov     eax, large fs:0
0x78BC00: push    eax
0x78BC01: sub     esp, 44h
0x78BC04: push    ebx
0x78BC05: push    esi
0x78BC06: push    edi
0x78BC07: mov     eax, ds:0B30AACh
0x78BC0C: xor     eax, ebp
0x78BC0E: push    eax
0x78BC0F: lea     eax, [ebp+var_C]
0x78BC12: mov     large fs:0, eax
0x78BC18: mov     [ebp+var_10], esp
0x78BC1B: mov     esi, ecx
0x78BC1D: fldz
0x78BC1F: xor     ebx, ebx
0x78BC21: fst     [ebp+var_14]
0x78BC24: mov     [ebp+var_4], ebx
0x78BC27: fld     [ebp+newStrength]
0x78BC2A: fcom    st(1)
0x78BC2C: fnstsw  ax
0x78BC2E: fstp    st(1)
0x78BC30: test    ah, 1
0x78BC33: jnz     loc_78BCDE
0x78BC39: fld     dword ptr ds:0A30634h
0x78BC3F: fcom    [ebp+oldStrength]
0x78BC42: fnstsw  ax
0x78BC44: test    ah, 44h
0x78BC47: jp      short loc_78BC52
0x78BC49: mov     eax, [esi+10h]
0x78BC4C: fld     dword ptr [eax+4]
0x78BC4F: fstp    [ebp+oldStrength]
0x78BC52: fcomp   [ebp+frequencyTimeOffset]
0x78BC55: fnstsw  ax
0x78BC57: test    ah, 44h
0x78BC5A: jp      short loc_78BC64
0x78BC5C: mov     eax, [esi+10h]
0x78BC5F: fld     dword ptr [eax]
0x78BC61: fstp    [ebp+frequencyTimeOffset]
0x78BC64: fld     [ebp+frequencyTimeOffset]
0x78BC67: mov     ecx, [esi+10h]; this
0x78BC6A: sub     esp, 0Ch
0x78BC6D: fstp    [esp+6Ch+oldTimeShift]; oldTimeShift
0x78BC71: fld     [ebp+oldStrength]
0x78BC74: fstp    [esp+6Ch+var_68]; oldStrength
0x78BC78: fstp    [esp+6Ch+var_6C]; newStrength
0x78BC7B: call    OB_CWindEngine_SetWindStrength_010201A0; Sets wind strength, recomputes leaf frequency/throw, preserves phase continuity via timeFrequencyShift, and disables external rocking-angle input.
0x78BC80: mov     ecx, [esi+10h]
0x78BC83: fstp    [ebp+frequencyTimeOffset]
0x78BC86: mov     eax, [ecx+8]
0x78BC89: fld     [ebp+frequencyTimeOffset]
0x78BC8C: cmp     eax, 1
0x78BC8F: fstp    [ebp+var_14]
0x78BC92: jnz     short loc_78BC9E
0x78BC94: mov     eax, [esi+4]
0x78BC97: cmp     eax, ebx
0x78BC99: jz      short loc_78BC9E
0x78BC9B: mov     [eax+12h], bl
0x78BC9E: mov     edx, [esi+10h]
0x78BCA1: cmp     dword ptr [edx+0Ch], 1
0x78BCA5: jnz     short loc_78BCB1
0x78BCA7: mov     eax, [esi+60h]
0x78BCAA: cmp     eax, ebx
0x78BCAC: jz      short loc_78BCB1
0x78BCAE: mov     [eax+12h], bl
0x78BCB1: mov     eax, [esi+10h]
0x78BCB4: cmp     dword ptr [eax+10h], 1
0x78BCB8: jz      short loc_78BCBF
0x78BCBA: cmp     [eax+14h], bl
0x78BCBD: jz      short loc_78BCC7
0x78BCBF: mov     ecx, [esi+8]; this
0x78BCC2: call    OB_CLeafGeometry_Invalidate_010201A0; Oblivion CLeafGeometry::Invalidate. Clears generatedCardTableValid at +0x3C in every 0x44-byte leaf LOD record; persistent counts and pointers are not rebuilt here.
0x78BCC7: fld     [ebp+var_14]
0x78BCCA: mov     ecx, [ebp+var_C]
0x78BCCD: mov     large fs:0, ecx
0x78BCD4: pop     ecx
0x78BCD5: pop     edi
0x78BCD6: pop     esi
0x78BCD7: pop     ebx
0x78BCD8: mov     esp, ebp
0x78BCDA: pop     ebp
0x78BCDB: retn    0Ch
0x78BCDE: push    32h ; '2'; count
0x78BCE0: fstp    st
0x78BCE2: push    offset aSetwindstrengt; "SetWindStrength() expects new wind stre"...
0x78BCE7: mov     ecx, offset OB_g_strError_010201A0; this
0x78BCEC: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x78BCF1: jmp     short loc_78BCC7
0x78BCF3: mov     ecx, [ebp+var_18]
0x78BCF6: mov     eax, [ecx]
0x78BCF8: mov     edx, [eax+4]
0x78BCFB: call    edx
0x78BCFD: push    eax
0x78BCFE: push    offset aCspeedtreert_8; "CSpeedTreeRT::SetWindStrength"
0x78BD03: push    offset aSFailedS; "%s - failed [%s]"
0x78BD08: lea     esi, [ebp+result]; result
0x78BD0B: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78BD10: add     esp, 0Ch
0x78BD13: cmp     dword ptr [eax+18h], 10h
0x78BD17: mov     byte ptr [ebp+var_4], 2
0x78BD1B: jb      short loc_78BD22
0x78BD1D: mov     eax, [eax+4]
0x78BD20: jmp     short loc_78BD25
0x78BD22: add     eax, 4
0x78BD25: push    eax; error
0x78BD26: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78BD2B: add     esp, 4
0x78BD2E: lea     ecx, [ebp+result]; this
0x78BD31: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78BD36: mov     eax, offset loc_78BD3C
0x78BD3B: retn
0x78BD3C: jmp     short loc_78BCC7
0x78BD3E: push    offset aCspeedtreert_8; "CSpeedTreeRT::SetWindStrength"
0x78BD43: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78BD48: lea     esi, [ebp+var_50]; result
0x78BD4B: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78BD50: add     esp, 8
0x78BD53: cmp     dword ptr [eax+18h], 10h
0x78BD57: mov     byte ptr [ebp+var_4], 3
0x78BD5B: jb      short loc_78BD62
0x78BD5D: mov     eax, [eax+4]
0x78BD60: jmp     short loc_78BD65
0x78BD62: add     eax, 4
0x78BD65: push    eax; error
0x78BD66: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78BD6B: add     esp, 4
0x78BD6E: lea     ecx, [ebp+var_50]; this
0x78BD71: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78BD76: mov     eax, offset loc_78BCC7
0x78BD7B: retn
0x9CB6E0: lea     ecx, [ebp+result]; this
0x9CB6E3: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB6E8: lea     ecx, [ebp+var_50]; this
0x9CB6EB: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB6F0: mov     edx, [esp-4+oldStrength]
0x9CB6F4: lea     eax, [edx+0Ch]
0x9CB6F7: mov     ecx, [edx-54h]
0x9CB6FA: xor     ecx, eax
0x9CB6FC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB701: mov     eax, offset stru_AF414C
0x9CB706: jmp     ___CxxFrameHandler3
