0x9DFE60: push    0FFFFFFFFh
0x9DFE62: push    offset SEH_9DFE60
0x9DFE67: mov     eax, large fs:0
0x9DFE6D: push    eax
0x9DFE6E: mov     eax, ___security_cookie
0x9DFE73: xor     eax, esp
0x9DFE75: push    eax
0x9DFE76: lea     eax, [esp+10h+var_C]
0x9DFE7A: mov     large fs:0, eax
0x9DFE80: push    offset flt_B070D0
0x9DFE85: mov     ecx, offset INISettingCollection
0x9DFE8A: mov     [esp+14h+var_4], 0
0x9DFE92: call    SettingCollectionList_AddSetting
0x9DFE97: push    offset sub_A1A540; void (__cdecl *)()
0x9DFE9C: call    _atexit
0x9DFEA1: add     esp, 4
0x9DFEA4: mov     ecx, [esp+10h+var_C]
0x9DFEA8: mov     large fs:0, ecx
0x9DFEAF: pop     ecx
0x9DFEB0: add     esp, 0Ch
0x9DFEB3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B2030: mov     ecx, offset flt_B070D0
0x9B2035: jmp     loc_403BC0
0x9B203A: mov     edx, [esp+arg_4]
0x9B203E: lea     eax, [edx]
0x9B2040: mov     ecx, [edx-4]
0x9B2043: xor     ecx, eax
0x9B2045: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B204A: mov     eax, offset stru_ADE090
0x9B204F: jmp     ___CxxFrameHandler3
