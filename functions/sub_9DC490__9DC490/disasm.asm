0x9DC490: push    0FFFFFFFFh
0x9DC492: push    offset SEH_9DC490
0x9DC497: mov     eax, large fs:0
0x9DC49D: push    eax
0x9DC49E: mov     eax, ___security_cookie
0x9DC4A3: xor     eax, esp
0x9DC4A5: push    eax
0x9DC4A6: lea     eax, [esp+10h+var_C]
0x9DC4AA: mov     large fs:0, eax
0x9DC4B0: push    offset unk_B068E0
0x9DC4B5: mov     ecx, offset INISettingCollection
0x9DC4BA: mov     [esp+14h+var_4], 0
0x9DC4C2: call    SettingCollectionList_AddSetting
0x9DC4C7: push    offset sub_A18770; void (__cdecl *)()
0x9DC4CC: call    _atexit
0x9DC4D1: add     esp, 4
0x9DC4D4: mov     ecx, [esp+10h+var_C]
0x9DC4D8: mov     large fs:0, ecx
0x9DC4DF: pop     ecx
0x9DC4E0: add     esp, 0Ch
0x9DC4E3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AF6F0: mov     ecx, offset unk_B068E0
0x9AF6F5: jmp     loc_403BC0
0x9AF6FA: mov     edx, [esp+arg_4]
0x9AF6FE: lea     eax, [edx]
0x9AF700: mov     ecx, [edx-4]
0x9AF703: xor     ecx, eax
0x9AF705: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AF70A: mov     eax, offset stru_ADBC7C
0x9AF70F: jmp     ___CxxFrameHandler3
