0x9FE8D0: push    0FFFFFFFFh
0x9FE8D2: push    offset SEH_9FE8D0
0x9FE8D7: mov     eax, large fs:0
0x9FE8DD: push    eax
0x9FE8DE: mov     eax, ___security_cookie
0x9FE8E3: xor     eax, esp
0x9FE8E5: push    eax
0x9FE8E6: lea     eax, [esp+10h+var_C]
0x9FE8EA: mov     large fs:0, eax
0x9FE8F0: push    offset byte_B15824
0x9FE8F5: mov     ecx, offset INISettingCollection
0x9FE8FA: mov     [esp+14h+var_4], 0
0x9FE902: call    SettingCollectionList_AddSetting
0x9FE907: push    offset sub_A25ED0; void (__cdecl *)()
0x9FE90C: call    _atexit
0x9FE911: add     esp, 4
0x9FE914: mov     ecx, [esp+10h+var_C]
0x9FE918: mov     large fs:0, ecx
0x9FE91F: pop     ecx
0x9FE920: add     esp, 0Ch
0x9FE923: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C51F0: mov     ecx, offset byte_B15824
0x9C51F5: jmp     loc_403BC0
0x9C51FA: mov     edx, [esp+arg_4]
0x9C51FE: lea     eax, [edx]
0x9C5200: mov     ecx, [edx-4]
0x9C5203: xor     ecx, eax
0x9C5205: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C520A: mov     eax, offset stru_AEDA0C
0x9C520F: jmp     ___CxxFrameHandler3
