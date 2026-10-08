0x9FC470: push    0FFFFFFFFh
0x9FC472: push    offset SEH_9FC470
0x9FC477: mov     eax, large fs:0
0x9FC47D: push    eax
0x9FC47E: mov     eax, ___security_cookie
0x9FC483: xor     eax, esp
0x9FC485: push    eax
0x9FC486: lea     eax, [esp+10h+var_C]
0x9FC48A: mov     large fs:0, eax
0x9FC490: push    offset dword_B14170
0x9FC495: mov     ecx, offset INISettingCollection
0x9FC49A: mov     [esp+14h+var_4], 0
0x9FC4A2: call    SettingCollectionList_AddSetting
0x9FC4A7: push    offset sub_A24D10; void (__cdecl *)()
0x9FC4AC: call    _atexit
0x9FC4B1: add     esp, 4
0x9FC4B4: mov     ecx, [esp+10h+var_C]
0x9FC4B8: mov     large fs:0, ecx
0x9FC4BF: pop     ecx
0x9FC4C0: add     esp, 0Ch
0x9FC4C3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C07D0: mov     ecx, offset dword_B14170
0x9C07D5: jmp     loc_403BC0
0x9C07DA: mov     edx, [esp+arg_4]
0x9C07DE: lea     eax, [edx]
0x9C07E0: mov     ecx, [edx-4]
0x9C07E3: xor     ecx, eax
0x9C07E5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C07EA: mov     eax, offset stru_AE9A34
0x9C07EF: jmp     ___CxxFrameHandler3
