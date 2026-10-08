0x9E3C80: push    0FFFFFFFFh
0x9E3C82: push    offset SEH_9E3C80
0x9E3C87: mov     eax, large fs:0
0x9E3C8D: push    eax
0x9E3C8E: mov     eax, ___security_cookie
0x9E3C93: xor     eax, esp
0x9E3C95: push    eax
0x9E3C96: lea     eax, [esp+10h+var_C]
0x9E3C9A: mov     large fs:0, eax
0x9E3CA0: push    offset byte_B10CA0
0x9E3CA5: mov     ecx, offset INISettingCollection
0x9E3CAA: mov     [esp+14h+var_4], 0
0x9E3CB2: call    SettingCollectionList_AddSetting
0x9E3CB7: push    offset sub_A1C200; void (__cdecl *)()
0x9E3CBC: call    _atexit
0x9E3CC1: add     esp, 4
0x9E3CC4: mov     ecx, [esp+10h+var_C]
0x9E3CC8: mov     large fs:0, ecx
0x9E3CCF: pop     ecx
0x9E3CD0: add     esp, 0Ch
0x9E3CD3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B8570: mov     ecx, offset byte_B10CA0
0x9B8575: jmp     loc_403BC0
0x9B857A: mov     edx, [esp+arg_4]
0x9B857E: lea     eax, [edx]
0x9B8580: mov     ecx, [edx-4]
0x9B8583: xor     ecx, eax
0x9B8585: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B858A: mov     eax, offset stru_AE2BE0
0x9B858F: jmp     ___CxxFrameHandler3
