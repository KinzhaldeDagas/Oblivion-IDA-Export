0x9DEE00: push    0FFFFFFFFh
0x9DEE02: push    offset SEH_9DEE00
0x9DEE07: mov     eax, large fs:0
0x9DEE0D: push    eax
0x9DEE0E: mov     eax, ___security_cookie
0x9DEE13: xor     eax, esp
0x9DEE15: push    eax
0x9DEE16: lea     eax, [esp+10h+var_C]
0x9DEE1A: mov     large fs:0, eax
0x9DEE20: push    offset unk_B06F44
0x9DEE25: mov     ecx, offset INISettingCollection
0x9DEE2A: mov     [esp+14h+var_4], 0
0x9DEE32: call    SettingCollectionList_AddSetting
0x9DEE37: push    offset sub_A19CB0; void (__cdecl *)()
0x9DEE3C: call    _atexit
0x9DEE41: add     esp, 4
0x9DEE44: mov     ecx, [esp+10h+var_C]
0x9DEE48: mov     large fs:0, ecx
0x9DEE4F: pop     ecx
0x9DEE50: add     esp, 0Ch
0x9DEE53: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1600: mov     ecx, offset unk_B06F44
0x9B1605: jmp     loc_403BC0
0x9B160A: mov     edx, [esp+arg_4]
0x9B160E: lea     eax, [edx]
0x9B1610: mov     ecx, [edx-4]
0x9B1613: xor     ecx, eax
0x9B1615: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B161A: mov     eax, offset stru_ADD7B8
0x9B161F: jmp     ___CxxFrameHandler3
