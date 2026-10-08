0x9FC700: push    0FFFFFFFFh
0x9FC702: push    offset SEH_9FC700
0x9FC707: mov     eax, large fs:0
0x9FC70D: push    eax
0x9FC70E: mov     eax, ___security_cookie
0x9FC713: xor     eax, esp
0x9FC715: push    eax
0x9FC716: lea     eax, [esp+10h+var_C]
0x9FC71A: mov     large fs:0, eax
0x9FC720: push    offset aSs?fJ
0x9FC725: mov     ecx, offset INISettingCollection
0x9FC72A: mov     [esp+14h+var_4], 0
0x9FC732: call    SettingCollectionList_AddSetting
0x9FC737: push    offset sub_A24EA0; void (__cdecl *)()
0x9FC73C: call    _atexit
0x9FC741: add     esp, 4
0x9FC744: mov     ecx, [esp+10h+var_C]
0x9FC748: mov     large fs:0, ecx
0x9FC74F: pop     ecx
0x9FC750: add     esp, 0Ch
0x9FC753: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C21A0: mov     ecx, offset aSs?fJ
0x9C21A5: jmp     loc_403BC0
0x9C21AA: mov     edx, [esp+arg_4]
0x9C21AE: lea     eax, [edx]
0x9C21B0: mov     ecx, [edx-4]
0x9C21B3: xor     ecx, eax
0x9C21B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C21BA: mov     eax, offset stru_AEB0C4
0x9C21BF: jmp     ___CxxFrameHandler3
