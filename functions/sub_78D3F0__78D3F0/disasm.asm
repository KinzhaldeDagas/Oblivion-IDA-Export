0x78D3F0: push    ebp; Static CSpeedTreeRT::SetTime. Stores global wind time and sends the wind-change invalidation event to all registered unique trees.
0x78D3F1: mov     ebp, esp
0x78D3F3: push    0FFFFFFFFh
0x78D3F5: push    offset SEH_78D3F0
0x78D3FA: mov     eax, large fs:0
0x78D400: push    eax
0x78D401: sub     esp, 40h
0x78D404: push    ebx
0x78D405: push    esi
0x78D406: push    edi
0x78D407: mov     eax, ds:0B30AACh
0x78D40C: xor     eax, ebp
0x78D40E: push    eax
0x78D40F: lea     eax, [ebp+var_C]
0x78D412: mov     large fs:0, eax
0x78D418: mov     [ebp+var_10], esp
0x78D41B: fld     [ebp+time]
0x78D41E: push    0; message
0x78D420: fstp    dword ptr ds:0B42A0Ch
0x78D426: mov     [ebp+var_4], 0
0x78D42D: call    CSpeedTreeRT__NotifyAllTreesOfEvent; Static CSpeedTreeRT::NotifyAllTreesOfEvent. Iterates registered unique trees: wind/time invalidation clears wind-dependent branch/frond/leaf caches; camera invalidation clears leaf LOD and simple-billboard caches.
0x78D432: add     esp, 4
0x78D435: mov     ecx, [ebp+var_C]
0x78D438: mov     large fs:0, ecx
0x78D43F: pop     ecx
0x78D440: pop     edi
0x78D441: pop     esi
0x78D442: pop     ebx
0x78D443: mov     esp, ebp
0x78D445: pop     ebp
0x78D446: retn
0x78D447: mov     ecx, [ebp+var_14]
0x78D44A: mov     eax, [ecx]
0x78D44C: mov     edx, [eax+4]
0x78D44F: call    edx
0x78D451: push    eax
0x78D452: push    offset aCspeedtreer_17; "CSpeedTreeRT::SetTime"
0x78D457: push    offset aSFailedS; "%s - failed [%s]"
0x78D45C: lea     esi, [ebp+result]; result
0x78D45F: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78D464: add     esp, 0Ch
0x78D467: cmp     dword ptr [eax+18h], 10h
0x78D46B: mov     byte ptr [ebp+var_4], 2
0x78D46F: jb      short loc_78D476
0x78D471: mov     eax, [eax+4]
0x78D474: jmp     short loc_78D479
0x78D476: add     eax, 4
0x78D479: push    eax; error
0x78D47A: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78D47F: add     esp, 4
0x78D482: lea     ecx, [ebp+result]; this
0x78D485: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78D48A: mov     eax, offset loc_78D490
0x78D48F: retn
0x78D490: mov     ecx, [ebp+var_C]
0x78D493: mov     large fs:0, ecx
0x78D49A: pop     ecx
0x78D49B: pop     edi
0x78D49C: pop     esi
0x78D49D: pop     ebx
0x78D49E: mov     esp, ebp
0x78D4A0: pop     ebp
0x78D4A1: retn
0x78D4A2: push    offset aCspeedtreer_17; "CSpeedTreeRT::SetTime"
0x78D4A7: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78D4AC: lea     esi, [ebp+var_4C]; result
0x78D4AF: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78D4B4: add     esp, 8
0x78D4B7: cmp     dword ptr [eax+18h], 10h
0x78D4BB: mov     byte ptr [ebp+var_4], 3
0x78D4BF: jb      short loc_78D4C6
0x78D4C1: mov     eax, [eax+4]
0x78D4C4: jmp     short loc_78D4C9
0x78D4C6: add     eax, 4
0x78D4C9: push    eax; error
0x78D4CA: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78D4CF: add     esp, 4
0x78D4D2: lea     ecx, [ebp+var_4C]; this
0x78D4D5: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78D4DA: mov     eax, offset loc_78D435
0x78D4DF: retn
0x9CB910: lea     ecx, [ebp+result]; this
0x9CB913: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB918: lea     ecx, [ebp+var_4C]; this
0x9CB91B: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CB920: mov     edx, [esp-4+arg_4]
0x9CB924: lea     eax, [edx+0Ch]
0x9CB927: mov     ecx, [edx-50h]
0x9CB92A: xor     ecx, eax
0x9CB92C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB931: mov     eax, offset stru_AF4684
0x9CB936: jmp     ___CxxFrameHandler3
