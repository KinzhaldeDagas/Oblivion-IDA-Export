0x9FE7B0: push    0FFFFFFFFh
0x9FE7B2: push    offset SEH_9FE7B0
0x9FE7B7: mov     eax, large fs:0
0x9FE7BD: push    eax
0x9FE7BE: mov     eax, ___security_cookie
0x9FE7C3: xor     eax, esp
0x9FE7C5: push    eax
0x9FE7C6: lea     eax, [esp+10h+var_C]
0x9FE7CA: mov     large fs:0, eax
0x9FE7D0: push    offset byte_B15800
0x9FE7D5: mov     ecx, offset INISettingCollection
0x9FE7DA: mov     [esp+14h+var_4], 0
0x9FE7E2: call    SettingCollectionList_AddSetting
0x9FE7E7: push    offset sub_A25E40; void (__cdecl *)()
0x9FE7EC: call    _atexit
0x9FE7F1: add     esp, 4
0x9FE7F4: mov     ecx, [esp+10h+var_C]
0x9FE7F8: mov     large fs:0, ecx
0x9FE7FF: pop     ecx
0x9FE800: add     esp, 0Ch
0x9FE803: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9C4E30: mov     ecx, offset byte_B15800
0x9C4E35: jmp     loc_403BC0
0x9C4E3A: mov     edx, [esp+arg_4]
0x9C4E3E: lea     eax, [edx]
0x9C4E40: mov     ecx, [edx-4]
0x9C4E43: xor     ecx, eax
0x9C4E45: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C4E4A: mov     eax, offset stru_AED6D8
0x9C4E4F: jmp     ___CxxFrameHandler3
