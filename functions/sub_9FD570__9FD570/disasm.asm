0x9FD570: push    0FFFFFFFFh
0x9FD572: push    offset SEH_9FD570
0x9FD577: mov     eax, large fs:0
0x9FD57D: push    eax
0x9FD57E: mov     eax, ___security_cookie
0x9FD583: xor     eax, esp
0x9FD585: push    eax
0x9FD586: lea     eax, [esp+10h+var_C]
0x9FD58A: mov     large fs:0, eax
0x9FD590: push    offset dword_B14BB4
0x9FD595: mov     ecx, offset INISettingCollection
0x9FD59A: mov     [esp+14h+var_4], 0
0x9FD5A2: call    SettingCollectionList_AddSetting
0x9FD5A7: push    offset sub_A255B0; void (__cdecl *)()
0x9FD5AC: call    _atexit
0x9FD5B1: add     esp, 4
0x9FD5B4: mov     ecx, [esp+10h+var_C]
0x9FD5B8: mov     large fs:0, ecx
0x9FD5BF: pop     ecx
0x9FD5C0: add     esp, 0Ch
0x9FD5C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C3510: mov     ecx, offset dword_B14BB4
0x9C3515: jmp     loc_403BC0
0x9C351A: mov     edx, [esp+arg_4]
0x9C351E: lea     eax, [edx]
0x9C3520: mov     ecx, [edx-4]
0x9C3523: xor     ecx, eax
0x9C3525: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C352A: mov     eax, offset stru_AEC108
0x9C352F: jmp     ___CxxFrameHandler3
