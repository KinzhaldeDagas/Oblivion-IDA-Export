0x9DC730: push    0FFFFFFFFh
0x9DC732: push    offset SEH_9DC730
0x9DC737: mov     eax, large fs:0
0x9DC73D: push    eax
0x9DC73E: mov     eax, ___security_cookie
0x9DC743: xor     eax, esp
0x9DC745: push    eax
0x9DC746: lea     eax, [esp+10h+var_C]
0x9DC74A: mov     large fs:0, eax
0x9DC750: push    offset bUseLODLandData
0x9DC755: mov     ecx, offset INISettingCollection
0x9DC75A: mov     [esp+14h+var_4], 0
0x9DC762: call    SettingCollectionList_AddSetting
0x9DC767: push    offset bUseLODLandData_UnregisterSetting; void (__cdecl *)()
0x9DC76C: call    _atexit
0x9DC771: add     esp, 4
0x9DC774: mov     ecx, [esp+10h+var_C]
0x9DC778: mov     large fs:0, ecx
0x9DC77F: pop     ecx
0x9DC780: add     esp, 0Ch
0x9DC783: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AFA70: mov     ecx, offset bUseLODLandData
0x9AFA75: jmp     loc_403BC0
0x9AFA7A: mov     edx, [esp+arg_4]
0x9AFA7E: lea     eax, [edx]
0x9AFA80: mov     ecx, [edx-4]
0x9AFA83: xor     ecx, eax
0x9AFA85: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AFA8A: mov     eax, offset stru_ADBF84
0x9AFA8F: jmp     ___CxxFrameHandler3
