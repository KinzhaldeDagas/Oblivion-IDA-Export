0x9FE360: push    0FFFFFFFFh
0x9FE362: push    offset SEH_9FE360
0x9FE367: mov     eax, large fs:0
0x9FE36D: push    eax
0x9FE36E: mov     eax, ___security_cookie
0x9FE373: xor     eax, esp
0x9FE375: push    eax
0x9FE376: lea     eax, [esp+10h+var_C]
0x9FE37A: mov     large fs:0, eax
0x9FE380: push    offset byte_B14F40
0x9FE385: mov     ecx, offset INISettingCollection
0x9FE38A: mov     [esp+14h+var_4], 0
0x9FE392: call    SettingCollectionList_AddSetting
0x9FE397: push    offset sub_A25CB0; void (__cdecl *)()
0x9FE39C: call    _atexit
0x9FE3A1: add     esp, 4
0x9FE3A4: mov     ecx, [esp+10h+var_C]
0x9FE3A8: mov     large fs:0, ecx
0x9FE3AF: pop     ecx
0x9FE3B0: add     esp, 0Ch
0x9FE3B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4720: mov     ecx, offset byte_B14F40
0x9C4725: jmp     loc_403BC0
0x9C472A: mov     edx, [esp+arg_4]
0x9C472E: lea     eax, [edx]
0x9C4730: mov     ecx, [edx-4]
0x9C4733: xor     ecx, eax
0x9C4735: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C473A: mov     eax, offset stru_AED0A8
0x9C473F: jmp     ___CxxFrameHandler3
