0x9FB8E0: push    0FFFFFFFFh
0x9FB8E2: push    offset SEH_9FB8E0
0x9FB8E7: mov     eax, large fs:0
0x9FB8ED: push    eax
0x9FB8EE: mov     eax, ___security_cookie
0x9FB8F3: xor     eax, esp
0x9FB8F5: push    eax
0x9FB8F6: lea     eax, [esp+10h+var_C]
0x9FB8FA: mov     large fs:0, eax
0x9FB900: push    offset dword_B13610
0x9FB905: mov     ecx, offset INISettingCollection
0x9FB90A: mov     [esp+14h+var_4], 0
0x9FB912: call    SettingCollectionList_AddSetting
0x9FB917: push    offset sub_A248B0; void (__cdecl *)()
0x9FB91C: call    _atexit
0x9FB921: add     esp, 4
0x9FB924: mov     ecx, [esp+10h+var_C]
0x9FB928: mov     large fs:0, ecx
0x9FB92F: pop     ecx
0x9FB930: add     esp, 0Ch
0x9FB933: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BF0C0: mov     ecx, offset dword_B13610
0x9BF0C5: jmp     loc_403BC0
0x9BF0CA: mov     edx, [esp+arg_4]
0x9BF0CE: lea     eax, [edx]
0x9BF0D0: mov     ecx, [edx-4]
0x9BF0D3: xor     ecx, eax
0x9BF0D5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF0DA: mov     eax, offset stru_AE86F0
0x9BF0DF: jmp     ___CxxFrameHandler3
