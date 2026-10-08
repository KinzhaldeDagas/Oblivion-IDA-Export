0x9E25F0: push    0FFFFFFFFh
0x9E25F2: push    offset SEH_9E25F0
0x9E25F7: mov     eax, large fs:0
0x9E25FD: push    eax
0x9E25FE: mov     eax, ___security_cookie
0x9E2603: xor     eax, esp
0x9E2605: push    eax
0x9E2606: lea     eax, [esp+10h+var_C]
0x9E260A: mov     large fs:0, eax
0x9E2610: push    offset flt_B08188
0x9E2615: mov     ecx, offset INISettingCollection
0x9E261A: mov     [esp+14h+var_4], 0
0x9E2622: call    SettingCollectionList_AddSetting
0x9E2627: push    offset sub_A1B5A0; void (__cdecl *)()
0x9E262C: call    _atexit
0x9E2631: add     esp, 4
0x9E2634: mov     ecx, [esp+10h+var_C]
0x9E2638: mov     large fs:0, ecx
0x9E263F: pop     ecx
0x9E2640: add     esp, 0Ch
0x9E2643: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B32B0: mov     ecx, offset flt_B08188
0x9B32B5: jmp     loc_403BC0
0x9B32BA: mov     edx, [esp+arg_4]
0x9B32BE: lea     eax, [edx]
0x9B32C0: mov     ecx, [edx-4]
0x9B32C3: xor     ecx, eax
0x9B32C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B32CA: mov     eax, offset stru_ADEFFC
0x9B32CF: jmp     ___CxxFrameHandler3
