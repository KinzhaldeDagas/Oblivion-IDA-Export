0x9DB5D0: push    0FFFFFFFFh
0x9DB5D2: push    offset SEH_9DB5D0
0x9DB5D7: mov     eax, large fs:0
0x9DB5DD: push    eax
0x9DB5DE: mov     eax, ___security_cookie
0x9DB5E3: xor     eax, esp
0x9DB5E5: push    eax
0x9DB5E6: lea     eax, [esp+10h+var_C]
0x9DB5EA: mov     large fs:0, eax
0x9DB5F0: push    offset byte_B0525C
0x9DB5F5: mov     ecx, offset INISettingCollection
0x9DB5FA: mov     [esp+14h+var_4], 0
0x9DB602: call    SettingCollectionList_AddSetting
0x9DB607: push    offset sub_A18040; void (__cdecl *)()
0x9DB60C: call    _atexit
0x9DB611: add     esp, 4
0x9DB614: mov     ecx, [esp+10h+var_C]
0x9DB618: mov     large fs:0, ecx
0x9DB61F: pop     ecx
0x9DB620: add     esp, 0Ch
0x9DB623: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD5D0: mov     ecx, offset byte_B0525C
0x9AD5D5: jmp     loc_403BC0
0x9AD5DA: mov     edx, [esp+arg_4]
0x9AD5DE: lea     eax, [edx]
0x9AD5E0: mov     ecx, [edx-4]
0x9AD5E3: xor     ecx, eax
0x9AD5E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD5EA: mov     eax, offset stru_ADA148
0x9AD5EF: jmp     ___CxxFrameHandler3
