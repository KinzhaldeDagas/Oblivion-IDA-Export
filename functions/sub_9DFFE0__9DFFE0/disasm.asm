0x9DFFE0: push    0FFFFFFFFh
0x9DFFE2: push    offset SEH_9DFFE0
0x9DFFE7: mov     eax, large fs:0
0x9DFFED: push    eax
0x9DFFEE: mov     eax, ___security_cookie
0x9DFFF3: xor     eax, esp
0x9DFFF5: push    eax
0x9DFFF6: lea     eax, [esp+10h+var_C]
0x9DFFFA: mov     large fs:0, eax
0x9E0000: push    offset off_B070F0; "water"
0x9E0005: mov     ecx, offset INISettingCollection
0x9E000A: mov     [esp+14h+var_4], 0
0x9E0012: call    SettingCollectionList_AddSetting
0x9E0017: push    offset sub_A1A600; void (__cdecl *)()
0x9E001C: call    _atexit
0x9E0021: add     esp, 4
0x9E0024: mov     ecx, [esp+10h+var_C]
0x9E0028: mov     large fs:0, ecx
0x9E002F: pop     ecx
0x9E0030: add     esp, 0Ch
0x9E0033: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B20F0: mov     ecx, offset off_B070F0; "water"
0x9B20F5: jmp     loc_403BC0
0x9B20FA: mov     edx, [esp+arg_4]
0x9B20FE: lea     eax, [edx]
0x9B2100: mov     ecx, [edx-4]
0x9B2103: xor     ecx, eax
0x9B2105: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B210A: mov     eax, offset stru_ADE140
0x9B210F: jmp     ___CxxFrameHandler3
