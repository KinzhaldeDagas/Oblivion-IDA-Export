0x9FBAD0: push    0FFFFFFFFh
0x9FBAD2: push    offset SEH_9FBAD0
0x9FBAD7: mov     eax, large fs:0
0x9FBADD: push    eax
0x9FBADE: mov     eax, ___security_cookie
0x9FBAE3: xor     eax, esp
0x9FBAE5: push    eax
0x9FBAE6: lea     eax, [esp+10h+var_C]
0x9FBAEA: mov     large fs:0, eax
0x9FBAF0: push    offset dword_B1398C
0x9FBAF5: mov     ecx, offset INISettingCollection
0x9FBAFA: mov     [esp+14h+var_4], 0
0x9FBB02: call    SettingCollectionList_AddSetting
0x9FBB07: push    offset sub_A24980; void (__cdecl *)()
0x9FBB0C: call    _atexit
0x9FBB11: add     esp, 4
0x9FBB14: mov     ecx, [esp+10h+var_C]
0x9FBB18: mov     large fs:0, ecx
0x9FBB1F: pop     ecx
0x9FBB20: add     esp, 0Ch
0x9FBB23: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BF3D0: mov     ecx, offset dword_B1398C
0x9BF3D5: jmp     loc_403BC0
0x9BF3DA: mov     edx, [esp+arg_4]
0x9BF3DE: lea     eax, [edx]
0x9BF3E0: mov     ecx, [edx-4]
0x9BF3E3: xor     ecx, eax
0x9BF3E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF3EA: mov     eax, offset stru_AE8974
0x9BF3EF: jmp     ___CxxFrameHandler3
