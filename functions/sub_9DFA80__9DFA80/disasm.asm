0x9DFA80: push    0FFFFFFFFh
0x9DFA82: push    offset SEH_9DFA80
0x9DFA87: mov     eax, large fs:0
0x9DFA8D: push    eax
0x9DFA8E: mov     eax, ___security_cookie
0x9DFA93: xor     eax, esp
0x9DFA95: push    eax
0x9DFA96: lea     eax, [esp+10h+var_C]
0x9DFA9A: mov     large fs:0, eax
0x9DFAA0: push    offset UseWaterReflectionMisc
0x9DFAA5: mov     ecx, offset INISettingCollection
0x9DFAAA: mov     [esp+14h+var_4], 0
0x9DFAB2: call    SettingCollectionList_AddSetting
0x9DFAB7: push    offset sub_A1A360; void (__cdecl *)()
0x9DFABC: call    _atexit
0x9DFAC1: add     esp, 4
0x9DFAC4: mov     ecx, [esp+10h+var_C]
0x9DFAC8: mov     large fs:0, ecx
0x9DFACF: pop     ecx
0x9DFAD0: add     esp, 0Ch
0x9DFAD3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1E50: mov     ecx, offset UseWaterReflectionMisc
0x9B1E55: jmp     loc_403BC0
0x9B1E5A: mov     edx, [esp+arg_4]
0x9B1E5E: lea     eax, [edx]
0x9B1E60: mov     ecx, [edx-4]
0x9B1E63: xor     ecx, eax
0x9B1E65: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B1E6A: mov     eax, offset stru_ADDED8
0x9B1E6F: jmp     ___CxxFrameHandler3
