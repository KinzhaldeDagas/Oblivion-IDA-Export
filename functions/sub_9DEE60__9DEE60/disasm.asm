0x9DEE60: push    0FFFFFFFFh
0x9DEE62: push    offset SEH_9DEE60
0x9DEE67: mov     eax, large fs:0
0x9DEE6D: push    eax
0x9DEE6E: mov     eax, ___security_cookie
0x9DEE73: xor     eax, esp
0x9DEE75: push    eax
0x9DEE76: lea     eax, [esp+10h+var_C]
0x9DEE7A: mov     large fs:0, eax
0x9DEE80: push    offset unk_B06F4C
0x9DEE85: mov     ecx, offset INISettingCollection
0x9DEE8A: mov     [esp+14h+var_4], 0
0x9DEE92: call    SettingCollectionList_AddSetting
0x9DEE97: push    offset sub_A19CE0; void (__cdecl *)()
0x9DEE9C: call    _atexit
0x9DEEA1: add     esp, 4
0x9DEEA4: mov     ecx, [esp+10h+var_C]
0x9DEEA8: mov     large fs:0, ecx
0x9DEEAF: pop     ecx
0x9DEEB0: add     esp, 0Ch
0x9DEEB3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1630: mov     ecx, offset unk_B06F4C
0x9B1635: jmp     loc_403BC0
0x9B163A: mov     edx, [esp+arg_4]
0x9B163E: lea     eax, [edx]
0x9B1640: mov     ecx, [edx-4]
0x9B1643: xor     ecx, eax
0x9B1645: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B164A: mov     eax, offset stru_ADD7E4
0x9B164F: jmp     ___CxxFrameHandler3
