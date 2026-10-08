0x9D8B30: push    0FFFFFFFFh
0x9D8B32: push    offset SEH_9D8B30
0x9D8B37: mov     eax, large fs:0
0x9D8B3D: push    eax
0x9D8B3E: mov     eax, ___security_cookie
0x9D8B43: xor     eax, esp
0x9D8B45: push    eax
0x9D8B46: lea     eax, [esp+10h+var_C]
0x9D8B4A: mov     large fs:0, eax
0x9D8B50: push    offset dword_B02D48
0x9D8B55: mov     ecx, offset INISettingCollection
0x9D8B5A: mov     [esp+14h+var_4], 0
0x9D8B62: call    SettingCollectionList_AddSetting
0x9D8B67: push    offset sub_A16B50; void (__cdecl *)()
0x9D8B6C: call    _atexit
0x9D8B71: add     esp, 4
0x9D8B74: mov     ecx, [esp+10h+var_C]
0x9D8B78: mov     large fs:0, ecx
0x9D8B7F: pop     ecx
0x9D8B80: add     esp, 0Ch
0x9D8B83: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA5D0: mov     ecx, offset dword_B02D48
0x9AA5D5: jmp     loc_403BC0
0x9AA5DA: mov     edx, [esp+arg_4]
0x9AA5DE: lea     eax, [edx]
0x9AA5E0: mov     ecx, [edx-4]
0x9AA5E3: xor     ecx, eax
0x9AA5E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA5EA: mov     eax, offset stru_AD7598
0x9AA5EF: jmp     ___CxxFrameHandler3
