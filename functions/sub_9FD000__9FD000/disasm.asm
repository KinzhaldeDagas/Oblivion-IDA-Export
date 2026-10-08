0x9FD000: push    0FFFFFFFFh
0x9FD002: push    offset SEH_9FD000
0x9FD007: mov     eax, large fs:0
0x9FD00D: push    eax
0x9FD00E: mov     eax, ___security_cookie
0x9FD013: xor     eax, esp
0x9FD015: push    eax
0x9FD016: lea     eax, [esp+10h+var_C]
0x9FD01A: mov     large fs:0, eax
0x9FD020: push    offset flt_B148D4
0x9FD025: mov     ecx, offset INISettingCollection
0x9FD02A: mov     [esp+14h+var_4], 0
0x9FD032: call    SettingCollectionList_AddSetting
0x9FD037: push    offset sub_A25320; void (__cdecl *)()
0x9FD03C: call    _atexit
0x9FD041: add     esp, 4
0x9FD044: mov     ecx, [esp+10h+var_C]
0x9FD048: mov     large fs:0, ecx
0x9FD04F: pop     ecx
0x9FD050: add     esp, 0Ch
0x9FD053: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C2CF0: mov     ecx, offset flt_B148D4
0x9C2CF5: jmp     loc_403BC0
0x9C2CFA: mov     edx, [esp+arg_4]
0x9C2CFE: lea     eax, [edx]
0x9C2D00: mov     ecx, [edx-4]
0x9C2D03: xor     ecx, eax
0x9C2D05: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C2D0A: mov     eax, offset stru_AEBA34
0x9C2D0F: jmp     ___CxxFrameHandler3
