0x9FC660: push    0FFFFFFFFh; [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
0x9FC662: push    offset SEH_9FC660
0x9FC667: mov     eax, large fs:0
0x9FC66D: push    eax
0x9FC66E: mov     eax, ___security_cookie
0x9FC673: xor     eax, esp
0x9FC675: push    eax
0x9FC676: lea     eax, [esp+10h+var_C]
0x9FC67A: mov     large fs:0, eax
0x9FC680: push    offset fXenonMenuStickMapCursorMinSpeed
0x9FC685: mov     ecx, offset INISettingCollection
0x9FC68A: mov     [esp+14h+var_4], 0
0x9FC692: call    SettingCollectionList_AddSetting
0x9FC697: push    offset INISetting_Destroy_fXenonMenuStickMapCursorMinSpeed; void (__cdecl *)()
0x9FC69C: call    _atexit
0x9FC6A1: add     esp, 4
0x9FC6A4: mov     ecx, [esp+10h+var_C]
0x9FC6A8: mov     large fs:0, ecx
0x9FC6AF: pop     ecx
0x9FC6B0: add     esp, 0Ch
0x9FC6B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C0E20: mov     ecx, offset fXenonMenuStickMapCursorMinSpeed
0x9C0E25: jmp     loc_403BC0
0x9C0E2A: mov     edx, [esp+arg_4]
0x9C0E2E: lea     eax, [edx]
0x9C0E30: mov     ecx, [edx-4]
0x9C0E33: xor     ecx, eax
0x9C0E35: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C0E3A: mov     eax, offset stru_AE9F64
0x9C0E3F: jmp     ___CxxFrameHandler3
