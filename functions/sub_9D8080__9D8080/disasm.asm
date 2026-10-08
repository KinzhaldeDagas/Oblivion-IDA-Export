0x9D8080: push    0FFFFFFFFh
0x9D8082: push    offset SEH_9D8080
0x9D8087: mov     eax, large fs:0
0x9D808D: push    eax
0x9D808E: mov     eax, ___security_cookie
0x9D8093: xor     eax, esp
0x9D8095: push    eax
0x9D8096: lea     eax, [esp+10h+var_C]
0x9D809A: mov     large fs:0, eax
0x9D80A0: push    offset bBackgroundKey
0x9D80A5: mov     ecx, offset INISettingCollection
0x9D80AA: mov     [esp+14h+var_4], 0
0x9D80B2: call    SettingCollectionList_AddSetting
0x9D80B7: push    offset sub_A16460; void (__cdecl *)()
0x9D80BC: call    _atexit
0x9D80C1: add     esp, 4
0x9D80C4: mov     ecx, [esp+10h+var_C]
0x9D80C8: mov     large fs:0, ecx
0x9D80CF: pop     ecx
0x9D80D0: add     esp, 0Ch
0x9D80D3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9A9E20: mov     ecx, offset bBackgroundKey
0x9A9E25: jmp     loc_403BC0
0x9A9E2A: mov     edx, [esp+arg_4]
0x9A9E2E: lea     eax, [edx]
0x9A9E30: mov     ecx, [edx-4]
0x9A9E33: xor     ecx, eax
0x9A9E35: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9A9E3A: mov     eax, offset stru_AD6EC8
0x9A9E3F: jmp     ___CxxFrameHandler3
