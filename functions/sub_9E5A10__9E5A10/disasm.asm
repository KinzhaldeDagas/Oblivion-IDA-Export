0x9E5A10: push    0FFFFFFFFh
0x9E5A12: push    offset SEH_9E5A10
0x9E5A17: mov     eax, large fs:0
0x9E5A1D: push    eax
0x9E5A1E: mov     eax, ___security_cookie
0x9E5A23: xor     eax, esp
0x9E5A25: push    eax
0x9E5A26: lea     eax, [esp+10h+var_C]
0x9E5A2A: mov     large fs:0, eax
0x9E5A30: push    offset flt_B11BEC
0x9E5A35: mov     ecx, offset BlendSettingCollection
0x9E5A3A: mov     [esp+14h+var_4], 0
0x9E5A42: call    SettingCollectionList_AddSetting
0x9E5A47: push    offset sub_A1D150; void (__cdecl *)()
0x9E5A4C: call    _atexit
0x9E5A51: add     esp, 4
0x9E5A54: mov     ecx, [esp+10h+var_C]
0x9E5A58: mov     large fs:0, ecx
0x9E5A5F: pop     ecx
0x9E5A60: add     esp, 0Ch
0x9E5A63: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BA100: mov     ecx, offset flt_B11BEC
0x9BA105: jmp     loc_403BC0
0x9BA10A: mov     edx, [esp+arg_4]
0x9BA10E: lea     eax, [edx]
0x9BA110: mov     ecx, [edx-4]
0x9BA113: xor     ecx, eax
0x9BA115: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BA11A: mov     eax, offset stru_AE4334
0x9BA11F: jmp     ___CxxFrameHandler3
