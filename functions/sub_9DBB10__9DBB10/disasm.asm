0x9DBB10: push    0FFFFFFFFh
0x9DBB12: push    offset SEH_9DBB10
0x9DBB17: mov     eax, large fs:0
0x9DBB1D: push    eax
0x9DBB1E: mov     eax, ___security_cookie
0x9DBB23: xor     eax, esp
0x9DBB25: push    eax
0x9DBB26: lea     eax, [esp+10h+var_C]
0x9DBB2A: mov     large fs:0, eax
0x9DBB30: push    offset byte_B055B4
0x9DBB35: mov     ecx, offset INISettingCollection
0x9DBB3A: mov     [esp+14h+var_4], 0
0x9DBB42: call    SettingCollectionList_AddSetting
0x9DBB47: push    offset sub_A182D0; void (__cdecl *)()
0x9DBB4C: call    _atexit
0x9DBB51: add     esp, 4
0x9DBB54: mov     ecx, [esp+10h+var_C]
0x9DBB58: mov     large fs:0, ecx
0x9DBB5F: pop     ecx
0x9DBB60: add     esp, 0Ch
0x9DBB63: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9ADFF0: mov     ecx, offset byte_B055B4
0x9ADFF5: jmp     loc_403BC0
0x9ADFFA: mov     edx, [esp+arg_4]
0x9ADFFE: lea     eax, [edx]
0x9AE000: mov     ecx, [edx-4]
0x9AE003: xor     ecx, eax
0x9AE005: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE00A: mov     eax, offset stru_ADA8F0
0x9AE00F: jmp     ___CxxFrameHandler3
