0x9DC860: push    0FFFFFFFFh
0x9DC862: push    offset SEH_9DC860
0x9DC867: mov     eax, large fs:0
0x9DC86D: push    eax
0x9DC86E: mov     eax, ___security_cookie
0x9DC873: xor     eax, esp
0x9DC875: push    eax
0x9DC876: lea     eax, [esp+10h+var_C]
0x9DC87A: mov     large fs:0, eax
0x9DC880: push    offset bSkipProgramFlows_MESSAGES
0x9DC885: mov     ecx, offset INISettingCollection
0x9DC88A: mov     [esp+14h+var_4], 0
0x9DC892: call    SettingCollectionList_AddSetting
0x9DC897: push    offset sub_A189F0; void (__cdecl *)()
0x9DC89C: call    _atexit
0x9DC8A1: add     esp, 4
0x9DC8A4: mov     ecx, [esp+10h+var_C]
0x9DC8A8: mov     large fs:0, ecx
0x9DC8AF: pop     ecx
0x9DC8B0: add     esp, 0Ch
0x9DC8B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B00F0: mov     ecx, offset bSkipProgramFlows_MESSAGES
0x9B00F5: jmp     loc_403BC0
0x9B00FA: mov     edx, [esp+arg_4]
0x9B00FE: lea     eax, [edx]
0x9B0100: mov     ecx, [edx-4]
0x9B0103: xor     ecx, eax
0x9B0105: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B010A: mov     eax, offset stru_ADC4E4
0x9B010F: jmp     ___CxxFrameHandler3
