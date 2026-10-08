0x9DD900: push    0FFFFFFFFh
0x9DD902: push    offset SEH_9DD900
0x9DD907: mov     eax, large fs:0
0x9DD90D: push    eax
0x9DD90E: mov     eax, ___security_cookie
0x9DD913: xor     eax, esp
0x9DD915: push    eax
0x9DD916: lea     eax, [esp+10h+var_C]
0x9DD91A: mov     large fs:0, eax
0x9DD920: push    offset flt_B06D84
0x9DD925: mov     ecx, offset INISettingCollection
0x9DD92A: mov     [esp+14h+var_4], 0
0x9DD932: call    SettingCollectionList_AddSetting
0x9DD937: push    offset sub_A19230; void (__cdecl *)()
0x9DD93C: call    _atexit
0x9DD941: add     esp, 4
0x9DD944: mov     ecx, [esp+10h+var_C]
0x9DD948: mov     large fs:0, ecx
0x9DD94F: pop     ecx
0x9DD950: add     esp, 0Ch
0x9DD953: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0B80: mov     ecx, offset flt_B06D84
0x9B0B85: jmp     loc_403BC0
0x9B0B8A: mov     edx, [esp+arg_4]
0x9B0B8E: lea     eax, [edx]
0x9B0B90: mov     ecx, [edx-4]
0x9B0B93: xor     ecx, eax
0x9B0B95: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0B9A: mov     eax, offset stru_ADCE18
0x9B0B9F: jmp     ___CxxFrameHandler3
