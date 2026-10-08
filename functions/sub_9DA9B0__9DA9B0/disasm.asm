0x9DA9B0: push    0FFFFFFFFh
0x9DA9B2: push    offset SEH_9DA9B0
0x9DA9B7: mov     eax, large fs:0
0x9DA9BD: push    eax
0x9DA9BE: mov     eax, ___security_cookie
0x9DA9C3: xor     eax, esp
0x9DA9C5: push    eax
0x9DA9C6: lea     eax, [esp+10h+var_C]
0x9DA9CA: mov     large fs:0, eax
0x9DA9D0: push    offset bCheckRuntimeCollisions_Archive
0x9DA9D5: mov     ecx, offset INISettingCollection
0x9DA9DA: mov     [esp+14h+var_4], 0
0x9DA9E2: call    SettingCollectionList_AddSetting
0x9DA9E7: push    offset sub_A17A10; void (__cdecl *)()
0x9DA9EC: call    _atexit
0x9DA9F1: add     esp, 4
0x9DA9F4: mov     ecx, [esp+10h+var_C]
0x9DA9F8: mov     large fs:0, ecx
0x9DA9FF: pop     ecx
0x9DAA00: add     esp, 0Ch
0x9DAA03: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ABC90: mov     ecx, offset bCheckRuntimeCollisions_Archive
0x9ABC95: jmp     loc_403BC0
0x9ABC9A: mov     edx, [esp+arg_4]
0x9ABC9E: lea     eax, [edx]
0x9ABCA0: mov     ecx, [edx-4]
0x9ABCA3: xor     ecx, eax
0x9ABCA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9ABCAA: mov     eax, offset stru_AD8A04
0x9ABCAF: jmp     ___CxxFrameHandler3
