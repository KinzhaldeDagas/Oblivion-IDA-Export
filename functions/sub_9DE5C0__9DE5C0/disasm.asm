0x9DE5C0: push    0FFFFFFFFh
0x9DE5C2: push    offset SEH_9DE5C0
0x9DE5C7: mov     eax, large fs:0
0x9DE5CD: push    eax
0x9DE5CE: mov     eax, ___security_cookie
0x9DE5D3: xor     eax, esp
0x9DE5D5: push    eax
0x9DE5D6: lea     eax, [esp+10h+var_C]
0x9DE5DA: mov     large fs:0, eax
0x9DE5E0: push    offset flt_B06E94
0x9DE5E5: mov     ecx, offset INISettingCollection
0x9DE5EA: mov     [esp+14h+var_4], 0
0x9DE5F2: call    SettingCollectionList_AddSetting
0x9DE5F7: push    offset sub_A19890; void (__cdecl *)()
0x9DE5FC: call    _atexit
0x9DE601: add     esp, 4
0x9DE604: mov     ecx, [esp+10h+var_C]
0x9DE608: mov     large fs:0, ecx
0x9DE60F: pop     ecx
0x9DE610: add     esp, 0Ch
0x9DE613: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B11E0: mov     ecx, offset flt_B06E94
0x9B11E5: jmp     loc_403BC0
0x9B11EA: mov     edx, [esp+arg_4]
0x9B11EE: lea     eax, [edx]
0x9B11F0: mov     ecx, [edx-4]
0x9B11F3: xor     ecx, eax
0x9B11F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B11FA: mov     eax, offset stru_ADD3F0
0x9B11FF: jmp     ___CxxFrameHandler3
