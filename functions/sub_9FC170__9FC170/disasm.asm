0x9FC170: push    0FFFFFFFFh
0x9FC172: push    offset SEH_9FC170
0x9FC177: mov     eax, large fs:0
0x9FC17D: push    eax
0x9FC17E: mov     eax, ___security_cookie
0x9FC183: xor     eax, esp
0x9FC185: push    eax
0x9FC186: lea     eax, [esp+10h+var_C]
0x9FC18A: mov     large fs:0, eax
0x9FC190: push    offset byte_B14130
0x9FC195: mov     ecx, offset INISettingCollection
0x9FC19A: mov     [esp+14h+var_4], 0
0x9FC1A2: call    SettingCollectionList_AddSetting
0x9FC1A7: push    offset sub_A24B90; void (__cdecl *)()
0x9FC1AC: call    _atexit
0x9FC1B1: add     esp, 4
0x9FC1B4: mov     ecx, [esp+10h+var_C]
0x9FC1B8: mov     large fs:0, ecx
0x9FC1BF: pop     ecx
0x9FC1C0: add     esp, 0Ch
0x9FC1C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C0650: mov     ecx, offset byte_B14130
0x9C0655: jmp     loc_403BC0
0x9C065A: mov     edx, [esp+arg_4]
0x9C065E: lea     eax, [edx]
0x9C0660: mov     ecx, [edx-4]
0x9C0663: xor     ecx, eax
0x9C0665: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C066A: mov     eax, offset stru_AE98D4
0x9C066F: jmp     ___CxxFrameHandler3
