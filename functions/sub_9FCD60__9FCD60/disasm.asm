0x9FCD60: push    0FFFFFFFFh
0x9FCD62: push    offset SEH_9FCD60
0x9FCD67: mov     eax, large fs:0
0x9FCD6D: push    eax
0x9FCD6E: mov     eax, ___security_cookie
0x9FCD73: xor     eax, esp
0x9FCD75: push    eax
0x9FCD76: lea     eax, [esp+10h+var_C]
0x9FCD7A: mov     large fs:0, eax
0x9FCD80: push    offset dword_B14884
0x9FCD85: mov     ecx, offset INISettingCollection
0x9FCD8A: mov     [esp+14h+var_4], 0
0x9FCD92: call    SettingCollectionList_AddSetting
0x9FCD97: push    offset sub_A251D0; void (__cdecl *)()
0x9FCD9C: call    _atexit
0x9FCDA1: add     esp, 4
0x9FCDA4: mov     ecx, [esp+10h+var_C]
0x9FCDA8: mov     large fs:0, ecx
0x9FCDAF: pop     ecx
0x9FCDB0: add     esp, 0Ch
0x9FCDB3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C24D0: mov     ecx, offset dword_B14884
0x9C24D5: jmp     loc_403BC0
0x9C24DA: mov     edx, [esp+arg_4]
0x9C24DE: lea     eax, [edx]
0x9C24E0: mov     ecx, [edx-4]
0x9C24E3: xor     ecx, eax
0x9C24E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C24EA: mov     eax, offset stru_AEB3B0
0x9C24EF: jmp     ___CxxFrameHandler3
