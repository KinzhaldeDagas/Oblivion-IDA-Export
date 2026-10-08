0x9DE9E0: push    0FFFFFFFFh
0x9DE9E2: push    offset SEH_9DE9E0
0x9DE9E7: mov     eax, large fs:0
0x9DE9ED: push    eax
0x9DE9EE: mov     eax, ___security_cookie
0x9DE9F3: xor     eax, esp
0x9DE9F5: push    eax
0x9DE9F6: lea     eax, [esp+10h+var_C]
0x9DE9FA: mov     large fs:0, eax
0x9DEA00: push    offset flt_B06EEC
0x9DEA05: mov     ecx, offset INISettingCollection
0x9DEA0A: mov     [esp+14h+var_4], 0
0x9DEA12: call    SettingCollectionList_AddSetting
0x9DEA17: push    offset sub_A19AA0; void (__cdecl *)()
0x9DEA1C: call    _atexit
0x9DEA21: add     esp, 4
0x9DEA24: mov     ecx, [esp+10h+var_C]
0x9DEA28: mov     large fs:0, ecx
0x9DEA2F: pop     ecx
0x9DEA30: add     esp, 0Ch
0x9DEA33: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B13F0: mov     ecx, offset flt_B06EEC
0x9B13F5: jmp     loc_403BC0
0x9B13FA: mov     edx, [esp+arg_4]
0x9B13FE: lea     eax, [edx]
0x9B1400: mov     ecx, [edx-4]
0x9B1403: xor     ecx, eax
0x9B1405: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B140A: mov     eax, offset stru_ADD5D4
0x9B140F: jmp     ___CxxFrameHandler3
