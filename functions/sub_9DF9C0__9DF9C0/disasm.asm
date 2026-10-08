0x9DF9C0: push    0FFFFFFFFh
0x9DF9C2: push    offset SEH_9DF9C0
0x9DF9C7: mov     eax, large fs:0
0x9DF9CD: push    eax
0x9DF9CE: mov     eax, ___security_cookie
0x9DF9D3: xor     eax, esp
0x9DF9D5: push    eax
0x9DF9D6: lea     eax, [esp+10h+var_C]
0x9DF9DA: mov     large fs:0, eax
0x9DF9E0: push    offset byte_B07070
0x9DF9E5: mov     ecx, offset INISettingCollection
0x9DF9EA: mov     [esp+14h+var_4], 0
0x9DF9F2: call    SettingCollectionList_AddSetting
0x9DF9F7: push    offset sub_A1A300; void (__cdecl *)()
0x9DF9FC: call    _atexit
0x9DFA01: add     esp, 4
0x9DFA04: mov     ecx, [esp+10h+var_C]
0x9DFA08: mov     large fs:0, ecx
0x9DFA0F: pop     ecx
0x9DFA10: add     esp, 0Ch
0x9DFA13: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1DF0: mov     ecx, offset byte_B07070
0x9B1DF5: jmp     loc_403BC0
0x9B1DFA: mov     edx, [esp+arg_4]
0x9B1DFE: lea     eax, [edx]
0x9B1E00: mov     ecx, [edx-4]
0x9B1E03: xor     ecx, eax
0x9B1E05: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B1E0A: mov     eax, offset stru_ADDE80
0x9B1E0F: jmp     ___CxxFrameHandler3
