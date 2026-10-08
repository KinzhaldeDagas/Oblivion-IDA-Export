0x9DB390: push    0FFFFFFFFh
0x9DB392: push    offset SEH_9DB390
0x9DB397: mov     eax, large fs:0
0x9DB39D: push    eax
0x9DB39E: mov     eax, ___security_cookie
0x9DB3A3: xor     eax, esp
0x9DB3A5: push    eax
0x9DB3A6: lea     eax, [esp+10h+var_C]
0x9DB3AA: mov     large fs:0, eax
0x9DB3B0: push    offset flt_B05234
0x9DB3B5: mov     ecx, offset INISettingCollection
0x9DB3BA: mov     [esp+14h+var_4], 0
0x9DB3C2: call    SettingCollectionList_AddSetting
0x9DB3C7: push    offset sub_A17F30; void (__cdecl *)()
0x9DB3CC: call    _atexit
0x9DB3D1: add     esp, 4
0x9DB3D4: mov     ecx, [esp+10h+var_C]
0x9DB3D8: mov     large fs:0, ecx
0x9DB3DF: pop     ecx
0x9DB3E0: add     esp, 0Ch
0x9DB3E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AD4E0: mov     ecx, offset flt_B05234
0x9AD4E5: jmp     loc_403BC0
0x9AD4EA: mov     edx, [esp+arg_4]
0x9AD4EE: lea     eax, [edx]
0x9AD4F0: mov     ecx, [edx-4]
0x9AD4F3: xor     ecx, eax
0x9AD4F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AD4FA: mov     eax, offset stru_ADA06C
0x9AD4FF: jmp     ___CxxFrameHandler3
