0x9E34C0: push    0FFFFFFFFh
0x9E34C2: push    offset SEH_9E34C0
0x9E34C7: mov     eax, large fs:0
0x9E34CD: push    eax
0x9E34CE: mov     eax, ___security_cookie
0x9E34D3: xor     eax, esp
0x9E34D5: push    eax
0x9E34D6: lea     eax, [esp+10h+var_C]
0x9E34DA: mov     large fs:0, eax
0x9E34E0: push    offset byte_B09B00
0x9E34E5: mov     ecx, offset INISettingCollection
0x9E34EA: mov     [esp+14h+var_4], 0
0x9E34F2: call    SettingCollectionList_AddSetting
0x9E34F7: push    offset sub_A1BDF0; void (__cdecl *)()
0x9E34FC: call    _atexit
0x9E3501: add     esp, 4
0x9E3504: mov     ecx, [esp+10h+var_C]
0x9E3508: mov     large fs:0, ecx
0x9E350F: pop     ecx
0x9E3510: add     esp, 0Ch
0x9E3513: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B6280: mov     ecx, offset byte_B09B00
0x9B6285: jmp     loc_403BC0
0x9B628A: mov     edx, [esp+arg_4]
0x9B628E: lea     eax, [edx]
0x9B6290: mov     ecx, [edx-4]
0x9B6293: xor     ecx, eax
0x9B6295: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B629A: mov     eax, offset stru_AE11A8
0x9B629F: jmp     ___CxxFrameHandler3
