0x9DBBD0: push    0FFFFFFFFh
0x9DBBD2: push    offset SEH_9DBBD0
0x9DBBD7: mov     eax, large fs:0
0x9DBBDD: push    eax
0x9DBBDE: mov     eax, ___security_cookie
0x9DBBE3: xor     eax, esp
0x9DBBE5: push    eax
0x9DBBE6: lea     eax, [esp+10h+var_C]
0x9DBBEA: mov     large fs:0, eax
0x9DBBF0: push    offset unk_B055C4
0x9DBBF5: mov     ecx, offset INISettingCollection
0x9DBBFA: mov     [esp+14h+var_4], 0
0x9DBC02: call    SettingCollectionList_AddSetting
0x9DBC07: push    offset sub_A18330; void (__cdecl *)()
0x9DBC0C: call    _atexit
0x9DBC11: add     esp, 4
0x9DBC14: mov     ecx, [esp+10h+var_C]
0x9DBC18: mov     large fs:0, ecx
0x9DBC1F: pop     ecx
0x9DBC20: add     esp, 0Ch
0x9DBC23: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AE050: mov     ecx, offset unk_B055C4
0x9AE055: jmp     loc_403BC0
0x9AE05A: mov     edx, [esp+arg_4]
0x9AE05E: lea     eax, [edx]
0x9AE060: mov     ecx, [edx-4]
0x9AE063: xor     ecx, eax
0x9AE065: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE06A: mov     eax, offset stru_ADA948
0x9AE06F: jmp     ___CxxFrameHandler3
