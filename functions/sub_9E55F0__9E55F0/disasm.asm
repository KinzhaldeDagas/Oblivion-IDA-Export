0x9E55F0: push    0FFFFFFFFh
0x9E55F2: push    offset SEH_9E55F0
0x9E55F7: mov     eax, large fs:0
0x9E55FD: push    eax
0x9E55FE: mov     eax, ___security_cookie
0x9E5603: xor     eax, esp
0x9E5605: push    eax
0x9E5606: lea     eax, [esp+10h+var_C]
0x9E560A: mov     large fs:0, eax
0x9E5610: push    offset off_B11B94; "1.0f, 1.0"
0x9E5615: mov     ecx, offset BlendSettingCollection
0x9E561A: mov     [esp+14h+var_4], 0
0x9E5622: call    SettingCollectionList_AddSetting
0x9E5627: push    offset sub_A1CF40; void (__cdecl *)()
0x9E562C: call    _atexit
0x9E5631: add     esp, 4
0x9E5634: mov     ecx, [esp+10h+var_C]
0x9E5638: mov     large fs:0, ecx
0x9E563F: pop     ecx
0x9E5640: add     esp, 0Ch
0x9E5643: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9EF0: mov     ecx, offset off_B11B94; "1.0f, 1.0"
0x9B9EF5: jmp     loc_403BC0
0x9B9EFA: mov     edx, [esp+arg_4]
0x9B9EFE: lea     eax, [edx]
0x9B9F00: mov     ecx, [edx-4]
0x9B9F03: xor     ecx, eax
0x9B9F05: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9F0A: mov     eax, offset stru_AE4150
0x9B9F0F: jmp     ___CxxFrameHandler3
