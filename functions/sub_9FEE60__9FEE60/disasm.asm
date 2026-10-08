0x9FEE60: push    0FFFFFFFFh
0x9FEE62: push    offset SEH_9FEE60
0x9FEE67: mov     eax, large fs:0
0x9FEE6D: push    eax
0x9FEE6E: mov     eax, ___security_cookie
0x9FEE73: xor     eax, esp
0x9FEE75: push    eax
0x9FEE76: lea     eax, [esp+10h+var_C]
0x9FEE7A: mov     large fs:0, eax
0x9FEE80: push    offset MusicEnabled
0x9FEE85: mov     ecx, offset INISettingCollection
0x9FEE8A: mov     [esp+14h+var_4], 0
0x9FEE92: call    SettingCollectionList_AddSetting
0x9FEE97: push    offset sub_A26000; void (__cdecl *)()
0x9FEE9C: call    _atexit
0x9FEEA1: add     esp, 4
0x9FEEA4: mov     ecx, [esp+10h+var_C]
0x9FEEA8: mov     large fs:0, ecx
0x9FEEAF: pop     ecx
0x9FEEB0: add     esp, 0Ch
0x9FEEB3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C6650: mov     ecx, offset MusicEnabled
0x9C6655: jmp     loc_403BC0
0x9C665A: mov     edx, [esp+arg_4]
0x9C665E: lea     eax, [edx]
0x9C6660: mov     ecx, [edx-4]
0x9C6663: xor     ecx, eax
0x9C6665: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C666A: mov     eax, offset stru_AEEB8C
0x9C666F: jmp     ___CxxFrameHandler3
