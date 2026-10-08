0x9DD0C0: push    0FFFFFFFFh
0x9DD0C2: push    offset SEH_9DD0C0
0x9DD0C7: mov     eax, large fs:0
0x9DD0CD: push    eax
0x9DD0CE: mov     eax, ___security_cookie
0x9DD0D3: xor     eax, esp
0x9DD0D5: push    eax
0x9DD0D6: lea     eax, [esp+10h+var_C]
0x9DD0DA: mov     large fs:0, eax
0x9DD0E0: push    offset byte_B06CD4
0x9DD0E5: mov     ecx, offset INISettingCollection
0x9DD0EA: mov     [esp+14h+var_4], 0
0x9DD0F2: call    SettingCollectionList_AddSetting
0x9DD0F7: push    offset sub_A18E10; void (__cdecl *)()
0x9DD0FC: call    _atexit
0x9DD101: add     esp, 4
0x9DD104: mov     ecx, [esp+10h+var_C]
0x9DD108: mov     large fs:0, ecx
0x9DD10F: pop     ecx
0x9DD110: add     esp, 0Ch
0x9DD113: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0760: mov     ecx, offset byte_B06CD4
0x9B0765: jmp     loc_403BC0
0x9B076A: mov     edx, [esp+arg_4]
0x9B076E: lea     eax, [edx]
0x9B0770: mov     ecx, [edx-4]
0x9B0773: xor     ecx, eax
0x9B0775: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B077A: mov     eax, offset stru_ADCA50
0x9B077F: jmp     ___CxxFrameHandler3
