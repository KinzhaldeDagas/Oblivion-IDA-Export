0x9FDA00: push    0FFFFFFFFh
0x9FDA02: push    offset SEH_9FDA00
0x9FDA07: mov     eax, large fs:0
0x9FDA0D: push    eax
0x9FDA0E: mov     eax, ___security_cookie
0x9FDA13: xor     eax, esp
0x9FDA15: push    eax
0x9FDA16: lea     eax, [esp+10h+var_C]
0x9FDA1A: mov     large fs:0, eax
0x9FDA20: push    offset dword_B14E3C
0x9FDA25: mov     ecx, offset INISettingCollection
0x9FDA2A: mov     [esp+14h+var_4], 0
0x9FDA32: call    SettingCollectionList_AddSetting
0x9FDA37: push    offset sub_A257E0; void (__cdecl *)()
0x9FDA3C: call    _atexit
0x9FDA41: add     esp, 4
0x9FDA44: mov     ecx, [esp+10h+var_C]
0x9FDA48: mov     large fs:0, ecx
0x9FDA4F: pop     ecx
0x9FDA50: add     esp, 0Ch
0x9FDA53: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C3CC0: mov     ecx, offset dword_B14E3C
0x9C3CC5: jmp     loc_403BC0
0x9C3CCA: mov     edx, [esp+arg_4]
0x9C3CCE: lea     eax, [edx]
0x9C3CD0: mov     ecx, [edx-4]
0x9C3CD3: xor     ecx, eax
0x9C3CD5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C3CDA: mov     eax, offset stru_AEC7E8
0x9C3CDF: jmp     ___CxxFrameHandler3
