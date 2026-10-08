0x9D93E0: push    0FFFFFFFFh
0x9D93E2: push    offset SEH_9D93E0
0x9D93E7: mov     eax, large fs:0
0x9D93ED: push    eax
0x9D93EE: mov     eax, ___security_cookie
0x9D93F3: xor     eax, esp
0x9D93F5: push    eax
0x9D93F6: lea     eax, [esp+10h+var_C]
0x9D93FA: mov     large fs:0, eax
0x9D9400: push    offset iDebugText
0x9D9405: mov     ecx, offset INISettingCollection
0x9D940A: mov     [esp+14h+var_4], 0
0x9D9412: call    SettingCollectionList_AddSetting
0x9D9417: push    offset sub_A16FA0; void (__cdecl *)()
0x9D941C: call    _atexit
0x9D9421: add     esp, 4
0x9D9424: mov     ecx, [esp+10h+var_C]
0x9D9428: mov     large fs:0, ecx
0x9D942F: pop     ecx
0x9D9430: add     esp, 0Ch
0x9D9433: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAA20: mov     ecx, offset iDebugText
0x9AAA25: jmp     loc_403BC0
0x9AAA2A: mov     edx, [esp+arg_4]
0x9AAA2E: lea     eax, [edx]
0x9AAA30: mov     ecx, [edx-4]
0x9AAA33: xor     ecx, eax
0x9AAA35: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAA3A: mov     eax, offset stru_AD798C
0x9AAA3F: jmp     ___CxxFrameHandler3
