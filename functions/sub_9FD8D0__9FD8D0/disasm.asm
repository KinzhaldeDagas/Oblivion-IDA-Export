0x9FD8D0: push    0FFFFFFFFh
0x9FD8D2: push    offset SEH_9FD8D0
0x9FD8D7: mov     eax, large fs:0
0x9FD8DD: push    eax
0x9FD8DE: mov     eax, ___security_cookie
0x9FD8E3: xor     eax, esp
0x9FD8E5: push    eax
0x9FD8E6: lea     eax, [esp+10h+var_C]
0x9FD8EA: mov     large fs:0, eax
0x9FD8F0: push    offset flt_B14CDC
0x9FD8F5: mov     ecx, offset INISettingCollection
0x9FD8FA: mov     [esp+14h+var_4], 0
0x9FD902: call    SettingCollectionList_AddSetting
0x9FD907: push    offset sub_A25760; void (__cdecl *)()
0x9FD90C: call    _atexit
0x9FD911: add     esp, 4
0x9FD914: mov     ecx, [esp+10h+var_C]
0x9FD918: mov     large fs:0, ecx
0x9FD91F: pop     ecx
0x9FD920: add     esp, 0Ch
0x9FD923: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C38C0: mov     ecx, offset flt_B14CDC
0x9C38C5: jmp     loc_403BC0
0x9C38CA: mov     edx, [esp+arg_4]
0x9C38CE: lea     eax, [edx]
0x9C38D0: mov     ecx, [edx-4]
0x9C38D3: xor     ecx, eax
0x9C38D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C38DA: mov     eax, offset stru_AEC444
0x9C38DF: jmp     ___CxxFrameHandler3
