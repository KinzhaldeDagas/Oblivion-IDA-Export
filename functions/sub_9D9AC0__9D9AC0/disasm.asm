0x9D9AC0: push    0FFFFFFFFh
0x9D9AC2: push    offset SEH_9D9AC0
0x9D9AC7: mov     eax, large fs:0
0x9D9ACD: push    eax
0x9D9ACE: mov     eax, ___security_cookie
0x9D9AD3: xor     eax, esp
0x9D9AD5: push    eax
0x9D9AD6: lea     eax, [esp+10h+var_C]
0x9D9ADA: mov     large fs:0, eax
0x9D9AE0: push    offset byte_B03144
0x9D9AE5: mov     ecx, offset INISettingCollection
0x9D9AEA: mov     [esp+14h+var_4], 0
0x9D9AF2: call    SettingCollectionList_AddSetting
0x9D9AF7: push    offset sub_A17300; void (__cdecl *)()
0x9D9AFC: call    _atexit
0x9D9B01: add     esp, 4
0x9D9B04: mov     ecx, [esp+10h+var_C]
0x9D9B08: mov     large fs:0, ecx
0x9D9B0F: pop     ecx
0x9D9B10: add     esp, 0Ch
0x9D9B13: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAE50: mov     ecx, offset byte_B03144
0x9AAE55: jmp     loc_403BC0
0x9AAE5A: mov     edx, [esp+arg_4]
0x9AAE5E: lea     eax, [edx]
0x9AAE60: mov     ecx, [edx-4]
0x9AAE63: xor     ecx, eax
0x9AAE65: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAE6A: mov     eax, offset stru_AD7D50
0x9AAE6F: jmp     ___CxxFrameHandler3
