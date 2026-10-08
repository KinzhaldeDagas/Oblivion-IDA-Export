0x9FB460: push    0FFFFFFFFh
0x9FB462: push    offset SEH_9FB460
0x9FB467: mov     eax, large fs:0
0x9FB46D: push    eax
0x9FB46E: mov     eax, ___security_cookie
0x9FB473: xor     eax, esp
0x9FB475: push    eax
0x9FB476: lea     eax, [esp+10h+var_C]
0x9FB47A: mov     large fs:0, eax
0x9FB480: push    offset flt_B135B0
0x9FB485: mov     ecx, offset INISettingCollection
0x9FB48A: mov     [esp+14h+var_4], 0
0x9FB492: call    SettingCollectionList_AddSetting
0x9FB497: push    offset sub_A24670; void (__cdecl *)()
0x9FB49C: call    _atexit
0x9FB4A1: add     esp, 4
0x9FB4A4: mov     ecx, [esp+10h+var_C]
0x9FB4A8: mov     large fs:0, ecx
0x9FB4AF: pop     ecx
0x9FB4B0: add     esp, 0Ch
0x9FB4B3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BEE80: mov     ecx, offset flt_B135B0
0x9BEE85: jmp     loc_403BC0
0x9BEE8A: mov     edx, [esp+arg_4]
0x9BEE8E: lea     eax, [edx]
0x9BEE90: mov     ecx, [edx-4]
0x9BEE93: xor     ecx, eax
0x9BEE95: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BEE9A: mov     eax, offset stru_AE84E0
0x9BEE9F: jmp     ___CxxFrameHandler3
