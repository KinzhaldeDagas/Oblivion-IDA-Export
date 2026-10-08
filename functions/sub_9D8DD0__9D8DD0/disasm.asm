0x9D8DD0: push    0FFFFFFFFh
0x9D8DD2: push    offset SEH_9D8DD0
0x9D8DD7: mov     eax, large fs:0
0x9D8DDD: push    eax
0x9D8DDE: mov     eax, ___security_cookie
0x9D8DE3: xor     eax, esp
0x9D8DE5: push    eax
0x9D8DE6: lea     eax, [esp+10h+var_C]
0x9D8DEA: mov     large fs:0, eax
0x9D8DF0: push    offset OB_INI_fLODTreeMipMapLODBias_SpeedTree_010201A0
0x9D8DF5: mov     ecx, offset INISettingCollection
0x9D8DFA: mov     [esp+14h+var_4], 0
0x9D8E02: call    SettingCollectionList_AddSetting
0x9D8E07: push    offset sub_A16CA0; void (__cdecl *)()
0x9D8E0C: call    _atexit
0x9D8E11: add     esp, 4
0x9D8E14: mov     ecx, [esp+10h+var_C]
0x9D8E18: mov     large fs:0, ecx
0x9D8E1F: pop     ecx
0x9D8E20: add     esp, 0Ch
0x9D8E23: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA720: mov     ecx, offset OB_INI_fLODTreeMipMapLODBias_SpeedTree_010201A0
0x9AA725: jmp     loc_403BC0
0x9AA72A: mov     edx, [esp+arg_4]
0x9AA72E: lea     eax, [edx]
0x9AA730: mov     ecx, [edx-4]
0x9AA733: xor     ecx, eax
0x9AA735: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA73A: mov     eax, offset stru_AD76CC
0x9AA73F: jmp     ___CxxFrameHandler3
