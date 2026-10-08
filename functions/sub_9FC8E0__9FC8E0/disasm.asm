0x9FC8E0: push    0FFFFFFFFh
0x9FC8E2: push    offset SEH_9FC8E0
0x9FC8E7: mov     eax, large fs:0
0x9FC8ED: push    eax
0x9FC8EE: mov     eax, ___security_cookie
0x9FC8F3: xor     eax, esp
0x9FC8F5: push    eax
0x9FC8F6: lea     eax, [esp+10h+var_C]
0x9FC8FA: mov     large fs:0, eax
0x9FC900: push    offset flt_B14824
0x9FC905: mov     ecx, offset INISettingCollection
0x9FC90A: mov     [esp+14h+var_4], 0
0x9FC912: call    SettingCollectionList_AddSetting
0x9FC917: push    offset sub_A24F90; void (__cdecl *)()
0x9FC91C: call    _atexit
0x9FC921: add     esp, 4
0x9FC924: mov     ecx, [esp+10h+var_C]
0x9FC928: mov     large fs:0, ecx
0x9FC92F: pop     ecx
0x9FC930: add     esp, 0Ch
0x9FC933: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2290: mov     ecx, offset flt_B14824
0x9C2295: jmp     loc_403BC0
0x9C229A: mov     edx, [esp+arg_4]
0x9C229E: lea     eax, [edx]
0x9C22A0: mov     ecx, [edx-4]
0x9C22A3: xor     ecx, eax
0x9C22A5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C22AA: mov     eax, offset stru_AEB1A0
0x9C22AF: jmp     ___CxxFrameHandler3
