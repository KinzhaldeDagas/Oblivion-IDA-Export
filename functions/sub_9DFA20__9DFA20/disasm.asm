0x9DFA20: push    0FFFFFFFFh
0x9DFA22: push    offset SEH_9DFA20
0x9DFA27: mov     eax, large fs:0
0x9DFA2D: push    eax
0x9DFA2E: mov     eax, ___security_cookie
0x9DFA33: xor     eax, esp
0x9DFA35: push    eax
0x9DFA36: lea     eax, [esp+10h+var_C]
0x9DFA3A: mov     large fs:0, eax
0x9DFA40: push    offset UseWaterReflectionStatics
0x9DFA45: mov     ecx, offset INISettingCollection
0x9DFA4A: mov     [esp+14h+var_4], 0
0x9DFA52: call    SettingCollectionList_AddSetting
0x9DFA57: push    offset sub_A1A330; void (__cdecl *)()
0x9DFA5C: call    _atexit
0x9DFA61: add     esp, 4
0x9DFA64: mov     ecx, [esp+10h+var_C]
0x9DFA68: mov     large fs:0, ecx
0x9DFA6F: pop     ecx
0x9DFA70: add     esp, 0Ch
0x9DFA73: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1E20: mov     ecx, offset UseWaterReflectionStatics
0x9B1E25: jmp     loc_403BC0
0x9B1E2A: mov     edx, [esp+arg_4]
0x9B1E2E: lea     eax, [edx]
0x9B1E30: mov     ecx, [edx-4]
0x9B1E33: xor     ecx, eax
0x9B1E35: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B1E3A: mov     eax, offset stru_ADDEAC
0x9B1E3F: jmp     ___CxxFrameHandler3
