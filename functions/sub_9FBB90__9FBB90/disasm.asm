0x9FBB90: push    0FFFFFFFFh
0x9FBB92: push    offset SEH_9FBB90
0x9FBB97: mov     eax, large fs:0
0x9FBB9D: push    eax
0x9FBB9E: mov     eax, ___security_cookie
0x9FBBA3: xor     eax, esp
0x9FBBA5: push    eax
0x9FBBA6: lea     eax, [esp+10h+var_C]
0x9FBBAA: mov     large fs:0, eax
0x9FBBB0: push    offset dword_B1399C
0x9FBBB5: mov     ecx, offset INISettingCollection
0x9FBBBA: mov     [esp+14h+var_4], 0
0x9FBBC2: call    SettingCollectionList_AddSetting
0x9FBBC7: push    offset sub_A249E0; void (__cdecl *)()
0x9FBBCC: call    _atexit
0x9FBBD1: add     esp, 4
0x9FBBD4: mov     ecx, [esp+10h+var_C]
0x9FBBD8: mov     large fs:0, ecx
0x9FBBDF: pop     ecx
0x9FBBE0: add     esp, 0Ch
0x9FBBE3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BF430: mov     ecx, offset dword_B1399C
0x9BF435: jmp     loc_403BC0
0x9BF43A: mov     edx, [esp+arg_4]
0x9BF43E: lea     eax, [edx]
0x9BF440: mov     ecx, [edx-4]
0x9BF443: xor     ecx, eax
0x9BF445: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF44A: mov     eax, offset stru_AE89CC
0x9BF44F: jmp     ___CxxFrameHandler3
