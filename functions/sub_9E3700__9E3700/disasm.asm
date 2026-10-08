0x9E3700: push    0FFFFFFFFh
0x9E3702: push    offset SEH_9E3700
0x9E3707: mov     eax, large fs:0
0x9E370D: push    eax
0x9E370E: mov     eax, ___security_cookie
0x9E3713: xor     eax, esp
0x9E3715: push    eax
0x9E3716: lea     eax, [esp+10h+var_C]
0x9E371A: mov     large fs:0, eax
0x9E3720: push    offset SettingGrassWindMagnitudeMax
0x9E3725: mov     ecx, offset INISettingCollection
0x9E372A: mov     [esp+14h+var_4], 0
0x9E3732: call    SettingCollectionList_AddSetting
0x9E3737: push    offset sub_A1BF10; void (__cdecl *)()
0x9E373C: call    _atexit
0x9E3741: add     esp, 4
0x9E3744: mov     ecx, [esp+10h+var_C]
0x9E3748: mov     large fs:0, ecx
0x9E374F: pop     ecx
0x9E3750: add     esp, 0Ch
0x9E3753: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B63A0: mov     ecx, offset SettingGrassWindMagnitudeMax
0x9B63A5: jmp     loc_403BC0
0x9B63AA: mov     edx, [esp+arg_4]
0x9B63AE: lea     eax, [edx]
0x9B63B0: mov     ecx, [edx-4]
0x9B63B3: xor     ecx, eax
0x9B63B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B63BA: mov     eax, offset stru_AE12B0
0x9B63BF: jmp     ___CxxFrameHandler3
