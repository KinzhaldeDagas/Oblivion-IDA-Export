0x9D8C50: push    0FFFFFFFFh
0x9D8C52: push    offset SEH_9D8C50
0x9D8C57: mov     eax, large fs:0
0x9D8C5D: push    eax
0x9D8C5E: mov     eax, ___security_cookie
0x9D8C63: xor     eax, esp
0x9D8C65: push    eax
0x9D8C66: lea     eax, [esp+10h+var_C]
0x9D8C6A: mov     large fs:0, eax
0x9D8C70: push    offset bUseHardDriveCache
0x9D8C75: mov     ecx, offset INISettingCollection
0x9D8C7A: mov     [esp+14h+var_4], 0
0x9D8C82: call    SettingCollectionList_AddSetting
0x9D8C87: push    offset sub_A16BE0; void (__cdecl *)()
0x9D8C8C: call    _atexit
0x9D8C91: add     esp, 4
0x9D8C94: mov     ecx, [esp+10h+var_C]
0x9D8C98: mov     large fs:0, ecx
0x9D8C9F: pop     ecx
0x9D8CA0: add     esp, 0Ch
0x9D8CA3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA660: mov     ecx, offset bUseHardDriveCache
0x9AA665: jmp     loc_403BC0
0x9AA66A: mov     edx, [esp+arg_4]
0x9AA66E: lea     eax, [edx]
0x9AA670: mov     ecx, [edx-4]
0x9AA673: xor     ecx, eax
0x9AA675: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA67A: mov     eax, offset stru_AD761C
0x9AA67F: jmp     ___CxxFrameHandler3
