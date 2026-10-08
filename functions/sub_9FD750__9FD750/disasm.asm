0x9FD750: push    0FFFFFFFFh
0x9FD752: push    offset SEH_9FD750
0x9FD757: mov     eax, large fs:0
0x9FD75D: push    eax
0x9FD75E: mov     eax, ___security_cookie
0x9FD763: xor     eax, esp
0x9FD765: push    eax
0x9FD766: lea     eax, [esp+10h+var_C]
0x9FD76A: mov     large fs:0, eax
0x9FD770: push    offset flt_B14CBC
0x9FD775: mov     ecx, offset INISettingCollection
0x9FD77A: mov     [esp+14h+var_4], 0
0x9FD782: call    SettingCollectionList_AddSetting
0x9FD787: push    offset sub_A256A0; void (__cdecl *)()
0x9FD78C: call    _atexit
0x9FD791: add     esp, 4
0x9FD794: mov     ecx, [esp+10h+var_C]
0x9FD798: mov     large fs:0, ecx
0x9FD79F: pop     ecx
0x9FD7A0: add     esp, 0Ch
0x9FD7A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C3800: mov     ecx, offset flt_B14CBC
0x9C3805: jmp     loc_403BC0
0x9C380A: mov     edx, [esp+arg_4]
0x9C380E: lea     eax, [edx]
0x9C3810: mov     ecx, [edx-4]
0x9C3813: xor     ecx, eax
0x9C3815: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C381A: mov     eax, offset stru_AEC394
0x9C381F: jmp     ___CxxFrameHandler3
