0x9E05D0: push    0FFFFFFFFh
0x9E05D2: push    offset SEH_9E05D0
0x9E05D7: mov     eax, large fs:0
0x9E05DD: push    eax
0x9E05DE: mov     eax, ___security_cookie
0x9E05E3: xor     eax, esp
0x9E05E5: push    eax
0x9E05E6: lea     eax, [esp+10h+var_C]
0x9E05EA: mov     large fs:0, eax
0x9E05F0: push    offset byte_B07644
0x9E05F5: mov     ecx, offset INISettingCollection
0x9E05FA: mov     [esp+14h+var_4], 0
0x9E0602: call    SettingCollectionList_AddSetting
0x9E0607: push    offset sub_A1A940; void (__cdecl *)()
0x9E060C: call    _atexit
0x9E0611: add     esp, 4
0x9E0614: mov     ecx, [esp+10h+var_C]
0x9E0618: mov     large fs:0, ecx
0x9E061F: pop     ecx
0x9E0620: add     esp, 0Ch
0x9E0623: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B25F0: mov     ecx, offset byte_B07644
0x9B25F5: jmp     loc_403BC0
0x9B25FA: mov     edx, [esp+arg_4]
0x9B25FE: lea     eax, [edx]
0x9B2600: mov     ecx, [edx-4]
0x9B2603: xor     ecx, eax
0x9B2605: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B260A: mov     eax, offset stru_ADE5A0
0x9B260F: jmp     ___CxxFrameHandler3
