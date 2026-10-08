0x9E5A70: push    0FFFFFFFFh
0x9E5A72: push    offset SEH_9E5A70
0x9E5A77: mov     eax, large fs:0
0x9E5A7D: push    eax
0x9E5A7E: mov     eax, ___security_cookie
0x9E5A83: xor     eax, esp
0x9E5A85: push    eax
0x9E5A86: lea     eax, [esp+10h+var_C]
0x9E5A8A: mov     large fs:0, eax
0x9E5A90: push    offset flt_B11BF4
0x9E5A95: mov     ecx, offset BlendSettingCollection
0x9E5A9A: mov     [esp+14h+var_4], 0
0x9E5AA2: call    SettingCollectionList_AddSetting
0x9E5AA7: push    offset sub_A1D180; void (__cdecl *)()
0x9E5AAC: call    _atexit
0x9E5AB1: add     esp, 4
0x9E5AB4: mov     ecx, [esp+10h+var_C]
0x9E5AB8: mov     large fs:0, ecx
0x9E5ABF: pop     ecx
0x9E5AC0: add     esp, 0Ch
0x9E5AC3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BA130: mov     ecx, offset flt_B11BF4
0x9BA135: jmp     loc_403BC0
0x9BA13A: mov     edx, [esp+arg_4]
0x9BA13E: lea     eax, [edx]
0x9BA140: mov     ecx, [edx-4]
0x9BA143: xor     ecx, eax
0x9BA145: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BA14A: mov     eax, offset stru_AE4360
0x9BA14F: jmp     ___CxxFrameHandler3
