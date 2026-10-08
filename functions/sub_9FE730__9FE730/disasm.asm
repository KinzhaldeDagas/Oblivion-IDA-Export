0x9FE730: push    0FFFFFFFFh
0x9FE732: push    offset SEH_9FE730
0x9FE737: mov     eax, large fs:0
0x9FE73D: push    eax
0x9FE73E: mov     eax, ___security_cookie
0x9FE743: xor     eax, esp
0x9FE745: push    eax
0x9FE746: lea     eax, [esp+10h+var_C]
0x9FE74A: mov     large fs:0, eax
0x9FE750: push    offset byte_B15750
0x9FE755: mov     ecx, offset INISettingCollection
0x9FE75A: mov     [esp+14h+var_4], 0
0x9FE762: call    SettingCollectionList_AddSetting
0x9FE767: push    offset sub_A25E00; void (__cdecl *)()
0x9FE76C: call    _atexit
0x9FE771: add     esp, 4
0x9FE774: mov     ecx, [esp+10h+var_C]
0x9FE778: mov     large fs:0, ecx
0x9FE77F: pop     ecx
0x9FE780: add     esp, 0Ch
0x9FE783: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4CE0: mov     ecx, offset byte_B15750
0x9C4CE5: jmp     loc_403BC0
0x9C4CEA: mov     edx, [esp+arg_4]
0x9C4CEE: lea     eax, [edx]
0x9C4CF0: mov     ecx, [edx-4]
0x9C4CF3: xor     ecx, eax
0x9C4CF5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C4CFA: mov     eax, offset stru_AED5B4
0x9C4CFF: jmp     ___CxxFrameHandler3
