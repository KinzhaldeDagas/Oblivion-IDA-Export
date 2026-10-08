0x9DBA50: push    0FFFFFFFFh
0x9DBA52: push    offset SEH_9DBA50
0x9DBA57: mov     eax, large fs:0
0x9DBA5D: push    eax
0x9DBA5E: mov     eax, ___security_cookie
0x9DBA63: xor     eax, esp
0x9DBA65: push    eax
0x9DBA66: lea     eax, [esp+10h+var_C]
0x9DBA6A: mov     large fs:0, eax
0x9DBA70: push    offset byte_B055A4
0x9DBA75: mov     ecx, offset INISettingCollection
0x9DBA7A: mov     [esp+14h+var_4], 0
0x9DBA82: call    SettingCollectionList_AddSetting
0x9DBA87: push    offset sub_A18270; void (__cdecl *)()
0x9DBA8C: call    _atexit
0x9DBA91: add     esp, 4
0x9DBA94: mov     ecx, [esp+10h+var_C]
0x9DBA98: mov     large fs:0, ecx
0x9DBA9F: pop     ecx
0x9DBAA0: add     esp, 0Ch
0x9DBAA3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ADF90: mov     ecx, offset byte_B055A4
0x9ADF95: jmp     loc_403BC0
0x9ADF9A: mov     edx, [esp+arg_4]
0x9ADF9E: lea     eax, [edx]
0x9ADFA0: mov     ecx, [edx-4]
0x9ADFA3: xor     ecx, eax
0x9ADFA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ADFAA: mov     eax, offset stru_ADA898
0x9ADFAF: jmp     ___CxxFrameHandler3
