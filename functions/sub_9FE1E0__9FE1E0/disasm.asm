0x9FE1E0: push    0FFFFFFFFh
0x9FE1E2: push    offset SEH_9FE1E0
0x9FE1E7: mov     eax, large fs:0
0x9FE1ED: push    eax
0x9FE1EE: mov     eax, ___security_cookie
0x9FE1F3: xor     eax, esp
0x9FE1F5: push    eax
0x9FE1F6: lea     eax, [esp+10h+var_C]
0x9FE1FA: mov     large fs:0, eax
0x9FE200: push    offset dword_B14F20
0x9FE205: mov     ecx, offset INISettingCollection
0x9FE20A: mov     [esp+14h+var_4], 0
0x9FE212: call    SettingCollectionList_AddSetting
0x9FE217: push    offset sub_A25BF0; void (__cdecl *)()
0x9FE21C: call    _atexit
0x9FE221: add     esp, 4
0x9FE224: mov     ecx, [esp+10h+var_C]
0x9FE228: mov     large fs:0, ecx
0x9FE22F: pop     ecx
0x9FE230: add     esp, 0Ch
0x9FE233: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4660: mov     ecx, offset dword_B14F20
0x9C4665: jmp     loc_403BC0
0x9C466A: mov     edx, [esp+arg_4]
0x9C466E: lea     eax, [edx]
0x9C4670: mov     ecx, [edx-4]
0x9C4673: xor     ecx, eax
0x9C4675: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C467A: mov     eax, offset stru_AECFF8
0x9C467F: jmp     ___CxxFrameHandler3
