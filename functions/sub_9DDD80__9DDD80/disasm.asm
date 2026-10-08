0x9DDD80: push    0FFFFFFFFh; [Verified] Registers bIsHDR in INISettingCollection and schedules its destructor with atexit. The owned setting-name string is "bDoHighDynamicRange:BlurShaderHDR".
0x9DDD82: push    offset SEH_9DDD80
0x9DDD87: mov     eax, large fs:0
0x9DDD8D: push    eax
0x9DDD8E: mov     eax, ___security_cookie
0x9DDD93: xor     eax, esp
0x9DDD95: push    eax
0x9DDD96: lea     eax, [esp+10h+var_C]
0x9DDD9A: mov     large fs:0, eax
0x9DDDA0: push    offset bIsHDR
0x9DDDA5: mov     ecx, offset INISettingCollection
0x9DDDAA: mov     [esp+14h+var_4], 0
0x9DDDB2: call    SettingCollectionList_AddSetting
0x9DDDB7: push    offset Destroy_INISetting_bIsHDR; void (__cdecl *)()
0x9DDDBC: call    _atexit
0x9DDDC1: add     esp, 4
0x9DDDC4: mov     ecx, [esp+10h+var_C]
0x9DDDC8: mov     large fs:0, ecx
0x9DDDCF: pop     ecx
0x9DDDD0: add     esp, 0Ch
0x9DDDD3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0DC0: mov     ecx, offset bIsHDR
0x9B0DC5: jmp     loc_403BC0
0x9B0DCA: mov     edx, [esp+arg_4]
0x9B0DCE: lea     eax, [edx]
0x9B0DD0: mov     ecx, [edx-4]
0x9B0DD3: xor     ecx, eax
0x9B0DD5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0DDA: mov     eax, offset stru_ADD028
0x9B0DDF: jmp     ___CxxFrameHandler3
