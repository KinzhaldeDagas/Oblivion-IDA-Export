0x9DBD70: push    0FFFFFFFFh
0x9DBD72: push    offset SEH_9DBD70
0x9DBD77: mov     eax, large fs:0
0x9DBD7D: push    eax
0x9DBD7E: mov     eax, ___security_cookie
0x9DBD83: xor     eax, esp
0x9DBD85: push    eax
0x9DBD86: lea     eax, [esp+10h+var_C]
0x9DBD8A: mov     large fs:0, eax
0x9DBD90: push    offset Str
0x9DBD95: mov     ecx, offset INISettingCollection
0x9DBD9A: mov     [esp+14h+var_4], 0
0x9DBDA2: call    SettingCollectionList_AddSetting
0x9DBDA7: push    offset sub_A18410; void (__cdecl *)()
0x9DBDAC: call    _atexit
0x9DBDB1: add     esp, 4
0x9DBDB4: mov     ecx, [esp+10h+var_C]
0x9DBDB8: mov     large fs:0, ecx
0x9DBDBF: pop     ecx
0x9DBDC0: add     esp, 0Ch
0x9DBDC3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AE860: mov     ecx, offset Str
0x9AE865: jmp     loc_403BC0
0x9AE86A: mov     edx, [esp+arg_4]
0x9AE86E: lea     eax, [edx]
0x9AE870: mov     ecx, [edx-4]
0x9AE873: xor     ecx, eax
0x9AE875: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE87A: mov     eax, offset stru_ADAFF8
0x9AE87F: jmp     ___CxxFrameHandler3
