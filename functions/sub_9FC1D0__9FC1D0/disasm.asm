0x9FC1D0: push    0FFFFFFFFh
0x9FC1D2: push    offset SEH_9FC1D0
0x9FC1D7: mov     eax, large fs:0
0x9FC1DD: push    eax
0x9FC1DE: mov     eax, ___security_cookie
0x9FC1E3: xor     eax, esp
0x9FC1E5: push    eax
0x9FC1E6: lea     eax, [esp+10h+var_C]
0x9FC1EA: mov     large fs:0, eax
0x9FC1F0: push    offset aPURJ
0x9FC1F5: mov     ecx, offset INISettingCollection
0x9FC1FA: mov     [esp+14h+var_4], 0
0x9FC202: call    SettingCollectionList_AddSetting
0x9FC207: push    offset sub_A24BC0; void (__cdecl *)()
0x9FC20C: call    _atexit
0x9FC211: add     esp, 4
0x9FC214: mov     ecx, [esp+10h+var_C]
0x9FC218: mov     large fs:0, ecx
0x9FC21F: pop     ecx
0x9FC220: add     esp, 0Ch
0x9FC223: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C0680: mov     ecx, offset aPURJ
0x9C0685: jmp     loc_403BC0
0x9C068A: mov     edx, [esp+arg_4]
0x9C068E: lea     eax, [edx]
0x9C0690: mov     ecx, [edx-4]
0x9C0693: xor     ecx, eax
0x9C0695: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C069A: mov     eax, offset stru_AE9900
0x9C069F: jmp     ___CxxFrameHandler3
