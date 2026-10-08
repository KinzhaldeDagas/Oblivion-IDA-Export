0x78DC10: push    ebp; Xref audit: only 0x563107 calls this function in Oblivion. No additional stock CSpeedTreeRT shared-ownership acquisition path was observed.
0x78DC11: mov     ebp, esp
0x78DC13: push    0FFFFFFFFh
0x78DC15: push    offset SEH_78DC10
0x78DC1A: mov     eax, large fs:0
0x78DC20: push    eax
0x78DC21: sub     esp, 48h
0x78DC24: push    ebx
0x78DC25: push    esi
0x78DC26: push    edi
0x78DC27: mov     eax, ds:0B30AACh
0x78DC2C: xor     eax, ebp
0x78DC2E: push    eax
0x78DC2F: lea     eax, [ebp+var_C]
0x78DC32: mov     large fs:0, eax
0x78DC38: mov     [ebp+var_10], esp
0x78DC3B: mov     esi, ecx
0x78DC3D: xor     edi, edi
0x78DC3F: push    0A0h ; ' '; Size
0x78DC44: mov     [ebp+var_14], edi
0x78DC47: mov     [ebp+var_4], edi
0x78DC4A: call    FormHeapAlloc
0x78DC4F: mov     ecx, eax; this
0x78DC51: add     esp, 4
0x78DC54: mov     [ebp+var_18], ecx
0x78DC57: cmp     ecx, edi
0x78DC59: mov     byte ptr [ebp+var_4], 1
0x78DC5D: jz      short loc_78DC67
0x78DC5F: push    esi; sourceTree
0x78DC60: call    CSpeedTreeRT__InstanceInit; The wrapper returns only after InstanceInit has copied shared pointers, inserted the instance into the shared list, and incremented the shared count.
0x78DC65: jmp     short loc_78DC69
0x78DC67: xor     eax, eax
0x78DC69: mov     [ebp+var_14], eax
0x78DC6C: mov     eax, [ebp+var_14]
0x78DC6F: mov     ecx, [ebp+var_C]
0x78DC72: mov     large fs:0, ecx
0x78DC79: pop     ecx
0x78DC7A: pop     edi
0x78DC7B: pop     esi
0x78DC7C: pop     ebx
0x78DC7D: mov     esp, ebp
0x78DC7F: pop     ebp
0x78DC80: retn
0x78DC81: mov     ecx, [ebp+var_1C]
0x78DC84: mov     eax, [ecx]
0x78DC86: mov     edx, [eax+4]
0x78DC89: call    edx
0x78DC8B: push    eax
0x78DC8C: push    offset aCspeedtreertMa; "CSpeedTreeRT::MakeInstance"
0x78DC91: push    offset aSFailedS; "%s - failed [%s]"
0x78DC96: lea     esi, [ebp+result]; result
0x78DC99: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78DC9E: add     esp, 0Ch
0x78DCA1: cmp     dword ptr [eax+18h], 10h
0x78DCA5: mov     byte ptr [ebp+var_4], 3
0x78DCA9: jb      short loc_78DCB0
0x78DCAB: mov     eax, [eax+4]
0x78DCAE: jmp     short loc_78DCB3
0x78DCB0: add     eax, 4
0x78DCB3: push    eax; error
0x78DCB4: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78DCB9: add     esp, 4
0x78DCBC: lea     ecx, [ebp+result]; this
0x78DCBF: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78DCC4: mov     eax, offset loc_78DCCA
0x78DCC9: retn
0x78DCCA: jmp     short loc_78DC6C
0x78DCCC: push    offset aCspeedtreertMa; "CSpeedTreeRT::MakeInstance"
0x78DCD1: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78DCD6: lea     esi, [ebp+var_54]; result
0x78DCD9: call    OB_IdvFormatString_010201A0; Oblivion binary evidence: IdvFormatString. Formats variadic arguments with vsprintf into a 1024-byte stack buffer, constructs the hidden-result 28-byte SSO string, assigns strlen(buffer) bytes, and returns the result pointer in EAX. SpeedTreeRT 4.1 IdvGlobals.h:77-93 corroborates the name and fixed buffer only after observation.
0x78DCDE: add     esp, 8
0x78DCE1: cmp     dword ptr [eax+18h], 10h
0x78DCE5: mov     byte ptr [ebp+var_4], 4
0x78DCE9: jb      short loc_78DCF0
0x78DCEB: mov     eax, [eax+4]
0x78DCEE: jmp     short loc_78DCF3
0x78DCF0: add     eax, 4
0x78DCF3: push    eax; error
0x78DCF4: call    CSpeedTreeRT__SetError; Oblivion binary evidence: CSpeedTreeRT static error setter. Assigns the NUL-terminated input into the sole 28-byte global error string at 0xB2B614. After observation, SpeedTreeRT 4.1 SpeedTreeRT.cpp:2671-2677 corroborates SetError and g_strError.
0x78DCF9: add     esp, 4
0x78DCFC: lea     ecx, [ebp+var_54]; this
0x78DCFF: call    OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x78DD04: mov     eax, offset loc_78DC6C
0x78DD09: retn
0x9CBA30: mov     eax, [ebp+var_18]
0x9CBA33: push    eax
0x9CBA34: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CBA39: pop     ecx
0x9CBA3A: retn
0x9CBA3B: lea     ecx, [ebp+result]; this
0x9CBA3E: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CBA43: lea     ecx, [ebp+var_54]; this
0x9CBA46: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9CBA4B: mov     edx, [esp-4+arg_4]
0x9CBA4F: lea     eax, [edx+0Ch]
0x9CBA52: mov     ecx, [edx-58h]
0x9CBA55: xor     ecx, eax
0x9CBA57: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBA5C: mov     eax, offset stru_AF4840
0x9CBA61: jmp     ___CxxFrameHandler3
