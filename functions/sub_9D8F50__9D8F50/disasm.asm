0x9D8F50: push    0FFFFFFFFh
0x9D8F52: push    offset SEH_9D8F50
0x9D8F57: mov     eax, large fs:0
0x9D8F5D: push    eax
0x9D8F5E: mov     eax, ___security_cookie
0x9D8F63: xor     eax, esp
0x9D8F65: push    eax
0x9D8F66: lea     eax, [esp+10h+var_C]
0x9D8F6A: mov     large fs:0, eax
0x9D8F70: push    offset flt_B02DA0
0x9D8F75: mov     ecx, offset INISettingCollection
0x9D8F7A: mov     [esp+14h+var_4], 0
0x9D8F82: call    SettingCollectionList_AddSetting
0x9D8F87: push    offset sub_A16D60; void (__cdecl *)()
0x9D8F8C: call    _atexit
0x9D8F91: add     esp, 4
0x9D8F94: mov     ecx, [esp+10h+var_C]
0x9D8F98: mov     large fs:0, ecx
0x9D8F9F: pop     ecx
0x9D8FA0: add     esp, 0Ch
0x9D8FA3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA7E0: mov     ecx, offset flt_B02DA0
0x9AA7E5: jmp     loc_403BC0
0x9AA7EA: mov     edx, [esp+arg_4]
0x9AA7EE: lea     eax, [edx]
0x9AA7F0: mov     ecx, [edx-4]
0x9AA7F3: xor     ecx, eax
0x9AA7F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA7FA: mov     eax, offset stru_AD777C
0x9AA7FF: jmp     ___CxxFrameHandler3
