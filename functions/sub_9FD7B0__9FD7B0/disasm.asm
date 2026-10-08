0x9FD7B0: push    0FFFFFFFFh
0x9FD7B2: push    offset SEH_9FD7B0
0x9FD7B7: mov     eax, large fs:0
0x9FD7BD: push    eax
0x9FD7BE: mov     eax, ___security_cookie
0x9FD7C3: xor     eax, esp
0x9FD7C5: push    eax
0x9FD7C6: lea     eax, [esp+10h+var_C]
0x9FD7CA: mov     large fs:0, eax
0x9FD7D0: push    offset flt_B14CC4
0x9FD7D5: mov     ecx, offset INISettingCollection
0x9FD7DA: mov     [esp+14h+var_4], 0
0x9FD7E2: call    SettingCollectionList_AddSetting
0x9FD7E7: push    offset sub_A256D0; void (__cdecl *)()
0x9FD7EC: call    _atexit
0x9FD7F1: add     esp, 4
0x9FD7F4: mov     ecx, [esp+10h+var_C]
0x9FD7F8: mov     large fs:0, ecx
0x9FD7FF: pop     ecx
0x9FD800: add     esp, 0Ch
0x9FD803: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C3830: mov     ecx, offset flt_B14CC4
0x9C3835: jmp     loc_403BC0
0x9C383A: mov     edx, [esp+arg_4]
0x9C383E: lea     eax, [edx]
0x9C3840: mov     ecx, [edx-4]
0x9C3843: xor     ecx, eax
0x9C3845: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C384A: mov     eax, offset stru_AEC3C0
0x9C384F: jmp     ___CxxFrameHandler3
