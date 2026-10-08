0x9DCD00: push    0FFFFFFFFh
0x9DCD02: push    offset SEH_9DCD00
0x9DCD07: mov     eax, large fs:0
0x9DCD0D: push    eax
0x9DCD0E: mov     eax, ___security_cookie
0x9DCD13: xor     eax, esp
0x9DCD15: push    eax
0x9DCD16: lea     eax, [esp+10h+var_C]
0x9DCD1A: mov     large fs:0, eax
0x9DCD20: push    offset Y
0x9DCD25: mov     ecx, offset INISettingCollection
0x9DCD2A: mov     [esp+14h+var_4], 0
0x9DCD32: call    SettingCollectionList_AddSetting
0x9DCD37: push    offset sub_A18C30; void (__cdecl *)()
0x9DCD3C: call    _atexit
0x9DCD41: add     esp, 4
0x9DCD44: mov     ecx, [esp+10h+var_C]
0x9DCD48: mov     large fs:0, ecx
0x9DCD4F: pop     ecx
0x9DCD50: add     esp, 0Ch
0x9DCD53: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0580: mov     ecx, offset Y
0x9B0585: jmp     loc_403BC0
0x9B058A: mov     edx, [esp+arg_4]
0x9B058E: lea     eax, [edx]
0x9B0590: mov     ecx, [edx-4]
0x9B0593: xor     ecx, eax
0x9B0595: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B059A: mov     eax, offset stru_ADC898
0x9B059F: jmp     ___CxxFrameHandler3
