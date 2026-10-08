0x9FDAC0: push    0FFFFFFFFh
0x9FDAC2: push    offset SEH_9FDAC0
0x9FDAC7: mov     eax, large fs:0
0x9FDACD: push    eax
0x9FDACE: mov     eax, ___security_cookie
0x9FDAD3: xor     eax, esp
0x9FDAD5: push    eax
0x9FDAD6: lea     eax, [esp+10h+var_C]
0x9FDADA: mov     large fs:0, eax
0x9FDAE0: push    offset byte_B14E88
0x9FDAE5: mov     ecx, offset INISettingCollection
0x9FDAEA: mov     [esp+14h+var_4], 0
0x9FDAF2: call    SettingCollectionList_AddSetting
0x9FDAF7: push    offset sub_A25860; void (__cdecl *)()
0x9FDAFC: call    _atexit
0x9FDB01: add     esp, 4
0x9FDB04: mov     ecx, [esp+10h+var_C]
0x9FDB08: mov     large fs:0, ecx
0x9FDB0F: pop     ecx
0x9FDB10: add     esp, 0Ch
0x9FDB13: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C42D0: mov     ecx, offset byte_B14E88
0x9C42D5: jmp     loc_403BC0
0x9C42DA: mov     edx, [esp+arg_4]
0x9C42DE: lea     eax, [edx]
0x9C42E0: mov     ecx, [edx-4]
0x9C42E3: xor     ecx, eax
0x9C42E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C42EA: mov     eax, offset stru_AECCB4
0x9C42EF: jmp     ___CxxFrameHandler3
