0x9E2D60: push    0FFFFFFFFh
0x9E2D62: push    offset SEH_9E2D60
0x9E2D67: mov     eax, large fs:0
0x9E2D6D: push    eax
0x9E2D6E: mov     eax, ___security_cookie
0x9E2D73: xor     eax, esp
0x9E2D75: push    eax
0x9E2D76: lea     eax, [esp+10h+var_C]
0x9E2D7A: mov     large fs:0, eax
0x9E2D80: push    offset dword_B08B7C
0x9E2D85: mov     ecx, offset INISettingCollection
0x9E2D8A: mov     [esp+14h+var_4], 0
0x9E2D92: call    SettingCollectionList_AddSetting
0x9E2D97: push    offset sub_A1B990; void (__cdecl *)()
0x9E2D9C: call    _atexit
0x9E2DA1: add     esp, 4
0x9E2DA4: mov     ecx, [esp+10h+var_C]
0x9E2DA8: mov     large fs:0, ecx
0x9E2DAF: pop     ecx
0x9E2DB0: add     esp, 0Ch
0x9E2DB3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B4F30: mov     ecx, offset dword_B08B7C
0x9B4F35: jmp     loc_403BC0
0x9B4F3A: mov     edx, [esp+arg_4]
0x9B4F3E: lea     eax, [edx]
0x9B4F40: mov     ecx, [edx-4]
0x9B4F43: xor     ecx, eax
0x9B4F45: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B4F4A: mov     eax, offset stru_AE0160
0x9B4F4F: jmp     ___CxxFrameHandler3
