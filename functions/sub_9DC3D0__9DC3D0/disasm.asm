0x9DC3D0: push    0FFFFFFFFh
0x9DC3D2: push    offset SEH_9DC3D0
0x9DC3D7: mov     eax, large fs:0
0x9DC3DD: push    eax
0x9DC3DE: mov     eax, ___security_cookie
0x9DC3E3: xor     eax, esp
0x9DC3E5: push    eax
0x9DC3E6: lea     eax, [esp+10h+var_C]
0x9DC3EA: mov     large fs:0, eax
0x9DC3F0: push    offset unk_B068D0
0x9DC3F5: mov     ecx, offset INISettingCollection
0x9DC3FA: mov     [esp+14h+var_4], 0
0x9DC402: call    SettingCollectionList_AddSetting
0x9DC407: push    offset sub_A18710; void (__cdecl *)()
0x9DC40C: call    _atexit
0x9DC411: add     esp, 4
0x9DC414: mov     ecx, [esp+10h+var_C]
0x9DC418: mov     large fs:0, ecx
0x9DC41F: pop     ecx
0x9DC420: add     esp, 0Ch
0x9DC423: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AF690: mov     ecx, offset unk_B068D0
0x9AF695: jmp     loc_403BC0
0x9AF69A: mov     edx, [esp+arg_4]
0x9AF69E: lea     eax, [edx]
0x9AF6A0: mov     ecx, [edx-4]
0x9AF6A3: xor     ecx, eax
0x9AF6A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AF6AA: mov     eax, offset stru_ADBC24
0x9AF6AF: jmp     ___CxxFrameHandler3
