0x9FDE80: push    0FFFFFFFFh
0x9FDE82: push    offset SEH_9FDE80
0x9FDE87: mov     eax, large fs:0
0x9FDE8D: push    eax
0x9FDE8E: mov     eax, ___security_cookie
0x9FDE93: xor     eax, esp
0x9FDE95: push    eax
0x9FDE96: lea     eax, [esp+10h+var_C]
0x9FDE9A: mov     large fs:0, eax
0x9FDEA0: push    offset iJoystickLookUpDown
0x9FDEA5: mov     ecx, offset INISettingCollection
0x9FDEAA: mov     [esp+14h+var_4], 0
0x9FDEB2: call    SettingCollectionList_AddSetting
0x9FDEB7: push    offset sub_A25A40; void (__cdecl *)()
0x9FDEBC: call    _atexit
0x9FDEC1: add     esp, 4
0x9FDEC4: mov     ecx, [esp+10h+var_C]
0x9FDEC8: mov     large fs:0, ecx
0x9FDECF: pop     ecx
0x9FDED0: add     esp, 0Ch
0x9FDED3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C44B0: mov     ecx, offset iJoystickLookUpDown
0x9C44B5: jmp     loc_403BC0
0x9C44BA: mov     edx, [esp+arg_4]
0x9C44BE: lea     eax, [edx]
0x9C44C0: mov     ecx, [edx-4]
0x9C44C3: xor     ecx, eax
0x9C44C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C44CA: mov     eax, offset stru_AECE6C
0x9C44CF: jmp     ___CxxFrameHandler3
