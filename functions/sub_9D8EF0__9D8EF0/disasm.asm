0x9D8EF0: push    0FFFFFFFFh
0x9D8EF2: push    offset SEH_9D8EF0
0x9D8EF7: mov     eax, large fs:0
0x9D8EFD: push    eax
0x9D8EFE: mov     eax, ___security_cookie
0x9D8F03: xor     eax, esp
0x9D8F05: push    eax
0x9D8F06: lea     eax, [esp+10h+var_C]
0x9D8F0A: mov     large fs:0, eax
0x9D8F10: push    offset flt_B02D98
0x9D8F15: mov     ecx, offset INISettingCollection
0x9D8F1A: mov     [esp+14h+var_4], 0
0x9D8F22: call    SettingCollectionList_AddSetting
0x9D8F27: push    offset sub_A16D30; void (__cdecl *)()
0x9D8F2C: call    _atexit
0x9D8F31: add     esp, 4
0x9D8F34: mov     ecx, [esp+10h+var_C]
0x9D8F38: mov     large fs:0, ecx
0x9D8F3F: pop     ecx
0x9D8F40: add     esp, 0Ch
0x9D8F43: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA7B0: mov     ecx, offset flt_B02D98
0x9AA7B5: jmp     loc_403BC0
0x9AA7BA: mov     edx, [esp+arg_4]
0x9AA7BE: lea     eax, [edx]
0x9AA7C0: mov     ecx, [edx-4]
0x9AA7C3: xor     ecx, eax
0x9AA7C5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA7CA: mov     eax, offset stru_AD7750
0x9AA7CF: jmp     ___CxxFrameHandler3
