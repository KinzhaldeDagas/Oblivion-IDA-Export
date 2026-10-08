0x9FDBE0: push    0FFFFFFFFh
0x9FDBE2: push    offset SEH_9FDBE0
0x9FDBE7: mov     eax, large fs:0
0x9FDBED: push    eax
0x9FDBEE: mov     eax, ___security_cookie
0x9FDBF3: xor     eax, esp
0x9FDBF5: push    eax
0x9FDBF6: lea     eax, [esp+10h+var_C]
0x9FDBFA: mov     large fs:0, eax
0x9FDC00: push    offset bAllowHavokGrabTheLiving
0x9FDC05: mov     ecx, offset INISettingCollection
0x9FDC0A: mov     [esp+14h+var_4], 0
0x9FDC12: call    SettingCollectionList_AddSetting
0x9FDC17: push    offset sub_A258F0; void (__cdecl *)()
0x9FDC1C: call    _atexit
0x9FDC21: add     esp, 4
0x9FDC24: mov     ecx, [esp+10h+var_C]
0x9FDC28: mov     large fs:0, ecx
0x9FDC2F: pop     ecx
0x9FDC30: add     esp, 0Ch
0x9FDC33: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4360: mov     ecx, offset bAllowHavokGrabTheLiving
0x9C4365: jmp     loc_403BC0
0x9C436A: mov     edx, [esp+arg_4]
0x9C436E: lea     eax, [edx]
0x9C4370: mov     ecx, [edx-4]
0x9C4373: xor     ecx, eax
0x9C4375: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C437A: mov     eax, offset stru_AECD38
0x9C437F: jmp     ___CxxFrameHandler3
