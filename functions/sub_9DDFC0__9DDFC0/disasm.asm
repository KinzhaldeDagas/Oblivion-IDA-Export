0x9DDFC0: push    0FFFFFFFFh
0x9DDFC2: push    offset SEH_9DDFC0
0x9DDFC7: mov     eax, large fs:0
0x9DDFCD: push    eax
0x9DDFCE: mov     eax, ___security_cookie
0x9DDFD3: xor     eax, esp
0x9DDFD5: push    eax
0x9DDFD6: lea     eax, [esp+10h+var_C]
0x9DDFDA: mov     large fs:0, eax
0x9DDFE0: push    offset flt_B06E14
0x9DDFE5: mov     ecx, offset INISettingCollection
0x9DDFEA: mov     [esp+14h+var_4], 0
0x9DDFF2: call    SettingCollectionList_AddSetting
0x9DDFF7: push    offset sub_A19590; void (__cdecl *)()
0x9DDFFC: call    _atexit
0x9DE001: add     esp, 4
0x9DE004: mov     ecx, [esp+10h+var_C]
0x9DE008: mov     large fs:0, ecx
0x9DE00F: pop     ecx
0x9DE010: add     esp, 0Ch
0x9DE013: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B0EE0: mov     ecx, offset flt_B06E14
0x9B0EE5: jmp     loc_403BC0
0x9B0EEA: mov     edx, [esp+arg_4]
0x9B0EEE: lea     eax, [edx]
0x9B0EF0: mov     ecx, [edx-4]
0x9B0EF3: xor     ecx, eax
0x9B0EF5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B0EFA: mov     eax, offset stru_ADD130
0x9B0EFF: jmp     ___CxxFrameHandler3
