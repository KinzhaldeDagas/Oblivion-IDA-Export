0x9FD4B0: push    0FFFFFFFFh
0x9FD4B2: push    offset SEH_9FD4B0
0x9FD4B7: mov     eax, large fs:0
0x9FD4BD: push    eax
0x9FD4BE: mov     eax, ___security_cookie
0x9FD4C3: xor     eax, esp
0x9FD4C5: push    eax
0x9FD4C6: lea     eax, [esp+10h+var_C]
0x9FD4CA: mov     large fs:0, eax
0x9FD4D0: push    offset unk_B14BA4
0x9FD4D5: mov     ecx, offset INISettingCollection
0x9FD4DA: mov     [esp+14h+var_4], 0
0x9FD4E2: call    SettingCollectionList_AddSetting
0x9FD4E7: push    offset sub_A25550; void (__cdecl *)()
0x9FD4EC: call    _atexit
0x9FD4F1: add     esp, 4
0x9FD4F4: mov     ecx, [esp+10h+var_C]
0x9FD4F8: mov     large fs:0, ecx
0x9FD4FF: pop     ecx
0x9FD500: add     esp, 0Ch
0x9FD503: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C34B0: mov     ecx, offset unk_B14BA4
0x9C34B5: jmp     loc_403BC0
0x9C34BA: mov     edx, [esp+arg_4]
0x9C34BE: lea     eax, [edx]
0x9C34C0: mov     ecx, [edx-4]
0x9C34C3: xor     ecx, eax
0x9C34C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C34CA: mov     eax, offset stru_AEC0B0
0x9C34CF: jmp     ___CxxFrameHandler3
