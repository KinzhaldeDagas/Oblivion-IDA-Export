0x9E4E10: push    0FFFFFFFFh
0x9E4E12: push    offset SEH_9E4E10
0x9E4E17: mov     eax, large fs:0
0x9E4E1D: push    eax
0x9E4E1E: mov     eax, ___security_cookie
0x9E4E23: xor     eax, esp
0x9E4E25: push    eax
0x9E4E26: lea     eax, [esp+10h+var_C]
0x9E4E2A: mov     large fs:0, eax
0x9E4E30: push    offset off_B11AEC; "1.0, 1.0"
0x9E4E35: mov     ecx, offset BlendSettingCollection
0x9E4E3A: mov     [esp+14h+var_4], 0
0x9E4E42: call    SettingCollectionList_AddSetting
0x9E4E47: push    offset sub_A1CB50; void (__cdecl *)()
0x9E4E4C: call    _atexit
0x9E4E51: add     esp, 4
0x9E4E54: mov     ecx, [esp+10h+var_C]
0x9E4E58: mov     large fs:0, ecx
0x9E4E5F: pop     ecx
0x9E4E60: add     esp, 0Ch
0x9E4E63: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B9B00: mov     ecx, offset off_B11AEC; "1.0, 1.0"
0x9B9B05: jmp     loc_403BC0
0x9B9B0A: mov     edx, [esp+arg_4]
0x9B9B0E: lea     eax, [edx]
0x9B9B10: mov     ecx, [edx-4]
0x9B9B13: xor     ecx, eax
0x9B9B15: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B9B1A: mov     eax, offset stru_AE3DB4
0x9B9B1F: jmp     ___CxxFrameHandler3
