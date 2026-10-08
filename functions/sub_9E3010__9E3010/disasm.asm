0x9E3010: push    0FFFFFFFFh
0x9E3012: push    offset SEH_9E3010
0x9E3017: mov     eax, large fs:0
0x9E301D: push    eax
0x9E301E: mov     eax, ___security_cookie
0x9E3023: xor     eax, esp
0x9E3025: push    eax
0x9E3026: lea     eax, [esp+10h+var_C]
0x9E302A: mov     large fs:0, eax
0x9E3030: push    offset havokDebug
0x9E3035: mov     ecx, offset INISettingCollection
0x9E303A: mov     [esp+14h+var_4], 0
0x9E3042: call    SettingCollectionList_AddSetting
0x9E3047: push    offset sub_A1BB00; void (__cdecl *)()
0x9E304C: call    _atexit
0x9E3051: add     esp, 4
0x9E3054: mov     ecx, [esp+10h+var_C]
0x9E3058: mov     large fs:0, ecx
0x9E305F: pop     ecx
0x9E3060: add     esp, 0Ch
0x9E3063: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B5920: mov     ecx, offset havokDebug
0x9B5925: jmp     loc_403BC0
0x9B592A: mov     edx, [esp+arg_4]
0x9B592E: lea     eax, [edx]
0x9B5930: mov     ecx, [edx-4]
0x9B5933: xor     ecx, eax
0x9B5935: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B593A: mov     eax, offset stru_AE0948
0x9B593F: jmp     ___CxxFrameHandler3
