0x9D8B90: push    0FFFFFFFFh
0x9D8B92: push    offset SEH_9D8B90
0x9D8B97: mov     eax, large fs:0
0x9D8B9D: push    eax
0x9D8B9E: mov     eax, ___security_cookie
0x9D8BA3: xor     eax, esp
0x9D8BA5: push    eax
0x9D8BA6: lea     eax, [esp+10h+var_C]
0x9D8BAA: mov     large fs:0, eax
0x9D8BB0: push    offset off_B02D50; "TestCameraPath"
0x9D8BB5: mov     ecx, offset INISettingCollection
0x9D8BBA: mov     [esp+14h+var_4], 0
0x9D8BC2: call    SettingCollectionList_AddSetting
0x9D8BC7: push    offset sub_A16B80; void (__cdecl *)()
0x9D8BCC: call    _atexit
0x9D8BD1: add     esp, 4
0x9D8BD4: mov     ecx, [esp+10h+var_C]
0x9D8BD8: mov     large fs:0, ecx
0x9D8BDF: pop     ecx
0x9D8BE0: add     esp, 0Ch
0x9D8BE3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA600: mov     ecx, offset off_B02D50; "TestCameraPath"
0x9AA605: jmp     loc_403BC0
0x9AA60A: mov     edx, [esp+arg_4]
0x9AA60E: lea     eax, [edx]
0x9AA610: mov     ecx, [edx-4]
0x9AA613: xor     ecx, eax
0x9AA615: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA61A: mov     eax, offset stru_AD75C4
0x9AA61F: jmp     ___CxxFrameHandler3
