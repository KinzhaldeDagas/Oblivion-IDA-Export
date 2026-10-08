0x9FBCE0: push    0FFFFFFFFh
0x9FBCE2: push    offset SEH_9FBCE0
0x9FBCE7: mov     eax, large fs:0
0x9FBCED: push    eax
0x9FBCEE: mov     eax, ___security_cookie
0x9FBCF3: xor     eax, esp
0x9FBCF5: push    eax
0x9FBCF6: lea     eax, [esp+10h+var_C]
0x9FBCFA: mov     large fs:0, eax
0x9FBD00: push    offset flt_B13FC4
0x9FBD05: mov     ecx, offset INISettingCollection
0x9FBD0A: mov     [esp+14h+var_4], 0
0x9FBD12: call    SettingCollectionList_AddSetting
0x9FBD17: push    offset sub_A24A80; void (__cdecl *)()
0x9FBD1C: call    _atexit
0x9FBD21: add     esp, 4
0x9FBD24: mov     ecx, [esp+10h+var_C]
0x9FBD28: mov     large fs:0, ecx
0x9FBD2F: pop     ecx
0x9FBD30: add     esp, 0Ch
0x9FBD33: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C00B0: mov     ecx, offset flt_B13FC4
0x9C00B5: jmp     loc_403BC0
0x9C00BA: mov     edx, [esp+arg_4]
0x9C00BE: lea     eax, [edx]
0x9C00C0: mov     ecx, [edx-4]
0x9C00C3: xor     ecx, eax
0x9C00C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C00CA: mov     eax, offset stru_AE9404
0x9C00CF: jmp     ___CxxFrameHandler3
