0x9DC610: push    0FFFFFFFFh
0x9DC612: push    offset SEH_9DC610
0x9DC617: mov     eax, large fs:0
0x9DC61D: push    eax
0x9DC61E: mov     eax, ___security_cookie
0x9DC623: xor     eax, esp
0x9DC625: push    eax
0x9DC626: lea     eax, [esp+10h+var_C]
0x9DC62A: mov     large fs:0, eax
0x9DC630: push    offset dword_B06AA0
0x9DC635: mov     ecx, offset INISettingCollection
0x9DC63A: mov     [esp+14h+var_4], 0
0x9DC642: call    SettingCollectionList_AddSetting
0x9DC647: push    offset sub_A18860; void (__cdecl *)()
0x9DC64C: call    _atexit
0x9DC651: add     esp, 4
0x9DC654: mov     ecx, [esp+10h+var_C]
0x9DC658: mov     large fs:0, ecx
0x9DC65F: pop     ecx
0x9DC660: add     esp, 0Ch
0x9DC663: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AF9E0: mov     ecx, offset dword_B06AA0
0x9AF9E5: jmp     loc_403BC0
0x9AF9EA: mov     edx, [esp+arg_4]
0x9AF9EE: lea     eax, [edx]
0x9AF9F0: mov     ecx, [edx-4]
0x9AF9F3: xor     ecx, eax
0x9AF9F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AF9FA: mov     eax, offset stru_ADBF00
0x9AF9FF: jmp     ___CxxFrameHandler3
