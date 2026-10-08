0x9FC600: push    0FFFFFFFFh; [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
0x9FC602: push    offset SEH_9FC600
0x9FC607: mov     eax, large fs:0
0x9FC60D: push    eax
0x9FC60E: mov     eax, ___security_cookie
0x9FC613: xor     eax, esp
0x9FC615: push    eax
0x9FC616: lea     eax, [esp+10h+var_C]
0x9FC61A: mov     large fs:0, eax
0x9FC620: push    offset fXenonMenuStickMapCursorMaxSpeed
0x9FC625: mov     ecx, offset INISettingCollection
0x9FC62A: mov     [esp+14h+var_4], 0
0x9FC632: call    SettingCollectionList_AddSetting
0x9FC637: push    offset INISetting_Destroy_fXenonMenuStickMapCursorMaxSpeed; void (__cdecl *)()
0x9FC63C: call    _atexit
0x9FC641: add     esp, 4
0x9FC644: mov     ecx, [esp+10h+var_C]
0x9FC648: mov     large fs:0, ecx
0x9FC64F: pop     ecx
0x9FC650: add     esp, 0Ch
0x9FC653: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C0DF0: mov     ecx, offset fXenonMenuStickMapCursorMaxSpeed
0x9C0DF5: jmp     loc_403BC0
0x9C0DFA: mov     edx, [esp+arg_4]
0x9C0DFE: lea     eax, [edx]
0x9C0E00: mov     ecx, [edx-4]
0x9C0E03: xor     ecx, eax
0x9C0E05: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C0E0A: mov     eax, offset stru_AE9F38
0x9C0E0F: jmp     ___CxxFrameHandler3
